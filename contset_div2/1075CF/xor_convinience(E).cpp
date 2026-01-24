#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve(){
    ll n;
    cin >> n;
    if(n%2){
        cout << n-1 << ' ';
        ll o = 3;
        ll e= 2;
        n-=2;
        for(int i =2;i<=n+1;i++){
            if(i%2){
                cout << e << ' ';
                e+=2;
            }
            else{
                cout << o << ' ';
                o+=2;
            }
        }
        cout << 1 << '\n';
    }
    else{
        cout << n << ' ';
        n-=2;
        ll o = 3;
        ll e = 2;
        for(int i =2;i<=n+1;i++){
            if(i%2){
                cout << e << ' ';
                e+=2;
            }
            else {
                cout << o << ' ';
                o+=2;
            }
        }
        cout << 1 << '\n';
    }
}
int main() {
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}