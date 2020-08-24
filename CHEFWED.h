#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>> t;
	while(t-->0){
	       int n,k;
	       cin>>n>>k;
	       int a[n];
	       for(int i=0;i<n;i++)
	            cin>>a[i];
	       set <int> s;
	       int c=1;
	       s.insert(a[0]);
	       for(int i=1;i<n;i++){
	           if(s.count(a[i])==0)
	               s.insert(a[i]);
	           else{c++; 
	                s.clear(); s.insert(a[i]);}
	       }
	       std::cout <<c*k<< std::endl;
	}
	return 0;
}
