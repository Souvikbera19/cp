#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {


    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        /* code */
        //parity check
        ll n;
        cin >> n;
        vector<ll>v(n);
        for(auto &x:v) cin >> x;
        bool ans = 1;
        for(int i =0;i<n-1;i++){
            if(v[i]%2==v[i+1]%2){
                ans = 0;
                break;
            }
        }
        if(ans) cout << "YES" << '\n';
        else cout << "NO" << '\n';
    }
    

    return 0;
}