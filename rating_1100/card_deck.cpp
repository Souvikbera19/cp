#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {


    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        int n,q;
        cin >> n>>q;;
        vector<int>v(n);
        for(auto &x:v) cin >> x;
        while(q--){
            int x;
            cin >> x;
            auto it = find(v.begin(),v.end(),x);
            cout << *it << '\n';
            rotate(v.begin(),it,it+1);
            
        }
        for(auto it:v) cout << it << ' ';
        cout <<'\n'; 

    }

    return 0;
}