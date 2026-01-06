#include <bits/stdc++.h>
using namespace std;

int div_by_2(int arr[],int n){
    for(int i=0;i<n;i++){
        if(arr[i]%2==0) return 0;
    }
    return 1;
}

int div_by_3(int arr[],int n){
    int ans = INT_MAX;
    for(int i=0;i<n;i++){
        if(arr[i]%3==0) return 0;
        else {
            ans = min(ans,3-(arr[i]%3));
        }
    }
    return ans;
}

int div_by_5(int arr[],int n){
    int ans = INT_MAX;
    for(int i=0;i<n;i++){
        if(arr[i]%5==0) return 0;
        else {
            ans = min(ans,5-(arr[i]%5));
        }
    }
    return ans;
}

int div_by_4(int arr[],int n){
    int ans=INT_MAX;
    int even_count=0;
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            even_count++;
            if(arr[i]%4==0) return 0;
        }
        
        else ans = min(ans,4-(arr[i]%4));
        
    }
    if(even_count==0) return min(ans,2);
    else if(even_count==1) return min(ans,1);
    else if(even_count>=2) return min(ans,0);
}


int main(){
    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n >> k;
        int arr[n];
        for(int i=0;i<n;i++) cin >> arr[i];
        if(k==2){
            int ans = div_by_2(arr,n);
            cout << ans << endl;
        }
        else if(k==3){
            int ans = div_by_3(arr,n);
            cout << ans << endl;
        }
        else if(k==4){
            int ans = div_by_4(arr,n);
            cout << ans << endl;
        }
        else if(k==5){
            int ans = div_by_5(arr,n);
            cout << ans << endl;
        }

        
    }
    return 0;

}
