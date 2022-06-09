//  These programs are just for me to practice the small aspects of a video game
//  If usefull for you, you are always welcomed to use my codes


#include <iostream>
#include <string>

const int numitems = 5;  //Number of items available in the shop
const std::string shopitems[numitems] = {"1. Armour", "2. Sword", "3. Horse", "4. Meds", "5. Food"}; //All the Shop Iteams available
const std::string shop[numitems] = { "Armour", "Sword", "Horse", "Meds", "Food" };
char buy, sure, viewInv, agreedToBuy, bother;

int main(){
	int itemNo = 0, bought = 0;
	std::cout << "***Welcome to the Shop***\n\n";
	std::cout << "We've got you some amazing stuffs to purchase. Take a look.\n\n";

	for (int i = 0; i < numitems; i += 1) {
		std::cout << shopitems[i] << std::endl;
	 }

	int inventory[numitems] = { 0, 0, 1, 0, 2};
	std::cout << "\n*************************\n\n";

	std::cout << "Your Inventory\n";
	for (int i = 0; i < numitems; i += 1) {  //displays player's current inventory with atleast one number of the item present
		if (inventory[i] > 0) {
			std::cout << inventory[i] << " x " << shop[i] << std::endl;
		}
	}

	while (true) {
		std::cout << "\nWould you like to purchase anything from the shop? (y/n)\n";
		std::cin >> buy;

		if (buy == 'y') {
			std::cout << "Input the serial number of the iteam you would like to purchase.\n";
			std::cin >> itemNo;  //if buy == 'y' then, user inputs the serial number of the item they want to buy
			itemNo -= 1;

			std::cout << "Are you sure you want to purchase " << shop[itemNo] << " (y/n)" << std::endl;
			std::cin >> sure;
		}
		if (buy == 'n') {
			std::cout << "Thank you for visiting our shop. It was a pleasure to meet you.\n";
			std::cout << "Good luck for your journey.\n";  //if buy == 'n' then, program terminates with a goodbye message
		}

		if (sure == 'y') {
			std::cout << "Thank you for your purchase.\n";
			inventory[itemNo] += 1;
			bought = 1;
		}
		if (sure == 'n') {
			std::cout << "Bother, to buy something else? (y/n)\n";
			std::cin >> bother;
		}

		if (bother == 'y') {
			continue;
		}
		if (bother == 'n') {
			std::cout << "Thank you for visiting our shop. Good luck for you mission.\n";
		}
		break;
	}

	if (bought == 1) {
		std::cout << "would you like to view your inventory? (y/n)\n";
		std::cin >> viewInv;

		if (viewInv == 'y') {
			for (int i = 0; i < numitems; i += 1) {
				if (inventory[i] > 0) {
					std::cout << inventory[i] << " x " << shopitems[i] << std::endl;
				}
			}
		}
		else {
			std::cout << "Alright buddy, Good luck for your mission.\n";
		}
	}
	system("PAUSE");
	return 0;
}
// An updated version of this program with some nerw features added is available now, make sure to check out ItemShop_2.cpp
