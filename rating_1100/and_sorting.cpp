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
        ll n;
        cin >> n;
        vector<ll>v(n);
        for(auto &x:v) cin >> x;
        // sort(v.begin(),v.end());
        vector<ll>and_v;
        for(int i =0;i<n;i++){
            if(i!=v[i]){
                and_v.push_back(v[i]);
            }
        }
        ll ans=and_v[0];
        for(int i =0;i<and_v.size();i++){
            ans &= and_v[i];
        }
        cout << ans << '\n';
    }
    

    return 0;
}