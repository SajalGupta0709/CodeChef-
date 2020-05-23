#include <iostream>
#include <math.h>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	int m[t];
	for(int i=0;i<t;i++)
	    cin>>m[i];
    int x=*max_element(m, m+t);
	long long int c[x+1];
	for(int i=0;i<x+1;i++)
	    c[i]=0;
    int v[]={2,3};
    c[0]=0;c[1]=0;c[2]=1;c[3]=1;
    for(int i=4;i<=x;i++){
        for(int j=0;j<2;j++){
            c[i]+=c[i-v[j]]%1000000009;
        }
    }
    for(int i=0;i<t;i++)
    std::cout<<c[m[i]]%1000000009<< std::endl;
	return 0;
}