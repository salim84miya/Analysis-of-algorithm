#include<stdio.h>

int main(){

int n;
    printf("Enter the size of array\n");
    scanf("%d",&n);

    int a[n];

    for(int i =0; i<n; i++){
        printf("a%d:",i);
        scanf("%d",&a[i]);
    }
   
    for(int i=0; i<n-1; i++){
      for(int j=i; j<n; j++){
        if(a[i]>a[j]){
            int temp =a[i];
            a[i]=a[j];
            a[j]= temp;
        }
      }
    }

    for(int i =0; i<n; i++){
        printf("%d\t",a[i]);
    }

    return 0;
}