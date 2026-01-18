#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve(){
    ll n;
    cin >> n;
    vector<ll>odd_arr;
    vector<ll>even_arr;
    for(int i =0;i<n;i++){
        ll x;
        if(x%2) odd_arr.push_back(x);
        else even_arr.push_back(x);
    }
    sort(odd_arr.begin(),odd_arr.end());reverse(odd_arr.begin(),odd_arr.end());
    sort(even_arr.begin(),even_arr.end());reverse(even_arr.begin(),even_arr.end());

    if(odd_arr.size()==0){
        for(int i =0;i<n;i++){
            cout << 0 << ' ';
        }
        cout << '\n';
        return;
    }
    ll val = odd_arr[0];
    for(int i =0;i<even_arr.size();i++){
        cout << val << ' ';
        val += even_arr[i];
    }
    cout << val << ' ';
    for(int i =1;i<odd_arr.size();i++){

    }

    

}
int main() {


    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; 
    cin >> t;
    while(t--){
        solve();
    }

    return 0;
}