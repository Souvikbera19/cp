#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>> t;
    while(t--){
        long long n;
        cin >> n;
        vector<long long> arr(n);
        for(long long i=0;i<n;i++) cin >> arr[i];
        bool cond = false;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(__gcd(arr[i],arr[j])<=2) cond = true;
            }
        }
        if(cond) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}