#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n,l,h;
        cin >> n >> h >> l;
        int cnt_h=0,cnt_l=0;
        for(int i =0;i<n;i++){
            int x;
            cin >> x;
            if(x<=h) cnt_h++;
            if(x<=l) cnt_l++;
        }
        int max_val=max(cnt_h,cnt_l);
        int min_val=min(cnt_h,cnt_l);
        cout << min(min_val,max_val/2)<<'\n';

        
    }
}