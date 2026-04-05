#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {


    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        ll n,q;
        vector<ll>v(n);
        ll sum =0;
        for(auto &x:v) {
            cin >>x;
        }
        map<ll,ll>mpp;
        for(int  i =1;i<=n;i++){
            mpp[i]=v[i-1];
        }
        while(q--){
            ll t;
            cin >> t ;
            if(t==1){
                ll idx,x;
                cin >> idx >> x;
                sum-=mpp[idx];
                mpp[idx]=x;
                sum+=x;
                cout << sum << '\n'; 
            }
            else if(t==2){
                
            }
        }

    }

    return 0;
}