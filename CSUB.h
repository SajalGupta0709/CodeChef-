#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>> t;
    while(t-->0){
	  int n,f=0;long sum=0;
	  cin>>n;
	  string s; cin>>s;
	  for(int i=0;i<s.length();i++)
	        if(s[i]=='1') f++;
	  for(int i=1;i<=f;i++)
	        sum+=(f-i+1);
	  std::cout << sum << std::endl;     
	}
	return 0;
}
