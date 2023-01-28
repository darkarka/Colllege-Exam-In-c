/* Quick sort Using C  */
#include<stdio.h>
#include<stdbool.h>
#define lp(a,b,c) for(int a=b;a<c;a++)
#define sc1(a) scanf("%d",&a)
#define sc2(a,b) scanf("%d %d",&a,&b)
#define pf1(a) printf("%d",a)
#define pf2(a,b) printf("%d %d",a,b)
#define swap(a,b) {\
            a = a + b;\
            b = a - b;\
            a = a - b;\
            }

int part(int arr[], int lo, int hi){
    int piv = arr[hi];
    int i = (lo - 1);
    lp(j,lo,hi-1){
        if(arr[j] <= piv){
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i+1], arr[hi]);
    return (i+1);
}

int Qsort(int arr[], int l, int h){
    if(l < h){
        int key = part(arr, l, h);
        Qsort(arr, l, key-1);
        Qsort(arr, key+1, h);
    }
}

void print(int arr[], int size){
    lp(i,0,size){
        pf1(arr[i]);
    }
    printf("\n");
}
//Driver Code :
int main(){
	int arr[10] = { 9, 15, 10, 12, 23, 4, 48, 11, 12, 6 };
    // calculate the size of array 
    int n = sizeof(arr)/ sizeof(arr[0]);

    Qsort(arr, 0, n-1);
    printf("The sorted array is using Quick sort : \n");
    print(arr, n);

	return 0;
}
