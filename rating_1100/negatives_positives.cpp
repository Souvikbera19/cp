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
        ll n;
        cin >> n;
        ll neg_cnt = 0;
        ll sum = 0;
        ll min_val = LLONG_MAX;
        vector<ll>v(n);
        for(int i= 0;i<n;i++){
            cin >> v[i];
            if(v[i]<0){
                neg_cnt++;
                v[i]=-v[i];
            }
            sum += v[i];
            min_val=min(v[i],min_val);

        }

        if(neg_cnt%2==0){
            cout << sum << '\n';
        }
        else{
            cout << sum - 2*min_val << '\n';
        }
    }
    

    return 0;
}