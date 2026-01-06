#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {


    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        ll n = s.size();
        ll opr = 0;
        if(s[0]!='s'){
            s[0]='s';
            opr++;
        }

        if(s[s.size()-1]!='s'){
            s[n-1]='s';
            opr++;
        }
        for(int i =1;i<s.size()-1;i++){
            if(s[i]=='u'){
                if(s[i-1]!='s'){
                    s[i-1] ='s';
                    opr++;
                }
                if(s[i+1]!='s'){
                    s[i+1]='s';
                    opr++;
                }
            }
        }
        cout << opr << '\n';
    }
    

    return 0;
}