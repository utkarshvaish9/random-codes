#include<bits/stdc++.h>

using namespace std;


#define clr(x) memset((x), 0, sizeof(x))
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define mp make_pair
#define fori(i, n) for(int i = 0; i < (int)(n); ++i)
#define forj(j, n) for(int j = 0;i < n; ++j) 
#define ford(i, n) for(int i = (int)(n) - 1; i >= 0; --i)
#define for1(i, n) for(int i = 1; i <= (int)(n); ++i)
#define LL 					long long
#define ULL 				unsigned long long
#define pii 				pair<int,int>
#define fi 					first
#define se 					second
#define vi 					vector<int>
#define psb 				push_back
#define ppb 				pop_back
#define sz(x)				(int)(x).size()
#define gc					getchar_unlocked
#define present(container, element) (container.find(element) != container.end()) 
 #define cpresent(container, element) (find(all(container),element) != container.end()) //for vector


int main()
{
	int n;
	cin>>n;
	int arr[n],odd[n],cont_zeroes[n],j = 0;
	fill_n(cont_zeroes,n,0);

	fori(i,n)
	{
		cin>>arr[i];
		if(arr[i]%2)
			odd[i] = 1;	
		else
			odd[i] = 0;


	}
	int answer = int((n*(n+1))/2);
	fori(i,n)
		if(!(odd[i]))
			++cont_zeroes[j];
		else
			j++;
		
    int sum = 0;
    for(int element:cont_zeroes)
    	if(element!=0)
    		sum+= (element*(element+1))/2;
    answer = answer - sum;
    return 0;
 


}