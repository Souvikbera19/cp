#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        ll count_2 =0;
        ll count_3 =0;
        while(n>0&& n%3==0){
            count_3++;
            n/=3;
        }
        while(n>0 && n%2==0){
            count_2++;
            n/=2;
        }

        if(n>1 || count_2>count_3){
            cout << -1 <<'\n';
        }
        else{
            cout << (count_3-count_2) + count_3 <<'\n';
        }
    }
    return 0;
}