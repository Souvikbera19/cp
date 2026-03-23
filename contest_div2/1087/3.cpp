#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {


    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        ll r,b,g;
        cin >>r>>b>>g;
        vector<pair<ll,char>>v = {{r,'R'},{g,'G'},{b,'B'}};
        string s= "";
        while(1){
            ll maxColour= -1;
            ll idx= -1;
            for(int i =0;i<3;i++){
                if(v[i].first<=0)continue;
                char colour = v[i].second;
                int n = s.length();
                if(n>=1&&s[n-1]==colour)continue;
                if(n>=3&&s[n-3]==colour)continue;
                if(v[i].first>maxColour){
                    maxColour=v[i].first;
                    idx= i;
                }

                if(idx==-1) break;
                s+=v[idx].second;
                v[idx].first--;

            }
        }
        cout << s << '\n';
    }

    return 0;
}