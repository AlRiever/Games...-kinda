#include <iostream>
#include <string>

const int numitems = 5;  //Number of items available in the shop
const std::string shopitems[numitems] = {"Armour", "Sword", "Horse", "Meds", "Food"}; //All the Shop Iteams available
char buy, sure, viewInv, agreedToBuy;

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
			std::cout << inventory[i] << " x " << shopitems[i] << std::endl;
		}
	}

	std::cout << "\nWould you like to purchase anything from the shop? (y/n)\n";
	std::cin >> buy;

	if (buy == 'y') {
		std::cout << "Input the serial number of the iteam you would like to purchase.\n";
		std::cin >> itemNo;  //if buy == 'y' then, user inputs the serial number of the item they want to buy
		itemNo -= 1;

		std::cout << "Are you sure you want to purchase " << shopitems[itemNo] << " (y/n)" << std::endl;
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
	else {
		std::cout << "Welp thats okay i guess, See you soon adventurer\n";
	}

	if (bought == 1) {
		std::cout << "would you like to view your inventory? (y/n)\n";
		std::cin >> viewInv;

		for (int i = 0; i < numitems; i += 1) {
			if (inventory[i] > 0) {
				std::cout << inventory[i] << " x " << shopitems[i] << std::endl;
			}
		}
	}
	system("PAUSE");
	return 0;
}