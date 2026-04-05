#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {


    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        ll n,k;
        cin >> n >> k;
        vector<array<ll,3>> arr(n);
        for(int i =0;i<n;i++){
            ll l,r,real;
            cin >> l >> r >> real;
            arr[i][0]=real;
            arr[i][1]=l;
            arr[i][2]=r;
        }
        sort(arr.begin(),arr.end());
        ll coins = k;
        for(int i =0;i<n;i++){
            if(coins>=arr[i][1]&&coins<=arr[i][2]){
                coins=max(coins,arr[i][0]);
            }
        }
        cout << coins << '\n';

    }

    return 0;
}