#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        vector<long long> arr(n);
        long long zero_count=0;
        bool cond = false;
        for(int i=0;i<n;i++){
            cin >> arr[i];
            if(arr[i]==0) zero_count++;
        }
        long long left = 0;
        long long right = n-1;
        while(arr[left]==0){
            left++;
        }
        while(arr[right]==0) right--;
        for(int i = left;i<= right;i++ ){
            if(arr[i]==0) cond = true;
        }
        if(zero_count==n) cout << 0 << endl;
        else if(cond) cout << 2 << endl;
        else cout << 1 << endl;

    }
    return 0;
}