// Implement a function that finds the majority element (element appearing more than n/2 times).

#include<stdio.h>

int majority(int arr[],int n){
    int freq[10]={0};
    for(int i=0;i<n;i++){
        freq[arr[i]]++;
    }
    for(int i=0;i<10;i++){
        if(freq[i]>=n/2){
            return i;
        } else{
            return -1;
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
    int maj_element=majority(arr,n);
    if(maj_element!=-1){
        printf("%d\n",maj_element);
    } else{
        printf("No such element found\n");
    }
    return 0;
}