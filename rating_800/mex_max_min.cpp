#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define FastAsFcuk ios::sync_with_stdio(false);cin.tie(nullptr);

void solve(){
    ll n;
    cin >> n;
    set<int>st;
    for(int i =0;i<n;i++){
        ll x;
        cin >> x;
        st.insert(x);
    }
    // cout << n << ' '<< st.size() << '\n';
    if(st.size()>2){
        cout << "No\n";
        return;
    }
    if(st.size()==1){
        if(*st.begin()==0){
            cout << "No\n";
            return;
        }
        else{
            cout << "Yes\n";
            return;
        }
    }
    if(st.size()==2){
        if(*st.begin()==-1&& *prev(st.end())>0){
            cout << "YEs\n";
            return;
        }
        else{
            cout << "No\n";
            return;
        }
    }
    cout << "No\n";

}
int main() {


   FastAsFcuk;


   int t;
   cin >> t;
   while(t--){
    solve();
   }

    return 0;
}