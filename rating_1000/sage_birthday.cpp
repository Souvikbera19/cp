#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {


    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n;
    cin >> n;
    vector<ll>v(n);
    for(auto &x:v)cin >> x;
    sort(v.begin(),v.end());
    // gaps to be filled;
    cout << (n/2-((n%2)?0:1)) << '\n';
    ll l =0;
    ll r =n-1;
    while(l<r){
        cout << v[r] << ' ' << v[l] << ' ';
        l++;
        r--;
    }
    if(n%2) cout << v[l] << '\n';
}