#include <stdio.h>
#include<conio.h>

void merge(int [], int, int,int);
 void mergeSort(int[],int, int);


int main() {
int list[50];
int i, size;
printf("Enter total number of elements:");
scanf("%d", &size);
printf("Enter theelements:\n");
for(i= 0; i<size; i++) { 
    scanf("%d", &list[i]);
}
mergeSort(list, 0, size - 1);
printf("After merge sort:\n");

for(i = 0;i < size;i++){
printf("%d ",list[i]);
}
getch();
}


void mergeSort(int list[],int low,int high)
{
int mid;
if(low <high){
mid = (low + high) / 2;
mergeSort(list, low, mid);
mergeSort(list, mid + 1,
high);merge(list, low, mid,
high);
 }
}


void merge(int list[],int low,int mid,int high){
int i, mi, k, lo,
temp[50];
lo = low;
i = low;
mi = mid + 1;
while ((lo <= mid) && (mi <= high)){
if (list[lo] <= list[mi]) {
temp[i]=list[lo];lo++;
}
else {
temp[i] =list[mi];mi++;
}
i++;
}
if (lo> mid){
for (k = mi; k <= high; k++){
temp[i]=list[k];i++;
 }
}
else {
for (k = lo; k <= mid; k++) {
temp[i] =list[k];
i++;
}
}

for (k = low; k <= high; k++)
{
list[k] = temp[k];
}

}