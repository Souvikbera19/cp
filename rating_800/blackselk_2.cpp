
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {


    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >>t;
    while(t--){
        ll n;
        cin >> n;
        vector<ll>arr(n);
        for(ll i =0;i<n;i++){
            cin >> arr[i];
        }
        ll sum = 0;
        for(int i = 0;i<n-1;i++){
            sum += abs(arr[i]-arr[i+1]);
        }

        ll val = max(abs(arr[1]-arr[0]),abs(arr[n-1]-arr[n-2]));
        for(int k=1;k<n-1;k++){
            ll temp = abs(arr[k]-arr[k-1])+abs(arr[k+1]-arr[k])-abs(arr[k+1]-arr[k-1]);
            val = max(val,temp);
        }

        cout << sum - val << '\n';
    }

    return 0;
}