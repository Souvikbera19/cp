#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        int n,a;
        cin >> n >> a;
        int count_left = 0,count_right = 0;
        for(int i=0;i<n;i++){
            int x;cin >> x;
            if(a>x) count_left++;
            if(a<x) count_right++;
        }
        cout << ((count_left<count_right)?a+1:a-1) << endl;
        
    }
    return 0;
}