#include <iostream>
#include <vector>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--){
        long long n,x;
        cin >> n >> x;
        vector<long long> arr_points;
        arr_points.push_back(0);
        for(int i=0;i<n;i++){
            long long points;
            cin >> points;
            arr_points.push_back(points);
        }
        arr_points.push_back(x);
        vector<long long>dist;
        for(int i=0;i<n+1;i++){
            dist.push_back(arr_points[i+1]-arr_points[i]);
        }
        long long max_dist = (dist[n]*2);
        for(int i=0;i<dist.size();i++){
            if(dist[i]>max_dist){
                max_dist=dist[i];
            }
        }
        cout << max_dist << endl;
    }
    return 0;
    
}