#include <iostream>
#include <vector>

using namespace std;

class Customer {
private:
	string name, city, product;
	int process;
	vector<string> orderedItems;
public:
	int islem;
	void setName() {
		std::cout << "What is your name?" << endl;
		std::cin >> name;
	}
	void setCity() {
		std::cout << "Where do you live in?" << endl;
		std::cin >> city;
	}
	void setProcess() {
		std::cout << "What do you want to do?" << endl;
		islem = process;
	}
	void HelloScreen() {
		cout << "Welcome to the our page" << " " << name << "(Location:"<< city << ")" << endl;
	}
	void addItem(string item) {
		orderedItems.push_back(item);
	}
	void deleteItem(string item) {
		for (int i = 0; i < orderedItems.size(); i++) {
			if (orderedItems[i] == item) {
				orderedItems.erase(orderedItems.begin() + i);
				cout << item << " has been removed from your ordered items." << endl;
				return;
			}
		}
		cout << "Item not found in your ordered items." << endl;
	}

	void displayOrderedItems() {
		if (orderedItems.empty()) {
			cout << "You haven't ordered any items yet." << endl;
		}
		else {
			cout << "Your ordered items:" << endl;
			for (int i = 0; i < orderedItems.size(); i++) {
				cout << i + 1 << ". " << orderedItems[i] << endl;
				cout << endl;
			}
		}
	}
};


void clearScreen() {
	// Cleaning the terminal
	std::cout << "\033[2J\033[1;1H";
}

void returnToMainMenu() {
	clearScreen();
	cout << "Return to main menu..." << endl;
}

int main() {
	
	Customer customer;
	customer.setName();
	customer.setCity();
	clearScreen();
	customer.HelloScreen();
	customer.setProcess();

	while (true) {
		cout << "1.View the items\n2.Order\n3.Order Cancellation\n4.View Ordered Items\n5.Main Menu" << endl;
		cin >> customer.islem;

		if (customer.islem == 1) {
			clearScreen();
			cout << "We have these product:\n1.T-Shirt\n2.Jean\n3.Sneakers\n4.Socks\n" << endl;
		}
		else if (customer.islem == 2) {
			clearScreen();
			cout << "Please select the what do you want?\n1.T-Shirt\n2.Jean\n3.Sneakers\n4.Socks" << endl;
			int selection;
			cin >> selection;

			switch (selection) {
			case 1:
				customer.addItem("T-Shirt");
				break;
			case 2:
				customer.addItem("Jean");
				break;
			case 3:
				customer.addItem("Sneakers");
				break;
			case 4:
				customer.addItem("Socks");
				break;
			default:
				cout << "Invalid selection." << endl;
				break;
			}
			cout << "\nYour order is successfully completed.\n" << endl;
		}
		else if (customer.islem == 3) {
		
			clearScreen();
			cout << "Please enter the item you want to cancel: ";
			string item;
			cin >> item;
			customer.deleteItem(item);
			cout << endl;
		}

		
		else if (customer.islem == 4) {
			clearScreen();
			customer.displayOrderedItems();
		}
		else if (customer.islem == 5) {
			returnToMainMenu();
		}
		else {
			break;
		}
		
	}
	return 0;
}