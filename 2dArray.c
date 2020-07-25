#include<stdio.h>
#include<conio.h>
int main(){
    int r,c,arr1[100][100],arr2[100][100],arr3[100][100],i,j;
    printf("enter the numbers of row and coloumsof first and second matrix");
    scanf("%d%d",&r,&c);
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("enter first matrix value");
            scanf("%d",&arr1[i][j]);
        }
    }
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("enter second matrix value");
            scanf("%d",&arr2[i][j]);
        }
    }
    printf("\nvalue of first matrix");
       for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("\t%d",arr1[i][j]);
            }
            printf("\n");
       }
       printf("\nvalue of second matrix");
           for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("\t%d",arr2[i][j]);
        }
        printf("\n");
    }
     for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            arr3[i][j]=arr1[i][j]+arr2[i][j];
        }
    }
    printf("\naddition of two matrix");
           for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("\t%d",arr3[i][j]);
            }
            printf("\n");
       }
    return 0;
}
