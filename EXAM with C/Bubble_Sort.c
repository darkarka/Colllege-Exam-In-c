/* C Programing Bubble sorting */
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
// Using function for Bubble sorting 
int Bsort(int arr[], int n){
	lp(i,0,n-1){
		lp(j,0,n-i-1){
			if(arr[j] > arr[j+1]){
				swap(arr[j],arr[j+1]);
			}
		}
	}
	printf("Print the sorted list is :");
	lp(i,0,n){
		printf(" %d ",arr[i]);
	}
	printf("\n");
}

//Driver Code :
int main(){
	//Declar the size of array and the arr;
	int arr[100], n;
	printf("Enter the size of array : \n");
	// Take the input of size 
	sc1(n);
	// Taking input in the array using for loop 
	printf("Enter the element of array : \n");
	lp(i,0,n){
		sc1(arr[i]);
	}
	Bsort(arr, n);
	return 0;
}
