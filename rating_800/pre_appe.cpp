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
        string s;
        cin >> s;
        ll i =0;
        ll j = s.length()-1;
        while(i<j){
            if(s[i]!=s[j]){
                i++;
                j--;
            }
            else{
                break;
            }
        }
        cout << j-i+1 <<'\n';
    }

    return 0;
}