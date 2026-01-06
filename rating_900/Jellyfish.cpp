#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        long long a, b, n;
        cin >> a >> b >> n;
        long long x[n];
        long long sum=b;
        for(int i=0;  i<n; i++){
            cin >> x[i];
            sum+=min(x[i],a-1);
        }
        cout << sum << endl;
    }
    return 0;
}