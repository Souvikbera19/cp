#include <bits/stdc++.h>
using namespace std;
using ll = long long;
bool isPrime(ll n){
    if(n<=2) return false;
    for(int i = 2;i*i<=n;i++){
        if(n%i==0) return false;
    }
    return true;
}
bool everyElementisPrime(const vector<ll>&v){
    for(int i =0;i<v.size();i++){
        ll x = v[i];
        if(!isPrime(x)) return false;
    }
    return true;
}
ll primefactors(ll n){
    set<ll>pf;
    for(int i = 2;i*i<=n;i++){
        while(n%i==0&&n>0){
            pf.insert(i);
            n/=i;
        }
    }
    if(n>1) pf.insert(n);
    if(pf.size()==0) return 1;
    if(pf.size()>1) return -1;
    return *pf.begin();
}
void solve(){
    int n;
    cin >> n;
    vector<ll>v(n);
    for(auto &x:v) cin >> x;
    if(is_sorted(v.begin(),v.end())){
        cout << "Bob\n";
        return;
    }
    vector<int>a(n);
    for(int i =0;i<n;i++) a[i]=primefactors(v[i]);
    if(*min_element(a.begin(),a.end())==-1){
        cout << "Alice\n";
        return;
    }
    if(is_sorted(a.begin(),a.end())){
        cout << "Bob\n";
        return;
    }
    else{
        cout << "Alice\n";
        return;
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