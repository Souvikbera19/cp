#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {


    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        ll n,k,a,b;
        cin >> n >> k >> a >> b;
        vector<ll>x(n+1),y(n+1);
        for(int i =1;i<=n;i++){
            cin >> x[i] >> y[i];
        }
        ll ans = llabs(x[a]-x[b])+llabs(y[a]-y[b]);
        ll min_a =LLONG_MAX;
        ll min_b=LLONG_MAX;
        for(int i=1;i<=k;i++){
            min_a=min(min_a,llabs(x[a]-x[i]+llabs(y[a]-y[i])));
            min_b=min(min_b,llabs(x[b]-x[i])+llabs(y[b]-y[i]));
        }
        ans = min(ans,min_a+min_b);
        cout << ans << '\n';
    }

    return 0;
}