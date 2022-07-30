#include<stdio.h>
#define max 100

int main()
{
	int fin[max];
	int count=0;
	int amt,i,j;
	int ini[]={2000,500,200,100,50,20,10,5,2,1};
	printf("Enter the Total Amount: ");
	scanf("%d",&amt);
	int size=sizeof(ini)/sizeof(ini[0]);
	
	for(i=0;i<size;i++)
	{
		while(amt>=ini[i])
		{
			amt-=ini[i];
			fin[count]=ini[i];
			count++;
		}
		if(amt==0)
		{
			break;
		}
	}
	
	printf("\nCoins seleceted are: ");
	for(j=0;j<count;j++)
	{
		printf("%d ",fin[j]);
	}
}
