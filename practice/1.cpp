#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    if(s[0]=='L'){
        cout << 1 << '\n';
        return;
    }
    if(s==string(s.length(),'R')){
        cout << s.length() << '\n';
        return;
    }
    int ans= 0;
    for(int i =1;i<n;i++){
        if(s[i-1]=='R'&&s[i]=='L'){
            ans=i;
            break;
        }
    }
    cout << ans << '\n';
    
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