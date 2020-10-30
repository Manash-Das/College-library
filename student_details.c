//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//#include<conio.h>
////#include"stu_search.c"
int student_details()
{
	fflush(stdin);
	char st_id[20],x[1];
	printf("\tEnter student id :");
	gets(st_id);
	printf("\tStudent details\n");
	search_st(st_id,1);
	printf("\tBook details\n");
	FILE *ptr;
	strcat(st_id,".txt");
	ptr=fopen(st_id,"r");
	if(ptr==NULL)
	{
		printf("\tNO books issued");
		getch();
		main();
	}
	char ch[29];
	while(fgets(ch,20,ptr)!=NULL)
	{
		printf("\t %s",ch);
	}
	fclose(ptr);
	options(1);
}
