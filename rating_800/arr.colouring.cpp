#include <iostream>
#include <vector>
using namespace std;
int main(){
    long int t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        long long sum = 0;
        vector <long long> arr(n);
        for(int i=0;i<n;i++){
            cin >> arr[i];
            sum +=arr[i];
        }
        if(sum%2==0){
            cout << "YES" << endl;
        }
        else{
            cout <<"NO" << endl;
        }
        
    }
    return 0;
}

