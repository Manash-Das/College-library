search_bk_stu_file(char stu_id_dup[20],char st[80],char str[20])
{
							
	FILE *searc;
	searc=fopen(stu_id_dup,"r");
	if(searc==NULL)
	{
		printf("#Error 12 Unable to find");
		exit(1);
	}
	int flag=0;
	while(fgets(st,79,searc)!=NULL)
	{
		if(strcmpi(st,str)==0)
			flag=1;
		if(flag==1)
		{
			int static count=0;
			if(count==1)
				{
					printf("\t%s",st);
					break;
				}
			count++;
		}		
	}
	fclose(searc);
	if(flag==0)
	{
		printf("\n\tNo such book is issued to this student id\n");
		Return_book();
	}
}
