// zad9.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int getLength(int n) {
	int result = 0;

	do {
		n /= 10;
		result++;
	} while (n != 0);

	return result;
}


int pow1(int base, int power) {
	if (power == 0) {
		return 1;
	}

	return base * pow(base, power - 1);
}

int getDigit(int n, int k) {
	int sign = 1;
	if (n < 0) {
		sign = -1;
		n *= sign;
	}

	int digitsCount = getLength(n);

	if (digitsCount < k) {
		return -1;
	}

	int result = ((n - n % pow1(10, digitsCount - k)) / pow1(10, digitsCount - k)) % 10;
	return result;


}

int main()
{
	int n, k;
	cin >> n >> k;
	cout << getDigit(n, k);
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file