/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryatan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/22 11:16:35 by ryatan            #+#    #+#             */
/*   Updated: 2025/11/22 12:37:28 by ryatan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	ft_test_fn(unsigned int ui, char c)
{
	return (ui + c);
}

int	main(void)
{

	printf("=========ft_toupper tests=========\n");
    int upper_char = 'A';
    int lower_char = 'a';
    int result;

    while (upper_char <= 'Z')
    {
        result = ft_toupper(upper_char);
        printf("%c -> %c\n", upper_char, result);
        upper_char++;
    }
    while (lower_char <= 'z')
    {
        result = ft_toupper(lower_char);
        printf("%c -> %c\n", lower_char, result);
        lower_char++;
    }

    printf("=========ft_tolower tests=========\n");
    upper_char = 'A';
    lower_char = 'a';
    while (upper_char <= 'Z')
    {
        result = ft_tolower(upper_char);
        printf("%c -> %c\n", upper_char, result);
        upper_char++;
    }
    while (lower_char <= 'z')
    {
        result = ft_tolower(lower_char);
        printf("%c -> %c\n", lower_char, result);
        lower_char++;
    }

    printf("=========ft_isalnum tests=========\n");
    char char_a = 'a';
    char char_A = 'A';
    char char_0 = '0';

    while (char_a <= 'z')
    {
        printf("ft_isalnum for %c : %d\n", char_a, ft_isalnum(char_a));
        printf("isalnum for %c : %d\n", char_a, isalnum(char_a));
        char_a++;
    }
    while (char_A <= 'Z')
    {
        printf("ft_isalnum for %c : %d\n", char_A, ft_isalnum(char_A));
        printf("isalnum for %c : %d\n", char_A, isalnum(char_A));
        char_A++;
    }
    while (char_0 <= '9')
    {
        printf("ft_isalnum for %c : %d\n", char_0, ft_isalnum(char_0));
        printf("isalnum for %c : %d\n", char_0, isalnum(char_0));
        char_0++;
    }

    printf("=========ft_isalpha tests=========\n");
    char alpha_char = 'a';
    char alpha_char_A = 'A';

    while (alpha_char <= 'z')
    {
        printf("ft_isalpha for %c : %d\n", alpha_char, ft_isalpha(alpha_char));
        printf("isalpha for %c : %d\n", alpha_char, isalpha(alpha_char));
        alpha_char++;
    }
    while (alpha_char_A <= 'Z')
    {
        printf("ft_isalpha for %c : %d\n", alpha_char_A, ft_isalpha(alpha_char_A));
        printf("isalpha for %c : %d\n", alpha_char_A, isalpha(alpha_char_A));
        alpha_char_A++;
    }

    printf("=========ft_isascii tests=========\n");
    int ascii_val = 0;
    while (ascii_val <= 130)
    {
        printf("ft_isascii val: %c, result: %d\n", ascii_val, ft_isascii(ascii_val));
        printf("ascii val: %c, result: %d\n", ascii_val, isascii(ascii_val));
        ascii_val++;
    }

    printf("=========ft_isdigit tests=========\n");
    printf("isdigit('3'): %d\n", isdigit('3'));
    printf("isdigit('c'): %d\n", isdigit('c'));
    printf("ft_isdigit('4'): %d\n", ft_isdigit('4'));
    printf("ft_isdigit('c'): %d\n", ft_isdigit('c'));

    printf("=========ft_isprint tests=========\n");
    int print_val = 0;
    while (print_val <= 127)
    {
        printf("isprint ascii id %d, %c, return val: %d\n", print_val, print_val, isprint(print_val));
        print_val++;
    }

    print_val = 0;
    while (print_val <= 127)
    {
        printf("ft_isprint ascii id %d, %c, return val: %d\n", print_val, print_val, ft_isprint(print_val));
        print_val++;
    }

    printf("=========ft_itoa tests=========\n");
    int number = 1001123;
    char *str = ft_itoa(number);
    printf("ft_itoa result: %s\n", str);
    free(str);

    printf("=========ft_memchr tests=========\n");
    const char *str1 = "hello there stranger";
    char search_char = 'a';
    size_t n_val = 16;
    char *memchr_result = memchr(str1, search_char, n_val);
    char *ft_memchr_result = ft_memchr(str1, search_char, n_val);
    printf("memchr result: %s\n", memchr_result);
    printf("ft_memchr result: %s\n", ft_memchr_result);

    printf("=========ft_memcmp tests=========\n");
    const char *str2 = "hello there str4nger";
    printf("ft_memcmp: %d\n", ft_memcmp(str1, str2, n_val));
    printf("memcmp: %d\n", memcmp(str1, str2, n_val));

    printf("=========ft_memcpy tests=========\n");
    char buf[50] = "ABCDEFGHIJKL";
    ft_memcpy(buf, buf + 3, 3);
    printf("ft_memcpy result: %s\n", buf);

    printf("=========ft_memmove tests=========\n");
    unsigned char str3[20] = "unsigned char there";
    ft_memmove(str3, str3 + 1, 5);
    printf("ft_memmove result: %s\n", str3);

    printf("=========ft_memset tests=========\n");
    int int_arr[10];
    ft_memset(int_arr, 1, 10 * sizeof(int));
    for (int i = 0; i < 10; i++)
    {
        printf("int_arr[%d] = %d\n", i, int_arr[i]);
    }

    printf("=========ft_split tests=========\n");
    // char **arr = ft_split("hello,there,fool", ',');
	printf("TODO:\n");

    printf("=========ft_strchr tests=========\n");
    const char *str4 = "hello there";
    char target_char = 't';
    printf("ft_strchr: %s\n", ft_strchr(str4, target_char));
    printf("strchr: %s\n", strchr(str4, target_char));

    printf("=========ft_strdup tests=========\n");
    const char *str5 = "hello there stranger";
    char *str_copy = ft_strdup(str5);
    printf("ft_strdup result: %s\n", str_copy);
    free(str_copy);

    printf("=========ft_strjoin tests=========\n");
    const char *str6 = "hello ";
    const char *str7 = "there";
    char *joined_str = ft_strjoin(str6, str7);
    printf("ft_strjoin result: %s\n", joined_str);
    free(joined_str);

    printf("=========ft_strlcat tests=========\n");
    char first_str[] = "This is ";
    char last_str[] = "a potentially long string";
    int buffer_size = 100;
    char buffer[buffer_size];
    strcpy(buffer, first_str);
    int return_val = ft_strlcat(buffer, last_str, buffer_size);
    printf("ft_strlcat result: %s\n", buffer);
    printf("ft_strlcat return value: %d\n", return_val);

    printf("=========ft_strlcpy tests=========\n");
    char str8[12] = "hello there";
    char str9[12];
    printf("ft_strlcpy result: %zu\n", ft_strlcpy(str9, str8, 0));

    printf("=========ft_strlen tests=========\n");
    char *str10 = "abcdef";
    printf("ft_strlen result: %ld\n", ft_strlen(str10));

    printf("=========ft_strmapi tests=========\n");
    char	*strmapi;
	strmapi = ft_strmapi("abcdef", ft_test_fn);
	printf("original: abcdef\nafter:%s\n", strmapi);
    printf("=========ft_strncmp tests=========\n");
    const char *str11 = "hello there";
    const char *str12 = "helli";
    printf("ft_strncmp result: %d\n", ft_strncmp(str11, str12, 5));
    printf("strncmp result: %d\n", strncmp(str11, str12, 5));

    printf("=========ft_strrchr tests=========\n");
    char *str13 = "hello there";
    printf("ft_strrchr result: %s\n", ft_strrchr(str13, 'h'));
    printf("strrchr result: %s\n", strrchr(str13, 'h'));

    printf("=========ft_strnstr tests=========\n");
    const char *big_str = "hello there human";
    const char *small_str = "the";
    printf("ft_strnstr result: %s\n", ft_strnstr(big_str, small_str, 9));
    printf("strnstr result: %s\n", strnstr(big_str, small_str, 9));

    printf("=========ft_strtrim tests=========\n");
    char const *set_str = "$ .";
    char const *s1_str = " ...  $. hello... $  $";
    char *trimmed_str = ft_strtrim(s1_str, set_str);
    printf("ft_strtrim result: %s\n", trimmed_str);
    free(trimmed_str);

    printf("=========ft_substr tests=========\n");
    const char *str14 = "hello there stranger";
    unsigned int start_idx = 6;
    size_t len_str = 12;
    char *substr = ft_substr(str14, start_idx, len_str);
    printf("ft_substr result: %s\n", substr);
    free(substr);

	return (0);
}
