#include <iostream>
#include <bits/stdc++.h>
#include<algorithm>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>> t;
	while(t-->0){
	    int n,k;
	    cin >> n >> k;
	    int a[n];
	    for(int i=0;i<n;i++)
	        cin >> a[i];
	    int f[k+1]{0};
	    int max=0,i=0,c=0,temp=0;
	    while(i<n)  {
	        if(c<k){
	            f[a[i]]+=1;
	            if(f[a[i]]==1) c++;
	            i++;
	        }
	        else{
	            f[a[temp]]-=1;
	            if (f[a[temp]]==0)
                    c-=1;
                temp+=1;
	        }
	        if(k>c) {if(max<(i-temp)) max=i-temp;}
	  }
	  	cout << max << endl;
	    }
	return 0;
}
