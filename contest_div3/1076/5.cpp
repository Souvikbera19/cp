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
        vector<ll> v(n);
        for(auto &x : v) cin >> x;
        set<ll> s(v.begin(), v.end());
        vector<ll> val(n + 1, -1);
        queue<ll> q;
        for(auto x : s){
            if(x <= n){
                val[x] = 1;        
                q.push(x);
            }
        }

        while(!q.empty()){
            ll value = q.front();
            q.pop();

            for(auto it : s){
                if(it == 1) continue;   

                ll y =1ll*value * it;
                if(y > n) break;

                if(val[y] == -1){
                    val[y] = val[value] + 1;
                    q.push(y);
                }
            }
        }

        for(int i = 1; i <= n; i++){
            cout << val[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
