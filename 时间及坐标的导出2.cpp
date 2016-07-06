#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	char str[88];
	int i;
	int j=1;
	char a,b[100];
	FILE *fp1=fopen("export.gpx","r");
	if(fp1==NULL)
	{
		printf("Can't open this document!");
		exit(1);
	} 
	printf("Open this document!\n");
	fgets(str,500,fp1);
	printf("%s",str);
	fclose(fp1);
	
	
	
	return 0;
	
	
	
}

