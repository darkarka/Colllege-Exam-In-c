#include<stdio.h>
#include<stdlib.h>

int cmpfunc(const void *a, const void *b){
    return (*(int*)a - *(int*)b);
}


void print(int val[], int size){
    for(int i=0;i<size;i++){
        printf("%d ", val[i]);
    }
}



int main(){
    
    int arr[] = {1,7,3,4,2};
    int a[] = {11, 53, 12, 5};
    int si1= sizeof(arr)/sizeof(arr[0]);
    int n = sizeof(a)/ sizeof(a[0]);
    int val[100];


    int size = si1 + n;


    for(int i = 0; i < si1; i++){
       val[i] = arr[i];
    }
    for(int i = 0; i < n ;i++){     
        val[i + si1] = a[i];
    }



    // int p = sizeof(val)/sizeof(val[0]);
   qsort(val,9,sizeof(int), cmpfunc);
    
    print(val,size);
   return 0; 
}