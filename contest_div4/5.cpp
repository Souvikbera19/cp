#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve(){
    ll n,m,k;
    cin >> n >> m >> k;
    vector<ll>a(n);
    vector<ll>b(m);
    for(auto &x:a) cin >> x;
    for(auto &x:b) cin >> x;
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    string instructions;
    cin >> instructions;
    vector<ll>dst(k+1,0);
    for(int i =1;i<=k;i++){
        dst[i]=dst[i-1]+(instructions[i-1]=='L'?-1:1);
    }
    vector<int>is_dead(n,0);
    vector<int>died_at(k+2,0);
    for(int i=1;i<=k;i++){
        ll d= dst[i];
        ll r=0,s=0;
        while(r<n&&s<m){
            if(is_dead[r]){
                r++;
                continue;
            }
            ll r_pos=a[r]+d;
            if(r_pos<b[s]) r++;
            else if(r_pos>b[s])s++;
            else{
                is_dead[r]=1;
                died_at[i]++;
                r++;
                s++;
            }
        }
        
    }
    ll val = n;
    for(int i =1;i<=k;i++){
        n-=died_at[i];
        cout << n << ' ';
    }
    cout << '\n';
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