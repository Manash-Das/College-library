//#include<stdio.h>
int days(int,int);
int diffe(int a,int b,int c,int lep);
int fine(int c,int b,int a,int dat2,int mon2)
//int main()
{
//	int c,b,a,dat2,mon2;
	int fine,leap=1;
//	printf("Enter date :");
//	scanf("%d",&c);
//	printf("Enter month number :");
//	scanf("%d",&b);
//	printf("Enter year :");
//	scanf("%d",&a);
//	
//	printf("Enter month number :");
//	scanf("%d",&mon2);
//	printf("Enter date :");
//	scanf("%d",&dat2);
	int count;
	int diff;
	diff=dat2-c;
	if(a%4==0)
		leap=0;
	if(b==mon2)
	{
		return(diff);
	}
	count=diffe(diff,b,mon2,leap);
	fine=count+dat2-c;
	return fine;
}
int days(b,leap)
{
	
	switch(b)
	{
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			return 31;
		case 4:
		case 6:
		case 9:
		case 11:
			return 30;
		case 2:
			if(leap==1)
				return 28;
			else
				return 29;
			break;
//		default :
//			printf("\tInvalid month");
	}
}

int diffe(int a,int b,int c,int lep)
{
	int i,count=0;
	for(i=b;i<c;i++)
		count=count+days(i,lep);
	return count;
}
