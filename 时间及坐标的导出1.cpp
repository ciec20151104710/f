#include<stdio.h>
#include<cstdlib>
int main()
{
	FILE *fp1, *fp2;
	char ch;
	fp1=fopen("export.gpx","r");
	fp2=fopen("export-result.gpx","w");
	if(fp1==NULL)
	{
		printf("Can't open this document");
		exit(1); 
	}
	else
	{
		ch=fgetc(fpl);
		while(ch!=EOF)
		{
		    printf("%c",ch);
			fputc(ch,fp2);
			ch=fgetc(fp1);
		} 
		fclose(fp1);
		fclose(fp2);
	}
	return 0;
}
