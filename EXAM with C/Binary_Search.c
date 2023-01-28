#include<stdio.h>
#include<stdlib.h>

int comp(const void *a, const void *b){
    return ((*(int*)a) - (*(int*)b));
}


int binary_search(int *arr, int size , int key){
    int start =0;
    int end = size -1;
    int mid =0;

    while (start <= end)
    {
        mid = (start + end)/2;

        if(key == arr[mid]){
            return mid;
        }
        if(key < arr[mid]){
            end = mid -1;
        }
        else{
            start = mid + 1;
        }

        return -1;
    }
    
}


int main(){
    int arr[] = {5, 2, 6, 1, 12, 45, 56, 58, 63, 65, 78, 89, 90};
    int key = 0;
    int arr_size, result;
    arr_size = sizeof(arr)/sizeof(arr[0]);
    qsort(arr,arr_size,sizeof(int),comp);
    printf("The array :");
    for (int i = 0; i < arr_size; i++)
    {
        printf(" %d ",arr[i]);
    }

    printf("\n");
    printf(" %d is the smallest element \n",arr[0]);
    printf(" %d is the largest element \n",arr[arr_size-1]);
    printf("Enter a key to search : ");
    scanf(" %d ",&key);

    result = binary_search(arr, arr_size , key);

    if(result == -1){
        printf("\nKey Not found ");
    }
    else{
        printf("\nKey is present ");
    }

    return 0;
    
}
