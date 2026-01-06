#include <iostream>
#include <vector>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        vector<long long> a(n);
        for(int i=0; i<n; i++){
            cin >> a[i];
        }
        sort(a.begin(),a.end());
        long long diff= a[n-1]-a[0];
        cout << diff << endl;
    }
    return 0;
}