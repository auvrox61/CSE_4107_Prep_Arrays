// Write a function that finds the intersection of two sorted arrays.

#include<stdio.h>

void intersection(int arr1[],int n1,int arr2[],int n2){
    int freq[100]={0};
    int found=0;
    for(int i=0;i<n1;i++){
        freq[arr1[i]]=1;
    }
    for(int i=0;i<n2;i++){
        if(freq[arr2[i]]==1){
            printf("%d ",arr2[i]);
            freq[arr2[i]]=2;
            found=1;
        }
    }
    if(!found){
        printf("No common elements found\n");
    }
}

int main(){
    int n1,n2;
    scanf("%d %d",&n1,&n2);
    int arr1[n1];
    int arr2[n2];
    for(int i=0;i<n1;i++){
        scanf("%d",&arr1[i]);
    }
    for(int i=0;i<n2;i++){
        scanf("%d",&arr2[i]);
    }
    intersection(arr1,n1,arr2,n2);
    return 0;
}