#include <iostream>
#include <vector>
using namespace std;
int main(){
    long t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> effi_points(n-1);
        int effi_n_team=0;
        for(int i=0;i<n-1;i++){
            cin >> effi_points[i];
            effi_n_team += effi_points[i];
        }
        cout << -(effi_n_team)<<endl;
        
    }
    return 0;
}