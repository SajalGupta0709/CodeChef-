#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>> t;
    while(t-->0){
	  int n,c,s=0,a;
	  cin>>n>>c;
	  for(int i=0;i<n;i++){
	      cin>>a; s+=a;
	  }
	  if(s<=c)
	  std::cout <<"Yes"<< std::endl;
	  else std::cout <<"No"<< std::endl;
	}
	return 0;
}
