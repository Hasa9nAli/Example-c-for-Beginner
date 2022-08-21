#include <iostream>

using namespace std;
int main() {
		int firstArray[5], secondArray[5], mergFirstSecondArray[10] ,count=0 ;
	cout << "enter the first matrix : " << endl; 
	for (int indexFirstArray = 0; indexFirstArray < 5; indexFirstArray++) {
		cin >> firstArray[indexFirstArray];
	}
	cout << "enter the second matrix b : " << endl;
	for(int indexSecondArray=0;indexSecondArray<5;indexSecondArray++)
		cin>> secondArray[indexSecondArray];

	for (int index = 0; index < 5; index++) {
		mergFirstSecondArray[count] = firstArray[index];
		count++; 
	}
	for (int index = 0; index< 5; index++)
	{
		mergFirstSecondArray[count] = secondArray[index]; 
		count++; 
	}
	cout << "the merge first and second array is  ; : " << endl; 
	for (int index = 0; index < 10; index++)
		cout << mergFirstSecondArray[index] << " "; 


    return 0;
}
