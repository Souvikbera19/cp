#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {


    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        vector<ll>v(n);
        for(int i =0;i<n;i++) cin >> v[i];
        vector<pair<ll,ll>> mpp;
        for(int i =0;i<n;i++){
            mpp.push_back({v[i],i});
        }
        sort(mpp.rbegin(),mpp.rend());
        // for(auto it:mpp){
        //     cout << it.first << " --> " << it.second << endl;
        // }cout << endl;
        vector<ll>ans(n+1,0);
        ans[0] = 0;
        ll time = 0;
        ll coordinate = -1;
        for(int i =0;i<n;i++){
            ans[mpp[i].second + 1] = coordinate;
            time += 2 * abs(coordinate) * mpp[i].first;
            if(coordinate<0) coordinate = -coordinate;
            else{
                coordinate = -(coordinate+1);
            }
        }
        cout << time << '\n';
        for(auto it:ans){
            cout << it << " ";
        }
        cout << '\n';



    }

    return 0;
}