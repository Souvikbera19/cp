#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {


    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        if(n==3||n==2) cout << 2 << '\n';
        else if(n%2==0) cout << 0 << '\n';
        else cout << 1 << '\n';

    }

    return 0;
}