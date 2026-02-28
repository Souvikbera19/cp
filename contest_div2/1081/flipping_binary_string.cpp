#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve(){
    int n;
    string s;
    cin >> n;
    cin >> s;
    int cnt_0 = 0;
    int cnt_1= 0;
    for(int i =0;i<n;i++){
        if(s[i]=='1') cnt_1++;
        else cnt_0++;
    }
    if(cnt_1==0){
        cout << 0 << '\n';
        return;
    }
    else if(cnt_1%2==0){
        cout << cnt_1 << '\n';
        for(int i = 0;i<n;i++){
            if(s[i]=='1'){
                cout << i+1 << ' ';
            }
        }
        cout << '\n';
        return;
    }
    else if(cnt_0%2){
        cout << cnt_0 << '\n';
        for(int i = 0;i<n;i++){
            if(s[i]=='0'){
                cout << i+1 << ' ';
            }
        }
        cout << '\n';
        return ;
    }
    else{
        cout << -1 << '\n';
        return;
    }
}
int main() {


    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        /* code */
        solve();
    }
    

    return 0;
}