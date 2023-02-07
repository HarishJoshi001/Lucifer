#include <stdio.h>
#include <stdlib.h>

#define size 5
void InsertionSort(int a[], int N);
void bin_search(int a[], int ch, int left, int mid , int right);

int main()
{
    //printf("Enter the size of the array: ");
   // int size;
   // scanf("%d", &size);
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

    int ch;
    printf("Enter data to search:\n");
    scanf("%d", &ch);
    bin_search(arr, ch, 0, size/2, size);

    return 0;
}
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

void bin_search(int a[], int ch, int left, int mid , int right){

    int beg=left;
    int end=right;
        int loc;
        while((beg<=end) && (a[mid]!=ch)){

            if(ch<a[mid]){
                end=mid-1;
            }
            else{
                beg=mid+1;
            }
            mid=(beg+end)/2;

}
            if(a[mid]=ch){
                loc=mid;
                printf("The data %d is found at %d",ch, mid+1 );
            }
            else{
                loc=NULL;
            }


    }






