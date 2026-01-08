#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define clz __builtin_clzll
void solve(){
    int a,b;
    cin >> a >> b;
    ll len_a = clz(1)-clz(a);
    ll len_b = clz(1)-clz(b);
    if(len_a<len_b){
        cout << -1 << '\n';
        return;
    }

    if(len_b==len_a){
        cout << 1 << '\n';
        cout << (a^b) << '\n';
        return;
    }

    cout << 2 << '\n';
    cout << (a^b^(1ll<<len_a)) <<  ' ' << (1ll<<len_a) << '\n';




}
int main() {


    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >>t;
    while(t--){
        solve();
    }

    return 0;
}