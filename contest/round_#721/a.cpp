/* author : @akash kumar */


#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define mod 1000000007
#define pb push_back

int solve(int n)
{
	int tt=n;
	for(int i=0;;i++)
	{
		tt=tt & (n-i);
		if(tt==0)
		{
			return n-i;
		}
	}
	return -1;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
    	int n;
    	cin>>n;
    	cout<<solve(n);
    	cout<<"\n";
    }
    return 0;
}
