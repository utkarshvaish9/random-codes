#include<bits/stdc++.h>

using namespace std;

int arr[200];

int multiply(int x,int size)
{
	int carry  = 0;
	 for (int i=0; i<size; i++)
    {
        int prod = arr[i] * x + carry;
        arr[i] = prod % 10;  
        carry  = prod/10;    
    }

    while (carry)
    {
        arr[size] = carry%10;
        carry = carry/10;
        size++;
    }
    return size;
}

int main()
{
	int n;
	cin>>n;
	arr[0] = 1;
    int size = 1;
 
    for (int x=2; x<=n; x++)
        size = multiply(x,  size);
 
    for (int i=size-1; i>=0; i--)
        cout << arr[i];
    return 0;
}