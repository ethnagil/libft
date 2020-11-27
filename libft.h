/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egillesp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 11:30:01 by egillesp          #+#    #+#             */
/*   Updated: 2020/11/27 16:50:58 by egillesp         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

/*
**   The atoi() function converts the initial portion of the string pointed to**
**   by str to int representation.                                            **
**                                                                            **
**	 The bzero() function writes n zeroed bytes to the string s.  If n is     **
**   zero, bzero() does nothing.											  **
**                                                                            **
** 	 The calloc() function contiguously allocates enough space for count      **
**     objects that are size bytes of memory each and returns a pointer to the**
**     allocated memory.  The allocated memory is filled with bytes of value  **
**     zero.																  **
**                                                                            **
**	 The isalnum() function tests for any character for which isalpha(3) or   **
**     isdigit(3) is true.  The value of the argument must be representable as**
**     an unsigned char or the value of EOF.								  **
**	 The isalpha() function tests for any character for which isupper(3) or	  **
**     islower(3) is true.  The value of the argument must be representable as**
**     an unsigned char or the value of EOF.								  **
**                                                                            **
**	 The isascii() function tests for an ASCII character, which is any charac-**
**     ter between 0 and octal 0177 inclusive.								  **
**                                                                            **
**	 The isdigit() function tests for a decimal digit character.			  **
**                                                                            **
**	 The isprint() function tests for any printing character, including space **
**     (` ').																  **
**																			  **
**   The ft_itoa function allocates a character string with MALLOC, and       **
**     returns a character string that represents the integer value passed.   **
**	   Negitive numbers are managed, and NULL returned if allocation fails.   **
**                                                                            **
**	 The memcpy() function copies n bytes from memory area src to memory area **
**     dst.  If dst and src overlap, behavior is undefined.  Applications in  **
**     which dst and src might overlap should use memmove(3) instead.		  **
**                                                                            **
**	 The memchr() function locates the first occurrence of c (converted to an **
**     unsigned char) in string s.											  **
**                                                                            **
**	 The memcmp() function compares byte string s1 against byte string s2.	  **
**     Both strings are assumed to be n bytes long. 						  **
**     0 = identical -1 s1<s2 1 s1>s2										  **
**                                                                            **
**	 The memmove() function copies len bytes from string src to string dst.   **
**     The two strings may overlap; the copy is always done in a non-destruc- **
**     tive manner. (dst is updated and the origional content of dst returned)**
**                                                                            **
**	 The memset() function writes len bytes of value c (converted to an		  **
**   unsigned char) to the string b.										  **
**																			  **
**   ft_putchar_fd - writes a character to fd destination					  **
**     (0 input, 1 - stdout, 2 - stderr)                                      **
**																			  **
**   ft_putendl_fd - writes a string to fd destination and adds '\n'          **
**																			  **
**   ft_putnbr_fd - converts integer to string to write on fd.                **
**																			  **
**	 ft_putstr_fd - writes a string to fd                                     **
**																			  **
**   The ft_split function allocated a 2d string with malloc and returns a    **
**     table of character strings taken from 's' using 'c' as the seperator   **
**     The table is NULL terminated. NULL is returned if tha allocation fails.**
**                                                                            **
**	 The strchr() function locates the first occurrence of c (converted to	  **
**     a char) in the string pointed to by s.  The terminating null character **
**     is considered to be part of the string; therefore if c is `\0', the	  **
**     functions locate the terminating `\0'. Returns pointer to located char.**
**                                                                            **
**	 The strrchr() function is identical to strchr(), except it locates the	  **
**     last occurrence of c.												  **
**                                                                            **
**	 The strdup() function allocates sufficient memory for a copy of the	  **
**     string s1, does the copy, and returns a pointer to it.  The pointer	  **
**     may subsequently be used as an argument to the function free(3).		  **
**                                                                            **
**	 The ft_strjoin() function allocates (malloc(3)) and returns a   		  **
**   new string resulting in the concatenation of s1 and s2                   **
**                                                                            **
**	 strlcat() appends string src to the end of dst.  It will append at	      **
**     most dstsize - strlen(dst) - 1 characters.  It will then NUL-termi-	  **
**     nate and return length of src + dst, unless dstsize is 0 or original   **
**	 dst string was longer than dstsize - in this case, it returns length of  **
**	 src + dstsize.															  **
**																			  **
**	 strlcpy() copies up to dstsize - 1 characters from the string src to	  **
**     dst, NUL-terminating the result if dstsize is not 0.					  **
**																			  **
**	 The strlen() function computes the length of the string s.  The	      **
**     strnlen() function attempts to compute the length of s, but never	  **
**     scans beyond the first maxlen bytes of s.							  **
**																			  **
**  The ft_strmapi function applies the function passed as a parameter that   **
**	   itself has parameters (unsigned int, char) to each character in        **
**	   's' creating a new string (allocated with malloc) which is returned.   **
**     NULL returned if allocation failure                                    **
**																			  **
**	 The strnstr() function locates the first occurrence of the null-termi-	  **
**     nated string needle in the string haystack, where not more than len 	  **
**     characters are searched.  Characters that appear after a `\0' charac-  **
**     ter are not searched.												  **
**																			  **
**	The ft_strtrim() function allocates (malloc(3)) and returns a copy of     **
**    the string 's1', less the characters spectified in 'set' at the start   **
**    and end of the string.												  **
**																			  **
**	The Function ft_substr() allocates (malloc(3)) and returns a string       **
**	of characters taken from the string 's'. This new string starts at index  **
** 'start' for a maximum size of 'len'.										  **
*/

#ifndef LIBFT_H

# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>

# define ERROR_NOT_FOUND "Error\n"
# define DIC_ERROR "Dict Error\n"
# define DIC_PATH "./dictionary.txt"

int				ft_atoi(const char *str);
void			ft_bzero(void *s, size_t n);
void			*ft_calloc(size_t count, size_t size);
int				ft_isalnum(int c);
int				ft_isalpha(int c);
int				ft_isascii(int c);
int				ft_isdigit(int c);
int				ft_isprint(int c);
char			*ft_itoa(int n);
void			*ft_memccpy(void *dest, const void *src, int c, size_t n);
void			*ft_memchr(const void *s, int c, size_t n);
int				ft_memcmp(const void *s1, const void *s2, size_t n);
void			*ft_memcpy(void *dest, const void *src, size_t n);
void			*ft_memmove(void *dest, const void *src, size_t n);
void			ft_memset(void *s, char c, size_t n);
void			ft_putchar_fd(char c, int fd);
void			ft_putendl_fd(char *s, int fd);
void			ft_putnbr_fd(int n, int fd);
void			ft_putstr_fd(char *s, int fd);
char			**ft_split(char const *s, char c);
char			*ft_strchr(const char *s, int c);
char			*ft_strdup(char *src);
char			*ft_strjoin(char const *s1, char const *s2);
size_t			ft_strlcat(char *dst, const char *src, size_t size);
size_t			ft_strlcpy(char *dst, const char *src, size_t size);
size_t			ft_strlen(const char *str);
char			*ft_strmapi(char const *s, char (*f)(unsigned int, char));
int				ft_strncmp(const char *s1, const char *s2, size_t n);
char			*ft_strnstr(const char *hayst, const char *need, size_t len);
char			*ft_strrchr(const char *s, int c);
char			*ft_strtrim(char const *s1, char const *set);
char			*ft_substr(char const *s, unsigned int start, size_t len);
int				ft_tolower(int c);
int				ft_toupper(int c);

#endif
