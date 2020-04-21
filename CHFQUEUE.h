#include <bits/stdc++.h>
#define int long long
using namespace std;
int32_t main() {
    //Fast IO
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
        int n, k;
        cin>>n>>k;
        int arr[n];
        for(int i = 0;i<n;i++) cin>>arr[i];
        int ans = 1;
        stack<pair<int, int>> st;
        for(int i = 0;i<n;i++){
            while(!st.empty() && st.top().first>arr[i]){
                pair<int, int> element = st.top();
                int chaos = i - element.second + 1;
                ans*=chaos;
                ans%= (1000000007);
                st.pop();
            }
            st.push(make_pair(arr[i], i));
        }
        cout<<ans<<endl;
    return 0;
}
