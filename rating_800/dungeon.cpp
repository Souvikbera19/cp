#include<iostream>
#include <vector>
using namespace std;
int main(){
    long long t;
    cin >> t;
    while(t--){
        long long n,m;
        cin >> n >> m;
        vector<long long>sword_damage;
        for(int i=0;i<n;i++){
            long long sd;
            cin >> sd;
            sword_damage.push_back(sd);
        }
        vector<long long>monster_health;
        for(int i=0;i<m;i++){
            long long mh;
            cin >> mh;
            monster_health.push_back(mh);
        }
        vector<long long> c_rep;
        for(int i=0;i<m;i++){
            long long c;
            cin >> c;
            c_rep.push_back(c);
        }
        long long count =0;
        for(int i=0;i<n;i++){
            for(int j=0;i<m;j++){
                if(sword_damage[i]>=monster_health[j]){
                    count ++;
                    sword_damage[i]=max(sword_damage[i],c_rep[i]);
                }
            }
        }

    }
}