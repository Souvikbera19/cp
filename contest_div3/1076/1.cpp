#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {


    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        ll n,s,x;
        cin >> n >> s >> x;
        ll sum =0;
        for(int i =0;i<n;i++){
            ll x;
            cin >> x;
            sum+=x;
        }
        if((s-sum)%x==0){
            cout << "YES" << '\n';
        }
        else cout << "NO" << '\n';
    }

    return 0;
}