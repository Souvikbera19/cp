//in the name of senku
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve(){
    ll n,m,h;
    cin >> n >> m>> h;
    vector<ll>org_v(n);
    vector<ll>temp(n);
    for(int i =0;i<n;i++){
        cin >> org_v[i];
        temp[i]=org_v[i];
    }
    vector<ll>modified_idx;
    vector<bool>is_modified(n,false);
    for(int i =0;i<m;i++){
        ll b,c;
        cin >> b >> c;
        b--;
        if(temp[b]+c>h){
            for(ll idx:modified_idx){
                temp[idx]=org_v[idx];
                is_modified[idx]= 0;
            }
            modified_idx.clear();
        }
        else{
            temp[b]+=c;
            if(!is_modified[b]){
                modified_idx.push_back(b);
                is_modified[b]=true;
            }
        }
        
    }
    for(auto it:temp) cout << it << " ";
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