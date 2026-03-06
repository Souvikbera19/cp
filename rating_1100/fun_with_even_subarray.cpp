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
        vector<int>v(n+1);
        for(int i =1;i<=n;i++) cin >> v[i];
        vector<int>b =v;
        reverse(b.begin()+1,b.end());
        int ans = 0;
        int i =1;
        while(i<n){
            if(b[i+1]=b[1]){
                i++;
                continue;
            }
            ans++;
            i*=2;
        }
        cout << ans << '\n';

    }

    return 0;
}