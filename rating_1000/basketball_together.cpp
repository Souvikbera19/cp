#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {

// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif

    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n,d;
    cin >> n >>d;
    vector<ll>arr(n);
    for(int i = 0;i<n;i++) cin >> arr[i];
    sort(arr.begin(),arr.end(),greater());
    ll wins=0;
    ll team_size = 1;
    ll teams = n;
    for(int i = 0;i<teams;i++){
        ll req_team_size = d/arr[i] + 1;
        if(teams-i<req_team_size) break;
        teams -= req_team_size-1;
        wins++;
    }
    cout << wins << endl;
    return 0;
}