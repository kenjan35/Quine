#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int	main()
{
	int	i = 5;
	int	n = i;

	if (i < 0)
		return (0);
	char	filename[15], filename_c[15], c[2];

	c[0] = n + '0';
	c[1] = '\0';
	sprintf(filename, "Sully_%s", c);
	sprintf(filename_c, "Sully_%s.c", c);
	FILE	*f = fopen(filename_c, "w+");
	i--;
	char	*code = "#include <stdio.h>%1$c#include <string.h>%1$c#include <stdlib.h>%1$c%1$cint	main()%1$c{%1$c	int	i = 5;%1$c	int	n = i;%1$c%1$c	if (i < 0)%1$c	return (0);%1$c	char	filename[15], filename_c[15], c[2];";
	int	next = i - 1;
	fprintf(f, code, '\n', '"', code);
	char	buffer[70];

	sprintf(buffer, "gcc -o %s %s.c && ./%s", filename, filename, filename);
	fclose(f);
	system(buffer);
	return (0);
}
