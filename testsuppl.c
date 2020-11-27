// SUBSTR
//
// #include <stdio.h>
#include <string.h>

int main(int nbargs, char **args)
{
	(void) nbargs;
	char *retstr;
	unsigned int start;
	size_t len;


	printf("input %s %s %s\n", args[1], args[2], args[3]);

	start = args[2][0] - '0';
	len = args[3][0] - '0';

	retstr = ft_substr(args[1], start, len);
//	retstr = ft_substr(args[1], 6, 6);
	printf ("duplicate string %s \n", retstr);
	free(retstr);
}

// STRJOIN
//
// #include <stdio.h>
#include <string.h>

int main(int nbargs, char **args)
{
	(void) nbargs;
	char *retstr;
//	unsigned int start;
//	size_t len;


	printf("input %s %s\n", args[1], args[2]);

//	start = args[2][0] - '0';
//	len = args[3][0] - '0';

	retstr = ft_strjoin(args[1], args[2]);
	printf ("duplicate string %s\n", retstr);
	free(retstr);
}
/*
z1r5p1% ./a.out "Shakespear" "-Hamlet"
z1r5p1%  ./a.out "Shakespear" ""         
z1r5p1%  ./a.out "" ""          
z1r5p1% ./a.out "" "-Hamlet" 

*/
// STRTRIM
//
// int main(int nbargs, char **args)
{
	(void) nbargs;
	char *retstr;
//	unsigned int start;
//	size_t len;


	printf("input %s %s\n", args[1], args[2]);

//	start = args[2][0] - '0';
//	len = args[3][0] - '0';

	retstr = ft_strtrim(args[1], args[2]);
	printf ("trimmed string %s\n", retstr);
	free(retstr);
}
/*
z1r5p1% ./a.out "-\$this is dolly\$-" "-+\$"
z1r5p1% ./a.out "-\$this is dolly\$-" "-+\$" | cat -e
z1r5p1% ./a.out "-\$this \$is dolly\$-" "-+\$" | cat -e
z1r5p1% ./a.out "-\$this \$is dolly\$-" "" | cat -e
z1r5p1% ./a.out "-\$-" "-+\$" | cat -e
z1r5p1% ./a.out "- \$-" "-+\$" | cat -e
*/

// FT_SPLIT
//
#include <stdio.h>
int main(int nbargs, char **args)
{
	(void) nbargs;
	char **ss;
	int		i;
	printf("input string %s\n", args[1]);
	printf("seperator %c\n", args[2][0]);

	ss = ft_split(args[1], args[2][0]);

	for(i=0; ss[i][0] != 0; i++)
//	for(i=0; i <=3; i++)
		printf("%s\n", ss[i]);

	i= 0;
	while (ss[i][0])
	{
		printf("free ss %s\n", ss[i]);
		free (ss[i]);
		i++;
	}

	free (ss);
	return (0);
}
/*
./a.out "-hello-dolly-well\$-hello-dolly-" "\$" | cat -e 
./a.out "-hello-dolly-well-hello-dolly-" "-" | cat -e
./a.out "-hello-  dolly-well-  hello-dolly-" " " | cat -e
*/

// FT_ITOA
//
// #include <stdio.h>
int test(int n)
{
	char *alpha;

	printf("in:%d\n", n);
	alpha = ft_itoa(n);
	printf("out:%s\n", alpha);
	free (alpha);
	return (0);
}
int main()
{
	test(-12345678);
	test(0);
	test(-2147483648);
	test(2147483647);
	return (0);
}

// STRMAPI
//
// #include <stdio.h>

char convert(unsigned int i, char c)
{
	char o;
	o = c + i;
	return o;
}

int main()
{
	char *str;

	str = ft_strmapi("this is the input string", convert);
	printf("this is the input string\n");
	printf("%s\n", str);
	return (0);
}

// FT_PUTCHAR_FD
//
//
int main()
{
	ft_putchar_fd('a', 1);
	return (0);
}

// FT_PUTENDL_FD  & FT_PUTSTR_FD
//
//int main ()
{
	ft_putstr_fd("hello", 1);
	return (0);
}

// FT_PUTNBR_FD
//
// #include <stdio.h>
int test(int n)
{
	char *alpha;

	printf("in:%d\n", n);
	ft_putnbr_fd(n);
	free (alpha);
	return (0);
}
int main()
{
	test(-12345678);
	test(0);
	test(-2147483648);
	test(2147483647);
	return (0);
}


