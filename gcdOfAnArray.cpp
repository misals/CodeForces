#include<iostream>
using namespace std;

long long gcd(long long a, long long b) 
{ 
    if (a == 0) 
        return b; 
    return gcd(b % a, a); 
} 
long long findGCD(long long arr[], long long n) 
{ 

	const unsigned int M = 1000000007;
    long long result = arr[0]; 
    for (long long i = 1; i < n; i++) 
    { 
        result = gcd(arr[i], result); 
  
        if(result == 1) 
        { 
           return 1; 
        } 
    } 
    return result%M; 
}

int main()
{
	long long n,q;
	cin>>n>>q;
	long long arr[n];
	for(long long i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	while(q--)
	{
		long long i,x;
		cin>>i>>x;
		arr[i-1]=arr[i-1]*x;
		cout<<findGCD(arr,n)<<endl;
	}
	
}