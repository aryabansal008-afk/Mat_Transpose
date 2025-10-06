#include<stdio.h>
int main(){
int r,c;
    printf("Enter the number of rows:");
    scanf("%d", &r);
    printf("Enter the number of columns:");
    scanf("%d", &c);
printf("Enter all the elements:");
int arr[r][c];
for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
        scanf("%d", &arr[i][j]);
    }
}
printf("\n");
printf("The transpose is:\n");
for(int i=0;i<c;i++){
    for(int j=0;j<r;j++){
        printf("%d ", arr[j][i]);
    }
        printf("\n");

}
//If you want to store this transpose then make a new int stating brr
int brr[c][r];
printf("\n");
for(int i=0;i<c;i++){
    for(int j=0;j<r;j++){
brr[i][j] = arr[j][i];    }
printf("\n");
}
for(int i=0;i<c;i++){
    for(int j=0;j<r;j++){
        printf("%d", brr[i][j]);}
        printf("\n");}
return 0;}