#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {


    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n,f;
    cin >> n >> f;
    ll val =  n%7;
    ll ans = ((f+val-1)%7) + 1;
    cout << ans <<'\n';
    return 0;
}
