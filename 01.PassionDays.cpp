#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
int main() {
	double shoppingMoney;
	cin>> shoppingMoney;
	string command;
	cin >> command;
	int purchases=0;
	cout.setf(ios::fixed);
	cout.precision(2);
	string action;
	cin >> action;
	int i=0;
	while (command == "mall.Enter") {
		for (; i<action.length();i++ ) {
			if ((action[i] >= 'A') && (action[i] <= 'Z')) {
				double price = 0;
				price=(double)action[i] * 0.5;
				if (shoppingMoney < price) {
					continue;
				}
				else {
					shoppingMoney -= price;
				}
			}
			else if ((action[i] >= 'a') && (action[i] <= 'z')) {
				double price = 0;
				price=(double)action[i] * 0.3;
				if (shoppingMoney < price) {
					continue;
				}
				else {
					shoppingMoney -= price;
				}
			}
			else if (action[i] == '%') {
					shoppingMoney -= shoppingMoney/2;
				}
			else if (action[i] == '*') {
				shoppingMoney += 10;
			}
			else {
				double price = 0;
				price = (double)action[i];
				if (shoppingMoney < price) {
					continue;
				}
				else {
					shoppingMoney -= price;
				}
			}
		}
		if (i == action.length()) {
			purchases++;
			action.clear();
			i = 0;
		 }
		cin >> command;
		 if (command != "mall.Exit") {
			 action=command;
			 command = "mall.Enter";
			continue;
		}
	}
    cout << purchases<<" "<< "purchases."<<" "<< "Money left: "
		 << shoppingMoney<<" lv." << endl;
	return 0;
}
