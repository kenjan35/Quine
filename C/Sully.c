#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int	main()
{
	int	i = 5;

	if (i < 0)
		return (0);
	char	s[10] = "Sully_";
	char	c[2];
	c[0] = i + '0';
	c[1] = '\0';
	char	*filename = strcat(s, c);
	char	*file = strcat(filename, ".c");
	FILE	*f = fopen(file, "w+");
	i--;
	char	*code = "#include <stdio.h>%c#include <string.h>%c#include <stdlib.h>%c%cint	main()%c{%c	int	i = %c;%c%c	if (i < 0)%c		return (0);%c	char	s[10] = %cSully_%c;%c	char	c[2];%c	c[0] = i + '0';%c	c[1] = '%c%c';%c	char	*filename = strcat(s, c);%c	char	*file = strcat(filename, %c.c%c);%c	FILE	*f = fopen(file, %c%c%c%c);%c	i--;%c	char	*code = %c%s%c;%c	fprintf(f, code, 10, 10, 10, 10, 10, 10, (i + '0'), 10, 10, 10, 10, 34, 34, 10, 10, 10, 92, 48, 10, 10, 34, 34, 34, 119, 43, 34, 10, 10, 34, code, 34, 10, 10, 10, 10, 34, filename, filename, filename, 34, 10, 10, 10, 10, 10);%c	char	buffer[50];%c%c	sprintf(buffer, %cgcc -o %s %s.c && ./%s%c, filename, filename, filename);%c	fclose(f);%c	system(buffer);%c	return (0);%c}%c";
	fprintf(f, code, 10, 10, 10, 10, 10, 10, (i + '0'), 10, 10, 10, 10, 34, 34, 10, 10, 10, 92, 48, 10, 10, 34, 34, 10, 34, 119, 43, 34, 10, 10, 34, code, 34, 10, 10, 10, 10, 34, filename, filename, filename, 34, 10, 10, 10, 10, 10);
	char	buffer[70];

	sprintf(buffer, "gcc -o %s %s.c && ./%s", filename, filename, filename);
	fclose(f);
	system(buffer);
	return (0);
}
