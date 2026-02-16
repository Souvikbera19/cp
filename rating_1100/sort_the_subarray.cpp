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
        ll n;
        cin >> n;
        vector<ll>a(n);
        for(auto &x:a) cin >> x;

        vector<ll>v(n);
        for(auto &x:v) cin >> x;
        for(int i =0;i<n;i++){
            vector<ll>temp=a;
            for(int j =0;j<n;j++){
                sort(temp.begin(),temp.begin()+j);
                if(temp==v){   
                    cout << i << ' ' << j << '\n';
                    break;
                }    
            }
        }
    }
    

    return 0;
}