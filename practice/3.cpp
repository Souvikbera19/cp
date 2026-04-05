#include <bits/stdc++.h>
using namespace std;
using ll = long long;

long long lcm_ll(long long a, long long b) {
    return (a / __gcd(a, b)) * b;
}
void solve(){
    ll a,b,c,m;
    cin >> a >> b>> c >> m;
    ll labc = lcm_ll(lcm_ll(a,b),c);
    ll lab= lcm_ll(a,b);
    ll lac = lcm_ll(a,c);
    ll lbc = lcm_ll(b,c);

    ll triple_visit = m/labc;
    ll double_visit_ab = m/lab-triple_visit;
    ll double_visit_ac= m/lac-triple_visit;
    ll double_visit_bc = m/lbc-triple_visit;

    ll single_visit_a = m/a-double_visit_ab-double_visit_ac-triple_visit;
    ll single_visit_b = m/b-double_visit_ab-double_visit_bc-triple_visit;
    ll single_visit_c= m/c-double_visit_ac-double_visit_bc-triple_visit;

    ll ans_a = 6*1ll*single_visit_a+3*1ll*(double_visit_ab+double_visit_ac)+2*triple_visit*1ll;
    ll ans_b= 6*1ll*single_visit_b+3*1ll*(double_visit_ab+double_visit_bc)+2*1ll*triple_visit;
    ll ans_c= 6*1ll*single_visit_c+3*1ll*(double_visit_ac+double_visit_bc)+2*1ll*triple_visit;
    cout << ans_a << ' ' << ans_b << ' '<< ans_c << '\n';

    
    

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