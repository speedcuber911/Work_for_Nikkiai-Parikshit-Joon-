#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main() {
  //Declaring variables
	int no,i,j,smallest;
	char input[15][15],output[15][15];
	char temp[20];
	strcpy(temp,"\0");
  printf("Enter no. of strings to be entered: ");
	scanf("%d",&no);
	for(i=0;i<no;i++){
    printf("Enter String");
		scanf("%s",input[i]);
	}
//Performing Sort
	for(i=0;i<no;i++){
		smallest=i;
		for(j=i+1;j<no;j++){
			if(strlen(input[j])<strlen(input[smallest])){
				smallest=j;
			}
		}
		if(smallest!=i){
			strcpy(temp,input[i]);
			strcpy(input[i],input[smallest]);
			strcpy(input[smallest],temp);
		}
	}
//Printing the sorted array
  printf("\nThe sorted array of strings\n ");
	for(i=0;i<no;i++){
		printf("%s\n",input[i]);
	}
	return 0;
}
