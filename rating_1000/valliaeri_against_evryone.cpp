#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {


    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){

    
    int n;
    cin >> n;
    unordered_set<ll>seen;
    bool cond = false;
    for(int i = 0;i<n;i++){
        ll x;
        cin >> x;
        if(seen.count(x)){
            cond = true;
        }
        seen.insert(x);
    }
    
    
    if(cond) cout <<"Yes" << '\n';
    else cout << "No" << '\n';
    }

    return 0;
}