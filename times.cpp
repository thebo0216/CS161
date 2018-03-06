#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <cstring>
using namespace std;

int stringToInt(string str) {
	int res = 0;
	for(int i = 0; i < str.length(); i++) {
		res = res * 10;
		res += int(str[i]) - 48;
	}
	return res;
}

bool is_int(string num) {
	int i = 0;
	for(int i = 0; i < num.length(); i++) {
		if((num[i] >= 48)and(num[i] <= 57)) {
		}
		else {
			return false;
		}
	}
	return true;
}

int a_to_i(string input) {
	int dec = input[0];
	return dec;
}

int howManyPlayers() {
  string players = "";
  cout << "How many players are there? There must be a min of 2 players: ";
  getline(cin, players);
  if(is_int(players) == true) {
    int intPlayers = stringToInt(players);
    if(intPlayers < 2) {
      return howManyPlayers();
    }
  }
  else {
    return howManyPlayers();
  }
	int intPlayers = stringToInt(players);
	return intPlayers;
}

int alpha() {
	int a = 0;
	return a;
}

int roll(int* x, int a) {
	int i = 0, number = 1;
	// while(i < 6-a) {
	// 	x[i] = rand() % 6 + 1;
	// 	i++;
	// }
  x[0] = 5;
  x[1] = 1;
  x[2] = 1;
  x[3] = 2;
  x[4] = 2;
  x[5] = 3;
  for(int i = 0; i < 6-a; i++) {
    cout << "Dice Number: " << x[i] << " ----" << " Dice #" << number << endl;
    number++;
  }
}

int counting1(int* x, int a) {
  int one = 0;
  for(int i = 0; i < 6-a; i++) {
    if(x[i] == 1)
      one++;
  }
  return one;
}

int counting2(int* x, int a) {
  int two = 0;
  for(int i = 0; i < 6-a; i++) {
    if(x[i] == 2)
      two++;
  }
  return two;
}

int counting3(int* x, int a) {
  int three = 0;
  for(int i = 0; i < 6-a; i++) {
    if(x[i] == 3)
      three++;
  }
  return three;
}

int counting4(int* x, int a) {
  int four = 0;
  for(int i = 0; i < 6-a; i++) {
    if(x[i] == 4)
      four++;
  }
  return four;
}

int counting5(int* x, int a) {
  int five = 0;
  for(int i = 0; i < 6-a; i++) {
    if(x[i] == 5)
      five++;
  }
  return five;
}

int counting6(int* x, int a) {
  int six = 0;
  for(int i = 0; i < 6-a; i++) {
    if(x[i] == 6)
      six++;
  }
  return six;
}

int countingArr(int* y, int one, int two, int three, int four, int five, int six) {
  y[0] = one;
  y[1] = two;
  y[2] = three;
  y[3] = four;
  y[4] = five;
  y[5] = six;
}

int oneScore(int* y, int one) {
  int oneTotalScore = 0;
	cout << y[0] << endl;
  if((y[0] == 1)or(y[0] == 2)) {
    oneTotalScore = 100 * one;
	}
  return oneTotalScore;
}

int fiveScore(int* y, int five) {
	int fiveTotalScore = 0;
	cout << five << endl;
	if((y[4] == 1)or(y[4] == 2)) {
		fiveTotalScore = 50 * five;
	}
	return fiveTotalScore;
}

int fourOfKindWithPair(int* y) {
  int fourOfKindWithPairTotalScore = 0, dos = 0, quad = 0;
  for(int i = 0; i < 6; i++) {
    if(y[i] == 4) {
			quad++;
    }
  }
	for(int j = 0; j < 6; j++) {
		if(y[j] == 2) {
			dos++;
		}
	}
	if((quad == 1)and(dos == 1)) {
		fourOfKindWithPairTotalScore = 500;
	}
	if((fourOfKindWithPairTotalScore > 0)and(y[0] == 2))
		fourOfKindWithPairTotalScore = fourOfKindWithPairTotalScore - 200;
	if((fourOfKindWithPairTotalScore > 0)and(y[4] == 2))
	 	fourOfKindWithPairTotalScore = fourOfKindWithPairTotalScore - 100;
  return fourOfKindWithPairTotalScore;
}

int threeOfKind(int* y) {
  int threeOfKindTotalScore = 0;
  if(y[0] == 3)
    threeOfKindTotalScore = threeOfKindTotalScore + (300);
  if(y[1] == 3)
    threeOfKindTotalScore = threeOfKindTotalScore + (200);
  if(y[2] == 3)
    threeOfKindTotalScore = threeOfKindTotalScore + (300);
  if(y[3] == 3)
    threeOfKindTotalScore = threeOfKindTotalScore + (400);
  if(y[4] == 3)
    threeOfKindTotalScore = threeOfKindTotalScore + (500);
  if(y[5] == 3)
    threeOfKindTotalScore = threeOfKindTotalScore + (600);
  return threeOfKindTotalScore;
}

int fourOfKind(int* y) {
  int fourOfKindTotalScore = 0;
  if((y[0] == 4)or(y[1] == 4)or(y[2] == 4)or(y[3] == 4)or(y[4] == 4)or(y[5] == 4))
    fourOfKindTotalScore = 1000;
  return fourOfKindTotalScore;
}

int fiveOfKind(int* y) {
  int fiveOfKindTotalScore = 0;
  if((y[0] == 5)or(y[1] == 5)or(y[2] == 5)or(y[3] == 5)or(y[4] == 5)or(y[5] == 5))
    fiveOfKindTotalScore = 2000;
  return fiveOfKindTotalScore;
}

int sixOfKind(int* y) {
  int sixOfKindTotalScore = 0;
  if((y[0] == 6)or(y[1] == 6)or(y[2] == 6)or(y[3] == 6)or(y[4] == 6)or(y[5] == 6))
    sixOfKindTotalScore = 3000;
  return sixOfKindTotalScore;
}

int straight(int* y) {
  int straightTotalScore = 0;
  if((y[0] == 1)and(y[1] == 1)and(y[2] == 1)and(y[3] == 1)and(y[4] == 1)and(y[5] == 1))
    straightTotalScore = 1350;
  return straightTotalScore;
}

int threePairs(int* y) {
  int pairs = 0;
  int threePairsTotalScore = 0;
  for(int i = 0; i < 6; i++) {
    if (y[i] == 2) {
      pairs++;
    }
  }
  if((pairs == 3)and(y[0] == 2)and(y[4] == 2)) {
		threePairsTotalScore = 1200;
  }
	else if((pairs == 3)and(y[4] == 2)) {
		threePairsTotalScore = 1400;
	}
	else if((pairs == 3)and(y[0] == 2)) {
		threePairsTotalScore = 1300;
	}
	else if(pairs == 3) {
		threePairsTotalScore = 1500;
	}
  return threePairsTotalScore;
}

int triplets(int* y) {
  int triple = 0;
  int tripletsTotalScore = 0;
  for(int i = 0; i < 6; i++) {
    if(y[i] == 3) {
      triple++;
    }
  }
  if(triple == 2) {
    tripletsTotalScore = 2500;
  }
  return tripletsTotalScore;
}

int addingTotalScore(int* y, int* x, int one, int five, int a) {
  int finalScore = 0;
  int oneTotalScore = oneScore(y, a);
	int fiveTotalScore = fiveScore(y, five);
  int threeOfKindTotalScore = threeOfKind(y);
  int fourOfKindTotalScore = fourOfKind(y);
  int fiveOfKindTotalScore = fiveOfKind(y);
  int sixOfKindTotalScore = sixOfKind(y);
  int straightTotalScore = straight(y);
  int threePairsTotalScore = threePairs(y);
  int fourOfKindWithPairTotalScore = fourOfKindWithPair(y);
  int tripletsTotalScore = triplets(y);
  finalScore = oneTotalScore + fiveTotalScore + threeOfKindTotalScore + fourOfKindTotalScore + fiveOfKindTotalScore + sixOfKindTotalScore + straightTotalScore + threePairsTotalScore + fourOfKindWithPairTotalScore + tripletsTotalScore;
	if(tripletsTotalScore > 0) {
		finalScore = finalScore - threeOfKindTotalScore;
	}
  return finalScore;
}

string setAsideInput(int finalScore) {
	string asideInput = "";
	if(finalScore > 0) {
		cout << "Which dice would you like to set-aside?(115): ";
		getline(cin, asideInput);
	}
	return asideInput;
}

int stringCounting(string asideInput, int* x) {
	for(int i = 0; i < asideInput.length(); i++) {
		x[i] = asideInput[i] - 48;
	}
	for(int j = 0; j < asideInput.length(); j++) {
		cout << x[j] << endl;
	}
}

// string asideInputCheck(int* y, int* x, int finalScore) {
// 	bool valid = false;
// 	string asideInput = setAsideInput(finalScore);
// 	for(int i = 0; i < asideInput.length(); i++) {
//
// 	}
// }

main() {
  srand(time(NULL));
  int* x = new int[6];
  int* y = new int[6];
  int a = alpha();
  int intPlayers = howManyPlayers();
	for(int i = 0; i < intPlayers; i++) {
  	roll(x, a);
  	int one = counting1(x, a);
  	int two = counting2(x, a);
  	int three = counting3(x, a);
  	int four = counting4(x, a);
  	int five = counting5(x, a);
  	int six = counting6(x, a);
  	countingArr(y, one, two, three, four, five, six);
		int finalScore = addingTotalScore(y, x, one, five, a);
		cout << finalScore << endl;
		//asideInputCheck(y, x, finalScore);
		string asideInput = setAsideInput(finalScore);
		stringCounting(asideInput, x);
	}
  //int finalScore = dupScore(totalScore, tripletsTotalScore, threeOfKindTotalScore)
  delete[] x;
  delete[] y;
}
