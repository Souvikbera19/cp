#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >>t;
    while(t--){
        int n;
        cin >> n;
        vector<char>arr(n);
        for(int i=0;i<n;i++) cin >> arr[i];
        int count_1 = INT_MIN;
        int count_2 = INT_MIN;
        int l=0,r=0;
        for(int i = 0;i<n;i++){
            if(arr[i]=='>'){
                l++;
                count_1 = max(count_1,l);
                r=0;
            }
            if(arr[i]=='<'){
                r++;
                count_2 = max(count_2,r);
                l=0;
            }
        }
        // cout << count_1 << " " << count_2 << endl;
        int ans = max(count_1,count_2) + 1;
        cout << ans << endl;
    }
    return 0 ;
}