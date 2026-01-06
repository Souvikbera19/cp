#include<iostream>
#include <vector>
using namespace std;
int main(){
    long long t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        vector<long long> arr(n);
        for(int i=0;i<n;i++){
            cin >> arr[i];
        }
        long long x,y;
        bool cond =false;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if((arr[j]%arr[i])%2==0){
                    x= arr[i];
                    y=arr[j];
                    cond = true;
                    break;
                    
                }
            
            }
            if(cond){
                break;
            }

        }
        if(cond){
            cout << x << " " << y << endl;
        }
        else{
            cout << -1 << endl;
        }
    }
    return 0;
}