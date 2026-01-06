#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve(){
    ll n;
    cin >> n ;
    string a;
    cin >> a;

    ll m;
    cin >> m;
    string b;
    cin >> b;

    string c;
    cin >> c;

    for(int i =0;i<m;i++){
        if(c[i]=='V'){
            a.insert(a.begin(),b[i]);
        }
        else {
            a.insert(a.end(),b[i]);
        }
    }

    cout << a <<'\n';

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