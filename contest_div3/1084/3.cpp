#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve(){
    stack<char>st;
    int n;
    cin >> n;
    string s;
    cin >> s;
    for(char c:s){
        if(!st.empty()&&st.top()==c){
            st.pop();
        }
        else{
            st.push(c);
        }
    }
    if(st.empty()){
        cout << "YES\n";
    }
    else{
        cout <<"NO\n";
    }
}
int main() {


    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        /* code */
        solve();
    }
    

    return 0;
}