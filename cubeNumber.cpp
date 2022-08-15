#include<iostream>

using namespace std;
int cab(int n) {

	n = n * n * n; 
	return n; 
}

void main() {
	int number;
	cout << "enter the number to finde the number^3 : ";
	cin >> number;
	// i call the cab function and send the number as argumaent   to return number^3 
	cout << cab(number) << endl;
	system("pause"); 
}
	