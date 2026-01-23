#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {


    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        ll move=0;
        while(1){
            if(s.find("01")!=string::npos){
                s.erase(s.find("01"),2);
                move++;
            }
            else if(s.find("10")!=string::npos){
                s.erase(s.find("10"),2);
                move++;
            }
            else{
                break;
            }
        }
        if(move&1){
            cout << "DA" << '\n';
        }
        else{
            cout << "NET" << '\n';
        }

        
    }

    return 0;
}