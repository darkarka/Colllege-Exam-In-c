#include<stdio.h>
#define lp(a,b,c) for(int a=b;a<c;a++)
void swap(int *a, int *b){
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}

void selectionSort(int *arr, int size){
    lp(i,0,size){
        int min_ind = i;
        lp(j,i+1,size){
            if(arr[j] < arr[min_ind]){
                min_ind = j;
            }

            swap(&arr[min_ind],&arr[i]);
        }
    }
}


// function to print an array
void printArray(int *array, int size) {
  for (int i = 0; i < size; ++i) {
    printf("%d  ", array[i]);
  }
  printf("\n");
}

// driver code
int main() {
  int data[] = {20, 12, 10, 15, 2};
  int size = sizeof(data) / sizeof(data[0]);
  selectionSort(data, size);
  printf("Sorted array in Acsending Order:\n");
  printArray(data, size);
}