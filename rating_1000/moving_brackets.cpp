#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve(){
    ll n;
    cin >> n;
    string s;
    cin >> s;
    while(s.find("()")!=string::npos){
        size_t pos = s.find("()");
        s.erase(pos,2);
    }
    cout << s.length()/2 << '\n';
}
int main() {


    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >>t;
    while(t--){
        solve();
    }

    return 0;
}