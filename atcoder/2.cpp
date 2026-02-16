#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {


    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int q;
    cin >> q;
    ll v= 0;
    bool playing = 0;
    for(int i =0;i<q;i++){
        ll x;
        cin >> x;
        if(x==1) v++;
        else if(v==2){
            if(v>0) v--;
        }
        else if(x==3){
            playing=!playing;
        }
        if(playing&&v>=3){
            cout << 'Yes\n';
        }
        else{
            cout << "No\n";
        }
    }

    return 0;
}