#include <iostream>
#include <bits/stdc++.h>
#include <set> 
#include <cmath> 
using namespace std;
int prime(int p){
    for(int i=2;i<=sqrt(p);i++){
        if(p%i==0) return 0;
    }
    return 1;
}
int main() {
	int t;
	cin>> t;
	    set<int> p;
	    p.insert(2);
	    p.insert(3);
	    for(int i=5;i<100000;i+=2){
	        if(prime(i)==1) p.insert(i);
	    }
	    int f[100001]={0};
	    for(int i=2;i<100001;i++){int c=0;
	        for(int j=1;j<=sqrt(i);j++){
	            if(i%j==0){
	                if(p.count(j))c++;
	                if(i/j!=j && p.count(i/j)) c++;
	            }
	        }
	        f[i]=c;
	    }
	while(t-->0){
	    int l,g,k,c=0;
	    cin>>l>>g>>k;
	    for(int i=l;i<=g;i++){
	        if(f[i]==k) c++;
	    }     
	    printf("%d\n",c);
	}
	return 0;
}
