#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve(){
    string s;
    cin >> s;
    stack<char>sk;
    bool cond= true;
    for(char c:s){
        if(!sk.empty()&&sk.top()==')'&&c=='('){
            cond=false;
            break;
        }
        sk.push(c);
    }
    if(!cond){
        cout <<"Yes\n";
    }
    else cout << "No\n";
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