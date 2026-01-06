#include<iostream>
#include<vector>
using namespace std;
int main(){
    long long n;
    cin >> n;
    vector<long long> arr(n);
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    long long minimum_operations = INT_MAX;
    for(int i=0;i<n;i++){
        minimum_operations= min(minimum_operations,abs(arr[i]));
    }
    cout << minimum_operations << endl;
    return 0;
    

}