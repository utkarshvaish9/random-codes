#include<bits/stdc++.h>

using namespace std;

# define MAX 10000000007

long fact[100000];
 int t,n;
int main()
{
    cin>>t;
    while(t--)
    {
    	cin>>n;
    	fact[0]=1;
    	for(int i=1;i<=n;i++)
    		fact[i]=(fact[i-1]*i)%MAX;
    	cout<<fact[n]<<endl;
    	
    
    }
    return 0;
}
