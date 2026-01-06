#include <iostream>
using ll = long long;
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll a,b;
    cin >> a >> b;
    ll num = abs(a-b);
    if(a==b) cout << 1 << endl;
    else{
        ll pow = 1;
        for(ll i=0;i<num;i++){
            pow *=32;
        }
        cout << pow << endl;
    }
    return 0;
}