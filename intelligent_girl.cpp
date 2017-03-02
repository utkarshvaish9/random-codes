#include<bits/stdc++.h>

using namespace std;

#define MAX 10005
string s;
int arr[MAX];
int main()
{
	cin>>s;
	for(int i=0;i<s.size();i++)
		arr[i] = s[i] - '0';
	
	int n = s.size();

	if(arr[n-1]%2==0)
			arr[n-1] = 1;
	else
		arr[n-1] = 0;
	for(int i = n-2;i>=0;i--)
	{
		
		if(arr[i]%2==0)
			arr[i] = arr[i+1] +1;
		else
			arr[i] = arr[i+1];
	}
	 for(int i=0;i<=n-1;i++)
	 	cout<<arr[i]<<" ";
}