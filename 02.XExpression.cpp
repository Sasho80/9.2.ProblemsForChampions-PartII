#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
int main() {
	string expression;
	cin >>expression;
	double result=0;
	int symbol=0;
	int expressionOperator = '+';
	int innerOperator = '+';
	double innerResult = 0;
	int innerSymbol = 0;
	cout.setf(ios::fixed);
	cout.precision(2);
	for (int i = 0; i <expression.length(); i++) {
		if ((int)(expression[i] - '0') >= 0 &&
			(int)(expression[i] - '0') <= 9) {
			symbol = (int)(expression[i] - '0');
			switch (expressionOperator) {
			case'+':
				result += (double)symbol;
				symbol = 0;
				break;
			case'-':
				result -= (double)symbol;
				symbol = 0;
				break;
			case'*':
				result *= (double)symbol;
				break;
			case'/':
				result /= (double)symbol;
				symbol = 0;
				break;
			}
		}
		else if (expression[i] == '+' || expression[i] == '-' 
			|| expression[i] == '*'|| expression[i] == '/') {
			expressionOperator = expression[i];
			}
		else if (expression[i] == '=') {
			break;
		  }
		else if (expression[i] == '(') {
			while (expression[i] != ')') {
				i++;
				for (; i < expression.length(); i++) {
					if ((int)(expression[i] - '0') >= 0 &&
						(int)(expression[i] - '0') <= 9) {
						innerSymbol = (int)(expression[i] - '0');
						switch (innerOperator) {
						case'+':
							innerResult += (double)innerSymbol;
							innerSymbol = 0;
							break;
						case'-':
							innerResult -= (double)innerSymbol;
							innerSymbol = 0;
							break;
						case'*':
							innerResult *= (double)innerSymbol;
							innerSymbol = 0;
							break;
						case'/':
							innerResult /= (double)innerSymbol;
							innerSymbol = 0;
							break;
						}
					}
					else if (expression[i] == '+' || expression[i] == '-'
						|| expression[i] == '*' || expression[i] == '/') {
						innerOperator = expression[i];
					}
					else {
						switch (expressionOperator) {
						case'+':
							result += innerResult;
							break;
						case'-':
							result -= innerResult;
							break;
						case'*':
							result *= innerResult;
							break;
						case'/':
							result /= innerResult;
							break;
						}
						innerResult = 0;
						innerOperator = '+';
						break;
					}
				}
			}
		}
	} 
    cout<<result<< endl;
  return 0;
}