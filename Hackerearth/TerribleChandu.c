/*
// Sample code to perform I/O:
#include <stdio.h>

int main(){
	int num;
	scanf("%d", &num);              			// Reading input from STDIN
	printf("Input number is %d.\n", num);       // Writing output to STDOUT
}

// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail
*/

// Write your code here
#include<stdio.h>
void main()
{
	int t,i;
	scanf("%d",&t);
	while(t--)
	{
		char arr[100];
		scanf("%s",arr);
		for(i=strlen(arr)-1;i>=0;i--)
		 printf("%c",arr[i]);
		printf("\n");
	}
}