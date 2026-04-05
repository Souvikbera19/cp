#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve(){
    ll x,y;
    cin >> x >> y;
    if(x==y){
        cout << 1 << '\n';
        for(int i =0;i<x;i++) cout << 1 << ' ';
        for(int j =0;j<y;j++) cout << -1 << ' ';
        cout << '\n';
    }
    else{
        ll val = (x-y>0)?x-y:y-x;
        if(x>y){
            for(int i =0;i<x;i++) cout <<1 << ' ';
            for(int i =0;i<y;i++)cout << -1 << ' ';
            cout << '\n';
        }
        else {
            for(int i =0;i<y;i++) cout << -1 << ' ';
            for(int i =0;i<x;i++) cout <<1 << ' ';
            cout << '\n';
        }
    }
}
int main() {


    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){

    }

    return 0;
}