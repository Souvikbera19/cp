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
        vector <long long> org_arr;
        org_arr.push_back(arr[0]);
        for(int i=1;i<n;i++){
            if(arr[i]>=arr[i-1]){
                org_arr.push_back(arr[i]);
            }
            else{
                org_arr.push_back(arr[i]);
                org_arr.push_back(arr[i]);
            }
        }
        cout << org_arr.size() << endl;
        for(auto it:org_arr){
            cout << it <<" " ;
        }
        cout << endl;

    }
    return 0;
    
}