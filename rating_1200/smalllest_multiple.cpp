#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {


    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        ll cnt =0;
        vector<bool>v(n+1,false);
        for(int i =1;i<=n;i++){
            for(int j =i;j<=n;j+=i){
                if(s[j-1]=='1')break;

                if(v[j]) continue;

                else{
                    v[j]=true;
                    cnt+=i;
                }
                
            }
        }
        cout << cnt << '\n';
    }
    return 0;
}