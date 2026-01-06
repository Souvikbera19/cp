#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve(){
    int n;
    cin >> n;
    ll count = 0;
    ll f_d = 0;
    while(n!=0){
        f_d = n%10;
        n /=10;
        count++;
    }
    cout << (count-1) * 9+ f_d << '\n';
}
int main() {


    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        solve()
;    }

    return 0;
}