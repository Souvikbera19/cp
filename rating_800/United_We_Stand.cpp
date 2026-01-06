#include <iostream>
#include <vector>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        int arr[n];
        vector<int> b;
        vector<int> c;
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                int a1=arr[i], a2=arr[j];
                if(a1%a2==0||a2%a1==0){
                    c.push_back(a1);
                    c.push_back(a2);
                }
                else b.push_back(a1);
            }
        }
        int lb= b.size();
        int lc= c.size();
        if(lc==0) cout << -1;
        else {
            cout << lb << " " << lc << endl;
            for(int i=0; i<lb; i++){
                cout << b[i] << " ";
            }
            cout << endl;
            for(int i=0; i<lc; i++){
                cout << c[i] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}