#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define len 200001
int main() {


    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n,k,q;
    cin >> n>> k >> q;
    vector<int>coffee(len);
    for(int i =0;i<n;i++){
        ll l,r;
        cin >> l >> r;
        coffee[l]++;
        coffee[r+1]--;
    }
    vector<int>prefCoffee(len);
    prefCoffee[0]=coffee[0];
    for(int i =1;i<len;i++){
        prefCoffee[i]=prefCoffee[i-1]+coffee[i];
    }
    vector<int>check(len);
    for(int i =0;i<len;i++){
        check[i]=(prefCoffee[i]>=k);
    }
    vector<int>prefCheck(len);
    prefCheck[0]=check[0];
    for(int i =1;i<len;i++){
        prefCheck[i]=prefCheck[i-1]+check[i];
    }
    for(int i =0;i<q;i++){
        ll x,y;
        cin >> x >> y;
        cout << prefCheck[y]-prefCheck[x-1] << '\n';
    }

    

    return 0;
}