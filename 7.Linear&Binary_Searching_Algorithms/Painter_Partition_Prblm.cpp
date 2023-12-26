#include<iostream>
using namespace std;

bool isPossible(int board[], int n, int k, int mid)
{
	int painter = 1;
	int boardPainted = 0;
	for(int i = 0; i < n; i++)
	{
		if(boardPainted + board[i] <= mid)
		{
			boardPainted += board[i];
		}
		else
		painter++;
		if(painter > k || board[i] > mid)
		{
			return false;
		}
		boardPainted = board[i];
	}
	return true;
}

int painterPartition(int board[], int n, int k)
{
	int s = 0;
	int sum = 0;
	for(int i = 0; i < n; i++)
	{
		sum += board[i];
	}
	int e = sum;
	int ans = -1;
	int mid = s + (e - s)/2;
	while(s <= e)
	{
		if(isPossible(board, n, k, mid))
		{
			ans = mid;
			e = mid - 1;
		}
		else
		{
			s = mid + 1;
		}
		mid = s + (e - s)/2;
	}
	return ans;
}

int main()
{
	int size, k;
	cin >> size >> k;
	int board[100];
	for(int i = 0; i < size; i++)
	{
		cin >> board[i];
	}
	cout << painterPartition(board, size, k) << endl;
	return 0;
}
