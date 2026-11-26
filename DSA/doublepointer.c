//This is the two pointer format used now to reverse an array using pointer...



#include<stdio.h>
int main()
{
	int arr[5]={1,2,3,4,5};

	int *left=arr;
	int *right=arr+4;

	while(left<right)
	{
		int temp=*left;
		*left++=*right;
		*right--=temp;
	}

	for(int a=0;a<5;a++)
	{
		printf("%d ",arr[a]);


}

}
