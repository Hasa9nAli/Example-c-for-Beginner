#include <iostream>
using namespace std ; 
void main(){
    // this code written by Hasan Ali 
    /*
    name => Hasan Ali
    Student in university of Mosul 
    And  Lead in google developer student club Mosul 
    Email : ihasanalihasan@gmail.com 
    LinkedIn : https://www.linkedin.com/in/ihasanalihasan/
    Github : https://github.com/Hasa9nAli
    */
   	int sumOdd = 0, sumEven = 0 , number;
    
	for (int i = 1; i <=5; i++) {
		cin >> number;
		if (number % 2 == 0)
			sumEven += number;
		else
			sumOdd += number; 
	}
    cout<< "the sum of odd numbers is " << sumOdd << endl;
    cout<< "the sum of even numbers is " << sumEven << endl;
	system("pause");

}