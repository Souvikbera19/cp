#include <bits/stdc++.h>
using namespace std;
using ll = long long;
ll max_appr(vector<ll>arr,ll n){
    ll count = 0;
    ll ans = INT_MIN;
    for(int i =0;i<n-1;i++){
        if(arr[i]==arr[i+1]) count++;
        else{
            ans = max(ans,count);
            count = 0;
        }
    }
    return ans;
}
int main() {


    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        vector<ll>a(n),b(n);
        for(int i  =0;i<n;i++) cin >> a[i];
        for(int i =0;i<n;i++) cin >> b[i];
        ll count_A = max_appr(a,n);
        ll count_b = max_appr(b,n);
    }

    return 0;
}