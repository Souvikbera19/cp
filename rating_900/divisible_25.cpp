#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){

        string s;
        cin >> s;
        long long n = s.length();
        vector<long long> arr;
        for(int i=0;i<n;i++) arr.push_back(s[i]-'0') ;
        long long count=0;
        bool cond = false;
        for(int i=n-1;i<=0;i--){
            if(arr[i]==5 ){
                for(int j=i-1;j>=0;j--){
                    if(arr[j]==2 || arr[j]==7){
                        cond = true;
                        break;
                    } 
                    else count++;
                }
            }
            else if(arr[i]==0){
                for(int j=i-1;j>=0;j--){
                    if(arr[j]==0 || arr[j]==5){
                        cond = true;
                        break;
                    } 
                    else count++;
                }

            }
            if(cond) break;
            else count++;

        }
        cout << count << endl;
    } 
    return 0;
}