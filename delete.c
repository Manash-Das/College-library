#include<stdio.h>
//#include"practice.c"
dele(char stu_id[20],char bk[20])
{
	char bk_id[40]="book id :";
	strcat(bk_id,bk);
	strcat(bk_id,"\n");
	
	char str[40];
	FILE *old;
	FILE *gold;
	old=fopen(stu_id,"a+");
	if(old==NULL)
	{
		printf("Error");
		getch();
	}
	int count=5;
	gold=fopen("new.txt","w+");
	while(fgets(str,39,old)!=NULL)
	{
		if(strcmpi(str,bk_id)==0)
			count=0;
		if(count<3)
		{
			count++;
			continue;
		}
		fprintf(gold,"%s",str);
	}
	fclose(old);
	fclose(gold);	
	
	removed(stu_id);
}
