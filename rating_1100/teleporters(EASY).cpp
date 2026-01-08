#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {


    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        ll n,c;
        cin >> n >> c;
        vector<ll>sum;
        for(int i=1;i<=n;i++){
            ll x;
            cin >> x;
            sum.push_back(x+i);
        }
        sort(sum.begin(),sum.end());
        ll count = 0;
        ll i =0;
        while (i<sum.size() && c>=sum[i])
        {
            count++;
            c-=sum[i];
            i++;
        }
        
        
        cout << count << '\n';

    }

    return 0;
}