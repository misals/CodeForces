#include<iostream>
#include<string>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		string s;
		cin>>n>>s;
		for(int i=0;i<n;i++)
		{
			if(s[i]=='t')
			{
				for(int j=i+1;j<n;j++)
				{
					if(s[j]=='r')
					{
						char temp=s[i];
						s[i]=s[j];
						s[j]=temp;
						break;
					}
				}
			}
		}
		cout<<s<<endl;
	}
}