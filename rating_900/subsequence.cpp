#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >>t;
    while(t--){
        int  n;
        cin >> n;
        vector <int >arr(n);
        for(int i=0;i<n;i++) cin >> arr[i];
        int count_1 = 0;
        int count_0 = 0;
        for(auto it:arr){
            if(it==0) count_0++;
            else if(it==1) count_1++;
        }
        // if(count_1==0) cout << 0 << endl;
        // else if(count_1==1 && count_0 == 0) cout << 1 << endl;
        long long ans = pow(2,count_0) * count_1 ;
        cout << ans << endl;
    }
    return 0;
}