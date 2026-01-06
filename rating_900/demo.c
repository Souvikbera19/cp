#include<stdio.h>
// void sort();
int main()
{
    int T;
    scanf("%d",&T);
    while(T--)
    {
        long long n,k,max=1,count=1;
        scanf("%lld%lld",&n,&k);
        long long arr[n];
        for(int i=0;i<n;i++){
            scanf("%lld",&arr[i]);
        }
        
        for(int i=0;i<n-1;i++) {
            for(int j=0;j<n-i-1;j++){
                if(arr[j]>arr[j+1]){
                    long long t = arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1] = t;
                }
            }
        }
    
        for(int i=0;i<n-1;i++)
        {
            if(arr[i+1]-arr[i]<=k) ++count;
            else count = 1;
            if(count>max) max = count;
        }
        printf("%lld\n",n-max);
    }
    return 0;
}