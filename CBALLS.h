#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
	// your code goes here
//	SieveOfEratosthenes() ;
	int t;
	cin>> t;
	int n=10000;
    bool prime[n+1]; 
    memset(prime, true, sizeof(prime)); 
  
    for (int p=2; p*p<=n; p++) 
    { 
        if (prime[p] == true) 
            for (int i=p*p; i<=n; i += p) 
                prime[i] = false;  
        } 
	while(t-->0){
	    long long int ans=INT_MAX,temp,curr;
	     cin>>n;
	     int a[n];
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	    for(int i=2;i<10000;i++) {
	        if(prime[i]){
	            temp=0;
                curr=0;
                for(int j=0;j<n;j++){
                    if(a[j]>curr)
                        curr=((a[j]+i-1)/i)*i;
                    temp+=curr-a[j];
                }
                if(temp<ans)
                    ans=temp;
    	    }
    	}
    	cout<<ans<<endl;
	}
	return 0;
}
