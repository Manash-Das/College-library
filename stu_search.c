//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//#include"Issue_book.c"
search_st(char id[20],int ret)
{
	fflush(stdin);
	char str[30]="ID :";
//	puts(str);
//	strcat(str,"ID :");
	strcat(str,id);
	strcat(str,"\n");
	char st[100];
	int flag=0;
	FILE *searc;
	searc=fopen("Student_file.txt","r");
	if(searc==NULL)
	{
		printf("#Error File missing\nPlease try again later");
		main();
	}
	while(fgets(st,99,searc)!=NULL)
	{
		if(strcmpi(st,str)==0)
			flag=1;
		if(flag==1)
		{
			int static count=0;
			if(count>0)
				printf("\t  %s",st);
			if(strcmp(st,"\n")==0)
				break;
			count++;
			
		}		
	}
	fflush(stdin);
	if(flag==0)
	{
		printf("\n\a\tNo such record!!");
		getch();
		printf("\n\n");
		if(ret==0)
			Issue_book();
		if(ret==1)
			student_details();
		if(ret==2)
			Return_book();
	}
}
