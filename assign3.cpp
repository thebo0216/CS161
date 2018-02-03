#include <iostream>
#include <string>
using namespace std;

bool check_range(int lower_bound, int upper_bound, int test_value) {
	if((test_value >= lower_bound)&&(test_value <= upper_bound)) {
		cout << "Function 1 true" << endl;
		return true;
		}
	cout << "Function 1 false" << endl;
	return false;
}

bool is_int(string num) {
	int i = 0;
	for(int i = 0; i < num.size(); i++) {
		if((num[i] >= 48)and(num[i] <= 57)) {
		}
		else {
			cout << "Function 2 false" << endl;
			return false;
		}
	}
	cout << "Function 2 true" << endl;
	return true;	
}

bool is_float(string num) {
	int i = 0;
	int j = 0;
	int length = num.size();
	int dec = 0;	
	for(i = 0; i < length; i++) {
		if(num[i] == 46)
			dec++;
		if(num[length - 1] == 46) {
			cout << "Function 3 false" << endl;
			return false;
		}
	}
	for(j = 0; j < length; j++) {
		if((num[j] > 96)and(num[j] < 123)or(num[j] > 64)&&(num[j] < 91)or(dec != 1)) {
			cout << "Function 3 false" << endl;
			return false;	
		}
	}
	cout << "Function 3 true" << endl;
	return true;
}

bool is_capital(char letter) {	
	if((letter > 64)and(letter < 91)) {
		cout << "Function 4 true" << endl;
		return true;	
	}
	cout << "Function 4 false" << endl;
	return false;
}

bool is_even(int num) {
	if(num % 2 == 0) {
		cout << "Function 5 true" << endl;
		return true; 
	}
	cout << "Function 5 false" << endl;
	return false;
}

bool is_odd(int num) {
	if(num % 2 == 1) {
		cout << "Function 6 true" << endl;
		return true;	
	}
	cout << "Function 6 false" << endl;
	return false;
}

int equality_test(int num1, int num2) {
	if(num1 < num2) {
		cout << "Function 7 -1" << endl;
		return -1;
	}
	if(num1 == num2) {
		cout << "Function 7 0" << endl;
		return 0;
	}
	if(num1 > num2) {
		cout << "Function 7 1" << endl;
		return 1;
	}	
}

int float_is_equal() {
		
}

bool number_present(string sentence) {
	int i;
	for(i = 0; i < sentence.size(); i++) {
		if((sentence[i] > 47)and(sentence[i] < 58)) {
			cout << "Function 9 true" << endl;
			return true;	
		}
	}
	cout << "Function 9 false" << endl;
	return false;
}

bool letter_present(string sentence) {
	int i;
	for(i = 0; i < sentence.size(); i++) {
		if((sentence[i] > 64)and(sentence[i] < 91)or(sentence[i] > 96)and(sentence[i] < 123)) {
			cout << "Function 10 true" << endl;
			return true;	
		}
	}
	cout << "Function 10 false" << endl;
	return false;	
}

int contains_sub_string(string sentence, string sub_string) {
		
}

int word_count(string sentence) {
	int i;
	int count = 0;
	for(i = 0; i < sentence.size(); i++) {
		if(sentence[i] == 32) {
			count++;	
		}
	}
	cout << "Function 12 " << count + 1 << endl;
	return count + 1;
}
 

int main() {
	check_range(0, 100, 50);
	is_int("123");
	is_float("5.999999999");
	is_capital('H');
	is_even(6);
	is_odd(7);
	equality_test(6, 6);
	number_present("ghd7");
	letter_present("66A5");
	word_count("Hey whats up");
}
