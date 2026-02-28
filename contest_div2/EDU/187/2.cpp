#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve(){
    string s;
    cin >> s;
    vector<int>v;
    ll sum = 0;
    for(char c:s){
        int x = c-'0';
        v.push_back(x);
        sum+=x;
    }
    if(sum<=9){
        cout << 0 << '\n';
    }
    vector<int>diff;
    for(int i =0;i<v.size();i++){
        if(i==0) diff.push_back(v[i]-1);
        else{
            diff.push_back(v[i]);
        }
    }
    ll cnt = 0;
    for(int x:diff){
        sum-=x;
        cnt++;
        if(sum<=9){
            cout << cnt << '\n';
            return;
        }
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