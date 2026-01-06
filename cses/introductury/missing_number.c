#include <stdio.h>
#include <stdlib.h>


int cmp(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}


int missing_number(int arr[],int n){
    for(int i=0;i<n-1;i++){
        if(arr[i] != i+1){
            return i+1;
        }
    }
    return n;
}

int main(){
    int n;
    (void)scanf("%d",&n);
    int *arr = (int*)malloc((n-1)*sizeof(int));

    for(int i=0;i<n-1;i++) (void) scanf("%d",&arr[i]);

    qsort(arr,n-1,sizeof(int),cmp);
    int ans = missing_number(arr,n);
    printf("%d\n",ans);
    free(arr);
    arr = NULL;
    return 0;
}
