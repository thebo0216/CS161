#include <iostream>
#include <cmath>

using namespace std;

int main() {
	float num1 = 0;
	float num2 = 0;
	float num3 = 0;
	float num4 = 0;
	float num5 = 0;
	float num6 = 0;
	float num7 = 0;
	float num8 = 0;
	float num9 = 0;
	float num10 = 0;
	float num11 = 0;
	float num12 = 0;
	float num13 = 0;
	float num14 = 0;
	float num15 = 0;
	float num16 = 0;
	float num17 = 0;
	float num18 = 0;
	float num19 = 0;
	float num20 = 0;
	float num21 = 0;
	float num22 = 0;
	float num23 = 0;
	float num24 = 0;
	float num25 = 0;
	float num26 = 0;
	//Let's do some math section:
	num1 = cos (2.0/3.0);
	num2 = 2 * sin (2.0/3.0);
	num3 = tan (-3.0/4.0);
	num4 = log10(55);
	num5 = log(60);
	//Showing steps section:
	num6 = log(15);
	num7 = log(2);
	num8 = num6/num7;
	num9 = log(40);
	num10 = log(4);
	num11 = num9/num10;
	//Solving equation part 1:
	num12 = sin(1);
	num13 = pow(3, num12);
	num14 = sin(10);
	num15 = pow(3, num14);
	num16 = sin(100);
	num17 = pow(3, num16);
	//Solving equation part 2:
	num18 = pow(1, 2) + 1;
	num19 = log(num18);
	num20 = num19/num7;
	num21 = pow(10, 2) + 1;
	num22 = log(num21);
	num23 = num22/num7;
	num24 = pow(100, 2) + 1;
	num25 = log(num24);
	num26 = num25/num7;
	//The start of printing functions:
	cout << "" << endl;
	cout << "Let's do some math: " << endl;
	cout << "cos(2/3) = " << num1 << endl;
	cout << "2sin(2/3) = " << num2 << endl;
	cout << "tan(-3/4) = " << num3 << endl;
	cout << "log10(55) = " << num4 << endl;
	cout << "ln(60) = " << num5 << endl;
	cout << "" << endl;
	cout << "Know let's show some steps on solving log and ln problems: " << endl;
	cout << "Question 1) Find the log base 2 of 15: " << endl;
	cout << "ln(15) = " << num6 << endl;
	cout << "ln(2) = " << num7 << endl;
	cout << "ln(15)/ln(2) = " << num8 << endl;
	cout << "Question 2) Find the log base 4 of 40: " << endl;
	cout << "ln(40) = " << num9 << endl;
	cout << "ln(4) = " << num10 << endl;
	cout << "ln(40)/ln(4) = " << num11 << endl;
	cout << "" << endl;
	cout << "Solve the following equation 3^sin(x), where x = 1, x = 10, and x = 100: " << endl;
	cout << "Question 1) sin(1) = " << num12 << endl;
	cout << "3 ^ sin(1) = " << num13 << endl;
	cout << "Question 2) sin(10) = " << num14 << endl;
	cout << "3 ^ sin(10) = " << num15 << endl;
	cout << "Question 3) sin(100) = " << num16 << endl;
	cout << "3 ^ sin(100) = " << num17 << endl;
	cout << "" << endl;
	cout << "Solve the folling equation log(x^2+1), where x = 1, x = 10, and x = 100: " << endl;
	cout << "Question 1) 1^2+1 = " << num18 << endl;
	cout << "ln(1^2+1) = " << num19 << endl;
	cout << "ln(2) = " << num7 << endl;
	cout << "ln(1^2+1)/ln(2) = " << num20 << endl;
	cout << "Question 2) 10^2+1 = " << num21 << endl;
	cout << "ln(10^2+1) = " << num22 << endl;
	cout << "ln(2) = " << num7 << endl;
	cout << "ln(10^2+1)/ln(2) = " << num23 << endl;
	cout << "Question 3) 100^2+1 = " << num24 << endl;
	cout << "ln(100^2+1) = " << num25 << endl;
	cout << "ln(2) = " << num7 << endl;
	cout << "ln(100^2+1)/ln(2) = " << num26 << endl;
	cout << "" << endl;
	return 0;
}
