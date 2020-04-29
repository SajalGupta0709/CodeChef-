#include <iostream>
#include <bits/stdc++.h>
#include<set>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>> t;
	set<int>s;
	set<int>p;p.insert(2);
	for(int i=3;i<200;i+=2){int c=0;
	    for(int j=2;j<=i;j++)
	        if(i%j==0) c++;
	    if(c==1)    p.insert(i);
	}
	for(int i=6;i<=200;i++){
	    for(int j=2;j<=i;j++){
	        if(i%j==0 && p.count(j)==1){ if(p.count(i/j)&&j*j!=i)   s.insert(i);}
	}}
	while(t-->0){
	    int n;
	    cin >> n;
	    int f=0;
	    for(int i=6;i<n;i++){
	        int j=n-i;
	        if(s.count(i)==1&&s.count(j)==1) {f=1;break;}
	    }
	    if(f==1)    cout<<"YES\n";
	    else cout<<"NO\n";
	}
	return 0;
}
