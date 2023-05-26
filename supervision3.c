#include<stdio.h>

main()
{
	FILE *p;
	char data[1000];
	p =fopen("nensi bavisi-c.txt","a");
	
	if(p == NULL)
	{
	   printf("coude not open file");
	}
	else
	{
		printf("enter any value:-");
		gets(data);
		fputs("\n",p);
		fputs(data,p);
		printf("data enter successfully");
	}
	fclose(p);

   printf("\n===========================\n");
   p =fopen("nensi bavisi-c.txt","r");
   if(p == NULL)
	{
	   printf("coude not open file");
	}
	else
	{
		while(fgets(data,50,p)!= NULL)
		{
			printf("%s",data);
		}
		fclose(p);
	}
}

