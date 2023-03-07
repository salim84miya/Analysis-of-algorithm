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
   
    for(int i=0; i<n; i++){
      for(int j=i; j>0; j--){
        if(a[j]<a[j-1]){
            int temp =a[j];
            a[j]=a[j-1];
            a[j-1]= temp;
        }
      }
    }


    for(int i =0; i<n; i++){
        printf("%d\t",a[i]);
    }

    return 0;
}