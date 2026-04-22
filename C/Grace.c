#include <stdio.h>

#define	FILENAME "Grace_kid.c"
#define	CODE "#include <stdio.h>%c%c#define%cFILENAME %cGrace_kid.c%c%c#define%cCODE %c%s%c%c#define%cFT(x) int%cmain(){ x }%c%cFT(FILE%c*f = fopen(FILENAME, %c%c%c); fprintf(f, CODE, 10, 10, 9, 34, 34, 10, 9, 34, CODE, 34, 10, 9, 9, 10, 10, 9, 34, 119, 34, 10); fclose(f); return (0);)%c"
#define	FT(x) int	main(){ x }

FT(FILE	*f = fopen(FILENAME, "w"); fprintf(f, CODE, 10, 10, 9, 34, 34, 10, 9, 34, CODE, 34, 10, 9, 9, 10, 10, 9, 34, 119, 34, 10); fclose(f); return (0);)
