#include <iostream>

using namespace std;

int fact(int x){
	int f = 1;
	for (int i = 1; i <= x; i++)
		f *= i;
		return f;

}
int pow(int x, int y) {
	int p = 1;
	for (int k = 1; k <= y; k++)
		p *= x;
	return p;
}
int main() {

	int number, value,n=1 ;
	float summation = 0;
	cout << "enter your max number : ";
	cin >> number;
	cout << "enter x value to find sumation  the !1/(x^1 *  n ) ... : ";
	cin >> value;
	for (int j = 1; j <= number; j += 2) {
		summation += (float)fact(j) / ((float)pow(value, j) * (float)n);
		n *= -1;
	}
	cout << "summation = " << summation;
}

