#include<bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin>>t;
		while(t--){
		int n,m;
		cin>>n>>m;
		int k;
		cin>>k;
		set<pair<int,int>> s;
		for(int i=0;i<k;i++){
			int x,y;
			cin>>x>>y;
			s.insert({x,y});
			}
		long long int count=0;
		for(auto it=s.begin();it!=s.end();it++){
			int x=it->first;
			int y=it->second;
			if(s.find({x+1,y}) == s.end()){count+=1;}
			if(s.find({x-1,y}) == s.end()){count+=1;}
			if(s.find({x,y+1}) == s.end()){count+=1;}
			if(s.find({x,y-1}) == s.end()){count+=1;}
			}
		cout<<count<<endl;
		}
	
	}
