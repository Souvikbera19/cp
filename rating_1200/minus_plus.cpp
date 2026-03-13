#include <bits/stdc++.h>
using namespace std;
using ll = long long;
ll lcm(ll a, ll b){
    return a / __gcd(a,b) * b;
}
ll sum(ll start,ll end){
    return (end+start)*(end-start+1)/2;
}
void solve(){
    ll n,x,y;
    cin >> n >> x >> y;
    if(x==y){
        cout << 0 << '\n';
        return;
    }
    ll x_cnt = n/x;
    ll y_cnt = n/y;
    ll common = n/lcm(x,y);
    x_cnt-=common;
    y_cnt-=common;
    ll x_sum = sum(n-x_cnt+1,n);
    ll y_sum = sum(1,y_cnt);
    cout << x_sum-y_sum << '\n';

}
int main() {
        int t;
        cin >> t;
        while(t--){
            solve();
        }
}