#include<stdlib.h>
#include<stdio.h>
int main(void)
{
	FILE *Fprt1, *Fprt2;
	char ch;
	Fprt1 = fopen("welcome.txt", "r");
	Fprt2 = fopen("output.txt", "w");
	if ((Fprt1 != NULL)&&(Fprt2 != NULL))
	{
		while ((ch=getc(Fprt1))!= EOF)
		{
			putc(ch, Fprt2);
		}
		fclose(Fprt1);
		fclose(Fprt2);
		printf("檔案拷貝完畢!\n");
	}
	else
	{
		printf("檔案開啟失敗\n");
	}
	system("pause");
	return 0;
}