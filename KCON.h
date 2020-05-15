#include<bits/stdc++.h>
using namespace std;

long long int bestprefixsumofarray(long long int*b   , long long int n){
    long long int max = b[0] , best = b[0];
    for(int i = 1; i < n; i++){
        max += b[i];
        if(max > best){
            best = max;
        }
    }
    return best;
}

long long int bestsuffixsumofarray(long long int *b , long long int n){
    long long int max = b[n-1] , best = b[n-1];
    for(int i = n-2; i >= 0; i--){
        max += b[i];
        if(max > best){
            best = max;
        }
    }
    return best;
}


long long int kadan(long long int*a , long long int n){
    long long int best = a[0];
    long long int current = 0;
    for(long long int i = 0;i < n; i++){
        if(a[i]+ current < a[i]){
            current = a[i];
            if(best < current){
                best = current;
            }
        }
        else if(current + a[i] > best){
            best = current + a[i];
            current = best;
        }
        else
        {
            current += a[i];
        }
    }
    return best;
}


int main(){
    long long int t;
    cin >> t;
    while(t--){
        long long int n , k;
        cin >> n >> k;
        long long int*a = new long long int[n];
        long long int sum = 0;
        for(int i = 0; i < n; i++){
            cin >> a[i];
            sum += a[i];
        }
        if(k == 1){
            cout << kadan(a,n) << endl;
        }
        else{
            
            long long int v1 = bestprefixsumofarray(a , n);
            long long int v2 = bestsuffixsumofarray(a , n);
            long long int*b = new long long int[2*n];
            for(int  i = 0; i < n; i++){
                b[i] = a[i];
                b[i+n] = a[i];
            }
            long long int kadanans = kadan(b , 2*n);
            long long int sum = 0;
            for(int i = 0; i < n; i++){
                sum += a[i];
            }
            if(sum < 0){
                cout << kadanans << endl;
            }
            else{
                long long int po = (k-2)*sum;
                long long int mainvalue1 = v1 + v2 + po;
                // cout << "bestprefix " << v1 << endl;
                // cout << "bestsuffix " << v2 << endl;
                // cout << "mainvalue " << mainvalue1 << endl;
                // cout << "kadan ans of 2a " << kadanans << endl;
                if(mainvalue1 > kadanans){
                    cout <<  mainvalue1 << endl;
                }
                else{
                    cout << kadanans << endl;
                }
            }
            
            delete[] b;
        
        }

        
        delete[] a;
    }
}