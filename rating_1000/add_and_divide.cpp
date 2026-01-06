#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int a,b;
        cin >> a >> b;
        int ans = 40;
        for(int i=0;i<40;i++){
            int operations = i;
            int new_b = b + i;
            if(new_b==1) continue;
            int new_a = a;
            while(new_a>0){
                new_a /=new_b;
                operations++;
            }
            ans = min(ans,operations);
        }
        cout << ans << endl;
    }
    return 0;
}