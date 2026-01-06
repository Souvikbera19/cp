#include <iostream>
#include <vector>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        long long n,k,max=1;
        cin >> n >> k;
        vector<long long> arr(n);
        for(int i=0;i<n;i++){
            cin >> arr[i];
        }
        long long count=1;
        sort(arr.begin(),arr.end());
        for(int i=0; i<n-1;i++){
            if(arr[i+1]-arr[i]<=k) ++count;
            else count=1;
            if(count>max) max = count;
        }
        cout << n-max << endl;
    }
    return 0;
}