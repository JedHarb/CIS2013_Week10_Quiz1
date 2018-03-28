#include<iostream>
#include<cstring>
#include<string> 
using namespace std;

int main() {

	string userInput;
	char i;
	int count = 0;
	char keepAlive = 'y';

	cout << "Please type some input that includes the letter 'b': " << endl;
	getline(cin, userInput);
	for (i = 0; i < userInput.length(); i++) {
		if (userInput[i] == 'b' || userInput[i] == 'B') {
			count++;
			if (count % 2 == 0) {
				cout << "STAND";
			}
			else {
				cout << "SIT";
			}
		}
		else cout << userInput[i];
	}

	cout << endl << " End of program ";
	cin >> keepAlive; //keep the program from closing the window until the user inputs something

return 0;
}