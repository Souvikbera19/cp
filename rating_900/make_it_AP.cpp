#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        long long a,b,c;
        cin >> a >> b >> c;
        long long a_new = 2*b-c;
        bool cond = false;
        if(a_new/a>0 && a_new%a==0) cond = true;
        long long b_new = (a+c)/2;
        if(b_new/b>0 && b_new%b==0 &&(c-a)%2==0) cond = true;
        long long c_new = 2*b-a;
        if(c_new/c>0 && c_new%c==0) cond = true;
        if(cond) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}