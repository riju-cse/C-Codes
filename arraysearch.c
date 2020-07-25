#include<stdio.h>
#include<stdlib.h>

int main(){

    int n,x,c,count=0,j;
    printf("Enter how many numbers you want: ");
    scanf("%d",&n);
    int arr1[n];
    printf("Enter the elements: ");
    for(int i=0; i<n; i++){
        scanf("%d",&arr1[i]);
    }
    for(int i=0; i<n; i++){
        printf("%d ",arr1[i]);
    }

    for(int i=0 ; i<n ; i++){
        for(i=0;i<n;i++){
                count=0;
        for(j=0;j<n;j++){
             x=arr1[i];
             if(x=arr1[j]){
             count++;
             c=i+1;
            printf("\nvalue%d position%d",arr1[i],c);
             }
             printf("\ncount%d",count);
           }
         }
       }

    return 0;
}
