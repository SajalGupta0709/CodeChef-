#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>> t;
	while(t-->0){
	       string s;
	       cin>>s;
	       int ans=0,n=s.length();
	       for(int x=1;x*x+x<=n;x++){
	           int c1=0,c0=0;
	           for(int i=0;i<x*x+x;i++){
	               if(s[i]=='1') c1++;
	               else     c0++;
	           }
	           if(c1==x) ans++;
	           for(int i=x*x+x;i<n;i++){
	               if(s[i-(x*x+x)]=='1') c1--;
	               else c0--;
	               if(s[i]=='1') c1++;
	               else c0--;
	           if(c1==x)  ans++;
	           }
	       }
	       cout<<ans<<"\n";
	}
	return 0;
}
