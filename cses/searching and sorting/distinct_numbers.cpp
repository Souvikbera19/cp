#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {


    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    set<ll>s;
    for(ll i =0;i<n;i++){
        ll x;
        cin >> x;
        s.insert(x);
    }
    cout << s.size() << "\n";
    return 0;
    

    return 0;
}