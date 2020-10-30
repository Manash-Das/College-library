#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//int search(char input[10])
int main()
{
//	strcat(input,"\n");
//	char str[20]="ID :";
//	strcat(str,input);
//	puts(str);
//	strcat(str,);
//	puts(str);

	char str[20]="Id :ECE3011yr";
	char st[100];
	int flag=0;
	FILE *searc;
	searc=fopen("Student_file.txt","r");
	if(searc==NULL)
	{
		printf("#Error12");
		exit(1);		
	}
	while(fgets(st,99,searc)!=NULL)
	{
		flag=strcmp(str,st);
		printf("%d",flag);
		printf("%s",str);
		printf("%s",st);
//		if(flag==1)
//		{
//			printf("%s",st);
//			if(strcmp(st,"\n")==0)
//			{
//				break;
//			}
//		}
			
//		printf("\n");
	}
}
