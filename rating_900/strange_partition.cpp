#include <iostream>
#include <vector>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        long long n,k;
        cin >> n >> k;
        vector<long long> arr(n);
        for(long long i=0;i<n;i++){
            cin >> arr[i];
        }
        long long max=0;
        long long min=0;
        for(int i=0;i<n;i++){
            min +=arr[i];
            if(arr[i]%k!=0){
                max+=(arr[i]/k) + 1;
            }
            else{
                max+=(arr[i]/k);
            }
        }
        if(min%k !=0){
            min = min/k + 1;
        }
        else{
            min = min/k;
        }
        cout << min << " " << max << endl;
    }
    return 0;
}