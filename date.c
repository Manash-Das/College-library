date(char dat[10])
{
//	char dat[10];
	int dt,mon,yr;
	printf("\tEnter date(dd/mm/yy) :");
	gets(dat);
	sscanf(dat,"%d/%d/%d",&dt,&mon,&yr);
	int leap=1;
	if (yr%4==0)
		leap=0;
	int c=days(mon,leap);
//	printf("%d",dt);
//	printf("%d",mon);
//	printf("%d",yr);
	
	if(dt>c || mon==0 || mon>12)
	{
		char dat[10];
		printf("\n\tInput valid date\n");
		date(dat);
	}
//	return dat;	
}
	
//int days(int b,int leap)
//{
//	switch(b)
//	{
//		case 1:
//		case 3:
//		case 5:
//		case 7:
//		case 8:
//		case 10:
//		case 12:
//			return 31;
//		case 4:
//		case 6:
//		case 9:
//		case 11:
//			return 30;
//		case 2:
//			if(leap==1)
//				return 28;
//			else
//				return 29;
//			break;
//		default :
//			printf("ERROR!");
//	}
//}

