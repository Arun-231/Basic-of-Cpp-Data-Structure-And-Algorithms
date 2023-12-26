#include<iostream>
using namespace std;

int main()
{
	int arr[10] = {23,122,41,67};
	
	cout << "Address of first memory block is " << arr << endl;
	cout << arr[0] << endl;
	cout << "Address of first memory block is " << &arr[0] << endl;
	
	cout << "4th " << *arr << endl;    // value at 0th index
	cout << "5th " << *arr + 1 << endl;  // increment 1 at 0th index value
	cout << "6th " << *(arr + 1) << endl;  // value at 1st index
	cout << "7th " << (*arr) + 1 << endl;   // increment 1 at 0th index value
	cout << "8th " << arr[2] << endl;
	cout << "9th " << *(arr + 2) << endl;
	
	int i = 3;
	cout << "10th " << i[arr] << endl;
	
	int temp[10] = {1, 2};
	cout << sizeof(temp) << endl;
	cout << "1st " << sizeof(*temp)<< endl;
	cout << "2nd " << sizeof(&temp) << endl;
	cout << "3rd " << sizeof(temp) << endl;
	
	
	int *ptr = &temp[0];
	cout << sizeof(ptr) << endl;
	cout << sizeof(*ptr) << endl;
	cout << sizeof(&ptr) << endl;
	
	
	int a[20] = {1,2,3,5};
	cout << " -> " << &a[0] << endl;
	cout << &a << endl;
	cout << a << endl;
	
	int *p = &a[0];
	cout << p << endl;
	cout << *p << endl;
	cout << " -> "<< &p << endl;
	
	
/*	int arr[10];
// 	arr = arr + 1;  // through error
	
	int *ptr = &arr[0];
	cout << ptr << endl;
	ptr = ptr + 1;
	cout << ptr << endl;
*/
	
	return 0;
}
