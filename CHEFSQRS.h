#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>> t;
	while(t-->0){
	    int n;
	    cin >> n;
	    long long int a,b,ans=-1;
	    
	    for(int i=1;i<=sqrt(n);i++){
	        if(n%i==0 && i!=(n/i)){
	            a = (n/i + i)/2;
                b = (n/i - i)/2;
                if(b*b+n==a*a) {
                    if(ans==-1) ans=b*b;
                    else ans=min(ans,b*b);       
	        }
	    }
	    }
	    cout<<ans<<"\n";
	}
	return 0;
}
