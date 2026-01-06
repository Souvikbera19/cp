#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {


    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        ll n,k,b,s;
        cin >> n >> k >> b >> s;
        ll s_min = k*b;
        ll s_max = k*b + (k-1)*n;
        if(s<s_min || s>s_max) cout <<-1 <<'\n';
        else{
            ll b_m = k*b;
            vector<ll>v(n);
            v[0] = b_m;
            s -=b_m;
            for(int i = 0;i<n;i++){
                ll val = min(k-1,s);
                v[i] += val;
                s -= val;
            }

            for(auto it:v) cout << it <<' ';
            cout << '\n';
        }
    }

    return 0;
}