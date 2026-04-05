#include <bits/stdc++.h>
using namespace std;
using ll = long long;
bool isPrime(ll n){
    for(int i =2;i*i<=n;i++){
        if(n%i==0) return false;
    }
    return true;
}
ll lcm(ll a,ll b){
    return a*b/__gcd(a,b);
}
void solve(){
    ll n;
    cin >> n;
    ll temp = n;
    if(isPrime(n)){
        cout <<1 << ' ' << n-1 << '\n';
        return;
    }
    if(n%2==0){
        cout << n/2 << ' ' << n/2 << '\n';
        return;
    }
    vector<ll>factors;
    for(int i =2;i*i<=temp;i++){
        if(n%i==0){
            factors.push_back(i);
            if(i!=n/i) factors.push_back(n/i);
        }
    }
    sort(factors.begin(),factors.end());
    ll ans = LLONG_MAX;
    ll l = LLONG_MAX;
    ll r = LLONG_MAX;
    for(auto it:factors){
        ll val = lcm(it,n-it);
        if(val<ans){
            ans =val;
            l = it;
            r= n-it;
        }
    }
    cout << l << ' ' << r << '\n';

}
int main() {


    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        /* code */
        solve();
    }
    

    return 0;
}