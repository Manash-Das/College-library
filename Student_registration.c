Student_registration()
{
	char nam[30],stu_id[40]="s",yr[3],dep[7],x[1],roll[20];
	gets(x);
	printf("\n\n\t\tEnter student name :");
	gets(nam);
	printf("\t\tEnter college roll :");
	gets(roll);
	printf("\t\tEnter department(in short):");
	gets(dep);
	printf("\t\tEnter year(1/2/3/4 yr) :");
	scanf("%s",yr);
	strcat(yr,"yr");
	strcpy(stu_id,dep);
	strcat(stu_id,roll);
	strcat(stu_id,yr);
	printf("\t\tYour student id :%s",stu_id);
	
	FILE *stu_file =fopen("Student_file.txt","a");

	fprintf(stu_file,"Id :%s\n",stu_id);
	fprintf(stu_file,"Name :%s\n",nam);
	fprintf(stu_file,"Roll :%s\n",roll);
	fprintf(stu_file,"year :%s.\n\n",yr);
	
	fclose(stu_file);
	printf("\n\n\t\tSuccesfully registered");
	printf("\n\t\tPress enter to continue");
	getch();
	system("cls");
	Data_entry(0);
	
}
