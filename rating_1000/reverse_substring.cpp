#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {


    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n;
    cin >> n;
    string s;
    cin >> s;
    ll l,r;
    bool cond=0;
    for(int i =0;i<n-1;i++){
        if(s[i]-'a'>s[i+1]-'a'){
            l=i;
            r=i+1;
            cond=1;
            break;
        }
    }
    if(cond){
        cout <<"YES" << '\n';
        cout << l+1 << ' ' << r+1 << '\n';
    }
    else cout << "NO" << '\n';

    return 0;
}