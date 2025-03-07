#include<stdio.h>
#include<conio.h>
#include<math.h>
//code in c for gauss elmination elimination method
void main(){
    int i,j,k,n;
    float a[10][10],x[10],b[10];
    printf("Enter the number of unknowns: ");
    scanf("%d",&n);
    printf("Enter the Augmented Matrix row-wise:\n");
    for(i=1;i<=n;i++){
        for(j=1;j<=n+1;j++){
            scanf("%f",&a[i][j]);
        }
    }
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            if(i!=j){
                float m=a[j][i]/a[i][i];
                for(k=1;k<=n+1;k++){
                    a[j][k]=a[j][k]-m*a[i][k];
                }
            }
        }
    }
    for(i=1;i<=n;i++){
        x[i]=a[i][n+1]/a[i][i];
    }
    printf("The values of the unknowns are:\n");
    for(i=1;i<=n;i++){
        printf("x%d=%f\n",i,x[i]);
    }

}
