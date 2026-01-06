#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        vector<long long> arr(n);
        for(int i=0;i<n;i++){
            cin >> arr[i];
        }
        sort(arr.begin(),arr.end());
        long long
        for(int i=0;i<n-1;i++){
            if(arr[i]==arr[i+1]){
                count++;
            }
        }
    }
}