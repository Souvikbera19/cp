#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {


    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        ll n,k;
        cin >> n >> k;
        string s;
        cin >> s;
        ll a = count(s.begin(),s.end(),'0');
        ll b = count(s.begin(),s.end(),'1');
        ll c = count(s.begin(),s.end(),'2');
        string ans(n,'+');
        for(int i =0;i<n;i++){
            if(i<a+c||i>=n-b-c) ans[i]='?';
            if(i<a||i>=n-b||k==n) ans[i]='-';
            
        }
        cout << ans <<'\n';
    }

    return 0;
}