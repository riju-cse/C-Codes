#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
int main(){

    int n,t,c;
    bool cheak=false;
    printf("Enter hoe many numbers you want: ");
    scanf("%d",&n);
    int arr1[n];
    printf("Enter the elements: ");
    for(int i=0; i<n; i++){
        scanf("%d",&arr1[i]);
    }
    for(int i=0; i<n; i++){
        printf("%d ",arr1[i]);
    }
    printf("what you want to find");
    scanf("%d",&t);

    for(int i=0 ; i<n ; i++){
        if(arr1[i]==t){
          cheak=true;
           c=i+1;
            break;
        }
        else{
            cheak=false;
        }
    }
        if(cheak==true){
            printf("found%d",c);
        }
        else{
            printf("not found");
        }
    return 0;
}
