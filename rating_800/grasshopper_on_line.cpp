#include<iostream>
#include<vector>
using namespace std;
int main(){
    long int t;
    cin >> t;
    while(t--){
        long long x,k;
        cin >> x >> k;
        if(x%k !=0 || x<k){
            cout << 1<<endl;
            cout << x << endl;
        }
        else{
            vector <long long> pts;
            // long long count=0;
            long long temp=x;
            for(int i=1;i<x;i++){
                if(((temp-i)%k !=0) && temp>0){
                    // count++;
                    pts.push_back(i);
                    pts.push_back(temp-i);
                    
                    break;
                }
            }
            cout << 2 << endl;
            for(auto it:pts){
                cout << it << " ";
            }
            cout << endl;
        }
    }
    return 0;
}