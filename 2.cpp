#include<stdafx> 
#include<stdlib.h>
int main()
{
	FILE *fp;
	char *s;
	int length=0;
	if((fp=fopen("d:\\test\\1.txt","r"))==0)
	{
		printf("文件不能打开")；
		return(-1); 
	}
	fseek(fp,0,SEEK-END);
	length=ftell(fp);
	s=(char *)malloc(length);
	printf("length=%d\n",length);
	fclose(fp);
	return o;
}

