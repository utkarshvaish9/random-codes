#include <bits/stdc++.h>

using namespace std;
#define MAX 100
int main()
{
	int isPrime[MAX +1];
	for(int i = 2;i<=MAX;i++)
		isPrime[i] = 1;
	for(int i = 2;i*i<=MAX;i++)
	{
		if(isPrime[i])
		{
			for(int j=i;i*j<=MAX;j++)
				isPrime[i*j]=0;
		}
	}
	
	for(int i=2;i<=MAX;i++)
	{
		if(isPrime[i])
			cout<<i<<",";
	}
	return 0;
}