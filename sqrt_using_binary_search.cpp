#include <bits/stdc++.h>

using namespace std;

double sqrtfind(int x)
{
	if(x==0||x==1)
		return x;
	double start = 1;
	double end = x;
	double err=0.1;
	double ans;
	while(end-start>=0.0001)
	{
		double mid = (start+end)/2;
		if(mid*mid==x)
			return mid;
		if(mid*mid<x)
		{
			start = mid+1;
			ans = mid;
		}
		else
			end=mid-1;
	}
	return ans;

} 

int main()
{
	int x;
	cin>>x;
	double y = sqrtfind(x);
	cout<<(double) y;
}