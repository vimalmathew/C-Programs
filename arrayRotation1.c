#include<stdio.h>
#include<stdlib.h>
struct datas create();
void rotateArray(int* , int , int );
struct datas
{
	int * address;
	int size;
};
void main()
{
	struct datas d;
	int rotationVariable;
	d=create();
	printf("\nEnter the no of rotations required\n");
	scanf("%d",&rotationVariable);
	rotateArray(d.address,rotationVariable,d.size);
}

struct datas create()
{
	struct datas d1;
	int *arrayPointers;
	int size,i;
	printf("Enter the size of array\n");
	scanf("%d",&size);
	arrayPointers=malloc(sizeof(int*)*size);
	printf("Enter the elements of array\n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&arrayPointers[i]);
	}
	printf("Entered elements are\n");
	for(i=0;i<size;i++)
	{
		
		printf("%d\t",arrayPointers[i]);
	}
	d1.address = arrayPointers;
	d1.size = size;
	return d1;
}
void rotateArray(int* funcPointer, int rotationVariable, int size)
{
	int tempVariable,iterationVariable,i=0;
	printf("inside rotate function\n");
	
	while(i<rotationVariable)
	{
		tempVariable=funcPointer[0];
		for(iterationVariable=0;iterationVariable<size-1;iterationVariable++)
		{
			funcPointer[iterationVariable]=funcPointer[iterationVariable+1];
		}
		funcPointer[iterationVariable]=tempVariable;
		i++;
	}
	
	for(i=0;i<size;i++)
	{
		printf("%d\t", funcPointer[i]);
	}
}
