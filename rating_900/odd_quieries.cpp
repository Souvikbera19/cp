#include <bits/stdc++.h>
using namespace std;
int main(){
    long long t;
    cin >>t;
    while(t--){
        long long n,q;
        cin >> n >> q;
        vector<long long > arr(n);
        long long sum =0;
        for(int i=0;i<n;i++){
            cin >> arr[i];
            sum +=arr[i];
        }
        vector<long long >prefix_sum(n+1,0);
        for(int i = 1 ;i<=n;i++){
            prefix_sum[i] =prefix_sum[i-1] + arr[i-1];
        }
        while(q--){
            long long l,r,k;
            cin >> l >> r >> k;
            long long sum_to_remove = prefix_sum[r] -prefix_sum[l-1];
            long long sum_to_add = (r-l+1)*k;
            long long sum_1 = sum -sum_to_remove + sum_to_add;
            if(sum_1%2==0){
                cout << "NO" << endl;
            }
            else{
                cout << "YES" << endl;
            }
            sum_1 =0; 
        }
    }
    return 0;
}