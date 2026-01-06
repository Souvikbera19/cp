#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    while(t--){
        string s,t;
        cin >> s >> t;
        int n = s.length();
        vector<int>arr_1(n);
        for(int i=0;i<n;i++) arr_1[i]= s[i]-'a';
        vector<int>arr_2(n);
        for(int i=0;i<n;i++) arr_2[i]= t[i]-'a';
        sort(arr_1.begin(),arr_1.end());
        sort(arr_2.begin(),arr_2.end());
    }
    return 0;
}