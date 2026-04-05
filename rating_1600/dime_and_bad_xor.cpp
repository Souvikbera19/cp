#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve(){
    ll n,m;
    cin >> n >> m;
    int arr[n][m];
    vector<int>ans;
    int prefXor =0;
    for(int i =0;i<n;i++){
        for(int j =0;j<m;j++){
            cin >> arr[i][j];
            prefXor^=arr[i][0];
            ans.push_back(1);
        }
    }
    if(prefXor>0){
        cout << "TAK\n";
        for(auto it:ans) cout << it << ' ';
        cout << '\n';
        return;
    }
    bool cond = false;
    for(int i =0;i<n;i++){
        for(int j =1;j<m;j++){
            if(arr[i][0]!=arr[i][j]){
                ans[i]=j+1;
                cond=true;
                break;
            }
        }
    }
    if(cond){
        cout << "TAK\n";
        for(auto it:ans) cout << it << ' ';
        cout << '\n';
        return;
    }
    cout << "NIE\n";

}
int main() {


    ios::sync_with_stdio(false);
    cin.tie(nullptr);

   solve();


    return 0;
}