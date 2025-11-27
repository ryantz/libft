#include "libft.h"

void	ft_del(void *content)
{
	(void)content;
}

void ft_capitalize_content(void *content)
{
    if (!content)
        return;

    char *str = (char *)content;
    size_t i = 0;

    while (str[i])
    {
        str[i] = ft_toupper(str[i]);
        i++;
    }
}

void *ft_uncapitalize_content(void *content)
{
    if (!content)
        return (NULL);

    char *str = (char *)content;
    size_t i = 0;

    while (str[i])
    {
        str[i] = ft_tolower(str[i]);
        i++;
    }
	return (str);
}

void	ft_print_ll(t_list *head)
{
	while (head)
	{
		printf("%s->", (char *)head->content);
		head = head->next;
	}
	printf("\n");
}

char	ft_plus_index(unsigned int i, char c)
{
	return (c + i);
}

void	ft_to_upper(unsigned int i, char *s)
{
	(void)i;
	*s = ft_toupper(*s);
}

int	main (void)
{
	printf("\n===============LIBFT PART 1===============\n");
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
	printf("res of finding char %c: %s\n", c_find1, 
			ft_strchr(strchr_in1, c_find1));
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

	const char	*memchr_s1 = "hello there stranger";
	const char	*memchr_s2 = "";
	int		memchr_c1 = 'e';
	int		memchr_c2 = 'z';
	size_t	memchr_n = 20;

	printf("string: %s\nchar to match: %c\nlength: %ld\nreturn: %s\n\n"
			, memchr_s1, memchr_c1, memchr_n,
			(char *)ft_memchr(memchr_s1, memchr_c1, memchr_n));
	printf("string: %s\nchar to match: %c\nlength: %ld\nreturn: %s\n\n"
			, memchr_s1, memchr_c2, memchr_n, 
			(char *)ft_memchr(memchr_s1, memchr_c2, memchr_n));
	printf("string: %s\nchar to match: %c\nlength: %ld\nreturn: %s\n"
			, memchr_s2, memchr_c1, memchr_n, 
			(char *)ft_memchr(memchr_s2, memchr_c2, memchr_n));

	printf("\n==Test for ft_memcmp==\n\n");

	const unsigned char memcmp_s1[12] = "hello there";
	const unsigned char memcmp_s2[12] = "helli there";
	const unsigned char memcmp_s3[12] = "hello there";
	const unsigned char memcmp_s4[12] = "";
	size_t memcmp_n = 10;

	printf("s1: %s\ns2: %s\nn: %ld\nres: %d\n", memcmp_s1, memcmp_s2, memcmp_n,
			ft_memcmp(memcmp_s1, memcmp_s2, memcmp_n));
	printf("diff in ascii: %d\n\n", 'o' - 'i');
	printf("s1: %s\ns2: %s\nn: %ld\nres: %d\n", memcmp_s1, memcmp_s3, memcmp_n,
			ft_memcmp(memcmp_s1, memcmp_s3, memcmp_n));
	printf("diff in ascii: %d\n\n", 'o' - 'o');
	printf("s1: %s\ns2: %s\nn: %ld\nres: %d\n", memcmp_s1, memcmp_s4, memcmp_n,
			ft_memcmp(memcmp_s1, memcmp_s4, memcmp_n));
	printf("diff in ascii: %d\n\n", 'h' - '\0');

	printf("\n==Test for ft_strnstr==\n\n");

	const char *big = "hello there stranger";
	const char *little1 = "there";
	const char *little2 = "ere";
	const char *little3 = "e";
	const char *nomatch = "zel";
	size_t len = 20;
	
	printf("original string: %s\n", big);
	printf("pattern: %s\n", little1);
	printf("after matching: %s\n\n", ft_strnstr(big, little1, len));

	printf("original string: %s\n", big);
	printf("substr: %s\n", little2);
	printf("after matching: %s\n\n", ft_strnstr(big, little2, len));

	printf("original string: %s\n", big);
	printf("substr: %s\n", little3);
	printf("after matching: %s\n\n", ft_strnstr(big, little3, len));

	printf("original string: %s\n", big);
	printf("substr: %s\n", nomatch);
	printf("no match: %s\n", ft_strnstr(big, nomatch, len));

	printf("\n==Test for ft_atoi==\n\n");

	const char *nptr1 = "-1234";
	const char *nptr2 = "1234";
	const char *nptr3 = "0";
	const char *nptr4 = "abcd";
	const char *nptr5 = "-2147483648";
	const char *nptr6 = "2147483647";
	const char *nptr7 = "";

	printf("input string to convert: %s\n", nptr1);
	printf("integer: %d\n", ft_atoi(nptr1));

	printf("input string to convert: %s\n", nptr2);
	printf("integer: %d\n", ft_atoi(nptr2));

	printf("input string to convert: %s\n", nptr3);
	printf("integer: %d\n", ft_atoi(nptr3));

	printf("input string to convert: %s\n", nptr4);
	printf("integer: %d\n", ft_atoi(nptr4));

	printf("input string to convert: %s\n", nptr5);
	printf("integer: %d\n", ft_atoi(nptr5));

	printf("input string to convert: %s\n", nptr6);
	printf("integer: %d\n", ft_atoi(nptr6));

	printf("input string to convert: %s\n", nptr7);
	printf("integer: %d\n", ft_atoi(nptr7));

	printf("\n==Test for ft_calloc==\n\n");

    char *calloc_test1 = calloc(3, sizeof(char));
    char *calloc_test2 = ft_calloc(3, sizeof(char));
    //char *calloc_test3 = ft_calloc(3, (size_t)(-1));

    if (!calloc_test1 || !calloc_test2)
    {
        printf("Memory allocation failed!\n");
        return 1;
    }

    printf("Testing calloc (calloc_test1):\n");
    for (size_t i = 0; i < 3; i++)
    {
        printf("calloc_test1[%zu]: %d\n", i, calloc_test1[i]);  // Should be 0
    }

    printf("Testing ft_calloc (calloc_test2):\n");
    for (size_t i = 0; i < 3; i++)
    {
        printf("calloc_test2[%zu]: %d\n", i, calloc_test2[i]);  // Should be 0
    }

    free(calloc_test1);
    free(calloc_test2);
	 
	printf("\n==Test for ft_strdup==\n\n");

	char	*strdup_s1 = "hello there stranger";
	char	*strdup_s2 = "hello there stranger";
	char	*strdup_s3;
	char	*strdup_s4;
	strdup_s3 = strdup(strdup_s1);
	strdup_s4 = ft_strdup(strdup_s2);
	printf("using strdup: %s\n", strdup_s3);
	printf("using ft_strdup: %s\n", strdup_s4);
	free(strdup_s3);
	free(strdup_s4);

	printf("\n===============LIBFT PART 2===============\n");
	printf("\n==Test for ft_substr==\n\n");

	char const	*substr_s = "hello there stranger";
	char	*substr_sub1;
	unsigned int substr_start1 = 6;
	size_t substr_len1 = 12;

	char	*substr_sub2;
	unsigned int substr_start2 = 20;
	size_t substr_len2 = 12;
	
	char	*substr_sub3;
	unsigned int substr_start3 = 6;
	size_t substr_len3 = 200;

	char	*substr_sub4;
	unsigned int substr_start4 = 6;
	size_t substr_len4 = 0;

	char const	*substr_s2 = "";
	char	*substr_sub5;
	unsigned int substr_start5 = 6;
	size_t substr_len5 = 12;

	printf("original string: %s\n", substr_s);
	printf("start idx: %d\n", substr_start1);
	printf("len: %ld\n", substr_len1);
	substr_sub1 = ft_substr(substr_s, substr_start1, substr_len1);
	printf("substring generated: %s\n\n", substr_sub1);

	printf("original string: %s\n", substr_s);
	printf("start idx: %d\n", substr_start2);
	printf("len: %ld\n", substr_len2);
	substr_sub2 = ft_substr(substr_s, substr_start2, substr_len2);
	printf("substring generated: %s\n\n", substr_sub2);
	
	printf("original string: %s\n", substr_s);
	printf("start idx: %d\n", substr_start3);
	printf("len: %ld\n", substr_len3);
	substr_sub3 = ft_substr(substr_s, substr_start3, substr_len3);
	printf("substring generated: %s\n\n", substr_sub3);

	printf("original string: %s\n", substr_s);
	printf("start idx: %d\n", substr_start4);
	printf("len: %ld\n", substr_len4);
	substr_sub4 = ft_substr(substr_s, substr_start4, substr_len4);
	printf("substring generated: %s\n\n", substr_sub4);
	
	printf("original string: %s\n", substr_s2);
	printf("start idx: %d\n", substr_start5);
	printf("len: %ld\n", substr_len5);
	substr_sub5 = ft_substr(substr_s2, substr_start5, substr_len5);
	printf("substring generated: %s\n", substr_sub5);

	printf("\n==Test for ft_strjoin==\n\n");

	char const *strjoin_s1 = "hello";
	char const *strjoin_s2 = "";
	char const *strjoin_s3 = " there stranger";
	char	*strjoin_res1;
	char	*strjoin_res2;
	char	*strjoin_res3;
	
	strjoin_res1 = ft_strjoin(strjoin_s1, strjoin_s3);
	strjoin_res2 = ft_strjoin(strjoin_s2, strjoin_s3);
	strjoin_res3 = ft_strjoin(strjoin_s1, strjoin_s2);

	printf("s1: %s\ns2: %s\n", strjoin_s1, strjoin_s3);
	printf("joined str: %s\n\n", strjoin_res1);
	printf("s1: %s\ns2: %s\n", strjoin_s2, strjoin_s3);
	printf("joined str: %s\n\n", strjoin_res2);
	printf("s1: %s\ns2: %s\n", strjoin_s1, strjoin_s2);
	printf("joined str: %s\n", strjoin_res3);

	printf("\n==Test for ft_strtrim==\n\n");

	char const *set = "$ .";
	char const *strtrim_s1 = "$.... ..$hello$.. .$";
	char const *strtrim_s2 = "$.... ..$$.. .$";
	char		*trimmed1;
	char		*trimmed2;
	
	trimmed1 = ft_strtrim(strtrim_s1, set);
	printf("original string: %s\nset: %s\ntrimmed: %s\n\n",
			strtrim_s1, set, trimmed1);
	trimmed2 = ft_strtrim(strtrim_s2, set);
	printf("original string: %s\nset: %s\ntrimmed: %s\n\n",
			strtrim_s2, set, trimmed2);

	printf("\n==Test for ft_split==\n\n");

	char *split_s = "hello,there,stranger";
	char c = ',';
	char **arr1;
	int	idx = 0;

	arr1 = ft_split(split_s, c);
	while (idx++ < 3)
		printf("word %d: %s\n", idx + 1, arr1[idx]);
	free(arr1);

	printf("\n==Test for ft_itoa==\n\n");

	int	itoa_n1 = -1001;
	int	itoa_n2 = 1001;
	int	itoa_n3 = 0;
	int	itoa_n4 = 'c';

	printf("original: %d\nafter itoa: %s\n", itoa_n1, ft_itoa(itoa_n1));
	printf("original: %d\nafter itoa: %s\n", itoa_n2, ft_itoa(itoa_n2));
	printf("original: %d\nafter itoa: %s\n", itoa_n3, ft_itoa(itoa_n3));
	printf("original: %d\nafter itoa: %s\n", itoa_n4, ft_itoa(itoa_n4));

	printf("\n==Test for ft_strmapi==\n\n");
	
	char const *s = "abcdef";
	char	*strmapi_s1;

	strmapi_s1 = ft_strmapi(s, ft_plus_index);
	printf("original string: %s\nmapped string: %s\n", s, strmapi_s1); 

	printf("\n==Test for ft_striteri==\n\n");

	char striteri_s[21] = "hello there stranger";

	printf("original: %s\n", striteri_s);
	ft_striteri(striteri_s, ft_to_upper);
	printf("after striteri: %s\n", striteri_s);

	printf("\n===============LIBFT BONUS===============\n");
	printf("\n==Test for ft_lstnew==\n\n");

	t_list	*lstnew_head;
	char	*lstnew_content = "hello";
	
	printf("Using ft_lstnew..\n");
	lstnew_head = ft_lstnew(lstnew_content);
	if (lstnew_head)
		printf("node created!\n");
	printf("lst content: %s\n", (char *)lstnew_head->content);

	printf("\n==Test for ft_lstadd_front==\n\n");

	t_list	*lstaddfront_new1;
	t_list	*lstaddfront_new2;
	t_list	*lstaddfront_head;
	char	*lstaddfront_content_new1 = ft_strdup("hello");
	char	*lstaddfront_existing = ft_strdup("there");
	char	*lstaddfront_content_new2 = ft_strdup("hey!");

	lstaddfront_head = ft_lstnew(lstaddfront_existing);
	lstaddfront_new1 = ft_lstnew(lstaddfront_content_new1);
	lstaddfront_new2 = ft_lstnew(lstaddfront_content_new2);
	ft_print_ll(lstaddfront_head);
	printf("\nadding %s to the linked list..\n\n",
			(char *)lstaddfront_new1->content);
	ft_lstadd_front(&lstaddfront_head, lstaddfront_new1);
	ft_print_ll(lstaddfront_head);
	printf("\nadding %s to the linked list..\n\n",
			(char *)lstaddfront_new2->content);
	ft_lstadd_front(&lstaddfront_head, lstaddfront_new2);
	ft_print_ll(lstaddfront_head);
	
	printf("\n==Test for ft_lstsize==\n\n");

	ft_print_ll(lstaddfront_head);
	printf("\nsize of the linked list: %d\n", ft_lstsize(lstaddfront_head));

	printf("\n==Test for ft_lstlast==\n\n");

	t_list	*lstlast_lastnode;

	ft_print_ll(lstaddfront_head);
	lstlast_lastnode = ft_lstlast(lstaddfront_head);
	printf("\ncontent of the last node of the linkedlist: %s\n",
			(char *)lstlast_lastnode->content);

	printf("\n==Test for ft_lstadd_back==\n\n");

	t_list	*lstaddback_new1;
	t_list	*lstaddback_new2;
	char	*lstaddback_content_new1 = ft_strdup("stranger");
	char	*lstaddback_content_new2 = ft_strdup("danger");

	lstaddback_new1 = ft_lstnew(lstaddback_content_new1);
	lstaddback_new2 = ft_lstnew(lstaddback_content_new2);
	ft_print_ll(lstaddfront_head);
	printf("\nadding %s to the linked list..\n\n",
			(char *)lstaddback_new1->content);
	ft_lstadd_back(&lstaddfront_head, lstaddback_new1);
	ft_print_ll(lstaddfront_head);
	printf("\nadding %s to the linked list..\n\n",
			(char *)lstaddback_new2->content);
	ft_lstadd_back(&lstaddfront_head, lstaddback_new2);
	ft_print_ll(lstaddfront_head);

	printf("\n==Test for ft_lstiter==\n\n");

	printf("original linked list:\n\n");
	ft_print_ll(lstaddfront_head);
	printf("\n");
	ft_lstiter(lstaddfront_head, ft_capitalize_content);
	printf("after applying capitalizing function:\n\n");
	ft_print_ll(lstaddfront_head);
	
	printf("\n==Test for ft_lstmap==\n\n");

	t_list	*lstmap_newlst_head;

	printf("original linked list:\n\n");
	ft_print_ll(lstaddfront_head);
	printf("\n");
	lstmap_newlst_head = ft_lstmap(lstaddfront_head, ft_uncapitalize_content, ft_del);
	printf("after adding uncapitalizing function\n\n");
	ft_print_ll(lstmap_newlst_head);

	printf("\n==Test for ft_lstdelone==\n\n");

	printf("erm...\n");

	printf("\n==Test for ft_lstclear==\n\n");

	ft_print_ll(lstaddfront_head);
	printf("\nstart node to remove: %s\n\n", (char *)lstaddfront_head->content);
	ft_lstclear(&lstaddfront_head, ft_del);
	if (lstaddfront_head == NULL)
		printf("whole list has been cleared\n");
	else
		printf("list has not been cleared\n");
}
