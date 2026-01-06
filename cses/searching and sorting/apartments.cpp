#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve(){
    ll n,m,k;
    cin >> n >> m >> k;
    vector<ll> w(n);
    for(int i =0;i<n;i++) cin >> w[i];
    vector<ll>s(m);
    for(int i =0;i<m;i++) cin >> s[i];
    sort(w.begin(),w.end());
    sort(s.begin(),s.end());

    ll count = 0;
    ll i =0;
    ll j = 0;

    while(j<m && i<n){
        if(abs(w[i]-s[j])<=k){
            count++;
            i++;
            j++;
        }
        else if(w[i]+k<s[j]) i++;
        else if(w[i]-k>s[j]) j++;
    }
    cout << count << "\n";
    
}
int main() {


    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    

    return 0;
}