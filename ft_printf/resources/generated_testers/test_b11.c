#include <stdio.h>
#include <stdint.h>
#include <locale.h>
#include <stddef.h>
#include "libftprintf.h"

int		main(void)
{
	FILE	*printf_, *printf_ret, *ft_printf_ret;
	int		ret1, ret2;

	printf_ = fopen("../testing_results/test_b11_printf_print", "w");
	printf_ret = fopen("../testing_results/test_b11_printf_ret", "w");
	ft_printf_ret = fopen("../testing_results/test_b11_ft_printf_ret", "w");
	setvbuf(printf_, NULL, _IONBF, 0);
	setvbuf(printf_ret, NULL, _IONBF, 0);
	setvbuf(ft_printf_ret, NULL, _IONBF, 0);

	
//@
	ft_printf("\n#0000");
	fprintf(printf_, "\n#0000");
	ret1 = fprintf(printf_, "|%3.3d-%1$5.*2$%|", 4, 25, -25);
	ret2 = ft_printf("|%3.3d-%1$5.*2$%|", 4, 25, -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) printf_ = fopen("../testing_results/test_b11_printf_print", "a");
//@
	ft_printf("\n#0001");
	fprintf(printf_, "\n#0001");
	ret1 = fprintf(printf_, "|%3.3d-%1$5.*2$d|", 4, 25, -25);
	ret2 = ft_printf("|%3.3d-%1$5.*2$d|", 4, 25, -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) printf_ = fopen("../testing_results/test_b11_printf_print", "a");
//@
	ft_printf("\n#0002");
	fprintf(printf_, "\n#0002");
	ret1 = fprintf(printf_, "|%3.3d-%1$5.*2$i|", 4, 25, -25);
	ret2 = ft_printf("|%3.3d-%1$5.*2$i|", 4, 25, -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) printf_ = fopen("../testing_results/test_b11_printf_print", "a");
//@
	ft_printf("\n#0003");
	fprintf(printf_, "\n#0003");
	ret1 = fprintf(printf_, "|%3.3d-%1$5.*2$o|", 4, 25, -25);
	ret2 = ft_printf("|%3.3d-%1$5.*2$o|", 4, 25, -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) printf_ = fopen("../testing_results/test_b11_printf_print", "a");
//@
	ft_printf("\n#0004");
	fprintf(printf_, "\n#0004");
	ret1 = fprintf(printf_, "|%3.3d-%1$5.*2$u|", 4, 25, -25);
	ret2 = ft_printf("|%3.3d-%1$5.*2$u|", 4, 25, -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) printf_ = fopen("../testing_results/test_b11_printf_print", "a");
//@
	ft_printf("\n#0005");
	fprintf(printf_, "\n#0005");
	ret1 = fprintf(printf_, "|%3.3d-%1$5.*2$x|", 4, 25, -25);
	ret2 = ft_printf("|%3.3d-%1$5.*2$x|", 4, 25, -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) printf_ = fopen("../testing_results/test_b11_printf_print", "a");
//@
	ft_printf("\n#0006");
	fprintf(printf_, "\n#0006");
	ret1 = fprintf(printf_, "|%3.3d-%1$5.*2$X|", 4, 25, -25);
	ret2 = ft_printf("|%3.3d-%1$5.*2$X|", 4, 25, -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) printf_ = fopen("../testing_results/test_b11_printf_print", "a");
	fclose(printf_);
	fclose(printf_ret);
	fclose(ft_printf_ret);
	return (0);
}

