#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {


    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n,m;
    cin >> n >> m;
    map<ll,ll>first,second;
    for(int i =1;i<101;i++){
        first[i]=0;
        second[i]=0;
    }
    for(int i =0;i<n;i++){
        ll x,y;
        cin >> x >> y;
        first[x]++;
        second[y]++;
    }
    for(int i =1;i<=m;i++){
        // if(first[i]==0&&second[i]==0) continue;
        cout << second[i]-first[i] << '\n';
    }
    return 0;
}