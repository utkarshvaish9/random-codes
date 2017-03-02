#include<bits/stdc++.h>

using namespace std;
typedef long long LL;

#define MOD 1000000007


string str;

int main()
{

    cin>>str;
    int l = str.length();
    LL outp = str[0] - '0'; 
    LL temp = str[0] - '0'; 
    for(int i=1 ; i< l ; i++)
    {
        temp = temp*10 + (i+1)*(str[i] - '0');
        temp = temp%MOD;
        outp = (outp +temp)%MOD;
    }
        cout<<outp<<endl;
    
    return 0;
}