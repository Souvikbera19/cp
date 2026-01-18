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
        int ans = 0;
        for(int i =1;i<=n;i++){
            int x;
            cin >> x;
            ans=__gcd(ans,abs(x-i));
        }
        cout << ans << '\n';
    }
    return 0;
}