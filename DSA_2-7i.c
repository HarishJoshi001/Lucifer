#include <stdio.h>
#include <stdlib.h>


void InsertionSort(int a[], int N){
    int i,j;
    int hold;
    for(i=1;i<N;i++){
        hold = a[i];
        for(j=i-1;j>=0 && a[j] > hold; j--){
            a[j+1] = a[j];
        }
        a[j+1]=hold;
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
    printf("The unsorted data is: \n");
    for(int i=0; i<size;i++){
        printf("%d \t", arr[i]);
    }
    printf("\n");

    InsertionSort(arr, size);
    printf("The sorted data is: \n");
    for(int i=0; i<size;i++){
        printf("%d \t", arr[i]);
    }
    return 0;
}
