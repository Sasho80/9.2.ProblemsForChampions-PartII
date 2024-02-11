01.Problem: Passion Shopping Days
Lina has a real shopping passion. When she has some money, she immediately goes to the closest 
shopping center (mall) and tries to spend as much as she can on clothes, bags and shoes. But her 
favorite thing are winter sales. Our task is to analyze her strange behavior and calculate the purchases
that Lina does when she enters the mall, as well as the money she has left when the shopping is over.
All prices and money are in BGN (Bulgarian levs, lv).
The first line of the input will pass the amount that Lina has before she starts shopping. After that, 
upon reading the "mall.Enter" command, Lina enters the mall and starts shopping until the 
"mall.Exit" command is given. When Lina starts shopping, on each line of the input you will be given 
strings that are actions performed by Lina. Each symbol in the string is a purchase or another action. 
String commands contain only symbols of the ASCII table. The ASCII code of each sign is related to 
what Lina must pay for each of the goods. You need to interpret the symbols in the following way:
• If the symbol is a capital letter, Lina gets a 50% discount, which means that you must decrease 
the money she has by 50% of the numeric representation of the symbol from the ASCII table.
• If the symbol is a small letter, Lina gets a 70% discount, which means that you must decrease 
the money she has by 30% of the numeric representation of the symbol from the ASCII table.
• If the symbol is "%", Lina makes a purchase that decreases her money in half.
• If the symbol is "*", Lina withdraws money from her debit card and adds 10 lv. to her available 
funds.
• If the symbol is different from all of the aforementioned, Lina just makes a purchase without 
discount, and in this case you should simply subtract the value of the symbol from the ASCII 
table from her available funds.
If a certain value of her purchases is higher than her current available funds, Lina DOES NOT make 
the purchase. Lina's funds cannot be less than 0.
The shopping ends when the "mall.Exit" command is given. When this happens, you need to print 
the number of purchases made and the money that Lina has left.
Input Data
The input data must be read from the console. The first line of the input will indicate the amount that 
Lina has before starting to purchase. On each of the following lines there will be a particular command. 
After you read the command "mall.Enter", on each of the following lines you will be given strings 
holding information regarding the purchases / actions that Lina wants to perform. These strings will 
keep being passed, until the "mall.Exit" command is given.
Always only one "mall.Enter" command will be given, as well as only one "mall.Exit" command.
350 Programming Basics with C#
Output Data
The output data must be printed on the console. When shopping is over, you must print on the 
console a particular output depending on what purchases have been made.
• If no purchases have been made – "No purchases. Money left: {remaining funds} lv."
• If at least one purchase is made – "{number of purchases} purchases. Money left: {remaining 
funds} lv."
The funds must be printed with accuracy of up to 2 symbols after the decimal point.
Constraints
• Money is a float number within the range: [0 - 7.9 x 1028].
• The count of strings between "mall.Enter" and "mall.Exit" will be within the range: [1-20].
• The count of symbols in each string that represents a command will be within the range: [1-20].
• Allowed execution time: 0.1 seconds.
• Allowed memory: 16 MB.
Sample Input and Output
![image](https://github.com/Sasho80/9.2.ProblemsForChampions-PartII/assets/7139995/efb24cde-4572-472a-bec5-8e83e97e52ef)

02.Problem: Numerical Expression
Bonny is an exceptionally powerful witch. As her natural power is not sufficient to successfully fight 
vampires and werewolves, she has started to master the power of Expressions. An expression is very 
hard to master, because the spell relies on the ability to quickly solve mathematical expressions.
In order to use an "Expression spell", the witch must know the result of a mathematical expression in 
advance. An Expression spell consists of a few simple mathematical expressions. Each mathematical 
expression can contain operators for summing up, subtraction, multiplying and/or division.
The expression is solved without considering the mathematical rules for calculating numerical 
expressions. This means that the priority is applied according to the sequence of the operators, and 
not the type of calculation that they do. The expression can contain brackets, as everything inside the 
brackets is calculated first. Every expression can contain multiple brackets, but no nested brackets:
• An expression containing (…(…)…) is an invalid one.
• An expression containing (…)…(…) is a valid one.
Example
![image](https://github.com/Sasho80/9.2.ProblemsForChampions-PartII/assets/7139995/68dcccd0-ec33-478b-b434-aa305d90e604)
Bonny is very pretty, but not as wise, so she will need our help to master the power of Expressions.
Input Data
The input data consists of a single text line, passed from the console. It contains a mathematical 
expression for calculation. The line always ends with the "=" symbol. The "=" symbol means end of 
the mathematical expression.
The input data is always valid and always in the described format. No need to validate it.
Output Data
The output data must be printed on the console. The output consists of one line: the result of the
calculated mathematical expression, rounded up to the second digit after the decimal point.
Constraints
• The expressions will consist of maximum 2500 symbols.
• The numbers of each mathematical expression will be within the range [1 … 9].
• The operators in the mathematical expressions will always be among + (summing up), -
(subtraction), / (division) or * (multiplying).
• The result of the mathematical expression will be within the range [-100000.00 … 100000.00].
• Allowed execution time: 0.1 seconds.
• Allowed memory: 16 MB.
Sample Input and Output
![image](https://github.com/Sasho80/9.2.ProblemsForChampions-PartII/assets/7139995/80ec3f57-64fa-431e-add0-289d45291db6)

03.Problem: Bulls and Cows
We all know the game called "Bulls and Cows": http://en.wikipedia.org/wiki/Bulls_and_cows. Upon 
having a particular 4-digit secret number and a 4-digit suggested number, the following rules are 
applied:
• If a digit in the suggested number matches a digit in the secret number and is located at the
same position, we have a bull.
• If a digit in the suggested number matches a digit in the secret number, but is located at a
different position, we have a cow.
![image](https://github.com/Sasho80/9.2.ProblemsForChampions-PartII/assets/7139995/7a5d80b6-f674-4c02-9b81-47f8bc1466a1)
Upon having a particular secret number and the bulls and cows pertaining to it, our task is to find all 
possible suggested numbers in ascending order.
If there are no suggested numbers that match the provided criteria provided, we must print "No".
Input Data
The input data is read from the console. The input consists of 3 text lines:
• The first line contains the secret number.
• The second line contains the number of bulls.
• The third line contains the number of cows.
The input data will always be valid. There is no need to verify them.
Output Data
The output data must be printed on the console. The output must consist of a single line, holding all 
suggested numbers, space separated. If there are no suggested numbers that match the criteria 
provided from the console, we must print “No”.
Constraints
• The secret number will always consist of 4 digits in the range [1..9].
• The number of cows and bulls will always be in the range [0..9].
• Allowed execution time: 0.15 seconds.
• Allowed memory: 16 MB.
Sample Input and Output
![image](https://github.com/Sasho80/9.2.ProblemsForChampions-PartII/assets/7139995/15d8a73b-0904-4583-9a58-da61a14f3c23)
