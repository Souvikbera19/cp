#include <bits/stdc++.h>
using namespace std;
using ll = long long;
ll power3(int x){
    ll r = 1;
    while(x--) r *= 3;
    return r;
}
void solve(){
    ll n;
    cin >> n;
    ll sum = 0;
    while(n!=0){
        for(int i =0;i<21;i++){
            if(n<pow(3,i)){
                ll x = i-1;
                ll p = (ll)(n/pow(3,x));
                ll cost = p*(pow(3,x+1)+ x*pow(3,x-1));
                n = n % (ll)pow(3,x);
                sum += cost;
            }
        }
    }
    cout << sum << '\n';
}
int main() {


    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    

    return 0;
}