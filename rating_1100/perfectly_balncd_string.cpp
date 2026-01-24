#include <bits/stdc++.h>
using namespace std;
using ll = long long;
// bool same_string(string s){
//     for(int i =1;i<s.length();i++){
//         if(s[i]!=s[i-1]) return false;
//     }
//     return true;
// }
// bool conseutive_char(string s){
//     bool cond = 0;
//     for(int i =0;i<s.length()-1;i++){
//         if(s[i]==s[i+1]){
//             cond=1;
//         }
//         else{
//             return false;
//         }
//     }
//     return cond;
// }
void solve(){
    string s;
    cin >>s;
    ll n =s.length();
    set<char>st;
    ll i ;
    for(i =0;i<s.length();i++){
        if(st.find(s[i])==st.end()){
            st.insert(s[i]);
        }
        else break;
    }

    for(int k = i;k<n;k++){
        if(s[k]!=s[k-i]){
            cout << "NO" << '\n';
            return;
        }
    }
    cout << "YES" << '\n';



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