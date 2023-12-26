#include<iostream>
using namespace std;

int main()
{
	int num = 5;
	
	cout << num << endl;
	
	//address of oprator - &
    cout <<"Address of num is " << &num << endl;
    int *ptr = &num;
    
    cout << "Address is " << ptr << endl;
    cout << "Value is " << *ptr << endl;
    
    double d = 4.2;
    double *p2 = &d;
    
    cout << "Address is " << p2<< endl;
    cout << "Value is " << *p2<< endl;
    
    cout << "size of integer is " << sizeof(num) << endl;
    cout << "Size of pointer is " << sizeof(ptr) << endl;
    cout << "size of double is " << sizeof(double) << endl;
    
    int *p;   // garbage value
    cout << *p << endl;
    
    int i = 5;
    int *a = 0;
    a = &i;
    cout << a << endl;
    cout << *a << endl;
    
    int *b = &i;
    
    cout << b << endl;
    cout << *b << endl;
    
    int *c = &num;
    cout << "Before " << num << endl;
    (*c)++;
    cout << "After " << num << endl;
    
    // copying a pointer 
    int *q = c;
    cout << c << " - " << q << endl;
    cout << *c << " - " << *q << endl;
    
    return 0;
}
