#include "libft.h"

int	main (void)
{
	printf("\n==Test for ft_isalpha==\n\n");
	
	char	isalphain1 = 'a';
	char	isalphain2 = '1';
	int		isalphain3 = 'a';
	int		isalphain4 = '1';
	char	isalphain5 = 0;

	printf("Input: %c, output: %d\n", isalphain1, ft_isalpha(isalphain1));
	printf("Input: %c, output: %d\n", isalphain2, ft_isalpha(isalphain2));
	printf("Input: %d, output: %d\n", isalphain3, ft_isalpha(isalphain3));
	printf("Input: %d, output: %d\n", isalphain4, ft_isalpha(isalphain4));
	printf("Input: %d, output: %d\n", isalphain5, ft_isalpha(isalphain5));

	printf("\n==Test for ft_isdigit==\n\n");
	
	char	isdigitin1 = 'a';
	char	isdigitin2 = '1';
	int		isdigitin3 = 'a';
	int		isdigitin4 = '1';
	char	isdigitin5 = 0;

	printf("Input: %c, output: %d\n", isdigitin1, ft_isdigit(isdigitin1));
	printf("Input: %c, output: %d\n", isdigitin2, ft_isdigit(isdigitin2));
	printf("Input: %d, output: %d\n", isdigitin3, ft_isdigit(isdigitin3));
	printf("Input: %d, output: %d\n", isdigitin4, ft_isdigit(isdigitin4));
	printf("Input: %d, output: %d\n", isdigitin5, ft_isdigit(isdigitin5));

	printf("\n==Test for ft_isalnum==\n\n");
	
	char	isalnumin1 = 'a';
	char	isalnumin2 = '1';
	int		isalnumin3 = 'a';
	int		isalnumin4 = '1';
	char	isalnumin5 = 0;

	printf("Input: %c, output: %d\n", isalnumin1, ft_isalnum(isalnumin1));
	printf("Input: %c, output: %d\n", isalnumin2, ft_isalnum(isalnumin2));
	printf("Input: %d, output: %d\n", isalnumin3, ft_isalnum(isalnumin3));
	printf("Input: %d, output: %d\n", isalnumin4, ft_isalnum(isalnumin4));
	printf("Input: %d, output: %d\n", isalnumin5, ft_isalnum(isalnumin5));

	printf("\n==Test for ft_isascii==\n\n");
	
	char	isasciiin1 = 'a';
	char	isasciiin2 = '1';
	int		isasciiin3 = 'a';
	int		isasciiin4 = '1';
	char	isasciiin5 = 0;

	printf("Input: %c, output: %d\n", isasciiin1, ft_isascii(isasciiin1));
	printf("Input: %c, output: %d\n", isasciiin2, ft_isascii(isasciiin2));
	printf("Input: %d, output: %d\n", isasciiin3, ft_isascii(isasciiin3));
	printf("Input: %d, output: %d\n", isasciiin4, ft_isascii(isasciiin4));
	printf("Input: %d, output: %d\n", isasciiin5, ft_isascii(isasciiin5));

	printf("\n==Test for ft_isprint==\n\n");
	
	char	isprintin1 = 'a';
	char	isprintin2 = '1';
	int		isprintin3 = 'a';
	int		isprintin4 = '1';
	char	isprintin5 = '\t';

	printf("Input: %c, output: %d\n", isprintin1, ft_isprint(isprintin1));
	printf("Input: %c, output: %d\n", isprintin2, ft_isprint(isprintin2));
	printf("Input: %d, output: %d\n", isprintin3, ft_isprint(isprintin3));
	printf("Input: %d, output: %d\n", isprintin4, ft_isprint(isprintin4));
	printf("Input: %d, output: %d\n", isprintin5, ft_isprint(isprintin5));
	
	printf("\n==Test for ft_strlen==\n\n");
	
	char	*strlenin1 = "hello there";
	char	*strlenin2 = "hello";
	char	*strlenin3 = "";

	printf("Input: %s, output: %ld\n", strlenin1, ft_strlen(strlenin1));
	printf("Input: %s, output: %ld\n", strlenin2, ft_strlen(strlenin2));
	printf("Input: %s, output: %ld\n", strlenin3, ft_strlen(strlenin3));
		
	printf("\n==Test for ft_memset==\n\n");

	char	memsetin1[21] = "Hello there stranger!";
	char	memsetin2[21] = "";
	int		c = '.';
	size_t	n = 5;

	printf("Before memset->%s\n\n", memsetin1);
	printf("Args for memset:\ns: %s\nc: %c\nn: %ld\n\n"
			,memsetin1, c, n);
	ft_memset(memsetin1, c, n);
	printf("After memset->%s\n", memsetin1);
 
	printf("Before memset->%s\n\n", memsetin2);
	printf("Args for memset:\ns: %s\nc: %c\nn: %ld\n\n"
			,memsetin2, c, n);
	ft_memset(memsetin2, c, n);
	printf("After memset->%s\n", memsetin2);

	printf("\n==Test for ft_bzero==\n\n");

	char	bzeroin1[20] = "hello there stranger";
	char	bzeroin2[20] = "hello there stranger";
	char	*ptr1 = bzeroin1 + 7;
	char	*ptr2 = bzeroin2;
	
	printf("Before bzero->%s\n\n", bzeroin1);
	ft_bzero(ptr1, 5);
	printf("After bzero->%s\n\n", bzeroin1);

	printf("Before bzero->%s\n\n", bzeroin2);
	ft_bzero(ptr2, 5);
	printf("After bzero->%s\n\n", bzeroin2);
}
