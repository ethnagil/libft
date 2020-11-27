TESTFILS FOR LIBFT

// MEMSET:

#include <stdio.h>
#include <string.h>
#include <stddef.h>
#define LEN 10
int		main(void)
{
	char arr[LEN];
	int loop;

	printf("Array elements are (before MemSet()): \n");
	for(loop=0; loop<LEN; loop++)
		printf("%d ",arr[loop]);
	printf("\n");

	//filling all blocks with 0
	memset(arr,0,LEN);
	printf("Array elements are (after MemSet()): \n");
	for(loop=0; loop<LEN; loop++)
		printf("%d ",arr[loop]);
	printf("\n");

	//filling first 3 blocks with -1
	//and second 3 blocks with -2
	//and then 3 blocks with -3
	memset(arr,-1,3);
	memset(arr+3,-2,3);
	memset(arr+6,-3,3);
	printf("Array elements are (after MemSet()): \n");
	for(loop=0; loop<LEN; loop++)
		printf("%d ",arr[loop]);
	printf("\n");

	printf("Array elements are (before myMemSet()): \n");
	for(loop=0; loop<LEN; loop++)
		printf("%d ",arr[loop]);
	printf("\n");

	//filling all blocks with 0
	ft_memset(arr,0,LEN);
	printf("Array elements are (after myMemSet()): \n");
	for(loop=0; loop<LEN; loop++)
		printf("%d ",arr[loop]);
	printf("\n");

	//filling first 3 blocks with -1
	//and second 3 blocks with -2
	//and then 3 blocks with -3
	ft_memset(arr,-1,3);
	ft_memset(arr+3,-2,3);
	ft_memset(arr+6,-3,3);
	printf("Array elements are (after myMemSet()): \n");
	for(loop=0; loop<LEN; loop++)
		printf("%d ",arr[loop]);
	printf("\n");
	return (0);
}

// BZERO

#include <stdio.h>
#include <string.h>
#include <stddef.h>
#define LEN 10
int		main(void)
{
	char arr[LEN];
	int loop;

	printf("Array elements are (before bzero()): \n");
	for(loop=0; loop<LEN; loop++)
		printf("%d ",arr[loop]);
	printf("\n");

	//filling first 3 blocks
	//and second 3 blocks
	//and then next 3 blocks
	//
	bzero(arr,3);
	printf("Array elements are (after bzero()): \n");
	for(loop=0; loop<LEN; loop++)
		printf("%d ",arr[loop]);
	printf("\n");
	ft_bzero(arr,3);
	printf("Array elements are (after mybzero()): \n");
	for(loop=0; loop<LEN; loop++)
		printf("%d ",arr[loop]);
	printf("\n");


	bzero(arr+3,3);
	printf("Array elements are (after bzero()): \n");
	for(loop=0; loop<LEN; loop++)
		printf("%d ",arr[loop]);
	printf("\n");
	ft_bzero(arr+3,3);
	printf("Array elements are (after mybzero()): \n");
	for(loop=0; loop<LEN; loop++)
		printf("%d ",arr[loop]);
	printf("\n");


	bzero(arr+6,3);
	printf("Array elements are (after bzero()): \n");
	for(loop=0; loop<LEN; loop++)
		printf("%d ",arr[loop]);
	printf("\n");
	ft_bzero(arr+6,3);
	printf("Array elements are (after mybzero()): \n");
	for(loop=0; loop<LEN; loop++)
		printf("%d ",arr[loop]);
	printf("\n");

	return (0);
}

// MEMCPY

#include <stdio.h>
#include <string.h>
#include <stddef.h>
#define LEN 10
int		main(void)
{
	char dest[11] = "9876543210";
	//char src[11] = "0123456789";
	char src[11] = "         ";

	printf("Array elements are (before memcpy()): %s %s \n", src, dest);

//	memcpy(dest, src, 3);
	memcpy(dest, src, 0);
	printf("Array elements are (after memcpy 003):%s %s \n", src, dest);
//	ft_memcpy(dest, src, 3);
	ft_memcpy(dest, src, 0);
	printf("Array elements are (after ft_memcpy 003):%s %s \n", src, dest);
	memcpy(dest+3, src+3, 3);

	printf("Array elements are (after memcpy 333):%s %s \n", src, dest);
	ft_memcpy(dest+3, src+3, 3);
	printf("Array elements are (after ft_memcpy 333):%s %s \n", src, dest);
	memcpy(dest+6, src+6, 3);

	printf("Array elements are (after memcpy 663):%s %s \n", src, dest);
	ft_memcpy(dest+6, src+6, 3);
	printf("Array elements are (after ft_memcpy 663):%s %s \n", src, dest);
	return (0);
}

// MEMCCPY


#include <stdio.h>
#include <string.h>
#include <stddef.h>
#define LEN 10
int		main(void)
{
	char dest[11] = "9876543210";
	char dest2[11] = "9876543210";

	char src[11] = "0123456789";
/*
// c before n
	printf("c before n src dest: %s %s \n", src, dest);
	printf("   0036 %s\n", memccpy(dest, src, '3', 6));
	printf("dest %s\n", dest);
	printf("src dest2: %s %s \n", src, dest2);
	printf("ft 0036 %s\n", ft_memccpy(dest2, src, '3', 6));
	printf("dest2 %s\n", dest2);

// c doesn't exist
	printf("c not there src dest: %s %s \n", src, dest);
	printf("   00a10 %s\n", memccpy(dest, src, 'a', 10));
	printf("dest %s\n", dest);
	printf("src dest2: %s %s \n", src, dest2);
	printf("ft 00a10 %s\n", ft_memccpy(dest2, src, 'a', 10));
	printf("dest2 %s\n", dest2);
*/
// c after n
	printf("c after n src dest: %s %s \n", src, dest);
	printf("   0085 %s\n", memccpy(dest, src, '8', 5));
	printf("dest %s\n", dest);
	printf("src dest2: %s %s \n", src, dest2);
	printf("ft 0085 %s\n", ft_memccpy(dest2, src, '8', 5));
	printf("dest2 %s\n", dest2);


	return (0);
}

// MEMMOVE

#include <stdio.h>
#include <string.h>
#include <stddef.h>
#define LEN 10
int		main(void)
{
	char dest[11] = "9876543210";
	char dest2[11] = "9876543210";
	char src[11] = "01234";
//	char src[11] = "         ";

/*
	// src > dest and n < src (expect the first n chars of dest to be replaced with first n chars of src
	printf("src %s dest %s\n", src, dest);
	printf("src > dest & n(3) < src\n");
	printf("memmove %s\n", memmove(dest, src, 3));
	printf("src %s dest %s\n", src, dest);
	printf("ft_memmove %s\n", ft_memmove(dest2, src, 3));
	printf("src %s dest2 %s\n", src, dest2);


	//  and n > src (=abort)
	printf("src %s dest %s\n", src, dest);
	printf("src > dest & n(13) > src\n");
	printf("memmove %s\n", memmove(dest, src, 13));
	printf("src %s dest %s\n", src, dest);
	printf("ft_memmove %s\n", ft_memmove(dest2, src, 13));
	printf("src %s dest2 %s\n", src, dest2);



	//  and n > dest (dest = first n chars of src)
	printf("src %s dest %s\n", src, dest);
	printf("src > dest & n(8) > dest\n");
	printf("memmove %s\n", memmove(dest, src, 8));
	printf("src %s dest %s\n", src, dest);
	printf("ft_memmove %s\n", ft_memmove(dest2, src, 8));
	printf("src %s dest2 %s\n", src, dest2);
*/

	// src < dest (expect dest = src in size and contents)
	printf("src %s dest %s\n", src, dest);
	printf("src < dest & n(8) > src\n");
	printf("memmove %s\n", memmove(dest, src, 8));
	printf("src %s dest %s\n", src, dest);
	printf("ft_memmove %s\n", ft_memmove(dest2, src, 8));
	printf("src %s dest2 %s\n", src, dest2);


	return (0);
}

// MEMCHR

#include <string.h>
#include <stddef.h>
int		main(void)
{
// c after n - return NULL
//
	printf("c after n - return NULL\n");
	printf("memchr(abcdefgHIJKLM, f, 4) %s\n", memchr("abcdefgHIJKLM", 'f', 4));
	printf("ft_memchr(abcdefgHIJKLM, f, 4) %s\n", ft_memchr("abcdefgHIJKLM", 'f', 4));
// c before n - return pointer to c
	printf("c before n - return pointer to c\n");
	printf("memchr(abcdefgHIJKLM, f, 6) %s\n", memchr("abcdefgHIJKLM", 'f', 6));
	printf("ft_memchr(abcdefgHIJKLM, f, 6) %s\n", ft_memchr("abcdefgHIJKLM", 'f', 6));

//
// c doesn't exist - return NULL
	printf("c before n - return pointer to c\n");
	printf("memchr(abcdefgHIJKLM, n, 20) %s\n", memchr("abcdefgHIJKLM", 'n', 20));
	printf("ft_memchr(abcdefgHIJKLM, n, 20) %s\n", ft_memchr("abcdefgHIJKLM", 'n', 20));
// cc before n - return pointer to first occurance
	printf("cc before n - return pointer to first occurance\n");
	printf("memchr(abcdeffgHIfJKLM, f, 20) %s\n", memchr("abcdeffgHIfJKLM", 'f', 20));
	printf("ft_memchr(abcdeffgHIfJKLM, f, 20) %s\n", ft_memchr("abcdeffgHIfJKLM", 'f', 20));

//
	return(0);
}

// MEMCMP

#include <stdio.h>
#include <string.h>
#include <stddef.h>
#define LEN 10
int		main(void)
{

// 2 strings identical - return zero
	printf("2 strings identical - return zero\n");
	printf("memcmp(abcde, abcde, 5) %d\n", memcmp("abcde","abcde", 5));
	printf("ft_memcmp(abcde, abcde, 5) %d\n", ft_memcmp("abcde","abcde", 5));
// string 1 < string 2 - return negative value
	printf("string 1 < string 2 - return negative value\n");
	printf("memcmp(abcab, abcde, 5) %d\n", memcmp("abcab","abcde", 5));
	printf("ft_memcmp(abcab, abcde, 5) %d\n", ft_memcmp("abcab","abcde", 5));

// string 1 > string 2 - return positive value
	printf("string 1 < string 2 - return positive value\n");
	printf("memcmp(abcde, abcab, 5) %d\n", memcmp("abcde","abcab", 5));
	printf("ft_memcmp(abcde, abcab, 5) %d\n", ft_memcmp("abcde","abcab", 5));

// n = 0 - return 0
	printf("n = 0 - return 0\n");
	printf("memcmp(abcde, abcde, 0) %d\n", memcmp("abcde","abcde", 0));
	printf("ft_memcmp(abcde, abcde, 0) %d\n", ft_memcmp("abcde","abcde", 0));

	return (0);
}

// STRLEN


#include <stdio.h>
#include <string.h>
#include <stddef.h>
#define LEN 10
int		main(void)
{
	printf("strlen(abcde) %lu\n", strlen("abcde"));
	printf("ft_strlen(abcde) %lu\n", ft_strlen("abcde"));
	printf("strlen() %lu\n", strlen(""));
	printf("ft_strlen() %lu\n", ft_strlen(""));
	printf("strlen(abcde123456789) %lu\n", strlen("abcde123456789"));
	printf("ft_strlen(abcde123456789) %lu\n", ft_strlen("abcde123456789"));
	printf("strlen(0) %lu\n", strlen("0"));
	printf("ft_strlen(0) %lu\n", ft_strlen("0"));
	return (0);
}

// ISALPHA

#include <stdio.h>
#include <ctype.h>
#include <stddef.h>
#define LEN 10
int		main(void)
{
	printf("] %d\n", isalpha(']'));
	printf("ft_] %d\n", ft_isalpha(']'));
	printf("g %d\n", isalpha('g'));
	printf("ft_g %d\n", ft_isalpha('g'));
	printf("Z %d\n", isalpha('Z'));
	printf("ft_Z %d\n", ft_isalpha('Z'));

}

// ISDIGIT

#include <stdio.h>
#include <ctype.h>
#include <stddef.h>
#define LEN 10
int		main(void)
{
	printf("0 %d\n", isdigit('0'));
	printf("ft_0 %d\n", ft_isdigit('0'));
	printf("9 %d\n", isdigit('9'));
	printf("ft_9 %d\n", ft_isdigit('9'));
	printf("] %d\n", isdigit(']'));
	printf("ft_] %d\n", ft_isdigit(']'));
	printf("g %d\n", isdigit('g'));
	printf("ft_g %d\n", ft_isdigit('g'));
	printf("Z %d\n", isdigit('Z'));
	printf("ft_Z %d\n", ft_isdigit('Z'));

}

// ISALNUM

#include <stdio.h>
#include <ctype.h>
#include <stddef.h>
#define LEN 10
int		main(void)
{
	printf("] %d\n", isalnum(']'));
	printf("ft_] %d\n", ft_isalnum(']'));
	printf("9 %d\n", isalnum('9'));
	printf("ft_9 %d\n", ft_isalnum('9'));
	printf("g %d\n", isalnum('g'));
	printf("ft_g %d\n", ft_isalnum('g'));
	printf("Z %d\n", isalnum('Z'));
	printf("ft_Z %d\n", ft_isalnum('Z'));

}

// ISASCII

#include <stdio.h>
#include <ctype.h>
#include <stddef.h>
#define LEN 10
int		main(void)
{
	printf("] %d\n", isascii(']'));
	printf("ft_] %d\n", ft_isascii(']'));
	printf("9 %d\n", isascii('9'));
	printf("ft_9 %d\n", ft_isascii('9'));
	printf("180 %d\n", isascii(180));
	printf("ft_180g %d\n", ft_isascii(180));
	printf("Z %d\n", isascii('Z'));
	printf("ft_Z %d\n", ft_isascii('Z'));

}

// ISPRINT

#include <stdio.h>
#include <ctype.h>
#include <stddef.h>
#define LEN 10
int		main(void)
{
	printf("] %d\n", isprint(']'));
	printf("ft_] %d\n", ft_isprint(']'));
	printf("9 %d\n", isprint('9'));
	printf("ft_9 %d\n", ft_isprint('9'));
	printf("180 %d\n", isprint(180));
	printf("ft_180g %d\n", ft_isprint(180));
	printf("Z %d\n", isprint('Z'));
	printf("ft_Z %d\n", ft_isprint('Z'));

}

// TOUPPER

#include <stdio.h>
#include <ctype.h>
#include <stddef.h>
#define LEN 10
int		main(void)
{
	printf("] %c\n", toupper(']'));
	printf("ft_] %c\n", ft_toupper(']'));
	printf("g %c\n", toupper('g'));
	printf("ft_g %c\n", ft_toupper('g'));
	printf("Z %c\n", toupper('Z'));
	printf("ft_Z %c\n", ft_toupper('Z'));
}

// TOLOWER

#include <stdio.h>
#include <ctype.h>
#include <stddef.h>
#define LEN 10
int		main(void)
{
	printf("] %c\n", tolower(']'));
	printf("ft_] %c\n", ft_tolower(']'));
	printf("g %c\n", tolower('g'));
	printf("ft_g %c\n", ft_tolower('g'));
	printf("Z %c\n", tolower('Z'));
	printf("ft_Z %c\n", ft_tolower('Z'));
}

// STRCHR

#include <string.h>
#include <stdio.h>
#include <stddef.h>
int		main(void)
{

// c after n - return NULL
//
	printf("f found - return tring from f\n");
	printf("strchr(abcdefgHIJKLM, f) %s\n", strchr("abcdefgHIJKLM", 'f'));
	printf("ft_strchr(abcdefgHIJKLM, f) %s\n", ft_strchr("abcdefgHIJKLM", 'f'));
//
// c doesn't exist - return NULL
	printf("n not found - return NULL\n");
	printf("strchr(abcdefgHIJKLM, n) %s\n", strchr("abcdefgHIJKLM", 'n'));
	printf("ft_strchr(abcdefgHIJKLM, n) %s\n", ft_strchr("abcdefgHIJKLM", 'n'));

// cc before n - return pointer to first occurance
	printf("ff  f found - return pointer to first occurance\n");
	printf("strchr(abcdeffgHIfJKLM, f) %s\n", strchr("abcdeffgHIfJKLM", 'f'));
	printf("ft_strchr(abcdeffgHIfJKLM, f) %s\n", ft_strchr("abcdeffgHIfJKLM", 'f'));

// cc = '\0'
	printf("\\0  found - return pointer to firs of string");
	printf("strchr(abcdeffgHIfJKLM, \\0) %s\n", strchr("abcdeffgHIfJKLM", '\0'));
	printf("ft_strchr(abcdeffgHIfJKLM, \\0) %s\n", ft_strchr("abcdeffgHIfJKLM", '\0'));

//
	return(0);
}

// STRRCHR

#include <string.h>
#include <stdio.h>
#include <stddef.h>
int		main(void)
{

// c after n - return NULL
//
	printf("f found - return tring from f\n");
	printf("strrchr(abcdefgHIJKLM, f) %s\n", strrchr("abcdefgHIJKLM", 'f'));
	printf("ft_strrchr(abcdefgHIJKLM, f) %s\n", ft_strrchr("abcdefgHIJKLM", 'f'));
//
// c doesn't exist - return NULL
	printf("n not found - return NULL\n");
	printf("strrchr(abcdefgHIJKLM, n) %s\n", strrchr("abcdefgHIJKLM", 'n'));
	printf("ft_strrchr(abcdefgHIJKLM, n) %s\n", ft_strrchr("abcdefgHIJKLM", 'n'));

// cc before n - return pointer to last occurance
	printf("ff  f found - return pointer to last occurance\n");
	printf("strrchr(abcdeffgHIfJKLM, f) %s\n", strrchr("abcdeffgHIfJKLM", 'f'));
	printf("ft_strrchr(abcdeffgHIfJKLM, f) %s\n", ft_strrchr("abcdeffgHIfJKLM", 'f'));

// cc before n - return pointer to last occurance
	printf("blank found - return pointer to last occurance\n");
	printf("strrchr(ab def gHIf  KLM,  ) %s\n", strrchr("ab def gHIf  KLM", ' '));
	printf("ft_strrchr(ab def gHIf  KLM,  ) %s\n", ft_strrchr("ab def gHIf  KLM", ' '));

// cc = '\0'
	printf("\\0  found - return pointer to end of string");
	printf("strrchr(abcdeffgHIfJKLM, \\0) %s\n", strrchr("abcdeffgHIfJKLM", '\0'));
	printf("ft_strrchr(abcdeffgHIfJKLM, \\0) %s\n", ft_strrchr("abcdeffgHIfJKLM", '\0'));

//
	return(0);
}

// STRNCMP

#include <stdio.h>
#include <string.h>
#include <stddef.h>
#define LEN 10
int		main(void)
{

// 2 strings identical - return zero
	printf("2 strings identical - return zero\n");
	printf("strncmp(abcdefgh, abcde, 5) %d\n", strncmp("abcdefgh","abcde", 5));
	printf("ft_strncmp(abcdefgh, abcde, 5) %d\n", ft_strncmp("abcdefgh","abcde", 5));
// string 1 < string 2 - return negative value
	printf("string 1 < string 2 - return negative value\n");
	printf("strncmp(abcab, abcde, 5) %d\n", strncmp("abcab","abcde", 5));
	printf("ft_strncmp(abcab, abcde, 5) %d\n", ft_strncmp("abcab","abcde", 5));

// string 1 > string 2 - return positive value
	printf("string 1 < string 2 - return positive value\n");
	printf("strncmp(abcde, abcab, 5) %d\n", strncmp("abcde","abcab", 5));
	printf("ft_strncmp(abcde, abcab, 5) %d\n", ft_strncmp("abcde","abcab", 5));

// n = 0 - return 0
	printf("n = 0 - return 0\n");
	printf("strncmp(abcde, abcde, 0) %d\n", strncmp("abcde","abcde", 0));
	printf("ft_strncmp(abcde, abcde, 0) %d\n", ft_strncmp("abcde","abcde", 0));

	return (0);
}

// STRNCMP

#include <stdio.h>
#include <string.h>
#include <stddef.h>
#define LEN 10
int		main(void)
{
	char dest[11] = "9876";
	char dest2[11] = "9876";
	char src[11] = "0123456789";
//	char src[11] = "         ";

/*
*/
	// src > dest and n < src (expect the first n chars of dest to be replaced with first n chars of src
	printf("src %s dest %s\n", src, dest);
	printf("src > dest & n(3) < src\n");
	printf("strlcpy %lu\n", strlcpy(dest, src, 3));
	printf("src %s dest %s\n", src, dest);
	printf("ft_strlcpy %lu\n", ft_strlcpy(dest2, src, 3));
	printf("src %s dest2 %s\n", src, dest2);

/*

	//  and n > src (=abort)
	printf("src %s dest %s\n", src, dest);
	printf("src > dest & n(13) > src\n");
	printf("strlcpy %lu\n", strlcpy(dest, src, 13));
	printf("src %s dest %s\n", src, dest);
	printf("ft_strlcpy %lu\n", ft_strlcpy(dest2, src, 13));
	printf("src %s dest2 %s\n", src, dest2);



	//  and n > dest (dest = first n chars of src)
	printf("src %s dest %s\n", src, dest);
	printf("src > dest & n(8) > dest\n");
	printf("strlcpy %lu\n", strlcpy(dest, src, 8));
	printf("src %s dest %s\n", src, dest);
	printf("ft_strlcpy %lu\n", ft_strlcpy(dest2, src, 8));
	printf("src %s dest2 %s\n", src, dest2);

	// src < dest (expect dest = src in size and contents)
	printf("src %s dest %s\n", src, dest);
	printf("src < dest & n(8) > src\n");
	printf("strlcpy %lu\n", strlcpy(dest, src, 8));
	printf("src %s dest %s\n", src, dest);
	printf("ft_strlcpy %lu\n", ft_strlcpy(dest2, src, 8));
	printf("src %s dest2 %s\n", src, dest2);

*/
	return (0);
}

// STRLCAT

// #include <stdio.h>
#include <string.h>
#include <stddef.h>
#define LEN 10
int		main(void)
{
	char dest[19] = "9876";
	char dest2[19] = "9876";
	char src[11] = "0123456789";
//	char src[11] = "         ";

/*
*/

	// dest big enough - expect concatenated string	
	printf("size bigger than dest + src\n");
	printf("src %s dest %s\n", src, dest);
	printf("strlcat %lu\n", strlcat(dest, src, 18));
	printf("src %s dest %s\n", src, dest);
	printf("ft_strlcat %lu\n", ft_strlcat(dest2, src, 18));
	printf("src %s dest2 %s\n", src, dest2);
	printf("\n");

	// dest smaller than size - return size src + size	
	//
	printf("dest bigger than size\n");
	printf("src %s dest %s\n", src, dest);
	printf("strlcat %lu\n", strlcat(dest, src, 12));
	printf("src %s dest %s\n", src, dest);
	printf("ft_strlcat %lu\n", ft_strlcat(dest2, src, 12));
	printf("src %s dest2 %s\n", src, dest2);
	printf("\n");

	// dest + src > than size - return size dest + src, cat as must as possible	
	//
	printf("dest + src > size\n");
	printf("src %s dest %s\n", src, dest);
	printf("strlcat %lu\n", strlcat(dest, src, 18));
	printf("src %s dest %s\n", src, dest);
	printf("ft_strlcat %lu\n", ft_strlcat(dest2, src, 18));
	printf("src %s dest2 %s\n", src, dest2);
	printf("\n");:

	dest[0] = 0;
	dest2[0] = 0;

	// dest empty - expect = src	
	//
	printf("dest empty\n");
	printf("src %s dest %s\n", src, dest);
	printf("strlcat %lu\n", strlcat(dest, src, 12));
	printf("src %s dest %s\n", src, dest);
	printf("ft_strlcat %lu\n", ft_strlcat(dest2, src, 12));
	printf("src %s dest2 %s\n", src, dest2);

	//src empty - expect = dest	
	//
	src[0] = 0;
	printf("dest and src empty\n");
	printf("src %s dest %s\n", src, dest);
	printf("strlcat %lu\n", strlcat(dest, src, 12));
	printf("src %s dest %s\n", src, dest);
	printf("ft_strlcat %lu\n", ft_strlcat(dest2, src, 12));
	printf("src %s dest2 %s\n", src, dest2);

	//src empty dest empty - expect = null string	
	//
	src[0] = 0;
	dest[0] = 0;
	dest2[0] = 0;
	printf("dest and src empty\n");
	printf("src %s dest %s\n", src, dest);
	printf("strlcat %lu\n", strlcat(dest, src, 12));
	printf("src %s dest %s\n", src, dest);
	printf("ft_strlcat %lu\n", ft_strlcat(dest2, src, 12));
	printf("src %s dest2 %s\n", src, dest2);


	return (0);
}

// STRNSTR
//
// #include <stdio.h>
#include <string.h>
#include <stddef.h>
#define LEN 10
int		main(void)
{

// needle found
	printf("\n");
	printf("needle found return pointer to first char\n");
	printf("strnstr(abcdefgh, abcde, 6) %s\n", strnstr("abcdefgh","abcde", 6));
	printf("ft_strnstr(abcdefgh, abcde, 6) %s\n", ft_strnstr("abcdefgh","abcde", 6));
//
// needle found in middle, pointer to first char
	printf("\n");
	printf("needle found in middle, pointer to first char\n");
	printf("strnstr(abccchchatdefg, chat, 20) %s\n", strnstr("abccchchatdefg","chat", 20));
	printf("ft_strnstr(abccchchatdefg, chat, 20) %s\n", ft_strnstr("abccchchatdefg","chat", 20));
// needle = haystack pointer to first char
	printf("\n");
	printf("needle = haystack, pointer to first char\n");
	printf("strnstr(abccchchatdefg, abccchchatdefg, 20) %s\n", strnstr("abccchchatdefg","abccchchatdefg", 20));
	printf("ft_strnstr(abccchchatdefg, abccchchatdefg, 20) %s\n", ft_strnstr("abccchchatdefg","abccchchatdefg", 20));

// needle not found in len, return NULL
	printf("\n");
	printf("needle not found in len, return NULL\n");
	printf("strnstr(abccchchatdefg, chat, 9) %s\n", strnstr("abccchchatdefg","chat", 9));
	printf("ft_strnstr(abccchchatdefg, chat, 9) %s\n", ft_strnstr("abccchchatdefg","chat", 9));


// needle not found - NULL
	printf("\n");
	printf("needle not found - NULL\n");
	printf("strnstr(abcdefghijkl, bcab, 15) %s\n", strnstr("abcdefghijkl","bcab", 15));
	printf("ft_strnstr(abcdefghijkl, bcab, 15) %s\n", ft_strnstr("abcdefghijkl","bcab", 15));

// needle - NULL return Haystack
	printf("\n");
	printf("needle - NULL return Haystack\n");
	printf("strnstr(abcdefghijkl, , 15) %s\n", strnstr("abcdefghijkl","", 15));
	printf("ft_strnstr(abcdefghijkl, , 15) %s\n", ft_strnstr("abcdefghijkl","", 15));

	return (0);
}

// ATOI
//
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stddef.h>

int main(void)
{
	char test[7];
    
	test[0]	= ' ';
  	test[1] = '\t';
  	test[2] = '\v';
  	test[3] = '\n';
   	test[4] = '-';
	test[5] = '4';
	test[6] = '2';

    printf("Real atoi: %d\n", atoi(test));
    printf("My   atoi: %d\n", ft_atoi(test));
	printf("\n");


	printf("Real atoi: %d\n", atoi("-999999999999999"));
    printf("My   atoi: %d\n", ft_atoi("-999999999999999"));
	printf("\n");

    printf("Real atoi: %d\n", atoi("   -1234abcde"));
    printf("My   atoi: %d\n", ft_atoi("   -1234abcde"));
	printf("\n");

    printf("Real atoi: %d\n", atoi("-00000000"));
    printf("My   atoi: %d\n", ft_atoi("-00000000"));
	printf("\n");

    printf("Real atoi: %d\n", atoi("-789456"));
    printf("My   atoi: %d\n", ft_atoi("-789456"));
	printf("\n");

    printf("Real atoi: %d\n", atoi("-+99999"));
    printf("My   atoi: %d\n", ft_atoi("-+99999"));
	printf("\n");

    printf("Real atoi: %d\n", atoi("456123"));
    printf("My   atoi: %d\n", ft_atoi("456123"));
	printf("\n");

    printf("Real atoi: %d\n", atoi("+123"));
    printf("My   atoi: %d\n", ft_atoi("+123"));
	printf("\n");

	printf("Real atoi: %d\n", atoi("abc"));
    printf("My   atoi: %d\n", ft_atoi("abc"));
	printf("\n");

    return 0;
}

// CALLOC
//
// #include <stdio.h>

int main(void)
{
	char *callstr;
	int	i;

	callstr = ft_calloc(20, 4);
	for(i=0;i<25;i++)
		printf("%c", callstr[i]);
	for(i=0;i<25;i++)
		callstr[i] = 65 + i;
	for(i=0;i<25;i++)
		printf("%c", callstr[i]);
	return (0);
}

// STRDUP
//
// #include <stdio.h>
int main(int nbargs, char **args)
{
	(void) nbargs;
	char *retstr;
	printf("input string %s \n", args[1]);

	retstr = ft_strdup(args[1]);
	printf ("duplicate string %s \n", retstr);
	free(retstr);
}
/*
z1r5p1% ./a.out "This input" |cat -e
z1r5p1% ./a.out "" |cat -e 
z1r5p1% ./a.out "0 hjkhjkhkj 00" |cat -e
*/


