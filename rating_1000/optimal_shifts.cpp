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
        ll n;
        string s;
        cin >> n >> s;
        n *=2;
        s +=s;
        ll ans = INT_MIN;
        ll cnt_0=0;
        for(int i =0;i<n;i++){
            if(s[i]=='0') cnt_0++;
            else{
                ans=max(ans,cnt_0);
                cnt_0=0;
            }
        }
        cout << ans <<'\n';
    }
    

    return 0;
}