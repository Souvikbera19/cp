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
        vector<ll>v(n);
        for(auto &x:v) cin >> x;
        vector<ll>max_arr(n);
        max_arr[0]=v[0];
        for(int i =1;i<n;i++){
            max_arr[i]=max(max_arr[i-1],v[i]);
        }
        ll sum =0;
        for(int i =n-1;i>=0;i--){
            cout << sum + max_arr[i] << ' ';
            sum+=v[i];
        }
    }
    

    return 0;
}