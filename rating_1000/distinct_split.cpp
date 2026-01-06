#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {


    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        ll n;
        string s;
        cin >> n >> s;
        vector<ll>prefix(n);
        vector<ll>suffix(n);
        unordered_set<char>st;

        for(int i=0;i<n;i++){
            st.insert(s[i]);
            prefix[i]=st.size();
        }

        unordered_set<char> st_S;
        for(int i =0;i<n;i++){
            st_S.insert(s[n-i-1]);
            suffix[i]=st_S.size();
        }

        reverse(suffix.begin(),suffix.end());

        ll ans = LLONG_MIN;
        for(int i =0;i<n-1;i++){
            ll val = suffix[i+1]+prefix[i];
            ans = max(ans,val);
        }

        cout << ans <<'\n';

    }

    return 0;
}