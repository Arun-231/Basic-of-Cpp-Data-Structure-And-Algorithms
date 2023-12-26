#include<iostream>
using namespace std;

int* fun(int a){   //  bad practice give warning
    int *ptr = &a;
    return ptr;
}

int& func(int a)    // bad practice give warning
{
	int num = a;
	int &ans = num;
	return ans;
}

void update2(int& n)    // pass by reference
{
	n++;
}


void update1(int n)    // pass by value
{
	n++;
}

int main()
{
/*	int i = 5;
	
	// create a reference variable
	int &j = i;
	
	cout << i << endl;
	i++;
	cout << i << endl;
	j++;
	cout << i << endl;
	cout << j << endl;
*/

    int i = 5;
    cout << "Before " << i << endl;
    update2(i);
    //fun(i);
    cout << "After " << i << endl;
	
	return 0;
}
