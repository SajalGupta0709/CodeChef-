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
	    int a[n],u;
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	    int v[n],j=1 ;
        v[0]=a[0];
        for(int i=1;i<n;i++){
            u=upper_bound(v,v+j,a[i])-v;
            if(u==j){
               v[j]=a[i];
                j++;
            }
            else v[u]=a[i];
        }
	    cout<<j;
	    for(int i=0;i<j;i++)
	        cout<<" "<<v[i];
	   cout<<"\n";     
	}
	return 0;
}
