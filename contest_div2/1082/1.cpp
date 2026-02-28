#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {


    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    while(t--){
        ll x,y;
        cin >> x>>y;
        if((x-2*y)%3==0&&x-2*y>=0){
            cout << "Yes\n";
        }
        else cout << "No\n";
    }

    return 0;
}