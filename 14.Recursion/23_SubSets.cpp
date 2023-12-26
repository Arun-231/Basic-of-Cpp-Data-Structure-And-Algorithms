#include<iostream>
#include<vector>
using namespace std;

void solve(vector<int> &arr, int index, vector<int> &output, vector<vector<int>> &ans)
{
	// base case
	if(index >= arr.size())
	{
		ans.push_back(output);
		return;
	}
	// exclude
	solve(arr, index+1, output, ans);
	// include
	int element = arr[index];
	output.push_back(element);
	solve(arr, index+1, output, ans);  // recursive call
	output.pop_back();   // backtracking 
}

vector<vector<int>> subSets(vector<int> &arr)
{
	vector<vector<int>> ans;
	vector<int> output;
	int index = 0;
	
	solve(arr, index, output, ans);
	return ans;
}

int main()
{
	int n;
	cout << "Enter the size of array: ";
	cin >> n;
	vector<int> arr;
    cout << "Enter the array element: " << endl;
	for(int i = 0; i < n; i++)
	{
		int a;
		cin >> a;
		arr.push_back(a);
	}
	
	vector<vector<int>> ans = subSets(arr);
	cout << "Subsets of array: " << endl;
	for(int i = 0; i < ans.size(); i++)
	{
		for(int j = 0; j < ans[i].size(); j++)
		{
			cout << ans[i][j] << " ";
		}
		cout << endl;
	}
	
	
	return 0;
}
