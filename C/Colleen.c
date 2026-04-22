#include <stdio.h>

/*
	This function will print the source code
*/
void	print_quine(void)
{
	char	*s = "#include <stdio.h>%c%c/*%c%cThis function will print the source code%c*/%cvoid%cprint_quine(void)%c{%c%cchar%c*s = %c%s%c;%c%cprintf(s, 10, 10, 10, 9, 10, 10, 9, 10, 10, 9, 9, 34, s, 34,	10, 9, 10, 10, 10, 9, 10, 10, 9, 10, 9, 9, 10, 9, 10, 9, 10, 9, 10, 10, 10, 10);%c}%c%cint%cmain(void)%c{%c%c/*%c%c%cThis function is inside%c%c*/%c%cprint_quine();%c%creturn (0);%c}%c";
	printf(s, 10, 10, 10, 9, 10, 10, 9, 10, 10, 9, 9, 34, s, 34,	10, 9, 10, 10, 10, 9, 10, 10, 9, 10, 9, 9, 10, 9, 10, 9, 10, 9, 10, 10, 10, 10);
}

int	main(void)
{
	/*
		This function is inside
	*/
	print_quine();
	return (0);
}
