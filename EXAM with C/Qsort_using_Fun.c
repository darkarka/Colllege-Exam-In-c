#include<stdio.h>
#include<stdlib.h>

int val[] = { 88, 56, 100, 2, 25 };

int cmpfunc(const void *a, const void *b){
    return (*(int*)a - *(int*)b);
}
/*
for decending order we can do return (*(int*)b - *(int*)a);
*/


void print(int val[], int size){
    for(int i=0;i<size;i++){
        printf("%d ", val[i]);
    }
}

int main(){
    int size = sizeof(val)/sizeof(val[0]);
   qsort(val,size,sizeof(int), cmpfunc);
    
    print(val,size);
   return 0; 
}

/*
int comparator (const void *x , const void * y);

return value of the function will effect the sorting order 


<0 if x should go before y
0 if x is equivalent to y
>0 if x should go after y


*/