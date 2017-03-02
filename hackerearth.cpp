#include<bits/stdc++.h>

using namespace std;

#define MAX 1000000009

long ans[10000001],count_even,count_odd,sum[10000002];
int t,n;
int main()
{
			ans[0]=0;
			ans[1] = 1;
			ans[2] = 10;
			ans[3] = 24;
			sum[0]=0;
			sum[2] =10;
			sum[1]=1;
			sum[3] = 25;
			

	for(int i=4;i<10000002;i++)
	{
		if(i%2==0)
		{
			ans[i] = (ans[i-2] + (9+8*count_even)*4)%MAX;
			count_even++;
			sum[i]  = (sum[i-2] + ans[i])%MAX;
			// cout<<sum;

		}
		else
		{
			// ans[0]=0;
			
			ans[i]=(ans[i-2] + (13+8*count_odd)*4)%MAX;
			count_odd++;
			sum[i]=(sum[i-2] + ans[i])%MAX;
			
		}
		
	}
	cin>>t;
	while(t--)
	{
		cin>>n;
		cout<<sum[n]<<endl;
	}
	return 0;

}