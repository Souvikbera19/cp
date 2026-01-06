#include <iostream>
#include <vector>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<long long> arr(n);
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }
        long x;
        cin >> x;
        int i= 0;
        while(arr.size()!=1){
            if(x>=arr[i] && x<=arr[i+1]){
                arr.insert(arr.begin()+i,x);
                arr.erase(arr.begin()+i+1);
                arr.erase(arr.begin()+i+1);
            }
            i++;
        }
        if(arr[0]==x){
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
