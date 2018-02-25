#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

const int ARR_LENGTH = 6;

using namespace std;

int stringToInt(string str) {
	int res = 0;
	for(int i = 0; i < str.length(); i++) {
		res = res * 10;
		res += int(str[i]) - 48;
	}
	return res;
}

int roll(int* x) {
	int i = 0;
	while(i < ARR_LENGTH) {
		x[i] = rand() % 6 + 1;
		i++;
	}
}

int searchingRoll(int* x) {
	bool dice = false;
	cout << "-------------------------ROLL 1-------------------------" << endl;
	for(int i = 0; i < ARR_LENGTH; i++) {
		cout << x[i] << endl;
	}
	cout << endl;
	for(int j = 0; j < ARR_LENGTH; j++) { 
		if(x[j] == 1)
			cout << "1: 100 Ponts" << endl;
			dice = true;
		if(x[j] == 5)
			cout << "5: 50 Points" << endl;
			dice = true;
	}
	return dice;
}

int counting1(int* x) {
	int ones = 0;
	for(int i = 0; i < ARR_LENGTH; i++) {
		if(x[i] == 1)
			ones++;
	}
	return ones;
}

int counting5(int* x) {
	int fives = 0;
	for(int i = 0; i < ARR_LENGTH; i++) {
		if(x[i] == 5)
			fives++;
	}
	return fives;
}

int keep(bool dice, int* x, int ones, int fives) {
	cout << endl;
	bool yesDice = false;
	for(int i = 0; i < ARR_LENGTH; i++) {
		if(x[i] == 1) {
			if((dice == true)and(x[i] == 1)and(ones == 1)) {
				cout << "You have rolled " << ones << " 1 this roll" << endl;
				yesDice = true;
			}
			else if((dice == true)and(x[i] == 1)and(ones >= 2)) {
				cout << "You have rolled " << ones << " 1's this rool" << endl;
				yesDice = true;
			}
			break;
		}
	}
	for(int j = 0; j < ARR_LENGTH; j++) {
		if(x[j] == 5) {
			if((dice == true)and(x[j] == 5)and(fives == 1)) {
				cout << "You have rolled " << fives << " 5 this roll" << endl;
				yesDice = true;
			}
			else if((dice == true)and(x[j] == 5)and(fives >= 2)) {
				cout << "You have rolled " << fives << " 5's this roll" << endl;
				yesDice = true;
			}
			break;
		}
	}
	/*for(int k = 0; k < ARR_LENGTH; k++) {
		string rollAgain = "";
		if((x[k] != 5)and(x[k] != 1)and(yesDice == false)) {
			cout << "You did not roll a 1 or a 5. It is now the next players turn" << endl;
			break;
		}
	}*/
	return yesDice;
}

int addScore(int totalOnes, int totalFives) {
	int totalScore = 0;
	totalScore = totalOnes + totalFives;
	return totalScore;
}

int totalOnes(bool yesDice, int ones) {
	int totalOnes = 0;
	if(yesDice == true)
		totalOnes = ones * 100;
	return totalOnes;
}

int totalFives(bool yesDice, int fives) {
	int totalFives = 0;
	if(yesDice == true)
		totalFives = fives * 50;
	return totalFives;
}

string rollAgain(bool yesDice, int ones, int fives) {
	string setAside = "";
	if(yesDice == true) {
		cout << "Would you like to set-aside any 1's or 5's?" << endl;
		cout << "Enter 1 for yes or 2 for no and roll again: ";
		getline(cin, setAside);
		return setAside;
	}
	else {
		cout << "You did not roll a 1 or a 5. It is now the next players turn" << endl;
	}
}	

int whatDiceSide(string setAside) {
	string diceSide = "";
	if(setAside == "1") {
		cout << "Which dice would you like to set-aside? Enter either a 1 or a 5 to chose the dice: ";
		getline(cin, diceSide);
	}
	int intDiceSide = stringToInt(diceSide);
	return intDiceSide;
}

int whatDiceAmount(string setAside) {
	string diceAmount = "";
	if(setAside == "1") {
		cout << "Enter the amount that you would like to set-aside: ";
		getline(cin, diceAmount);
	}
	int intDiceAmount = stringToInt(diceAmount);
	return intDiceAmount;
}

string setAsideWhat(string setAside, int ones, int fives, int totalScore, int totalOnes, int totalFives, bool yesDice) {
	int intDiceSide = whatDiceSide(setAside);
	int intDiceAmount = whatDiceAmount(setAside);
	if(intDiceSide == 1) {
		if(intDiceAmount <= ones) {
			totalOnes = intDiceAmount * 100; 			
		}
		else {
			cout << "The amount that you put in was larger then the number of one's that you have, please try again" << endl;
			return rollAgain(yesDice, ones, fives);
		}		
	}
}

//int nextPlay(

int main() {
	srand(time(NULL));
	int* x = new int[6];
	roll(x);
	bool dice = searchingRoll(x);
	int ones = counting1(x);
	int fives = counting5(x);
	bool yesDice = keep(dice, x, ones, fives);
	int totalScore = addScore(totalOnes, totalFives);
	cout << "You're total score is: " << totalScore << endl;
	string setAside = rollAgain(yesDice, ones, fives);
	setAsideWhat(setAside, ones, fives, totalScore, totalOnes, totalFives, yesDice);
	delete[] x;
}
