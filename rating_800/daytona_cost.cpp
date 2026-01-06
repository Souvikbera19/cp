#include<iostream>
#include<vector>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n ,k;
        cin >> n >> k;
        bool present = false;
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin >> arr[i];
        }
        for(int i=0;i<n;i++){
            if(arr[i]==k){
                present= true;
            }
        }
        if(present){
            cout << "YES"<<endl;
        }
        else{
            cout << "NO"<< endl;
        }

    }
    return 0;
}