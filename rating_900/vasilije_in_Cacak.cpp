#include<iostream>
#include<vector>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        long long n,k,x;
        cin >> n >> k >> x;
        long long sm_sum = (k*(k+1))/2;
        long long lr_sum = k*(2*n-k+1)/2;
        if(x >=sm_sum && x<=lr_sum){
            cout << "YES" << endl;
        }
        else{
            cout <<"NO"<<endl;
        }
        
    }
    return 0;
}