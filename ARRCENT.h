#include <iostream>
#define md 1000000007
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>> t;
	while(t-->0){
	       int n;
	       cin>>n;
	       int a[n],p[n+2]={0},s[n+2]={0};
	       for(int i=0;i<n;i++)
	          { cin>>a[i];
	            p[i+1]=a[i];
	            s[i+1]=a[i];}
	       int j=0;
	       while(j<=3){j++;
	           for(int i=1;i<=n;i++)
	                p[i]=(p[i]+p[i-1])%md;
	           for(int i=n-1;i>=1;i--)
	                s[i]=(s[i+1]+s[i])%md;
	       }
	       for(int i=1;i<=n;i++)
	            cout<<(p[i-1]+s[i+1])%md<<" ";
	       cout<<"\n";         
	}
	return 0;
}
