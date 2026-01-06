#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve(){
    ll n,p;
    cin >> n >> p;
    vector<ll>a(n);
    for(int i =0;i<n;i++) cin >> a[i];
    vector<ll>b(n);
    for(int i =0;i<n;i++) cin >> b[i];
    vector<pair<ll,ll>> v(n);
    for(int i =0;i<n;i++){
        v[i] = {b[i],a[i]};
    }
    sort(v.begin(),v.end());


    ll shared  = 1;
    ll cost = p;

    for(auto it:v){
       ll people_cost = it. first;
       ll people_share = it.second;
       if(people_cost>p) break;

       if(people_share+shared>n){
        cost += (n-shared)*people_cost;
        shared = n;
        break;
       }
       else{
        cost += (people_share)*people_cost;
        shared += people_share;
       }
    }
    
    cost +=(n-shared)*p;
    cout << cost <<'\n';


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