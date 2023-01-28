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
    
    int n;
    scanf("%d",&n);
    int* val;

    val = (int*)malloc(sizeof(int));
    for(int i=0;i<n;i++){
        scanf("%d",&val[i]);
    }

    int key;
    scanf("%d",&key);




    
    
    
    
   qsort(val,n,sizeof(int), cmpfunc);
    
    print(val,n);
   return 0; 
}
