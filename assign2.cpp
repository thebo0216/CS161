#include <iostream>
using namespace std;

int main() {
	int firstInput;
	int secondInput;
	int thirdInput;
	cout << "You just entered the forest and you can either go right or left. Entering 1 will go right, and 2 will go left." << endl;
	cin >> firstInput;
	if (firstInput == 1) {
		cout << "You have chosen to go right. After walking 100ft you find something shiny on the ground." << endl;
		cout << "You bend down to try to pick it up but realize that part of it is still in the ground." << endl;
		cout << "If you enter 1, you will start to dig up the item with you hands, if 2 then you will keep walking." << endl;
		cin >> secondInput;
		if (secondInput == 1) {
			cout << "You have chosen to dig up the item. You start digging and find out that the item is" << endl;
			cout << "a chest. Enter 1 to open the chest, enter 2 to leave the chest and walk back home" << endl;
			cin >> thirdInput;
				if (thirdInput == 1) {
					cout << "You have chosen to open the chest. The chest contains gold and silver." << endl;
					cout << "You think about all of that money and deside to take as much as you can." << endl;
					cout << "You fill up your pockets and coat pockets with the loot. you decide it" << endl;
					cout << "it is time to go back home. Thank you for playing" << endl;
				}
				else if (thirdInput == 2) {
					cout << "You have chosen to go home and not open the chest. Thank you for playing!" << endl;
				}
				else {
					cout << "You did not enter a valid input, please try again." << endl;
				}
		}
		else if (secondInput == 2) {
			cout << "You have chosen to keep walking. After 15 min you find a horse in the wild." << endl;
			cout << "Your first instinct is to ride the horse. If you would like to ride the horse," << endl;
			cout << "enter 1. If you would like to head home then enter 2." << endl;
			cin >> thirdInput;
				if (thirdInput == 1) {
					cout << "You have chosen to ride the horse. You try your best to get on the horse." << endl;
					cout << "You finally saddle the horse, but the horse is very wild and bucks you off." << endl;
					cout << "None of your bones are broken, but you decide it is best that you go home." << endl;
					cout << "Thanks for playing!" << endl;
				}
				else if (thirdInput == 2) {
					cout << "You have decided to head back home. Thanks for playing!" << endl;	
				}
				else {
					cout << "You did not enter a valid input, please try again." << endl;
				}
		}
		else {
			cout << "You did not enter a valid input, please try again." << endl;
		}
	}
	else if (firstInput == 2) {
		cout << "You have chosen to go left. After walking 200ft you find an abandoned house." << endl;
		cout << "If you would like to go in the house enter 1, if you would like to keep walking enter 2." << endl;
		cin >> secondInput;
		if (secondInput == 1) {
			cout << "You have chosen to enter the house. The first thing that goes though you're" << endl;
			cout << "head is, this is kinda creepy. You walk though the door to find a note on" << endl;
			cout << "the ground. You pick it up and find that the letter is writen to you." << endl;
			cout << "Enter 1 to drop the letter and run back home. Enter 2 to read the letter." << endl;
			cin >> thirdInput;
				if (thirdInput == 1) {
					cout << "You have chosen to drop the letter and run back home." << endl;
					cout << "Thanks for playing!" << endl;
				}
				else if (thirdInput == 2) {
					cout << "You have chosen to read the letter. You open the letter up" << endl;
					cout << "and read it. The letter reads RUN. You get so scared that you" << endl;
					cout << "drop the letter and start running back home. Thanks for playing!" << endl;
				}
				else {
					cout << "You did not enter a valid input, please try again." << endl;	
				}
		}
		else if (secondInput == 2) {
			cout << "You have chosen to keep waking pass the house and though the woods." << endl;
			cout << "After walking for about 15 min, you find you are back in the same" << endl;
			cout << "spot you were in 15 min ago, looking at the house. I guess you have" << endl;
			cout << "no chose to enter the house. Enter 1 to enter the house and 2 to" << endl;
			cout << "enter the house" << endl;
			cin >> thirdInput;
				if (thirdInput == 1 or 2) {
					cout << "You have chosen to enter the house. You see a letter sitting" << endl;
					cout << "on the ground and pick it up to read it. The letter says run." << endl;
					cout << "You get so scared that drop the letter and ran back home." << endl;	
				}
				else {
					cout << "You did not enter a valid input, please try again." << endl;	
				}
		}
		else {
			cout << "You did not enter a valid input, please try again." << endl;
		}
	}
	else {
		cout << "You did not enter a valid input, please try again." << endl;
	}
}
