#include<iostream>
#include<queue>

using namespace std;

int main()
{
	// MAX Heap
	priority_queue<int> maxi;
	
	// MIN Heap
	
	priority_queue<int, vector<int>, greater<int>> mini;
	
	maxi.push(1);
	maxi.push(5);
	maxi.push(10);
	maxi.push(0);
	maxi.push(6);
	maxi.push(3);
	
	cout << "size of max heap -> " << maxi.size() << endl;
	int n = maxi.size();
	for(int i = 0; i < n; i++)
	{
		cout << maxi.top() << " ";
		maxi.pop();
	}
	cout << endl;
	
	mini.push(1);
	mini.push(5);
	mini.push(10);
    mini.push(0);
	mini.push(6);
	mini.push(3);
	
	cout << "size of min heap -> " << mini.size() << endl;
	int m = mini.size();
	for(int i = 0; i < m; i++)
	{
		cout << mini.top() << " ";
		mini.pop();
	}
	cout << endl;
	
	cout << "Khali hai kya bhai -> " << mini.empty();
}
