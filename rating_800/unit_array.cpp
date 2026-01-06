#include <iostream>
#include<vector>
using namespace std;
int main(){
    long int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int>arr(n);
        int neg=0;
        int pos=0;
        for(int i=0;i<n;i++){
            cin >> arr[i];
            if(arr[i]>0){
                pos++;
            }
            else{
                neg++;
            }
        }
        int count=0;
        while(neg >pos || neg%2 ==1){
            count++;
            pos++;
            neg--;
        }
        cout << count << endl;

    }
}