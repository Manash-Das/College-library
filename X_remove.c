#include<stdio.h>
removed(char stu_id[20])
{
	remove(stu_id);
	rename("new.txt",stu_id);
}
