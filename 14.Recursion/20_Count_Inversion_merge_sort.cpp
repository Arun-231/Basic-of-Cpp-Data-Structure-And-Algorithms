#include<iostream>
using namespace std;

int merge(int *arr, int s, int e){
    int inv = 0;
    int mid = s+(e-s)/2;
    int len1 = mid-s+1;
    int len2 = e-mid;
    
    int *first = new int[len1];
    int *second = new int[len2];
    
    int mainIndex = s;
    for(int i=0;i<len1;i++){
        first[i] = arr[mainIndex++];
    }
    mainIndex = mid+1;
        for(int i=0;i<len2;i++){
        second[i] = arr[mainIndex++];
    }
    int index1=0;
    int index2=0;
    mainIndex = s;
    while(index1<len1 && index2<len2){
        if(first[index1]<second[index2]){
            arr[mainIndex++] = first[index1++];
        } else{
            inv += len1-index1;
            arr[mainIndex++] = second[index2++];
        }
    }
    while(index1<len1){
        arr[mainIndex++] = first[index1++];
    }
    while(index2<len2){
        arr[mainIndex++] = second[index2++];
    }
    delete[] first;
    delete[] second;
    return inv;
}

int mergesort(int *arr, int s, int e){
    int inv = 0;
    if(s>=e){
        return 0;
    }
    int mid = s+(e-s)/2;
    inv+=mergesort(arr,s,mid);
    inv+=mergesort(arr,mid+1,e);
    
    inv+=merge(arr,s,e);
    return inv;
}

int getInversions(int *arr, int n){
    int ans = mergesort(arr,0,n-1);
    return ans;

}
int main()
{
	long long size;
	cout << "Enter the size of array: " << endl;
	cin >> size;
	
	int *arr = new int[size];
	for(int i = 0; i < size; i++){
		cin >> arr[i];
	}
	
	cout << "Number of Inversions are " << getInversions(arr, size) << endl;
	
	delete [] arr;
	
	return 0;
}
