#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve(){
    ll n;
    cin >> n;
    vector<ll>v(n);
    ll m = INT_MIN;
    for(int i =0;i<n;i++){
        cin >> v[i];
        m=max(m,v[i]);
        if(i%2==1)v[i]=m;
    }
    ll cnt = 0;
    for(int i=0;i<n-1;i++){
        if(i%2==0){
            if(v[i]>=v[i+1]){
                cnt += v[i]-v[i+1]+1;
                v[i]= v[i+1]-1;
            }
        }
        else{
            if(v[i]<=v[i+1]){
                cnt +=v[i+1]-v[i]+1;
                v[i+1]=v[i]-1;
            }
        }
    }
    cout << cnt <<"\n";
}
int main() 
{


    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >>t;
    while (t--)
    {
        solve();
    }
    

    return 0;
}