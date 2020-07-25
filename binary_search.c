#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int main(){
    int i,j,n,temp,x;
    printf("Enter how many numbers you need: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the numbers:");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if(arr[i] > arr[j]){
                temp = arr[i];
                arr[i]=arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("Sorted array is:\t");
    for(i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }
    printf("\nEnter the number to be searched: ");
    scanf("%d",&x);
    int first = 0;
    int last = n-1;
    int middle = (first + last)/2;

    while(first<=last){
        if(arr[middle]<x){
            first = middle + 1;
        }
        else if (arr[middle]==x){
            printf("%d is found at position %d",x,middle+1);
            break;
        }
        else last = middle - 1;
        middle = (first + last) / 2;
    }
    if(first > last ){
        printf("%d doesn't exist in this array!",x);
    }


    return 0;
}

