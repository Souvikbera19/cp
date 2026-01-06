#include <bits/stdc++.h>
using namespace std;
using ll = long long;
bool fair_num(ll n){
    ll num = n;
    while(num!=0){
        ll x = num%10;
        if(x!=0 && n%x!=0){
            return false;
        }
        num /= 10;
    }
    return true;
}
int main() {


    // ios::sync_with_stdio(false);
    // cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        while(!fair_num(n)){
            n += 1;
        }
        cout << n << '\n';
    }

    return 0;
}