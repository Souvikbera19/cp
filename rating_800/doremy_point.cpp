#include <iostream>
#include <vector>
// deym nigga

using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin >> arr[i];
        }
        int base = arr[0];
        int temp ;
        for(int i=0;i<n;i++){
            if(arr[i]!= base){
                temp =arr[i];
                break;
            }
        }
        int count1=0;
        int count2=0;
        for(int i=0;i<n;i++){
            if(arr[i]==base){
                count1++;
            }
            else if(arr[i]==temp){
                count2++;
            }
        }
        if(count1 + count2!=n){
            cout << "NO"<<endl;
        }
        else{
            if(n%2!=0){
                if(min(count1,count2)==(n-1)/2 && max(count1,count2)==(n+1)/2){
                    cout << "YES"<< endl;
                }
            else{
                cout << "NO"<<endl;
            }
        }
        
        else if(n%2==0){
            if(count1==count2){
                cout << "YES"<<endl;
                }
            else{
                cout << "NO"<<endl;
                }
            }
        }
        

        
    }
    return 0;

}


#include <iostream>
#include <map>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int arr[n];
        for(int i =0;i<n;i++){
            cin >> arr[i];
        }
        map <int,int> mpp;
        for(auto it:arr){
            mpp[it]++;
        }
        if(mpp.size()==1){
            cout << "YES" <<endl;
        }
        else if(mpp.size()==2){
            auto it = mpp.begin();
            int c1 = it ->second;
            int c2 = next(it)->second;
                if(abs((c1)-(c2))<=1){
                    cout << "YES"<<endl;
                }
                else{
                    cout << "NO" <<endl;
                }
            }
        
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}