#include <iostream>
#include <vector>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        if(n%2!=0||n<4) cout << -1 << endl;
        else{
             cout << (n+4/6) << " " << n/4 << endl;
        }
    }
    return 0;
}