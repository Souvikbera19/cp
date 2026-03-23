#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve(){
    int n,k,p,m;
    cin >> n >> k >> p >> m;
    vector<int>v(n);
    for(auto &x:v)cin >> x;
    int win_conditon_cost = v[p-1];
    int first_play =0;
    if(p<=k){
        first_play= win_conditon_cost;
    }
    else{
        int moves= p-k;
        vector<int>req_cost;
        for(int i =0;i<p-1;i++){
            req_cost.push_back(v[i]);
        }
        sort(req_cost.begin(),req_cost.end());
        for(int i =0;i<moves;i++) first_play+=req_cost[i]; 
        first_play+=win_conditon_cost;
    }
    if(m<first_play){
        cout << 0 << '\n';
        return;
    }
    int total_plays= 1;
    m-=first_play;
    
    
        if(n<=k){
            total_plays+=m/win_conditon_cost;
        }
        else{
        int req_moves= n-k;
        int cycle_cost = 0;
        vector<ll>cycle;
        for(int i =0;i<n;i++){
            if(i==p-1) continue;
            else cycle.push_back(v[i]);
        }
        sort(cycle.begin(),cycle.end());
        for(int i =0;i<req_moves;i++) cycle_cost+=cycle[i];
        int total_cost = cycle_cost+win_conditon_cost;
        total_plays+=m/total_cost;
    }
    cout << total_plays<<'\n';
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