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
        ll arr[n][n];
        for(int i =0;i<n;i++){
            for(int j = 0;j<n;j++){
                cin >> arr[i][j];
            }
        }
        ll l =0;
        ll r = n-1;
        ll cnt = 0;
        for(int i =0;i<n;i++){
            for(int j=0;j<n;j++){
                if(arr[i][j]!=arr[n-i-1][n-j-1]) cnt++;
            }
        }
        cnt/=2;
        if(cnt>k){
            cout << "No\n";
        }
        else{
            ll rem = k-cnt;
            if(rem%2==0){
                cout << "Yes\n";
            }
            else{
                if(n%2){
                    cout << "Yes\n";
                }
                else{
                    cout << "No\n";
                }
            }
        }
    }

    return 0;
}