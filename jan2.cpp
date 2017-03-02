#include <bits/stdc++.h>

using namespace std;

vector<int>graph[112345];
int n,population[112345],u,v,largest,pos;

int main(){
	int t;
	cin >>t
	while(t--){

		cin>>n;
		for(int i = 1;i<=n;i++)
			cin>>population[i];
		for(int i=0;i<n-1;i++)
		{
		cin >> u >> v;
		graph[u].push_back(v);
		graph[v].push_back(u);
		}
		for(int i=1;i<=n;i++)
		{
			if(population[i]>largest)
			{	largest = population[i];
				pos = i;
			}
		}
		int x=0;
		for(int c = 1;c<=n;c++)
		{	
			for(int i = 0; i < graph[c].size(); i++)
			{
				for(int j = 0; j < graph[c].size(); j++)
				{
					if(graph[c][j]==pos)
					{	cout<<pos;
						break;
						x++;
					}
				}
				if(x==1)
					break;
				else
					

					
			}
		}


	}
	
	
	return 0;
}