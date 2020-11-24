#include<stdio.h>
#include<stdlib.h>

void main()
{
	int *givenArray;
	int size,incrementVariable,sum=0;
	printf("Enter the size of array\n");
	scanf("%d",&size);
	givenArray=malloc(sizeof(int*)*size);
	printf("Enter the elements of array\n");
	for(incrementVariable=0;incrementVariable<size;incrementVariable++)
	{
		scanf("%d",&givenArray[incrementVariable]);	
	}
	printf("Entered elements of array are\n");
	
	for(incrementVariable=0;incrementVariable<size;incrementVariable++)
	{
		printf("%d\t",givenArray[incrementVariable]);	
	}
	
	for(incrementVariable=0;incrementVariable<size;incrementVariable++)
	{	
		sum=sum+givenArray[incrementVariable];	
	}	
	printf("\nsum of the elements of array are %d\n",sum);
}
