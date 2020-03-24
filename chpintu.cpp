#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
        cin.tie(NULL);
    
	int t;
	cin>>t;
	while(t--)
	{
		int m,n,i;
		cin>>n>>m;
		int f[n],p[n];
		for(i=0;i<n;i++)
		{
			cin>>f[i];
		}
		for(i=0;i<n;i++)
		{
			cin>>p[i];
		}
		int freq[m+1];
		bool arr[m+1];
		memset(freq,0,sizeof(freq));
		memset(arr,false,sizeof(arr));
		for(i=0;i<n;i++)
		{
			freq[f[i]] += p[i];
			arr[f[i]]=true;
		}
		int min = INT_MAX;
		for(i=0;i<=m;i++)
		{
			if(arr[i]==true && freq[i]<min)
			{
				min=freq[i];
			}
		}
		cout<<min<<endl;
	}
}
