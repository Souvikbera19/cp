#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        bool even = false;
        bool odd = false;
        vector<ll>arr(n);
        for(ll i =0;i<n;i++){
            cin >> arr[i];
            if(arr[i]%2==0) even = true;
            else odd = true;
        }
        if(even && odd) sort(arr.begin(),arr.end());
        for(auto it:arr) cout << it << " ";
        cout << "\n";
    }
    return 0;
}