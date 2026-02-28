#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {


    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        ll temp= n;
        ll k = 1;
        for(int i =2;i*i<=temp;i++){
            if(temp%i==0){
                k*=i;
            }
            while(temp%i==0){
                temp/=i;
            }
        }
        cout << k << '\n';
    }

    return 0;
}