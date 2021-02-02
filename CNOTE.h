#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>> t;
    while(t-->0){
	  int x,y,k,n;
	  cin>>x>>y>>k>>n;
	  x-=y;
	  int p,c,flag=0;
	  for(int i=0;i<n;i++){
	      cin>>p>>c;
	      if(x<=p&& k>=c) flag=1;
	  }
	  if(flag==1)
	    std::cout << "LuckyChef" << std::endl;
	  else  std::cout << "UnluckyChef" << std::endl;  
	}
	return 0;
}
