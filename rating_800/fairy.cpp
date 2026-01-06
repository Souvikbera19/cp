#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {

// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int>arr(n);
        map<int,int> mpp;
        for(int i = 0;i<n;i++){
            cin >> arr[i];
            mpp[arr[i]]++;
        }
        cout << mpp.size() << endl;
    }

    return 0;
}