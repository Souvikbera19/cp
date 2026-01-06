#include<iostream>
#include<vector>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int arr[n];
        // int one_count=0;
        int two_count =0;
        vector<int> two_index;
        for(int i=0;i<n;i++){
            cin >> arr[i];
            if(arr[i]==2){
                two_count++;
                two_index.push_back(i);
            }
        }
        if(two_count==0){
            cout << 1 << endl;
        }
        else{
            int temp_2_count = 0;
            if(two_count%2!=0){
                cout << -1 <<endl;
            }

            else{
                cout << two_index[(two_index.size())/2 -1] + 1 << endl;
            }
        }

    }
    return 0;
}

// else{
            //     for(int i=0;i<n;i++){
            //         if(arr[i]%2==0){
            //             temp_2_count++;
            //         }
            //         if(temp_2_count==(two_count-temp_2_count)){
            //             cout << i+1 << endl;
            //             break;
            //         }
            //     }
            // }