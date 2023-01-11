// given a sorted array with duplicate elements. find the element which repeats odd number of times.

#include <bits/stdc++.h>
using namespace std;

int oddFreq(int arr[], int n)
{
	unordered_map<int, int> mp;
	for (int i = 0; i < n; i++)
		mp[arr[i]]++;
	for (auto x : mp)
		if(x.second%2!=0)
            return x.first;
}

int main()
{
	int arr[] = { 1,1,1,1,2,2,3,3,4,4,4 };
	int n = sizeof(arr) / sizeof(arr[0]);
	cout<<oddFreq(arr, n)<<endl;
	return 0;
}