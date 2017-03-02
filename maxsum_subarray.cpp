#include <bits/stdc++.h>

using namespace std;

int t,n;
long continuos_sum(int array[])
{
	long sum_now[n];
	sum_now[0]= array[0];
	long max_sum = sum_now[0];
	for(int i=1;i<n;i++)
	{
		if(sum_now[i-1]+array[i]>array[i])
			sum_now[i]=sum_now[i-1] +array[i];
		else
			sum_now[i] = array[i];
		if(sum_now[i]>max_sum)
			max_sum=sum_now[i];
	}
	return max_sum;
}
long non_conti(int array[])
{
	long sum =0;
	bool flag = false;
	for(int i=0;i<n;i++)
	{
		if(array[i]>0)
			{
				sum+=array[i];
				flag=true;

			}
		else if(array[i]<0 && flag==true)
			continue;
		
		else 
		{
			sort(array,array+n);
			// cout<<"ask";
			return array[n-1];
		}
		
	}
	return sum;
}
int main()
{
	cin>>t;	
	while(t--)
	{
		cin>>n;
		int arr[n];
		for(int i=0;i<n;i++)
			cin>>arr[i];
		long ans = continuos_sum(arr);
		long ans2 = non_conti(arr);
		cout<<ans<<" "<<ans2<<endl;
	}

	return 0;
}