// code in c for lu decompositon method
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
    int i,j,k,n;
    float A[20,20],L[20,20],U[20,20];
    float B[20],X[20],Y[20];
    printf("Enter the number of unknowns: ");
    scanf