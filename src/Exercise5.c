/*
5. Write a function to move all positive element of an array upfront
Ex:
______________________________________
| Input: 2 -3 4 6 -7 9 8 -2          |
| Output: 2 4 6 9 8 -3 -7 -2         |
|____________________________________|
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void Ex5(int arr[], int n){
	//Your codes here
	int tam=0;
	for (int i=0;i<n;i++){
		if(arr[i]<0){
			for(int j=i+1; j<n; j++){
				if(arr[j]>0){
					tam=arr[i];
					arr[i]=arr[j];
					arr[j]=tam;
				}
			}
		}
	}
	for (int i = 0;i < n;i++)
	{
		printf("%d\n",arr[i]);
	}
}


int main(int argc, char *argv[]) {
	//testing variable, applying it to your algorithm for auto-evaluating
	argc--;
	int testcase[50],i;
	for(i=0; i<argc;i++){
		testcase[i] = atoi(argv[i+1]);
	}
	
	Ex5(testcase, argc);
	
	return 0;
}
