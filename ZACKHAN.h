#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>> t;
	while(t-->0){
	    int l,b;
	    cin >> l >>b;
	    cout<<__gcd(l,b)<<"\n";
	}
	return 0;
}
