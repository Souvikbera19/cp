#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {


    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        int k,n;
        cin >> k >> n;
        while(k!=0){
            n *=2;
            k--;
        }
        cout << n << '\n';
    }

    return 0;
}