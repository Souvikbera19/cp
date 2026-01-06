#include<iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        long long count =1;
        bool cond = false;
        long long i;
        if(n==1){
            cout << 1 << endl;
        }
        else if(n==2) {
            cout << 2  << endl;
        }
        
        
        else{
            for(i=1;i<=n;i++){
                if(n%i!=0){
                    cout << i-1 << endl;
                    break ;
                }
            }
        }
        
        
    }
    return 0;
}