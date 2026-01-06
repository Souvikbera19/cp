#include<iostream>
#include <vector>
using namespace std;
int main(){
    long int t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        vector <long long> arr(n);
        for(int i=0;i<n;i++){
            cin >> arr[i];
        }
        long long d=INT_MAX;
        bool sort = false;
        for(int i=1;i<n;i++){
            if(arr[i]>=arr[i-1]){
                long long diff = arr[i]-arr[i-1];
                d = min(d,diff);
                sort = true;
            }
            else{
                sort = false;
                break;
            }
        }
        if(sort){
            cout << d/2 + 1 << endl;
        }
        else{

            cout << 0 << endl;
        }
        

    }
    return 0;
}