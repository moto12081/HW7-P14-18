#include <stdlib.h>
#include<stdio.h>

int main(void)
{
	FILE *in, *out;
	int ch;
	char str[100];
	in = fopen("welcome.txt", "r");
	out = fopen("output.txt", "w");
	while (!feof (in))
	{
		ch = fscanf(in, "%s", str);
		if (ch >0)
		{
			fprintf(out, "%s\n", str);
		}

	}
	fclose(in);
	fclose(out);
	return 0;
}