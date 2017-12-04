#include<stdio.h>
#include<stdlib.h>

int num[];
int size;
int recursiveMaximum(int num[],int size);

int main(void)
{
	int i;
	int quantity;
	int list[10000];
	printf("How many numbers you want to enter(limit:10000):");
	scanf_s("%d", &quantity);
	printf("Enter those numbers:\n");

	for(i=0;i<quantity;i++)
	{
		printf("%d.", i + 1);
		scanf_s("%d", &list[i]);
		printf("\n");
	}
	
	printf("Maximum number is %d.", recursiveMaximum(list, i));

	system("pause");
	return 0;
}

int recursiveMaximum(int num[], int size)
{
	int Max;
	if (size == 1)
	{
		return num[0];
	}
	else
	{
		Max = recursiveMaximum(num, size - 1);
		
		if (num[size] > Max)
		{
			return num[size];
		}
		else
		{
			return Max;
		}

	}
}