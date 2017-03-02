#include<bits/stdc++.h>

using namespace std;

#define MAX 100005

int n,m,l,r,k,ans;
int arr[MAX],sol[MAX],cum[MAX];
int main()
{
	cin>>n>>m;
	for(int i=1;i<=n;i++)
		cin>>arr[i];
	fill_n(sol,100005,1);
	for(int i=2;i<=n;i++)
	{
		if(arr[i]==arr[i-1])
			sol[i]=sol[i-1]+1;
	
	}
	int x  = n;
	cum[n]  = n;
	while(x>=1)
	{
		cum[x-sol[x]] = x-sol[x];
		x = x-sol[x];
	}
	for(int i=1;i<=n;i++)
		cout<<cum[i]<<" ";
	for(int i=0;i<m;i++)
	{
		cin>>l>>r>>k;
		int count=0;
		while(r>=l)
		{
			if(sol[r]>=k)
				{ans = arr[r];
					count++;
					break;
				}
			else 
				r = r-sol[r];
		}
		if(count!=0)
			cout<<ans<<endl;
		else
			cout<<"-1"<<endl;	
	}
	return 0;
}