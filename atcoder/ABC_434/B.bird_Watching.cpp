#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,m;
    cin >> n >> m;
    vector<int> sum_M(m+1,0);
    vector<int> cnt(m+1,0);
    for(int i=0;i<n;i++){
        int a,b;
        cin >> a >> b;
        sum_M[a] +=b;
        cnt[a]++;
    }
    cout <<fixed << setprecision(10);
    for(int i=1;i<=m;i++){
        cout << (float)sum_M[i]/cnt[i] << endl;
    }
    return 0;
}