#include <stdio.h>

#define SIZE 5

// Function Prototypeis
void displayArray(int arr[], int size);

int main(int argc, char *argv[]){

	int numbers[SIZE]={10,34,53,68,21}; 
	displayArray(numbers, SIZE);
	return 0;
}

void displayArray(int arr[], int size){
	
	int index;
	putchar('[');
	for(index=0;index<size;index++){
		if(index!=0){
			putchar(',');
		}
		printf("%d",arr[index]);
	}
	putchar(']');
	putchar('\n');

}
