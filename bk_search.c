//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
search_bk(char id[20],int ret)
{
	fflush(stdin);
	char str[30]="Book ID :";
	strcat(str,id);
	strcat(str,"\n");
	char st[100];
	int flag=0;
	FILE *search;
	search=fopen("Book_file.txt","r");
	if(search==NULL)
	{
		printf("\t#Error12Unable to find");
		exit(1);
	}
	while(fgets(st,99,search)!=NULL)
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
	if(flag==0)
	{
		char bk_id[20];
		printf("\a\tNo such book in library!!\n");
//		printf("\tPress enter to continue");
		printf("\n\n");
		
		if(ret==0)
			book_id(bk_id);
	}
}
