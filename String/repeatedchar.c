#include<stdio.h>
#include<string.h>

int main()
{
	char name[20];
	int n,count,i,j;
	scanf("%s",name);
	n=strlen(name);
	for(i=0;i<n;i++)
	{
		count=1;
		for(j=i+1;j<n;j++)
		{
			if(name[i]==name[j])
			{
				count++;
			}
		}
		
		if(count>1)
		{
			printf("%s",name[i]);
		}
	}
}
