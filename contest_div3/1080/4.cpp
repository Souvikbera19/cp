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
        /* code */
        int n;
        cin >> n;
        vector<ll>f(n+1);
        for(int i =1;i<=n;i++) cin >> f[i] ;
        vector<ll>a(n+1);
        for(int i =2;i<=n-1;i++){
            a[i]=(f[i-1]-2*f[i]+f[i+1])/2;
        } 
        //a[n]
        ll sum_n =0;
        for(int i =2;i<=n-1;i++){
            sum_n+=(i-1)*f[i];
        }
        a[n]=(f[1]-sum_n)/(n-1);
        for(int i =1;i<=n;i++){
            cout << a[i] << '\n';
        }
        cout << '\n';
    }

    

    return 0;
}