#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void  solve(){
    int n;
    cin >> n;
    string s;
    cin >> s ;
    vector<int>arr_idx;
    for(int i =0;i<n;i++){
        if(s[i]=='0'){
            arr_idx.push_back(i+1);
        }
    }
    cout << arr_idx.size() << "\n";
    for(auto &i:arr_idx) cout << i << " " ;
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