#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;


int main() {
    ll t;cin>>t;
    ll n,z,x;
    for(ll i=0;i<t;i++){
        cin>>n>>z;
        priority_queue<ll> q;
        for(ll j=0;j<n;j++){
            cin>>x;
            q.push(x);}
        ll c=0,f=0;
        while(z>0){
            x=q.top();
            z=z-x;
            q.pop();
            q.push(x/2);
            c++;
            if(q.top()==0)
                {f=1; break;}
        }
        if(f==1)  cout<<"Evacuate"<<"\n";
        else 
        cout<<c<<"\n";
        }
        
	return 0;
	
}
