//Write a function that rotates an array to the right by K positions.

#include<stdio.h>

void rotateK(int arr[],int n,int k){
    for(int i=n-k;i<n;i++){
        printf("%d ",arr[i]);
    }
    for(int i=0;i<n-k;i++){
        printf("%d ",arr[i]);
    }
}

int main(){
    int n,k;
    scanf("%d %d",&n,&k);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    rotateK(arr,n,k);
    return 0;
}