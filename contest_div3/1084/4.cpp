#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve(){
    int n,x,y;
    cin >> n >> x >> y; 
    vector<int>v(n);
    for(auto &x:v) cin >> x;
    if(x==0&&y==n){
        // vector<int>temp = v;
        // vector<int>ans = v;
        vector<int>ans=v;
        rotate(ans.begin(),min_element(ans.begin(),ans.end()),ans.end());
        for(auto it:ans) cout << it << ' ';
        cout << '\n';
        return;
    }
    else{
        vector<int>left,middle,right;
        for(int i= 0;i<x;i++) left.push_back(v[i]);
        for(int i = x;i<y;i++) middle.push_back(v[i]);
        for(int i =y;i<n;i++) right.push_back(v[i]);
        if(!middle.empty()) rotate(middle.begin(),min_element(middle.begin(),middle.end()),middle.end());

        left.insert(left.end(),right.begin(),right.end());
        int key = middle[0];
        int insert_idx =-1;
        auto it = left.begin();
        while(it!=left.end()&&*it<key){
            it++;
        }

        left.insert(it,middle.begin(),middle.end());
        for(auto it:left) cout << it << ' ';
        cout << '\n';
    }
    
}
int main() {


    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        solve();
    }

    return 0;
}