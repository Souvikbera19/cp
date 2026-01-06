#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {


    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n,x;
    cin >> n >> x;
    vector<ll>w(n);
    for(int i =0;i<n;i++) cin >> w[i];
    sort(w.begin(),w.end());
    reverse(w.begin(),w.end());
    ll i =0;
    ll j =n-1;
    ll cnt = 0;
    while(i<=j){
        ll sum = w[i]+w[j];
        if(sum>x){
            cnt++;
            i++;
        }
        else{
            cnt++;
            i++;
            j--;
        }
    }
    cout << cnt <<'\n';

    return 0;
}