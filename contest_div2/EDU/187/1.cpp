#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {


    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        ll n,m,d;
        cin >> n >> m >> d;
        ll height = (d/m)+1;
        ll ans = (n+height-1)/height;
    }

    return 0;
}