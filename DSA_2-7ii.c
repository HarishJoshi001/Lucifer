#include <stdio.h>
#include <stdlib.h>


void MergeSort(int x[],int temp[], int left, int right){
    int mid;
    if(left<right){
        mid = (right+left)/2;
        MergeSort(x, temp, left, mid);
        MergeSort(x, temp, mid+1, right);
        merge(x, temp, left, mid+1, right);
    }
}

void  merge(int x[], int temp[], int left, int mid, int right){
    int i, lend, no_element, tmpos;
    lend = mid-1;
    tmpos = left;
    no_element = right - left + 1;

    while((left <= lend) && (mid <= right)){
        if(x[left] <= x[mid]){
            temp[tmpos] = x[left];
            tmpos = tmpos + 1;
            left = left + 1;
        }else{
            temp[tmpos] = x[mid];
            tmpos = tmpos + 1;
            mid = mid + 1;
        }
    }
    while(left <= lend){
        temp[tmpos] = x[left];
        left = left + 1;
        tmpos = tmpos + 1;
    }
    while(left <= lend){
        temp[tmpos] = x[left];
        left = left + 1;
        tmpos = tmpos + 1;
    }

    while(mid <= right){
        temp[tmpos] = x[mid];
        mid = mid + 1;
        tmpos = tmpos + 1;
    }

    for(i=0; i<=no_element;i++){
        x[right] = temp[right];
        right = right - 1;
    }
}

int main()
{
    printf("Enter the size of the array: ");
    int size;
    scanf("%d", &size);
    int arr[size];
    for(int i=0; i<size;i++){
        printf("Enter the data[%d] in the array: ", i+1);
        scanf("%d", &arr[i]);
    }
    int temp[size];

    printf("The unsorted data is: \n");
    for(int i=0; i<size;i++){
        printf("%d \t", arr[i]);
    }
    printf("\n");

    MergeSort(arr,temp,0,size-1);
    printf("The sorted data is: \n");
    for(int i=0; i<size;i++){
        printf("%d \t", arr[i]);
    }
    return 0;
}
