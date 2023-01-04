#include <stdio.h>

int number[1001];
int main(void)
{
	int i ,j;
	int minimum;
	int temp;
	int n;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&number[i]);
	for(i=0;i<n-1;i++)
	{
		minimum = i;
		for(j=i+1;j<n;j++)
		{
			if(number[minimum]>number[j])
				minimum = j;
		}
		temp = number[minimum];
		number[minimum] = number[i];
		number[i] = temp;
	}
	for(i=0;i<n;i++)
		printf("%d\n",number[i]);
	return 0;	
}
