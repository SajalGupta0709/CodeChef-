#include <iostream>
#include <bits/stdc++.h>
#include <map>
using namespace std;

int main() {
	// your code goes here
	int n,m;
	cin >>n >> m;
	map<string,string> in;
	map<string,int> c;
	map<string,int> cr;
	for(int i=0;i<n;i++){
	    string x,y;
	    cin >> x>>y;
	    in[x]=y;
	    c[x]=0;
	    cr[y]=0;
	}
	for(int i=0;i<m;i++){
	    string x;
	    cin >> x;
	    c[x]++;
	    cr[in[x]]++;
	}
	string x;int y;
	auto i=cr.begin();
	x=i->first;
	y=i->second;
	++i;
    while(i!=cr.end()){
        if(y<i->second){ x=i->first; y=i->second;}
        else if(y==i->second) {
            if(x>i->first) x=i->first;
        }
        i++;
    }
    cout << x<<endl;
	i=c.begin();
	x=i->first;
	y=i->second;
	++i;
    while(i!=c.end()){
        if(y<i->second) {x=i->first; y=i->second;}
        else if(y==i->second) {
            if(x>i->first) x=i->first;
        }
        ++i;
    }
    cout << x<< endl;
	return 0;
}
