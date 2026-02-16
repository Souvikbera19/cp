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
            /* code */
            vector<int>v(n);
            for(auto &x:v) cin >> x;
            ll cnt = 0;
            for(int i =0;i<n-1;i++){
                if(v[i]+v[i+1]==7){
                    if(i+2<n&&(v[i+1]==v[i+2]||v[i+1]+v[i+2]==7)){
                        i++;
                    }
                    cnt++;
                }
                if(v[i]==v[i+1]){
                    if(i+2<n&&(v[i+1]==v[i+2]||v[i+1]+v[i+2]==7)){
                        i++;
                    }
                    cnt++;
                }
            }
            cout << cnt << '\n';
        
    }

    return 0;
}