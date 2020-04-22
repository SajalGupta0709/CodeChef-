#include <iostream>
using namespace std;
bool check(int x,int y){
    printf("? %d %d\n", x, y);
    fflush(stdout);
    string r;
    cin>> r;
    return r=="YES";
}
int X(int y){
    int l=0,r=1000;
    while(l<r){
        int x=(l+r+1)/2;
        if(check(x,y)) l=x;
        else r=x-1;
    }
    return l;
}
int Y(int x){
    int l=0,r=1000;
    while(l<r){
        int y=(l+r+1)/2;
        if(check(x,y)) l=y;
        else r=y-1;
    }
    return l;
}
int main() {
	// your code goes here
	int sqb=X(0)*2;
	int htb=X(sqb);
	int tv=Y(0);
	int th=tv-sqb;
	int a=sqb*sqb + htb*th;
	cout<<"! "<<a;
	return 0;
}
