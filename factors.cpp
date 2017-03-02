#include<bits/stdc++.h>

using namespace std;

int n;

int main()
{
	cin>>n;
	int arr[n];
	fill_n(arr,n,0);

	for(int i =2;i*i<=n;i++)
	{
		if(n%i==0)
		{
			arr[i]  =1;
			arr[n/i] = 1;
		}
	}
	for(int i=2;i<=n/2;i++)
	{
		if(arr[i] == 1)
			cout<<i<<endl;
	}
}