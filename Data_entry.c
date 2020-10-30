//#include"Student_registration.c"
//#include"New_book.c"
//#include"Delete_student_data.c"
//#include"Delete_book.c"
Data_entry(int flag)
{
	int a;
	printf("\n\tData ENTRY\n");
	printf("\tPress 1-->Student_registration\n\tPress 2-->New_book\n\tPress 3-->HOME PAGE\
	\n\tPress 4-->Exit\n");
	if(flag==1)
		printf("\a\tWrong input");
	printf("\n\tEnter your option: ");
	fflush(stdin);	
	scanf("%d",&a);
	switch(a)
	{
		case 1:
			Student_registration();
			break;
		case 2:
			New_book();
			break;
		case 3:
			main();
			break;
		case 4:
			exit(0);
			break;
		default:
			system("cls");
			Data_entry(1);
	}
}
