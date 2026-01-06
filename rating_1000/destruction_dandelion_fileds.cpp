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
        vector<ll>v(n);
        ll odd_cnt = 0;
        ll even_sum =0;
        vector<ll>odd_sum;
        for(int i =0;i<n;i++){
            cin >> v[i];
            if(v[i]%2==0){
                even_sum+=v[i];
            }
            else{
                odd_cnt++;
                odd_sum.push_back(v[i]);

            }
        }
        if(odd_cnt==0)cout << 0 <<'\n';
        else{
            ll val =0;
            sort(odd_sum.begin(),odd_sum.end());
            reverse(odd_sum.begin(),odd_sum.end());
            ll len  = odd_sum.size();
            for(int i =0;i<len/2;i++){
                val += odd_sum[i];
            }

            cout << val+even_sum <<'\n';
        }
        

    }

    return 0;
}