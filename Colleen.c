#include <stdio.h>

//This is outside
void	print_quine(void)
{
	char	*s = "#include <stdio.h>%c%c//This is outside%cvoid%cprint_quine(void)%c{%c%cchar%c*s = %c%s%c;%c%cprintf(s, 10, 10, 10, 9, 10, 10, 9, 9, 34, s, 34,	10, 9, 10, 10, 10, 9, 10, 10, 9, 10, 9, 10, 9, 10, 10, 10, 10);%c}%c%cint%cmain(void)%c{%c%c//This is inside%c%cprint_quine();%c%creturn (0);%c}%c";
	printf(s, 10, 10, 10, 9, 10, 10, 9, 9, 34, s, 34,	10, 9, 10, 10, 10, 9, 10, 10, 9, 10, 9, 10, 9, 10, 10, 10, 10);
}

int	main(void)
{
	//This is inside
	print_quine();
	return (0);
}
