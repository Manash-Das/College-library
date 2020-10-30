#include<stdio.h>
//#include"stu_search.c"
//#include"bk_search.c"
//#include"Issue_book.c"
Dispute()
{
	char com[50],st_id[20],bk_id[20],x[1];
	gets(x);
	int a,page;
	char st[]="Book id :",str[20];
	printf("\tEnter student id :");
	gets(st_id);
	printf("\tStudent details\n");
	search_st(st_id);
	printf("\tEnter book id :");
	gets(bk_id);
	search_bk(bk_id);
	printf("\tpress 1-->Torn page\n\tPress 2-->ink in book\n\tPress 3-->other dispute\n");
	printf("\tChoose an option :");
	scanf("%d",&a);
	switch(a)
	{
		case 1:
			printf("\tEnter page number :");
			scanf("%d",&page);
			printf("\tfine - 100 rupees\n");
			sprintf(com,"Book id :%s problem page no %d torn",bk_id,page);
			break;
		case 2:
			printf("\tEnter page number :");
			scanf("%d",&page);
			printf("\tfine - 50 rupees\n");
			sprintf(com,"Book id :%s problem page no %d fallen ink",bk_id,page);
			break;
		case 3:
			printf("\tType that dispute :");
			gets(x);
			gets(str);
			strcat(st,bk_id);
			strcat(st," ");
			strcat(st,str);
			strcpy(com,st);
			printf("\tFine - 30 rupees\n");
			break;
	}
	FILE *disp;
	disp=fopen("Dispute file.txt","a+");
	fprintf(disp,"-->%s\n\n",com);
	fclose(disp);
	printf("\tPress enter to continue\n");
	getch();
	system("cls");
	options(2);
	
}

