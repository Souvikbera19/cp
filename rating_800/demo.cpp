#include<iostream>
#include <vector>
using namespace std;
int main(){
    long int t;
    cin >> t;
    while(t--){
        long long n,m;
        cin >> n >> m;
        vector<long long> a(n);
        for(int i=0;i<n;i++){
            cin >> a[i];
        }
        vector<long long> b(m);
        for(int i=0;i<m;i++){
            cin >> b[i];
        }
        vector<long long> c(m);
        for(int i=0;i<m;i++){
            cin >> c[i];
        }
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        long long i=0;
        long long j=0;
        long long count=0;
        while(i<n && j<m){
            if(a[i]>=b[j]){
                count++;
                a[i] = (a[i]>=c[count-1]) ? a[i] : c[count-1];
                sort(a.begin(),a.end());
                j++;
                i++;
            }
            else{
                i++;
            }
        }
        cout << count << endl;

    }
    return 0;
}