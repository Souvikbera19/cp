#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve(){
    int n;
    cin >> n;
    vector<int>  a(n),b(n);
    int x = 0;
    for(int i =0;i<n;i++){
        cin >> a[i];
        x ^=a[i];
    }
    for(int i =0;i<n;i++){
        cin >> b[i];
        x ^=b[i];
    }

    if(!x) cout << "Tie" << '\n';
    else{
        int idx;
        for(int i =0;i<n;i++){
            if(a[i]^b[i]) idx = i;
        }
        cout << (idx%2==1 ? "Mai":"Ajisai") <<'\n';
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