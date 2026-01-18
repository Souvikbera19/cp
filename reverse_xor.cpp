#include <bits/stdc++.h>
using namespace std;
using ll = long long;
string bits(ll n){
    string ans;
    while(n){
        if(n&1){
            ans+='1';
        }
        else{
            ans+='0';
        }
        n>>=1;
    }
    return ans;
}

bool check(string s){
    for(int i =0;i<s.size();i++){
        if(s[i]!=s[s.size()-i-1]){
            return false;
        }
    }
    if(s.size()%2){
        if(s[s.size()/2]=='1') return false;
    }
    return true;
}
void solve(){
    ll n;
    cin >> n;
    string s = bits(n);
    if(check(s)){
        cout << "YES" << '\n';
        return;
    }
    for(int i =0;i<32;i++){
        s+="0";
        if(check(s)){
            cout << "YES" << '\n';
            return;
        }
    }
    
    cout <<"NO" << '\n';
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