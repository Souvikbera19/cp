#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {


    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        ll a,b,c,d;
        cin >> a >> b >> c >> d;
        if(b>d) cout << -1 <<'\n';
        else if(b==d && c>a) cout <<-1 << '\n';
        else{
            ll y = d-b;
            ll x = c-a;
            if(y<x) cout << -1 <<'\n';
            else{
                cout << y + (y-x) <<'\n';
            }
        }
    }

    return 0;
}