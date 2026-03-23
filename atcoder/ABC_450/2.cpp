#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {


    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<vector<ll>>v(n,vector<ll>(n));
    for(int i =0;i<n;i++){
        for(int j=i+1;j<n;j++){
            cin >> v[i][j];
        }
    }

    for(int i =0;i<n;i++){
        for(int j =i+1;j<n;j++){
            for(int k =j+1;k<n;k++){
                if(v[i][j]+v[j][k]<v[i][k]){
                    cout << "Yes\n";
                    return 0;
                }
            }
        }
    }
    cout << "No\n";

    return 0;
}