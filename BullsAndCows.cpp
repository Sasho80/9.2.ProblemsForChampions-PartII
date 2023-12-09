#include <iostream>
using namespace std;
int main() {
	int guessNumber;
	cin>> guessNumber;
	int targetBulls;
	cin >> targetBulls;
	int targetCows;
	cin >> targetCows;
	bool solutionFound = false;
	for (int digit1  = 1;  digit1<=9; digit1++){
		for (int digit2 = 1; digit2 <=9; digit2++) {
			for (int digit3 = 1; digit3 <=9; digit3++) {
				for (int digit4 = 1; digit4 <=9; digit4++) {
					int digitToCheck1 = digit1;
					int digitToCheck2 = digit2;
					int digitToCheck3 = digit3;
					int digitToCheck4 = digit4;
					int guessDigit1 = (guessNumber / 1000) % 10;
					int guessDigit2 = (guessNumber / 100) % 10;
					int guessDigit3 = (guessNumber / 10) % 10;
					int guessDigit4 = (guessNumber / 1) % 10;
					int currentBulls = 0;
					int currentCows = 0;
					//Found all bulls, count them and remove  them(assign -1 and -2)
					if (digitToCheck1 ==guessDigit1) {
						//Bull at position #1 found-> count it and remove it
						currentBulls++;
						guessDigit1 = -1;
						digitToCheck1 = -2;
					}
					if (digitToCheck2 ==guessDigit2) {
						currentBulls++;
						guessDigit2 = -1;
						digitToCheck2 = -2;
					}
					if (digitToCheck3 ==guessDigit3) {
						currentBulls++;
						guessDigit3 = -1;
						digitToCheck3 = -2;
					}
					if (digitToCheck4 ==guessDigit4) {
						currentBulls++;
						guessDigit4 = -1;
						digitToCheck4 = -2;
					}
					//Found all cows for digitToCheck1, count them and remove  them(assign -1)
					if (digitToCheck1 ==guessDigit2) {
						//Cow at position #2 found-> count it and remove it
						currentCows++;
						guessDigit2 = -1;
					}
					 else if (digitToCheck1 ==guessDigit3) {
						//Cow at position #3 found-> count it and remove it
						currentCows++;
						guessDigit3 = -1;
					}
					else if (digitToCheck1 ==guessDigit4) {
						//Cow at position #4 found-> count it and remove it
						currentCows++;
						guessDigit4 = -1;
					}
					//Found all cows for digitToCheck2, count them and remove  them(assign -1)
					if (digitToCheck2 ==guessDigit1) {
						//Cow at position #1 found-> count it and remove it
						currentCows++;
						guessDigit1 = -1;
					}
					else if (digitToCheck2 ==guessDigit3) {
						//Cow at position #3 found-> count it and remove it
						currentCows++;
						guessDigit3 = -1;
					}
					 else if (digitToCheck2 ==guessDigit4) {
						//Cow at position #4 found-> count it and remove it
						currentCows++;
						guessDigit4 = -1;
					}
					//Found all cows for digitToCheck3, count them and remove  them(assign -1)
					if (digitToCheck3 ==guessDigit1) {
						//Cow at position #1 found-> count it and remove it
						currentCows++;
						guessDigit1 = -1;
					}
					 else if (digitToCheck3 ==guessDigit2) {
						//Cow at position #2 found-> count it and remove it
						currentCows++;
						guessDigit2 = -1;
					}
					 else if (digitToCheck3 ==guessDigit4) {
						//Cow at position #4 found-> count it and remove it
						currentCows++;
						guessDigit4 = -1;
					}
					//Found all cows for digitToCheck4, count them and remove  them(assign -1)
					if (digitToCheck4 ==guessDigit1) {
						//Cow at position #1 found-> count it and remove it
						currentCows++;
						guessDigit1 = -1;
					}
					else  if (digitToCheck4 ==guessDigit2) {
						//Cow at position #2 found-> count it and remove it
						currentCows++;
						guessDigit2 = -1;
					}
					 else if (digitToCheck4 ==guessDigit3) {
						//Cow at position #4 found-> count it and remove it
						currentCows++;
						guessDigit3 = -1;
					}
					if (currentBulls == targetBulls && currentCows == targetCows) {
						if (solutionFound) {
							cout << " ";
						}
						cout << digit1 << digit2 << digit3 << digit4;
						solutionFound = true;
					}
				}
			}
		}
	}
	if (!solutionFound) {
		cout << "No" << endl;
	}
	return 0;
}