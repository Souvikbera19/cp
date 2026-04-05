#include <bits/stdc++.h>
using namespace std;
using ll = long long;
bool solve(){
    ll n,k;
    cin >> n>>k;
    vector<ll>a(n),b(n);
    for(auto &x:a)cin >> x;
    for(auto &x:b) cin>>x;
    for(int i =0;i<n-k;i++){
        if(b[i]!=-1&&b[i]!=a[i]) return false;
    }
    for(int i =k;i<n;i++){
        if(b[i]!=-1&&b[i]!=a[i]) return false;
    }
    set<ll>st;
    set<ll>middle;
    for(int i =n-k;i<k;i++){
        middle.insert(a[i]);
    }
    for(int i = n-k;i<k;i++){
        if(b[i]!=-1){
            if(st.find(b[i])!=st.end()){
                return false;
            }
            if(middle.find(b[i])!=middle.end()) return false;
            else st.insert(b[i]);
        }
    }
    return true;
}
int main() {


    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        if(solve()){
            cout << "Yes\n";
        }
        else cout << "No\n";
    }

    return 0;
}