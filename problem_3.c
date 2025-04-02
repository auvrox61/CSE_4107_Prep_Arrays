// Implement a function that finds the missing number in an array of size N containing 
//numbers from 1 to N

#include<stdio.h>

void missing(int arr[],int n){
    int freq[n+1]={0};
    for(int i=0;i<n;i++){
        freq[arr[i]]++;
    }
    for(int i=1;i<=n;i++){
        if(freq[i]==0){
            printf("%d ",i);
        }
    }
}

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    missing(arr,n);
    return 0;
}