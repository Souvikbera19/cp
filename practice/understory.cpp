#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {


    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll q;
    cin >> q;
    multiset<ll>st;
    while(q--){
        ll x,h;
        cin >> x >> h;
        if(x==1){
            st.insert(h);
        }
        else if(x==2){
            auto it = st.upper_bound(h);
            st.erase(st.begin(),it);
        }
        cout << st.size() << '\n';
    }

    return 0;
}