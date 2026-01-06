#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        ll n,k;
        cin >> n >> k;
        string s;
        cin >> s;
        ll awake_req=0;
        ll sleep_count = 0;
        for(int i = 0; i<n;i++){
            if(s[i]=='1'){
                awake_req = k;
            }
            else{
                if(awake_req>0) awake_req--;
                else{
                    sleep_count++;
                }
            }
        }
        cout << sleep_count << endl;

    }

    return 0;
}