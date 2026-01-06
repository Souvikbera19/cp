#include <iostream>
// #include <vector>
using namespace std;
int main(){
    long int  t;
    cin >> t;
    while(t--){
        long long a,b,c;
        cin >> a>>b>>c;
        if(a>b) cout << "First" << endl;
        else if(a==b){
            if(c%2!=0) cout << "First" << endl;
            else cout << "Second" << endl;
        }
        else cout << "Second" << endl;

    }
    return 0;
}