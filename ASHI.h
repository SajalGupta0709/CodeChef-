#include<cstdio>
#include<algorithm>
#include<vector>
#include<cstring>
#include<cmath>
#include<stack>
#include<queue>
#include<string>
#include<iostream>
#include<map>
#include<set>
using namespace std;
 
#define sd(a) scanf("%lld",&a)
#define pd(a) printf("%d\n",(a))
#define LL long long
#define F first
#define S second
#define MP make_pair
#define PB push_back
long long m[3][10010],num;
vector< pair<pair<long long,long long>,pair<long long,pair<long long,long long> > > > v;
int main()
{
	long long t,i,j,b,c,s,init,mini;
	long long dist,x,x1,y,p,r,q;
	sd(t);
	while(t--)
	{
		v.clear();
		sd(x1);
		sd(b);
		for(i=0;i<b;++i)
		{
			sd(x);
			sd(y);
			v.PB(MP(MP(x,1),MP(i,MP(y,0))));
		}
		sd(c);
		for(i=0;i<c;++i)
		{
			sd(p);
			sd(q);
			sd(r);
			v.PB(MP(MP(p,0),MP(i,MP(q,r))));
		}
		v.PB(MP(MP(x1,1),MP(b,MP(1,0))));
		num=v.size();
		mini=num;
		sort(v.begin(),v.begin()+num);
		for(i=num-1;i>=0;--i)
		{
			if(v[i].F.S==0)
			{
				init=0;
				s=0;
				for(j=i+1;j<num;++j)
				{
					if(v[j].F.S==1)
					{
						s-=v[j].S.S.F;
					}
					else
					{
						s-=min(m[0][v[j].S.F],m[1][v[j].S.F]);
						break;
					}
				}
				m[0][v[i].S.F]=-s;
				init=v[i].S.S.F;
				s=init+v[i].S.S.S;
				for(j=i+1;j<num;++j)
				{
					if(v[j].F.S==1)
					{
						s-=v[j].S.S.F;
					}
					else
					{
						s-=min(m[0][v[j].S.F],m[1][v[j].S.F]);
						break;
					}
				}
				if(s<0)
					init=init-s;
				m[1][v[i].S.F]=init;
				mini=i;
			}
		}
		if(mini==num)
			init=0;
		else
			init=min(m[0][v[mini].S.F],m[1][v[mini].S.F]);
		for(i=mini-1;i>=0;--i)
		{
			init+=v[i].S.S.F;
		}
		printf("%lld\n",init);
	}
} 