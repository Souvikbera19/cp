#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        long long n,x;
        cin >> x>>n;
        if(x%2==0){
            if(n%4==1) x-=n;
            else if(n%4==2) x +=1;
            else if(n%4==3) x +=(n+1);
            else if(n%4==0) x+=0;
        }
        else{
            if(n%4==1) x +=n;
            else if(n%4==2) x -=1;
            else if(n%4==3) x -=(n+1);
            else if(n%4==0) x += 0;
        }
        cout << x << endl;
        }
    
    return 0; 
}
