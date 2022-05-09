// This is my very first program related to video games that i just made
// I am still in a learning phase of Game Programming so i might be a little weird in some codes

#include <iostream>
#include <ctime>
#include <random>

int gethumans() {
	int humans;
	std::cout << "Enter no. of humans: ";
	std::cin >> humans;
	return humans;
}

int getskeletons() {
	int skeletons;
	std::cout << "Enter no. of skeletons: ";
	std::cin >> skeletons;
	return skeletons;
}

int main() {

	std::default_random_engine RandomEngine(time(NULL));   //random number generator
	std::uniform_real_distribution<float> attack(0.0f, 0.6f);   //generates a number between 0.0f to 0.6f

	int humans, skeletons, starthumans, startskeletons;
	char turn = 'h';   //to make sure humans always start the fight
	std::cout << "=======================================\n";
	std::cout << "          HUMANS VS SKELETONS          \n";
	std::cout << "=======================================\n\n\n";
	humans = gethumans();
	starthumans = humans;   //stores the no.of humans in the human army 
	skeletons = getskeletons();
	startskeletons = skeletons;   //stores the no.of skeletons in the skeleton army
	std::cout << "\nBattle begins---------\n\n";

	//human and skeleton details
	float humanattack = 0.6f, humanhealth = 250.0f, humandamage = 200.0f;
	float skeletonattack = 0.2f, skeletonhealth = 50.0f, skeletondamage = 40.0f;
	float currentHumanHealth = humanhealth;
	float currentSkeletonHealth = skeletonhealth;

	while ((humans > 0) && (skeletons > 0)) {   //making sure each army has atleast 1 or more fighters
		float attackresults = attack(RandomEngine);   //randomly generates a number between 0.0f to 1.0f
		if (turn == 'h') {   //sice this is the first loop, human will always start the fight
			if (attackresults <= humanattack) {   //if the attackresults are less than or equal to 0.6f
				currentSkeletonHealth -= humandamage; //first skeleton hp reduced by 200.0f
				if (currentSkeletonHealth < 0) {   //what if that damage kills a skeleton i.e. less than 0hp 
					--skeletons;   //1 no. of skeleton gets reduced from the skeleton army
					currentSkeletonHealth = skeletonhealth;   //the next skeleton in the queue approaches
				}
			}
			turn = 's';   //now its set to skeleton's turn i.e. (turn != 'h')
		}
		else {
			if (attackresults <= skeletonattack) {   //if the attackresults are less than or equal to 0.2f
				currentHumanHealth -= skeletondamage;   //human hp reduced by 50
				if (currentHumanHealth < 0) {
					--humans;
					currentHumanHealth = humanhealth;
				}
			}
			turn = 'h';   //now its set to human's turn i.e. (turn != 's')
		}
	}
	std::cout << "\nBattle Ends---------\n\n";
	int endhumans = starthumans - humans;
	int endskeletons = startskeletons - skeletons;

	if (humans > 0) {
		std::cout << "HUMANS WON!!\n\n";
		std::cout << "Only " << humans << " survivors.\n";
		std::cout << "also " << endskeletons << " skeletons and " << endhumans << " humans LMAO ded in the battle.\n";
	}
	if (skeletons > 0) {
		std::cout << "SKELETONS WON!!\n\n";
		std::cout << "Only" << skeletons << "survivors.\n";
		std::cout << "also " << endhumans << " humans and " << endskeletons << " skeletons LMAO ded in the battle.\n";
	}
	system("PAUSE");
	return 0;
}
