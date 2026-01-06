#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve(){
    ll n,q;
    cin >> n >> q;
    string s;
    cin >> s;
    vector<ll>arr(q);
    for(ll i=0;i<q;i++){
        int A;
        cin >> A;
        if(s==string(n,'A')){
            cout << A << "\n";
            continue;
        }
        int count = 0;
        while(A!=0){
            if(s[count%n]=='A'){
                A--;
            }
            else{
                A /=2;
            }
            count++;
        }
        cout << count << "\n";
    }
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    
    

    return 0;
}