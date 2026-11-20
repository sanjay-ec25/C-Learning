// Question:
// Given a sorted array and a target, print the positions (counting from 1)
// of two numbers that add up to the target.
//
// Example:
// arr = {1, 1, 2, 2}, target = 2
// Output: 1 2

#include<stdio.h>

int main()
{
	int size;
	printf("Size of Array:");
	scanf("%d",&size);
	int array[size];
	int target;
	printf("Target:");
	scanf("%d",&target);
	printf("Enter the Array");

	for(int a=0;a<size;a++)
	{
		scanf("%d",&array[a]);
	}

	int left=0;
	int right=size-1;

	while(left<right)
	{
		int sum=array[left]+array[right];
		if(sum==target)
		{
			printf("%d %d",left+1,right+1);
			break;

		}
		else if(sum<target)
		{
			left++;
		}
		else
		{
			right--;
		}
	}
}



