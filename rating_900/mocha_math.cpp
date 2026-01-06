#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        vector<long long>arr(n);
        for(int i=0;i<n;i++) cin >>arr[i];
        long long ans = arr[0];
        for(int i =1;i<n;i++){
            ans &= arr[i];
        }
        cout << ans << endl;
    }
    return 0;
}