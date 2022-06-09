// This is a much more improved version of my previous program itemshop.cpp
// Here, i added some new features like an amount of 12500 money to buy the items, 15 number of items in 3 different categories armoury, artilery and health.
// And the best part is that the player can now buy items one buy one as many times they want and not just one item like in my previous itemshop.cpp program
// Also i had to remove the player inventory feature, because i need to work on that a little more for it to work properly.
// Anyways here is the code, hope you find it useful

#include <iostream>
#include <string>

const int numitems = 5;
const std::string Armour[numitems] = { "1. Helmet (2000)", "2. Chestplate (2500)", "3. Leggings (1600)", "4. Boots (1250)", "5. Horse Armour (4800)" };
const std::string ArmourView[numitems] = { "Helmet", "Chestplate", "Leggings", "Boots", "Horse Armour" };
const std::string Weapons[numitems] = { "1. Fullsize Sword (3200)", "2. Halfcut Sword (2750)", "3. Fullsize Shield (3800)", "4. Small Shield (2400)", "5. Assassin's Blade (3550)" };
const std::string WeaponView[numitems] = { "Fullsize Sword", "Halfcut Sword", "Fullsize Shield", "Small Shield", "Assassin's Blade" };
const std::string Health[numitems] = { "1. Health Potion (350)", "2. Bandages (100)", "3. Medium-Rare Steak (1200)", "4. Pork (950)", "5. Fried Chicken (900)" };
const std::string HealthView[numitems] = { "Health Potion", "Bandages", "Medium-Rare Steak", "Pork", "Fried Chicken" };
const std::string shopitems[numitems] = { "1. Armoury", "2. Artilery", "3. Health" };
char buy, sure, viewInv, agreedToBuy, bother, useful, last_buy;
int itemNo_ForArray = 0, itemNo = 0, bought = 0, money = 12500, category = 0, no_more_money = 0;

int main() {
	std::cout << "***Welcome to the Shop***\n\n";
	std::cout << "\nWe've got you some categories of stuffs to purchase. Take a look.\n\n";

	for (int i = 0; i < 3; i += 1) {
		std::cout << shopitems[i] << std::endl;
	}
	std::cout << "\n*************************\n";
	std::cout << "\nYou currently have 12500 amount of money. Make sure you spend it for the right thing.\n";

	while (true) {
		std::cout << "So, what category would you like to view?\n";
		std::cin >> category;

		if (category == 1) {
			for (int i = 0; i < numitems; i += 1) {
				std::cout << Armour[i] << std::endl;
			}
			std::cout << "\nFound anything useful? Would you like to purchase something? (y/n)\n";
			std::cin >> useful;

			if (useful == 'y') {
				std::cout << "Input the serial number of the item you would like to purchase.\n";
				std::cin >> itemNo;
				itemNo_ForArray = itemNo - 1;

				if (itemNo == 1) {
					money -= 2000;
				}
				if (itemNo == 2) {
					money -= 2500;
				}
				if (itemNo == 3) {
					money -= 1600;
				}
				if (itemNo == 4) {
					money -= 1250;
				}
				if (itemNo == 5) {
					money -= 4800;
				}
				if (itemNo > 5) {
					std::cout << "Sorry to say but looks like you dont seem to have enough money for this purchase.\n";
					no_more_money = 1;
				}
			}

			if (useful == 'n') {
				break;
			}

			std::cout << "Are you sure you want to purchase " << ArmourView[itemNo_ForArray] << " (y/n)" << std::endl;
			std::cin >> sure;

			if (sure == 'y') {
				std::cout << "Thank you for your purchase.\n";
				std::cout << "You have " << money << " amount of money left.\n";
				bought = 1;
			}

			if (sure == 'n') {
				std::cout << "Bother to buy something else? (y/n)\n";
				std::cin >> bother;
			}
			if (bother == 'y') {
				continue;
			}
			if (bother == 'n') {
				std::cout << "Thank you for visiting our shop. Good luck for your adventure.\n";
			}
			category = 0;
		}

		if (category == 2) {
			for (int i = 0; i < numitems; i += 1) {
				std::cout << Weapons[i] << std::endl;
			}
			std::cout << "\nFound anything useful? Would you like to purchase something? (y/n)\n";
			std::cin >> useful;

			if (useful == 'y') {
				std::cout << "Input the serial number of the iteam you would like to purchase.\n";
				std::cin >> itemNo;
				itemNo_ForArray = itemNo - 1;

				if (itemNo == 1) {
					money -= 3200;
				}
				if (itemNo == 2) {
					money -= 2750;
				}
				if (itemNo == 3) {
					money -= 3800;
				}
				if (itemNo == 4) {
					money -= 2400;
				}
				if (itemNo == 5) {
					money -= 3550;
				}
				if (itemNo > 5) {
					std::cout << "Sorry to say but looks like you dont seem to have enough money for this purchase.\n";
					no_more_money = 1;
				}
			}
			if (useful == 'n') {
				break;
			}


			std::cout << "Are you sure you want to purchase " << WeaponView[itemNo_ForArray] << " (y/n)" << std::endl;
			std::cin >> sure;

			if (sure == 'y') {
				std::cout << "Thank you for your purchase.\n";
				std::cout << "You have " << money << " amount of money left.\n";
				bought = 1;
			}

			if (sure == 'n') {
				std::cout << "Bother to buy something else? (y/n)\n";
				std::cin >> bother;
			}

			if (bother == 'y') {
				continue;
			}
			if (bother == 'n') {
				std::cout << "Thank you for visiting our shop. Good luck for your adventure.\n";
			}
			category = 0;
		}

		if (category == 3) {
			for (int i = 0; i < numitems; i += 1) {
				std::cout << Health[i] << std::endl;
			}
			std::cout << "\nFound anything useful? Would you like to purchase something? (y/n)\n";
			std::cin >> useful;

			if (useful == 'y') {
				std::cout << "Input the serial number of the iteam you would like to purchase.\n";
				std::cin >> itemNo;
				itemNo_ForArray = itemNo - 1;

				if (itemNo == 1) {
					money -= 350;
				}
				if (itemNo == 2) {
					money -= 100;
				}
				if (itemNo == 3) {
					money -= 1200;
				}
				if (itemNo == 4) {
					money -= 950;
				}
				if (itemNo == 5) {
					money -= 900;
				}
				if (itemNo > 5) {
					std::cout << "Sorry to say but looks like you dont seem to have enough money for this purchase.\n";
					no_more_money = 1;
				}
			}
			if (useful == 'n') {
				break;
			}

			std::cout << "Are you sure you want to purchase " << HealthView[itemNo_ForArray] << " (y/n)" << std::endl;
			std::cin >> sure;

			if (sure == 'y') {
				std::cout << "Thank you for your purchase.\n";
				std::cout << "You have " << money << " amount of money left.\n";
				bought = 1;
			}

			if (sure == 'n') {
				std::cout << "Bother to buy something else? (y/n)\n";
				std::cin >> bother;
			}

			if (bother == 'y') {
				continue;
			}
			if (bother == 'n') {
				std::cout << "Thank you for visiting our shop. Good luck for your adventure.\n";
			}
			category = 0;
		}

		if (bought == 1) {
			std::cout << "\nGot to buy any other stuffs? (y/n)\n";
			std::cin >> last_buy;
			if (last_buy == 'y') {
				continue;
			}
			if (last_buy == 'n') {
				break;
			}
		}
		bought = 0;
	}
		std::cout << "\nAlright buddy, Good luck for your adventure.\n";
		system("PAUSE");
		return 0;
}
