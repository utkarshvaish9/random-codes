#include<bits/stdc++.h>

using namespace std;

#define MAX 1000000005

int a[MAX];

int main()
{
	a[0]=0;
	a[1] = 0;
	a[2]=1;
	for(int i=3;i<=MAX;i++)
	{
		if(i%2!=0)
			a[i]=0;
		else
		
			a[i] = a[i/2] + 2;
	
	}
	cout<<a[4]<<endl<<a[6]<<endl<<a[20]<<endl<<a[500];
}