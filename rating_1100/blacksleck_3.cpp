#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {


    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        vector<ll>arr(n);
        for(ll i=0;i<n;i++) cin >> arr[i];
        sort(arr.begin(),arr.end());
        ll ans = max(arr[0],arr[1]-arr[0]);
        cout << ans <<'\n';
    }

    return 0;
}