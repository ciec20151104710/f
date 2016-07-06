#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	char *a;
	a=malloc(200);
	int i;
	int j=1;
	char a,b[300];
	FILE *fp1=fopen("export.gpx""r");
	if(fp1==NULL)
	{
		printf("Can't open this document!");
		exit(1);
	}
	printf("Open this document!\n");
	fget(str,500,fp1);
	printf("%s",str);
	free(a);
	fclose(fp1);
	
	
	return 0;
}

