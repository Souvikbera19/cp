#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        long long a,b;
        cin >> a >> b;
        if(a==b){
            cout << 0 <<" " << 0 << endl;
        }
        else if(a ==1 || b== 2||a==2 || b==1){
            cout << 1 << " " << 0 << endl;
        }
        else if(a==1 && b>2){
            cout << b-1 << " " << 0 << endl;
        }
        else if(b==1 && a>2){
            cout << a-1 << " " << 0 << endl;
        }
        else{
            if(b>a){
                swap(a,b);
            }
            long long gcd  = a-b;
            long long moves = min(b%gcd,gcd-b%gcd);
            cout << gcd << " " << moves <<endl;
        }
    }
    return 0;
}