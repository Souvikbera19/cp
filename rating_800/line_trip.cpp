#include <iostream>
#include <vector>
using namespace std;
int main(){
    int t;
    cin >>  t;
    while(t--){
        long long n,x;
        cin >> n >> x;
        vector<long long> points_arr;
        points_arr.push_back(0);
        for(int i=0;i<n;i++){
            long long points;
            cin >> points;
            points_arr.push_back(points);
        }
        points_arr.push_back(x);
        n = points_arr.size();
        long long max_dist = INT_MIN;
        for(int i=1;i<n;i++){
            if(i==n-1){
                max_dist= max(max_dist,(points_arr[i]-points_arr[i-1])*2);
            }
            else{
                max_dist=max(max_dist,(points_arr[i]-points_arr[i-1]));
            }
        }
        cout << max_dist <<endl;
    }
    return 0;
}