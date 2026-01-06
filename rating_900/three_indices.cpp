#include <iostream>
#include <vector>
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
        long long i_ind,j_ind,k_ind;
        bool cond  = false;
        for(int j=1;j<n-1;j++){
            if(arr[j]>arr[j-1] && arr[j]>arr[j+1]){
                    i_ind = j-1;
                    j_ind= j;
                    k_ind = j+1;
                    cond = true;
                    break;
            }
        }
        if(cond){
            cout << "YES" << endl;
            cout << i_ind+1 <<" " << j_ind+1 << " " << k_ind+1<< endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    return 0;
}