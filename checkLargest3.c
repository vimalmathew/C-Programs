#include<stdio.h>
#include<stdlib.h>

void main()
{
	int *array;
	int size;
	printf("Enter the size of array\n");
	scanf("%d",&size);
	array=malloc(sizeof(int*)*size);
	int largest=checkLargest(array,size);
	printf("\nLargest element of array is %d\n",largest);
}

int checkLargest(int* arrayPointer, int size)
{
	int incrementVariable=0;
	printf("Enter the elements of array\n");
	while(incrementVariable<size)
	{
		scanf("%d",&arrayPointer[incrementVariable]);
		incrementVariable++;
	}
	printf("\nEntered elements of array are\n");
	incrementVariable=0;
	while(incrementVariable<size)
	{
		printf("%d\t",arrayPointer[incrementVariable]);
		incrementVariable++;
	}
	incrementVariable=0;
	int largestVariable=arrayPointer[0];
	while(incrementVariable<size)
	{
		if(arrayPointer[incrementVariable+1]>largestVariable)
		{
			largestVariable=arrayPointer[incrementVariable+1];
		}
		incrementVariable++;
	}
	return largestVariable;
}


