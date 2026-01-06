#include <bits/stdc++.h>
using namespace std;
int main(){
        string s;
        cin >> s;
        int count =0;
        vector<int> counter;
        for(int i=0;i<s.length()-1;i++){
            if(s[i]==s[i+1]) count++;
            else{
                counter.push_back(count);
                count = 0;
            }
        }
        counter.push_back(count);
        sort(counter.begin(),counter.end());
        cout << counter[counter.size()-1] + 1 << endl;
        return 0;
    }
