#include <stdio.h>
#include<stdlib.h>
#include<time.h>

// A recursive binary search function. It returns
// location of x in given array arr[l..r] is present,
// otherwise -1

int binarySearch(int arr[], int l, int r, int x){

    if (r >= l) {
int mid = l + (r - l) / 2;
// If the element is present at the middle
// itself
if (arr[mid] == x)
return mid;
// If element is smaller than mid, then
// it can only be present in left subarray
if (arr[mid] > x)
return binarySearch(arr, l, mid - 1, x);
// Else the element can only be present
// in right subarray
return binarySearch(arr, mid + 1, r, x);
}else{
// We reach here when element is not
// present in array
return -1;
 }
}

int main(){
    struct timespec begin;
timespec_get(&begin,TIME_UTC);

    int n=4000;
int arr[n];
for(int i=0; i<n; i++){
    arr[i]= 1000+i;
}
int x = 2888;
int result = binarySearch(arr, 0, n - 1, x);
(result == -1)
? printf("Element is not present in array")
: printf("Element is present at index %d", result);
struct timespec end;
timespec_get(&end,TIME_UTC);
double time = (end.tv_sec-begin.tv_sec)+(end.tv_nsec-begin.tv_nsec)/1000000000.00;
printf("\ntime taken for execution is %f",time);
return 0;
}