#include<bits/stdc++.h>
using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
#define ordered_set tree<int, null_type,less_equal<int>, rb_tree_tag,tree_order_statistics_node_update>
#define ll long long
#define int long long
#define pb push_back
#define mod 1000000007
#define fast() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
main()
{
	fast();
	int t;
	cin>>t;
	while(t--)
	{
		int n,k,q;
		cin>>n>>k>>q;
		string s;
		//s++;
		cin>>s;
		int pref0[n+1]={0};
		int pref1[n+1]={0};
		if(s[0]=='0')
		pref0[1]=1;
		else
		pref1[1]=1;
		for(int i=1;i<n;i++)
		{
			if(s[i]=='0')
			{
				pref0[i+1]=pref0[i]+1;
				pref1[i+1]=pref1[i];
			}
			else
			{
				pref0[i+1]=pref0[i];
				pref1[i+1]=pref1[i]+1;
			}
		}
		int ans1[n+1];
		int ans2[n+1];
		int ans[n+1];
		for(int i=1;i<=n;i++)
		{
			int idx=upper_bound(pref0+i,pref0+n+1,k+pref0[i-1])-(pref0);
			idx--;
			ans1[i]=idx;
			int idx1=upper_bound(pref1+i,pref1+n+1,k+pref1[i-1])-(pref1);
			idx1--;
			ans2[i]=idx1;
		}
		ordered_set se;
		for(int i=1;i<=n;i++)
		{
			ans[i]=min(ans1[i],ans2[i]);
			//cout<<ans[i]<<" ";
			se.insert(ans[i]);
		}
		int fpref[n+1]={0};
		fpref[1]=ans[1];
		for(int i=2;i<=n;i++)
		{
			fpref[i]=fpref[i-1]+ans[i];
		}
		while(q--)
		{
			int l,r;
			cin>>l>>r;
			int val=se.order_of_key(r+1);
			val=max(val-(l-1),(ll)0);
			int t1=l+val-1;
			int sum1=fpref[t1]-fpref[l-1];
			int rem=(r-l+1-val)*r;
			int tsum=sum1+rem;
			int diff=((r*(r+1))/2)-(l*(l-1))/2;
			cout<<tsum-diff+(r-l+1)<<endl;
			
			
		}
		
		
	}	
}


