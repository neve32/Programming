#include<stdio.h>
#include<stdlib.h>
int* insertSortedArray(int arr[],int N,int X){
    int i,j;
    int *a = (int*)malloc(sizeof(int)*N);
  //  if(N<=0) return;
    if(X<=arr[0]) i=0;
    else{
        for(i=1;i<N;i++){
            if(arr[i]>=X&&arr[i-1]<=X) break;
        }
    }
    for(j=N;j>i;j--) a[j]=arr[j-1];
    a[i]=X;
   // N++;
    return a;
}
int main(){
    int a[1000],n,x;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    scanf("%d",&x);
    int *arr = (int*)malloc(sizeof(int)*n);
    arr = insertSortedArray(a,n,x);
    for(int i=0;i<n+1;i++){
        printf("%d ",arr[i]);
    }
}
