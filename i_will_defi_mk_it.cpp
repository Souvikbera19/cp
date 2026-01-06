#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {


    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        ll n,k;
        cin >> n >> k;
        vector<ll>v(n);
        for(int i =0;i<n;i++){
            cin >>v[i];
        }
        ll max_height = v[0];
        ll mxh_idx = 0;
        for(int i =0;i<n;i++){
            if(v[i]>max_height){
                max_height=v[i];
                mxh_idx=i;
            }
        }

        if(k-1==mxh_idx) cout << "YES"

        ll water_lvl = 1;

    }
    

    return 0;
}