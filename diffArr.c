#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
	
	
	int A[]={10,9,4,5,3,1}, B[]={1,4,5,6};
	int nA = sizeof(A)/sizeof(A[0]), nB = sizeof(B)/sizeof(B[0]);
	int lenA = nA-1, lenB = nB-1;
	
	if((lenA+1)==0){
		printf("Warning: At least array A is empty.");
	}
	
	void bubblesort(int *array, int lenA)
	{
	   int i, j,tmp;
	   for (i = 0; i < lenA ; i++){
	      for (j = i; j < lenA ; j++){
	          if (array[i] > array[j]){
	              tmp = array[i];
	              array[i] = array[j];
	              array[j] = tmp;
	          }
	      }
	   }
	}
	
	printDifference(A,B,lenA,lenB);

	return 0;
	
}

void printDifference(int A[], int B[], int lenA, int lenB){
	int i,j,k,c,s,v;
	int newArr[100];
	
	s=0;
	for(i=0;i<=lenA;i++){
		
		int c=0;
		for(j=0;j<=lenB;j++){
		
			if(A[i]==B[j]){
				//printf("%d ",A[i]);
				c++;
			}
		}
		
		if(c==0){
			newArr[s] = A[i];
			printf("%d ", newArr[s]);
			s++;
		}
		
	}

	}
