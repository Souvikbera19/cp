#include <bits/stdc++.h>
using namespace std;
using ll = long long;


int main() {


    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    vector<int>v;
    while(n){
        v.push_back(n%10);
        n/=10;
    }
    vector<int>temp=v;
    reverse(v.begin(),v.end());
    sort(v.begin(),v.end());

    if(temp==v) cout << "Yes" << '\n';
    else cout << "No" << '\n';


    return 0;
}