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
	int		memset_c = '.';
	size_t	memset_n = 5;

	printf("Before memset->%s\n\n", memsetin1);
	printf("Args for memset:\ns: %s\nc: %c\nn: %ld\n\n"
			,memsetin1, memset_c, memset_n);
	ft_memset(memsetin1, memset_c, memset_n);
	printf("After memset->%s\n", memsetin1);
 
	printf("Before memset->%s\n\n", memsetin2);
	printf("Args for memset:\ns: %s\nc: %c\nn: %ld\n\n"
			,memsetin2, memset_c, memset_n);
	ft_memset(memsetin2, memset_c, memset_n);
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

	printf("\n==Test for ft_memcpy==\n\n");
	
	char	memcpy_dest1[10];
	char	memcpy_src1[20] = "hello there stranger";
	char	memcpy_src2[20] = "hello there stranger";
	char	memcpy_src3[20] = "hello there stranger";
	size_t	memcpy_n = 5;

	printf("dest before memcpy: %s\n\n", memcpy_dest1);
	printf("Args for memcpy: \ndest: %s\nsrc: %s\nn: %ld\n\n", 
			memcpy_dest1, memcpy_src1, memcpy_n);
	ft_memcpy(memcpy_dest1, memcpy_src1, memcpy_n);
	printf("dest after memcpy: %s\n\n", memcpy_dest1);

	printf("dest before memcpy: %s\n\n", memcpy_src2);
	printf("Args for memcpy: \ndest: %s\nsrc: %s\nn: %ld\n\n", 
			memcpy_src2, memcpy_src2 + 3, memcpy_n);
	ft_memcpy(memcpy_src2, memcpy_src2 + 3, memcpy_n);
	printf("dest after memcpy: %s\n\n", memcpy_src2);

	printf("dest before memcpy: %s\n\n", memcpy_src3);
	printf("Args for memcpy: \ndest: %s\nsrc: %s\nn: %ld\n\n", 
			memcpy_src3 + 3, memcpy_src3, memcpy_n);
	ft_memcpy(memcpy_src3 + 3, memcpy_src3, memcpy_n);
	printf("dest after memcpy: %s\n", memcpy_src3);

	printf("\n==Test for ft_memmove==\n\n");

	char	memmove_dest1[10];
	char	memmove_src1[20] = "hello there stranger";
	char	memmove_src2[20] = "hello there stranger";
	char	memmove_src3[20] = "hello there stranger";
	size_t	memmove_n = 5;

	printf("dest before memmove: %s\n\n", memmove_dest1);
	printf("Args for memmove: \ndest: %s\nsrc: %s\nn: %ld\n\n", 
			memmove_dest1, memmove_src1, memmove_n);
	ft_memmove(memmove_dest1, memmove_src1, memmove_n);
	printf("dest after memmove: %s\n\n", memmove_dest1);

	printf("dest before memmove: %s\n\n", memmove_src2);
	printf("Args for memmove: \ndest: %s\nsrc: %s\nn: %ld\n\n", 
			memmove_src2, memmove_src2 + 3, memmove_n);
	ft_memmove(memmove_src2, memmove_src2 + 3, memmove_n);
	printf("dest after memmove: %s\n\n", memmove_src2);

	printf("dest before memmove: %s\n\n", memmove_src3);
	printf("Args for memmove: \ndest: %s\nsrc: %s\nn: %ld\n\n", 
			memmove_src3 + 3, memmove_src3, memmove_n);
	ft_memmove(memmove_src3 + 3, memmove_src3, memmove_n);
	printf("dest after memmove: %s\n", memmove_src3);

	printf("\n==Test for ft_strlcpy==\n\n");
	
	char	strlcpy_src1[20] = "hello there stranger";
	char	strlcpy_dst1[20];
	size_t	strlcpy_res1 = 0;

	char	strlcpy_src2[1] = "";
	char	strlcpy_dst2[20];
	size_t	strlcpy_res2 = 0;

	printf("len of str1: %ld\n", ft_strlen(strlcpy_src1));
	strlcpy_res1 = ft_strlcpy(strlcpy_dst1, strlcpy_src1, 6);
	printf("res of ft_strlcpy: %s\n", strlcpy_dst1);
	printf("return value of strlcpy: %ld\n\n", strlcpy_res1);

	printf("len of str1: %ld\n", ft_strlen(strlcpy_src2));
	strlcpy_res1 = ft_strlcpy(strlcpy_dst2, strlcpy_src2, 6);
	printf("res of ft_strlcpy: %s\n", strlcpy_dst2);
	printf("return value of strlcpy: %ld\n", strlcpy_res2);

	printf("\n==Test for ft_strlcat==\n\n");

	char	strlcat_src1[20] = "hello there stranger";
	char	strlcat_dst1[23] = "oh!";
	size_t	strlcat_res1 = 0;

	char	strlcat_src2[1] = "";
	char	strlcat_dst2[20];
	size_t	strlcat_res2 = 0;

	printf("len of str1: %ld\n", ft_strlen(strlcat_src1));
	strlcat_res1 = ft_strlcat(strlcat_dst1, strlcat_src1, 6);
	printf("res of ft_strlcat: %s\n", strlcat_dst1);
	printf("return value of strlcat: %ld\n\n", strlcat_res1);
	
	printf("len of str1: %ld\n", ft_strlen(strlcat_src1));
	strlcat_res1 = ft_strlcat(strlcat_dst1, strlcat_src1, 1);
	printf("res of ft_strlcat: %s\n", strlcat_dst1);
	printf("return value of strlcat: %ld\n\n", strlcat_res1);
 
	printf("len of str1: %ld\n", ft_strlen(strlcat_src2));
	strlcat_res1 = ft_strlcat(strlcat_dst2, strlcat_src2, 6);
	printf("res of ft_strlcat: %s\n", strlcat_dst2);
	printf("return value of strlcat: %ld\n", strlcat_res2);

	printf("\n==Test for ft_toupper==\n\n");
	
	char	toupper_low = 'a';
	char	toupper_upper = 'A';
	char	toupper_num = '3';

	printf("res of ft_toupper on char %c: %c\n",
			toupper_low, ft_toupper(toupper_low));
	printf("res of ft_toupper on char %c: %c\n",
			toupper_upper, ft_toupper(toupper_upper));
	printf("res of ft_toupper on char %c: %c\n",
			toupper_num, ft_toupper(toupper_num));

	printf("\n==Test for ft_tolower==\n\n");
	
	char	tolower_low = 'a';
	char	tolower_upper = 'A';
	char	tolower_num = '3';

	printf("res of ft_tolower on char %c: %c\n",
			tolower_low, ft_tolower(toupper_low));
	printf("res of ft_tolower on char %c: %c\n",
			tolower_upper, ft_tolower(toupper_upper));
	printf("res of ft_tolower on char %c: %c\n",
			tolower_num, ft_tolower(toupper_num));

	printf("\n==Test for ft_strchr==\n\n");
	
	char	strchr_in1[20] = "hello there stranger";
	char	c_find1 = 't';
	char	c_find2 = 'z';

	printf("string to perform ft_strchr on: %s\n", strchr_in1);
	printf("res of finding char %c: %s\n", c_find1, ft_strchr(strchr_in1, c_find1));
	printf("res of not finding char %c: %s\n"
			, c_find2, ft_strchr(strchr_in1, c_find2));

	printf("\n==Test for ft_strrchr==\n\n");
	
	char	strrchr_in1[20] = "hello there stranger";
	char	c_find3 = 'e';

	printf("string to perform ft_strchr on: %s\n", strrchr_in1);
	printf("res of finding char %c: %s\n"
			, c_find3, ft_strrchr(strchr_in1, c_find3));
	printf("res of not finding char %c: %s\n"
			, c_find2, ft_strrchr(strchr_in1, c_find2));

	printf("\n==Test for ft_strncmp==\n\n");

	char	*strncmp_s1 = "hello there stranger";
	char	*strncmp_s2 = "helli there stranger";
	char	*strncmp_s3 = "hello there stranger";
	char	*strncmp_s4 = "";
	int		strncmp_n = 20;

	printf("s1: %s\n", strncmp_s1);
	printf("s2: %s\n", strncmp_s2);
	printf("difference of letters: %d\n", 'o' - 'i');
	printf("res of strncmp: %d\n\n"
			,ft_strncmp(strncmp_s1, strncmp_s2, strncmp_n));

	printf("s1: %s\n", strncmp_s1);
	printf("s3: %s\n", strncmp_s3);
	printf("difference of letters: %d\n", 'o' - 'o');
	printf("res of strncmp: %d\n\n"
			,ft_strncmp(strncmp_s1, strncmp_s3, strncmp_n));
 
	printf("s1: %s\n", strncmp_s1);
	printf("s4: %s\n", strncmp_s4);
	printf("difference of letters: %d\n", 'h' - 0);
	printf("res of strncmp: %d\n"
			,ft_strncmp(strncmp_s1, strncmp_s4, strncmp_n));
	
	printf("\n==Test for ft_memchr==\n\n");
	printf("\n==Test for ft_memcmp==\n\n");
	printf("\n==Test for ft_strnstr==\n\n");
	printf("\n==Test for ft_memchr==\n\n");
 
}
