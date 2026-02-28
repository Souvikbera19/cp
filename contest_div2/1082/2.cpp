#include <bits/stdc++.h>
using namespace std;
using ll = long long;
bool solve(string &s){
    ll n = s.length();
    if(n%2==0){
        if(s[0]=='b'){
            return false;
        }
        for(int i = 1;i<n;i+=2){
            if(s[i]!='?'&&s[i]==s[i+1]) return false;
            
        }
    }
    else{
        for(int i =0;i<n;i+=2){
            if(s[i]!='?'&& s[i]==s[i+1]){
                return false;
            }
        }
    }
    return true;
}
int main() {


    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        string s;
        cin >>s;
        if(solve(s)) cout << "Yes\n";
        else cout <<"No\n";
    }

    return 0;
}