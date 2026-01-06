#include <bits/stdc++.h>
using namespace std;
using ll = long long;
bool is_present(string s,string t){
    unordered_map<char,ll>freq;
    for(char c:t) freq[c]++;
    bool cond = true;
    for(char c:s){
        if(freq[c]==0){
            cond = false;
            break;
        }
        freq[c]--;
    }
    return cond;
}
int main() {


    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        string s,t;
        cin >> s >> t;
        bool cond = is_present(s,t);
        if(!cond) cout << "impossible"<<'\n';
        else{
            map<char,ll>mpp;
            for(char c:t) mpp[c]++;
            for(char c:s){
                mpp[c]--;
            }

            string res;
            for(auto it:mpp){
                res.append(it.second,it.first);
            }
            
            char min_s=*min_element(s.begin(),s.end());
            string before,equal,after;
            for(char c:res){
                if(c<min_s)before.push_back(c);
                else if(c==min_s) equal.push_back(c);
                else after.push_back(c);
            }
            string tmp(equal.size(),min_s);
            if(s<tmp) cout << before+s+equal+after<<'\n';
            else cout << before+equal+s+after<<'\n';
        }
    }

    return 0;
}