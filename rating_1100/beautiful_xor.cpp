#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve(){
    int a,b;
    cin >> a >> b;
    int val = a ^ b;
    if(b==a) cout << 0 << '\n'; 
    else if(b>a){
        cout << -1 << "\n"; 
    }
    else{
        if(val<10){
            cout << 1 << "\n";
            cout << val <<'\n';
        }
        else{
            cout << 2 << '\n';
            cout << a << " " << b << '\n';
        }
    }

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