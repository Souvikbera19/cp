#include <iostream>
#include <vector>
using namespace std;
int main(){
    long long t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        vector<long long> arr;
        for(int i=0;i<n;i++){
            long long seq;
            cin >> seq;
            arr.push_back(seq);
        }
        long long i=0;
        long long  j =1;
        long long x,y;
        int  cond = 0;
        while(cond==0){
            if((arr[j]%arr[i])%2==0){
                x=arr[i];
                y=arr[j];
                cond =1;
                break;
                
            }
            else{
            
                j++;
            }
            
        }
        if(cond==1){
            cout << x << " " << y << endl;
        }
        else{
            cout << -1 << endl;
        }
        
    }
    return 0;
}