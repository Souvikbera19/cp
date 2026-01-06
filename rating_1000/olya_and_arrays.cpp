#include <bits/stdc++.h>
using namespace std;
using ll = long long ;

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<ll> second_smallest;
        ll min_val = INT_MAX;
        for(int i=0;i<n;i++){
            ll m;
            cin >> m;
            vector<ll> arr(m);
            for(ll i=0;i<m;i++) cin >> arr[i];
            sort(arr.begin(),arr.end());
            min_val = min(min_val,arr[0]);
            second_smallest.push_back(arr[1]);
        }
        ll ans = 0;
        sort(second_smallest.begin(),second_smallest.end());
        second_smallest[0]= min_val;
        for(auto it:second_smallest) ans += it;
        cout << ans << endl;
    }
    return 0;
}