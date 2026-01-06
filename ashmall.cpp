#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve(){
    int n;
    cin >> n;
    vector<string>arr(n);
    for(int i =0;i<n;i++) cin >> arr[i];
    string s = arr[0];
    for(int i =1;i<n;i++){
        string p = s + arr[i];
        string a = arr[i] + s;
        if(p<a) s = p;
        else s= a;
    }
    cout << s << "\n";
    
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