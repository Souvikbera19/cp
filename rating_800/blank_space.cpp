#include <iostream>
#include<vector>
using namespace std;
int main(){
    long int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int arr[n];
        
        int sum=0;
        for(int i=0;i<n;i++){
            cin >> arr[i];
            sum +=arr[i];
        }
        if(sum==n){
            cout << 0 << endl;
        }
        else{
            vector<int> diff;
            for(int i=0;i<n;i++){
                for(int j=i;j<n;j++){
                    if(arr[i]==0 && arr[j]==0){
                        diff.push_back(j-i+1);
                    }
                    else {
                        break;
                    }
                }
            }
            int max=diff[0];
            for(auto it:diff){
                if(it>=max){
                    max = it;
                }
            }
        cout << max << endl;
        }
        
    }
    return 0;
}