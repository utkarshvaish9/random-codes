#include<bits/stdc++.h>

using namespace std;

vector<int> vec;
int main()
{
	int n,x;
	cin>>n;
	for(int i =0;i<n;i++)
	{
		cin>>x;
		vec.push_back(x);

	}

	int gcd = vec[0];

	for(int i = 1;i<n;i++)
	{
			gcd = __gcd(gcd,vec[i]);
	}
	cout<<gcd;
	return 0;
}