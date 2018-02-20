#include <iostream>
#include <string>
#include <cmath>

using namespace std;

float stringToFloat(string calUserInput) {
	int i, j, k;
	int dec = 0;
	float decMover = 0;
	float calRes = 0;
	string str = "";
	string finalString = "";
	for(i = 0; i < calUserInput.length(); i++) {
		if(calUserInput[i] != 46) {
			calRes = calRes * 10;
			calRes += (calUserInput[i]) - 48;
		}
		else if(calUserInput[i] == 46) {
			dec = calUserInput.length() - i - 1;
		}
	}
	for(j = 0; j < dec; j++) {
		str = "0";
	}
	finalString = "1" + str;
	for(k = 0; k < finalString.length(); k++) {
		decMover = decMover * 10;
		decMover += (finalString[k]) - 48;
	}
	calRes = calRes / decMover;
	return calRes;
}

string userInputCal() {
	string calUserInput = "";
	string operatorString = "";
	cout << "Enter an equation: ";
	getline(cin, calUserInput);
	for(int i = 0; i < calUserInput.length(); i++) {
		if((calUserInput[i] > 47)and(calUserInput[i] < 58)) {
			//finput = userInput[i];
			//return finput;
			//stringToFloat(finput);
		}
		else {
			operatorString = calUserInput[i];
		}
	}
	return calUserInput;
}


float standCalc(float calRes) {
	float finalres = 0;
	finalres = calRes + 2;
	return finalres;
	//cout << "res"  << finalres << endl;
}

string binToDecInput() {
	string binUserInput = "";
	cout << "Please enter a binary number: " << endl;
	getline(cin, binUserInput);
	for(int i = 0; i < binUserInput.length(); i++) {
		if((binUserInput[i] == 48)||(binUserInput[i] == 49)) {
		}
		else
			return binToDecInput();
	}
	return binUserInput;
}

int stringToInt(string binUserInput) {
	int binRes = 0;
	for(int i = 0; i < binUserInput.length(); i++) {
		binRes = binRes * 10;
		binRes += int(binUserInput[i]) - 48;
	}
	return binRes;
}

int binToDec(int binRes) {
	int i;
	int dec = 0;
	int rem;
	int base = 1;
	while(binRes > 0) {
		rem = binRes % 10;
		dec = dec + rem * base;
		base = base * 2;
		binRes = binRes / 10;
	}
	cout << dec << endl;
}

string decToBinInput() {
	string decUserInput = "";
	cout << "Please enter a dec that you would like to turn into binary: " << endl;
	getline(cin, decUserInput);
	for(int i = 0; i < decUserInput.length(); i++) {
		if((decUserInput[i] > 47)and(decUserInput[i] < 58)) {
		}
		else {
			return decToBinInput();
		}
	return decUserInput;
	}
}

int decToBin(int n) {
	if(n > 1) {
		decToBin(n/2);
	}
	cout << n%2;
}

int decToBinMain(string decUserInput) {
	int i = 0;
	while(i < 1) {
		int decRes = stringToInt(decUserInput);
		if(decRes >= 0) {
			i++;
			decToBin(decRes);
			cout << endl;
		}
		else if(decRes < 0) {
			string decUserInput = "";
			cout << "Please try again with a positive number: ";
			getline(cin, decUserInput);
		}
	}
}

string gradeInput() {
	string gradeUserInput = "";
	cout << "How many grades would you like to calculate?: ";
	getline(cin, gradeUserInput);
	for(int i = 0; i < gradeUserInput.length(); i++) {
		if((gradeUserInput[i] > 47)and(gradeUserInput[i] < 58)) {
		}
		else {
			return gradeInput();
		}
	return gradeUserInput;
	}
}

void gradePercent(string gradeUserInput) {
	float floatPercent = 0;
	float grade = 0;
	int intGradeInput = stringToInt(gradeUserInput);
	for(int i = 0; i < intGradeInput; i++) {
		string percent = "";
		cout << "Please enter the precent you got in the class: ";
		getline(cin, percent);
		float floatPercent = stringToFloat(percent);
		grade = grade + floatPercent;
	}
	cout << grade << endl;
}
	
main() { 
	int choice = 0;
	cout << "Enter 1 for Standard Calculator, 2 for Bin to Dec, 3 for Dec to Bin, and 4 for Grade Calculator: ";
	cin >> choice;
	if(choice == 1) {
		string program = "";
		string calUserInput = userInputCal();
		float calRes = stringToFloat(calUserInput); 
		float finalres = standCalc(calRes);
		cout << finalres << endl;
	}
	else if(choice == 2) {
		string binUserInput = "";
		binUserInput = binToDecInput();
		int binRes = stringToInt(binUserInput);
		binToDec(binRes);
	}
	else if(choice == 3) {
		string decUserInput = decToBinInput();
		decToBinMain(decUserInput);
		string gradeUserInput = gradeInput();
	}
	else if(choice == 4) {
		string gradeUserInput = gradeInput();
		gradePercent(gradeUserInput);
	}
	else {
		cout << "Not a valid input, please try a different number" << endl;
		return main();
	}
	return 0;
}
