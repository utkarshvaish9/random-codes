#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int n,m;
int main() {
    cin>>n>>m;
    int coins[m];
    for(int i=0;i<m;i++)
        cin>>coins[i];
    int64_t count[n+1];
    for(int i=0;i<=n;i++)
        count[i] = 0;
    for(int j=0;j<m;j++)
    {
        for(int i = 1;i<=n;i++)
        {                      
            if(i>=coins[j])
                if(count[i-coins[j]]!=0)
                   count[i]+=count[i-coins[j]];                             //r[i] = j;
                if(i-coins[j]==0)
                    count[i]++;
        }
    }
                    
    cout<<count[n];
      
    return 0;
}
