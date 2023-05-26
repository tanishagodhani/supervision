#include<stdio.h>

main()
{
	FILE *p;
	char data[1000];
	p =fopen("tanisha godhani.txt","r");
	
	if(p== NULL)
	{
		printf("Coude not open file");
	}
	else
	{
		while(fgets(data,25,p)!=NULL)
		{
			printf("%s",data);
		}
	}
	fclose(p);
}

