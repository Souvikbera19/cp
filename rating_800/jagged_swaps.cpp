#include <iostream>
#include <vector>
using namespace std;
int main(){
    int test_case;
    cin >> test_case;
    while (test_case--){
        long long n;
        cin >> n;
        long long arr[n];
        for(int i=0;i<n;i++){
            cin >> arr[i];
        }
        if(arr[0]==1){
            cout << "YES" << endl;
        }
        else{
            cout << "NO "<< endl;
        }
    }
    return 0;
    
}