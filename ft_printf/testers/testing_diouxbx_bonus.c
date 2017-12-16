#include <stdio.h>
#include <stdint.h>
#include "libftprintf.h"

size_t testing_diouxbx_bonus_tests = 2560;

void		testing_diouxbx_bonus(int *n, int width, int precision, intmax_t var)
{
	int		ret1;
	int		ret2;
	FILE	*fppres, *fppret, *fpftret;

	fppres = fopen("./files/printf_res", "a");
	fppret = fopen("./files/printf_ret", "a");
	fpftret = fopen("./files/ft_printf_ret", "a");

	setvbuf(fppres, NULL, _IONBF, 0);
	setvbuf(fppret, NULL, _IONBF, 0);
	setvbuf(fpftret, NULL, _IONBF, 0);
	fprintf(fppres, "===\\ NEW TEST\n");
	fprintf(fppres, "NAME = testing_diouxbx_bonus.c\n");
	fprintf(fppres, "TESTS = %zu\n", testing_diouxbx_bonus_tests);
	fprintf(fppres, "WIDTH = %d\n", width);
	fprintf(fppres, "PRECISION = %d\n", precision);
	fprintf(fppres, "VAR = %lld\n\n", var);

	ft_printf("===\\ NEW TEST\n");
	ft_printf("NAME = testing_diouxbx_bonus.c\n");
	ft_printf("TESTS = %zu\n", testing_diouxbx_bonus_tests);
	ft_printf("WIDTH = %d\n", width);
	ft_printf("PRECISION = %d\n", precision);
	ft_printf("VAR = %lld\n\n", var);
	//@
	fprintf(fppres, "#0000");
	ret1 = fprintf(fppres, "|%*.*d|\n", width, precision, var);
	ft_printf("#0000");
	ret2 = ft_printf("|%*.*d|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0001");
	ret1 = fprintf(fppres, "|%*.*hhd|\n", width, precision, var);
	ft_printf("#0001");
	ret2 = ft_printf("|%*.*hhd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0002");
	ret1 = fprintf(fppres, "|%*.*hd|\n", width, precision, var);
	ft_printf("#0002");
	ret2 = ft_printf("|%*.*hd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0003");
	ret1 = fprintf(fppres, "|%*.*ld|\n", width, precision, var);
	ft_printf("#0003");
	ret2 = ft_printf("|%*.*ld|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0004");
	ret1 = fprintf(fppres, "|%*.*lld|\n", width, precision, var);
	ft_printf("#0004");
	ret2 = ft_printf("|%*.*lld|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0005");
	ret1 = fprintf(fppres, "|%*.*jd|\n", width, precision, var);
	ft_printf("#0005");
	ret2 = ft_printf("|%*.*jd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0006");
	ret1 = fprintf(fppres, "|%*.*zd|\n", width, precision, var);
	ft_printf("#0006");
	ret2 = ft_printf("|%*.*zd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0007");
	ret1 = fprintf(fppres, "|%*.*d|\n", width, precision, var);
	ft_printf("#0007");
	ret2 = ft_printf("|%*.*d|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0008");
	ret1 = fprintf(fppres, "|%*.*i|\n", width, precision, var);
	ft_printf("#0008");
	ret2 = ft_printf("|%*.*i|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0009");
	ret1 = fprintf(fppres, "|%*.*hhi|\n", width, precision, var);
	ft_printf("#0009");
	ret2 = ft_printf("|%*.*hhi|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0010");
	ret1 = fprintf(fppres, "|%*.*hi|\n", width, precision, var);
	ft_printf("#0010");
	ret2 = ft_printf("|%*.*hi|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0011");
	ret1 = fprintf(fppres, "|%*.*li|\n", width, precision, var);
	ft_printf("#0011");
	ret2 = ft_printf("|%*.*li|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0012");
	ret1 = fprintf(fppres, "|%*.*lli|\n", width, precision, var);
	ft_printf("#0012");
	ret2 = ft_printf("|%*.*lli|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0013");
	ret1 = fprintf(fppres, "|%*.*ji|\n", width, precision, var);
	ft_printf("#0013");
	ret2 = ft_printf("|%*.*ji|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0014");
	ret1 = fprintf(fppres, "|%*.*zi|\n", width, precision, var);
	ft_printf("#0014");
	ret2 = ft_printf("|%*.*zi|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0015");
	ret1 = fprintf(fppres, "|%*.*i|\n", width, precision, var);
	ft_printf("#0015");
	ret2 = ft_printf("|%*.*i|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0016");
	ret1 = fprintf(fppres, "|%*.*u|\n", width, precision, var);
	ft_printf("#0016");
	ret2 = ft_printf("|%*.*u|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0017");
	ret1 = fprintf(fppres, "|%*.*hhu|\n", width, precision, var);
	ft_printf("#0017");
	ret2 = ft_printf("|%*.*hhu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0018");
	ret1 = fprintf(fppres, "|%*.*hu|\n", width, precision, var);
	ft_printf("#0018");
	ret2 = ft_printf("|%*.*hu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0019");
	ret1 = fprintf(fppres, "|%*.*lu|\n", width, precision, var);
	ft_printf("#0019");
	ret2 = ft_printf("|%*.*lu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0020");
	ret1 = fprintf(fppres, "|%*.*llu|\n", width, precision, var);
	ft_printf("#0020");
	ret2 = ft_printf("|%*.*llu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0021");
	ret1 = fprintf(fppres, "|%*.*ju|\n", width, precision, var);
	ft_printf("#0021");
	ret2 = ft_printf("|%*.*ju|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0022");
	ret1 = fprintf(fppres, "|%*.*zu|\n", width, precision, var);
	ft_printf("#0022");
	ret2 = ft_printf("|%*.*zu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0023");
	ret1 = fprintf(fppres, "|%*.*u|\n", width, precision, var);
	ft_printf("#0023");
	ret2 = ft_printf("|%*.*u|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0024");
	ret1 = fprintf(fppres, "|%*.*f|\n", width, precision, var);
	ft_printf("#0024");
	ret2 = ft_printf("|%*.*f|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0025");
	ret1 = fprintf(fppres, "|%*.*hhf|\n", width, precision, var);
	ft_printf("#0025");
	ret2 = ft_printf("|%*.*hhf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0026");
	ret1 = fprintf(fppres, "|%*.*hf|\n", width, precision, var);
	ft_printf("#0026");
	ret2 = ft_printf("|%*.*hf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0027");
	ret1 = fprintf(fppres, "|%*.*lf|\n", width, precision, var);
	ft_printf("#0027");
	ret2 = ft_printf("|%*.*lf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0028");
	ret1 = fprintf(fppres, "|%*.*llf|\n", width, precision, var);
	ft_printf("#0028");
	ret2 = ft_printf("|%*.*llf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0029");
	ret1 = fprintf(fppres, "|%*.*jf|\n", width, precision, var);
	ft_printf("#0029");
	ret2 = ft_printf("|%*.*jf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0030");
	ret1 = fprintf(fppres, "|%*.*zf|\n", width, precision, var);
	ft_printf("#0030");
	ret2 = ft_printf("|%*.*zf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0031");
	ret1 = fprintf(fppres, "|%*.*f|\n", width, precision, var);
	ft_printf("#0031");
	ret2 = ft_printf("|%*.*f|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0032");
	ret1 = fprintf(fppres, "|%*.*F|\n", width, precision, var);
	ft_printf("#0032");
	ret2 = ft_printf("|%*.*F|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0033");
	ret1 = fprintf(fppres, "|%*.*hhF|\n", width, precision, var);
	ft_printf("#0033");
	ret2 = ft_printf("|%*.*hhF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0034");
	ret1 = fprintf(fppres, "|%*.*hF|\n", width, precision, var);
	ft_printf("#0034");
	ret2 = ft_printf("|%*.*hF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0035");
	ret1 = fprintf(fppres, "|%*.*lF|\n", width, precision, var);
	ft_printf("#0035");
	ret2 = ft_printf("|%*.*lF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0036");
	ret1 = fprintf(fppres, "|%*.*llF|\n", width, precision, var);
	ft_printf("#0036");
	ret2 = ft_printf("|%*.*llF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0037");
	ret1 = fprintf(fppres, "|%*.*jF|\n", width, precision, var);
	ft_printf("#0037");
	ret2 = ft_printf("|%*.*jF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0038");
	ret1 = fprintf(fppres, "|%*.*zF|\n", width, precision, var);
	ft_printf("#0038");
	ret2 = ft_printf("|%*.*zF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0039");
	ret1 = fprintf(fppres, "|%*.*F|\n", width, precision, var);
	ft_printf("#0039");
	ret2 = ft_printf("|%*.*F|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0040");
	ret1 = fprintf(fppres, "|%*.* |\n", width, precision, var);
	ft_printf("#0040");
	ret2 = ft_printf("|%*.* |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0041");
	ret1 = fprintf(fppres, "|%*.*hh |\n", width, precision, var);
	ft_printf("#0041");
	ret2 = ft_printf("|%*.*hh |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0042");
	ret1 = fprintf(fppres, "|%*.*h |\n", width, precision, var);
	ft_printf("#0042");
	ret2 = ft_printf("|%*.*h |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0043");
	ret1 = fprintf(fppres, "|%*.*l |\n", width, precision, var);
	ft_printf("#0043");
	ret2 = ft_printf("|%*.*l |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0044");
	ret1 = fprintf(fppres, "|%*.*ll |\n", width, precision, var);
	ft_printf("#0044");
	ret2 = ft_printf("|%*.*ll |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0045");
	ret1 = fprintf(fppres, "|%*.*j |\n", width, precision, var);
	ft_printf("#0045");
	ret2 = ft_printf("|%*.*j |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0046");
	ret1 = fprintf(fppres, "|%*.*z |\n", width, precision, var);
	ft_printf("#0046");
	ret2 = ft_printf("|%*.*z |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0047");
	ret1 = fprintf(fppres, "|%*.* |\n", width, precision, var);
	ft_printf("#0047");
	ret2 = ft_printf("|%*.* |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0048");
	ret1 = fprintf(fppres, "|%0*.*d|\n", width, precision, var);
	ft_printf("#0048");
	ret2 = ft_printf("|%0*.*d|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0049");
	ret1 = fprintf(fppres, "|%0*.*hhd|\n", width, precision, var);
	ft_printf("#0049");
	ret2 = ft_printf("|%0*.*hhd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0050");
	ret1 = fprintf(fppres, "|%0*.*hd|\n", width, precision, var);
	ft_printf("#0050");
	ret2 = ft_printf("|%0*.*hd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0051");
	ret1 = fprintf(fppres, "|%0*.*ld|\n", width, precision, var);
	ft_printf("#0051");
	ret2 = ft_printf("|%0*.*ld|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0052");
	ret1 = fprintf(fppres, "|%0*.*lld|\n", width, precision, var);
	ft_printf("#0052");
	ret2 = ft_printf("|%0*.*lld|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0053");
	ret1 = fprintf(fppres, "|%0*.*jd|\n", width, precision, var);
	ft_printf("#0053");
	ret2 = ft_printf("|%0*.*jd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0054");
	ret1 = fprintf(fppres, "|%0*.*zd|\n", width, precision, var);
	ft_printf("#0054");
	ret2 = ft_printf("|%0*.*zd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0055");
	ret1 = fprintf(fppres, "|%0*.*d|\n", width, precision, var);
	ft_printf("#0055");
	ret2 = ft_printf("|%0*.*d|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0056");
	ret1 = fprintf(fppres, "|%0*.*i|\n", width, precision, var);
	ft_printf("#0056");
	ret2 = ft_printf("|%0*.*i|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0057");
	ret1 = fprintf(fppres, "|%0*.*hhi|\n", width, precision, var);
	ft_printf("#0057");
	ret2 = ft_printf("|%0*.*hhi|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0058");
	ret1 = fprintf(fppres, "|%0*.*hi|\n", width, precision, var);
	ft_printf("#0058");
	ret2 = ft_printf("|%0*.*hi|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0059");
	ret1 = fprintf(fppres, "|%0*.*li|\n", width, precision, var);
	ft_printf("#0059");
	ret2 = ft_printf("|%0*.*li|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0060");
	ret1 = fprintf(fppres, "|%0*.*lli|\n", width, precision, var);
	ft_printf("#0060");
	ret2 = ft_printf("|%0*.*lli|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0061");
	ret1 = fprintf(fppres, "|%0*.*ji|\n", width, precision, var);
	ft_printf("#0061");
	ret2 = ft_printf("|%0*.*ji|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0062");
	ret1 = fprintf(fppres, "|%0*.*zi|\n", width, precision, var);
	ft_printf("#0062");
	ret2 = ft_printf("|%0*.*zi|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0063");
	ret1 = fprintf(fppres, "|%0*.*i|\n", width, precision, var);
	ft_printf("#0063");
	ret2 = ft_printf("|%0*.*i|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0064");
	ret1 = fprintf(fppres, "|%0*.*u|\n", width, precision, var);
	ft_printf("#0064");
	ret2 = ft_printf("|%0*.*u|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0065");
	ret1 = fprintf(fppres, "|%0*.*hhu|\n", width, precision, var);
	ft_printf("#0065");
	ret2 = ft_printf("|%0*.*hhu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0066");
	ret1 = fprintf(fppres, "|%0*.*hu|\n", width, precision, var);
	ft_printf("#0066");
	ret2 = ft_printf("|%0*.*hu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0067");
	ret1 = fprintf(fppres, "|%0*.*lu|\n", width, precision, var);
	ft_printf("#0067");
	ret2 = ft_printf("|%0*.*lu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0068");
	ret1 = fprintf(fppres, "|%0*.*llu|\n", width, precision, var);
	ft_printf("#0068");
	ret2 = ft_printf("|%0*.*llu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0069");
	ret1 = fprintf(fppres, "|%0*.*ju|\n", width, precision, var);
	ft_printf("#0069");
	ret2 = ft_printf("|%0*.*ju|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0070");
	ret1 = fprintf(fppres, "|%0*.*zu|\n", width, precision, var);
	ft_printf("#0070");
	ret2 = ft_printf("|%0*.*zu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0071");
	ret1 = fprintf(fppres, "|%0*.*u|\n", width, precision, var);
	ft_printf("#0071");
	ret2 = ft_printf("|%0*.*u|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0072");
	ret1 = fprintf(fppres, "|%0*.*f|\n", width, precision, var);
	ft_printf("#0072");
	ret2 = ft_printf("|%0*.*f|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0073");
	ret1 = fprintf(fppres, "|%0*.*hhf|\n", width, precision, var);
	ft_printf("#0073");
	ret2 = ft_printf("|%0*.*hhf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0074");
	ret1 = fprintf(fppres, "|%0*.*hf|\n", width, precision, var);
	ft_printf("#0074");
	ret2 = ft_printf("|%0*.*hf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0075");
	ret1 = fprintf(fppres, "|%0*.*lf|\n", width, precision, var);
	ft_printf("#0075");
	ret2 = ft_printf("|%0*.*lf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0076");
	ret1 = fprintf(fppres, "|%0*.*llf|\n", width, precision, var);
	ft_printf("#0076");
	ret2 = ft_printf("|%0*.*llf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0077");
	ret1 = fprintf(fppres, "|%0*.*jf|\n", width, precision, var);
	ft_printf("#0077");
	ret2 = ft_printf("|%0*.*jf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0078");
	ret1 = fprintf(fppres, "|%0*.*zf|\n", width, precision, var);
	ft_printf("#0078");
	ret2 = ft_printf("|%0*.*zf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0079");
	ret1 = fprintf(fppres, "|%0*.*f|\n", width, precision, var);
	ft_printf("#0079");
	ret2 = ft_printf("|%0*.*f|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0080");
	ret1 = fprintf(fppres, "|%0*.*F|\n", width, precision, var);
	ft_printf("#0080");
	ret2 = ft_printf("|%0*.*F|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0081");
	ret1 = fprintf(fppres, "|%0*.*hhF|\n", width, precision, var);
	ft_printf("#0081");
	ret2 = ft_printf("|%0*.*hhF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0082");
	ret1 = fprintf(fppres, "|%0*.*hF|\n", width, precision, var);
	ft_printf("#0082");
	ret2 = ft_printf("|%0*.*hF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0083");
	ret1 = fprintf(fppres, "|%0*.*lF|\n", width, precision, var);
	ft_printf("#0083");
	ret2 = ft_printf("|%0*.*lF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0084");
	ret1 = fprintf(fppres, "|%0*.*llF|\n", width, precision, var);
	ft_printf("#0084");
	ret2 = ft_printf("|%0*.*llF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0085");
	ret1 = fprintf(fppres, "|%0*.*jF|\n", width, precision, var);
	ft_printf("#0085");
	ret2 = ft_printf("|%0*.*jF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0086");
	ret1 = fprintf(fppres, "|%0*.*zF|\n", width, precision, var);
	ft_printf("#0086");
	ret2 = ft_printf("|%0*.*zF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0087");
	ret1 = fprintf(fppres, "|%0*.*F|\n", width, precision, var);
	ft_printf("#0087");
	ret2 = ft_printf("|%0*.*F|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0088");
	ret1 = fprintf(fppres, "|%0*.* |\n", width, precision, var);
	ft_printf("#0088");
	ret2 = ft_printf("|%0*.* |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0089");
	ret1 = fprintf(fppres, "|%0*.*hh |\n", width, precision, var);
	ft_printf("#0089");
	ret2 = ft_printf("|%0*.*hh |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0090");
	ret1 = fprintf(fppres, "|%0*.*h |\n", width, precision, var);
	ft_printf("#0090");
	ret2 = ft_printf("|%0*.*h |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0091");
	ret1 = fprintf(fppres, "|%0*.*l |\n", width, precision, var);
	ft_printf("#0091");
	ret2 = ft_printf("|%0*.*l |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0092");
	ret1 = fprintf(fppres, "|%0*.*ll |\n", width, precision, var);
	ft_printf("#0092");
	ret2 = ft_printf("|%0*.*ll |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0093");
	ret1 = fprintf(fppres, "|%0*.*j |\n", width, precision, var);
	ft_printf("#0093");
	ret2 = ft_printf("|%0*.*j |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0094");
	ret1 = fprintf(fppres, "|%0*.*z |\n", width, precision, var);
	ft_printf("#0094");
	ret2 = ft_printf("|%0*.*z |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0095");
	ret1 = fprintf(fppres, "|%0*.* |\n", width, precision, var);
	ft_printf("#0095");
	ret2 = ft_printf("|%0*.* |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0096");
	ret1 = fprintf(fppres, "|%+*.*d|\n", width, precision, var);
	ft_printf("#0096");
	ret2 = ft_printf("|%+*.*d|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0097");
	ret1 = fprintf(fppres, "|%+*.*hhd|\n", width, precision, var);
	ft_printf("#0097");
	ret2 = ft_printf("|%+*.*hhd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0098");
	ret1 = fprintf(fppres, "|%+*.*hd|\n", width, precision, var);
	ft_printf("#0098");
	ret2 = ft_printf("|%+*.*hd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0099");
	ret1 = fprintf(fppres, "|%+*.*ld|\n", width, precision, var);
	ft_printf("#0099");
	ret2 = ft_printf("|%+*.*ld|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0100");
	ret1 = fprintf(fppres, "|%+*.*lld|\n", width, precision, var);
	ft_printf("#0100");
	ret2 = ft_printf("|%+*.*lld|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0101");
	ret1 = fprintf(fppres, "|%+*.*jd|\n", width, precision, var);
	ft_printf("#0101");
	ret2 = ft_printf("|%+*.*jd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0102");
	ret1 = fprintf(fppres, "|%+*.*zd|\n", width, precision, var);
	ft_printf("#0102");
	ret2 = ft_printf("|%+*.*zd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0103");
	ret1 = fprintf(fppres, "|%+*.*d|\n", width, precision, var);
	ft_printf("#0103");
	ret2 = ft_printf("|%+*.*d|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0104");
	ret1 = fprintf(fppres, "|%+*.*i|\n", width, precision, var);
	ft_printf("#0104");
	ret2 = ft_printf("|%+*.*i|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0105");
	ret1 = fprintf(fppres, "|%+*.*hhi|\n", width, precision, var);
	ft_printf("#0105");
	ret2 = ft_printf("|%+*.*hhi|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0106");
	ret1 = fprintf(fppres, "|%+*.*hi|\n", width, precision, var);
	ft_printf("#0106");
	ret2 = ft_printf("|%+*.*hi|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0107");
	ret1 = fprintf(fppres, "|%+*.*li|\n", width, precision, var);
	ft_printf("#0107");
	ret2 = ft_printf("|%+*.*li|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0108");
	ret1 = fprintf(fppres, "|%+*.*lli|\n", width, precision, var);
	ft_printf("#0108");
	ret2 = ft_printf("|%+*.*lli|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0109");
	ret1 = fprintf(fppres, "|%+*.*ji|\n", width, precision, var);
	ft_printf("#0109");
	ret2 = ft_printf("|%+*.*ji|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0110");
	ret1 = fprintf(fppres, "|%+*.*zi|\n", width, precision, var);
	ft_printf("#0110");
	ret2 = ft_printf("|%+*.*zi|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0111");
	ret1 = fprintf(fppres, "|%+*.*i|\n", width, precision, var);
	ft_printf("#0111");
	ret2 = ft_printf("|%+*.*i|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0112");
	ret1 = fprintf(fppres, "|%+*.*u|\n", width, precision, var);
	ft_printf("#0112");
	ret2 = ft_printf("|%+*.*u|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0113");
	ret1 = fprintf(fppres, "|%+*.*hhu|\n", width, precision, var);
	ft_printf("#0113");
	ret2 = ft_printf("|%+*.*hhu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0114");
	ret1 = fprintf(fppres, "|%+*.*hu|\n", width, precision, var);
	ft_printf("#0114");
	ret2 = ft_printf("|%+*.*hu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0115");
	ret1 = fprintf(fppres, "|%+*.*lu|\n", width, precision, var);
	ft_printf("#0115");
	ret2 = ft_printf("|%+*.*lu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0116");
	ret1 = fprintf(fppres, "|%+*.*llu|\n", width, precision, var);
	ft_printf("#0116");
	ret2 = ft_printf("|%+*.*llu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0117");
	ret1 = fprintf(fppres, "|%+*.*ju|\n", width, precision, var);
	ft_printf("#0117");
	ret2 = ft_printf("|%+*.*ju|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0118");
	ret1 = fprintf(fppres, "|%+*.*zu|\n", width, precision, var);
	ft_printf("#0118");
	ret2 = ft_printf("|%+*.*zu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0119");
	ret1 = fprintf(fppres, "|%+*.*u|\n", width, precision, var);
	ft_printf("#0119");
	ret2 = ft_printf("|%+*.*u|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0120");
	ret1 = fprintf(fppres, "|%+*.*f|\n", width, precision, var);
	ft_printf("#0120");
	ret2 = ft_printf("|%+*.*f|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0121");
	ret1 = fprintf(fppres, "|%+*.*hhf|\n", width, precision, var);
	ft_printf("#0121");
	ret2 = ft_printf("|%+*.*hhf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0122");
	ret1 = fprintf(fppres, "|%+*.*hf|\n", width, precision, var);
	ft_printf("#0122");
	ret2 = ft_printf("|%+*.*hf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0123");
	ret1 = fprintf(fppres, "|%+*.*lf|\n", width, precision, var);
	ft_printf("#0123");
	ret2 = ft_printf("|%+*.*lf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0124");
	ret1 = fprintf(fppres, "|%+*.*llf|\n", width, precision, var);
	ft_printf("#0124");
	ret2 = ft_printf("|%+*.*llf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0125");
	ret1 = fprintf(fppres, "|%+*.*jf|\n", width, precision, var);
	ft_printf("#0125");
	ret2 = ft_printf("|%+*.*jf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0126");
	ret1 = fprintf(fppres, "|%+*.*zf|\n", width, precision, var);
	ft_printf("#0126");
	ret2 = ft_printf("|%+*.*zf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0127");
	ret1 = fprintf(fppres, "|%+*.*f|\n", width, precision, var);
	ft_printf("#0127");
	ret2 = ft_printf("|%+*.*f|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0128");
	ret1 = fprintf(fppres, "|%+*.*F|\n", width, precision, var);
	ft_printf("#0128");
	ret2 = ft_printf("|%+*.*F|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0129");
	ret1 = fprintf(fppres, "|%+*.*hhF|\n", width, precision, var);
	ft_printf("#0129");
	ret2 = ft_printf("|%+*.*hhF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0130");
	ret1 = fprintf(fppres, "|%+*.*hF|\n", width, precision, var);
	ft_printf("#0130");
	ret2 = ft_printf("|%+*.*hF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0131");
	ret1 = fprintf(fppres, "|%+*.*lF|\n", width, precision, var);
	ft_printf("#0131");
	ret2 = ft_printf("|%+*.*lF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0132");
	ret1 = fprintf(fppres, "|%+*.*llF|\n", width, precision, var);
	ft_printf("#0132");
	ret2 = ft_printf("|%+*.*llF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0133");
	ret1 = fprintf(fppres, "|%+*.*jF|\n", width, precision, var);
	ft_printf("#0133");
	ret2 = ft_printf("|%+*.*jF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0134");
	ret1 = fprintf(fppres, "|%+*.*zF|\n", width, precision, var);
	ft_printf("#0134");
	ret2 = ft_printf("|%+*.*zF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0135");
	ret1 = fprintf(fppres, "|%+*.*F|\n", width, precision, var);
	ft_printf("#0135");
	ret2 = ft_printf("|%+*.*F|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0136");
	ret1 = fprintf(fppres, "|%+*.* |\n", width, precision, var);
	ft_printf("#0136");
	ret2 = ft_printf("|%+*.* |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0137");
	ret1 = fprintf(fppres, "|%+*.*hh |\n", width, precision, var);
	ft_printf("#0137");
	ret2 = ft_printf("|%+*.*hh |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0138");
	ret1 = fprintf(fppres, "|%+*.*h |\n", width, precision, var);
	ft_printf("#0138");
	ret2 = ft_printf("|%+*.*h |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0139");
	ret1 = fprintf(fppres, "|%+*.*l |\n", width, precision, var);
	ft_printf("#0139");
	ret2 = ft_printf("|%+*.*l |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0140");
	ret1 = fprintf(fppres, "|%+*.*ll |\n", width, precision, var);
	ft_printf("#0140");
	ret2 = ft_printf("|%+*.*ll |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0141");
	ret1 = fprintf(fppres, "|%+*.*j |\n", width, precision, var);
	ft_printf("#0141");
	ret2 = ft_printf("|%+*.*j |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0142");
	ret1 = fprintf(fppres, "|%+*.*z |\n", width, precision, var);
	ft_printf("#0142");
	ret2 = ft_printf("|%+*.*z |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0143");
	ret1 = fprintf(fppres, "|%+*.* |\n", width, precision, var);
	ft_printf("#0143");
	ret2 = ft_printf("|%+*.* |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0144");
	ret1 = fprintf(fppres, "|%0+*.*d|\n", width, precision, var);
	ft_printf("#0144");
	ret2 = ft_printf("|%0+*.*d|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0145");
	ret1 = fprintf(fppres, "|%0+*.*hhd|\n", width, precision, var);
	ft_printf("#0145");
	ret2 = ft_printf("|%0+*.*hhd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0146");
	ret1 = fprintf(fppres, "|%0+*.*hd|\n", width, precision, var);
	ft_printf("#0146");
	ret2 = ft_printf("|%0+*.*hd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0147");
	ret1 = fprintf(fppres, "|%0+*.*ld|\n", width, precision, var);
	ft_printf("#0147");
	ret2 = ft_printf("|%0+*.*ld|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0148");
	ret1 = fprintf(fppres, "|%0+*.*lld|\n", width, precision, var);
	ft_printf("#0148");
	ret2 = ft_printf("|%0+*.*lld|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0149");
	ret1 = fprintf(fppres, "|%0+*.*jd|\n", width, precision, var);
	ft_printf("#0149");
	ret2 = ft_printf("|%0+*.*jd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0150");
	ret1 = fprintf(fppres, "|%0+*.*zd|\n", width, precision, var);
	ft_printf("#0150");
	ret2 = ft_printf("|%0+*.*zd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0151");
	ret1 = fprintf(fppres, "|%0+*.*d|\n", width, precision, var);
	ft_printf("#0151");
	ret2 = ft_printf("|%0+*.*d|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0152");
	ret1 = fprintf(fppres, "|%0+*.*i|\n", width, precision, var);
	ft_printf("#0152");
	ret2 = ft_printf("|%0+*.*i|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0153");
	ret1 = fprintf(fppres, "|%0+*.*hhi|\n", width, precision, var);
	ft_printf("#0153");
	ret2 = ft_printf("|%0+*.*hhi|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0154");
	ret1 = fprintf(fppres, "|%0+*.*hi|\n", width, precision, var);
	ft_printf("#0154");
	ret2 = ft_printf("|%0+*.*hi|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0155");
	ret1 = fprintf(fppres, "|%0+*.*li|\n", width, precision, var);
	ft_printf("#0155");
	ret2 = ft_printf("|%0+*.*li|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0156");
	ret1 = fprintf(fppres, "|%0+*.*lli|\n", width, precision, var);
	ft_printf("#0156");
	ret2 = ft_printf("|%0+*.*lli|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0157");
	ret1 = fprintf(fppres, "|%0+*.*ji|\n", width, precision, var);
	ft_printf("#0157");
	ret2 = ft_printf("|%0+*.*ji|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0158");
	ret1 = fprintf(fppres, "|%0+*.*zi|\n", width, precision, var);
	ft_printf("#0158");
	ret2 = ft_printf("|%0+*.*zi|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0159");
	ret1 = fprintf(fppres, "|%0+*.*i|\n", width, precision, var);
	ft_printf("#0159");
	ret2 = ft_printf("|%0+*.*i|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0160");
	ret1 = fprintf(fppres, "|%0+*.*u|\n", width, precision, var);
	ft_printf("#0160");
	ret2 = ft_printf("|%0+*.*u|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0161");
	ret1 = fprintf(fppres, "|%0+*.*hhu|\n", width, precision, var);
	ft_printf("#0161");
	ret2 = ft_printf("|%0+*.*hhu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0162");
	ret1 = fprintf(fppres, "|%0+*.*hu|\n", width, precision, var);
	ft_printf("#0162");
	ret2 = ft_printf("|%0+*.*hu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0163");
	ret1 = fprintf(fppres, "|%0+*.*lu|\n", width, precision, var);
	ft_printf("#0163");
	ret2 = ft_printf("|%0+*.*lu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0164");
	ret1 = fprintf(fppres, "|%0+*.*llu|\n", width, precision, var);
	ft_printf("#0164");
	ret2 = ft_printf("|%0+*.*llu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0165");
	ret1 = fprintf(fppres, "|%0+*.*ju|\n", width, precision, var);
	ft_printf("#0165");
	ret2 = ft_printf("|%0+*.*ju|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0166");
	ret1 = fprintf(fppres, "|%0+*.*zu|\n", width, precision, var);
	ft_printf("#0166");
	ret2 = ft_printf("|%0+*.*zu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0167");
	ret1 = fprintf(fppres, "|%0+*.*u|\n", width, precision, var);
	ft_printf("#0167");
	ret2 = ft_printf("|%0+*.*u|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0168");
	ret1 = fprintf(fppres, "|%0+*.*f|\n", width, precision, var);
	ft_printf("#0168");
	ret2 = ft_printf("|%0+*.*f|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0169");
	ret1 = fprintf(fppres, "|%0+*.*hhf|\n", width, precision, var);
	ft_printf("#0169");
	ret2 = ft_printf("|%0+*.*hhf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0170");
	ret1 = fprintf(fppres, "|%0+*.*hf|\n", width, precision, var);
	ft_printf("#0170");
	ret2 = ft_printf("|%0+*.*hf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0171");
	ret1 = fprintf(fppres, "|%0+*.*lf|\n", width, precision, var);
	ft_printf("#0171");
	ret2 = ft_printf("|%0+*.*lf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0172");
	ret1 = fprintf(fppres, "|%0+*.*llf|\n", width, precision, var);
	ft_printf("#0172");
	ret2 = ft_printf("|%0+*.*llf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0173");
	ret1 = fprintf(fppres, "|%0+*.*jf|\n", width, precision, var);
	ft_printf("#0173");
	ret2 = ft_printf("|%0+*.*jf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0174");
	ret1 = fprintf(fppres, "|%0+*.*zf|\n", width, precision, var);
	ft_printf("#0174");
	ret2 = ft_printf("|%0+*.*zf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0175");
	ret1 = fprintf(fppres, "|%0+*.*f|\n", width, precision, var);
	ft_printf("#0175");
	ret2 = ft_printf("|%0+*.*f|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0176");
	ret1 = fprintf(fppres, "|%0+*.*F|\n", width, precision, var);
	ft_printf("#0176");
	ret2 = ft_printf("|%0+*.*F|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0177");
	ret1 = fprintf(fppres, "|%0+*.*hhF|\n", width, precision, var);
	ft_printf("#0177");
	ret2 = ft_printf("|%0+*.*hhF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0178");
	ret1 = fprintf(fppres, "|%0+*.*hF|\n", width, precision, var);
	ft_printf("#0178");
	ret2 = ft_printf("|%0+*.*hF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0179");
	ret1 = fprintf(fppres, "|%0+*.*lF|\n", width, precision, var);
	ft_printf("#0179");
	ret2 = ft_printf("|%0+*.*lF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0180");
	ret1 = fprintf(fppres, "|%0+*.*llF|\n", width, precision, var);
	ft_printf("#0180");
	ret2 = ft_printf("|%0+*.*llF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0181");
	ret1 = fprintf(fppres, "|%0+*.*jF|\n", width, precision, var);
	ft_printf("#0181");
	ret2 = ft_printf("|%0+*.*jF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0182");
	ret1 = fprintf(fppres, "|%0+*.*zF|\n", width, precision, var);
	ft_printf("#0182");
	ret2 = ft_printf("|%0+*.*zF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0183");
	ret1 = fprintf(fppres, "|%0+*.*F|\n", width, precision, var);
	ft_printf("#0183");
	ret2 = ft_printf("|%0+*.*F|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0184");
	ret1 = fprintf(fppres, "|%0+*.* |\n", width, precision, var);
	ft_printf("#0184");
	ret2 = ft_printf("|%0+*.* |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0185");
	ret1 = fprintf(fppres, "|%0+*.*hh |\n", width, precision, var);
	ft_printf("#0185");
	ret2 = ft_printf("|%0+*.*hh |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0186");
	ret1 = fprintf(fppres, "|%0+*.*h |\n", width, precision, var);
	ft_printf("#0186");
	ret2 = ft_printf("|%0+*.*h |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0187");
	ret1 = fprintf(fppres, "|%0+*.*l |\n", width, precision, var);
	ft_printf("#0187");
	ret2 = ft_printf("|%0+*.*l |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0188");
	ret1 = fprintf(fppres, "|%0+*.*ll |\n", width, precision, var);
	ft_printf("#0188");
	ret2 = ft_printf("|%0+*.*ll |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0189");
	ret1 = fprintf(fppres, "|%0+*.*j |\n", width, precision, var);
	ft_printf("#0189");
	ret2 = ft_printf("|%0+*.*j |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0190");
	ret1 = fprintf(fppres, "|%0+*.*z |\n", width, precision, var);
	ft_printf("#0190");
	ret2 = ft_printf("|%0+*.*z |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0191");
	ret1 = fprintf(fppres, "|%0+*.* |\n", width, precision, var);
	ft_printf("#0191");
	ret2 = ft_printf("|%0+*.* |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0192");
	ret1 = fprintf(fppres, "|%-*.*d|\n", width, precision, var);
	ft_printf("#0192");
	ret2 = ft_printf("|%-*.*d|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0193");
	ret1 = fprintf(fppres, "|%-*.*hhd|\n", width, precision, var);
	ft_printf("#0193");
	ret2 = ft_printf("|%-*.*hhd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0194");
	ret1 = fprintf(fppres, "|%-*.*hd|\n", width, precision, var);
	ft_printf("#0194");
	ret2 = ft_printf("|%-*.*hd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0195");
	ret1 = fprintf(fppres, "|%-*.*ld|\n", width, precision, var);
	ft_printf("#0195");
	ret2 = ft_printf("|%-*.*ld|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0196");
	ret1 = fprintf(fppres, "|%-*.*lld|\n", width, precision, var);
	ft_printf("#0196");
	ret2 = ft_printf("|%-*.*lld|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0197");
	ret1 = fprintf(fppres, "|%-*.*jd|\n", width, precision, var);
	ft_printf("#0197");
	ret2 = ft_printf("|%-*.*jd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0198");
	ret1 = fprintf(fppres, "|%-*.*zd|\n", width, precision, var);
	ft_printf("#0198");
	ret2 = ft_printf("|%-*.*zd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0199");
	ret1 = fprintf(fppres, "|%-*.*d|\n", width, precision, var);
	ft_printf("#0199");
	ret2 = ft_printf("|%-*.*d|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0200");
	ret1 = fprintf(fppres, "|%-*.*i|\n", width, precision, var);
	ft_printf("#0200");
	ret2 = ft_printf("|%-*.*i|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0201");
	ret1 = fprintf(fppres, "|%-*.*hhi|\n", width, precision, var);
	ft_printf("#0201");
	ret2 = ft_printf("|%-*.*hhi|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0202");
	ret1 = fprintf(fppres, "|%-*.*hi|\n", width, precision, var);
	ft_printf("#0202");
	ret2 = ft_printf("|%-*.*hi|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0203");
	ret1 = fprintf(fppres, "|%-*.*li|\n", width, precision, var);
	ft_printf("#0203");
	ret2 = ft_printf("|%-*.*li|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0204");
	ret1 = fprintf(fppres, "|%-*.*lli|\n", width, precision, var);
	ft_printf("#0204");
	ret2 = ft_printf("|%-*.*lli|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0205");
	ret1 = fprintf(fppres, "|%-*.*ji|\n", width, precision, var);
	ft_printf("#0205");
	ret2 = ft_printf("|%-*.*ji|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0206");
	ret1 = fprintf(fppres, "|%-*.*zi|\n", width, precision, var);
	ft_printf("#0206");
	ret2 = ft_printf("|%-*.*zi|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0207");
	ret1 = fprintf(fppres, "|%-*.*i|\n", width, precision, var);
	ft_printf("#0207");
	ret2 = ft_printf("|%-*.*i|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0208");
	ret1 = fprintf(fppres, "|%-*.*u|\n", width, precision, var);
	ft_printf("#0208");
	ret2 = ft_printf("|%-*.*u|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0209");
	ret1 = fprintf(fppres, "|%-*.*hhu|\n", width, precision, var);
	ft_printf("#0209");
	ret2 = ft_printf("|%-*.*hhu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0210");
	ret1 = fprintf(fppres, "|%-*.*hu|\n", width, precision, var);
	ft_printf("#0210");
	ret2 = ft_printf("|%-*.*hu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0211");
	ret1 = fprintf(fppres, "|%-*.*lu|\n", width, precision, var);
	ft_printf("#0211");
	ret2 = ft_printf("|%-*.*lu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0212");
	ret1 = fprintf(fppres, "|%-*.*llu|\n", width, precision, var);
	ft_printf("#0212");
	ret2 = ft_printf("|%-*.*llu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0213");
	ret1 = fprintf(fppres, "|%-*.*ju|\n", width, precision, var);
	ft_printf("#0213");
	ret2 = ft_printf("|%-*.*ju|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0214");
	ret1 = fprintf(fppres, "|%-*.*zu|\n", width, precision, var);
	ft_printf("#0214");
	ret2 = ft_printf("|%-*.*zu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0215");
	ret1 = fprintf(fppres, "|%-*.*u|\n", width, precision, var);
	ft_printf("#0215");
	ret2 = ft_printf("|%-*.*u|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0216");
	ret1 = fprintf(fppres, "|%-*.*f|\n", width, precision, var);
	ft_printf("#0216");
	ret2 = ft_printf("|%-*.*f|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0217");
	ret1 = fprintf(fppres, "|%-*.*hhf|\n", width, precision, var);
	ft_printf("#0217");
	ret2 = ft_printf("|%-*.*hhf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0218");
	ret1 = fprintf(fppres, "|%-*.*hf|\n", width, precision, var);
	ft_printf("#0218");
	ret2 = ft_printf("|%-*.*hf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0219");
	ret1 = fprintf(fppres, "|%-*.*lf|\n", width, precision, var);
	ft_printf("#0219");
	ret2 = ft_printf("|%-*.*lf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0220");
	ret1 = fprintf(fppres, "|%-*.*llf|\n", width, precision, var);
	ft_printf("#0220");
	ret2 = ft_printf("|%-*.*llf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0221");
	ret1 = fprintf(fppres, "|%-*.*jf|\n", width, precision, var);
	ft_printf("#0221");
	ret2 = ft_printf("|%-*.*jf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0222");
	ret1 = fprintf(fppres, "|%-*.*zf|\n", width, precision, var);
	ft_printf("#0222");
	ret2 = ft_printf("|%-*.*zf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0223");
	ret1 = fprintf(fppres, "|%-*.*f|\n", width, precision, var);
	ft_printf("#0223");
	ret2 = ft_printf("|%-*.*f|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0224");
	ret1 = fprintf(fppres, "|%-*.*F|\n", width, precision, var);
	ft_printf("#0224");
	ret2 = ft_printf("|%-*.*F|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0225");
	ret1 = fprintf(fppres, "|%-*.*hhF|\n", width, precision, var);
	ft_printf("#0225");
	ret2 = ft_printf("|%-*.*hhF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0226");
	ret1 = fprintf(fppres, "|%-*.*hF|\n", width, precision, var);
	ft_printf("#0226");
	ret2 = ft_printf("|%-*.*hF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0227");
	ret1 = fprintf(fppres, "|%-*.*lF|\n", width, precision, var);
	ft_printf("#0227");
	ret2 = ft_printf("|%-*.*lF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0228");
	ret1 = fprintf(fppres, "|%-*.*llF|\n", width, precision, var);
	ft_printf("#0228");
	ret2 = ft_printf("|%-*.*llF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0229");
	ret1 = fprintf(fppres, "|%-*.*jF|\n", width, precision, var);
	ft_printf("#0229");
	ret2 = ft_printf("|%-*.*jF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0230");
	ret1 = fprintf(fppres, "|%-*.*zF|\n", width, precision, var);
	ft_printf("#0230");
	ret2 = ft_printf("|%-*.*zF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0231");
	ret1 = fprintf(fppres, "|%-*.*F|\n", width, precision, var);
	ft_printf("#0231");
	ret2 = ft_printf("|%-*.*F|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0232");
	ret1 = fprintf(fppres, "|%-*.* |\n", width, precision, var);
	ft_printf("#0232");
	ret2 = ft_printf("|%-*.* |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0233");
	ret1 = fprintf(fppres, "|%-*.*hh |\n", width, precision, var);
	ft_printf("#0233");
	ret2 = ft_printf("|%-*.*hh |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0234");
	ret1 = fprintf(fppres, "|%-*.*h |\n", width, precision, var);
	ft_printf("#0234");
	ret2 = ft_printf("|%-*.*h |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0235");
	ret1 = fprintf(fppres, "|%-*.*l |\n", width, precision, var);
	ft_printf("#0235");
	ret2 = ft_printf("|%-*.*l |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0236");
	ret1 = fprintf(fppres, "|%-*.*ll |\n", width, precision, var);
	ft_printf("#0236");
	ret2 = ft_printf("|%-*.*ll |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0237");
	ret1 = fprintf(fppres, "|%-*.*j |\n", width, precision, var);
	ft_printf("#0237");
	ret2 = ft_printf("|%-*.*j |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0238");
	ret1 = fprintf(fppres, "|%-*.*z |\n", width, precision, var);
	ft_printf("#0238");
	ret2 = ft_printf("|%-*.*z |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0239");
	ret1 = fprintf(fppres, "|%-*.* |\n", width, precision, var);
	ft_printf("#0239");
	ret2 = ft_printf("|%-*.* |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0240");
	ret1 = fprintf(fppres, "|%0-*.*d|\n", width, precision, var);
	ft_printf("#0240");
	ret2 = ft_printf("|%0-*.*d|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0241");
	ret1 = fprintf(fppres, "|%0-*.*hhd|\n", width, precision, var);
	ft_printf("#0241");
	ret2 = ft_printf("|%0-*.*hhd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0242");
	ret1 = fprintf(fppres, "|%0-*.*hd|\n", width, precision, var);
	ft_printf("#0242");
	ret2 = ft_printf("|%0-*.*hd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0243");
	ret1 = fprintf(fppres, "|%0-*.*ld|\n", width, precision, var);
	ft_printf("#0243");
	ret2 = ft_printf("|%0-*.*ld|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0244");
	ret1 = fprintf(fppres, "|%0-*.*lld|\n", width, precision, var);
	ft_printf("#0244");
	ret2 = ft_printf("|%0-*.*lld|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0245");
	ret1 = fprintf(fppres, "|%0-*.*jd|\n", width, precision, var);
	ft_printf("#0245");
	ret2 = ft_printf("|%0-*.*jd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0246");
	ret1 = fprintf(fppres, "|%0-*.*zd|\n", width, precision, var);
	ft_printf("#0246");
	ret2 = ft_printf("|%0-*.*zd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0247");
	ret1 = fprintf(fppres, "|%0-*.*d|\n", width, precision, var);
	ft_printf("#0247");
	ret2 = ft_printf("|%0-*.*d|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0248");
	ret1 = fprintf(fppres, "|%0-*.*i|\n", width, precision, var);
	ft_printf("#0248");
	ret2 = ft_printf("|%0-*.*i|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0249");
	ret1 = fprintf(fppres, "|%0-*.*hhi|\n", width, precision, var);
	ft_printf("#0249");
	ret2 = ft_printf("|%0-*.*hhi|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0250");
	ret1 = fprintf(fppres, "|%0-*.*hi|\n", width, precision, var);
	ft_printf("#0250");
	ret2 = ft_printf("|%0-*.*hi|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0251");
	ret1 = fprintf(fppres, "|%0-*.*li|\n", width, precision, var);
	ft_printf("#0251");
	ret2 = ft_printf("|%0-*.*li|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0252");
	ret1 = fprintf(fppres, "|%0-*.*lli|\n", width, precision, var);
	ft_printf("#0252");
	ret2 = ft_printf("|%0-*.*lli|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0253");
	ret1 = fprintf(fppres, "|%0-*.*ji|\n", width, precision, var);
	ft_printf("#0253");
	ret2 = ft_printf("|%0-*.*ji|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0254");
	ret1 = fprintf(fppres, "|%0-*.*zi|\n", width, precision, var);
	ft_printf("#0254");
	ret2 = ft_printf("|%0-*.*zi|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0255");
	ret1 = fprintf(fppres, "|%0-*.*i|\n", width, precision, var);
	ft_printf("#0255");
	ret2 = ft_printf("|%0-*.*i|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0256");
	ret1 = fprintf(fppres, "|%0-*.*u|\n", width, precision, var);
	ft_printf("#0256");
	ret2 = ft_printf("|%0-*.*u|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0257");
	ret1 = fprintf(fppres, "|%0-*.*hhu|\n", width, precision, var);
	ft_printf("#0257");
	ret2 = ft_printf("|%0-*.*hhu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0258");
	ret1 = fprintf(fppres, "|%0-*.*hu|\n", width, precision, var);
	ft_printf("#0258");
	ret2 = ft_printf("|%0-*.*hu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0259");
	ret1 = fprintf(fppres, "|%0-*.*lu|\n", width, precision, var);
	ft_printf("#0259");
	ret2 = ft_printf("|%0-*.*lu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0260");
	ret1 = fprintf(fppres, "|%0-*.*llu|\n", width, precision, var);
	ft_printf("#0260");
	ret2 = ft_printf("|%0-*.*llu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0261");
	ret1 = fprintf(fppres, "|%0-*.*ju|\n", width, precision, var);
	ft_printf("#0261");
	ret2 = ft_printf("|%0-*.*ju|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0262");
	ret1 = fprintf(fppres, "|%0-*.*zu|\n", width, precision, var);
	ft_printf("#0262");
	ret2 = ft_printf("|%0-*.*zu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0263");
	ret1 = fprintf(fppres, "|%0-*.*u|\n", width, precision, var);
	ft_printf("#0263");
	ret2 = ft_printf("|%0-*.*u|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0264");
	ret1 = fprintf(fppres, "|%0-*.*f|\n", width, precision, var);
	ft_printf("#0264");
	ret2 = ft_printf("|%0-*.*f|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0265");
	ret1 = fprintf(fppres, "|%0-*.*hhf|\n", width, precision, var);
	ft_printf("#0265");
	ret2 = ft_printf("|%0-*.*hhf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0266");
	ret1 = fprintf(fppres, "|%0-*.*hf|\n", width, precision, var);
	ft_printf("#0266");
	ret2 = ft_printf("|%0-*.*hf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0267");
	ret1 = fprintf(fppres, "|%0-*.*lf|\n", width, precision, var);
	ft_printf("#0267");
	ret2 = ft_printf("|%0-*.*lf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0268");
	ret1 = fprintf(fppres, "|%0-*.*llf|\n", width, precision, var);
	ft_printf("#0268");
	ret2 = ft_printf("|%0-*.*llf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0269");
	ret1 = fprintf(fppres, "|%0-*.*jf|\n", width, precision, var);
	ft_printf("#0269");
	ret2 = ft_printf("|%0-*.*jf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0270");
	ret1 = fprintf(fppres, "|%0-*.*zf|\n", width, precision, var);
	ft_printf("#0270");
	ret2 = ft_printf("|%0-*.*zf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0271");
	ret1 = fprintf(fppres, "|%0-*.*f|\n", width, precision, var);
	ft_printf("#0271");
	ret2 = ft_printf("|%0-*.*f|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0272");
	ret1 = fprintf(fppres, "|%0-*.*F|\n", width, precision, var);
	ft_printf("#0272");
	ret2 = ft_printf("|%0-*.*F|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0273");
	ret1 = fprintf(fppres, "|%0-*.*hhF|\n", width, precision, var);
	ft_printf("#0273");
	ret2 = ft_printf("|%0-*.*hhF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0274");
	ret1 = fprintf(fppres, "|%0-*.*hF|\n", width, precision, var);
	ft_printf("#0274");
	ret2 = ft_printf("|%0-*.*hF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0275");
	ret1 = fprintf(fppres, "|%0-*.*lF|\n", width, precision, var);
	ft_printf("#0275");
	ret2 = ft_printf("|%0-*.*lF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0276");
	ret1 = fprintf(fppres, "|%0-*.*llF|\n", width, precision, var);
	ft_printf("#0276");
	ret2 = ft_printf("|%0-*.*llF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0277");
	ret1 = fprintf(fppres, "|%0-*.*jF|\n", width, precision, var);
	ft_printf("#0277");
	ret2 = ft_printf("|%0-*.*jF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0278");
	ret1 = fprintf(fppres, "|%0-*.*zF|\n", width, precision, var);
	ft_printf("#0278");
	ret2 = ft_printf("|%0-*.*zF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0279");
	ret1 = fprintf(fppres, "|%0-*.*F|\n", width, precision, var);
	ft_printf("#0279");
	ret2 = ft_printf("|%0-*.*F|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0280");
	ret1 = fprintf(fppres, "|%0-*.* |\n", width, precision, var);
	ft_printf("#0280");
	ret2 = ft_printf("|%0-*.* |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0281");
	ret1 = fprintf(fppres, "|%0-*.*hh |\n", width, precision, var);
	ft_printf("#0281");
	ret2 = ft_printf("|%0-*.*hh |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0282");
	ret1 = fprintf(fppres, "|%0-*.*h |\n", width, precision, var);
	ft_printf("#0282");
	ret2 = ft_printf("|%0-*.*h |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0283");
	ret1 = fprintf(fppres, "|%0-*.*l |\n", width, precision, var);
	ft_printf("#0283");
	ret2 = ft_printf("|%0-*.*l |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0284");
	ret1 = fprintf(fppres, "|%0-*.*ll |\n", width, precision, var);
	ft_printf("#0284");
	ret2 = ft_printf("|%0-*.*ll |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0285");
	ret1 = fprintf(fppres, "|%0-*.*j |\n", width, precision, var);
	ft_printf("#0285");
	ret2 = ft_printf("|%0-*.*j |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0286");
	ret1 = fprintf(fppres, "|%0-*.*z |\n", width, precision, var);
	ft_printf("#0286");
	ret2 = ft_printf("|%0-*.*z |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0287");
	ret1 = fprintf(fppres, "|%0-*.* |\n", width, precision, var);
	ft_printf("#0287");
	ret2 = ft_printf("|%0-*.* |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0288");
	ret1 = fprintf(fppres, "|%+-*.*d|\n", width, precision, var);
	ft_printf("#0288");
	ret2 = ft_printf("|%+-*.*d|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0289");
	ret1 = fprintf(fppres, "|%+-*.*hhd|\n", width, precision, var);
	ft_printf("#0289");
	ret2 = ft_printf("|%+-*.*hhd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0290");
	ret1 = fprintf(fppres, "|%+-*.*hd|\n", width, precision, var);
	ft_printf("#0290");
	ret2 = ft_printf("|%+-*.*hd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0291");
	ret1 = fprintf(fppres, "|%+-*.*ld|\n", width, precision, var);
	ft_printf("#0291");
	ret2 = ft_printf("|%+-*.*ld|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0292");
	ret1 = fprintf(fppres, "|%+-*.*lld|\n", width, precision, var);
	ft_printf("#0292");
	ret2 = ft_printf("|%+-*.*lld|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0293");
	ret1 = fprintf(fppres, "|%+-*.*jd|\n", width, precision, var);
	ft_printf("#0293");
	ret2 = ft_printf("|%+-*.*jd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0294");
	ret1 = fprintf(fppres, "|%+-*.*zd|\n", width, precision, var);
	ft_printf("#0294");
	ret2 = ft_printf("|%+-*.*zd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0295");
	ret1 = fprintf(fppres, "|%+-*.*d|\n", width, precision, var);
	ft_printf("#0295");
	ret2 = ft_printf("|%+-*.*d|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0296");
	ret1 = fprintf(fppres, "|%+-*.*i|\n", width, precision, var);
	ft_printf("#0296");
	ret2 = ft_printf("|%+-*.*i|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0297");
	ret1 = fprintf(fppres, "|%+-*.*hhi|\n", width, precision, var);
	ft_printf("#0297");
	ret2 = ft_printf("|%+-*.*hhi|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0298");
	ret1 = fprintf(fppres, "|%+-*.*hi|\n", width, precision, var);
	ft_printf("#0298");
	ret2 = ft_printf("|%+-*.*hi|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0299");
	ret1 = fprintf(fppres, "|%+-*.*li|\n", width, precision, var);
	ft_printf("#0299");
	ret2 = ft_printf("|%+-*.*li|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0300");
	ret1 = fprintf(fppres, "|%+-*.*lli|\n", width, precision, var);
	ft_printf("#0300");
	ret2 = ft_printf("|%+-*.*lli|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0301");
	ret1 = fprintf(fppres, "|%+-*.*ji|\n", width, precision, var);
	ft_printf("#0301");
	ret2 = ft_printf("|%+-*.*ji|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0302");
	ret1 = fprintf(fppres, "|%+-*.*zi|\n", width, precision, var);
	ft_printf("#0302");
	ret2 = ft_printf("|%+-*.*zi|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0303");
	ret1 = fprintf(fppres, "|%+-*.*i|\n", width, precision, var);
	ft_printf("#0303");
	ret2 = ft_printf("|%+-*.*i|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0304");
	ret1 = fprintf(fppres, "|%+-*.*u|\n", width, precision, var);
	ft_printf("#0304");
	ret2 = ft_printf("|%+-*.*u|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0305");
	ret1 = fprintf(fppres, "|%+-*.*hhu|\n", width, precision, var);
	ft_printf("#0305");
	ret2 = ft_printf("|%+-*.*hhu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0306");
	ret1 = fprintf(fppres, "|%+-*.*hu|\n", width, precision, var);
	ft_printf("#0306");
	ret2 = ft_printf("|%+-*.*hu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0307");
	ret1 = fprintf(fppres, "|%+-*.*lu|\n", width, precision, var);
	ft_printf("#0307");
	ret2 = ft_printf("|%+-*.*lu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0308");
	ret1 = fprintf(fppres, "|%+-*.*llu|\n", width, precision, var);
	ft_printf("#0308");
	ret2 = ft_printf("|%+-*.*llu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0309");
	ret1 = fprintf(fppres, "|%+-*.*ju|\n", width, precision, var);
	ft_printf("#0309");
	ret2 = ft_printf("|%+-*.*ju|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0310");
	ret1 = fprintf(fppres, "|%+-*.*zu|\n", width, precision, var);
	ft_printf("#0310");
	ret2 = ft_printf("|%+-*.*zu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0311");
	ret1 = fprintf(fppres, "|%+-*.*u|\n", width, precision, var);
	ft_printf("#0311");
	ret2 = ft_printf("|%+-*.*u|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0312");
	ret1 = fprintf(fppres, "|%+-*.*f|\n", width, precision, var);
	ft_printf("#0312");
	ret2 = ft_printf("|%+-*.*f|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0313");
	ret1 = fprintf(fppres, "|%+-*.*hhf|\n", width, precision, var);
	ft_printf("#0313");
	ret2 = ft_printf("|%+-*.*hhf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0314");
	ret1 = fprintf(fppres, "|%+-*.*hf|\n", width, precision, var);
	ft_printf("#0314");
	ret2 = ft_printf("|%+-*.*hf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0315");
	ret1 = fprintf(fppres, "|%+-*.*lf|\n", width, precision, var);
	ft_printf("#0315");
	ret2 = ft_printf("|%+-*.*lf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0316");
	ret1 = fprintf(fppres, "|%+-*.*llf|\n", width, precision, var);
	ft_printf("#0316");
	ret2 = ft_printf("|%+-*.*llf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0317");
	ret1 = fprintf(fppres, "|%+-*.*jf|\n", width, precision, var);
	ft_printf("#0317");
	ret2 = ft_printf("|%+-*.*jf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0318");
	ret1 = fprintf(fppres, "|%+-*.*zf|\n", width, precision, var);
	ft_printf("#0318");
	ret2 = ft_printf("|%+-*.*zf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0319");
	ret1 = fprintf(fppres, "|%+-*.*f|\n", width, precision, var);
	ft_printf("#0319");
	ret2 = ft_printf("|%+-*.*f|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0320");
	ret1 = fprintf(fppres, "|%+-*.*F|\n", width, precision, var);
	ft_printf("#0320");
	ret2 = ft_printf("|%+-*.*F|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0321");
	ret1 = fprintf(fppres, "|%+-*.*hhF|\n", width, precision, var);
	ft_printf("#0321");
	ret2 = ft_printf("|%+-*.*hhF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0322");
	ret1 = fprintf(fppres, "|%+-*.*hF|\n", width, precision, var);
	ft_printf("#0322");
	ret2 = ft_printf("|%+-*.*hF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0323");
	ret1 = fprintf(fppres, "|%+-*.*lF|\n", width, precision, var);
	ft_printf("#0323");
	ret2 = ft_printf("|%+-*.*lF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0324");
	ret1 = fprintf(fppres, "|%+-*.*llF|\n", width, precision, var);
	ft_printf("#0324");
	ret2 = ft_printf("|%+-*.*llF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0325");
	ret1 = fprintf(fppres, "|%+-*.*jF|\n", width, precision, var);
	ft_printf("#0325");
	ret2 = ft_printf("|%+-*.*jF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0326");
	ret1 = fprintf(fppres, "|%+-*.*zF|\n", width, precision, var);
	ft_printf("#0326");
	ret2 = ft_printf("|%+-*.*zF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0327");
	ret1 = fprintf(fppres, "|%+-*.*F|\n", width, precision, var);
	ft_printf("#0327");
	ret2 = ft_printf("|%+-*.*F|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0328");
	ret1 = fprintf(fppres, "|%+-*.* |\n", width, precision, var);
	ft_printf("#0328");
	ret2 = ft_printf("|%+-*.* |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0329");
	ret1 = fprintf(fppres, "|%+-*.*hh |\n", width, precision, var);
	ft_printf("#0329");
	ret2 = ft_printf("|%+-*.*hh |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0330");
	ret1 = fprintf(fppres, "|%+-*.*h |\n", width, precision, var);
	ft_printf("#0330");
	ret2 = ft_printf("|%+-*.*h |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0331");
	ret1 = fprintf(fppres, "|%+-*.*l |\n", width, precision, var);
	ft_printf("#0331");
	ret2 = ft_printf("|%+-*.*l |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0332");
	ret1 = fprintf(fppres, "|%+-*.*ll |\n", width, precision, var);
	ft_printf("#0332");
	ret2 = ft_printf("|%+-*.*ll |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0333");
	ret1 = fprintf(fppres, "|%+-*.*j |\n", width, precision, var);
	ft_printf("#0333");
	ret2 = ft_printf("|%+-*.*j |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0334");
	ret1 = fprintf(fppres, "|%+-*.*z |\n", width, precision, var);
	ft_printf("#0334");
	ret2 = ft_printf("|%+-*.*z |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0335");
	ret1 = fprintf(fppres, "|%+-*.* |\n", width, precision, var);
	ft_printf("#0335");
	ret2 = ft_printf("|%+-*.* |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0336");
	ret1 = fprintf(fppres, "|%0+-*.*d|\n", width, precision, var);
	ft_printf("#0336");
	ret2 = ft_printf("|%0+-*.*d|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0337");
	ret1 = fprintf(fppres, "|%0+-*.*hhd|\n", width, precision, var);
	ft_printf("#0337");
	ret2 = ft_printf("|%0+-*.*hhd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0338");
	ret1 = fprintf(fppres, "|%0+-*.*hd|\n", width, precision, var);
	ft_printf("#0338");
	ret2 = ft_printf("|%0+-*.*hd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0339");
	ret1 = fprintf(fppres, "|%0+-*.*ld|\n", width, precision, var);
	ft_printf("#0339");
	ret2 = ft_printf("|%0+-*.*ld|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0340");
	ret1 = fprintf(fppres, "|%0+-*.*lld|\n", width, precision, var);
	ft_printf("#0340");
	ret2 = ft_printf("|%0+-*.*lld|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0341");
	ret1 = fprintf(fppres, "|%0+-*.*jd|\n", width, precision, var);
	ft_printf("#0341");
	ret2 = ft_printf("|%0+-*.*jd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0342");
	ret1 = fprintf(fppres, "|%0+-*.*zd|\n", width, precision, var);
	ft_printf("#0342");
	ret2 = ft_printf("|%0+-*.*zd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0343");
	ret1 = fprintf(fppres, "|%0+-*.*d|\n", width, precision, var);
	ft_printf("#0343");
	ret2 = ft_printf("|%0+-*.*d|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0344");
	ret1 = fprintf(fppres, "|%0+-*.*i|\n", width, precision, var);
	ft_printf("#0344");
	ret2 = ft_printf("|%0+-*.*i|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0345");
	ret1 = fprintf(fppres, "|%0+-*.*hhi|\n", width, precision, var);
	ft_printf("#0345");
	ret2 = ft_printf("|%0+-*.*hhi|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0346");
	ret1 = fprintf(fppres, "|%0+-*.*hi|\n", width, precision, var);
	ft_printf("#0346");
	ret2 = ft_printf("|%0+-*.*hi|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0347");
	ret1 = fprintf(fppres, "|%0+-*.*li|\n", width, precision, var);
	ft_printf("#0347");
	ret2 = ft_printf("|%0+-*.*li|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0348");
	ret1 = fprintf(fppres, "|%0+-*.*lli|\n", width, precision, var);
	ft_printf("#0348");
	ret2 = ft_printf("|%0+-*.*lli|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0349");
	ret1 = fprintf(fppres, "|%0+-*.*ji|\n", width, precision, var);
	ft_printf("#0349");
	ret2 = ft_printf("|%0+-*.*ji|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0350");
	ret1 = fprintf(fppres, "|%0+-*.*zi|\n", width, precision, var);
	ft_printf("#0350");
	ret2 = ft_printf("|%0+-*.*zi|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0351");
	ret1 = fprintf(fppres, "|%0+-*.*i|\n", width, precision, var);
	ft_printf("#0351");
	ret2 = ft_printf("|%0+-*.*i|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0352");
	ret1 = fprintf(fppres, "|%0+-*.*u|\n", width, precision, var);
	ft_printf("#0352");
	ret2 = ft_printf("|%0+-*.*u|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0353");
	ret1 = fprintf(fppres, "|%0+-*.*hhu|\n", width, precision, var);
	ft_printf("#0353");
	ret2 = ft_printf("|%0+-*.*hhu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0354");
	ret1 = fprintf(fppres, "|%0+-*.*hu|\n", width, precision, var);
	ft_printf("#0354");
	ret2 = ft_printf("|%0+-*.*hu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0355");
	ret1 = fprintf(fppres, "|%0+-*.*lu|\n", width, precision, var);
	ft_printf("#0355");
	ret2 = ft_printf("|%0+-*.*lu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0356");
	ret1 = fprintf(fppres, "|%0+-*.*llu|\n", width, precision, var);
	ft_printf("#0356");
	ret2 = ft_printf("|%0+-*.*llu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0357");
	ret1 = fprintf(fppres, "|%0+-*.*ju|\n", width, precision, var);
	ft_printf("#0357");
	ret2 = ft_printf("|%0+-*.*ju|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0358");
	ret1 = fprintf(fppres, "|%0+-*.*zu|\n", width, precision, var);
	ft_printf("#0358");
	ret2 = ft_printf("|%0+-*.*zu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0359");
	ret1 = fprintf(fppres, "|%0+-*.*u|\n", width, precision, var);
	ft_printf("#0359");
	ret2 = ft_printf("|%0+-*.*u|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0360");
	ret1 = fprintf(fppres, "|%0+-*.*f|\n", width, precision, var);
	ft_printf("#0360");
	ret2 = ft_printf("|%0+-*.*f|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0361");
	ret1 = fprintf(fppres, "|%0+-*.*hhf|\n", width, precision, var);
	ft_printf("#0361");
	ret2 = ft_printf("|%0+-*.*hhf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0362");
	ret1 = fprintf(fppres, "|%0+-*.*hf|\n", width, precision, var);
	ft_printf("#0362");
	ret2 = ft_printf("|%0+-*.*hf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0363");
	ret1 = fprintf(fppres, "|%0+-*.*lf|\n", width, precision, var);
	ft_printf("#0363");
	ret2 = ft_printf("|%0+-*.*lf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0364");
	ret1 = fprintf(fppres, "|%0+-*.*llf|\n", width, precision, var);
	ft_printf("#0364");
	ret2 = ft_printf("|%0+-*.*llf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0365");
	ret1 = fprintf(fppres, "|%0+-*.*jf|\n", width, precision, var);
	ft_printf("#0365");
	ret2 = ft_printf("|%0+-*.*jf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0366");
	ret1 = fprintf(fppres, "|%0+-*.*zf|\n", width, precision, var);
	ft_printf("#0366");
	ret2 = ft_printf("|%0+-*.*zf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0367");
	ret1 = fprintf(fppres, "|%0+-*.*f|\n", width, precision, var);
	ft_printf("#0367");
	ret2 = ft_printf("|%0+-*.*f|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0368");
	ret1 = fprintf(fppres, "|%0+-*.*F|\n", width, precision, var);
	ft_printf("#0368");
	ret2 = ft_printf("|%0+-*.*F|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0369");
	ret1 = fprintf(fppres, "|%0+-*.*hhF|\n", width, precision, var);
	ft_printf("#0369");
	ret2 = ft_printf("|%0+-*.*hhF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0370");
	ret1 = fprintf(fppres, "|%0+-*.*hF|\n", width, precision, var);
	ft_printf("#0370");
	ret2 = ft_printf("|%0+-*.*hF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0371");
	ret1 = fprintf(fppres, "|%0+-*.*lF|\n", width, precision, var);
	ft_printf("#0371");
	ret2 = ft_printf("|%0+-*.*lF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0372");
	ret1 = fprintf(fppres, "|%0+-*.*llF|\n", width, precision, var);
	ft_printf("#0372");
	ret2 = ft_printf("|%0+-*.*llF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0373");
	ret1 = fprintf(fppres, "|%0+-*.*jF|\n", width, precision, var);
	ft_printf("#0373");
	ret2 = ft_printf("|%0+-*.*jF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0374");
	ret1 = fprintf(fppres, "|%0+-*.*zF|\n", width, precision, var);
	ft_printf("#0374");
	ret2 = ft_printf("|%0+-*.*zF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0375");
	ret1 = fprintf(fppres, "|%0+-*.*F|\n", width, precision, var);
	ft_printf("#0375");
	ret2 = ft_printf("|%0+-*.*F|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0376");
	ret1 = fprintf(fppres, "|%0+-*.* |\n", width, precision, var);
	ft_printf("#0376");
	ret2 = ft_printf("|%0+-*.* |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0377");
	ret1 = fprintf(fppres, "|%0+-*.*hh |\n", width, precision, var);
	ft_printf("#0377");
	ret2 = ft_printf("|%0+-*.*hh |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0378");
	ret1 = fprintf(fppres, "|%0+-*.*h |\n", width, precision, var);
	ft_printf("#0378");
	ret2 = ft_printf("|%0+-*.*h |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0379");
	ret1 = fprintf(fppres, "|%0+-*.*l |\n", width, precision, var);
	ft_printf("#0379");
	ret2 = ft_printf("|%0+-*.*l |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0380");
	ret1 = fprintf(fppres, "|%0+-*.*ll |\n", width, precision, var);
	ft_printf("#0380");
	ret2 = ft_printf("|%0+-*.*ll |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0381");
	ret1 = fprintf(fppres, "|%0+-*.*j |\n", width, precision, var);
	ft_printf("#0381");
	ret2 = ft_printf("|%0+-*.*j |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0382");
	ret1 = fprintf(fppres, "|%0+-*.*z |\n", width, precision, var);
	ft_printf("#0382");
	ret2 = ft_printf("|%0+-*.*z |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0383");
	ret1 = fprintf(fppres, "|%0+-*.* |\n", width, precision, var);
	ft_printf("#0383");
	ret2 = ft_printf("|%0+-*.* |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0384");
	ret1 = fprintf(fppres, "|%#*.*d|\n", width, precision, var);
	ft_printf("#0384");
	ret2 = ft_printf("|%#*.*d|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0385");
	ret1 = fprintf(fppres, "|%#*.*hhd|\n", width, precision, var);
	ft_printf("#0385");
	ret2 = ft_printf("|%#*.*hhd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0386");
	ret1 = fprintf(fppres, "|%#*.*hd|\n", width, precision, var);
	ft_printf("#0386");
	ret2 = ft_printf("|%#*.*hd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0387");
	ret1 = fprintf(fppres, "|%#*.*ld|\n", width, precision, var);
	ft_printf("#0387");
	ret2 = ft_printf("|%#*.*ld|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0388");
	ret1 = fprintf(fppres, "|%#*.*lld|\n", width, precision, var);
	ft_printf("#0388");
	ret2 = ft_printf("|%#*.*lld|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0389");
	ret1 = fprintf(fppres, "|%#*.*jd|\n", width, precision, var);
	ft_printf("#0389");
	ret2 = ft_printf("|%#*.*jd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0390");
	ret1 = fprintf(fppres, "|%#*.*zd|\n", width, precision, var);
	ft_printf("#0390");
	ret2 = ft_printf("|%#*.*zd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0391");
	ret1 = fprintf(fppres, "|%#*.*d|\n", width, precision, var);
	ft_printf("#0391");
	ret2 = ft_printf("|%#*.*d|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0392");
	ret1 = fprintf(fppres, "|%#*.*i|\n", width, precision, var);
	ft_printf("#0392");
	ret2 = ft_printf("|%#*.*i|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0393");
	ret1 = fprintf(fppres, "|%#*.*hhi|\n", width, precision, var);
	ft_printf("#0393");
	ret2 = ft_printf("|%#*.*hhi|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0394");
	ret1 = fprintf(fppres, "|%#*.*hi|\n", width, precision, var);
	ft_printf("#0394");
	ret2 = ft_printf("|%#*.*hi|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0395");
	ret1 = fprintf(fppres, "|%#*.*li|\n", width, precision, var);
	ft_printf("#0395");
	ret2 = ft_printf("|%#*.*li|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0396");
	ret1 = fprintf(fppres, "|%#*.*lli|\n", width, precision, var);
	ft_printf("#0396");
	ret2 = ft_printf("|%#*.*lli|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0397");
	ret1 = fprintf(fppres, "|%#*.*ji|\n", width, precision, var);
	ft_printf("#0397");
	ret2 = ft_printf("|%#*.*ji|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0398");
	ret1 = fprintf(fppres, "|%#*.*zi|\n", width, precision, var);
	ft_printf("#0398");
	ret2 = ft_printf("|%#*.*zi|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0399");
	ret1 = fprintf(fppres, "|%#*.*i|\n", width, precision, var);
	ft_printf("#0399");
	ret2 = ft_printf("|%#*.*i|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0400");
	ret1 = fprintf(fppres, "|%#*.*u|\n", width, precision, var);
	ft_printf("#0400");
	ret2 = ft_printf("|%#*.*u|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0401");
	ret1 = fprintf(fppres, "|%#*.*hhu|\n", width, precision, var);
	ft_printf("#0401");
	ret2 = ft_printf("|%#*.*hhu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0402");
	ret1 = fprintf(fppres, "|%#*.*hu|\n", width, precision, var);
	ft_printf("#0402");
	ret2 = ft_printf("|%#*.*hu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0403");
	ret1 = fprintf(fppres, "|%#*.*lu|\n", width, precision, var);
	ft_printf("#0403");
	ret2 = ft_printf("|%#*.*lu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0404");
	ret1 = fprintf(fppres, "|%#*.*llu|\n", width, precision, var);
	ft_printf("#0404");
	ret2 = ft_printf("|%#*.*llu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0405");
	ret1 = fprintf(fppres, "|%#*.*ju|\n", width, precision, var);
	ft_printf("#0405");
	ret2 = ft_printf("|%#*.*ju|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0406");
	ret1 = fprintf(fppres, "|%#*.*zu|\n", width, precision, var);
	ft_printf("#0406");
	ret2 = ft_printf("|%#*.*zu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0407");
	ret1 = fprintf(fppres, "|%#*.*u|\n", width, precision, var);
	ft_printf("#0407");
	ret2 = ft_printf("|%#*.*u|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0408");
	ret1 = fprintf(fppres, "|%#*.*f|\n", width, precision, var);
	ft_printf("#0408");
	ret2 = ft_printf("|%#*.*f|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0409");
	ret1 = fprintf(fppres, "|%#*.*hhf|\n", width, precision, var);
	ft_printf("#0409");
	ret2 = ft_printf("|%#*.*hhf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0410");
	ret1 = fprintf(fppres, "|%#*.*hf|\n", width, precision, var);
	ft_printf("#0410");
	ret2 = ft_printf("|%#*.*hf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0411");
	ret1 = fprintf(fppres, "|%#*.*lf|\n", width, precision, var);
	ft_printf("#0411");
	ret2 = ft_printf("|%#*.*lf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0412");
	ret1 = fprintf(fppres, "|%#*.*llf|\n", width, precision, var);
	ft_printf("#0412");
	ret2 = ft_printf("|%#*.*llf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0413");
	ret1 = fprintf(fppres, "|%#*.*jf|\n", width, precision, var);
	ft_printf("#0413");
	ret2 = ft_printf("|%#*.*jf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0414");
	ret1 = fprintf(fppres, "|%#*.*zf|\n", width, precision, var);
	ft_printf("#0414");
	ret2 = ft_printf("|%#*.*zf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0415");
	ret1 = fprintf(fppres, "|%#*.*f|\n", width, precision, var);
	ft_printf("#0415");
	ret2 = ft_printf("|%#*.*f|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0416");
	ret1 = fprintf(fppres, "|%#*.*F|\n", width, precision, var);
	ft_printf("#0416");
	ret2 = ft_printf("|%#*.*F|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0417");
	ret1 = fprintf(fppres, "|%#*.*hhF|\n", width, precision, var);
	ft_printf("#0417");
	ret2 = ft_printf("|%#*.*hhF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0418");
	ret1 = fprintf(fppres, "|%#*.*hF|\n", width, precision, var);
	ft_printf("#0418");
	ret2 = ft_printf("|%#*.*hF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0419");
	ret1 = fprintf(fppres, "|%#*.*lF|\n", width, precision, var);
	ft_printf("#0419");
	ret2 = ft_printf("|%#*.*lF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0420");
	ret1 = fprintf(fppres, "|%#*.*llF|\n", width, precision, var);
	ft_printf("#0420");
	ret2 = ft_printf("|%#*.*llF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0421");
	ret1 = fprintf(fppres, "|%#*.*jF|\n", width, precision, var);
	ft_printf("#0421");
	ret2 = ft_printf("|%#*.*jF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0422");
	ret1 = fprintf(fppres, "|%#*.*zF|\n", width, precision, var);
	ft_printf("#0422");
	ret2 = ft_printf("|%#*.*zF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0423");
	ret1 = fprintf(fppres, "|%#*.*F|\n", width, precision, var);
	ft_printf("#0423");
	ret2 = ft_printf("|%#*.*F|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0424");
	ret1 = fprintf(fppres, "|%#*.* |\n", width, precision, var);
	ft_printf("#0424");
	ret2 = ft_printf("|%#*.* |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0425");
	ret1 = fprintf(fppres, "|%#*.*hh |\n", width, precision, var);
	ft_printf("#0425");
	ret2 = ft_printf("|%#*.*hh |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0426");
	ret1 = fprintf(fppres, "|%#*.*h |\n", width, precision, var);
	ft_printf("#0426");
	ret2 = ft_printf("|%#*.*h |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0427");
	ret1 = fprintf(fppres, "|%#*.*l |\n", width, precision, var);
	ft_printf("#0427");
	ret2 = ft_printf("|%#*.*l |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0428");
	ret1 = fprintf(fppres, "|%#*.*ll |\n", width, precision, var);
	ft_printf("#0428");
	ret2 = ft_printf("|%#*.*ll |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0429");
	ret1 = fprintf(fppres, "|%#*.*j |\n", width, precision, var);
	ft_printf("#0429");
	ret2 = ft_printf("|%#*.*j |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0430");
	ret1 = fprintf(fppres, "|%#*.*z |\n", width, precision, var);
	ft_printf("#0430");
	ret2 = ft_printf("|%#*.*z |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0431");
	ret1 = fprintf(fppres, "|%#*.* |\n", width, precision, var);
	ft_printf("#0431");
	ret2 = ft_printf("|%#*.* |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0432");
	ret1 = fprintf(fppres, "|%0#*.*d|\n", width, precision, var);
	ft_printf("#0432");
	ret2 = ft_printf("|%0#*.*d|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0433");
	ret1 = fprintf(fppres, "|%0#*.*hhd|\n", width, precision, var);
	ft_printf("#0433");
	ret2 = ft_printf("|%0#*.*hhd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0434");
	ret1 = fprintf(fppres, "|%0#*.*hd|\n", width, precision, var);
	ft_printf("#0434");
	ret2 = ft_printf("|%0#*.*hd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0435");
	ret1 = fprintf(fppres, "|%0#*.*ld|\n", width, precision, var);
	ft_printf("#0435");
	ret2 = ft_printf("|%0#*.*ld|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0436");
	ret1 = fprintf(fppres, "|%0#*.*lld|\n", width, precision, var);
	ft_printf("#0436");
	ret2 = ft_printf("|%0#*.*lld|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0437");
	ret1 = fprintf(fppres, "|%0#*.*jd|\n", width, precision, var);
	ft_printf("#0437");
	ret2 = ft_printf("|%0#*.*jd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0438");
	ret1 = fprintf(fppres, "|%0#*.*zd|\n", width, precision, var);
	ft_printf("#0438");
	ret2 = ft_printf("|%0#*.*zd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0439");
	ret1 = fprintf(fppres, "|%0#*.*d|\n", width, precision, var);
	ft_printf("#0439");
	ret2 = ft_printf("|%0#*.*d|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0440");
	ret1 = fprintf(fppres, "|%0#*.*i|\n", width, precision, var);
	ft_printf("#0440");
	ret2 = ft_printf("|%0#*.*i|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0441");
	ret1 = fprintf(fppres, "|%0#*.*hhi|\n", width, precision, var);
	ft_printf("#0441");
	ret2 = ft_printf("|%0#*.*hhi|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0442");
	ret1 = fprintf(fppres, "|%0#*.*hi|\n", width, precision, var);
	ft_printf("#0442");
	ret2 = ft_printf("|%0#*.*hi|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0443");
	ret1 = fprintf(fppres, "|%0#*.*li|\n", width, precision, var);
	ft_printf("#0443");
	ret2 = ft_printf("|%0#*.*li|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0444");
	ret1 = fprintf(fppres, "|%0#*.*lli|\n", width, precision, var);
	ft_printf("#0444");
	ret2 = ft_printf("|%0#*.*lli|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0445");
	ret1 = fprintf(fppres, "|%0#*.*ji|\n", width, precision, var);
	ft_printf("#0445");
	ret2 = ft_printf("|%0#*.*ji|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0446");
	ret1 = fprintf(fppres, "|%0#*.*zi|\n", width, precision, var);
	ft_printf("#0446");
	ret2 = ft_printf("|%0#*.*zi|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0447");
	ret1 = fprintf(fppres, "|%0#*.*i|\n", width, precision, var);
	ft_printf("#0447");
	ret2 = ft_printf("|%0#*.*i|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0448");
	ret1 = fprintf(fppres, "|%0#*.*u|\n", width, precision, var);
	ft_printf("#0448");
	ret2 = ft_printf("|%0#*.*u|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0449");
	ret1 = fprintf(fppres, "|%0#*.*hhu|\n", width, precision, var);
	ft_printf("#0449");
	ret2 = ft_printf("|%0#*.*hhu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0450");
	ret1 = fprintf(fppres, "|%0#*.*hu|\n", width, precision, var);
	ft_printf("#0450");
	ret2 = ft_printf("|%0#*.*hu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0451");
	ret1 = fprintf(fppres, "|%0#*.*lu|\n", width, precision, var);
	ft_printf("#0451");
	ret2 = ft_printf("|%0#*.*lu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0452");
	ret1 = fprintf(fppres, "|%0#*.*llu|\n", width, precision, var);
	ft_printf("#0452");
	ret2 = ft_printf("|%0#*.*llu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0453");
	ret1 = fprintf(fppres, "|%0#*.*ju|\n", width, precision, var);
	ft_printf("#0453");
	ret2 = ft_printf("|%0#*.*ju|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0454");
	ret1 = fprintf(fppres, "|%0#*.*zu|\n", width, precision, var);
	ft_printf("#0454");
	ret2 = ft_printf("|%0#*.*zu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0455");
	ret1 = fprintf(fppres, "|%0#*.*u|\n", width, precision, var);
	ft_printf("#0455");
	ret2 = ft_printf("|%0#*.*u|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0456");
	ret1 = fprintf(fppres, "|%0#*.*f|\n", width, precision, var);
	ft_printf("#0456");
	ret2 = ft_printf("|%0#*.*f|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0457");
	ret1 = fprintf(fppres, "|%0#*.*hhf|\n", width, precision, var);
	ft_printf("#0457");
	ret2 = ft_printf("|%0#*.*hhf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0458");
	ret1 = fprintf(fppres, "|%0#*.*hf|\n", width, precision, var);
	ft_printf("#0458");
	ret2 = ft_printf("|%0#*.*hf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0459");
	ret1 = fprintf(fppres, "|%0#*.*lf|\n", width, precision, var);
	ft_printf("#0459");
	ret2 = ft_printf("|%0#*.*lf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0460");
	ret1 = fprintf(fppres, "|%0#*.*llf|\n", width, precision, var);
	ft_printf("#0460");
	ret2 = ft_printf("|%0#*.*llf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0461");
	ret1 = fprintf(fppres, "|%0#*.*jf|\n", width, precision, var);
	ft_printf("#0461");
	ret2 = ft_printf("|%0#*.*jf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0462");
	ret1 = fprintf(fppres, "|%0#*.*zf|\n", width, precision, var);
	ft_printf("#0462");
	ret2 = ft_printf("|%0#*.*zf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0463");
	ret1 = fprintf(fppres, "|%0#*.*f|\n", width, precision, var);
	ft_printf("#0463");
	ret2 = ft_printf("|%0#*.*f|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0464");
	ret1 = fprintf(fppres, "|%0#*.*F|\n", width, precision, var);
	ft_printf("#0464");
	ret2 = ft_printf("|%0#*.*F|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0465");
	ret1 = fprintf(fppres, "|%0#*.*hhF|\n", width, precision, var);
	ft_printf("#0465");
	ret2 = ft_printf("|%0#*.*hhF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0466");
	ret1 = fprintf(fppres, "|%0#*.*hF|\n", width, precision, var);
	ft_printf("#0466");
	ret2 = ft_printf("|%0#*.*hF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0467");
	ret1 = fprintf(fppres, "|%0#*.*lF|\n", width, precision, var);
	ft_printf("#0467");
	ret2 = ft_printf("|%0#*.*lF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0468");
	ret1 = fprintf(fppres, "|%0#*.*llF|\n", width, precision, var);
	ft_printf("#0468");
	ret2 = ft_printf("|%0#*.*llF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0469");
	ret1 = fprintf(fppres, "|%0#*.*jF|\n", width, precision, var);
	ft_printf("#0469");
	ret2 = ft_printf("|%0#*.*jF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0470");
	ret1 = fprintf(fppres, "|%0#*.*zF|\n", width, precision, var);
	ft_printf("#0470");
	ret2 = ft_printf("|%0#*.*zF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0471");
	ret1 = fprintf(fppres, "|%0#*.*F|\n", width, precision, var);
	ft_printf("#0471");
	ret2 = ft_printf("|%0#*.*F|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0472");
	ret1 = fprintf(fppres, "|%0#*.* |\n", width, precision, var);
	ft_printf("#0472");
	ret2 = ft_printf("|%0#*.* |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0473");
	ret1 = fprintf(fppres, "|%0#*.*hh |\n", width, precision, var);
	ft_printf("#0473");
	ret2 = ft_printf("|%0#*.*hh |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0474");
	ret1 = fprintf(fppres, "|%0#*.*h |\n", width, precision, var);
	ft_printf("#0474");
	ret2 = ft_printf("|%0#*.*h |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0475");
	ret1 = fprintf(fppres, "|%0#*.*l |\n", width, precision, var);
	ft_printf("#0475");
	ret2 = ft_printf("|%0#*.*l |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0476");
	ret1 = fprintf(fppres, "|%0#*.*ll |\n", width, precision, var);
	ft_printf("#0476");
	ret2 = ft_printf("|%0#*.*ll |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0477");
	ret1 = fprintf(fppres, "|%0#*.*j |\n", width, precision, var);
	ft_printf("#0477");
	ret2 = ft_printf("|%0#*.*j |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0478");
	ret1 = fprintf(fppres, "|%0#*.*z |\n", width, precision, var);
	ft_printf("#0478");
	ret2 = ft_printf("|%0#*.*z |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0479");
	ret1 = fprintf(fppres, "|%0#*.* |\n", width, precision, var);
	ft_printf("#0479");
	ret2 = ft_printf("|%0#*.* |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0480");
	ret1 = fprintf(fppres, "|%+#*.*d|\n", width, precision, var);
	ft_printf("#0480");
	ret2 = ft_printf("|%+#*.*d|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0481");
	ret1 = fprintf(fppres, "|%+#*.*hhd|\n", width, precision, var);
	ft_printf("#0481");
	ret2 = ft_printf("|%+#*.*hhd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0482");
	ret1 = fprintf(fppres, "|%+#*.*hd|\n", width, precision, var);
	ft_printf("#0482");
	ret2 = ft_printf("|%+#*.*hd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0483");
	ret1 = fprintf(fppres, "|%+#*.*ld|\n", width, precision, var);
	ft_printf("#0483");
	ret2 = ft_printf("|%+#*.*ld|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0484");
	ret1 = fprintf(fppres, "|%+#*.*lld|\n", width, precision, var);
	ft_printf("#0484");
	ret2 = ft_printf("|%+#*.*lld|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0485");
	ret1 = fprintf(fppres, "|%+#*.*jd|\n", width, precision, var);
	ft_printf("#0485");
	ret2 = ft_printf("|%+#*.*jd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0486");
	ret1 = fprintf(fppres, "|%+#*.*zd|\n", width, precision, var);
	ft_printf("#0486");
	ret2 = ft_printf("|%+#*.*zd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0487");
	ret1 = fprintf(fppres, "|%+#*.*d|\n", width, precision, var);
	ft_printf("#0487");
	ret2 = ft_printf("|%+#*.*d|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0488");
	ret1 = fprintf(fppres, "|%+#*.*i|\n", width, precision, var);
	ft_printf("#0488");
	ret2 = ft_printf("|%+#*.*i|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0489");
	ret1 = fprintf(fppres, "|%+#*.*hhi|\n", width, precision, var);
	ft_printf("#0489");
	ret2 = ft_printf("|%+#*.*hhi|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0490");
	ret1 = fprintf(fppres, "|%+#*.*hi|\n", width, precision, var);
	ft_printf("#0490");
	ret2 = ft_printf("|%+#*.*hi|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0491");
	ret1 = fprintf(fppres, "|%+#*.*li|\n", width, precision, var);
	ft_printf("#0491");
	ret2 = ft_printf("|%+#*.*li|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0492");
	ret1 = fprintf(fppres, "|%+#*.*lli|\n", width, precision, var);
	ft_printf("#0492");
	ret2 = ft_printf("|%+#*.*lli|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0493");
	ret1 = fprintf(fppres, "|%+#*.*ji|\n", width, precision, var);
	ft_printf("#0493");
	ret2 = ft_printf("|%+#*.*ji|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0494");
	ret1 = fprintf(fppres, "|%+#*.*zi|\n", width, precision, var);
	ft_printf("#0494");
	ret2 = ft_printf("|%+#*.*zi|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0495");
	ret1 = fprintf(fppres, "|%+#*.*i|\n", width, precision, var);
	ft_printf("#0495");
	ret2 = ft_printf("|%+#*.*i|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0496");
	ret1 = fprintf(fppres, "|%+#*.*u|\n", width, precision, var);
	ft_printf("#0496");
	ret2 = ft_printf("|%+#*.*u|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0497");
	ret1 = fprintf(fppres, "|%+#*.*hhu|\n", width, precision, var);
	ft_printf("#0497");
	ret2 = ft_printf("|%+#*.*hhu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0498");
	ret1 = fprintf(fppres, "|%+#*.*hu|\n", width, precision, var);
	ft_printf("#0498");
	ret2 = ft_printf("|%+#*.*hu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0499");
	ret1 = fprintf(fppres, "|%+#*.*lu|\n", width, precision, var);
	ft_printf("#0499");
	ret2 = ft_printf("|%+#*.*lu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0500");
	ret1 = fprintf(fppres, "|%+#*.*llu|\n", width, precision, var);
	ft_printf("#0500");
	ret2 = ft_printf("|%+#*.*llu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0501");
	ret1 = fprintf(fppres, "|%+#*.*ju|\n", width, precision, var);
	ft_printf("#0501");
	ret2 = ft_printf("|%+#*.*ju|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0502");
	ret1 = fprintf(fppres, "|%+#*.*zu|\n", width, precision, var);
	ft_printf("#0502");
	ret2 = ft_printf("|%+#*.*zu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0503");
	ret1 = fprintf(fppres, "|%+#*.*u|\n", width, precision, var);
	ft_printf("#0503");
	ret2 = ft_printf("|%+#*.*u|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0504");
	ret1 = fprintf(fppres, "|%+#*.*f|\n", width, precision, var);
	ft_printf("#0504");
	ret2 = ft_printf("|%+#*.*f|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0505");
	ret1 = fprintf(fppres, "|%+#*.*hhf|\n", width, precision, var);
	ft_printf("#0505");
	ret2 = ft_printf("|%+#*.*hhf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0506");
	ret1 = fprintf(fppres, "|%+#*.*hf|\n", width, precision, var);
	ft_printf("#0506");
	ret2 = ft_printf("|%+#*.*hf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0507");
	ret1 = fprintf(fppres, "|%+#*.*lf|\n", width, precision, var);
	ft_printf("#0507");
	ret2 = ft_printf("|%+#*.*lf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0508");
	ret1 = fprintf(fppres, "|%+#*.*llf|\n", width, precision, var);
	ft_printf("#0508");
	ret2 = ft_printf("|%+#*.*llf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0509");
	ret1 = fprintf(fppres, "|%+#*.*jf|\n", width, precision, var);
	ft_printf("#0509");
	ret2 = ft_printf("|%+#*.*jf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0510");
	ret1 = fprintf(fppres, "|%+#*.*zf|\n", width, precision, var);
	ft_printf("#0510");
	ret2 = ft_printf("|%+#*.*zf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0511");
	ret1 = fprintf(fppres, "|%+#*.*f|\n", width, precision, var);
	ft_printf("#0511");
	ret2 = ft_printf("|%+#*.*f|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0512");
	ret1 = fprintf(fppres, "|%+#*.*F|\n", width, precision, var);
	ft_printf("#0512");
	ret2 = ft_printf("|%+#*.*F|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0513");
	ret1 = fprintf(fppres, "|%+#*.*hhF|\n", width, precision, var);
	ft_printf("#0513");
	ret2 = ft_printf("|%+#*.*hhF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0514");
	ret1 = fprintf(fppres, "|%+#*.*hF|\n", width, precision, var);
	ft_printf("#0514");
	ret2 = ft_printf("|%+#*.*hF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0515");
	ret1 = fprintf(fppres, "|%+#*.*lF|\n", width, precision, var);
	ft_printf("#0515");
	ret2 = ft_printf("|%+#*.*lF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0516");
	ret1 = fprintf(fppres, "|%+#*.*llF|\n", width, precision, var);
	ft_printf("#0516");
	ret2 = ft_printf("|%+#*.*llF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0517");
	ret1 = fprintf(fppres, "|%+#*.*jF|\n", width, precision, var);
	ft_printf("#0517");
	ret2 = ft_printf("|%+#*.*jF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0518");
	ret1 = fprintf(fppres, "|%+#*.*zF|\n", width, precision, var);
	ft_printf("#0518");
	ret2 = ft_printf("|%+#*.*zF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0519");
	ret1 = fprintf(fppres, "|%+#*.*F|\n", width, precision, var);
	ft_printf("#0519");
	ret2 = ft_printf("|%+#*.*F|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0520");
	ret1 = fprintf(fppres, "|%+#*.* |\n", width, precision, var);
	ft_printf("#0520");
	ret2 = ft_printf("|%+#*.* |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0521");
	ret1 = fprintf(fppres, "|%+#*.*hh |\n", width, precision, var);
	ft_printf("#0521");
	ret2 = ft_printf("|%+#*.*hh |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0522");
	ret1 = fprintf(fppres, "|%+#*.*h |\n", width, precision, var);
	ft_printf("#0522");
	ret2 = ft_printf("|%+#*.*h |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0523");
	ret1 = fprintf(fppres, "|%+#*.*l |\n", width, precision, var);
	ft_printf("#0523");
	ret2 = ft_printf("|%+#*.*l |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0524");
	ret1 = fprintf(fppres, "|%+#*.*ll |\n", width, precision, var);
	ft_printf("#0524");
	ret2 = ft_printf("|%+#*.*ll |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0525");
	ret1 = fprintf(fppres, "|%+#*.*j |\n", width, precision, var);
	ft_printf("#0525");
	ret2 = ft_printf("|%+#*.*j |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0526");
	ret1 = fprintf(fppres, "|%+#*.*z |\n", width, precision, var);
	ft_printf("#0526");
	ret2 = ft_printf("|%+#*.*z |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0527");
	ret1 = fprintf(fppres, "|%+#*.* |\n", width, precision, var);
	ft_printf("#0527");
	ret2 = ft_printf("|%+#*.* |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0528");
	ret1 = fprintf(fppres, "|%0+#*.*d|\n", width, precision, var);
	ft_printf("#0528");
	ret2 = ft_printf("|%0+#*.*d|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0529");
	ret1 = fprintf(fppres, "|%0+#*.*hhd|\n", width, precision, var);
	ft_printf("#0529");
	ret2 = ft_printf("|%0+#*.*hhd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0530");
	ret1 = fprintf(fppres, "|%0+#*.*hd|\n", width, precision, var);
	ft_printf("#0530");
	ret2 = ft_printf("|%0+#*.*hd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0531");
	ret1 = fprintf(fppres, "|%0+#*.*ld|\n", width, precision, var);
	ft_printf("#0531");
	ret2 = ft_printf("|%0+#*.*ld|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0532");
	ret1 = fprintf(fppres, "|%0+#*.*lld|\n", width, precision, var);
	ft_printf("#0532");
	ret2 = ft_printf("|%0+#*.*lld|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0533");
	ret1 = fprintf(fppres, "|%0+#*.*jd|\n", width, precision, var);
	ft_printf("#0533");
	ret2 = ft_printf("|%0+#*.*jd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0534");
	ret1 = fprintf(fppres, "|%0+#*.*zd|\n", width, precision, var);
	ft_printf("#0534");
	ret2 = ft_printf("|%0+#*.*zd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0535");
	ret1 = fprintf(fppres, "|%0+#*.*d|\n", width, precision, var);
	ft_printf("#0535");
	ret2 = ft_printf("|%0+#*.*d|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0536");
	ret1 = fprintf(fppres, "|%0+#*.*i|\n", width, precision, var);
	ft_printf("#0536");
	ret2 = ft_printf("|%0+#*.*i|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0537");
	ret1 = fprintf(fppres, "|%0+#*.*hhi|\n", width, precision, var);
	ft_printf("#0537");
	ret2 = ft_printf("|%0+#*.*hhi|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0538");
	ret1 = fprintf(fppres, "|%0+#*.*hi|\n", width, precision, var);
	ft_printf("#0538");
	ret2 = ft_printf("|%0+#*.*hi|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0539");
	ret1 = fprintf(fppres, "|%0+#*.*li|\n", width, precision, var);
	ft_printf("#0539");
	ret2 = ft_printf("|%0+#*.*li|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0540");
	ret1 = fprintf(fppres, "|%0+#*.*lli|\n", width, precision, var);
	ft_printf("#0540");
	ret2 = ft_printf("|%0+#*.*lli|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0541");
	ret1 = fprintf(fppres, "|%0+#*.*ji|\n", width, precision, var);
	ft_printf("#0541");
	ret2 = ft_printf("|%0+#*.*ji|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0542");
	ret1 = fprintf(fppres, "|%0+#*.*zi|\n", width, precision, var);
	ft_printf("#0542");
	ret2 = ft_printf("|%0+#*.*zi|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0543");
	ret1 = fprintf(fppres, "|%0+#*.*i|\n", width, precision, var);
	ft_printf("#0543");
	ret2 = ft_printf("|%0+#*.*i|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0544");
	ret1 = fprintf(fppres, "|%0+#*.*u|\n", width, precision, var);
	ft_printf("#0544");
	ret2 = ft_printf("|%0+#*.*u|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0545");
	ret1 = fprintf(fppres, "|%0+#*.*hhu|\n", width, precision, var);
	ft_printf("#0545");
	ret2 = ft_printf("|%0+#*.*hhu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0546");
	ret1 = fprintf(fppres, "|%0+#*.*hu|\n", width, precision, var);
	ft_printf("#0546");
	ret2 = ft_printf("|%0+#*.*hu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0547");
	ret1 = fprintf(fppres, "|%0+#*.*lu|\n", width, precision, var);
	ft_printf("#0547");
	ret2 = ft_printf("|%0+#*.*lu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0548");
	ret1 = fprintf(fppres, "|%0+#*.*llu|\n", width, precision, var);
	ft_printf("#0548");
	ret2 = ft_printf("|%0+#*.*llu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0549");
	ret1 = fprintf(fppres, "|%0+#*.*ju|\n", width, precision, var);
	ft_printf("#0549");
	ret2 = ft_printf("|%0+#*.*ju|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0550");
	ret1 = fprintf(fppres, "|%0+#*.*zu|\n", width, precision, var);
	ft_printf("#0550");
	ret2 = ft_printf("|%0+#*.*zu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0551");
	ret1 = fprintf(fppres, "|%0+#*.*u|\n", width, precision, var);
	ft_printf("#0551");
	ret2 = ft_printf("|%0+#*.*u|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0552");
	ret1 = fprintf(fppres, "|%0+#*.*f|\n", width, precision, var);
	ft_printf("#0552");
	ret2 = ft_printf("|%0+#*.*f|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0553");
	ret1 = fprintf(fppres, "|%0+#*.*hhf|\n", width, precision, var);
	ft_printf("#0553");
	ret2 = ft_printf("|%0+#*.*hhf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0554");
	ret1 = fprintf(fppres, "|%0+#*.*hf|\n", width, precision, var);
	ft_printf("#0554");
	ret2 = ft_printf("|%0+#*.*hf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0555");
	ret1 = fprintf(fppres, "|%0+#*.*lf|\n", width, precision, var);
	ft_printf("#0555");
	ret2 = ft_printf("|%0+#*.*lf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0556");
	ret1 = fprintf(fppres, "|%0+#*.*llf|\n", width, precision, var);
	ft_printf("#0556");
	ret2 = ft_printf("|%0+#*.*llf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0557");
	ret1 = fprintf(fppres, "|%0+#*.*jf|\n", width, precision, var);
	ft_printf("#0557");
	ret2 = ft_printf("|%0+#*.*jf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0558");
	ret1 = fprintf(fppres, "|%0+#*.*zf|\n", width, precision, var);
	ft_printf("#0558");
	ret2 = ft_printf("|%0+#*.*zf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0559");
	ret1 = fprintf(fppres, "|%0+#*.*f|\n", width, precision, var);
	ft_printf("#0559");
	ret2 = ft_printf("|%0+#*.*f|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0560");
	ret1 = fprintf(fppres, "|%0+#*.*F|\n", width, precision, var);
	ft_printf("#0560");
	ret2 = ft_printf("|%0+#*.*F|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0561");
	ret1 = fprintf(fppres, "|%0+#*.*hhF|\n", width, precision, var);
	ft_printf("#0561");
	ret2 = ft_printf("|%0+#*.*hhF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0562");
	ret1 = fprintf(fppres, "|%0+#*.*hF|\n", width, precision, var);
	ft_printf("#0562");
	ret2 = ft_printf("|%0+#*.*hF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0563");
	ret1 = fprintf(fppres, "|%0+#*.*lF|\n", width, precision, var);
	ft_printf("#0563");
	ret2 = ft_printf("|%0+#*.*lF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0564");
	ret1 = fprintf(fppres, "|%0+#*.*llF|\n", width, precision, var);
	ft_printf("#0564");
	ret2 = ft_printf("|%0+#*.*llF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0565");
	ret1 = fprintf(fppres, "|%0+#*.*jF|\n", width, precision, var);
	ft_printf("#0565");
	ret2 = ft_printf("|%0+#*.*jF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0566");
	ret1 = fprintf(fppres, "|%0+#*.*zF|\n", width, precision, var);
	ft_printf("#0566");
	ret2 = ft_printf("|%0+#*.*zF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0567");
	ret1 = fprintf(fppres, "|%0+#*.*F|\n", width, precision, var);
	ft_printf("#0567");
	ret2 = ft_printf("|%0+#*.*F|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0568");
	ret1 = fprintf(fppres, "|%0+#*.* |\n", width, precision, var);
	ft_printf("#0568");
	ret2 = ft_printf("|%0+#*.* |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0569");
	ret1 = fprintf(fppres, "|%0+#*.*hh |\n", width, precision, var);
	ft_printf("#0569");
	ret2 = ft_printf("|%0+#*.*hh |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0570");
	ret1 = fprintf(fppres, "|%0+#*.*h |\n", width, precision, var);
	ft_printf("#0570");
	ret2 = ft_printf("|%0+#*.*h |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0571");
	ret1 = fprintf(fppres, "|%0+#*.*l |\n", width, precision, var);
	ft_printf("#0571");
	ret2 = ft_printf("|%0+#*.*l |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0572");
	ret1 = fprintf(fppres, "|%0+#*.*ll |\n", width, precision, var);
	ft_printf("#0572");
	ret2 = ft_printf("|%0+#*.*ll |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0573");
	ret1 = fprintf(fppres, "|%0+#*.*j |\n", width, precision, var);
	ft_printf("#0573");
	ret2 = ft_printf("|%0+#*.*j |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0574");
	ret1 = fprintf(fppres, "|%0+#*.*z |\n", width, precision, var);
	ft_printf("#0574");
	ret2 = ft_printf("|%0+#*.*z |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0575");
	ret1 = fprintf(fppres, "|%0+#*.* |\n", width, precision, var);
	ft_printf("#0575");
	ret2 = ft_printf("|%0+#*.* |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0576");
	ret1 = fprintf(fppres, "|%-#*.*d|\n", width, precision, var);
	ft_printf("#0576");
	ret2 = ft_printf("|%-#*.*d|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0577");
	ret1 = fprintf(fppres, "|%-#*.*hhd|\n", width, precision, var);
	ft_printf("#0577");
	ret2 = ft_printf("|%-#*.*hhd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0578");
	ret1 = fprintf(fppres, "|%-#*.*hd|\n", width, precision, var);
	ft_printf("#0578");
	ret2 = ft_printf("|%-#*.*hd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0579");
	ret1 = fprintf(fppres, "|%-#*.*ld|\n", width, precision, var);
	ft_printf("#0579");
	ret2 = ft_printf("|%-#*.*ld|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0580");
	ret1 = fprintf(fppres, "|%-#*.*lld|\n", width, precision, var);
	ft_printf("#0580");
	ret2 = ft_printf("|%-#*.*lld|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0581");
	ret1 = fprintf(fppres, "|%-#*.*jd|\n", width, precision, var);
	ft_printf("#0581");
	ret2 = ft_printf("|%-#*.*jd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0582");
	ret1 = fprintf(fppres, "|%-#*.*zd|\n", width, precision, var);
	ft_printf("#0582");
	ret2 = ft_printf("|%-#*.*zd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0583");
	ret1 = fprintf(fppres, "|%-#*.*d|\n", width, precision, var);
	ft_printf("#0583");
	ret2 = ft_printf("|%-#*.*d|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0584");
	ret1 = fprintf(fppres, "|%-#*.*i|\n", width, precision, var);
	ft_printf("#0584");
	ret2 = ft_printf("|%-#*.*i|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0585");
	ret1 = fprintf(fppres, "|%-#*.*hhi|\n", width, precision, var);
	ft_printf("#0585");
	ret2 = ft_printf("|%-#*.*hhi|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0586");
	ret1 = fprintf(fppres, "|%-#*.*hi|\n", width, precision, var);
	ft_printf("#0586");
	ret2 = ft_printf("|%-#*.*hi|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0587");
	ret1 = fprintf(fppres, "|%-#*.*li|\n", width, precision, var);
	ft_printf("#0587");
	ret2 = ft_printf("|%-#*.*li|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0588");
	ret1 = fprintf(fppres, "|%-#*.*lli|\n", width, precision, var);
	ft_printf("#0588");
	ret2 = ft_printf("|%-#*.*lli|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0589");
	ret1 = fprintf(fppres, "|%-#*.*ji|\n", width, precision, var);
	ft_printf("#0589");
	ret2 = ft_printf("|%-#*.*ji|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0590");
	ret1 = fprintf(fppres, "|%-#*.*zi|\n", width, precision, var);
	ft_printf("#0590");
	ret2 = ft_printf("|%-#*.*zi|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0591");
	ret1 = fprintf(fppres, "|%-#*.*i|\n", width, precision, var);
	ft_printf("#0591");
	ret2 = ft_printf("|%-#*.*i|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0592");
	ret1 = fprintf(fppres, "|%-#*.*u|\n", width, precision, var);
	ft_printf("#0592");
	ret2 = ft_printf("|%-#*.*u|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0593");
	ret1 = fprintf(fppres, "|%-#*.*hhu|\n", width, precision, var);
	ft_printf("#0593");
	ret2 = ft_printf("|%-#*.*hhu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0594");
	ret1 = fprintf(fppres, "|%-#*.*hu|\n", width, precision, var);
	ft_printf("#0594");
	ret2 = ft_printf("|%-#*.*hu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0595");
	ret1 = fprintf(fppres, "|%-#*.*lu|\n", width, precision, var);
	ft_printf("#0595");
	ret2 = ft_printf("|%-#*.*lu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0596");
	ret1 = fprintf(fppres, "|%-#*.*llu|\n", width, precision, var);
	ft_printf("#0596");
	ret2 = ft_printf("|%-#*.*llu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0597");
	ret1 = fprintf(fppres, "|%-#*.*ju|\n", width, precision, var);
	ft_printf("#0597");
	ret2 = ft_printf("|%-#*.*ju|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0598");
	ret1 = fprintf(fppres, "|%-#*.*zu|\n", width, precision, var);
	ft_printf("#0598");
	ret2 = ft_printf("|%-#*.*zu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0599");
	ret1 = fprintf(fppres, "|%-#*.*u|\n", width, precision, var);
	ft_printf("#0599");
	ret2 = ft_printf("|%-#*.*u|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0600");
	ret1 = fprintf(fppres, "|%-#*.*f|\n", width, precision, var);
	ft_printf("#0600");
	ret2 = ft_printf("|%-#*.*f|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0601");
	ret1 = fprintf(fppres, "|%-#*.*hhf|\n", width, precision, var);
	ft_printf("#0601");
	ret2 = ft_printf("|%-#*.*hhf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0602");
	ret1 = fprintf(fppres, "|%-#*.*hf|\n", width, precision, var);
	ft_printf("#0602");
	ret2 = ft_printf("|%-#*.*hf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0603");
	ret1 = fprintf(fppres, "|%-#*.*lf|\n", width, precision, var);
	ft_printf("#0603");
	ret2 = ft_printf("|%-#*.*lf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0604");
	ret1 = fprintf(fppres, "|%-#*.*llf|\n", width, precision, var);
	ft_printf("#0604");
	ret2 = ft_printf("|%-#*.*llf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0605");
	ret1 = fprintf(fppres, "|%-#*.*jf|\n", width, precision, var);
	ft_printf("#0605");
	ret2 = ft_printf("|%-#*.*jf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0606");
	ret1 = fprintf(fppres, "|%-#*.*zf|\n", width, precision, var);
	ft_printf("#0606");
	ret2 = ft_printf("|%-#*.*zf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0607");
	ret1 = fprintf(fppres, "|%-#*.*f|\n", width, precision, var);
	ft_printf("#0607");
	ret2 = ft_printf("|%-#*.*f|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0608");
	ret1 = fprintf(fppres, "|%-#*.*F|\n", width, precision, var);
	ft_printf("#0608");
	ret2 = ft_printf("|%-#*.*F|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0609");
	ret1 = fprintf(fppres, "|%-#*.*hhF|\n", width, precision, var);
	ft_printf("#0609");
	ret2 = ft_printf("|%-#*.*hhF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0610");
	ret1 = fprintf(fppres, "|%-#*.*hF|\n", width, precision, var);
	ft_printf("#0610");
	ret2 = ft_printf("|%-#*.*hF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0611");
	ret1 = fprintf(fppres, "|%-#*.*lF|\n", width, precision, var);
	ft_printf("#0611");
	ret2 = ft_printf("|%-#*.*lF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0612");
	ret1 = fprintf(fppres, "|%-#*.*llF|\n", width, precision, var);
	ft_printf("#0612");
	ret2 = ft_printf("|%-#*.*llF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0613");
	ret1 = fprintf(fppres, "|%-#*.*jF|\n", width, precision, var);
	ft_printf("#0613");
	ret2 = ft_printf("|%-#*.*jF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0614");
	ret1 = fprintf(fppres, "|%-#*.*zF|\n", width, precision, var);
	ft_printf("#0614");
	ret2 = ft_printf("|%-#*.*zF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0615");
	ret1 = fprintf(fppres, "|%-#*.*F|\n", width, precision, var);
	ft_printf("#0615");
	ret2 = ft_printf("|%-#*.*F|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0616");
	ret1 = fprintf(fppres, "|%-#*.* |\n", width, precision, var);
	ft_printf("#0616");
	ret2 = ft_printf("|%-#*.* |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0617");
	ret1 = fprintf(fppres, "|%-#*.*hh |\n", width, precision, var);
	ft_printf("#0617");
	ret2 = ft_printf("|%-#*.*hh |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0618");
	ret1 = fprintf(fppres, "|%-#*.*h |\n", width, precision, var);
	ft_printf("#0618");
	ret2 = ft_printf("|%-#*.*h |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0619");
	ret1 = fprintf(fppres, "|%-#*.*l |\n", width, precision, var);
	ft_printf("#0619");
	ret2 = ft_printf("|%-#*.*l |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0620");
	ret1 = fprintf(fppres, "|%-#*.*ll |\n", width, precision, var);
	ft_printf("#0620");
	ret2 = ft_printf("|%-#*.*ll |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0621");
	ret1 = fprintf(fppres, "|%-#*.*j |\n", width, precision, var);
	ft_printf("#0621");
	ret2 = ft_printf("|%-#*.*j |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0622");
	ret1 = fprintf(fppres, "|%-#*.*z |\n", width, precision, var);
	ft_printf("#0622");
	ret2 = ft_printf("|%-#*.*z |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0623");
	ret1 = fprintf(fppres, "|%-#*.* |\n", width, precision, var);
	ft_printf("#0623");
	ret2 = ft_printf("|%-#*.* |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0624");
	ret1 = fprintf(fppres, "|%0-#*.*d|\n", width, precision, var);
	ft_printf("#0624");
	ret2 = ft_printf("|%0-#*.*d|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0625");
	ret1 = fprintf(fppres, "|%0-#*.*hhd|\n", width, precision, var);
	ft_printf("#0625");
	ret2 = ft_printf("|%0-#*.*hhd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0626");
	ret1 = fprintf(fppres, "|%0-#*.*hd|\n", width, precision, var);
	ft_printf("#0626");
	ret2 = ft_printf("|%0-#*.*hd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0627");
	ret1 = fprintf(fppres, "|%0-#*.*ld|\n", width, precision, var);
	ft_printf("#0627");
	ret2 = ft_printf("|%0-#*.*ld|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0628");
	ret1 = fprintf(fppres, "|%0-#*.*lld|\n", width, precision, var);
	ft_printf("#0628");
	ret2 = ft_printf("|%0-#*.*lld|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0629");
	ret1 = fprintf(fppres, "|%0-#*.*jd|\n", width, precision, var);
	ft_printf("#0629");
	ret2 = ft_printf("|%0-#*.*jd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0630");
	ret1 = fprintf(fppres, "|%0-#*.*zd|\n", width, precision, var);
	ft_printf("#0630");
	ret2 = ft_printf("|%0-#*.*zd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0631");
	ret1 = fprintf(fppres, "|%0-#*.*d|\n", width, precision, var);
	ft_printf("#0631");
	ret2 = ft_printf("|%0-#*.*d|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0632");
	ret1 = fprintf(fppres, "|%0-#*.*i|\n", width, precision, var);
	ft_printf("#0632");
	ret2 = ft_printf("|%0-#*.*i|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0633");
	ret1 = fprintf(fppres, "|%0-#*.*hhi|\n", width, precision, var);
	ft_printf("#0633");
	ret2 = ft_printf("|%0-#*.*hhi|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0634");
	ret1 = fprintf(fppres, "|%0-#*.*hi|\n", width, precision, var);
	ft_printf("#0634");
	ret2 = ft_printf("|%0-#*.*hi|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0635");
	ret1 = fprintf(fppres, "|%0-#*.*li|\n", width, precision, var);
	ft_printf("#0635");
	ret2 = ft_printf("|%0-#*.*li|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0636");
	ret1 = fprintf(fppres, "|%0-#*.*lli|\n", width, precision, var);
	ft_printf("#0636");
	ret2 = ft_printf("|%0-#*.*lli|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0637");
	ret1 = fprintf(fppres, "|%0-#*.*ji|\n", width, precision, var);
	ft_printf("#0637");
	ret2 = ft_printf("|%0-#*.*ji|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0638");
	ret1 = fprintf(fppres, "|%0-#*.*zi|\n", width, precision, var);
	ft_printf("#0638");
	ret2 = ft_printf("|%0-#*.*zi|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0639");
	ret1 = fprintf(fppres, "|%0-#*.*i|\n", width, precision, var);
	ft_printf("#0639");
	ret2 = ft_printf("|%0-#*.*i|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0640");
	ret1 = fprintf(fppres, "|%0-#*.*u|\n", width, precision, var);
	ft_printf("#0640");
	ret2 = ft_printf("|%0-#*.*u|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0641");
	ret1 = fprintf(fppres, "|%0-#*.*hhu|\n", width, precision, var);
	ft_printf("#0641");
	ret2 = ft_printf("|%0-#*.*hhu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0642");
	ret1 = fprintf(fppres, "|%0-#*.*hu|\n", width, precision, var);
	ft_printf("#0642");
	ret2 = ft_printf("|%0-#*.*hu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0643");
	ret1 = fprintf(fppres, "|%0-#*.*lu|\n", width, precision, var);
	ft_printf("#0643");
	ret2 = ft_printf("|%0-#*.*lu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0644");
	ret1 = fprintf(fppres, "|%0-#*.*llu|\n", width, precision, var);
	ft_printf("#0644");
	ret2 = ft_printf("|%0-#*.*llu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0645");
	ret1 = fprintf(fppres, "|%0-#*.*ju|\n", width, precision, var);
	ft_printf("#0645");
	ret2 = ft_printf("|%0-#*.*ju|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0646");
	ret1 = fprintf(fppres, "|%0-#*.*zu|\n", width, precision, var);
	ft_printf("#0646");
	ret2 = ft_printf("|%0-#*.*zu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0647");
	ret1 = fprintf(fppres, "|%0-#*.*u|\n", width, precision, var);
	ft_printf("#0647");
	ret2 = ft_printf("|%0-#*.*u|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0648");
	ret1 = fprintf(fppres, "|%0-#*.*f|\n", width, precision, var);
	ft_printf("#0648");
	ret2 = ft_printf("|%0-#*.*f|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0649");
	ret1 = fprintf(fppres, "|%0-#*.*hhf|\n", width, precision, var);
	ft_printf("#0649");
	ret2 = ft_printf("|%0-#*.*hhf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0650");
	ret1 = fprintf(fppres, "|%0-#*.*hf|\n", width, precision, var);
	ft_printf("#0650");
	ret2 = ft_printf("|%0-#*.*hf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0651");
	ret1 = fprintf(fppres, "|%0-#*.*lf|\n", width, precision, var);
	ft_printf("#0651");
	ret2 = ft_printf("|%0-#*.*lf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0652");
	ret1 = fprintf(fppres, "|%0-#*.*llf|\n", width, precision, var);
	ft_printf("#0652");
	ret2 = ft_printf("|%0-#*.*llf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0653");
	ret1 = fprintf(fppres, "|%0-#*.*jf|\n", width, precision, var);
	ft_printf("#0653");
	ret2 = ft_printf("|%0-#*.*jf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0654");
	ret1 = fprintf(fppres, "|%0-#*.*zf|\n", width, precision, var);
	ft_printf("#0654");
	ret2 = ft_printf("|%0-#*.*zf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0655");
	ret1 = fprintf(fppres, "|%0-#*.*f|\n", width, precision, var);
	ft_printf("#0655");
	ret2 = ft_printf("|%0-#*.*f|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0656");
	ret1 = fprintf(fppres, "|%0-#*.*F|\n", width, precision, var);
	ft_printf("#0656");
	ret2 = ft_printf("|%0-#*.*F|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0657");
	ret1 = fprintf(fppres, "|%0-#*.*hhF|\n", width, precision, var);
	ft_printf("#0657");
	ret2 = ft_printf("|%0-#*.*hhF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0658");
	ret1 = fprintf(fppres, "|%0-#*.*hF|\n", width, precision, var);
	ft_printf("#0658");
	ret2 = ft_printf("|%0-#*.*hF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0659");
	ret1 = fprintf(fppres, "|%0-#*.*lF|\n", width, precision, var);
	ft_printf("#0659");
	ret2 = ft_printf("|%0-#*.*lF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0660");
	ret1 = fprintf(fppres, "|%0-#*.*llF|\n", width, precision, var);
	ft_printf("#0660");
	ret2 = ft_printf("|%0-#*.*llF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0661");
	ret1 = fprintf(fppres, "|%0-#*.*jF|\n", width, precision, var);
	ft_printf("#0661");
	ret2 = ft_printf("|%0-#*.*jF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0662");
	ret1 = fprintf(fppres, "|%0-#*.*zF|\n", width, precision, var);
	ft_printf("#0662");
	ret2 = ft_printf("|%0-#*.*zF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0663");
	ret1 = fprintf(fppres, "|%0-#*.*F|\n", width, precision, var);
	ft_printf("#0663");
	ret2 = ft_printf("|%0-#*.*F|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0664");
	ret1 = fprintf(fppres, "|%0-#*.* |\n", width, precision, var);
	ft_printf("#0664");
	ret2 = ft_printf("|%0-#*.* |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0665");
	ret1 = fprintf(fppres, "|%0-#*.*hh |\n", width, precision, var);
	ft_printf("#0665");
	ret2 = ft_printf("|%0-#*.*hh |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0666");
	ret1 = fprintf(fppres, "|%0-#*.*h |\n", width, precision, var);
	ft_printf("#0666");
	ret2 = ft_printf("|%0-#*.*h |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0667");
	ret1 = fprintf(fppres, "|%0-#*.*l |\n", width, precision, var);
	ft_printf("#0667");
	ret2 = ft_printf("|%0-#*.*l |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0668");
	ret1 = fprintf(fppres, "|%0-#*.*ll |\n", width, precision, var);
	ft_printf("#0668");
	ret2 = ft_printf("|%0-#*.*ll |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0669");
	ret1 = fprintf(fppres, "|%0-#*.*j |\n", width, precision, var);
	ft_printf("#0669");
	ret2 = ft_printf("|%0-#*.*j |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0670");
	ret1 = fprintf(fppres, "|%0-#*.*z |\n", width, precision, var);
	ft_printf("#0670");
	ret2 = ft_printf("|%0-#*.*z |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0671");
	ret1 = fprintf(fppres, "|%0-#*.* |\n", width, precision, var);
	ft_printf("#0671");
	ret2 = ft_printf("|%0-#*.* |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0672");
	ret1 = fprintf(fppres, "|%+-#*.*d|\n", width, precision, var);
	ft_printf("#0672");
	ret2 = ft_printf("|%+-#*.*d|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0673");
	ret1 = fprintf(fppres, "|%+-#*.*hhd|\n", width, precision, var);
	ft_printf("#0673");
	ret2 = ft_printf("|%+-#*.*hhd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0674");
	ret1 = fprintf(fppres, "|%+-#*.*hd|\n", width, precision, var);
	ft_printf("#0674");
	ret2 = ft_printf("|%+-#*.*hd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0675");
	ret1 = fprintf(fppres, "|%+-#*.*ld|\n", width, precision, var);
	ft_printf("#0675");
	ret2 = ft_printf("|%+-#*.*ld|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0676");
	ret1 = fprintf(fppres, "|%+-#*.*lld|\n", width, precision, var);
	ft_printf("#0676");
	ret2 = ft_printf("|%+-#*.*lld|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0677");
	ret1 = fprintf(fppres, "|%+-#*.*jd|\n", width, precision, var);
	ft_printf("#0677");
	ret2 = ft_printf("|%+-#*.*jd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0678");
	ret1 = fprintf(fppres, "|%+-#*.*zd|\n", width, precision, var);
	ft_printf("#0678");
	ret2 = ft_printf("|%+-#*.*zd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0679");
	ret1 = fprintf(fppres, "|%+-#*.*d|\n", width, precision, var);
	ft_printf("#0679");
	ret2 = ft_printf("|%+-#*.*d|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0680");
	ret1 = fprintf(fppres, "|%+-#*.*i|\n", width, precision, var);
	ft_printf("#0680");
	ret2 = ft_printf("|%+-#*.*i|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0681");
	ret1 = fprintf(fppres, "|%+-#*.*hhi|\n", width, precision, var);
	ft_printf("#0681");
	ret2 = ft_printf("|%+-#*.*hhi|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0682");
	ret1 = fprintf(fppres, "|%+-#*.*hi|\n", width, precision, var);
	ft_printf("#0682");
	ret2 = ft_printf("|%+-#*.*hi|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0683");
	ret1 = fprintf(fppres, "|%+-#*.*li|\n", width, precision, var);
	ft_printf("#0683");
	ret2 = ft_printf("|%+-#*.*li|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0684");
	ret1 = fprintf(fppres, "|%+-#*.*lli|\n", width, precision, var);
	ft_printf("#0684");
	ret2 = ft_printf("|%+-#*.*lli|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0685");
	ret1 = fprintf(fppres, "|%+-#*.*ji|\n", width, precision, var);
	ft_printf("#0685");
	ret2 = ft_printf("|%+-#*.*ji|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0686");
	ret1 = fprintf(fppres, "|%+-#*.*zi|\n", width, precision, var);
	ft_printf("#0686");
	ret2 = ft_printf("|%+-#*.*zi|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0687");
	ret1 = fprintf(fppres, "|%+-#*.*i|\n", width, precision, var);
	ft_printf("#0687");
	ret2 = ft_printf("|%+-#*.*i|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0688");
	ret1 = fprintf(fppres, "|%+-#*.*u|\n", width, precision, var);
	ft_printf("#0688");
	ret2 = ft_printf("|%+-#*.*u|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0689");
	ret1 = fprintf(fppres, "|%+-#*.*hhu|\n", width, precision, var);
	ft_printf("#0689");
	ret2 = ft_printf("|%+-#*.*hhu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0690");
	ret1 = fprintf(fppres, "|%+-#*.*hu|\n", width, precision, var);
	ft_printf("#0690");
	ret2 = ft_printf("|%+-#*.*hu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0691");
	ret1 = fprintf(fppres, "|%+-#*.*lu|\n", width, precision, var);
	ft_printf("#0691");
	ret2 = ft_printf("|%+-#*.*lu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0692");
	ret1 = fprintf(fppres, "|%+-#*.*llu|\n", width, precision, var);
	ft_printf("#0692");
	ret2 = ft_printf("|%+-#*.*llu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0693");
	ret1 = fprintf(fppres, "|%+-#*.*ju|\n", width, precision, var);
	ft_printf("#0693");
	ret2 = ft_printf("|%+-#*.*ju|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0694");
	ret1 = fprintf(fppres, "|%+-#*.*zu|\n", width, precision, var);
	ft_printf("#0694");
	ret2 = ft_printf("|%+-#*.*zu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0695");
	ret1 = fprintf(fppres, "|%+-#*.*u|\n", width, precision, var);
	ft_printf("#0695");
	ret2 = ft_printf("|%+-#*.*u|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0696");
	ret1 = fprintf(fppres, "|%+-#*.*f|\n", width, precision, var);
	ft_printf("#0696");
	ret2 = ft_printf("|%+-#*.*f|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0697");
	ret1 = fprintf(fppres, "|%+-#*.*hhf|\n", width, precision, var);
	ft_printf("#0697");
	ret2 = ft_printf("|%+-#*.*hhf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0698");
	ret1 = fprintf(fppres, "|%+-#*.*hf|\n", width, precision, var);
	ft_printf("#0698");
	ret2 = ft_printf("|%+-#*.*hf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0699");
	ret1 = fprintf(fppres, "|%+-#*.*lf|\n", width, precision, var);
	ft_printf("#0699");
	ret2 = ft_printf("|%+-#*.*lf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0700");
	ret1 = fprintf(fppres, "|%+-#*.*llf|\n", width, precision, var);
	ft_printf("#0700");
	ret2 = ft_printf("|%+-#*.*llf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0701");
	ret1 = fprintf(fppres, "|%+-#*.*jf|\n", width, precision, var);
	ft_printf("#0701");
	ret2 = ft_printf("|%+-#*.*jf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0702");
	ret1 = fprintf(fppres, "|%+-#*.*zf|\n", width, precision, var);
	ft_printf("#0702");
	ret2 = ft_printf("|%+-#*.*zf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0703");
	ret1 = fprintf(fppres, "|%+-#*.*f|\n", width, precision, var);
	ft_printf("#0703");
	ret2 = ft_printf("|%+-#*.*f|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0704");
	ret1 = fprintf(fppres, "|%+-#*.*F|\n", width, precision, var);
	ft_printf("#0704");
	ret2 = ft_printf("|%+-#*.*F|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0705");
	ret1 = fprintf(fppres, "|%+-#*.*hhF|\n", width, precision, var);
	ft_printf("#0705");
	ret2 = ft_printf("|%+-#*.*hhF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0706");
	ret1 = fprintf(fppres, "|%+-#*.*hF|\n", width, precision, var);
	ft_printf("#0706");
	ret2 = ft_printf("|%+-#*.*hF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0707");
	ret1 = fprintf(fppres, "|%+-#*.*lF|\n", width, precision, var);
	ft_printf("#0707");
	ret2 = ft_printf("|%+-#*.*lF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0708");
	ret1 = fprintf(fppres, "|%+-#*.*llF|\n", width, precision, var);
	ft_printf("#0708");
	ret2 = ft_printf("|%+-#*.*llF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0709");
	ret1 = fprintf(fppres, "|%+-#*.*jF|\n", width, precision, var);
	ft_printf("#0709");
	ret2 = ft_printf("|%+-#*.*jF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0710");
	ret1 = fprintf(fppres, "|%+-#*.*zF|\n", width, precision, var);
	ft_printf("#0710");
	ret2 = ft_printf("|%+-#*.*zF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0711");
	ret1 = fprintf(fppres, "|%+-#*.*F|\n", width, precision, var);
	ft_printf("#0711");
	ret2 = ft_printf("|%+-#*.*F|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0712");
	ret1 = fprintf(fppres, "|%+-#*.* |\n", width, precision, var);
	ft_printf("#0712");
	ret2 = ft_printf("|%+-#*.* |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0713");
	ret1 = fprintf(fppres, "|%+-#*.*hh |\n", width, precision, var);
	ft_printf("#0713");
	ret2 = ft_printf("|%+-#*.*hh |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0714");
	ret1 = fprintf(fppres, "|%+-#*.*h |\n", width, precision, var);
	ft_printf("#0714");
	ret2 = ft_printf("|%+-#*.*h |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0715");
	ret1 = fprintf(fppres, "|%+-#*.*l |\n", width, precision, var);
	ft_printf("#0715");
	ret2 = ft_printf("|%+-#*.*l |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0716");
	ret1 = fprintf(fppres, "|%+-#*.*ll |\n", width, precision, var);
	ft_printf("#0716");
	ret2 = ft_printf("|%+-#*.*ll |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0717");
	ret1 = fprintf(fppres, "|%+-#*.*j |\n", width, precision, var);
	ft_printf("#0717");
	ret2 = ft_printf("|%+-#*.*j |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0718");
	ret1 = fprintf(fppres, "|%+-#*.*z |\n", width, precision, var);
	ft_printf("#0718");
	ret2 = ft_printf("|%+-#*.*z |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0719");
	ret1 = fprintf(fppres, "|%+-#*.* |\n", width, precision, var);
	ft_printf("#0719");
	ret2 = ft_printf("|%+-#*.* |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0720");
	ret1 = fprintf(fppres, "|%0+-#*.*d|\n", width, precision, var);
	ft_printf("#0720");
	ret2 = ft_printf("|%0+-#*.*d|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0721");
	ret1 = fprintf(fppres, "|%0+-#*.*hhd|\n", width, precision, var);
	ft_printf("#0721");
	ret2 = ft_printf("|%0+-#*.*hhd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0722");
	ret1 = fprintf(fppres, "|%0+-#*.*hd|\n", width, precision, var);
	ft_printf("#0722");
	ret2 = ft_printf("|%0+-#*.*hd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0723");
	ret1 = fprintf(fppres, "|%0+-#*.*ld|\n", width, precision, var);
	ft_printf("#0723");
	ret2 = ft_printf("|%0+-#*.*ld|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0724");
	ret1 = fprintf(fppres, "|%0+-#*.*lld|\n", width, precision, var);
	ft_printf("#0724");
	ret2 = ft_printf("|%0+-#*.*lld|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0725");
	ret1 = fprintf(fppres, "|%0+-#*.*jd|\n", width, precision, var);
	ft_printf("#0725");
	ret2 = ft_printf("|%0+-#*.*jd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0726");
	ret1 = fprintf(fppres, "|%0+-#*.*zd|\n", width, precision, var);
	ft_printf("#0726");
	ret2 = ft_printf("|%0+-#*.*zd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0727");
	ret1 = fprintf(fppres, "|%0+-#*.*d|\n", width, precision, var);
	ft_printf("#0727");
	ret2 = ft_printf("|%0+-#*.*d|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0728");
	ret1 = fprintf(fppres, "|%0+-#*.*i|\n", width, precision, var);
	ft_printf("#0728");
	ret2 = ft_printf("|%0+-#*.*i|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0729");
	ret1 = fprintf(fppres, "|%0+-#*.*hhi|\n", width, precision, var);
	ft_printf("#0729");
	ret2 = ft_printf("|%0+-#*.*hhi|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0730");
	ret1 = fprintf(fppres, "|%0+-#*.*hi|\n", width, precision, var);
	ft_printf("#0730");
	ret2 = ft_printf("|%0+-#*.*hi|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0731");
	ret1 = fprintf(fppres, "|%0+-#*.*li|\n", width, precision, var);
	ft_printf("#0731");
	ret2 = ft_printf("|%0+-#*.*li|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0732");
	ret1 = fprintf(fppres, "|%0+-#*.*lli|\n", width, precision, var);
	ft_printf("#0732");
	ret2 = ft_printf("|%0+-#*.*lli|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0733");
	ret1 = fprintf(fppres, "|%0+-#*.*ji|\n", width, precision, var);
	ft_printf("#0733");
	ret2 = ft_printf("|%0+-#*.*ji|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0734");
	ret1 = fprintf(fppres, "|%0+-#*.*zi|\n", width, precision, var);
	ft_printf("#0734");
	ret2 = ft_printf("|%0+-#*.*zi|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0735");
	ret1 = fprintf(fppres, "|%0+-#*.*i|\n", width, precision, var);
	ft_printf("#0735");
	ret2 = ft_printf("|%0+-#*.*i|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0736");
	ret1 = fprintf(fppres, "|%0+-#*.*u|\n", width, precision, var);
	ft_printf("#0736");
	ret2 = ft_printf("|%0+-#*.*u|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0737");
	ret1 = fprintf(fppres, "|%0+-#*.*hhu|\n", width, precision, var);
	ft_printf("#0737");
	ret2 = ft_printf("|%0+-#*.*hhu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0738");
	ret1 = fprintf(fppres, "|%0+-#*.*hu|\n", width, precision, var);
	ft_printf("#0738");
	ret2 = ft_printf("|%0+-#*.*hu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0739");
	ret1 = fprintf(fppres, "|%0+-#*.*lu|\n", width, precision, var);
	ft_printf("#0739");
	ret2 = ft_printf("|%0+-#*.*lu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0740");
	ret1 = fprintf(fppres, "|%0+-#*.*llu|\n", width, precision, var);
	ft_printf("#0740");
	ret2 = ft_printf("|%0+-#*.*llu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0741");
	ret1 = fprintf(fppres, "|%0+-#*.*ju|\n", width, precision, var);
	ft_printf("#0741");
	ret2 = ft_printf("|%0+-#*.*ju|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0742");
	ret1 = fprintf(fppres, "|%0+-#*.*zu|\n", width, precision, var);
	ft_printf("#0742");
	ret2 = ft_printf("|%0+-#*.*zu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0743");
	ret1 = fprintf(fppres, "|%0+-#*.*u|\n", width, precision, var);
	ft_printf("#0743");
	ret2 = ft_printf("|%0+-#*.*u|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0744");
	ret1 = fprintf(fppres, "|%0+-#*.*f|\n", width, precision, var);
	ft_printf("#0744");
	ret2 = ft_printf("|%0+-#*.*f|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0745");
	ret1 = fprintf(fppres, "|%0+-#*.*hhf|\n", width, precision, var);
	ft_printf("#0745");
	ret2 = ft_printf("|%0+-#*.*hhf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0746");
	ret1 = fprintf(fppres, "|%0+-#*.*hf|\n", width, precision, var);
	ft_printf("#0746");
	ret2 = ft_printf("|%0+-#*.*hf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0747");
	ret1 = fprintf(fppres, "|%0+-#*.*lf|\n", width, precision, var);
	ft_printf("#0747");
	ret2 = ft_printf("|%0+-#*.*lf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0748");
	ret1 = fprintf(fppres, "|%0+-#*.*llf|\n", width, precision, var);
	ft_printf("#0748");
	ret2 = ft_printf("|%0+-#*.*llf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0749");
	ret1 = fprintf(fppres, "|%0+-#*.*jf|\n", width, precision, var);
	ft_printf("#0749");
	ret2 = ft_printf("|%0+-#*.*jf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0750");
	ret1 = fprintf(fppres, "|%0+-#*.*zf|\n", width, precision, var);
	ft_printf("#0750");
	ret2 = ft_printf("|%0+-#*.*zf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0751");
	ret1 = fprintf(fppres, "|%0+-#*.*f|\n", width, precision, var);
	ft_printf("#0751");
	ret2 = ft_printf("|%0+-#*.*f|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0752");
	ret1 = fprintf(fppres, "|%0+-#*.*F|\n", width, precision, var);
	ft_printf("#0752");
	ret2 = ft_printf("|%0+-#*.*F|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0753");
	ret1 = fprintf(fppres, "|%0+-#*.*hhF|\n", width, precision, var);
	ft_printf("#0753");
	ret2 = ft_printf("|%0+-#*.*hhF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0754");
	ret1 = fprintf(fppres, "|%0+-#*.*hF|\n", width, precision, var);
	ft_printf("#0754");
	ret2 = ft_printf("|%0+-#*.*hF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0755");
	ret1 = fprintf(fppres, "|%0+-#*.*lF|\n", width, precision, var);
	ft_printf("#0755");
	ret2 = ft_printf("|%0+-#*.*lF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0756");
	ret1 = fprintf(fppres, "|%0+-#*.*llF|\n", width, precision, var);
	ft_printf("#0756");
	ret2 = ft_printf("|%0+-#*.*llF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0757");
	ret1 = fprintf(fppres, "|%0+-#*.*jF|\n", width, precision, var);
	ft_printf("#0757");
	ret2 = ft_printf("|%0+-#*.*jF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0758");
	ret1 = fprintf(fppres, "|%0+-#*.*zF|\n", width, precision, var);
	ft_printf("#0758");
	ret2 = ft_printf("|%0+-#*.*zF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0759");
	ret1 = fprintf(fppres, "|%0+-#*.*F|\n", width, precision, var);
	ft_printf("#0759");
	ret2 = ft_printf("|%0+-#*.*F|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0760");
	ret1 = fprintf(fppres, "|%0+-#*.* |\n", width, precision, var);
	ft_printf("#0760");
	ret2 = ft_printf("|%0+-#*.* |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0761");
	ret1 = fprintf(fppres, "|%0+-#*.*hh |\n", width, precision, var);
	ft_printf("#0761");
	ret2 = ft_printf("|%0+-#*.*hh |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0762");
	ret1 = fprintf(fppres, "|%0+-#*.*h |\n", width, precision, var);
	ft_printf("#0762");
	ret2 = ft_printf("|%0+-#*.*h |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0763");
	ret1 = fprintf(fppres, "|%0+-#*.*l |\n", width, precision, var);
	ft_printf("#0763");
	ret2 = ft_printf("|%0+-#*.*l |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0764");
	ret1 = fprintf(fppres, "|%0+-#*.*ll |\n", width, precision, var);
	ft_printf("#0764");
	ret2 = ft_printf("|%0+-#*.*ll |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0765");
	ret1 = fprintf(fppres, "|%0+-#*.*j |\n", width, precision, var);
	ft_printf("#0765");
	ret2 = ft_printf("|%0+-#*.*j |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0766");
	ret1 = fprintf(fppres, "|%0+-#*.*z |\n", width, precision, var);
	ft_printf("#0766");
	ret2 = ft_printf("|%0+-#*.*z |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0767");
	ret1 = fprintf(fppres, "|%0+-#*.* |\n", width, precision, var);
	ft_printf("#0767");
	ret2 = ft_printf("|%0+-#*.* |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0768");
	ret1 = fprintf(fppres, "|%\*.*d|\n", width, precision, var);
	ft_printf("#0768");
	ret2 = ft_printf("|%\*.*d|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0769");
	ret1 = fprintf(fppres, "|%\*.*hhd|\n", width, precision, var);
	ft_printf("#0769");
	ret2 = ft_printf("|%\*.*hhd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0770");
	ret1 = fprintf(fppres, "|%\*.*hd|\n", width, precision, var);
	ft_printf("#0770");
	ret2 = ft_printf("|%\*.*hd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0771");
	ret1 = fprintf(fppres, "|%\*.*ld|\n", width, precision, var);
	ft_printf("#0771");
	ret2 = ft_printf("|%\*.*ld|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0772");
	ret1 = fprintf(fppres, "|%\*.*lld|\n", width, precision, var);
	ft_printf("#0772");
	ret2 = ft_printf("|%\*.*lld|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0773");
	ret1 = fprintf(fppres, "|%\*.*jd|\n", width, precision, var);
	ft_printf("#0773");
	ret2 = ft_printf("|%\*.*jd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0774");
	ret1 = fprintf(fppres, "|%\*.*zd|\n", width, precision, var);
	ft_printf("#0774");
	ret2 = ft_printf("|%\*.*zd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0775");
	ret1 = fprintf(fppres, "|%\*.*d|\n", width, precision, var);
	ft_printf("#0775");
	ret2 = ft_printf("|%\*.*d|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0776");
	ret1 = fprintf(fppres, "|%\*.*i|\n", width, precision, var);
	ft_printf("#0776");
	ret2 = ft_printf("|%\*.*i|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0777");
	ret1 = fprintf(fppres, "|%\*.*hhi|\n", width, precision, var);
	ft_printf("#0777");
	ret2 = ft_printf("|%\*.*hhi|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0778");
	ret1 = fprintf(fppres, "|%\*.*hi|\n", width, precision, var);
	ft_printf("#0778");
	ret2 = ft_printf("|%\*.*hi|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0779");
	ret1 = fprintf(fppres, "|%\*.*li|\n", width, precision, var);
	ft_printf("#0779");
	ret2 = ft_printf("|%\*.*li|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0780");
	ret1 = fprintf(fppres, "|%\*.*lli|\n", width, precision, var);
	ft_printf("#0780");
	ret2 = ft_printf("|%\*.*lli|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0781");
	ret1 = fprintf(fppres, "|%\*.*ji|\n", width, precision, var);
	ft_printf("#0781");
	ret2 = ft_printf("|%\*.*ji|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0782");
	ret1 = fprintf(fppres, "|%\*.*zi|\n", width, precision, var);
	ft_printf("#0782");
	ret2 = ft_printf("|%\*.*zi|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0783");
	ret1 = fprintf(fppres, "|%\*.*i|\n", width, precision, var);
	ft_printf("#0783");
	ret2 = ft_printf("|%\*.*i|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0784");
	ret1 = fprintf(fppres, "|%\*.*u|\n", width, precision, var);
	ft_printf("#0784");
	ret2 = ft_printf("|%\*.*u|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0785");
	ret1 = fprintf(fppres, "|%\*.*hhu|\n", width, precision, var);
	ft_printf("#0785");
	ret2 = ft_printf("|%\*.*hhu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0786");
	ret1 = fprintf(fppres, "|%\*.*hu|\n", width, precision, var);
	ft_printf("#0786");
	ret2 = ft_printf("|%\*.*hu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0787");
	ret1 = fprintf(fppres, "|%\*.*lu|\n", width, precision, var);
	ft_printf("#0787");
	ret2 = ft_printf("|%\*.*lu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0788");
	ret1 = fprintf(fppres, "|%\*.*llu|\n", width, precision, var);
	ft_printf("#0788");
	ret2 = ft_printf("|%\*.*llu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0789");
	ret1 = fprintf(fppres, "|%\*.*ju|\n", width, precision, var);
	ft_printf("#0789");
	ret2 = ft_printf("|%\*.*ju|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0790");
	ret1 = fprintf(fppres, "|%\*.*zu|\n", width, precision, var);
	ft_printf("#0790");
	ret2 = ft_printf("|%\*.*zu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0791");
	ret1 = fprintf(fppres, "|%\*.*u|\n", width, precision, var);
	ft_printf("#0791");
	ret2 = ft_printf("|%\*.*u|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0792");
	ret1 = fprintf(fppres, "|%\*.*f|\n", width, precision, var);
	ft_printf("#0792");
	ret2 = ft_printf("|%\*.*f|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0793");
	ret1 = fprintf(fppres, "|%\*.*hhf|\n", width, precision, var);
	ft_printf("#0793");
	ret2 = ft_printf("|%\*.*hhf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0794");
	ret1 = fprintf(fppres, "|%\*.*hf|\n", width, precision, var);
	ft_printf("#0794");
	ret2 = ft_printf("|%\*.*hf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0795");
	ret1 = fprintf(fppres, "|%\*.*lf|\n", width, precision, var);
	ft_printf("#0795");
	ret2 = ft_printf("|%\*.*lf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0796");
	ret1 = fprintf(fppres, "|%\*.*llf|\n", width, precision, var);
	ft_printf("#0796");
	ret2 = ft_printf("|%\*.*llf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0797");
	ret1 = fprintf(fppres, "|%\*.*jf|\n", width, precision, var);
	ft_printf("#0797");
	ret2 = ft_printf("|%\*.*jf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0798");
	ret1 = fprintf(fppres, "|%\*.*zf|\n", width, precision, var);
	ft_printf("#0798");
	ret2 = ft_printf("|%\*.*zf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0799");
	ret1 = fprintf(fppres, "|%\*.*f|\n", width, precision, var);
	ft_printf("#0799");
	ret2 = ft_printf("|%\*.*f|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0800");
	ret1 = fprintf(fppres, "|%\*.*F|\n", width, precision, var);
	ft_printf("#0800");
	ret2 = ft_printf("|%\*.*F|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0801");
	ret1 = fprintf(fppres, "|%\*.*hhF|\n", width, precision, var);
	ft_printf("#0801");
	ret2 = ft_printf("|%\*.*hhF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0802");
	ret1 = fprintf(fppres, "|%\*.*hF|\n", width, precision, var);
	ft_printf("#0802");
	ret2 = ft_printf("|%\*.*hF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0803");
	ret1 = fprintf(fppres, "|%\*.*lF|\n", width, precision, var);
	ft_printf("#0803");
	ret2 = ft_printf("|%\*.*lF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0804");
	ret1 = fprintf(fppres, "|%\*.*llF|\n", width, precision, var);
	ft_printf("#0804");
	ret2 = ft_printf("|%\*.*llF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0805");
	ret1 = fprintf(fppres, "|%\*.*jF|\n", width, precision, var);
	ft_printf("#0805");
	ret2 = ft_printf("|%\*.*jF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0806");
	ret1 = fprintf(fppres, "|%\*.*zF|\n", width, precision, var);
	ft_printf("#0806");
	ret2 = ft_printf("|%\*.*zF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0807");
	ret1 = fprintf(fppres, "|%\*.*F|\n", width, precision, var);
	ft_printf("#0807");
	ret2 = ft_printf("|%\*.*F|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0808");
	ret1 = fprintf(fppres, "|%\*.* |\n", width, precision, var);
	ft_printf("#0808");
	ret2 = ft_printf("|%\*.* |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0809");
	ret1 = fprintf(fppres, "|%\*.*hh |\n", width, precision, var);
	ft_printf("#0809");
	ret2 = ft_printf("|%\*.*hh |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0810");
	ret1 = fprintf(fppres, "|%\*.*h |\n", width, precision, var);
	ft_printf("#0810");
	ret2 = ft_printf("|%\*.*h |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0811");
	ret1 = fprintf(fppres, "|%\*.*l |\n", width, precision, var);
	ft_printf("#0811");
	ret2 = ft_printf("|%\*.*l |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0812");
	ret1 = fprintf(fppres, "|%\*.*ll |\n", width, precision, var);
	ft_printf("#0812");
	ret2 = ft_printf("|%\*.*ll |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0813");
	ret1 = fprintf(fppres, "|%\*.*j |\n", width, precision, var);
	ft_printf("#0813");
	ret2 = ft_printf("|%\*.*j |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0814");
	ret1 = fprintf(fppres, "|%\*.*z |\n", width, precision, var);
	ft_printf("#0814");
	ret2 = ft_printf("|%\*.*z |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0815");
	ret1 = fprintf(fppres, "|%\*.* |\n", width, precision, var);
	ft_printf("#0815");
	ret2 = ft_printf("|%\*.* |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0816");
	ret1 = fprintf(fppres, "|%0\*.*d|\n", width, precision, var);
	ft_printf("#0816");
	ret2 = ft_printf("|%0\*.*d|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0817");
	ret1 = fprintf(fppres, "|%0\*.*hhd|\n", width, precision, var);
	ft_printf("#0817");
	ret2 = ft_printf("|%0\*.*hhd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0818");
	ret1 = fprintf(fppres, "|%0\*.*hd|\n", width, precision, var);
	ft_printf("#0818");
	ret2 = ft_printf("|%0\*.*hd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0819");
	ret1 = fprintf(fppres, "|%0\*.*ld|\n", width, precision, var);
	ft_printf("#0819");
	ret2 = ft_printf("|%0\*.*ld|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0820");
	ret1 = fprintf(fppres, "|%0\*.*lld|\n", width, precision, var);
	ft_printf("#0820");
	ret2 = ft_printf("|%0\*.*lld|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0821");
	ret1 = fprintf(fppres, "|%0\*.*jd|\n", width, precision, var);
	ft_printf("#0821");
	ret2 = ft_printf("|%0\*.*jd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0822");
	ret1 = fprintf(fppres, "|%0\*.*zd|\n", width, precision, var);
	ft_printf("#0822");
	ret2 = ft_printf("|%0\*.*zd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0823");
	ret1 = fprintf(fppres, "|%0\*.*d|\n", width, precision, var);
	ft_printf("#0823");
	ret2 = ft_printf("|%0\*.*d|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0824");
	ret1 = fprintf(fppres, "|%0\*.*i|\n", width, precision, var);
	ft_printf("#0824");
	ret2 = ft_printf("|%0\*.*i|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0825");
	ret1 = fprintf(fppres, "|%0\*.*hhi|\n", width, precision, var);
	ft_printf("#0825");
	ret2 = ft_printf("|%0\*.*hhi|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0826");
	ret1 = fprintf(fppres, "|%0\*.*hi|\n", width, precision, var);
	ft_printf("#0826");
	ret2 = ft_printf("|%0\*.*hi|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0827");
	ret1 = fprintf(fppres, "|%0\*.*li|\n", width, precision, var);
	ft_printf("#0827");
	ret2 = ft_printf("|%0\*.*li|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0828");
	ret1 = fprintf(fppres, "|%0\*.*lli|\n", width, precision, var);
	ft_printf("#0828");
	ret2 = ft_printf("|%0\*.*lli|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0829");
	ret1 = fprintf(fppres, "|%0\*.*ji|\n", width, precision, var);
	ft_printf("#0829");
	ret2 = ft_printf("|%0\*.*ji|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0830");
	ret1 = fprintf(fppres, "|%0\*.*zi|\n", width, precision, var);
	ft_printf("#0830");
	ret2 = ft_printf("|%0\*.*zi|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0831");
	ret1 = fprintf(fppres, "|%0\*.*i|\n", width, precision, var);
	ft_printf("#0831");
	ret2 = ft_printf("|%0\*.*i|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0832");
	ret1 = fprintf(fppres, "|%0\*.*u|\n", width, precision, var);
	ft_printf("#0832");
	ret2 = ft_printf("|%0\*.*u|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0833");
	ret1 = fprintf(fppres, "|%0\*.*hhu|\n", width, precision, var);
	ft_printf("#0833");
	ret2 = ft_printf("|%0\*.*hhu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0834");
	ret1 = fprintf(fppres, "|%0\*.*hu|\n", width, precision, var);
	ft_printf("#0834");
	ret2 = ft_printf("|%0\*.*hu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0835");
	ret1 = fprintf(fppres, "|%0\*.*lu|\n", width, precision, var);
	ft_printf("#0835");
	ret2 = ft_printf("|%0\*.*lu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0836");
	ret1 = fprintf(fppres, "|%0\*.*llu|\n", width, precision, var);
	ft_printf("#0836");
	ret2 = ft_printf("|%0\*.*llu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0837");
	ret1 = fprintf(fppres, "|%0\*.*ju|\n", width, precision, var);
	ft_printf("#0837");
	ret2 = ft_printf("|%0\*.*ju|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0838");
	ret1 = fprintf(fppres, "|%0\*.*zu|\n", width, precision, var);
	ft_printf("#0838");
	ret2 = ft_printf("|%0\*.*zu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0839");
	ret1 = fprintf(fppres, "|%0\*.*u|\n", width, precision, var);
	ft_printf("#0839");
	ret2 = ft_printf("|%0\*.*u|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0840");
	ret1 = fprintf(fppres, "|%0\*.*f|\n", width, precision, var);
	ft_printf("#0840");
	ret2 = ft_printf("|%0\*.*f|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0841");
	ret1 = fprintf(fppres, "|%0\*.*hhf|\n", width, precision, var);
	ft_printf("#0841");
	ret2 = ft_printf("|%0\*.*hhf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0842");
	ret1 = fprintf(fppres, "|%0\*.*hf|\n", width, precision, var);
	ft_printf("#0842");
	ret2 = ft_printf("|%0\*.*hf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0843");
	ret1 = fprintf(fppres, "|%0\*.*lf|\n", width, precision, var);
	ft_printf("#0843");
	ret2 = ft_printf("|%0\*.*lf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0844");
	ret1 = fprintf(fppres, "|%0\*.*llf|\n", width, precision, var);
	ft_printf("#0844");
	ret2 = ft_printf("|%0\*.*llf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0845");
	ret1 = fprintf(fppres, "|%0\*.*jf|\n", width, precision, var);
	ft_printf("#0845");
	ret2 = ft_printf("|%0\*.*jf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0846");
	ret1 = fprintf(fppres, "|%0\*.*zf|\n", width, precision, var);
	ft_printf("#0846");
	ret2 = ft_printf("|%0\*.*zf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0847");
	ret1 = fprintf(fppres, "|%0\*.*f|\n", width, precision, var);
	ft_printf("#0847");
	ret2 = ft_printf("|%0\*.*f|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0848");
	ret1 = fprintf(fppres, "|%0\*.*F|\n", width, precision, var);
	ft_printf("#0848");
	ret2 = ft_printf("|%0\*.*F|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0849");
	ret1 = fprintf(fppres, "|%0\*.*hhF|\n", width, precision, var);
	ft_printf("#0849");
	ret2 = ft_printf("|%0\*.*hhF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0850");
	ret1 = fprintf(fppres, "|%0\*.*hF|\n", width, precision, var);
	ft_printf("#0850");
	ret2 = ft_printf("|%0\*.*hF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0851");
	ret1 = fprintf(fppres, "|%0\*.*lF|\n", width, precision, var);
	ft_printf("#0851");
	ret2 = ft_printf("|%0\*.*lF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0852");
	ret1 = fprintf(fppres, "|%0\*.*llF|\n", width, precision, var);
	ft_printf("#0852");
	ret2 = ft_printf("|%0\*.*llF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0853");
	ret1 = fprintf(fppres, "|%0\*.*jF|\n", width, precision, var);
	ft_printf("#0853");
	ret2 = ft_printf("|%0\*.*jF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0854");
	ret1 = fprintf(fppres, "|%0\*.*zF|\n", width, precision, var);
	ft_printf("#0854");
	ret2 = ft_printf("|%0\*.*zF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0855");
	ret1 = fprintf(fppres, "|%0\*.*F|\n", width, precision, var);
	ft_printf("#0855");
	ret2 = ft_printf("|%0\*.*F|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0856");
	ret1 = fprintf(fppres, "|%0\*.* |\n", width, precision, var);
	ft_printf("#0856");
	ret2 = ft_printf("|%0\*.* |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0857");
	ret1 = fprintf(fppres, "|%0\*.*hh |\n", width, precision, var);
	ft_printf("#0857");
	ret2 = ft_printf("|%0\*.*hh |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0858");
	ret1 = fprintf(fppres, "|%0\*.*h |\n", width, precision, var);
	ft_printf("#0858");
	ret2 = ft_printf("|%0\*.*h |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0859");
	ret1 = fprintf(fppres, "|%0\*.*l |\n", width, precision, var);
	ft_printf("#0859");
	ret2 = ft_printf("|%0\*.*l |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0860");
	ret1 = fprintf(fppres, "|%0\*.*ll |\n", width, precision, var);
	ft_printf("#0860");
	ret2 = ft_printf("|%0\*.*ll |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0861");
	ret1 = fprintf(fppres, "|%0\*.*j |\n", width, precision, var);
	ft_printf("#0861");
	ret2 = ft_printf("|%0\*.*j |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0862");
	ret1 = fprintf(fppres, "|%0\*.*z |\n", width, precision, var);
	ft_printf("#0862");
	ret2 = ft_printf("|%0\*.*z |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0863");
	ret1 = fprintf(fppres, "|%0\*.* |\n", width, precision, var);
	ft_printf("#0863");
	ret2 = ft_printf("|%0\*.* |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0864");
	ret1 = fprintf(fppres, "|%+\*.*d|\n", width, precision, var);
	ft_printf("#0864");
	ret2 = ft_printf("|%+\*.*d|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0865");
	ret1 = fprintf(fppres, "|%+\*.*hhd|\n", width, precision, var);
	ft_printf("#0865");
	ret2 = ft_printf("|%+\*.*hhd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0866");
	ret1 = fprintf(fppres, "|%+\*.*hd|\n", width, precision, var);
	ft_printf("#0866");
	ret2 = ft_printf("|%+\*.*hd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0867");
	ret1 = fprintf(fppres, "|%+\*.*ld|\n", width, precision, var);
	ft_printf("#0867");
	ret2 = ft_printf("|%+\*.*ld|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0868");
	ret1 = fprintf(fppres, "|%+\*.*lld|\n", width, precision, var);
	ft_printf("#0868");
	ret2 = ft_printf("|%+\*.*lld|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0869");
	ret1 = fprintf(fppres, "|%+\*.*jd|\n", width, precision, var);
	ft_printf("#0869");
	ret2 = ft_printf("|%+\*.*jd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0870");
	ret1 = fprintf(fppres, "|%+\*.*zd|\n", width, precision, var);
	ft_printf("#0870");
	ret2 = ft_printf("|%+\*.*zd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0871");
	ret1 = fprintf(fppres, "|%+\*.*d|\n", width, precision, var);
	ft_printf("#0871");
	ret2 = ft_printf("|%+\*.*d|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0872");
	ret1 = fprintf(fppres, "|%+\*.*i|\n", width, precision, var);
	ft_printf("#0872");
	ret2 = ft_printf("|%+\*.*i|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0873");
	ret1 = fprintf(fppres, "|%+\*.*hhi|\n", width, precision, var);
	ft_printf("#0873");
	ret2 = ft_printf("|%+\*.*hhi|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0874");
	ret1 = fprintf(fppres, "|%+\*.*hi|\n", width, precision, var);
	ft_printf("#0874");
	ret2 = ft_printf("|%+\*.*hi|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0875");
	ret1 = fprintf(fppres, "|%+\*.*li|\n", width, precision, var);
	ft_printf("#0875");
	ret2 = ft_printf("|%+\*.*li|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0876");
	ret1 = fprintf(fppres, "|%+\*.*lli|\n", width, precision, var);
	ft_printf("#0876");
	ret2 = ft_printf("|%+\*.*lli|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0877");
	ret1 = fprintf(fppres, "|%+\*.*ji|\n", width, precision, var);
	ft_printf("#0877");
	ret2 = ft_printf("|%+\*.*ji|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0878");
	ret1 = fprintf(fppres, "|%+\*.*zi|\n", width, precision, var);
	ft_printf("#0878");
	ret2 = ft_printf("|%+\*.*zi|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0879");
	ret1 = fprintf(fppres, "|%+\*.*i|\n", width, precision, var);
	ft_printf("#0879");
	ret2 = ft_printf("|%+\*.*i|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0880");
	ret1 = fprintf(fppres, "|%+\*.*u|\n", width, precision, var);
	ft_printf("#0880");
	ret2 = ft_printf("|%+\*.*u|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0881");
	ret1 = fprintf(fppres, "|%+\*.*hhu|\n", width, precision, var);
	ft_printf("#0881");
	ret2 = ft_printf("|%+\*.*hhu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0882");
	ret1 = fprintf(fppres, "|%+\*.*hu|\n", width, precision, var);
	ft_printf("#0882");
	ret2 = ft_printf("|%+\*.*hu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0883");
	ret1 = fprintf(fppres, "|%+\*.*lu|\n", width, precision, var);
	ft_printf("#0883");
	ret2 = ft_printf("|%+\*.*lu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0884");
	ret1 = fprintf(fppres, "|%+\*.*llu|\n", width, precision, var);
	ft_printf("#0884");
	ret2 = ft_printf("|%+\*.*llu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0885");
	ret1 = fprintf(fppres, "|%+\*.*ju|\n", width, precision, var);
	ft_printf("#0885");
	ret2 = ft_printf("|%+\*.*ju|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0886");
	ret1 = fprintf(fppres, "|%+\*.*zu|\n", width, precision, var);
	ft_printf("#0886");
	ret2 = ft_printf("|%+\*.*zu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0887");
	ret1 = fprintf(fppres, "|%+\*.*u|\n", width, precision, var);
	ft_printf("#0887");
	ret2 = ft_printf("|%+\*.*u|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0888");
	ret1 = fprintf(fppres, "|%+\*.*f|\n", width, precision, var);
	ft_printf("#0888");
	ret2 = ft_printf("|%+\*.*f|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0889");
	ret1 = fprintf(fppres, "|%+\*.*hhf|\n", width, precision, var);
	ft_printf("#0889");
	ret2 = ft_printf("|%+\*.*hhf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0890");
	ret1 = fprintf(fppres, "|%+\*.*hf|\n", width, precision, var);
	ft_printf("#0890");
	ret2 = ft_printf("|%+\*.*hf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0891");
	ret1 = fprintf(fppres, "|%+\*.*lf|\n", width, precision, var);
	ft_printf("#0891");
	ret2 = ft_printf("|%+\*.*lf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0892");
	ret1 = fprintf(fppres, "|%+\*.*llf|\n", width, precision, var);
	ft_printf("#0892");
	ret2 = ft_printf("|%+\*.*llf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0893");
	ret1 = fprintf(fppres, "|%+\*.*jf|\n", width, precision, var);
	ft_printf("#0893");
	ret2 = ft_printf("|%+\*.*jf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0894");
	ret1 = fprintf(fppres, "|%+\*.*zf|\n", width, precision, var);
	ft_printf("#0894");
	ret2 = ft_printf("|%+\*.*zf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0895");
	ret1 = fprintf(fppres, "|%+\*.*f|\n", width, precision, var);
	ft_printf("#0895");
	ret2 = ft_printf("|%+\*.*f|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0896");
	ret1 = fprintf(fppres, "|%+\*.*F|\n", width, precision, var);
	ft_printf("#0896");
	ret2 = ft_printf("|%+\*.*F|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0897");
	ret1 = fprintf(fppres, "|%+\*.*hhF|\n", width, precision, var);
	ft_printf("#0897");
	ret2 = ft_printf("|%+\*.*hhF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0898");
	ret1 = fprintf(fppres, "|%+\*.*hF|\n", width, precision, var);
	ft_printf("#0898");
	ret2 = ft_printf("|%+\*.*hF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0899");
	ret1 = fprintf(fppres, "|%+\*.*lF|\n", width, precision, var);
	ft_printf("#0899");
	ret2 = ft_printf("|%+\*.*lF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0900");
	ret1 = fprintf(fppres, "|%+\*.*llF|\n", width, precision, var);
	ft_printf("#0900");
	ret2 = ft_printf("|%+\*.*llF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0901");
	ret1 = fprintf(fppres, "|%+\*.*jF|\n", width, precision, var);
	ft_printf("#0901");
	ret2 = ft_printf("|%+\*.*jF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0902");
	ret1 = fprintf(fppres, "|%+\*.*zF|\n", width, precision, var);
	ft_printf("#0902");
	ret2 = ft_printf("|%+\*.*zF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0903");
	ret1 = fprintf(fppres, "|%+\*.*F|\n", width, precision, var);
	ft_printf("#0903");
	ret2 = ft_printf("|%+\*.*F|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0904");
	ret1 = fprintf(fppres, "|%+\*.* |\n", width, precision, var);
	ft_printf("#0904");
	ret2 = ft_printf("|%+\*.* |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0905");
	ret1 = fprintf(fppres, "|%+\*.*hh |\n", width, precision, var);
	ft_printf("#0905");
	ret2 = ft_printf("|%+\*.*hh |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0906");
	ret1 = fprintf(fppres, "|%+\*.*h |\n", width, precision, var);
	ft_printf("#0906");
	ret2 = ft_printf("|%+\*.*h |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0907");
	ret1 = fprintf(fppres, "|%+\*.*l |\n", width, precision, var);
	ft_printf("#0907");
	ret2 = ft_printf("|%+\*.*l |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0908");
	ret1 = fprintf(fppres, "|%+\*.*ll |\n", width, precision, var);
	ft_printf("#0908");
	ret2 = ft_printf("|%+\*.*ll |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0909");
	ret1 = fprintf(fppres, "|%+\*.*j |\n", width, precision, var);
	ft_printf("#0909");
	ret2 = ft_printf("|%+\*.*j |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0910");
	ret1 = fprintf(fppres, "|%+\*.*z |\n", width, precision, var);
	ft_printf("#0910");
	ret2 = ft_printf("|%+\*.*z |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0911");
	ret1 = fprintf(fppres, "|%+\*.* |\n", width, precision, var);
	ft_printf("#0911");
	ret2 = ft_printf("|%+\*.* |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0912");
	ret1 = fprintf(fppres, "|%0+\*.*d|\n", width, precision, var);
	ft_printf("#0912");
	ret2 = ft_printf("|%0+\*.*d|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0913");
	ret1 = fprintf(fppres, "|%0+\*.*hhd|\n", width, precision, var);
	ft_printf("#0913");
	ret2 = ft_printf("|%0+\*.*hhd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0914");
	ret1 = fprintf(fppres, "|%0+\*.*hd|\n", width, precision, var);
	ft_printf("#0914");
	ret2 = ft_printf("|%0+\*.*hd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0915");
	ret1 = fprintf(fppres, "|%0+\*.*ld|\n", width, precision, var);
	ft_printf("#0915");
	ret2 = ft_printf("|%0+\*.*ld|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0916");
	ret1 = fprintf(fppres, "|%0+\*.*lld|\n", width, precision, var);
	ft_printf("#0916");
	ret2 = ft_printf("|%0+\*.*lld|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0917");
	ret1 = fprintf(fppres, "|%0+\*.*jd|\n", width, precision, var);
	ft_printf("#0917");
	ret2 = ft_printf("|%0+\*.*jd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0918");
	ret1 = fprintf(fppres, "|%0+\*.*zd|\n", width, precision, var);
	ft_printf("#0918");
	ret2 = ft_printf("|%0+\*.*zd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0919");
	ret1 = fprintf(fppres, "|%0+\*.*d|\n", width, precision, var);
	ft_printf("#0919");
	ret2 = ft_printf("|%0+\*.*d|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0920");
	ret1 = fprintf(fppres, "|%0+\*.*i|\n", width, precision, var);
	ft_printf("#0920");
	ret2 = ft_printf("|%0+\*.*i|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0921");
	ret1 = fprintf(fppres, "|%0+\*.*hhi|\n", width, precision, var);
	ft_printf("#0921");
	ret2 = ft_printf("|%0+\*.*hhi|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0922");
	ret1 = fprintf(fppres, "|%0+\*.*hi|\n", width, precision, var);
	ft_printf("#0922");
	ret2 = ft_printf("|%0+\*.*hi|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0923");
	ret1 = fprintf(fppres, "|%0+\*.*li|\n", width, precision, var);
	ft_printf("#0923");
	ret2 = ft_printf("|%0+\*.*li|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0924");
	ret1 = fprintf(fppres, "|%0+\*.*lli|\n", width, precision, var);
	ft_printf("#0924");
	ret2 = ft_printf("|%0+\*.*lli|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0925");
	ret1 = fprintf(fppres, "|%0+\*.*ji|\n", width, precision, var);
	ft_printf("#0925");
	ret2 = ft_printf("|%0+\*.*ji|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0926");
	ret1 = fprintf(fppres, "|%0+\*.*zi|\n", width, precision, var);
	ft_printf("#0926");
	ret2 = ft_printf("|%0+\*.*zi|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0927");
	ret1 = fprintf(fppres, "|%0+\*.*i|\n", width, precision, var);
	ft_printf("#0927");
	ret2 = ft_printf("|%0+\*.*i|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0928");
	ret1 = fprintf(fppres, "|%0+\*.*u|\n", width, precision, var);
	ft_printf("#0928");
	ret2 = ft_printf("|%0+\*.*u|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0929");
	ret1 = fprintf(fppres, "|%0+\*.*hhu|\n", width, precision, var);
	ft_printf("#0929");
	ret2 = ft_printf("|%0+\*.*hhu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0930");
	ret1 = fprintf(fppres, "|%0+\*.*hu|\n", width, precision, var);
	ft_printf("#0930");
	ret2 = ft_printf("|%0+\*.*hu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0931");
	ret1 = fprintf(fppres, "|%0+\*.*lu|\n", width, precision, var);
	ft_printf("#0931");
	ret2 = ft_printf("|%0+\*.*lu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0932");
	ret1 = fprintf(fppres, "|%0+\*.*llu|\n", width, precision, var);
	ft_printf("#0932");
	ret2 = ft_printf("|%0+\*.*llu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0933");
	ret1 = fprintf(fppres, "|%0+\*.*ju|\n", width, precision, var);
	ft_printf("#0933");
	ret2 = ft_printf("|%0+\*.*ju|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0934");
	ret1 = fprintf(fppres, "|%0+\*.*zu|\n", width, precision, var);
	ft_printf("#0934");
	ret2 = ft_printf("|%0+\*.*zu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0935");
	ret1 = fprintf(fppres, "|%0+\*.*u|\n", width, precision, var);
	ft_printf("#0935");
	ret2 = ft_printf("|%0+\*.*u|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0936");
	ret1 = fprintf(fppres, "|%0+\*.*f|\n", width, precision, var);
	ft_printf("#0936");
	ret2 = ft_printf("|%0+\*.*f|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0937");
	ret1 = fprintf(fppres, "|%0+\*.*hhf|\n", width, precision, var);
	ft_printf("#0937");
	ret2 = ft_printf("|%0+\*.*hhf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0938");
	ret1 = fprintf(fppres, "|%0+\*.*hf|\n", width, precision, var);
	ft_printf("#0938");
	ret2 = ft_printf("|%0+\*.*hf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0939");
	ret1 = fprintf(fppres, "|%0+\*.*lf|\n", width, precision, var);
	ft_printf("#0939");
	ret2 = ft_printf("|%0+\*.*lf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0940");
	ret1 = fprintf(fppres, "|%0+\*.*llf|\n", width, precision, var);
	ft_printf("#0940");
	ret2 = ft_printf("|%0+\*.*llf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0941");
	ret1 = fprintf(fppres, "|%0+\*.*jf|\n", width, precision, var);
	ft_printf("#0941");
	ret2 = ft_printf("|%0+\*.*jf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0942");
	ret1 = fprintf(fppres, "|%0+\*.*zf|\n", width, precision, var);
	ft_printf("#0942");
	ret2 = ft_printf("|%0+\*.*zf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0943");
	ret1 = fprintf(fppres, "|%0+\*.*f|\n", width, precision, var);
	ft_printf("#0943");
	ret2 = ft_printf("|%0+\*.*f|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0944");
	ret1 = fprintf(fppres, "|%0+\*.*F|\n", width, precision, var);
	ft_printf("#0944");
	ret2 = ft_printf("|%0+\*.*F|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0945");
	ret1 = fprintf(fppres, "|%0+\*.*hhF|\n", width, precision, var);
	ft_printf("#0945");
	ret2 = ft_printf("|%0+\*.*hhF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0946");
	ret1 = fprintf(fppres, "|%0+\*.*hF|\n", width, precision, var);
	ft_printf("#0946");
	ret2 = ft_printf("|%0+\*.*hF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0947");
	ret1 = fprintf(fppres, "|%0+\*.*lF|\n", width, precision, var);
	ft_printf("#0947");
	ret2 = ft_printf("|%0+\*.*lF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0948");
	ret1 = fprintf(fppres, "|%0+\*.*llF|\n", width, precision, var);
	ft_printf("#0948");
	ret2 = ft_printf("|%0+\*.*llF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0949");
	ret1 = fprintf(fppres, "|%0+\*.*jF|\n", width, precision, var);
	ft_printf("#0949");
	ret2 = ft_printf("|%0+\*.*jF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0950");
	ret1 = fprintf(fppres, "|%0+\*.*zF|\n", width, precision, var);
	ft_printf("#0950");
	ret2 = ft_printf("|%0+\*.*zF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0951");
	ret1 = fprintf(fppres, "|%0+\*.*F|\n", width, precision, var);
	ft_printf("#0951");
	ret2 = ft_printf("|%0+\*.*F|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0952");
	ret1 = fprintf(fppres, "|%0+\*.* |\n", width, precision, var);
	ft_printf("#0952");
	ret2 = ft_printf("|%0+\*.* |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0953");
	ret1 = fprintf(fppres, "|%0+\*.*hh |\n", width, precision, var);
	ft_printf("#0953");
	ret2 = ft_printf("|%0+\*.*hh |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0954");
	ret1 = fprintf(fppres, "|%0+\*.*h |\n", width, precision, var);
	ft_printf("#0954");
	ret2 = ft_printf("|%0+\*.*h |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0955");
	ret1 = fprintf(fppres, "|%0+\*.*l |\n", width, precision, var);
	ft_printf("#0955");
	ret2 = ft_printf("|%0+\*.*l |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0956");
	ret1 = fprintf(fppres, "|%0+\*.*ll |\n", width, precision, var);
	ft_printf("#0956");
	ret2 = ft_printf("|%0+\*.*ll |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0957");
	ret1 = fprintf(fppres, "|%0+\*.*j |\n", width, precision, var);
	ft_printf("#0957");
	ret2 = ft_printf("|%0+\*.*j |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0958");
	ret1 = fprintf(fppres, "|%0+\*.*z |\n", width, precision, var);
	ft_printf("#0958");
	ret2 = ft_printf("|%0+\*.*z |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0959");
	ret1 = fprintf(fppres, "|%0+\*.* |\n", width, precision, var);
	ft_printf("#0959");
	ret2 = ft_printf("|%0+\*.* |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0960");
	ret1 = fprintf(fppres, "|%-\*.*d|\n", width, precision, var);
	ft_printf("#0960");
	ret2 = ft_printf("|%-\*.*d|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0961");
	ret1 = fprintf(fppres, "|%-\*.*hhd|\n", width, precision, var);
	ft_printf("#0961");
	ret2 = ft_printf("|%-\*.*hhd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0962");
	ret1 = fprintf(fppres, "|%-\*.*hd|\n", width, precision, var);
	ft_printf("#0962");
	ret2 = ft_printf("|%-\*.*hd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0963");
	ret1 = fprintf(fppres, "|%-\*.*ld|\n", width, precision, var);
	ft_printf("#0963");
	ret2 = ft_printf("|%-\*.*ld|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0964");
	ret1 = fprintf(fppres, "|%-\*.*lld|\n", width, precision, var);
	ft_printf("#0964");
	ret2 = ft_printf("|%-\*.*lld|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0965");
	ret1 = fprintf(fppres, "|%-\*.*jd|\n", width, precision, var);
	ft_printf("#0965");
	ret2 = ft_printf("|%-\*.*jd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0966");
	ret1 = fprintf(fppres, "|%-\*.*zd|\n", width, precision, var);
	ft_printf("#0966");
	ret2 = ft_printf("|%-\*.*zd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0967");
	ret1 = fprintf(fppres, "|%-\*.*d|\n", width, precision, var);
	ft_printf("#0967");
	ret2 = ft_printf("|%-\*.*d|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0968");
	ret1 = fprintf(fppres, "|%-\*.*i|\n", width, precision, var);
	ft_printf("#0968");
	ret2 = ft_printf("|%-\*.*i|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0969");
	ret1 = fprintf(fppres, "|%-\*.*hhi|\n", width, precision, var);
	ft_printf("#0969");
	ret2 = ft_printf("|%-\*.*hhi|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0970");
	ret1 = fprintf(fppres, "|%-\*.*hi|\n", width, precision, var);
	ft_printf("#0970");
	ret2 = ft_printf("|%-\*.*hi|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0971");
	ret1 = fprintf(fppres, "|%-\*.*li|\n", width, precision, var);
	ft_printf("#0971");
	ret2 = ft_printf("|%-\*.*li|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0972");
	ret1 = fprintf(fppres, "|%-\*.*lli|\n", width, precision, var);
	ft_printf("#0972");
	ret2 = ft_printf("|%-\*.*lli|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0973");
	ret1 = fprintf(fppres, "|%-\*.*ji|\n", width, precision, var);
	ft_printf("#0973");
	ret2 = ft_printf("|%-\*.*ji|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0974");
	ret1 = fprintf(fppres, "|%-\*.*zi|\n", width, precision, var);
	ft_printf("#0974");
	ret2 = ft_printf("|%-\*.*zi|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0975");
	ret1 = fprintf(fppres, "|%-\*.*i|\n", width, precision, var);
	ft_printf("#0975");
	ret2 = ft_printf("|%-\*.*i|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0976");
	ret1 = fprintf(fppres, "|%-\*.*u|\n", width, precision, var);
	ft_printf("#0976");
	ret2 = ft_printf("|%-\*.*u|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0977");
	ret1 = fprintf(fppres, "|%-\*.*hhu|\n", width, precision, var);
	ft_printf("#0977");
	ret2 = ft_printf("|%-\*.*hhu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0978");
	ret1 = fprintf(fppres, "|%-\*.*hu|\n", width, precision, var);
	ft_printf("#0978");
	ret2 = ft_printf("|%-\*.*hu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0979");
	ret1 = fprintf(fppres, "|%-\*.*lu|\n", width, precision, var);
	ft_printf("#0979");
	ret2 = ft_printf("|%-\*.*lu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0980");
	ret1 = fprintf(fppres, "|%-\*.*llu|\n", width, precision, var);
	ft_printf("#0980");
	ret2 = ft_printf("|%-\*.*llu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0981");
	ret1 = fprintf(fppres, "|%-\*.*ju|\n", width, precision, var);
	ft_printf("#0981");
	ret2 = ft_printf("|%-\*.*ju|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0982");
	ret1 = fprintf(fppres, "|%-\*.*zu|\n", width, precision, var);
	ft_printf("#0982");
	ret2 = ft_printf("|%-\*.*zu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0983");
	ret1 = fprintf(fppres, "|%-\*.*u|\n", width, precision, var);
	ft_printf("#0983");
	ret2 = ft_printf("|%-\*.*u|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0984");
	ret1 = fprintf(fppres, "|%-\*.*f|\n", width, precision, var);
	ft_printf("#0984");
	ret2 = ft_printf("|%-\*.*f|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0985");
	ret1 = fprintf(fppres, "|%-\*.*hhf|\n", width, precision, var);
	ft_printf("#0985");
	ret2 = ft_printf("|%-\*.*hhf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0986");
	ret1 = fprintf(fppres, "|%-\*.*hf|\n", width, precision, var);
	ft_printf("#0986");
	ret2 = ft_printf("|%-\*.*hf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0987");
	ret1 = fprintf(fppres, "|%-\*.*lf|\n", width, precision, var);
	ft_printf("#0987");
	ret2 = ft_printf("|%-\*.*lf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0988");
	ret1 = fprintf(fppres, "|%-\*.*llf|\n", width, precision, var);
	ft_printf("#0988");
	ret2 = ft_printf("|%-\*.*llf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0989");
	ret1 = fprintf(fppres, "|%-\*.*jf|\n", width, precision, var);
	ft_printf("#0989");
	ret2 = ft_printf("|%-\*.*jf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0990");
	ret1 = fprintf(fppres, "|%-\*.*zf|\n", width, precision, var);
	ft_printf("#0990");
	ret2 = ft_printf("|%-\*.*zf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0991");
	ret1 = fprintf(fppres, "|%-\*.*f|\n", width, precision, var);
	ft_printf("#0991");
	ret2 = ft_printf("|%-\*.*f|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0992");
	ret1 = fprintf(fppres, "|%-\*.*F|\n", width, precision, var);
	ft_printf("#0992");
	ret2 = ft_printf("|%-\*.*F|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0993");
	ret1 = fprintf(fppres, "|%-\*.*hhF|\n", width, precision, var);
	ft_printf("#0993");
	ret2 = ft_printf("|%-\*.*hhF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0994");
	ret1 = fprintf(fppres, "|%-\*.*hF|\n", width, precision, var);
	ft_printf("#0994");
	ret2 = ft_printf("|%-\*.*hF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0995");
	ret1 = fprintf(fppres, "|%-\*.*lF|\n", width, precision, var);
	ft_printf("#0995");
	ret2 = ft_printf("|%-\*.*lF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0996");
	ret1 = fprintf(fppres, "|%-\*.*llF|\n", width, precision, var);
	ft_printf("#0996");
	ret2 = ft_printf("|%-\*.*llF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0997");
	ret1 = fprintf(fppres, "|%-\*.*jF|\n", width, precision, var);
	ft_printf("#0997");
	ret2 = ft_printf("|%-\*.*jF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0998");
	ret1 = fprintf(fppres, "|%-\*.*zF|\n", width, precision, var);
	ft_printf("#0998");
	ret2 = ft_printf("|%-\*.*zF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0999");
	ret1 = fprintf(fppres, "|%-\*.*F|\n", width, precision, var);
	ft_printf("#0999");
	ret2 = ft_printf("|%-\*.*F|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1000");
	ret1 = fprintf(fppres, "|%-\*.* |\n", width, precision, var);
	ft_printf("#1000");
	ret2 = ft_printf("|%-\*.* |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1001");
	ret1 = fprintf(fppres, "|%-\*.*hh |\n", width, precision, var);
	ft_printf("#1001");
	ret2 = ft_printf("|%-\*.*hh |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1002");
	ret1 = fprintf(fppres, "|%-\*.*h |\n", width, precision, var);
	ft_printf("#1002");
	ret2 = ft_printf("|%-\*.*h |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1003");
	ret1 = fprintf(fppres, "|%-\*.*l |\n", width, precision, var);
	ft_printf("#1003");
	ret2 = ft_printf("|%-\*.*l |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1004");
	ret1 = fprintf(fppres, "|%-\*.*ll |\n", width, precision, var);
	ft_printf("#1004");
	ret2 = ft_printf("|%-\*.*ll |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1005");
	ret1 = fprintf(fppres, "|%-\*.*j |\n", width, precision, var);
	ft_printf("#1005");
	ret2 = ft_printf("|%-\*.*j |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1006");
	ret1 = fprintf(fppres, "|%-\*.*z |\n", width, precision, var);
	ft_printf("#1006");
	ret2 = ft_printf("|%-\*.*z |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1007");
	ret1 = fprintf(fppres, "|%-\*.* |\n", width, precision, var);
	ft_printf("#1007");
	ret2 = ft_printf("|%-\*.* |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1008");
	ret1 = fprintf(fppres, "|%0-\*.*d|\n", width, precision, var);
	ft_printf("#1008");
	ret2 = ft_printf("|%0-\*.*d|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1009");
	ret1 = fprintf(fppres, "|%0-\*.*hhd|\n", width, precision, var);
	ft_printf("#1009");
	ret2 = ft_printf("|%0-\*.*hhd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1010");
	ret1 = fprintf(fppres, "|%0-\*.*hd|\n", width, precision, var);
	ft_printf("#1010");
	ret2 = ft_printf("|%0-\*.*hd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1011");
	ret1 = fprintf(fppres, "|%0-\*.*ld|\n", width, precision, var);
	ft_printf("#1011");
	ret2 = ft_printf("|%0-\*.*ld|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1012");
	ret1 = fprintf(fppres, "|%0-\*.*lld|\n", width, precision, var);
	ft_printf("#1012");
	ret2 = ft_printf("|%0-\*.*lld|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1013");
	ret1 = fprintf(fppres, "|%0-\*.*jd|\n", width, precision, var);
	ft_printf("#1013");
	ret2 = ft_printf("|%0-\*.*jd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1014");
	ret1 = fprintf(fppres, "|%0-\*.*zd|\n", width, precision, var);
	ft_printf("#1014");
	ret2 = ft_printf("|%0-\*.*zd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1015");
	ret1 = fprintf(fppres, "|%0-\*.*d|\n", width, precision, var);
	ft_printf("#1015");
	ret2 = ft_printf("|%0-\*.*d|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1016");
	ret1 = fprintf(fppres, "|%0-\*.*i|\n", width, precision, var);
	ft_printf("#1016");
	ret2 = ft_printf("|%0-\*.*i|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1017");
	ret1 = fprintf(fppres, "|%0-\*.*hhi|\n", width, precision, var);
	ft_printf("#1017");
	ret2 = ft_printf("|%0-\*.*hhi|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1018");
	ret1 = fprintf(fppres, "|%0-\*.*hi|\n", width, precision, var);
	ft_printf("#1018");
	ret2 = ft_printf("|%0-\*.*hi|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1019");
	ret1 = fprintf(fppres, "|%0-\*.*li|\n", width, precision, var);
	ft_printf("#1019");
	ret2 = ft_printf("|%0-\*.*li|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1020");
	ret1 = fprintf(fppres, "|%0-\*.*lli|\n", width, precision, var);
	ft_printf("#1020");
	ret2 = ft_printf("|%0-\*.*lli|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1021");
	ret1 = fprintf(fppres, "|%0-\*.*ji|\n", width, precision, var);
	ft_printf("#1021");
	ret2 = ft_printf("|%0-\*.*ji|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1022");
	ret1 = fprintf(fppres, "|%0-\*.*zi|\n", width, precision, var);
	ft_printf("#1022");
	ret2 = ft_printf("|%0-\*.*zi|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1023");
	ret1 = fprintf(fppres, "|%0-\*.*i|\n", width, precision, var);
	ft_printf("#1023");
	ret2 = ft_printf("|%0-\*.*i|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1024");
	ret1 = fprintf(fppres, "|%0-\*.*u|\n", width, precision, var);
	ft_printf("#1024");
	ret2 = ft_printf("|%0-\*.*u|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1025");
	ret1 = fprintf(fppres, "|%0-\*.*hhu|\n", width, precision, var);
	ft_printf("#1025");
	ret2 = ft_printf("|%0-\*.*hhu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1026");
	ret1 = fprintf(fppres, "|%0-\*.*hu|\n", width, precision, var);
	ft_printf("#1026");
	ret2 = ft_printf("|%0-\*.*hu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1027");
	ret1 = fprintf(fppres, "|%0-\*.*lu|\n", width, precision, var);
	ft_printf("#1027");
	ret2 = ft_printf("|%0-\*.*lu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1028");
	ret1 = fprintf(fppres, "|%0-\*.*llu|\n", width, precision, var);
	ft_printf("#1028");
	ret2 = ft_printf("|%0-\*.*llu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1029");
	ret1 = fprintf(fppres, "|%0-\*.*ju|\n", width, precision, var);
	ft_printf("#1029");
	ret2 = ft_printf("|%0-\*.*ju|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1030");
	ret1 = fprintf(fppres, "|%0-\*.*zu|\n", width, precision, var);
	ft_printf("#1030");
	ret2 = ft_printf("|%0-\*.*zu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1031");
	ret1 = fprintf(fppres, "|%0-\*.*u|\n", width, precision, var);
	ft_printf("#1031");
	ret2 = ft_printf("|%0-\*.*u|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1032");
	ret1 = fprintf(fppres, "|%0-\*.*f|\n", width, precision, var);
	ft_printf("#1032");
	ret2 = ft_printf("|%0-\*.*f|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1033");
	ret1 = fprintf(fppres, "|%0-\*.*hhf|\n", width, precision, var);
	ft_printf("#1033");
	ret2 = ft_printf("|%0-\*.*hhf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1034");
	ret1 = fprintf(fppres, "|%0-\*.*hf|\n", width, precision, var);
	ft_printf("#1034");
	ret2 = ft_printf("|%0-\*.*hf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1035");
	ret1 = fprintf(fppres, "|%0-\*.*lf|\n", width, precision, var);
	ft_printf("#1035");
	ret2 = ft_printf("|%0-\*.*lf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1036");
	ret1 = fprintf(fppres, "|%0-\*.*llf|\n", width, precision, var);
	ft_printf("#1036");
	ret2 = ft_printf("|%0-\*.*llf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1037");
	ret1 = fprintf(fppres, "|%0-\*.*jf|\n", width, precision, var);
	ft_printf("#1037");
	ret2 = ft_printf("|%0-\*.*jf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1038");
	ret1 = fprintf(fppres, "|%0-\*.*zf|\n", width, precision, var);
	ft_printf("#1038");
	ret2 = ft_printf("|%0-\*.*zf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1039");
	ret1 = fprintf(fppres, "|%0-\*.*f|\n", width, precision, var);
	ft_printf("#1039");
	ret2 = ft_printf("|%0-\*.*f|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1040");
	ret1 = fprintf(fppres, "|%0-\*.*F|\n", width, precision, var);
	ft_printf("#1040");
	ret2 = ft_printf("|%0-\*.*F|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1041");
	ret1 = fprintf(fppres, "|%0-\*.*hhF|\n", width, precision, var);
	ft_printf("#1041");
	ret2 = ft_printf("|%0-\*.*hhF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1042");
	ret1 = fprintf(fppres, "|%0-\*.*hF|\n", width, precision, var);
	ft_printf("#1042");
	ret2 = ft_printf("|%0-\*.*hF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1043");
	ret1 = fprintf(fppres, "|%0-\*.*lF|\n", width, precision, var);
	ft_printf("#1043");
	ret2 = ft_printf("|%0-\*.*lF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1044");
	ret1 = fprintf(fppres, "|%0-\*.*llF|\n", width, precision, var);
	ft_printf("#1044");
	ret2 = ft_printf("|%0-\*.*llF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1045");
	ret1 = fprintf(fppres, "|%0-\*.*jF|\n", width, precision, var);
	ft_printf("#1045");
	ret2 = ft_printf("|%0-\*.*jF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1046");
	ret1 = fprintf(fppres, "|%0-\*.*zF|\n", width, precision, var);
	ft_printf("#1046");
	ret2 = ft_printf("|%0-\*.*zF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1047");
	ret1 = fprintf(fppres, "|%0-\*.*F|\n", width, precision, var);
	ft_printf("#1047");
	ret2 = ft_printf("|%0-\*.*F|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1048");
	ret1 = fprintf(fppres, "|%0-\*.* |\n", width, precision, var);
	ft_printf("#1048");
	ret2 = ft_printf("|%0-\*.* |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1049");
	ret1 = fprintf(fppres, "|%0-\*.*hh |\n", width, precision, var);
	ft_printf("#1049");
	ret2 = ft_printf("|%0-\*.*hh |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1050");
	ret1 = fprintf(fppres, "|%0-\*.*h |\n", width, precision, var);
	ft_printf("#1050");
	ret2 = ft_printf("|%0-\*.*h |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1051");
	ret1 = fprintf(fppres, "|%0-\*.*l |\n", width, precision, var);
	ft_printf("#1051");
	ret2 = ft_printf("|%0-\*.*l |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1052");
	ret1 = fprintf(fppres, "|%0-\*.*ll |\n", width, precision, var);
	ft_printf("#1052");
	ret2 = ft_printf("|%0-\*.*ll |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1053");
	ret1 = fprintf(fppres, "|%0-\*.*j |\n", width, precision, var);
	ft_printf("#1053");
	ret2 = ft_printf("|%0-\*.*j |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1054");
	ret1 = fprintf(fppres, "|%0-\*.*z |\n", width, precision, var);
	ft_printf("#1054");
	ret2 = ft_printf("|%0-\*.*z |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1055");
	ret1 = fprintf(fppres, "|%0-\*.* |\n", width, precision, var);
	ft_printf("#1055");
	ret2 = ft_printf("|%0-\*.* |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1056");
	ret1 = fprintf(fppres, "|%+-\*.*d|\n", width, precision, var);
	ft_printf("#1056");
	ret2 = ft_printf("|%+-\*.*d|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1057");
	ret1 = fprintf(fppres, "|%+-\*.*hhd|\n", width, precision, var);
	ft_printf("#1057");
	ret2 = ft_printf("|%+-\*.*hhd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1058");
	ret1 = fprintf(fppres, "|%+-\*.*hd|\n", width, precision, var);
	ft_printf("#1058");
	ret2 = ft_printf("|%+-\*.*hd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1059");
	ret1 = fprintf(fppres, "|%+-\*.*ld|\n", width, precision, var);
	ft_printf("#1059");
	ret2 = ft_printf("|%+-\*.*ld|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1060");
	ret1 = fprintf(fppres, "|%+-\*.*lld|\n", width, precision, var);
	ft_printf("#1060");
	ret2 = ft_printf("|%+-\*.*lld|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1061");
	ret1 = fprintf(fppres, "|%+-\*.*jd|\n", width, precision, var);
	ft_printf("#1061");
	ret2 = ft_printf("|%+-\*.*jd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1062");
	ret1 = fprintf(fppres, "|%+-\*.*zd|\n", width, precision, var);
	ft_printf("#1062");
	ret2 = ft_printf("|%+-\*.*zd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1063");
	ret1 = fprintf(fppres, "|%+-\*.*d|\n", width, precision, var);
	ft_printf("#1063");
	ret2 = ft_printf("|%+-\*.*d|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1064");
	ret1 = fprintf(fppres, "|%+-\*.*i|\n", width, precision, var);
	ft_printf("#1064");
	ret2 = ft_printf("|%+-\*.*i|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1065");
	ret1 = fprintf(fppres, "|%+-\*.*hhi|\n", width, precision, var);
	ft_printf("#1065");
	ret2 = ft_printf("|%+-\*.*hhi|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1066");
	ret1 = fprintf(fppres, "|%+-\*.*hi|\n", width, precision, var);
	ft_printf("#1066");
	ret2 = ft_printf("|%+-\*.*hi|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1067");
	ret1 = fprintf(fppres, "|%+-\*.*li|\n", width, precision, var);
	ft_printf("#1067");
	ret2 = ft_printf("|%+-\*.*li|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1068");
	ret1 = fprintf(fppres, "|%+-\*.*lli|\n", width, precision, var);
	ft_printf("#1068");
	ret2 = ft_printf("|%+-\*.*lli|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1069");
	ret1 = fprintf(fppres, "|%+-\*.*ji|\n", width, precision, var);
	ft_printf("#1069");
	ret2 = ft_printf("|%+-\*.*ji|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1070");
	ret1 = fprintf(fppres, "|%+-\*.*zi|\n", width, precision, var);
	ft_printf("#1070");
	ret2 = ft_printf("|%+-\*.*zi|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1071");
	ret1 = fprintf(fppres, "|%+-\*.*i|\n", width, precision, var);
	ft_printf("#1071");
	ret2 = ft_printf("|%+-\*.*i|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1072");
	ret1 = fprintf(fppres, "|%+-\*.*u|\n", width, precision, var);
	ft_printf("#1072");
	ret2 = ft_printf("|%+-\*.*u|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1073");
	ret1 = fprintf(fppres, "|%+-\*.*hhu|\n", width, precision, var);
	ft_printf("#1073");
	ret2 = ft_printf("|%+-\*.*hhu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1074");
	ret1 = fprintf(fppres, "|%+-\*.*hu|\n", width, precision, var);
	ft_printf("#1074");
	ret2 = ft_printf("|%+-\*.*hu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1075");
	ret1 = fprintf(fppres, "|%+-\*.*lu|\n", width, precision, var);
	ft_printf("#1075");
	ret2 = ft_printf("|%+-\*.*lu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1076");
	ret1 = fprintf(fppres, "|%+-\*.*llu|\n", width, precision, var);
	ft_printf("#1076");
	ret2 = ft_printf("|%+-\*.*llu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1077");
	ret1 = fprintf(fppres, "|%+-\*.*ju|\n", width, precision, var);
	ft_printf("#1077");
	ret2 = ft_printf("|%+-\*.*ju|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1078");
	ret1 = fprintf(fppres, "|%+-\*.*zu|\n", width, precision, var);
	ft_printf("#1078");
	ret2 = ft_printf("|%+-\*.*zu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1079");
	ret1 = fprintf(fppres, "|%+-\*.*u|\n", width, precision, var);
	ft_printf("#1079");
	ret2 = ft_printf("|%+-\*.*u|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1080");
	ret1 = fprintf(fppres, "|%+-\*.*f|\n", width, precision, var);
	ft_printf("#1080");
	ret2 = ft_printf("|%+-\*.*f|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1081");
	ret1 = fprintf(fppres, "|%+-\*.*hhf|\n", width, precision, var);
	ft_printf("#1081");
	ret2 = ft_printf("|%+-\*.*hhf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1082");
	ret1 = fprintf(fppres, "|%+-\*.*hf|\n", width, precision, var);
	ft_printf("#1082");
	ret2 = ft_printf("|%+-\*.*hf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1083");
	ret1 = fprintf(fppres, "|%+-\*.*lf|\n", width, precision, var);
	ft_printf("#1083");
	ret2 = ft_printf("|%+-\*.*lf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1084");
	ret1 = fprintf(fppres, "|%+-\*.*llf|\n", width, precision, var);
	ft_printf("#1084");
	ret2 = ft_printf("|%+-\*.*llf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1085");
	ret1 = fprintf(fppres, "|%+-\*.*jf|\n", width, precision, var);
	ft_printf("#1085");
	ret2 = ft_printf("|%+-\*.*jf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1086");
	ret1 = fprintf(fppres, "|%+-\*.*zf|\n", width, precision, var);
	ft_printf("#1086");
	ret2 = ft_printf("|%+-\*.*zf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1087");
	ret1 = fprintf(fppres, "|%+-\*.*f|\n", width, precision, var);
	ft_printf("#1087");
	ret2 = ft_printf("|%+-\*.*f|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1088");
	ret1 = fprintf(fppres, "|%+-\*.*F|\n", width, precision, var);
	ft_printf("#1088");
	ret2 = ft_printf("|%+-\*.*F|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1089");
	ret1 = fprintf(fppres, "|%+-\*.*hhF|\n", width, precision, var);
	ft_printf("#1089");
	ret2 = ft_printf("|%+-\*.*hhF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1090");
	ret1 = fprintf(fppres, "|%+-\*.*hF|\n", width, precision, var);
	ft_printf("#1090");
	ret2 = ft_printf("|%+-\*.*hF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1091");
	ret1 = fprintf(fppres, "|%+-\*.*lF|\n", width, precision, var);
	ft_printf("#1091");
	ret2 = ft_printf("|%+-\*.*lF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1092");
	ret1 = fprintf(fppres, "|%+-\*.*llF|\n", width, precision, var);
	ft_printf("#1092");
	ret2 = ft_printf("|%+-\*.*llF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1093");
	ret1 = fprintf(fppres, "|%+-\*.*jF|\n", width, precision, var);
	ft_printf("#1093");
	ret2 = ft_printf("|%+-\*.*jF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1094");
	ret1 = fprintf(fppres, "|%+-\*.*zF|\n", width, precision, var);
	ft_printf("#1094");
	ret2 = ft_printf("|%+-\*.*zF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1095");
	ret1 = fprintf(fppres, "|%+-\*.*F|\n", width, precision, var);
	ft_printf("#1095");
	ret2 = ft_printf("|%+-\*.*F|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1096");
	ret1 = fprintf(fppres, "|%+-\*.* |\n", width, precision, var);
	ft_printf("#1096");
	ret2 = ft_printf("|%+-\*.* |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1097");
	ret1 = fprintf(fppres, "|%+-\*.*hh |\n", width, precision, var);
	ft_printf("#1097");
	ret2 = ft_printf("|%+-\*.*hh |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1098");
	ret1 = fprintf(fppres, "|%+-\*.*h |\n", width, precision, var);
	ft_printf("#1098");
	ret2 = ft_printf("|%+-\*.*h |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1099");
	ret1 = fprintf(fppres, "|%+-\*.*l |\n", width, precision, var);
	ft_printf("#1099");
	ret2 = ft_printf("|%+-\*.*l |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1100");
	ret1 = fprintf(fppres, "|%+-\*.*ll |\n", width, precision, var);
	ft_printf("#1100");
	ret2 = ft_printf("|%+-\*.*ll |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1101");
	ret1 = fprintf(fppres, "|%+-\*.*j |\n", width, precision, var);
	ft_printf("#1101");
	ret2 = ft_printf("|%+-\*.*j |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1102");
	ret1 = fprintf(fppres, "|%+-\*.*z |\n", width, precision, var);
	ft_printf("#1102");
	ret2 = ft_printf("|%+-\*.*z |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1103");
	ret1 = fprintf(fppres, "|%+-\*.* |\n", width, precision, var);
	ft_printf("#1103");
	ret2 = ft_printf("|%+-\*.* |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1104");
	ret1 = fprintf(fppres, "|%0+-\*.*d|\n", width, precision, var);
	ft_printf("#1104");
	ret2 = ft_printf("|%0+-\*.*d|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1105");
	ret1 = fprintf(fppres, "|%0+-\*.*hhd|\n", width, precision, var);
	ft_printf("#1105");
	ret2 = ft_printf("|%0+-\*.*hhd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1106");
	ret1 = fprintf(fppres, "|%0+-\*.*hd|\n", width, precision, var);
	ft_printf("#1106");
	ret2 = ft_printf("|%0+-\*.*hd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1107");
	ret1 = fprintf(fppres, "|%0+-\*.*ld|\n", width, precision, var);
	ft_printf("#1107");
	ret2 = ft_printf("|%0+-\*.*ld|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1108");
	ret1 = fprintf(fppres, "|%0+-\*.*lld|\n", width, precision, var);
	ft_printf("#1108");
	ret2 = ft_printf("|%0+-\*.*lld|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1109");
	ret1 = fprintf(fppres, "|%0+-\*.*jd|\n", width, precision, var);
	ft_printf("#1109");
	ret2 = ft_printf("|%0+-\*.*jd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1110");
	ret1 = fprintf(fppres, "|%0+-\*.*zd|\n", width, precision, var);
	ft_printf("#1110");
	ret2 = ft_printf("|%0+-\*.*zd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1111");
	ret1 = fprintf(fppres, "|%0+-\*.*d|\n", width, precision, var);
	ft_printf("#1111");
	ret2 = ft_printf("|%0+-\*.*d|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1112");
	ret1 = fprintf(fppres, "|%0+-\*.*i|\n", width, precision, var);
	ft_printf("#1112");
	ret2 = ft_printf("|%0+-\*.*i|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1113");
	ret1 = fprintf(fppres, "|%0+-\*.*hhi|\n", width, precision, var);
	ft_printf("#1113");
	ret2 = ft_printf("|%0+-\*.*hhi|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1114");
	ret1 = fprintf(fppres, "|%0+-\*.*hi|\n", width, precision, var);
	ft_printf("#1114");
	ret2 = ft_printf("|%0+-\*.*hi|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1115");
	ret1 = fprintf(fppres, "|%0+-\*.*li|\n", width, precision, var);
	ft_printf("#1115");
	ret2 = ft_printf("|%0+-\*.*li|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1116");
	ret1 = fprintf(fppres, "|%0+-\*.*lli|\n", width, precision, var);
	ft_printf("#1116");
	ret2 = ft_printf("|%0+-\*.*lli|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1117");
	ret1 = fprintf(fppres, "|%0+-\*.*ji|\n", width, precision, var);
	ft_printf("#1117");
	ret2 = ft_printf("|%0+-\*.*ji|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1118");
	ret1 = fprintf(fppres, "|%0+-\*.*zi|\n", width, precision, var);
	ft_printf("#1118");
	ret2 = ft_printf("|%0+-\*.*zi|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1119");
	ret1 = fprintf(fppres, "|%0+-\*.*i|\n", width, precision, var);
	ft_printf("#1119");
	ret2 = ft_printf("|%0+-\*.*i|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1120");
	ret1 = fprintf(fppres, "|%0+-\*.*u|\n", width, precision, var);
	ft_printf("#1120");
	ret2 = ft_printf("|%0+-\*.*u|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1121");
	ret1 = fprintf(fppres, "|%0+-\*.*hhu|\n", width, precision, var);
	ft_printf("#1121");
	ret2 = ft_printf("|%0+-\*.*hhu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1122");
	ret1 = fprintf(fppres, "|%0+-\*.*hu|\n", width, precision, var);
	ft_printf("#1122");
	ret2 = ft_printf("|%0+-\*.*hu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1123");
	ret1 = fprintf(fppres, "|%0+-\*.*lu|\n", width, precision, var);
	ft_printf("#1123");
	ret2 = ft_printf("|%0+-\*.*lu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1124");
	ret1 = fprintf(fppres, "|%0+-\*.*llu|\n", width, precision, var);
	ft_printf("#1124");
	ret2 = ft_printf("|%0+-\*.*llu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1125");
	ret1 = fprintf(fppres, "|%0+-\*.*ju|\n", width, precision, var);
	ft_printf("#1125");
	ret2 = ft_printf("|%0+-\*.*ju|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1126");
	ret1 = fprintf(fppres, "|%0+-\*.*zu|\n", width, precision, var);
	ft_printf("#1126");
	ret2 = ft_printf("|%0+-\*.*zu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1127");
	ret1 = fprintf(fppres, "|%0+-\*.*u|\n", width, precision, var);
	ft_printf("#1127");
	ret2 = ft_printf("|%0+-\*.*u|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1128");
	ret1 = fprintf(fppres, "|%0+-\*.*f|\n", width, precision, var);
	ft_printf("#1128");
	ret2 = ft_printf("|%0+-\*.*f|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1129");
	ret1 = fprintf(fppres, "|%0+-\*.*hhf|\n", width, precision, var);
	ft_printf("#1129");
	ret2 = ft_printf("|%0+-\*.*hhf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1130");
	ret1 = fprintf(fppres, "|%0+-\*.*hf|\n", width, precision, var);
	ft_printf("#1130");
	ret2 = ft_printf("|%0+-\*.*hf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1131");
	ret1 = fprintf(fppres, "|%0+-\*.*lf|\n", width, precision, var);
	ft_printf("#1131");
	ret2 = ft_printf("|%0+-\*.*lf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1132");
	ret1 = fprintf(fppres, "|%0+-\*.*llf|\n", width, precision, var);
	ft_printf("#1132");
	ret2 = ft_printf("|%0+-\*.*llf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1133");
	ret1 = fprintf(fppres, "|%0+-\*.*jf|\n", width, precision, var);
	ft_printf("#1133");
	ret2 = ft_printf("|%0+-\*.*jf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1134");
	ret1 = fprintf(fppres, "|%0+-\*.*zf|\n", width, precision, var);
	ft_printf("#1134");
	ret2 = ft_printf("|%0+-\*.*zf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1135");
	ret1 = fprintf(fppres, "|%0+-\*.*f|\n", width, precision, var);
	ft_printf("#1135");
	ret2 = ft_printf("|%0+-\*.*f|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1136");
	ret1 = fprintf(fppres, "|%0+-\*.*F|\n", width, precision, var);
	ft_printf("#1136");
	ret2 = ft_printf("|%0+-\*.*F|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1137");
	ret1 = fprintf(fppres, "|%0+-\*.*hhF|\n", width, precision, var);
	ft_printf("#1137");
	ret2 = ft_printf("|%0+-\*.*hhF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1138");
	ret1 = fprintf(fppres, "|%0+-\*.*hF|\n", width, precision, var);
	ft_printf("#1138");
	ret2 = ft_printf("|%0+-\*.*hF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1139");
	ret1 = fprintf(fppres, "|%0+-\*.*lF|\n", width, precision, var);
	ft_printf("#1139");
	ret2 = ft_printf("|%0+-\*.*lF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1140");
	ret1 = fprintf(fppres, "|%0+-\*.*llF|\n", width, precision, var);
	ft_printf("#1140");
	ret2 = ft_printf("|%0+-\*.*llF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1141");
	ret1 = fprintf(fppres, "|%0+-\*.*jF|\n", width, precision, var);
	ft_printf("#1141");
	ret2 = ft_printf("|%0+-\*.*jF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1142");
	ret1 = fprintf(fppres, "|%0+-\*.*zF|\n", width, precision, var);
	ft_printf("#1142");
	ret2 = ft_printf("|%0+-\*.*zF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1143");
	ret1 = fprintf(fppres, "|%0+-\*.*F|\n", width, precision, var);
	ft_printf("#1143");
	ret2 = ft_printf("|%0+-\*.*F|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1144");
	ret1 = fprintf(fppres, "|%0+-\*.* |\n", width, precision, var);
	ft_printf("#1144");
	ret2 = ft_printf("|%0+-\*.* |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1145");
	ret1 = fprintf(fppres, "|%0+-\*.*hh |\n", width, precision, var);
	ft_printf("#1145");
	ret2 = ft_printf("|%0+-\*.*hh |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1146");
	ret1 = fprintf(fppres, "|%0+-\*.*h |\n", width, precision, var);
	ft_printf("#1146");
	ret2 = ft_printf("|%0+-\*.*h |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1147");
	ret1 = fprintf(fppres, "|%0+-\*.*l |\n", width, precision, var);
	ft_printf("#1147");
	ret2 = ft_printf("|%0+-\*.*l |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1148");
	ret1 = fprintf(fppres, "|%0+-\*.*ll |\n", width, precision, var);
	ft_printf("#1148");
	ret2 = ft_printf("|%0+-\*.*ll |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1149");
	ret1 = fprintf(fppres, "|%0+-\*.*j |\n", width, precision, var);
	ft_printf("#1149");
	ret2 = ft_printf("|%0+-\*.*j |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1150");
	ret1 = fprintf(fppres, "|%0+-\*.*z |\n", width, precision, var);
	ft_printf("#1150");
	ret2 = ft_printf("|%0+-\*.*z |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1151");
	ret1 = fprintf(fppres, "|%0+-\*.* |\n", width, precision, var);
	ft_printf("#1151");
	ret2 = ft_printf("|%0+-\*.* |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1152");
	ret1 = fprintf(fppres, "|%#\*.*d|\n", width, precision, var);
	ft_printf("#1152");
	ret2 = ft_printf("|%#\*.*d|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1153");
	ret1 = fprintf(fppres, "|%#\*.*hhd|\n", width, precision, var);
	ft_printf("#1153");
	ret2 = ft_printf("|%#\*.*hhd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1154");
	ret1 = fprintf(fppres, "|%#\*.*hd|\n", width, precision, var);
	ft_printf("#1154");
	ret2 = ft_printf("|%#\*.*hd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1155");
	ret1 = fprintf(fppres, "|%#\*.*ld|\n", width, precision, var);
	ft_printf("#1155");
	ret2 = ft_printf("|%#\*.*ld|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1156");
	ret1 = fprintf(fppres, "|%#\*.*lld|\n", width, precision, var);
	ft_printf("#1156");
	ret2 = ft_printf("|%#\*.*lld|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1157");
	ret1 = fprintf(fppres, "|%#\*.*jd|\n", width, precision, var);
	ft_printf("#1157");
	ret2 = ft_printf("|%#\*.*jd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1158");
	ret1 = fprintf(fppres, "|%#\*.*zd|\n", width, precision, var);
	ft_printf("#1158");
	ret2 = ft_printf("|%#\*.*zd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1159");
	ret1 = fprintf(fppres, "|%#\*.*d|\n", width, precision, var);
	ft_printf("#1159");
	ret2 = ft_printf("|%#\*.*d|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1160");
	ret1 = fprintf(fppres, "|%#\*.*i|\n", width, precision, var);
	ft_printf("#1160");
	ret2 = ft_printf("|%#\*.*i|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1161");
	ret1 = fprintf(fppres, "|%#\*.*hhi|\n", width, precision, var);
	ft_printf("#1161");
	ret2 = ft_printf("|%#\*.*hhi|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1162");
	ret1 = fprintf(fppres, "|%#\*.*hi|\n", width, precision, var);
	ft_printf("#1162");
	ret2 = ft_printf("|%#\*.*hi|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1163");
	ret1 = fprintf(fppres, "|%#\*.*li|\n", width, precision, var);
	ft_printf("#1163");
	ret2 = ft_printf("|%#\*.*li|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1164");
	ret1 = fprintf(fppres, "|%#\*.*lli|\n", width, precision, var);
	ft_printf("#1164");
	ret2 = ft_printf("|%#\*.*lli|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1165");
	ret1 = fprintf(fppres, "|%#\*.*ji|\n", width, precision, var);
	ft_printf("#1165");
	ret2 = ft_printf("|%#\*.*ji|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1166");
	ret1 = fprintf(fppres, "|%#\*.*zi|\n", width, precision, var);
	ft_printf("#1166");
	ret2 = ft_printf("|%#\*.*zi|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1167");
	ret1 = fprintf(fppres, "|%#\*.*i|\n", width, precision, var);
	ft_printf("#1167");
	ret2 = ft_printf("|%#\*.*i|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1168");
	ret1 = fprintf(fppres, "|%#\*.*u|\n", width, precision, var);
	ft_printf("#1168");
	ret2 = ft_printf("|%#\*.*u|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1169");
	ret1 = fprintf(fppres, "|%#\*.*hhu|\n", width, precision, var);
	ft_printf("#1169");
	ret2 = ft_printf("|%#\*.*hhu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1170");
	ret1 = fprintf(fppres, "|%#\*.*hu|\n", width, precision, var);
	ft_printf("#1170");
	ret2 = ft_printf("|%#\*.*hu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1171");
	ret1 = fprintf(fppres, "|%#\*.*lu|\n", width, precision, var);
	ft_printf("#1171");
	ret2 = ft_printf("|%#\*.*lu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1172");
	ret1 = fprintf(fppres, "|%#\*.*llu|\n", width, precision, var);
	ft_printf("#1172");
	ret2 = ft_printf("|%#\*.*llu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1173");
	ret1 = fprintf(fppres, "|%#\*.*ju|\n", width, precision, var);
	ft_printf("#1173");
	ret2 = ft_printf("|%#\*.*ju|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1174");
	ret1 = fprintf(fppres, "|%#\*.*zu|\n", width, precision, var);
	ft_printf("#1174");
	ret2 = ft_printf("|%#\*.*zu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1175");
	ret1 = fprintf(fppres, "|%#\*.*u|\n", width, precision, var);
	ft_printf("#1175");
	ret2 = ft_printf("|%#\*.*u|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1176");
	ret1 = fprintf(fppres, "|%#\*.*f|\n", width, precision, var);
	ft_printf("#1176");
	ret2 = ft_printf("|%#\*.*f|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1177");
	ret1 = fprintf(fppres, "|%#\*.*hhf|\n", width, precision, var);
	ft_printf("#1177");
	ret2 = ft_printf("|%#\*.*hhf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1178");
	ret1 = fprintf(fppres, "|%#\*.*hf|\n", width, precision, var);
	ft_printf("#1178");
	ret2 = ft_printf("|%#\*.*hf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1179");
	ret1 = fprintf(fppres, "|%#\*.*lf|\n", width, precision, var);
	ft_printf("#1179");
	ret2 = ft_printf("|%#\*.*lf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1180");
	ret1 = fprintf(fppres, "|%#\*.*llf|\n", width, precision, var);
	ft_printf("#1180");
	ret2 = ft_printf("|%#\*.*llf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1181");
	ret1 = fprintf(fppres, "|%#\*.*jf|\n", width, precision, var);
	ft_printf("#1181");
	ret2 = ft_printf("|%#\*.*jf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1182");
	ret1 = fprintf(fppres, "|%#\*.*zf|\n", width, precision, var);
	ft_printf("#1182");
	ret2 = ft_printf("|%#\*.*zf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1183");
	ret1 = fprintf(fppres, "|%#\*.*f|\n", width, precision, var);
	ft_printf("#1183");
	ret2 = ft_printf("|%#\*.*f|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1184");
	ret1 = fprintf(fppres, "|%#\*.*F|\n", width, precision, var);
	ft_printf("#1184");
	ret2 = ft_printf("|%#\*.*F|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1185");
	ret1 = fprintf(fppres, "|%#\*.*hhF|\n", width, precision, var);
	ft_printf("#1185");
	ret2 = ft_printf("|%#\*.*hhF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1186");
	ret1 = fprintf(fppres, "|%#\*.*hF|\n", width, precision, var);
	ft_printf("#1186");
	ret2 = ft_printf("|%#\*.*hF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1187");
	ret1 = fprintf(fppres, "|%#\*.*lF|\n", width, precision, var);
	ft_printf("#1187");
	ret2 = ft_printf("|%#\*.*lF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1188");
	ret1 = fprintf(fppres, "|%#\*.*llF|\n", width, precision, var);
	ft_printf("#1188");
	ret2 = ft_printf("|%#\*.*llF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1189");
	ret1 = fprintf(fppres, "|%#\*.*jF|\n", width, precision, var);
	ft_printf("#1189");
	ret2 = ft_printf("|%#\*.*jF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1190");
	ret1 = fprintf(fppres, "|%#\*.*zF|\n", width, precision, var);
	ft_printf("#1190");
	ret2 = ft_printf("|%#\*.*zF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1191");
	ret1 = fprintf(fppres, "|%#\*.*F|\n", width, precision, var);
	ft_printf("#1191");
	ret2 = ft_printf("|%#\*.*F|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1192");
	ret1 = fprintf(fppres, "|%#\*.* |\n", width, precision, var);
	ft_printf("#1192");
	ret2 = ft_printf("|%#\*.* |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1193");
	ret1 = fprintf(fppres, "|%#\*.*hh |\n", width, precision, var);
	ft_printf("#1193");
	ret2 = ft_printf("|%#\*.*hh |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1194");
	ret1 = fprintf(fppres, "|%#\*.*h |\n", width, precision, var);
	ft_printf("#1194");
	ret2 = ft_printf("|%#\*.*h |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1195");
	ret1 = fprintf(fppres, "|%#\*.*l |\n", width, precision, var);
	ft_printf("#1195");
	ret2 = ft_printf("|%#\*.*l |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1196");
	ret1 = fprintf(fppres, "|%#\*.*ll |\n", width, precision, var);
	ft_printf("#1196");
	ret2 = ft_printf("|%#\*.*ll |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1197");
	ret1 = fprintf(fppres, "|%#\*.*j |\n", width, precision, var);
	ft_printf("#1197");
	ret2 = ft_printf("|%#\*.*j |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1198");
	ret1 = fprintf(fppres, "|%#\*.*z |\n", width, precision, var);
	ft_printf("#1198");
	ret2 = ft_printf("|%#\*.*z |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1199");
	ret1 = fprintf(fppres, "|%#\*.* |\n", width, precision, var);
	ft_printf("#1199");
	ret2 = ft_printf("|%#\*.* |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1200");
	ret1 = fprintf(fppres, "|%0#\*.*d|\n", width, precision, var);
	ft_printf("#1200");
	ret2 = ft_printf("|%0#\*.*d|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1201");
	ret1 = fprintf(fppres, "|%0#\*.*hhd|\n", width, precision, var);
	ft_printf("#1201");
	ret2 = ft_printf("|%0#\*.*hhd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1202");
	ret1 = fprintf(fppres, "|%0#\*.*hd|\n", width, precision, var);
	ft_printf("#1202");
	ret2 = ft_printf("|%0#\*.*hd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1203");
	ret1 = fprintf(fppres, "|%0#\*.*ld|\n", width, precision, var);
	ft_printf("#1203");
	ret2 = ft_printf("|%0#\*.*ld|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1204");
	ret1 = fprintf(fppres, "|%0#\*.*lld|\n", width, precision, var);
	ft_printf("#1204");
	ret2 = ft_printf("|%0#\*.*lld|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1205");
	ret1 = fprintf(fppres, "|%0#\*.*jd|\n", width, precision, var);
	ft_printf("#1205");
	ret2 = ft_printf("|%0#\*.*jd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1206");
	ret1 = fprintf(fppres, "|%0#\*.*zd|\n", width, precision, var);
	ft_printf("#1206");
	ret2 = ft_printf("|%0#\*.*zd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1207");
	ret1 = fprintf(fppres, "|%0#\*.*d|\n", width, precision, var);
	ft_printf("#1207");
	ret2 = ft_printf("|%0#\*.*d|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1208");
	ret1 = fprintf(fppres, "|%0#\*.*i|\n", width, precision, var);
	ft_printf("#1208");
	ret2 = ft_printf("|%0#\*.*i|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1209");
	ret1 = fprintf(fppres, "|%0#\*.*hhi|\n", width, precision, var);
	ft_printf("#1209");
	ret2 = ft_printf("|%0#\*.*hhi|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1210");
	ret1 = fprintf(fppres, "|%0#\*.*hi|\n", width, precision, var);
	ft_printf("#1210");
	ret2 = ft_printf("|%0#\*.*hi|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1211");
	ret1 = fprintf(fppres, "|%0#\*.*li|\n", width, precision, var);
	ft_printf("#1211");
	ret2 = ft_printf("|%0#\*.*li|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1212");
	ret1 = fprintf(fppres, "|%0#\*.*lli|\n", width, precision, var);
	ft_printf("#1212");
	ret2 = ft_printf("|%0#\*.*lli|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1213");
	ret1 = fprintf(fppres, "|%0#\*.*ji|\n", width, precision, var);
	ft_printf("#1213");
	ret2 = ft_printf("|%0#\*.*ji|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1214");
	ret1 = fprintf(fppres, "|%0#\*.*zi|\n", width, precision, var);
	ft_printf("#1214");
	ret2 = ft_printf("|%0#\*.*zi|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1215");
	ret1 = fprintf(fppres, "|%0#\*.*i|\n", width, precision, var);
	ft_printf("#1215");
	ret2 = ft_printf("|%0#\*.*i|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1216");
	ret1 = fprintf(fppres, "|%0#\*.*u|\n", width, precision, var);
	ft_printf("#1216");
	ret2 = ft_printf("|%0#\*.*u|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1217");
	ret1 = fprintf(fppres, "|%0#\*.*hhu|\n", width, precision, var);
	ft_printf("#1217");
	ret2 = ft_printf("|%0#\*.*hhu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1218");
	ret1 = fprintf(fppres, "|%0#\*.*hu|\n", width, precision, var);
	ft_printf("#1218");
	ret2 = ft_printf("|%0#\*.*hu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1219");
	ret1 = fprintf(fppres, "|%0#\*.*lu|\n", width, precision, var);
	ft_printf("#1219");
	ret2 = ft_printf("|%0#\*.*lu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1220");
	ret1 = fprintf(fppres, "|%0#\*.*llu|\n", width, precision, var);
	ft_printf("#1220");
	ret2 = ft_printf("|%0#\*.*llu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1221");
	ret1 = fprintf(fppres, "|%0#\*.*ju|\n", width, precision, var);
	ft_printf("#1221");
	ret2 = ft_printf("|%0#\*.*ju|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1222");
	ret1 = fprintf(fppres, "|%0#\*.*zu|\n", width, precision, var);
	ft_printf("#1222");
	ret2 = ft_printf("|%0#\*.*zu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1223");
	ret1 = fprintf(fppres, "|%0#\*.*u|\n", width, precision, var);
	ft_printf("#1223");
	ret2 = ft_printf("|%0#\*.*u|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1224");
	ret1 = fprintf(fppres, "|%0#\*.*f|\n", width, precision, var);
	ft_printf("#1224");
	ret2 = ft_printf("|%0#\*.*f|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1225");
	ret1 = fprintf(fppres, "|%0#\*.*hhf|\n", width, precision, var);
	ft_printf("#1225");
	ret2 = ft_printf("|%0#\*.*hhf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1226");
	ret1 = fprintf(fppres, "|%0#\*.*hf|\n", width, precision, var);
	ft_printf("#1226");
	ret2 = ft_printf("|%0#\*.*hf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1227");
	ret1 = fprintf(fppres, "|%0#\*.*lf|\n", width, precision, var);
	ft_printf("#1227");
	ret2 = ft_printf("|%0#\*.*lf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1228");
	ret1 = fprintf(fppres, "|%0#\*.*llf|\n", width, precision, var);
	ft_printf("#1228");
	ret2 = ft_printf("|%0#\*.*llf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1229");
	ret1 = fprintf(fppres, "|%0#\*.*jf|\n", width, precision, var);
	ft_printf("#1229");
	ret2 = ft_printf("|%0#\*.*jf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1230");
	ret1 = fprintf(fppres, "|%0#\*.*zf|\n", width, precision, var);
	ft_printf("#1230");
	ret2 = ft_printf("|%0#\*.*zf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1231");
	ret1 = fprintf(fppres, "|%0#\*.*f|\n", width, precision, var);
	ft_printf("#1231");
	ret2 = ft_printf("|%0#\*.*f|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1232");
	ret1 = fprintf(fppres, "|%0#\*.*F|\n", width, precision, var);
	ft_printf("#1232");
	ret2 = ft_printf("|%0#\*.*F|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1233");
	ret1 = fprintf(fppres, "|%0#\*.*hhF|\n", width, precision, var);
	ft_printf("#1233");
	ret2 = ft_printf("|%0#\*.*hhF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1234");
	ret1 = fprintf(fppres, "|%0#\*.*hF|\n", width, precision, var);
	ft_printf("#1234");
	ret2 = ft_printf("|%0#\*.*hF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1235");
	ret1 = fprintf(fppres, "|%0#\*.*lF|\n", width, precision, var);
	ft_printf("#1235");
	ret2 = ft_printf("|%0#\*.*lF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1236");
	ret1 = fprintf(fppres, "|%0#\*.*llF|\n", width, precision, var);
	ft_printf("#1236");
	ret2 = ft_printf("|%0#\*.*llF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1237");
	ret1 = fprintf(fppres, "|%0#\*.*jF|\n", width, precision, var);
	ft_printf("#1237");
	ret2 = ft_printf("|%0#\*.*jF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1238");
	ret1 = fprintf(fppres, "|%0#\*.*zF|\n", width, precision, var);
	ft_printf("#1238");
	ret2 = ft_printf("|%0#\*.*zF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1239");
	ret1 = fprintf(fppres, "|%0#\*.*F|\n", width, precision, var);
	ft_printf("#1239");
	ret2 = ft_printf("|%0#\*.*F|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1240");
	ret1 = fprintf(fppres, "|%0#\*.* |\n", width, precision, var);
	ft_printf("#1240");
	ret2 = ft_printf("|%0#\*.* |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1241");
	ret1 = fprintf(fppres, "|%0#\*.*hh |\n", width, precision, var);
	ft_printf("#1241");
	ret2 = ft_printf("|%0#\*.*hh |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1242");
	ret1 = fprintf(fppres, "|%0#\*.*h |\n", width, precision, var);
	ft_printf("#1242");
	ret2 = ft_printf("|%0#\*.*h |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1243");
	ret1 = fprintf(fppres, "|%0#\*.*l |\n", width, precision, var);
	ft_printf("#1243");
	ret2 = ft_printf("|%0#\*.*l |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1244");
	ret1 = fprintf(fppres, "|%0#\*.*ll |\n", width, precision, var);
	ft_printf("#1244");
	ret2 = ft_printf("|%0#\*.*ll |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1245");
	ret1 = fprintf(fppres, "|%0#\*.*j |\n", width, precision, var);
	ft_printf("#1245");
	ret2 = ft_printf("|%0#\*.*j |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1246");
	ret1 = fprintf(fppres, "|%0#\*.*z |\n", width, precision, var);
	ft_printf("#1246");
	ret2 = ft_printf("|%0#\*.*z |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1247");
	ret1 = fprintf(fppres, "|%0#\*.* |\n", width, precision, var);
	ft_printf("#1247");
	ret2 = ft_printf("|%0#\*.* |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1248");
	ret1 = fprintf(fppres, "|%+#\*.*d|\n", width, precision, var);
	ft_printf("#1248");
	ret2 = ft_printf("|%+#\*.*d|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1249");
	ret1 = fprintf(fppres, "|%+#\*.*hhd|\n", width, precision, var);
	ft_printf("#1249");
	ret2 = ft_printf("|%+#\*.*hhd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1250");
	ret1 = fprintf(fppres, "|%+#\*.*hd|\n", width, precision, var);
	ft_printf("#1250");
	ret2 = ft_printf("|%+#\*.*hd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1251");
	ret1 = fprintf(fppres, "|%+#\*.*ld|\n", width, precision, var);
	ft_printf("#1251");
	ret2 = ft_printf("|%+#\*.*ld|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1252");
	ret1 = fprintf(fppres, "|%+#\*.*lld|\n", width, precision, var);
	ft_printf("#1252");
	ret2 = ft_printf("|%+#\*.*lld|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1253");
	ret1 = fprintf(fppres, "|%+#\*.*jd|\n", width, precision, var);
	ft_printf("#1253");
	ret2 = ft_printf("|%+#\*.*jd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1254");
	ret1 = fprintf(fppres, "|%+#\*.*zd|\n", width, precision, var);
	ft_printf("#1254");
	ret2 = ft_printf("|%+#\*.*zd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1255");
	ret1 = fprintf(fppres, "|%+#\*.*d|\n", width, precision, var);
	ft_printf("#1255");
	ret2 = ft_printf("|%+#\*.*d|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1256");
	ret1 = fprintf(fppres, "|%+#\*.*i|\n", width, precision, var);
	ft_printf("#1256");
	ret2 = ft_printf("|%+#\*.*i|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1257");
	ret1 = fprintf(fppres, "|%+#\*.*hhi|\n", width, precision, var);
	ft_printf("#1257");
	ret2 = ft_printf("|%+#\*.*hhi|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1258");
	ret1 = fprintf(fppres, "|%+#\*.*hi|\n", width, precision, var);
	ft_printf("#1258");
	ret2 = ft_printf("|%+#\*.*hi|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1259");
	ret1 = fprintf(fppres, "|%+#\*.*li|\n", width, precision, var);
	ft_printf("#1259");
	ret2 = ft_printf("|%+#\*.*li|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1260");
	ret1 = fprintf(fppres, "|%+#\*.*lli|\n", width, precision, var);
	ft_printf("#1260");
	ret2 = ft_printf("|%+#\*.*lli|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1261");
	ret1 = fprintf(fppres, "|%+#\*.*ji|\n", width, precision, var);
	ft_printf("#1261");
	ret2 = ft_printf("|%+#\*.*ji|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1262");
	ret1 = fprintf(fppres, "|%+#\*.*zi|\n", width, precision, var);
	ft_printf("#1262");
	ret2 = ft_printf("|%+#\*.*zi|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1263");
	ret1 = fprintf(fppres, "|%+#\*.*i|\n", width, precision, var);
	ft_printf("#1263");
	ret2 = ft_printf("|%+#\*.*i|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1264");
	ret1 = fprintf(fppres, "|%+#\*.*u|\n", width, precision, var);
	ft_printf("#1264");
	ret2 = ft_printf("|%+#\*.*u|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1265");
	ret1 = fprintf(fppres, "|%+#\*.*hhu|\n", width, precision, var);
	ft_printf("#1265");
	ret2 = ft_printf("|%+#\*.*hhu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1266");
	ret1 = fprintf(fppres, "|%+#\*.*hu|\n", width, precision, var);
	ft_printf("#1266");
	ret2 = ft_printf("|%+#\*.*hu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1267");
	ret1 = fprintf(fppres, "|%+#\*.*lu|\n", width, precision, var);
	ft_printf("#1267");
	ret2 = ft_printf("|%+#\*.*lu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1268");
	ret1 = fprintf(fppres, "|%+#\*.*llu|\n", width, precision, var);
	ft_printf("#1268");
	ret2 = ft_printf("|%+#\*.*llu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1269");
	ret1 = fprintf(fppres, "|%+#\*.*ju|\n", width, precision, var);
	ft_printf("#1269");
	ret2 = ft_printf("|%+#\*.*ju|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1270");
	ret1 = fprintf(fppres, "|%+#\*.*zu|\n", width, precision, var);
	ft_printf("#1270");
	ret2 = ft_printf("|%+#\*.*zu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1271");
	ret1 = fprintf(fppres, "|%+#\*.*u|\n", width, precision, var);
	ft_printf("#1271");
	ret2 = ft_printf("|%+#\*.*u|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1272");
	ret1 = fprintf(fppres, "|%+#\*.*f|\n", width, precision, var);
	ft_printf("#1272");
	ret2 = ft_printf("|%+#\*.*f|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1273");
	ret1 = fprintf(fppres, "|%+#\*.*hhf|\n", width, precision, var);
	ft_printf("#1273");
	ret2 = ft_printf("|%+#\*.*hhf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1274");
	ret1 = fprintf(fppres, "|%+#\*.*hf|\n", width, precision, var);
	ft_printf("#1274");
	ret2 = ft_printf("|%+#\*.*hf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1275");
	ret1 = fprintf(fppres, "|%+#\*.*lf|\n", width, precision, var);
	ft_printf("#1275");
	ret2 = ft_printf("|%+#\*.*lf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1276");
	ret1 = fprintf(fppres, "|%+#\*.*llf|\n", width, precision, var);
	ft_printf("#1276");
	ret2 = ft_printf("|%+#\*.*llf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1277");
	ret1 = fprintf(fppres, "|%+#\*.*jf|\n", width, precision, var);
	ft_printf("#1277");
	ret2 = ft_printf("|%+#\*.*jf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1278");
	ret1 = fprintf(fppres, "|%+#\*.*zf|\n", width, precision, var);
	ft_printf("#1278");
	ret2 = ft_printf("|%+#\*.*zf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1279");
	ret1 = fprintf(fppres, "|%+#\*.*f|\n", width, precision, var);
	ft_printf("#1279");
	ret2 = ft_printf("|%+#\*.*f|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1280");
	ret1 = fprintf(fppres, "|%+#\*.*F|\n", width, precision, var);
	ft_printf("#1280");
	ret2 = ft_printf("|%+#\*.*F|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1281");
	ret1 = fprintf(fppres, "|%+#\*.*hhF|\n", width, precision, var);
	ft_printf("#1281");
	ret2 = ft_printf("|%+#\*.*hhF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1282");
	ret1 = fprintf(fppres, "|%+#\*.*hF|\n", width, precision, var);
	ft_printf("#1282");
	ret2 = ft_printf("|%+#\*.*hF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1283");
	ret1 = fprintf(fppres, "|%+#\*.*lF|\n", width, precision, var);
	ft_printf("#1283");
	ret2 = ft_printf("|%+#\*.*lF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1284");
	ret1 = fprintf(fppres, "|%+#\*.*llF|\n", width, precision, var);
	ft_printf("#1284");
	ret2 = ft_printf("|%+#\*.*llF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1285");
	ret1 = fprintf(fppres, "|%+#\*.*jF|\n", width, precision, var);
	ft_printf("#1285");
	ret2 = ft_printf("|%+#\*.*jF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1286");
	ret1 = fprintf(fppres, "|%+#\*.*zF|\n", width, precision, var);
	ft_printf("#1286");
	ret2 = ft_printf("|%+#\*.*zF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1287");
	ret1 = fprintf(fppres, "|%+#\*.*F|\n", width, precision, var);
	ft_printf("#1287");
	ret2 = ft_printf("|%+#\*.*F|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1288");
	ret1 = fprintf(fppres, "|%+#\*.* |\n", width, precision, var);
	ft_printf("#1288");
	ret2 = ft_printf("|%+#\*.* |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1289");
	ret1 = fprintf(fppres, "|%+#\*.*hh |\n", width, precision, var);
	ft_printf("#1289");
	ret2 = ft_printf("|%+#\*.*hh |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1290");
	ret1 = fprintf(fppres, "|%+#\*.*h |\n", width, precision, var);
	ft_printf("#1290");
	ret2 = ft_printf("|%+#\*.*h |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1291");
	ret1 = fprintf(fppres, "|%+#\*.*l |\n", width, precision, var);
	ft_printf("#1291");
	ret2 = ft_printf("|%+#\*.*l |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1292");
	ret1 = fprintf(fppres, "|%+#\*.*ll |\n", width, precision, var);
	ft_printf("#1292");
	ret2 = ft_printf("|%+#\*.*ll |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1293");
	ret1 = fprintf(fppres, "|%+#\*.*j |\n", width, precision, var);
	ft_printf("#1293");
	ret2 = ft_printf("|%+#\*.*j |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1294");
	ret1 = fprintf(fppres, "|%+#\*.*z |\n", width, precision, var);
	ft_printf("#1294");
	ret2 = ft_printf("|%+#\*.*z |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1295");
	ret1 = fprintf(fppres, "|%+#\*.* |\n", width, precision, var);
	ft_printf("#1295");
	ret2 = ft_printf("|%+#\*.* |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1296");
	ret1 = fprintf(fppres, "|%0+#\*.*d|\n", width, precision, var);
	ft_printf("#1296");
	ret2 = ft_printf("|%0+#\*.*d|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1297");
	ret1 = fprintf(fppres, "|%0+#\*.*hhd|\n", width, precision, var);
	ft_printf("#1297");
	ret2 = ft_printf("|%0+#\*.*hhd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1298");
	ret1 = fprintf(fppres, "|%0+#\*.*hd|\n", width, precision, var);
	ft_printf("#1298");
	ret2 = ft_printf("|%0+#\*.*hd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1299");
	ret1 = fprintf(fppres, "|%0+#\*.*ld|\n", width, precision, var);
	ft_printf("#1299");
	ret2 = ft_printf("|%0+#\*.*ld|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1300");
	ret1 = fprintf(fppres, "|%0+#\*.*lld|\n", width, precision, var);
	ft_printf("#1300");
	ret2 = ft_printf("|%0+#\*.*lld|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1301");
	ret1 = fprintf(fppres, "|%0+#\*.*jd|\n", width, precision, var);
	ft_printf("#1301");
	ret2 = ft_printf("|%0+#\*.*jd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1302");
	ret1 = fprintf(fppres, "|%0+#\*.*zd|\n", width, precision, var);
	ft_printf("#1302");
	ret2 = ft_printf("|%0+#\*.*zd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1303");
	ret1 = fprintf(fppres, "|%0+#\*.*d|\n", width, precision, var);
	ft_printf("#1303");
	ret2 = ft_printf("|%0+#\*.*d|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1304");
	ret1 = fprintf(fppres, "|%0+#\*.*i|\n", width, precision, var);
	ft_printf("#1304");
	ret2 = ft_printf("|%0+#\*.*i|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1305");
	ret1 = fprintf(fppres, "|%0+#\*.*hhi|\n", width, precision, var);
	ft_printf("#1305");
	ret2 = ft_printf("|%0+#\*.*hhi|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1306");
	ret1 = fprintf(fppres, "|%0+#\*.*hi|\n", width, precision, var);
	ft_printf("#1306");
	ret2 = ft_printf("|%0+#\*.*hi|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1307");
	ret1 = fprintf(fppres, "|%0+#\*.*li|\n", width, precision, var);
	ft_printf("#1307");
	ret2 = ft_printf("|%0+#\*.*li|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1308");
	ret1 = fprintf(fppres, "|%0+#\*.*lli|\n", width, precision, var);
	ft_printf("#1308");
	ret2 = ft_printf("|%0+#\*.*lli|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1309");
	ret1 = fprintf(fppres, "|%0+#\*.*ji|\n", width, precision, var);
	ft_printf("#1309");
	ret2 = ft_printf("|%0+#\*.*ji|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1310");
	ret1 = fprintf(fppres, "|%0+#\*.*zi|\n", width, precision, var);
	ft_printf("#1310");
	ret2 = ft_printf("|%0+#\*.*zi|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1311");
	ret1 = fprintf(fppres, "|%0+#\*.*i|\n", width, precision, var);
	ft_printf("#1311");
	ret2 = ft_printf("|%0+#\*.*i|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1312");
	ret1 = fprintf(fppres, "|%0+#\*.*u|\n", width, precision, var);
	ft_printf("#1312");
	ret2 = ft_printf("|%0+#\*.*u|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1313");
	ret1 = fprintf(fppres, "|%0+#\*.*hhu|\n", width, precision, var);
	ft_printf("#1313");
	ret2 = ft_printf("|%0+#\*.*hhu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1314");
	ret1 = fprintf(fppres, "|%0+#\*.*hu|\n", width, precision, var);
	ft_printf("#1314");
	ret2 = ft_printf("|%0+#\*.*hu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1315");
	ret1 = fprintf(fppres, "|%0+#\*.*lu|\n", width, precision, var);
	ft_printf("#1315");
	ret2 = ft_printf("|%0+#\*.*lu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1316");
	ret1 = fprintf(fppres, "|%0+#\*.*llu|\n", width, precision, var);
	ft_printf("#1316");
	ret2 = ft_printf("|%0+#\*.*llu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1317");
	ret1 = fprintf(fppres, "|%0+#\*.*ju|\n", width, precision, var);
	ft_printf("#1317");
	ret2 = ft_printf("|%0+#\*.*ju|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1318");
	ret1 = fprintf(fppres, "|%0+#\*.*zu|\n", width, precision, var);
	ft_printf("#1318");
	ret2 = ft_printf("|%0+#\*.*zu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1319");
	ret1 = fprintf(fppres, "|%0+#\*.*u|\n", width, precision, var);
	ft_printf("#1319");
	ret2 = ft_printf("|%0+#\*.*u|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1320");
	ret1 = fprintf(fppres, "|%0+#\*.*f|\n", width, precision, var);
	ft_printf("#1320");
	ret2 = ft_printf("|%0+#\*.*f|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1321");
	ret1 = fprintf(fppres, "|%0+#\*.*hhf|\n", width, precision, var);
	ft_printf("#1321");
	ret2 = ft_printf("|%0+#\*.*hhf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1322");
	ret1 = fprintf(fppres, "|%0+#\*.*hf|\n", width, precision, var);
	ft_printf("#1322");
	ret2 = ft_printf("|%0+#\*.*hf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1323");
	ret1 = fprintf(fppres, "|%0+#\*.*lf|\n", width, precision, var);
	ft_printf("#1323");
	ret2 = ft_printf("|%0+#\*.*lf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1324");
	ret1 = fprintf(fppres, "|%0+#\*.*llf|\n", width, precision, var);
	ft_printf("#1324");
	ret2 = ft_printf("|%0+#\*.*llf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1325");
	ret1 = fprintf(fppres, "|%0+#\*.*jf|\n", width, precision, var);
	ft_printf("#1325");
	ret2 = ft_printf("|%0+#\*.*jf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1326");
	ret1 = fprintf(fppres, "|%0+#\*.*zf|\n", width, precision, var);
	ft_printf("#1326");
	ret2 = ft_printf("|%0+#\*.*zf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1327");
	ret1 = fprintf(fppres, "|%0+#\*.*f|\n", width, precision, var);
	ft_printf("#1327");
	ret2 = ft_printf("|%0+#\*.*f|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1328");
	ret1 = fprintf(fppres, "|%0+#\*.*F|\n", width, precision, var);
	ft_printf("#1328");
	ret2 = ft_printf("|%0+#\*.*F|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1329");
	ret1 = fprintf(fppres, "|%0+#\*.*hhF|\n", width, precision, var);
	ft_printf("#1329");
	ret2 = ft_printf("|%0+#\*.*hhF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1330");
	ret1 = fprintf(fppres, "|%0+#\*.*hF|\n", width, precision, var);
	ft_printf("#1330");
	ret2 = ft_printf("|%0+#\*.*hF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1331");
	ret1 = fprintf(fppres, "|%0+#\*.*lF|\n", width, precision, var);
	ft_printf("#1331");
	ret2 = ft_printf("|%0+#\*.*lF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1332");
	ret1 = fprintf(fppres, "|%0+#\*.*llF|\n", width, precision, var);
	ft_printf("#1332");
	ret2 = ft_printf("|%0+#\*.*llF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1333");
	ret1 = fprintf(fppres, "|%0+#\*.*jF|\n", width, precision, var);
	ft_printf("#1333");
	ret2 = ft_printf("|%0+#\*.*jF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1334");
	ret1 = fprintf(fppres, "|%0+#\*.*zF|\n", width, precision, var);
	ft_printf("#1334");
	ret2 = ft_printf("|%0+#\*.*zF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1335");
	ret1 = fprintf(fppres, "|%0+#\*.*F|\n", width, precision, var);
	ft_printf("#1335");
	ret2 = ft_printf("|%0+#\*.*F|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1336");
	ret1 = fprintf(fppres, "|%0+#\*.* |\n", width, precision, var);
	ft_printf("#1336");
	ret2 = ft_printf("|%0+#\*.* |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1337");
	ret1 = fprintf(fppres, "|%0+#\*.*hh |\n", width, precision, var);
	ft_printf("#1337");
	ret2 = ft_printf("|%0+#\*.*hh |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1338");
	ret1 = fprintf(fppres, "|%0+#\*.*h |\n", width, precision, var);
	ft_printf("#1338");
	ret2 = ft_printf("|%0+#\*.*h |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1339");
	ret1 = fprintf(fppres, "|%0+#\*.*l |\n", width, precision, var);
	ft_printf("#1339");
	ret2 = ft_printf("|%0+#\*.*l |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1340");
	ret1 = fprintf(fppres, "|%0+#\*.*ll |\n", width, precision, var);
	ft_printf("#1340");
	ret2 = ft_printf("|%0+#\*.*ll |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1341");
	ret1 = fprintf(fppres, "|%0+#\*.*j |\n", width, precision, var);
	ft_printf("#1341");
	ret2 = ft_printf("|%0+#\*.*j |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1342");
	ret1 = fprintf(fppres, "|%0+#\*.*z |\n", width, precision, var);
	ft_printf("#1342");
	ret2 = ft_printf("|%0+#\*.*z |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1343");
	ret1 = fprintf(fppres, "|%0+#\*.* |\n", width, precision, var);
	ft_printf("#1343");
	ret2 = ft_printf("|%0+#\*.* |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1344");
	ret1 = fprintf(fppres, "|%-#\*.*d|\n", width, precision, var);
	ft_printf("#1344");
	ret2 = ft_printf("|%-#\*.*d|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1345");
	ret1 = fprintf(fppres, "|%-#\*.*hhd|\n", width, precision, var);
	ft_printf("#1345");
	ret2 = ft_printf("|%-#\*.*hhd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1346");
	ret1 = fprintf(fppres, "|%-#\*.*hd|\n", width, precision, var);
	ft_printf("#1346");
	ret2 = ft_printf("|%-#\*.*hd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1347");
	ret1 = fprintf(fppres, "|%-#\*.*ld|\n", width, precision, var);
	ft_printf("#1347");
	ret2 = ft_printf("|%-#\*.*ld|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1348");
	ret1 = fprintf(fppres, "|%-#\*.*lld|\n", width, precision, var);
	ft_printf("#1348");
	ret2 = ft_printf("|%-#\*.*lld|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1349");
	ret1 = fprintf(fppres, "|%-#\*.*jd|\n", width, precision, var);
	ft_printf("#1349");
	ret2 = ft_printf("|%-#\*.*jd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1350");
	ret1 = fprintf(fppres, "|%-#\*.*zd|\n", width, precision, var);
	ft_printf("#1350");
	ret2 = ft_printf("|%-#\*.*zd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1351");
	ret1 = fprintf(fppres, "|%-#\*.*d|\n", width, precision, var);
	ft_printf("#1351");
	ret2 = ft_printf("|%-#\*.*d|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1352");
	ret1 = fprintf(fppres, "|%-#\*.*i|\n", width, precision, var);
	ft_printf("#1352");
	ret2 = ft_printf("|%-#\*.*i|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1353");
	ret1 = fprintf(fppres, "|%-#\*.*hhi|\n", width, precision, var);
	ft_printf("#1353");
	ret2 = ft_printf("|%-#\*.*hhi|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1354");
	ret1 = fprintf(fppres, "|%-#\*.*hi|\n", width, precision, var);
	ft_printf("#1354");
	ret2 = ft_printf("|%-#\*.*hi|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1355");
	ret1 = fprintf(fppres, "|%-#\*.*li|\n", width, precision, var);
	ft_printf("#1355");
	ret2 = ft_printf("|%-#\*.*li|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1356");
	ret1 = fprintf(fppres, "|%-#\*.*lli|\n", width, precision, var);
	ft_printf("#1356");
	ret2 = ft_printf("|%-#\*.*lli|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1357");
	ret1 = fprintf(fppres, "|%-#\*.*ji|\n", width, precision, var);
	ft_printf("#1357");
	ret2 = ft_printf("|%-#\*.*ji|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1358");
	ret1 = fprintf(fppres, "|%-#\*.*zi|\n", width, precision, var);
	ft_printf("#1358");
	ret2 = ft_printf("|%-#\*.*zi|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1359");
	ret1 = fprintf(fppres, "|%-#\*.*i|\n", width, precision, var);
	ft_printf("#1359");
	ret2 = ft_printf("|%-#\*.*i|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1360");
	ret1 = fprintf(fppres, "|%-#\*.*u|\n", width, precision, var);
	ft_printf("#1360");
	ret2 = ft_printf("|%-#\*.*u|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1361");
	ret1 = fprintf(fppres, "|%-#\*.*hhu|\n", width, precision, var);
	ft_printf("#1361");
	ret2 = ft_printf("|%-#\*.*hhu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1362");
	ret1 = fprintf(fppres, "|%-#\*.*hu|\n", width, precision, var);
	ft_printf("#1362");
	ret2 = ft_printf("|%-#\*.*hu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1363");
	ret1 = fprintf(fppres, "|%-#\*.*lu|\n", width, precision, var);
	ft_printf("#1363");
	ret2 = ft_printf("|%-#\*.*lu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1364");
	ret1 = fprintf(fppres, "|%-#\*.*llu|\n", width, precision, var);
	ft_printf("#1364");
	ret2 = ft_printf("|%-#\*.*llu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1365");
	ret1 = fprintf(fppres, "|%-#\*.*ju|\n", width, precision, var);
	ft_printf("#1365");
	ret2 = ft_printf("|%-#\*.*ju|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1366");
	ret1 = fprintf(fppres, "|%-#\*.*zu|\n", width, precision, var);
	ft_printf("#1366");
	ret2 = ft_printf("|%-#\*.*zu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1367");
	ret1 = fprintf(fppres, "|%-#\*.*u|\n", width, precision, var);
	ft_printf("#1367");
	ret2 = ft_printf("|%-#\*.*u|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1368");
	ret1 = fprintf(fppres, "|%-#\*.*f|\n", width, precision, var);
	ft_printf("#1368");
	ret2 = ft_printf("|%-#\*.*f|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1369");
	ret1 = fprintf(fppres, "|%-#\*.*hhf|\n", width, precision, var);
	ft_printf("#1369");
	ret2 = ft_printf("|%-#\*.*hhf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1370");
	ret1 = fprintf(fppres, "|%-#\*.*hf|\n", width, precision, var);
	ft_printf("#1370");
	ret2 = ft_printf("|%-#\*.*hf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1371");
	ret1 = fprintf(fppres, "|%-#\*.*lf|\n", width, precision, var);
	ft_printf("#1371");
	ret2 = ft_printf("|%-#\*.*lf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1372");
	ret1 = fprintf(fppres, "|%-#\*.*llf|\n", width, precision, var);
	ft_printf("#1372");
	ret2 = ft_printf("|%-#\*.*llf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1373");
	ret1 = fprintf(fppres, "|%-#\*.*jf|\n", width, precision, var);
	ft_printf("#1373");
	ret2 = ft_printf("|%-#\*.*jf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1374");
	ret1 = fprintf(fppres, "|%-#\*.*zf|\n", width, precision, var);
	ft_printf("#1374");
	ret2 = ft_printf("|%-#\*.*zf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1375");
	ret1 = fprintf(fppres, "|%-#\*.*f|\n", width, precision, var);
	ft_printf("#1375");
	ret2 = ft_printf("|%-#\*.*f|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1376");
	ret1 = fprintf(fppres, "|%-#\*.*F|\n", width, precision, var);
	ft_printf("#1376");
	ret2 = ft_printf("|%-#\*.*F|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1377");
	ret1 = fprintf(fppres, "|%-#\*.*hhF|\n", width, precision, var);
	ft_printf("#1377");
	ret2 = ft_printf("|%-#\*.*hhF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1378");
	ret1 = fprintf(fppres, "|%-#\*.*hF|\n", width, precision, var);
	ft_printf("#1378");
	ret2 = ft_printf("|%-#\*.*hF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1379");
	ret1 = fprintf(fppres, "|%-#\*.*lF|\n", width, precision, var);
	ft_printf("#1379");
	ret2 = ft_printf("|%-#\*.*lF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1380");
	ret1 = fprintf(fppres, "|%-#\*.*llF|\n", width, precision, var);
	ft_printf("#1380");
	ret2 = ft_printf("|%-#\*.*llF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1381");
	ret1 = fprintf(fppres, "|%-#\*.*jF|\n", width, precision, var);
	ft_printf("#1381");
	ret2 = ft_printf("|%-#\*.*jF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1382");
	ret1 = fprintf(fppres, "|%-#\*.*zF|\n", width, precision, var);
	ft_printf("#1382");
	ret2 = ft_printf("|%-#\*.*zF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1383");
	ret1 = fprintf(fppres, "|%-#\*.*F|\n", width, precision, var);
	ft_printf("#1383");
	ret2 = ft_printf("|%-#\*.*F|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1384");
	ret1 = fprintf(fppres, "|%-#\*.* |\n", width, precision, var);
	ft_printf("#1384");
	ret2 = ft_printf("|%-#\*.* |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1385");
	ret1 = fprintf(fppres, "|%-#\*.*hh |\n", width, precision, var);
	ft_printf("#1385");
	ret2 = ft_printf("|%-#\*.*hh |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1386");
	ret1 = fprintf(fppres, "|%-#\*.*h |\n", width, precision, var);
	ft_printf("#1386");
	ret2 = ft_printf("|%-#\*.*h |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1387");
	ret1 = fprintf(fppres, "|%-#\*.*l |\n", width, precision, var);
	ft_printf("#1387");
	ret2 = ft_printf("|%-#\*.*l |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1388");
	ret1 = fprintf(fppres, "|%-#\*.*ll |\n", width, precision, var);
	ft_printf("#1388");
	ret2 = ft_printf("|%-#\*.*ll |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1389");
	ret1 = fprintf(fppres, "|%-#\*.*j |\n", width, precision, var);
	ft_printf("#1389");
	ret2 = ft_printf("|%-#\*.*j |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1390");
	ret1 = fprintf(fppres, "|%-#\*.*z |\n", width, precision, var);
	ft_printf("#1390");
	ret2 = ft_printf("|%-#\*.*z |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1391");
	ret1 = fprintf(fppres, "|%-#\*.* |\n", width, precision, var);
	ft_printf("#1391");
	ret2 = ft_printf("|%-#\*.* |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1392");
	ret1 = fprintf(fppres, "|%0-#\*.*d|\n", width, precision, var);
	ft_printf("#1392");
	ret2 = ft_printf("|%0-#\*.*d|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1393");
	ret1 = fprintf(fppres, "|%0-#\*.*hhd|\n", width, precision, var);
	ft_printf("#1393");
	ret2 = ft_printf("|%0-#\*.*hhd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1394");
	ret1 = fprintf(fppres, "|%0-#\*.*hd|\n", width, precision, var);
	ft_printf("#1394");
	ret2 = ft_printf("|%0-#\*.*hd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1395");
	ret1 = fprintf(fppres, "|%0-#\*.*ld|\n", width, precision, var);
	ft_printf("#1395");
	ret2 = ft_printf("|%0-#\*.*ld|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1396");
	ret1 = fprintf(fppres, "|%0-#\*.*lld|\n", width, precision, var);
	ft_printf("#1396");
	ret2 = ft_printf("|%0-#\*.*lld|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1397");
	ret1 = fprintf(fppres, "|%0-#\*.*jd|\n", width, precision, var);
	ft_printf("#1397");
	ret2 = ft_printf("|%0-#\*.*jd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1398");
	ret1 = fprintf(fppres, "|%0-#\*.*zd|\n", width, precision, var);
	ft_printf("#1398");
	ret2 = ft_printf("|%0-#\*.*zd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1399");
	ret1 = fprintf(fppres, "|%0-#\*.*d|\n", width, precision, var);
	ft_printf("#1399");
	ret2 = ft_printf("|%0-#\*.*d|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1400");
	ret1 = fprintf(fppres, "|%0-#\*.*i|\n", width, precision, var);
	ft_printf("#1400");
	ret2 = ft_printf("|%0-#\*.*i|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1401");
	ret1 = fprintf(fppres, "|%0-#\*.*hhi|\n", width, precision, var);
	ft_printf("#1401");
	ret2 = ft_printf("|%0-#\*.*hhi|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1402");
	ret1 = fprintf(fppres, "|%0-#\*.*hi|\n", width, precision, var);
	ft_printf("#1402");
	ret2 = ft_printf("|%0-#\*.*hi|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1403");
	ret1 = fprintf(fppres, "|%0-#\*.*li|\n", width, precision, var);
	ft_printf("#1403");
	ret2 = ft_printf("|%0-#\*.*li|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1404");
	ret1 = fprintf(fppres, "|%0-#\*.*lli|\n", width, precision, var);
	ft_printf("#1404");
	ret2 = ft_printf("|%0-#\*.*lli|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1405");
	ret1 = fprintf(fppres, "|%0-#\*.*ji|\n", width, precision, var);
	ft_printf("#1405");
	ret2 = ft_printf("|%0-#\*.*ji|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1406");
	ret1 = fprintf(fppres, "|%0-#\*.*zi|\n", width, precision, var);
	ft_printf("#1406");
	ret2 = ft_printf("|%0-#\*.*zi|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1407");
	ret1 = fprintf(fppres, "|%0-#\*.*i|\n", width, precision, var);
	ft_printf("#1407");
	ret2 = ft_printf("|%0-#\*.*i|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1408");
	ret1 = fprintf(fppres, "|%0-#\*.*u|\n", width, precision, var);
	ft_printf("#1408");
	ret2 = ft_printf("|%0-#\*.*u|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1409");
	ret1 = fprintf(fppres, "|%0-#\*.*hhu|\n", width, precision, var);
	ft_printf("#1409");
	ret2 = ft_printf("|%0-#\*.*hhu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1410");
	ret1 = fprintf(fppres, "|%0-#\*.*hu|\n", width, precision, var);
	ft_printf("#1410");
	ret2 = ft_printf("|%0-#\*.*hu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1411");
	ret1 = fprintf(fppres, "|%0-#\*.*lu|\n", width, precision, var);
	ft_printf("#1411");
	ret2 = ft_printf("|%0-#\*.*lu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1412");
	ret1 = fprintf(fppres, "|%0-#\*.*llu|\n", width, precision, var);
	ft_printf("#1412");
	ret2 = ft_printf("|%0-#\*.*llu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1413");
	ret1 = fprintf(fppres, "|%0-#\*.*ju|\n", width, precision, var);
	ft_printf("#1413");
	ret2 = ft_printf("|%0-#\*.*ju|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1414");
	ret1 = fprintf(fppres, "|%0-#\*.*zu|\n", width, precision, var);
	ft_printf("#1414");
	ret2 = ft_printf("|%0-#\*.*zu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1415");
	ret1 = fprintf(fppres, "|%0-#\*.*u|\n", width, precision, var);
	ft_printf("#1415");
	ret2 = ft_printf("|%0-#\*.*u|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1416");
	ret1 = fprintf(fppres, "|%0-#\*.*f|\n", width, precision, var);
	ft_printf("#1416");
	ret2 = ft_printf("|%0-#\*.*f|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1417");
	ret1 = fprintf(fppres, "|%0-#\*.*hhf|\n", width, precision, var);
	ft_printf("#1417");
	ret2 = ft_printf("|%0-#\*.*hhf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1418");
	ret1 = fprintf(fppres, "|%0-#\*.*hf|\n", width, precision, var);
	ft_printf("#1418");
	ret2 = ft_printf("|%0-#\*.*hf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1419");
	ret1 = fprintf(fppres, "|%0-#\*.*lf|\n", width, precision, var);
	ft_printf("#1419");
	ret2 = ft_printf("|%0-#\*.*lf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1420");
	ret1 = fprintf(fppres, "|%0-#\*.*llf|\n", width, precision, var);
	ft_printf("#1420");
	ret2 = ft_printf("|%0-#\*.*llf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1421");
	ret1 = fprintf(fppres, "|%0-#\*.*jf|\n", width, precision, var);
	ft_printf("#1421");
	ret2 = ft_printf("|%0-#\*.*jf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1422");
	ret1 = fprintf(fppres, "|%0-#\*.*zf|\n", width, precision, var);
	ft_printf("#1422");
	ret2 = ft_printf("|%0-#\*.*zf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1423");
	ret1 = fprintf(fppres, "|%0-#\*.*f|\n", width, precision, var);
	ft_printf("#1423");
	ret2 = ft_printf("|%0-#\*.*f|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1424");
	ret1 = fprintf(fppres, "|%0-#\*.*F|\n", width, precision, var);
	ft_printf("#1424");
	ret2 = ft_printf("|%0-#\*.*F|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1425");
	ret1 = fprintf(fppres, "|%0-#\*.*hhF|\n", width, precision, var);
	ft_printf("#1425");
	ret2 = ft_printf("|%0-#\*.*hhF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1426");
	ret1 = fprintf(fppres, "|%0-#\*.*hF|\n", width, precision, var);
	ft_printf("#1426");
	ret2 = ft_printf("|%0-#\*.*hF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1427");
	ret1 = fprintf(fppres, "|%0-#\*.*lF|\n", width, precision, var);
	ft_printf("#1427");
	ret2 = ft_printf("|%0-#\*.*lF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1428");
	ret1 = fprintf(fppres, "|%0-#\*.*llF|\n", width, precision, var);
	ft_printf("#1428");
	ret2 = ft_printf("|%0-#\*.*llF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1429");
	ret1 = fprintf(fppres, "|%0-#\*.*jF|\n", width, precision, var);
	ft_printf("#1429");
	ret2 = ft_printf("|%0-#\*.*jF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1430");
	ret1 = fprintf(fppres, "|%0-#\*.*zF|\n", width, precision, var);
	ft_printf("#1430");
	ret2 = ft_printf("|%0-#\*.*zF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1431");
	ret1 = fprintf(fppres, "|%0-#\*.*F|\n", width, precision, var);
	ft_printf("#1431");
	ret2 = ft_printf("|%0-#\*.*F|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1432");
	ret1 = fprintf(fppres, "|%0-#\*.* |\n", width, precision, var);
	ft_printf("#1432");
	ret2 = ft_printf("|%0-#\*.* |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1433");
	ret1 = fprintf(fppres, "|%0-#\*.*hh |\n", width, precision, var);
	ft_printf("#1433");
	ret2 = ft_printf("|%0-#\*.*hh |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1434");
	ret1 = fprintf(fppres, "|%0-#\*.*h |\n", width, precision, var);
	ft_printf("#1434");
	ret2 = ft_printf("|%0-#\*.*h |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1435");
	ret1 = fprintf(fppres, "|%0-#\*.*l |\n", width, precision, var);
	ft_printf("#1435");
	ret2 = ft_printf("|%0-#\*.*l |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1436");
	ret1 = fprintf(fppres, "|%0-#\*.*ll |\n", width, precision, var);
	ft_printf("#1436");
	ret2 = ft_printf("|%0-#\*.*ll |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1437");
	ret1 = fprintf(fppres, "|%0-#\*.*j |\n", width, precision, var);
	ft_printf("#1437");
	ret2 = ft_printf("|%0-#\*.*j |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1438");
	ret1 = fprintf(fppres, "|%0-#\*.*z |\n", width, precision, var);
	ft_printf("#1438");
	ret2 = ft_printf("|%0-#\*.*z |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1439");
	ret1 = fprintf(fppres, "|%0-#\*.* |\n", width, precision, var);
	ft_printf("#1439");
	ret2 = ft_printf("|%0-#\*.* |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1440");
	ret1 = fprintf(fppres, "|%+-#\*.*d|\n", width, precision, var);
	ft_printf("#1440");
	ret2 = ft_printf("|%+-#\*.*d|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1441");
	ret1 = fprintf(fppres, "|%+-#\*.*hhd|\n", width, precision, var);
	ft_printf("#1441");
	ret2 = ft_printf("|%+-#\*.*hhd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1442");
	ret1 = fprintf(fppres, "|%+-#\*.*hd|\n", width, precision, var);
	ft_printf("#1442");
	ret2 = ft_printf("|%+-#\*.*hd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1443");
	ret1 = fprintf(fppres, "|%+-#\*.*ld|\n", width, precision, var);
	ft_printf("#1443");
	ret2 = ft_printf("|%+-#\*.*ld|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1444");
	ret1 = fprintf(fppres, "|%+-#\*.*lld|\n", width, precision, var);
	ft_printf("#1444");
	ret2 = ft_printf("|%+-#\*.*lld|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1445");
	ret1 = fprintf(fppres, "|%+-#\*.*jd|\n", width, precision, var);
	ft_printf("#1445");
	ret2 = ft_printf("|%+-#\*.*jd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1446");
	ret1 = fprintf(fppres, "|%+-#\*.*zd|\n", width, precision, var);
	ft_printf("#1446");
	ret2 = ft_printf("|%+-#\*.*zd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1447");
	ret1 = fprintf(fppres, "|%+-#\*.*d|\n", width, precision, var);
	ft_printf("#1447");
	ret2 = ft_printf("|%+-#\*.*d|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1448");
	ret1 = fprintf(fppres, "|%+-#\*.*i|\n", width, precision, var);
	ft_printf("#1448");
	ret2 = ft_printf("|%+-#\*.*i|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1449");
	ret1 = fprintf(fppres, "|%+-#\*.*hhi|\n", width, precision, var);
	ft_printf("#1449");
	ret2 = ft_printf("|%+-#\*.*hhi|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1450");
	ret1 = fprintf(fppres, "|%+-#\*.*hi|\n", width, precision, var);
	ft_printf("#1450");
	ret2 = ft_printf("|%+-#\*.*hi|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1451");
	ret1 = fprintf(fppres, "|%+-#\*.*li|\n", width, precision, var);
	ft_printf("#1451");
	ret2 = ft_printf("|%+-#\*.*li|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1452");
	ret1 = fprintf(fppres, "|%+-#\*.*lli|\n", width, precision, var);
	ft_printf("#1452");
	ret2 = ft_printf("|%+-#\*.*lli|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1453");
	ret1 = fprintf(fppres, "|%+-#\*.*ji|\n", width, precision, var);
	ft_printf("#1453");
	ret2 = ft_printf("|%+-#\*.*ji|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1454");
	ret1 = fprintf(fppres, "|%+-#\*.*zi|\n", width, precision, var);
	ft_printf("#1454");
	ret2 = ft_printf("|%+-#\*.*zi|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1455");
	ret1 = fprintf(fppres, "|%+-#\*.*i|\n", width, precision, var);
	ft_printf("#1455");
	ret2 = ft_printf("|%+-#\*.*i|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1456");
	ret1 = fprintf(fppres, "|%+-#\*.*u|\n", width, precision, var);
	ft_printf("#1456");
	ret2 = ft_printf("|%+-#\*.*u|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1457");
	ret1 = fprintf(fppres, "|%+-#\*.*hhu|\n", width, precision, var);
	ft_printf("#1457");
	ret2 = ft_printf("|%+-#\*.*hhu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1458");
	ret1 = fprintf(fppres, "|%+-#\*.*hu|\n", width, precision, var);
	ft_printf("#1458");
	ret2 = ft_printf("|%+-#\*.*hu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1459");
	ret1 = fprintf(fppres, "|%+-#\*.*lu|\n", width, precision, var);
	ft_printf("#1459");
	ret2 = ft_printf("|%+-#\*.*lu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1460");
	ret1 = fprintf(fppres, "|%+-#\*.*llu|\n", width, precision, var);
	ft_printf("#1460");
	ret2 = ft_printf("|%+-#\*.*llu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1461");
	ret1 = fprintf(fppres, "|%+-#\*.*ju|\n", width, precision, var);
	ft_printf("#1461");
	ret2 = ft_printf("|%+-#\*.*ju|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1462");
	ret1 = fprintf(fppres, "|%+-#\*.*zu|\n", width, precision, var);
	ft_printf("#1462");
	ret2 = ft_printf("|%+-#\*.*zu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1463");
	ret1 = fprintf(fppres, "|%+-#\*.*u|\n", width, precision, var);
	ft_printf("#1463");
	ret2 = ft_printf("|%+-#\*.*u|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1464");
	ret1 = fprintf(fppres, "|%+-#\*.*f|\n", width, precision, var);
	ft_printf("#1464");
	ret2 = ft_printf("|%+-#\*.*f|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1465");
	ret1 = fprintf(fppres, "|%+-#\*.*hhf|\n", width, precision, var);
	ft_printf("#1465");
	ret2 = ft_printf("|%+-#\*.*hhf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1466");
	ret1 = fprintf(fppres, "|%+-#\*.*hf|\n", width, precision, var);
	ft_printf("#1466");
	ret2 = ft_printf("|%+-#\*.*hf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1467");
	ret1 = fprintf(fppres, "|%+-#\*.*lf|\n", width, precision, var);
	ft_printf("#1467");
	ret2 = ft_printf("|%+-#\*.*lf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1468");
	ret1 = fprintf(fppres, "|%+-#\*.*llf|\n", width, precision, var);
	ft_printf("#1468");
	ret2 = ft_printf("|%+-#\*.*llf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1469");
	ret1 = fprintf(fppres, "|%+-#\*.*jf|\n", width, precision, var);
	ft_printf("#1469");
	ret2 = ft_printf("|%+-#\*.*jf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1470");
	ret1 = fprintf(fppres, "|%+-#\*.*zf|\n", width, precision, var);
	ft_printf("#1470");
	ret2 = ft_printf("|%+-#\*.*zf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1471");
	ret1 = fprintf(fppres, "|%+-#\*.*f|\n", width, precision, var);
	ft_printf("#1471");
	ret2 = ft_printf("|%+-#\*.*f|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1472");
	ret1 = fprintf(fppres, "|%+-#\*.*F|\n", width, precision, var);
	ft_printf("#1472");
	ret2 = ft_printf("|%+-#\*.*F|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1473");
	ret1 = fprintf(fppres, "|%+-#\*.*hhF|\n", width, precision, var);
	ft_printf("#1473");
	ret2 = ft_printf("|%+-#\*.*hhF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1474");
	ret1 = fprintf(fppres, "|%+-#\*.*hF|\n", width, precision, var);
	ft_printf("#1474");
	ret2 = ft_printf("|%+-#\*.*hF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1475");
	ret1 = fprintf(fppres, "|%+-#\*.*lF|\n", width, precision, var);
	ft_printf("#1475");
	ret2 = ft_printf("|%+-#\*.*lF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1476");
	ret1 = fprintf(fppres, "|%+-#\*.*llF|\n", width, precision, var);
	ft_printf("#1476");
	ret2 = ft_printf("|%+-#\*.*llF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1477");
	ret1 = fprintf(fppres, "|%+-#\*.*jF|\n", width, precision, var);
	ft_printf("#1477");
	ret2 = ft_printf("|%+-#\*.*jF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1478");
	ret1 = fprintf(fppres, "|%+-#\*.*zF|\n", width, precision, var);
	ft_printf("#1478");
	ret2 = ft_printf("|%+-#\*.*zF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1479");
	ret1 = fprintf(fppres, "|%+-#\*.*F|\n", width, precision, var);
	ft_printf("#1479");
	ret2 = ft_printf("|%+-#\*.*F|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1480");
	ret1 = fprintf(fppres, "|%+-#\*.* |\n", width, precision, var);
	ft_printf("#1480");
	ret2 = ft_printf("|%+-#\*.* |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1481");
	ret1 = fprintf(fppres, "|%+-#\*.*hh |\n", width, precision, var);
	ft_printf("#1481");
	ret2 = ft_printf("|%+-#\*.*hh |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1482");
	ret1 = fprintf(fppres, "|%+-#\*.*h |\n", width, precision, var);
	ft_printf("#1482");
	ret2 = ft_printf("|%+-#\*.*h |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1483");
	ret1 = fprintf(fppres, "|%+-#\*.*l |\n", width, precision, var);
	ft_printf("#1483");
	ret2 = ft_printf("|%+-#\*.*l |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1484");
	ret1 = fprintf(fppres, "|%+-#\*.*ll |\n", width, precision, var);
	ft_printf("#1484");
	ret2 = ft_printf("|%+-#\*.*ll |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1485");
	ret1 = fprintf(fppres, "|%+-#\*.*j |\n", width, precision, var);
	ft_printf("#1485");
	ret2 = ft_printf("|%+-#\*.*j |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1486");
	ret1 = fprintf(fppres, "|%+-#\*.*z |\n", width, precision, var);
	ft_printf("#1486");
	ret2 = ft_printf("|%+-#\*.*z |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1487");
	ret1 = fprintf(fppres, "|%+-#\*.* |\n", width, precision, var);
	ft_printf("#1487");
	ret2 = ft_printf("|%+-#\*.* |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1488");
	ret1 = fprintf(fppres, "|%0+-#\*.*d|\n", width, precision, var);
	ft_printf("#1488");
	ret2 = ft_printf("|%0+-#\*.*d|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1489");
	ret1 = fprintf(fppres, "|%0+-#\*.*hhd|\n", width, precision, var);
	ft_printf("#1489");
	ret2 = ft_printf("|%0+-#\*.*hhd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1490");
	ret1 = fprintf(fppres, "|%0+-#\*.*hd|\n", width, precision, var);
	ft_printf("#1490");
	ret2 = ft_printf("|%0+-#\*.*hd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1491");
	ret1 = fprintf(fppres, "|%0+-#\*.*ld|\n", width, precision, var);
	ft_printf("#1491");
	ret2 = ft_printf("|%0+-#\*.*ld|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1492");
	ret1 = fprintf(fppres, "|%0+-#\*.*lld|\n", width, precision, var);
	ft_printf("#1492");
	ret2 = ft_printf("|%0+-#\*.*lld|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1493");
	ret1 = fprintf(fppres, "|%0+-#\*.*jd|\n", width, precision, var);
	ft_printf("#1493");
	ret2 = ft_printf("|%0+-#\*.*jd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1494");
	ret1 = fprintf(fppres, "|%0+-#\*.*zd|\n", width, precision, var);
	ft_printf("#1494");
	ret2 = ft_printf("|%0+-#\*.*zd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1495");
	ret1 = fprintf(fppres, "|%0+-#\*.*d|\n", width, precision, var);
	ft_printf("#1495");
	ret2 = ft_printf("|%0+-#\*.*d|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1496");
	ret1 = fprintf(fppres, "|%0+-#\*.*i|\n", width, precision, var);
	ft_printf("#1496");
	ret2 = ft_printf("|%0+-#\*.*i|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1497");
	ret1 = fprintf(fppres, "|%0+-#\*.*hhi|\n", width, precision, var);
	ft_printf("#1497");
	ret2 = ft_printf("|%0+-#\*.*hhi|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1498");
	ret1 = fprintf(fppres, "|%0+-#\*.*hi|\n", width, precision, var);
	ft_printf("#1498");
	ret2 = ft_printf("|%0+-#\*.*hi|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1499");
	ret1 = fprintf(fppres, "|%0+-#\*.*li|\n", width, precision, var);
	ft_printf("#1499");
	ret2 = ft_printf("|%0+-#\*.*li|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1500");
	ret1 = fprintf(fppres, "|%0+-#\*.*lli|\n", width, precision, var);
	ft_printf("#1500");
	ret2 = ft_printf("|%0+-#\*.*lli|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1501");
	ret1 = fprintf(fppres, "|%0+-#\*.*ji|\n", width, precision, var);
	ft_printf("#1501");
	ret2 = ft_printf("|%0+-#\*.*ji|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1502");
	ret1 = fprintf(fppres, "|%0+-#\*.*zi|\n", width, precision, var);
	ft_printf("#1502");
	ret2 = ft_printf("|%0+-#\*.*zi|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1503");
	ret1 = fprintf(fppres, "|%0+-#\*.*i|\n", width, precision, var);
	ft_printf("#1503");
	ret2 = ft_printf("|%0+-#\*.*i|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1504");
	ret1 = fprintf(fppres, "|%0+-#\*.*u|\n", width, precision, var);
	ft_printf("#1504");
	ret2 = ft_printf("|%0+-#\*.*u|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1505");
	ret1 = fprintf(fppres, "|%0+-#\*.*hhu|\n", width, precision, var);
	ft_printf("#1505");
	ret2 = ft_printf("|%0+-#\*.*hhu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1506");
	ret1 = fprintf(fppres, "|%0+-#\*.*hu|\n", width, precision, var);
	ft_printf("#1506");
	ret2 = ft_printf("|%0+-#\*.*hu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1507");
	ret1 = fprintf(fppres, "|%0+-#\*.*lu|\n", width, precision, var);
	ft_printf("#1507");
	ret2 = ft_printf("|%0+-#\*.*lu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1508");
	ret1 = fprintf(fppres, "|%0+-#\*.*llu|\n", width, precision, var);
	ft_printf("#1508");
	ret2 = ft_printf("|%0+-#\*.*llu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1509");
	ret1 = fprintf(fppres, "|%0+-#\*.*ju|\n", width, precision, var);
	ft_printf("#1509");
	ret2 = ft_printf("|%0+-#\*.*ju|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1510");
	ret1 = fprintf(fppres, "|%0+-#\*.*zu|\n", width, precision, var);
	ft_printf("#1510");
	ret2 = ft_printf("|%0+-#\*.*zu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1511");
	ret1 = fprintf(fppres, "|%0+-#\*.*u|\n", width, precision, var);
	ft_printf("#1511");
	ret2 = ft_printf("|%0+-#\*.*u|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1512");
	ret1 = fprintf(fppres, "|%0+-#\*.*f|\n", width, precision, var);
	ft_printf("#1512");
	ret2 = ft_printf("|%0+-#\*.*f|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1513");
	ret1 = fprintf(fppres, "|%0+-#\*.*hhf|\n", width, precision, var);
	ft_printf("#1513");
	ret2 = ft_printf("|%0+-#\*.*hhf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1514");
	ret1 = fprintf(fppres, "|%0+-#\*.*hf|\n", width, precision, var);
	ft_printf("#1514");
	ret2 = ft_printf("|%0+-#\*.*hf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1515");
	ret1 = fprintf(fppres, "|%0+-#\*.*lf|\n", width, precision, var);
	ft_printf("#1515");
	ret2 = ft_printf("|%0+-#\*.*lf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1516");
	ret1 = fprintf(fppres, "|%0+-#\*.*llf|\n", width, precision, var);
	ft_printf("#1516");
	ret2 = ft_printf("|%0+-#\*.*llf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1517");
	ret1 = fprintf(fppres, "|%0+-#\*.*jf|\n", width, precision, var);
	ft_printf("#1517");
	ret2 = ft_printf("|%0+-#\*.*jf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1518");
	ret1 = fprintf(fppres, "|%0+-#\*.*zf|\n", width, precision, var);
	ft_printf("#1518");
	ret2 = ft_printf("|%0+-#\*.*zf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1519");
	ret1 = fprintf(fppres, "|%0+-#\*.*f|\n", width, precision, var);
	ft_printf("#1519");
	ret2 = ft_printf("|%0+-#\*.*f|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1520");
	ret1 = fprintf(fppres, "|%0+-#\*.*F|\n", width, precision, var);
	ft_printf("#1520");
	ret2 = ft_printf("|%0+-#\*.*F|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1521");
	ret1 = fprintf(fppres, "|%0+-#\*.*hhF|\n", width, precision, var);
	ft_printf("#1521");
	ret2 = ft_printf("|%0+-#\*.*hhF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1522");
	ret1 = fprintf(fppres, "|%0+-#\*.*hF|\n", width, precision, var);
	ft_printf("#1522");
	ret2 = ft_printf("|%0+-#\*.*hF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1523");
	ret1 = fprintf(fppres, "|%0+-#\*.*lF|\n", width, precision, var);
	ft_printf("#1523");
	ret2 = ft_printf("|%0+-#\*.*lF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1524");
	ret1 = fprintf(fppres, "|%0+-#\*.*llF|\n", width, precision, var);
	ft_printf("#1524");
	ret2 = ft_printf("|%0+-#\*.*llF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1525");
	ret1 = fprintf(fppres, "|%0+-#\*.*jF|\n", width, precision, var);
	ft_printf("#1525");
	ret2 = ft_printf("|%0+-#\*.*jF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1526");
	ret1 = fprintf(fppres, "|%0+-#\*.*zF|\n", width, precision, var);
	ft_printf("#1526");
	ret2 = ft_printf("|%0+-#\*.*zF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1527");
	ret1 = fprintf(fppres, "|%0+-#\*.*F|\n", width, precision, var);
	ft_printf("#1527");
	ret2 = ft_printf("|%0+-#\*.*F|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1528");
	ret1 = fprintf(fppres, "|%0+-#\*.* |\n", width, precision, var);
	ft_printf("#1528");
	ret2 = ft_printf("|%0+-#\*.* |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1529");
	ret1 = fprintf(fppres, "|%0+-#\*.*hh |\n", width, precision, var);
	ft_printf("#1529");
	ret2 = ft_printf("|%0+-#\*.*hh |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1530");
	ret1 = fprintf(fppres, "|%0+-#\*.*h |\n", width, precision, var);
	ft_printf("#1530");
	ret2 = ft_printf("|%0+-#\*.*h |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1531");
	ret1 = fprintf(fppres, "|%0+-#\*.*l |\n", width, precision, var);
	ft_printf("#1531");
	ret2 = ft_printf("|%0+-#\*.*l |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1532");
	ret1 = fprintf(fppres, "|%0+-#\*.*ll |\n", width, precision, var);
	ft_printf("#1532");
	ret2 = ft_printf("|%0+-#\*.*ll |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1533");
	ret1 = fprintf(fppres, "|%0+-#\*.*j |\n", width, precision, var);
	ft_printf("#1533");
	ret2 = ft_printf("|%0+-#\*.*j |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1534");
	ret1 = fprintf(fppres, "|%0+-#\*.*z |\n", width, precision, var);
	ft_printf("#1534");
	ret2 = ft_printf("|%0+-#\*.*z |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1535");
	ret1 = fprintf(fppres, "|%0+-#\*.* |\n", width, precision, var);
	ft_printf("#1535");
	ret2 = ft_printf("|%0+-#\*.* |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1536");
	ret1 = fprintf(fppres, "|%'*.*d|\n", width, precision, var);
	ft_printf("#1536");
	ret2 = ft_printf("|%'*.*d|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1537");
	ret1 = fprintf(fppres, "|%'*.*hhd|\n", width, precision, var);
	ft_printf("#1537");
	ret2 = ft_printf("|%'*.*hhd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1538");
	ret1 = fprintf(fppres, "|%'*.*hd|\n", width, precision, var);
	ft_printf("#1538");
	ret2 = ft_printf("|%'*.*hd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1539");
	ret1 = fprintf(fppres, "|%'*.*ld|\n", width, precision, var);
	ft_printf("#1539");
	ret2 = ft_printf("|%'*.*ld|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1540");
	ret1 = fprintf(fppres, "|%'*.*lld|\n", width, precision, var);
	ft_printf("#1540");
	ret2 = ft_printf("|%'*.*lld|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1541");
	ret1 = fprintf(fppres, "|%'*.*jd|\n", width, precision, var);
	ft_printf("#1541");
	ret2 = ft_printf("|%'*.*jd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1542");
	ret1 = fprintf(fppres, "|%'*.*zd|\n", width, precision, var);
	ft_printf("#1542");
	ret2 = ft_printf("|%'*.*zd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1543");
	ret1 = fprintf(fppres, "|%'*.*d|\n", width, precision, var);
	ft_printf("#1543");
	ret2 = ft_printf("|%'*.*d|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1544");
	ret1 = fprintf(fppres, "|%'*.*i|\n", width, precision, var);
	ft_printf("#1544");
	ret2 = ft_printf("|%'*.*i|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1545");
	ret1 = fprintf(fppres, "|%'*.*hhi|\n", width, precision, var);
	ft_printf("#1545");
	ret2 = ft_printf("|%'*.*hhi|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1546");
	ret1 = fprintf(fppres, "|%'*.*hi|\n", width, precision, var);
	ft_printf("#1546");
	ret2 = ft_printf("|%'*.*hi|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1547");
	ret1 = fprintf(fppres, "|%'*.*li|\n", width, precision, var);
	ft_printf("#1547");
	ret2 = ft_printf("|%'*.*li|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1548");
	ret1 = fprintf(fppres, "|%'*.*lli|\n", width, precision, var);
	ft_printf("#1548");
	ret2 = ft_printf("|%'*.*lli|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1549");
	ret1 = fprintf(fppres, "|%'*.*ji|\n", width, precision, var);
	ft_printf("#1549");
	ret2 = ft_printf("|%'*.*ji|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1550");
	ret1 = fprintf(fppres, "|%'*.*zi|\n", width, precision, var);
	ft_printf("#1550");
	ret2 = ft_printf("|%'*.*zi|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1551");
	ret1 = fprintf(fppres, "|%'*.*i|\n", width, precision, var);
	ft_printf("#1551");
	ret2 = ft_printf("|%'*.*i|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1552");
	ret1 = fprintf(fppres, "|%'*.*u|\n", width, precision, var);
	ft_printf("#1552");
	ret2 = ft_printf("|%'*.*u|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1553");
	ret1 = fprintf(fppres, "|%'*.*hhu|\n", width, precision, var);
	ft_printf("#1553");
	ret2 = ft_printf("|%'*.*hhu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1554");
	ret1 = fprintf(fppres, "|%'*.*hu|\n", width, precision, var);
	ft_printf("#1554");
	ret2 = ft_printf("|%'*.*hu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1555");
	ret1 = fprintf(fppres, "|%'*.*lu|\n", width, precision, var);
	ft_printf("#1555");
	ret2 = ft_printf("|%'*.*lu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1556");
	ret1 = fprintf(fppres, "|%'*.*llu|\n", width, precision, var);
	ft_printf("#1556");
	ret2 = ft_printf("|%'*.*llu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1557");
	ret1 = fprintf(fppres, "|%'*.*ju|\n", width, precision, var);
	ft_printf("#1557");
	ret2 = ft_printf("|%'*.*ju|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1558");
	ret1 = fprintf(fppres, "|%'*.*zu|\n", width, precision, var);
	ft_printf("#1558");
	ret2 = ft_printf("|%'*.*zu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1559");
	ret1 = fprintf(fppres, "|%'*.*u|\n", width, precision, var);
	ft_printf("#1559");
	ret2 = ft_printf("|%'*.*u|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1560");
	ret1 = fprintf(fppres, "|%'*.*f|\n", width, precision, var);
	ft_printf("#1560");
	ret2 = ft_printf("|%'*.*f|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1561");
	ret1 = fprintf(fppres, "|%'*.*hhf|\n", width, precision, var);
	ft_printf("#1561");
	ret2 = ft_printf("|%'*.*hhf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1562");
	ret1 = fprintf(fppres, "|%'*.*hf|\n", width, precision, var);
	ft_printf("#1562");
	ret2 = ft_printf("|%'*.*hf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1563");
	ret1 = fprintf(fppres, "|%'*.*lf|\n", width, precision, var);
	ft_printf("#1563");
	ret2 = ft_printf("|%'*.*lf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1564");
	ret1 = fprintf(fppres, "|%'*.*llf|\n", width, precision, var);
	ft_printf("#1564");
	ret2 = ft_printf("|%'*.*llf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1565");
	ret1 = fprintf(fppres, "|%'*.*jf|\n", width, precision, var);
	ft_printf("#1565");
	ret2 = ft_printf("|%'*.*jf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1566");
	ret1 = fprintf(fppres, "|%'*.*zf|\n", width, precision, var);
	ft_printf("#1566");
	ret2 = ft_printf("|%'*.*zf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1567");
	ret1 = fprintf(fppres, "|%'*.*f|\n", width, precision, var);
	ft_printf("#1567");
	ret2 = ft_printf("|%'*.*f|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1568");
	ret1 = fprintf(fppres, "|%'*.*F|\n", width, precision, var);
	ft_printf("#1568");
	ret2 = ft_printf("|%'*.*F|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1569");
	ret1 = fprintf(fppres, "|%'*.*hhF|\n", width, precision, var);
	ft_printf("#1569");
	ret2 = ft_printf("|%'*.*hhF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1570");
	ret1 = fprintf(fppres, "|%'*.*hF|\n", width, precision, var);
	ft_printf("#1570");
	ret2 = ft_printf("|%'*.*hF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1571");
	ret1 = fprintf(fppres, "|%'*.*lF|\n", width, precision, var);
	ft_printf("#1571");
	ret2 = ft_printf("|%'*.*lF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1572");
	ret1 = fprintf(fppres, "|%'*.*llF|\n", width, precision, var);
	ft_printf("#1572");
	ret2 = ft_printf("|%'*.*llF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1573");
	ret1 = fprintf(fppres, "|%'*.*jF|\n", width, precision, var);
	ft_printf("#1573");
	ret2 = ft_printf("|%'*.*jF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1574");
	ret1 = fprintf(fppres, "|%'*.*zF|\n", width, precision, var);
	ft_printf("#1574");
	ret2 = ft_printf("|%'*.*zF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1575");
	ret1 = fprintf(fppres, "|%'*.*F|\n", width, precision, var);
	ft_printf("#1575");
	ret2 = ft_printf("|%'*.*F|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1576");
	ret1 = fprintf(fppres, "|%'*.* |\n", width, precision, var);
	ft_printf("#1576");
	ret2 = ft_printf("|%'*.* |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1577");
	ret1 = fprintf(fppres, "|%'*.*hh |\n", width, precision, var);
	ft_printf("#1577");
	ret2 = ft_printf("|%'*.*hh |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1578");
	ret1 = fprintf(fppres, "|%'*.*h |\n", width, precision, var);
	ft_printf("#1578");
	ret2 = ft_printf("|%'*.*h |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1579");
	ret1 = fprintf(fppres, "|%'*.*l |\n", width, precision, var);
	ft_printf("#1579");
	ret2 = ft_printf("|%'*.*l |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1580");
	ret1 = fprintf(fppres, "|%'*.*ll |\n", width, precision, var);
	ft_printf("#1580");
	ret2 = ft_printf("|%'*.*ll |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1581");
	ret1 = fprintf(fppres, "|%'*.*j |\n", width, precision, var);
	ft_printf("#1581");
	ret2 = ft_printf("|%'*.*j |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1582");
	ret1 = fprintf(fppres, "|%'*.*z |\n", width, precision, var);
	ft_printf("#1582");
	ret2 = ft_printf("|%'*.*z |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1583");
	ret1 = fprintf(fppres, "|%'*.* |\n", width, precision, var);
	ft_printf("#1583");
	ret2 = ft_printf("|%'*.* |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1584");
	ret1 = fprintf(fppres, "|%0'*.*d|\n", width, precision, var);
	ft_printf("#1584");
	ret2 = ft_printf("|%0'*.*d|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1585");
	ret1 = fprintf(fppres, "|%0'*.*hhd|\n", width, precision, var);
	ft_printf("#1585");
	ret2 = ft_printf("|%0'*.*hhd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1586");
	ret1 = fprintf(fppres, "|%0'*.*hd|\n", width, precision, var);
	ft_printf("#1586");
	ret2 = ft_printf("|%0'*.*hd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1587");
	ret1 = fprintf(fppres, "|%0'*.*ld|\n", width, precision, var);
	ft_printf("#1587");
	ret2 = ft_printf("|%0'*.*ld|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1588");
	ret1 = fprintf(fppres, "|%0'*.*lld|\n", width, precision, var);
	ft_printf("#1588");
	ret2 = ft_printf("|%0'*.*lld|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1589");
	ret1 = fprintf(fppres, "|%0'*.*jd|\n", width, precision, var);
	ft_printf("#1589");
	ret2 = ft_printf("|%0'*.*jd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1590");
	ret1 = fprintf(fppres, "|%0'*.*zd|\n", width, precision, var);
	ft_printf("#1590");
	ret2 = ft_printf("|%0'*.*zd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1591");
	ret1 = fprintf(fppres, "|%0'*.*d|\n", width, precision, var);
	ft_printf("#1591");
	ret2 = ft_printf("|%0'*.*d|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1592");
	ret1 = fprintf(fppres, "|%0'*.*i|\n", width, precision, var);
	ft_printf("#1592");
	ret2 = ft_printf("|%0'*.*i|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1593");
	ret1 = fprintf(fppres, "|%0'*.*hhi|\n", width, precision, var);
	ft_printf("#1593");
	ret2 = ft_printf("|%0'*.*hhi|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1594");
	ret1 = fprintf(fppres, "|%0'*.*hi|\n", width, precision, var);
	ft_printf("#1594");
	ret2 = ft_printf("|%0'*.*hi|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1595");
	ret1 = fprintf(fppres, "|%0'*.*li|\n", width, precision, var);
	ft_printf("#1595");
	ret2 = ft_printf("|%0'*.*li|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1596");
	ret1 = fprintf(fppres, "|%0'*.*lli|\n", width, precision, var);
	ft_printf("#1596");
	ret2 = ft_printf("|%0'*.*lli|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1597");
	ret1 = fprintf(fppres, "|%0'*.*ji|\n", width, precision, var);
	ft_printf("#1597");
	ret2 = ft_printf("|%0'*.*ji|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1598");
	ret1 = fprintf(fppres, "|%0'*.*zi|\n", width, precision, var);
	ft_printf("#1598");
	ret2 = ft_printf("|%0'*.*zi|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1599");
	ret1 = fprintf(fppres, "|%0'*.*i|\n", width, precision, var);
	ft_printf("#1599");
	ret2 = ft_printf("|%0'*.*i|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1600");
	ret1 = fprintf(fppres, "|%0'*.*u|\n", width, precision, var);
	ft_printf("#1600");
	ret2 = ft_printf("|%0'*.*u|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1601");
	ret1 = fprintf(fppres, "|%0'*.*hhu|\n", width, precision, var);
	ft_printf("#1601");
	ret2 = ft_printf("|%0'*.*hhu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1602");
	ret1 = fprintf(fppres, "|%0'*.*hu|\n", width, precision, var);
	ft_printf("#1602");
	ret2 = ft_printf("|%0'*.*hu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1603");
	ret1 = fprintf(fppres, "|%0'*.*lu|\n", width, precision, var);
	ft_printf("#1603");
	ret2 = ft_printf("|%0'*.*lu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1604");
	ret1 = fprintf(fppres, "|%0'*.*llu|\n", width, precision, var);
	ft_printf("#1604");
	ret2 = ft_printf("|%0'*.*llu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1605");
	ret1 = fprintf(fppres, "|%0'*.*ju|\n", width, precision, var);
	ft_printf("#1605");
	ret2 = ft_printf("|%0'*.*ju|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1606");
	ret1 = fprintf(fppres, "|%0'*.*zu|\n", width, precision, var);
	ft_printf("#1606");
	ret2 = ft_printf("|%0'*.*zu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1607");
	ret1 = fprintf(fppres, "|%0'*.*u|\n", width, precision, var);
	ft_printf("#1607");
	ret2 = ft_printf("|%0'*.*u|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1608");
	ret1 = fprintf(fppres, "|%0'*.*f|\n", width, precision, var);
	ft_printf("#1608");
	ret2 = ft_printf("|%0'*.*f|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1609");
	ret1 = fprintf(fppres, "|%0'*.*hhf|\n", width, precision, var);
	ft_printf("#1609");
	ret2 = ft_printf("|%0'*.*hhf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1610");
	ret1 = fprintf(fppres, "|%0'*.*hf|\n", width, precision, var);
	ft_printf("#1610");
	ret2 = ft_printf("|%0'*.*hf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1611");
	ret1 = fprintf(fppres, "|%0'*.*lf|\n", width, precision, var);
	ft_printf("#1611");
	ret2 = ft_printf("|%0'*.*lf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1612");
	ret1 = fprintf(fppres, "|%0'*.*llf|\n", width, precision, var);
	ft_printf("#1612");
	ret2 = ft_printf("|%0'*.*llf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1613");
	ret1 = fprintf(fppres, "|%0'*.*jf|\n", width, precision, var);
	ft_printf("#1613");
	ret2 = ft_printf("|%0'*.*jf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1614");
	ret1 = fprintf(fppres, "|%0'*.*zf|\n", width, precision, var);
	ft_printf("#1614");
	ret2 = ft_printf("|%0'*.*zf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1615");
	ret1 = fprintf(fppres, "|%0'*.*f|\n", width, precision, var);
	ft_printf("#1615");
	ret2 = ft_printf("|%0'*.*f|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1616");
	ret1 = fprintf(fppres, "|%0'*.*F|\n", width, precision, var);
	ft_printf("#1616");
	ret2 = ft_printf("|%0'*.*F|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1617");
	ret1 = fprintf(fppres, "|%0'*.*hhF|\n", width, precision, var);
	ft_printf("#1617");
	ret2 = ft_printf("|%0'*.*hhF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1618");
	ret1 = fprintf(fppres, "|%0'*.*hF|\n", width, precision, var);
	ft_printf("#1618");
	ret2 = ft_printf("|%0'*.*hF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1619");
	ret1 = fprintf(fppres, "|%0'*.*lF|\n", width, precision, var);
	ft_printf("#1619");
	ret2 = ft_printf("|%0'*.*lF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1620");
	ret1 = fprintf(fppres, "|%0'*.*llF|\n", width, precision, var);
	ft_printf("#1620");
	ret2 = ft_printf("|%0'*.*llF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1621");
	ret1 = fprintf(fppres, "|%0'*.*jF|\n", width, precision, var);
	ft_printf("#1621");
	ret2 = ft_printf("|%0'*.*jF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1622");
	ret1 = fprintf(fppres, "|%0'*.*zF|\n", width, precision, var);
	ft_printf("#1622");
	ret2 = ft_printf("|%0'*.*zF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1623");
	ret1 = fprintf(fppres, "|%0'*.*F|\n", width, precision, var);
	ft_printf("#1623");
	ret2 = ft_printf("|%0'*.*F|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1624");
	ret1 = fprintf(fppres, "|%0'*.* |\n", width, precision, var);
	ft_printf("#1624");
	ret2 = ft_printf("|%0'*.* |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1625");
	ret1 = fprintf(fppres, "|%0'*.*hh |\n", width, precision, var);
	ft_printf("#1625");
	ret2 = ft_printf("|%0'*.*hh |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1626");
	ret1 = fprintf(fppres, "|%0'*.*h |\n", width, precision, var);
	ft_printf("#1626");
	ret2 = ft_printf("|%0'*.*h |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1627");
	ret1 = fprintf(fppres, "|%0'*.*l |\n", width, precision, var);
	ft_printf("#1627");
	ret2 = ft_printf("|%0'*.*l |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1628");
	ret1 = fprintf(fppres, "|%0'*.*ll |\n", width, precision, var);
	ft_printf("#1628");
	ret2 = ft_printf("|%0'*.*ll |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1629");
	ret1 = fprintf(fppres, "|%0'*.*j |\n", width, precision, var);
	ft_printf("#1629");
	ret2 = ft_printf("|%0'*.*j |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1630");
	ret1 = fprintf(fppres, "|%0'*.*z |\n", width, precision, var);
	ft_printf("#1630");
	ret2 = ft_printf("|%0'*.*z |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1631");
	ret1 = fprintf(fppres, "|%0'*.* |\n", width, precision, var);
	ft_printf("#1631");
	ret2 = ft_printf("|%0'*.* |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1632");
	ret1 = fprintf(fppres, "|%+'*.*d|\n", width, precision, var);
	ft_printf("#1632");
	ret2 = ft_printf("|%+'*.*d|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1633");
	ret1 = fprintf(fppres, "|%+'*.*hhd|\n", width, precision, var);
	ft_printf("#1633");
	ret2 = ft_printf("|%+'*.*hhd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1634");
	ret1 = fprintf(fppres, "|%+'*.*hd|\n", width, precision, var);
	ft_printf("#1634");
	ret2 = ft_printf("|%+'*.*hd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1635");
	ret1 = fprintf(fppres, "|%+'*.*ld|\n", width, precision, var);
	ft_printf("#1635");
	ret2 = ft_printf("|%+'*.*ld|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1636");
	ret1 = fprintf(fppres, "|%+'*.*lld|\n", width, precision, var);
	ft_printf("#1636");
	ret2 = ft_printf("|%+'*.*lld|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1637");
	ret1 = fprintf(fppres, "|%+'*.*jd|\n", width, precision, var);
	ft_printf("#1637");
	ret2 = ft_printf("|%+'*.*jd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1638");
	ret1 = fprintf(fppres, "|%+'*.*zd|\n", width, precision, var);
	ft_printf("#1638");
	ret2 = ft_printf("|%+'*.*zd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1639");
	ret1 = fprintf(fppres, "|%+'*.*d|\n", width, precision, var);
	ft_printf("#1639");
	ret2 = ft_printf("|%+'*.*d|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1640");
	ret1 = fprintf(fppres, "|%+'*.*i|\n", width, precision, var);
	ft_printf("#1640");
	ret2 = ft_printf("|%+'*.*i|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1641");
	ret1 = fprintf(fppres, "|%+'*.*hhi|\n", width, precision, var);
	ft_printf("#1641");
	ret2 = ft_printf("|%+'*.*hhi|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1642");
	ret1 = fprintf(fppres, "|%+'*.*hi|\n", width, precision, var);
	ft_printf("#1642");
	ret2 = ft_printf("|%+'*.*hi|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1643");
	ret1 = fprintf(fppres, "|%+'*.*li|\n", width, precision, var);
	ft_printf("#1643");
	ret2 = ft_printf("|%+'*.*li|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1644");
	ret1 = fprintf(fppres, "|%+'*.*lli|\n", width, precision, var);
	ft_printf("#1644");
	ret2 = ft_printf("|%+'*.*lli|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1645");
	ret1 = fprintf(fppres, "|%+'*.*ji|\n", width, precision, var);
	ft_printf("#1645");
	ret2 = ft_printf("|%+'*.*ji|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1646");
	ret1 = fprintf(fppres, "|%+'*.*zi|\n", width, precision, var);
	ft_printf("#1646");
	ret2 = ft_printf("|%+'*.*zi|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1647");
	ret1 = fprintf(fppres, "|%+'*.*i|\n", width, precision, var);
	ft_printf("#1647");
	ret2 = ft_printf("|%+'*.*i|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1648");
	ret1 = fprintf(fppres, "|%+'*.*u|\n", width, precision, var);
	ft_printf("#1648");
	ret2 = ft_printf("|%+'*.*u|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1649");
	ret1 = fprintf(fppres, "|%+'*.*hhu|\n", width, precision, var);
	ft_printf("#1649");
	ret2 = ft_printf("|%+'*.*hhu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1650");
	ret1 = fprintf(fppres, "|%+'*.*hu|\n", width, precision, var);
	ft_printf("#1650");
	ret2 = ft_printf("|%+'*.*hu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1651");
	ret1 = fprintf(fppres, "|%+'*.*lu|\n", width, precision, var);
	ft_printf("#1651");
	ret2 = ft_printf("|%+'*.*lu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1652");
	ret1 = fprintf(fppres, "|%+'*.*llu|\n", width, precision, var);
	ft_printf("#1652");
	ret2 = ft_printf("|%+'*.*llu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1653");
	ret1 = fprintf(fppres, "|%+'*.*ju|\n", width, precision, var);
	ft_printf("#1653");
	ret2 = ft_printf("|%+'*.*ju|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1654");
	ret1 = fprintf(fppres, "|%+'*.*zu|\n", width, precision, var);
	ft_printf("#1654");
	ret2 = ft_printf("|%+'*.*zu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1655");
	ret1 = fprintf(fppres, "|%+'*.*u|\n", width, precision, var);
	ft_printf("#1655");
	ret2 = ft_printf("|%+'*.*u|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1656");
	ret1 = fprintf(fppres, "|%+'*.*f|\n", width, precision, var);
	ft_printf("#1656");
	ret2 = ft_printf("|%+'*.*f|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1657");
	ret1 = fprintf(fppres, "|%+'*.*hhf|\n", width, precision, var);
	ft_printf("#1657");
	ret2 = ft_printf("|%+'*.*hhf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1658");
	ret1 = fprintf(fppres, "|%+'*.*hf|\n", width, precision, var);
	ft_printf("#1658");
	ret2 = ft_printf("|%+'*.*hf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1659");
	ret1 = fprintf(fppres, "|%+'*.*lf|\n", width, precision, var);
	ft_printf("#1659");
	ret2 = ft_printf("|%+'*.*lf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1660");
	ret1 = fprintf(fppres, "|%+'*.*llf|\n", width, precision, var);
	ft_printf("#1660");
	ret2 = ft_printf("|%+'*.*llf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1661");
	ret1 = fprintf(fppres, "|%+'*.*jf|\n", width, precision, var);
	ft_printf("#1661");
	ret2 = ft_printf("|%+'*.*jf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1662");
	ret1 = fprintf(fppres, "|%+'*.*zf|\n", width, precision, var);
	ft_printf("#1662");
	ret2 = ft_printf("|%+'*.*zf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1663");
	ret1 = fprintf(fppres, "|%+'*.*f|\n", width, precision, var);
	ft_printf("#1663");
	ret2 = ft_printf("|%+'*.*f|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1664");
	ret1 = fprintf(fppres, "|%+'*.*F|\n", width, precision, var);
	ft_printf("#1664");
	ret2 = ft_printf("|%+'*.*F|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1665");
	ret1 = fprintf(fppres, "|%+'*.*hhF|\n", width, precision, var);
	ft_printf("#1665");
	ret2 = ft_printf("|%+'*.*hhF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1666");
	ret1 = fprintf(fppres, "|%+'*.*hF|\n", width, precision, var);
	ft_printf("#1666");
	ret2 = ft_printf("|%+'*.*hF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1667");
	ret1 = fprintf(fppres, "|%+'*.*lF|\n", width, precision, var);
	ft_printf("#1667");
	ret2 = ft_printf("|%+'*.*lF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1668");
	ret1 = fprintf(fppres, "|%+'*.*llF|\n", width, precision, var);
	ft_printf("#1668");
	ret2 = ft_printf("|%+'*.*llF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1669");
	ret1 = fprintf(fppres, "|%+'*.*jF|\n", width, precision, var);
	ft_printf("#1669");
	ret2 = ft_printf("|%+'*.*jF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1670");
	ret1 = fprintf(fppres, "|%+'*.*zF|\n", width, precision, var);
	ft_printf("#1670");
	ret2 = ft_printf("|%+'*.*zF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1671");
	ret1 = fprintf(fppres, "|%+'*.*F|\n", width, precision, var);
	ft_printf("#1671");
	ret2 = ft_printf("|%+'*.*F|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1672");
	ret1 = fprintf(fppres, "|%+'*.* |\n", width, precision, var);
	ft_printf("#1672");
	ret2 = ft_printf("|%+'*.* |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1673");
	ret1 = fprintf(fppres, "|%+'*.*hh |\n", width, precision, var);
	ft_printf("#1673");
	ret2 = ft_printf("|%+'*.*hh |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1674");
	ret1 = fprintf(fppres, "|%+'*.*h |\n", width, precision, var);
	ft_printf("#1674");
	ret2 = ft_printf("|%+'*.*h |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1675");
	ret1 = fprintf(fppres, "|%+'*.*l |\n", width, precision, var);
	ft_printf("#1675");
	ret2 = ft_printf("|%+'*.*l |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1676");
	ret1 = fprintf(fppres, "|%+'*.*ll |\n", width, precision, var);
	ft_printf("#1676");
	ret2 = ft_printf("|%+'*.*ll |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1677");
	ret1 = fprintf(fppres, "|%+'*.*j |\n", width, precision, var);
	ft_printf("#1677");
	ret2 = ft_printf("|%+'*.*j |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1678");
	ret1 = fprintf(fppres, "|%+'*.*z |\n", width, precision, var);
	ft_printf("#1678");
	ret2 = ft_printf("|%+'*.*z |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1679");
	ret1 = fprintf(fppres, "|%+'*.* |\n", width, precision, var);
	ft_printf("#1679");
	ret2 = ft_printf("|%+'*.* |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1680");
	ret1 = fprintf(fppres, "|%0+'*.*d|\n", width, precision, var);
	ft_printf("#1680");
	ret2 = ft_printf("|%0+'*.*d|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1681");
	ret1 = fprintf(fppres, "|%0+'*.*hhd|\n", width, precision, var);
	ft_printf("#1681");
	ret2 = ft_printf("|%0+'*.*hhd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1682");
	ret1 = fprintf(fppres, "|%0+'*.*hd|\n", width, precision, var);
	ft_printf("#1682");
	ret2 = ft_printf("|%0+'*.*hd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1683");
	ret1 = fprintf(fppres, "|%0+'*.*ld|\n", width, precision, var);
	ft_printf("#1683");
	ret2 = ft_printf("|%0+'*.*ld|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1684");
	ret1 = fprintf(fppres, "|%0+'*.*lld|\n", width, precision, var);
	ft_printf("#1684");
	ret2 = ft_printf("|%0+'*.*lld|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1685");
	ret1 = fprintf(fppres, "|%0+'*.*jd|\n", width, precision, var);
	ft_printf("#1685");
	ret2 = ft_printf("|%0+'*.*jd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1686");
	ret1 = fprintf(fppres, "|%0+'*.*zd|\n", width, precision, var);
	ft_printf("#1686");
	ret2 = ft_printf("|%0+'*.*zd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1687");
	ret1 = fprintf(fppres, "|%0+'*.*d|\n", width, precision, var);
	ft_printf("#1687");
	ret2 = ft_printf("|%0+'*.*d|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1688");
	ret1 = fprintf(fppres, "|%0+'*.*i|\n", width, precision, var);
	ft_printf("#1688");
	ret2 = ft_printf("|%0+'*.*i|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1689");
	ret1 = fprintf(fppres, "|%0+'*.*hhi|\n", width, precision, var);
	ft_printf("#1689");
	ret2 = ft_printf("|%0+'*.*hhi|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1690");
	ret1 = fprintf(fppres, "|%0+'*.*hi|\n", width, precision, var);
	ft_printf("#1690");
	ret2 = ft_printf("|%0+'*.*hi|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1691");
	ret1 = fprintf(fppres, "|%0+'*.*li|\n", width, precision, var);
	ft_printf("#1691");
	ret2 = ft_printf("|%0+'*.*li|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1692");
	ret1 = fprintf(fppres, "|%0+'*.*lli|\n", width, precision, var);
	ft_printf("#1692");
	ret2 = ft_printf("|%0+'*.*lli|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1693");
	ret1 = fprintf(fppres, "|%0+'*.*ji|\n", width, precision, var);
	ft_printf("#1693");
	ret2 = ft_printf("|%0+'*.*ji|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1694");
	ret1 = fprintf(fppres, "|%0+'*.*zi|\n", width, precision, var);
	ft_printf("#1694");
	ret2 = ft_printf("|%0+'*.*zi|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1695");
	ret1 = fprintf(fppres, "|%0+'*.*i|\n", width, precision, var);
	ft_printf("#1695");
	ret2 = ft_printf("|%0+'*.*i|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1696");
	ret1 = fprintf(fppres, "|%0+'*.*u|\n", width, precision, var);
	ft_printf("#1696");
	ret2 = ft_printf("|%0+'*.*u|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1697");
	ret1 = fprintf(fppres, "|%0+'*.*hhu|\n", width, precision, var);
	ft_printf("#1697");
	ret2 = ft_printf("|%0+'*.*hhu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1698");
	ret1 = fprintf(fppres, "|%0+'*.*hu|\n", width, precision, var);
	ft_printf("#1698");
	ret2 = ft_printf("|%0+'*.*hu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1699");
	ret1 = fprintf(fppres, "|%0+'*.*lu|\n", width, precision, var);
	ft_printf("#1699");
	ret2 = ft_printf("|%0+'*.*lu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1700");
	ret1 = fprintf(fppres, "|%0+'*.*llu|\n", width, precision, var);
	ft_printf("#1700");
	ret2 = ft_printf("|%0+'*.*llu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1701");
	ret1 = fprintf(fppres, "|%0+'*.*ju|\n", width, precision, var);
	ft_printf("#1701");
	ret2 = ft_printf("|%0+'*.*ju|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1702");
	ret1 = fprintf(fppres, "|%0+'*.*zu|\n", width, precision, var);
	ft_printf("#1702");
	ret2 = ft_printf("|%0+'*.*zu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1703");
	ret1 = fprintf(fppres, "|%0+'*.*u|\n", width, precision, var);
	ft_printf("#1703");
	ret2 = ft_printf("|%0+'*.*u|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1704");
	ret1 = fprintf(fppres, "|%0+'*.*f|\n", width, precision, var);
	ft_printf("#1704");
	ret2 = ft_printf("|%0+'*.*f|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1705");
	ret1 = fprintf(fppres, "|%0+'*.*hhf|\n", width, precision, var);
	ft_printf("#1705");
	ret2 = ft_printf("|%0+'*.*hhf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1706");
	ret1 = fprintf(fppres, "|%0+'*.*hf|\n", width, precision, var);
	ft_printf("#1706");
	ret2 = ft_printf("|%0+'*.*hf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1707");
	ret1 = fprintf(fppres, "|%0+'*.*lf|\n", width, precision, var);
	ft_printf("#1707");
	ret2 = ft_printf("|%0+'*.*lf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1708");
	ret1 = fprintf(fppres, "|%0+'*.*llf|\n", width, precision, var);
	ft_printf("#1708");
	ret2 = ft_printf("|%0+'*.*llf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1709");
	ret1 = fprintf(fppres, "|%0+'*.*jf|\n", width, precision, var);
	ft_printf("#1709");
	ret2 = ft_printf("|%0+'*.*jf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1710");
	ret1 = fprintf(fppres, "|%0+'*.*zf|\n", width, precision, var);
	ft_printf("#1710");
	ret2 = ft_printf("|%0+'*.*zf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1711");
	ret1 = fprintf(fppres, "|%0+'*.*f|\n", width, precision, var);
	ft_printf("#1711");
	ret2 = ft_printf("|%0+'*.*f|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1712");
	ret1 = fprintf(fppres, "|%0+'*.*F|\n", width, precision, var);
	ft_printf("#1712");
	ret2 = ft_printf("|%0+'*.*F|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1713");
	ret1 = fprintf(fppres, "|%0+'*.*hhF|\n", width, precision, var);
	ft_printf("#1713");
	ret2 = ft_printf("|%0+'*.*hhF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1714");
	ret1 = fprintf(fppres, "|%0+'*.*hF|\n", width, precision, var);
	ft_printf("#1714");
	ret2 = ft_printf("|%0+'*.*hF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1715");
	ret1 = fprintf(fppres, "|%0+'*.*lF|\n", width, precision, var);
	ft_printf("#1715");
	ret2 = ft_printf("|%0+'*.*lF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1716");
	ret1 = fprintf(fppres, "|%0+'*.*llF|\n", width, precision, var);
	ft_printf("#1716");
	ret2 = ft_printf("|%0+'*.*llF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1717");
	ret1 = fprintf(fppres, "|%0+'*.*jF|\n", width, precision, var);
	ft_printf("#1717");
	ret2 = ft_printf("|%0+'*.*jF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1718");
	ret1 = fprintf(fppres, "|%0+'*.*zF|\n", width, precision, var);
	ft_printf("#1718");
	ret2 = ft_printf("|%0+'*.*zF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1719");
	ret1 = fprintf(fppres, "|%0+'*.*F|\n", width, precision, var);
	ft_printf("#1719");
	ret2 = ft_printf("|%0+'*.*F|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1720");
	ret1 = fprintf(fppres, "|%0+'*.* |\n", width, precision, var);
	ft_printf("#1720");
	ret2 = ft_printf("|%0+'*.* |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1721");
	ret1 = fprintf(fppres, "|%0+'*.*hh |\n", width, precision, var);
	ft_printf("#1721");
	ret2 = ft_printf("|%0+'*.*hh |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1722");
	ret1 = fprintf(fppres, "|%0+'*.*h |\n", width, precision, var);
	ft_printf("#1722");
	ret2 = ft_printf("|%0+'*.*h |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1723");
	ret1 = fprintf(fppres, "|%0+'*.*l |\n", width, precision, var);
	ft_printf("#1723");
	ret2 = ft_printf("|%0+'*.*l |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1724");
	ret1 = fprintf(fppres, "|%0+'*.*ll |\n", width, precision, var);
	ft_printf("#1724");
	ret2 = ft_printf("|%0+'*.*ll |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1725");
	ret1 = fprintf(fppres, "|%0+'*.*j |\n", width, precision, var);
	ft_printf("#1725");
	ret2 = ft_printf("|%0+'*.*j |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1726");
	ret1 = fprintf(fppres, "|%0+'*.*z |\n", width, precision, var);
	ft_printf("#1726");
	ret2 = ft_printf("|%0+'*.*z |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1727");
	ret1 = fprintf(fppres, "|%0+'*.* |\n", width, precision, var);
	ft_printf("#1727");
	ret2 = ft_printf("|%0+'*.* |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1728");
	ret1 = fprintf(fppres, "|%-'*.*d|\n", width, precision, var);
	ft_printf("#1728");
	ret2 = ft_printf("|%-'*.*d|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1729");
	ret1 = fprintf(fppres, "|%-'*.*hhd|\n", width, precision, var);
	ft_printf("#1729");
	ret2 = ft_printf("|%-'*.*hhd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1730");
	ret1 = fprintf(fppres, "|%-'*.*hd|\n", width, precision, var);
	ft_printf("#1730");
	ret2 = ft_printf("|%-'*.*hd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1731");
	ret1 = fprintf(fppres, "|%-'*.*ld|\n", width, precision, var);
	ft_printf("#1731");
	ret2 = ft_printf("|%-'*.*ld|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1732");
	ret1 = fprintf(fppres, "|%-'*.*lld|\n", width, precision, var);
	ft_printf("#1732");
	ret2 = ft_printf("|%-'*.*lld|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1733");
	ret1 = fprintf(fppres, "|%-'*.*jd|\n", width, precision, var);
	ft_printf("#1733");
	ret2 = ft_printf("|%-'*.*jd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1734");
	ret1 = fprintf(fppres, "|%-'*.*zd|\n", width, precision, var);
	ft_printf("#1734");
	ret2 = ft_printf("|%-'*.*zd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1735");
	ret1 = fprintf(fppres, "|%-'*.*d|\n", width, precision, var);
	ft_printf("#1735");
	ret2 = ft_printf("|%-'*.*d|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1736");
	ret1 = fprintf(fppres, "|%-'*.*i|\n", width, precision, var);
	ft_printf("#1736");
	ret2 = ft_printf("|%-'*.*i|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1737");
	ret1 = fprintf(fppres, "|%-'*.*hhi|\n", width, precision, var);
	ft_printf("#1737");
	ret2 = ft_printf("|%-'*.*hhi|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1738");
	ret1 = fprintf(fppres, "|%-'*.*hi|\n", width, precision, var);
	ft_printf("#1738");
	ret2 = ft_printf("|%-'*.*hi|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1739");
	ret1 = fprintf(fppres, "|%-'*.*li|\n", width, precision, var);
	ft_printf("#1739");
	ret2 = ft_printf("|%-'*.*li|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1740");
	ret1 = fprintf(fppres, "|%-'*.*lli|\n", width, precision, var);
	ft_printf("#1740");
	ret2 = ft_printf("|%-'*.*lli|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1741");
	ret1 = fprintf(fppres, "|%-'*.*ji|\n", width, precision, var);
	ft_printf("#1741");
	ret2 = ft_printf("|%-'*.*ji|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1742");
	ret1 = fprintf(fppres, "|%-'*.*zi|\n", width, precision, var);
	ft_printf("#1742");
	ret2 = ft_printf("|%-'*.*zi|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1743");
	ret1 = fprintf(fppres, "|%-'*.*i|\n", width, precision, var);
	ft_printf("#1743");
	ret2 = ft_printf("|%-'*.*i|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1744");
	ret1 = fprintf(fppres, "|%-'*.*u|\n", width, precision, var);
	ft_printf("#1744");
	ret2 = ft_printf("|%-'*.*u|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1745");
	ret1 = fprintf(fppres, "|%-'*.*hhu|\n", width, precision, var);
	ft_printf("#1745");
	ret2 = ft_printf("|%-'*.*hhu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1746");
	ret1 = fprintf(fppres, "|%-'*.*hu|\n", width, precision, var);
	ft_printf("#1746");
	ret2 = ft_printf("|%-'*.*hu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1747");
	ret1 = fprintf(fppres, "|%-'*.*lu|\n", width, precision, var);
	ft_printf("#1747");
	ret2 = ft_printf("|%-'*.*lu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1748");
	ret1 = fprintf(fppres, "|%-'*.*llu|\n", width, precision, var);
	ft_printf("#1748");
	ret2 = ft_printf("|%-'*.*llu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1749");
	ret1 = fprintf(fppres, "|%-'*.*ju|\n", width, precision, var);
	ft_printf("#1749");
	ret2 = ft_printf("|%-'*.*ju|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1750");
	ret1 = fprintf(fppres, "|%-'*.*zu|\n", width, precision, var);
	ft_printf("#1750");
	ret2 = ft_printf("|%-'*.*zu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1751");
	ret1 = fprintf(fppres, "|%-'*.*u|\n", width, precision, var);
	ft_printf("#1751");
	ret2 = ft_printf("|%-'*.*u|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1752");
	ret1 = fprintf(fppres, "|%-'*.*f|\n", width, precision, var);
	ft_printf("#1752");
	ret2 = ft_printf("|%-'*.*f|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1753");
	ret1 = fprintf(fppres, "|%-'*.*hhf|\n", width, precision, var);
	ft_printf("#1753");
	ret2 = ft_printf("|%-'*.*hhf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1754");
	ret1 = fprintf(fppres, "|%-'*.*hf|\n", width, precision, var);
	ft_printf("#1754");
	ret2 = ft_printf("|%-'*.*hf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1755");
	ret1 = fprintf(fppres, "|%-'*.*lf|\n", width, precision, var);
	ft_printf("#1755");
	ret2 = ft_printf("|%-'*.*lf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1756");
	ret1 = fprintf(fppres, "|%-'*.*llf|\n", width, precision, var);
	ft_printf("#1756");
	ret2 = ft_printf("|%-'*.*llf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1757");
	ret1 = fprintf(fppres, "|%-'*.*jf|\n", width, precision, var);
	ft_printf("#1757");
	ret2 = ft_printf("|%-'*.*jf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1758");
	ret1 = fprintf(fppres, "|%-'*.*zf|\n", width, precision, var);
	ft_printf("#1758");
	ret2 = ft_printf("|%-'*.*zf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1759");
	ret1 = fprintf(fppres, "|%-'*.*f|\n", width, precision, var);
	ft_printf("#1759");
	ret2 = ft_printf("|%-'*.*f|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1760");
	ret1 = fprintf(fppres, "|%-'*.*F|\n", width, precision, var);
	ft_printf("#1760");
	ret2 = ft_printf("|%-'*.*F|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1761");
	ret1 = fprintf(fppres, "|%-'*.*hhF|\n", width, precision, var);
	ft_printf("#1761");
	ret2 = ft_printf("|%-'*.*hhF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1762");
	ret1 = fprintf(fppres, "|%-'*.*hF|\n", width, precision, var);
	ft_printf("#1762");
	ret2 = ft_printf("|%-'*.*hF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1763");
	ret1 = fprintf(fppres, "|%-'*.*lF|\n", width, precision, var);
	ft_printf("#1763");
	ret2 = ft_printf("|%-'*.*lF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1764");
	ret1 = fprintf(fppres, "|%-'*.*llF|\n", width, precision, var);
	ft_printf("#1764");
	ret2 = ft_printf("|%-'*.*llF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1765");
	ret1 = fprintf(fppres, "|%-'*.*jF|\n", width, precision, var);
	ft_printf("#1765");
	ret2 = ft_printf("|%-'*.*jF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1766");
	ret1 = fprintf(fppres, "|%-'*.*zF|\n", width, precision, var);
	ft_printf("#1766");
	ret2 = ft_printf("|%-'*.*zF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1767");
	ret1 = fprintf(fppres, "|%-'*.*F|\n", width, precision, var);
	ft_printf("#1767");
	ret2 = ft_printf("|%-'*.*F|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1768");
	ret1 = fprintf(fppres, "|%-'*.* |\n", width, precision, var);
	ft_printf("#1768");
	ret2 = ft_printf("|%-'*.* |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1769");
	ret1 = fprintf(fppres, "|%-'*.*hh |\n", width, precision, var);
	ft_printf("#1769");
	ret2 = ft_printf("|%-'*.*hh |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1770");
	ret1 = fprintf(fppres, "|%-'*.*h |\n", width, precision, var);
	ft_printf("#1770");
	ret2 = ft_printf("|%-'*.*h |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1771");
	ret1 = fprintf(fppres, "|%-'*.*l |\n", width, precision, var);
	ft_printf("#1771");
	ret2 = ft_printf("|%-'*.*l |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1772");
	ret1 = fprintf(fppres, "|%-'*.*ll |\n", width, precision, var);
	ft_printf("#1772");
	ret2 = ft_printf("|%-'*.*ll |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1773");
	ret1 = fprintf(fppres, "|%-'*.*j |\n", width, precision, var);
	ft_printf("#1773");
	ret2 = ft_printf("|%-'*.*j |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1774");
	ret1 = fprintf(fppres, "|%-'*.*z |\n", width, precision, var);
	ft_printf("#1774");
	ret2 = ft_printf("|%-'*.*z |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1775");
	ret1 = fprintf(fppres, "|%-'*.* |\n", width, precision, var);
	ft_printf("#1775");
	ret2 = ft_printf("|%-'*.* |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1776");
	ret1 = fprintf(fppres, "|%0-'*.*d|\n", width, precision, var);
	ft_printf("#1776");
	ret2 = ft_printf("|%0-'*.*d|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1777");
	ret1 = fprintf(fppres, "|%0-'*.*hhd|\n", width, precision, var);
	ft_printf("#1777");
	ret2 = ft_printf("|%0-'*.*hhd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1778");
	ret1 = fprintf(fppres, "|%0-'*.*hd|\n", width, precision, var);
	ft_printf("#1778");
	ret2 = ft_printf("|%0-'*.*hd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1779");
	ret1 = fprintf(fppres, "|%0-'*.*ld|\n", width, precision, var);
	ft_printf("#1779");
	ret2 = ft_printf("|%0-'*.*ld|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1780");
	ret1 = fprintf(fppres, "|%0-'*.*lld|\n", width, precision, var);
	ft_printf("#1780");
	ret2 = ft_printf("|%0-'*.*lld|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1781");
	ret1 = fprintf(fppres, "|%0-'*.*jd|\n", width, precision, var);
	ft_printf("#1781");
	ret2 = ft_printf("|%0-'*.*jd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1782");
	ret1 = fprintf(fppres, "|%0-'*.*zd|\n", width, precision, var);
	ft_printf("#1782");
	ret2 = ft_printf("|%0-'*.*zd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1783");
	ret1 = fprintf(fppres, "|%0-'*.*d|\n", width, precision, var);
	ft_printf("#1783");
	ret2 = ft_printf("|%0-'*.*d|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1784");
	ret1 = fprintf(fppres, "|%0-'*.*i|\n", width, precision, var);
	ft_printf("#1784");
	ret2 = ft_printf("|%0-'*.*i|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1785");
	ret1 = fprintf(fppres, "|%0-'*.*hhi|\n", width, precision, var);
	ft_printf("#1785");
	ret2 = ft_printf("|%0-'*.*hhi|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1786");
	ret1 = fprintf(fppres, "|%0-'*.*hi|\n", width, precision, var);
	ft_printf("#1786");
	ret2 = ft_printf("|%0-'*.*hi|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1787");
	ret1 = fprintf(fppres, "|%0-'*.*li|\n", width, precision, var);
	ft_printf("#1787");
	ret2 = ft_printf("|%0-'*.*li|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1788");
	ret1 = fprintf(fppres, "|%0-'*.*lli|\n", width, precision, var);
	ft_printf("#1788");
	ret2 = ft_printf("|%0-'*.*lli|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1789");
	ret1 = fprintf(fppres, "|%0-'*.*ji|\n", width, precision, var);
	ft_printf("#1789");
	ret2 = ft_printf("|%0-'*.*ji|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1790");
	ret1 = fprintf(fppres, "|%0-'*.*zi|\n", width, precision, var);
	ft_printf("#1790");
	ret2 = ft_printf("|%0-'*.*zi|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1791");
	ret1 = fprintf(fppres, "|%0-'*.*i|\n", width, precision, var);
	ft_printf("#1791");
	ret2 = ft_printf("|%0-'*.*i|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1792");
	ret1 = fprintf(fppres, "|%0-'*.*u|\n", width, precision, var);
	ft_printf("#1792");
	ret2 = ft_printf("|%0-'*.*u|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1793");
	ret1 = fprintf(fppres, "|%0-'*.*hhu|\n", width, precision, var);
	ft_printf("#1793");
	ret2 = ft_printf("|%0-'*.*hhu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1794");
	ret1 = fprintf(fppres, "|%0-'*.*hu|\n", width, precision, var);
	ft_printf("#1794");
	ret2 = ft_printf("|%0-'*.*hu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1795");
	ret1 = fprintf(fppres, "|%0-'*.*lu|\n", width, precision, var);
	ft_printf("#1795");
	ret2 = ft_printf("|%0-'*.*lu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1796");
	ret1 = fprintf(fppres, "|%0-'*.*llu|\n", width, precision, var);
	ft_printf("#1796");
	ret2 = ft_printf("|%0-'*.*llu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1797");
	ret1 = fprintf(fppres, "|%0-'*.*ju|\n", width, precision, var);
	ft_printf("#1797");
	ret2 = ft_printf("|%0-'*.*ju|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1798");
	ret1 = fprintf(fppres, "|%0-'*.*zu|\n", width, precision, var);
	ft_printf("#1798");
	ret2 = ft_printf("|%0-'*.*zu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1799");
	ret1 = fprintf(fppres, "|%0-'*.*u|\n", width, precision, var);
	ft_printf("#1799");
	ret2 = ft_printf("|%0-'*.*u|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1800");
	ret1 = fprintf(fppres, "|%0-'*.*f|\n", width, precision, var);
	ft_printf("#1800");
	ret2 = ft_printf("|%0-'*.*f|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1801");
	ret1 = fprintf(fppres, "|%0-'*.*hhf|\n", width, precision, var);
	ft_printf("#1801");
	ret2 = ft_printf("|%0-'*.*hhf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1802");
	ret1 = fprintf(fppres, "|%0-'*.*hf|\n", width, precision, var);
	ft_printf("#1802");
	ret2 = ft_printf("|%0-'*.*hf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1803");
	ret1 = fprintf(fppres, "|%0-'*.*lf|\n", width, precision, var);
	ft_printf("#1803");
	ret2 = ft_printf("|%0-'*.*lf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1804");
	ret1 = fprintf(fppres, "|%0-'*.*llf|\n", width, precision, var);
	ft_printf("#1804");
	ret2 = ft_printf("|%0-'*.*llf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1805");
	ret1 = fprintf(fppres, "|%0-'*.*jf|\n", width, precision, var);
	ft_printf("#1805");
	ret2 = ft_printf("|%0-'*.*jf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1806");
	ret1 = fprintf(fppres, "|%0-'*.*zf|\n", width, precision, var);
	ft_printf("#1806");
	ret2 = ft_printf("|%0-'*.*zf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1807");
	ret1 = fprintf(fppres, "|%0-'*.*f|\n", width, precision, var);
	ft_printf("#1807");
	ret2 = ft_printf("|%0-'*.*f|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1808");
	ret1 = fprintf(fppres, "|%0-'*.*F|\n", width, precision, var);
	ft_printf("#1808");
	ret2 = ft_printf("|%0-'*.*F|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1809");
	ret1 = fprintf(fppres, "|%0-'*.*hhF|\n", width, precision, var);
	ft_printf("#1809");
	ret2 = ft_printf("|%0-'*.*hhF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1810");
	ret1 = fprintf(fppres, "|%0-'*.*hF|\n", width, precision, var);
	ft_printf("#1810");
	ret2 = ft_printf("|%0-'*.*hF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1811");
	ret1 = fprintf(fppres, "|%0-'*.*lF|\n", width, precision, var);
	ft_printf("#1811");
	ret2 = ft_printf("|%0-'*.*lF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1812");
	ret1 = fprintf(fppres, "|%0-'*.*llF|\n", width, precision, var);
	ft_printf("#1812");
	ret2 = ft_printf("|%0-'*.*llF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1813");
	ret1 = fprintf(fppres, "|%0-'*.*jF|\n", width, precision, var);
	ft_printf("#1813");
	ret2 = ft_printf("|%0-'*.*jF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1814");
	ret1 = fprintf(fppres, "|%0-'*.*zF|\n", width, precision, var);
	ft_printf("#1814");
	ret2 = ft_printf("|%0-'*.*zF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1815");
	ret1 = fprintf(fppres, "|%0-'*.*F|\n", width, precision, var);
	ft_printf("#1815");
	ret2 = ft_printf("|%0-'*.*F|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1816");
	ret1 = fprintf(fppres, "|%0-'*.* |\n", width, precision, var);
	ft_printf("#1816");
	ret2 = ft_printf("|%0-'*.* |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1817");
	ret1 = fprintf(fppres, "|%0-'*.*hh |\n", width, precision, var);
	ft_printf("#1817");
	ret2 = ft_printf("|%0-'*.*hh |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1818");
	ret1 = fprintf(fppres, "|%0-'*.*h |\n", width, precision, var);
	ft_printf("#1818");
	ret2 = ft_printf("|%0-'*.*h |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1819");
	ret1 = fprintf(fppres, "|%0-'*.*l |\n", width, precision, var);
	ft_printf("#1819");
	ret2 = ft_printf("|%0-'*.*l |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1820");
	ret1 = fprintf(fppres, "|%0-'*.*ll |\n", width, precision, var);
	ft_printf("#1820");
	ret2 = ft_printf("|%0-'*.*ll |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1821");
	ret1 = fprintf(fppres, "|%0-'*.*j |\n", width, precision, var);
	ft_printf("#1821");
	ret2 = ft_printf("|%0-'*.*j |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1822");
	ret1 = fprintf(fppres, "|%0-'*.*z |\n", width, precision, var);
	ft_printf("#1822");
	ret2 = ft_printf("|%0-'*.*z |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1823");
	ret1 = fprintf(fppres, "|%0-'*.* |\n", width, precision, var);
	ft_printf("#1823");
	ret2 = ft_printf("|%0-'*.* |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1824");
	ret1 = fprintf(fppres, "|%+-'*.*d|\n", width, precision, var);
	ft_printf("#1824");
	ret2 = ft_printf("|%+-'*.*d|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1825");
	ret1 = fprintf(fppres, "|%+-'*.*hhd|\n", width, precision, var);
	ft_printf("#1825");
	ret2 = ft_printf("|%+-'*.*hhd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1826");
	ret1 = fprintf(fppres, "|%+-'*.*hd|\n", width, precision, var);
	ft_printf("#1826");
	ret2 = ft_printf("|%+-'*.*hd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1827");
	ret1 = fprintf(fppres, "|%+-'*.*ld|\n", width, precision, var);
	ft_printf("#1827");
	ret2 = ft_printf("|%+-'*.*ld|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1828");
	ret1 = fprintf(fppres, "|%+-'*.*lld|\n", width, precision, var);
	ft_printf("#1828");
	ret2 = ft_printf("|%+-'*.*lld|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1829");
	ret1 = fprintf(fppres, "|%+-'*.*jd|\n", width, precision, var);
	ft_printf("#1829");
	ret2 = ft_printf("|%+-'*.*jd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1830");
	ret1 = fprintf(fppres, "|%+-'*.*zd|\n", width, precision, var);
	ft_printf("#1830");
	ret2 = ft_printf("|%+-'*.*zd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1831");
	ret1 = fprintf(fppres, "|%+-'*.*d|\n", width, precision, var);
	ft_printf("#1831");
	ret2 = ft_printf("|%+-'*.*d|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1832");
	ret1 = fprintf(fppres, "|%+-'*.*i|\n", width, precision, var);
	ft_printf("#1832");
	ret2 = ft_printf("|%+-'*.*i|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1833");
	ret1 = fprintf(fppres, "|%+-'*.*hhi|\n", width, precision, var);
	ft_printf("#1833");
	ret2 = ft_printf("|%+-'*.*hhi|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1834");
	ret1 = fprintf(fppres, "|%+-'*.*hi|\n", width, precision, var);
	ft_printf("#1834");
	ret2 = ft_printf("|%+-'*.*hi|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1835");
	ret1 = fprintf(fppres, "|%+-'*.*li|\n", width, precision, var);
	ft_printf("#1835");
	ret2 = ft_printf("|%+-'*.*li|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1836");
	ret1 = fprintf(fppres, "|%+-'*.*lli|\n", width, precision, var);
	ft_printf("#1836");
	ret2 = ft_printf("|%+-'*.*lli|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1837");
	ret1 = fprintf(fppres, "|%+-'*.*ji|\n", width, precision, var);
	ft_printf("#1837");
	ret2 = ft_printf("|%+-'*.*ji|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1838");
	ret1 = fprintf(fppres, "|%+-'*.*zi|\n", width, precision, var);
	ft_printf("#1838");
	ret2 = ft_printf("|%+-'*.*zi|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1839");
	ret1 = fprintf(fppres, "|%+-'*.*i|\n", width, precision, var);
	ft_printf("#1839");
	ret2 = ft_printf("|%+-'*.*i|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1840");
	ret1 = fprintf(fppres, "|%+-'*.*u|\n", width, precision, var);
	ft_printf("#1840");
	ret2 = ft_printf("|%+-'*.*u|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1841");
	ret1 = fprintf(fppres, "|%+-'*.*hhu|\n", width, precision, var);
	ft_printf("#1841");
	ret2 = ft_printf("|%+-'*.*hhu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1842");
	ret1 = fprintf(fppres, "|%+-'*.*hu|\n", width, precision, var);
	ft_printf("#1842");
	ret2 = ft_printf("|%+-'*.*hu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1843");
	ret1 = fprintf(fppres, "|%+-'*.*lu|\n", width, precision, var);
	ft_printf("#1843");
	ret2 = ft_printf("|%+-'*.*lu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1844");
	ret1 = fprintf(fppres, "|%+-'*.*llu|\n", width, precision, var);
	ft_printf("#1844");
	ret2 = ft_printf("|%+-'*.*llu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1845");
	ret1 = fprintf(fppres, "|%+-'*.*ju|\n", width, precision, var);
	ft_printf("#1845");
	ret2 = ft_printf("|%+-'*.*ju|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1846");
	ret1 = fprintf(fppres, "|%+-'*.*zu|\n", width, precision, var);
	ft_printf("#1846");
	ret2 = ft_printf("|%+-'*.*zu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1847");
	ret1 = fprintf(fppres, "|%+-'*.*u|\n", width, precision, var);
	ft_printf("#1847");
	ret2 = ft_printf("|%+-'*.*u|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1848");
	ret1 = fprintf(fppres, "|%+-'*.*f|\n", width, precision, var);
	ft_printf("#1848");
	ret2 = ft_printf("|%+-'*.*f|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1849");
	ret1 = fprintf(fppres, "|%+-'*.*hhf|\n", width, precision, var);
	ft_printf("#1849");
	ret2 = ft_printf("|%+-'*.*hhf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1850");
	ret1 = fprintf(fppres, "|%+-'*.*hf|\n", width, precision, var);
	ft_printf("#1850");
	ret2 = ft_printf("|%+-'*.*hf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1851");
	ret1 = fprintf(fppres, "|%+-'*.*lf|\n", width, precision, var);
	ft_printf("#1851");
	ret2 = ft_printf("|%+-'*.*lf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1852");
	ret1 = fprintf(fppres, "|%+-'*.*llf|\n", width, precision, var);
	ft_printf("#1852");
	ret2 = ft_printf("|%+-'*.*llf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1853");
	ret1 = fprintf(fppres, "|%+-'*.*jf|\n", width, precision, var);
	ft_printf("#1853");
	ret2 = ft_printf("|%+-'*.*jf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1854");
	ret1 = fprintf(fppres, "|%+-'*.*zf|\n", width, precision, var);
	ft_printf("#1854");
	ret2 = ft_printf("|%+-'*.*zf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1855");
	ret1 = fprintf(fppres, "|%+-'*.*f|\n", width, precision, var);
	ft_printf("#1855");
	ret2 = ft_printf("|%+-'*.*f|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1856");
	ret1 = fprintf(fppres, "|%+-'*.*F|\n", width, precision, var);
	ft_printf("#1856");
	ret2 = ft_printf("|%+-'*.*F|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1857");
	ret1 = fprintf(fppres, "|%+-'*.*hhF|\n", width, precision, var);
	ft_printf("#1857");
	ret2 = ft_printf("|%+-'*.*hhF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1858");
	ret1 = fprintf(fppres, "|%+-'*.*hF|\n", width, precision, var);
	ft_printf("#1858");
	ret2 = ft_printf("|%+-'*.*hF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1859");
	ret1 = fprintf(fppres, "|%+-'*.*lF|\n", width, precision, var);
	ft_printf("#1859");
	ret2 = ft_printf("|%+-'*.*lF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1860");
	ret1 = fprintf(fppres, "|%+-'*.*llF|\n", width, precision, var);
	ft_printf("#1860");
	ret2 = ft_printf("|%+-'*.*llF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1861");
	ret1 = fprintf(fppres, "|%+-'*.*jF|\n", width, precision, var);
	ft_printf("#1861");
	ret2 = ft_printf("|%+-'*.*jF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1862");
	ret1 = fprintf(fppres, "|%+-'*.*zF|\n", width, precision, var);
	ft_printf("#1862");
	ret2 = ft_printf("|%+-'*.*zF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1863");
	ret1 = fprintf(fppres, "|%+-'*.*F|\n", width, precision, var);
	ft_printf("#1863");
	ret2 = ft_printf("|%+-'*.*F|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1864");
	ret1 = fprintf(fppres, "|%+-'*.* |\n", width, precision, var);
	ft_printf("#1864");
	ret2 = ft_printf("|%+-'*.* |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1865");
	ret1 = fprintf(fppres, "|%+-'*.*hh |\n", width, precision, var);
	ft_printf("#1865");
	ret2 = ft_printf("|%+-'*.*hh |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1866");
	ret1 = fprintf(fppres, "|%+-'*.*h |\n", width, precision, var);
	ft_printf("#1866");
	ret2 = ft_printf("|%+-'*.*h |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1867");
	ret1 = fprintf(fppres, "|%+-'*.*l |\n", width, precision, var);
	ft_printf("#1867");
	ret2 = ft_printf("|%+-'*.*l |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1868");
	ret1 = fprintf(fppres, "|%+-'*.*ll |\n", width, precision, var);
	ft_printf("#1868");
	ret2 = ft_printf("|%+-'*.*ll |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1869");
	ret1 = fprintf(fppres, "|%+-'*.*j |\n", width, precision, var);
	ft_printf("#1869");
	ret2 = ft_printf("|%+-'*.*j |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1870");
	ret1 = fprintf(fppres, "|%+-'*.*z |\n", width, precision, var);
	ft_printf("#1870");
	ret2 = ft_printf("|%+-'*.*z |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1871");
	ret1 = fprintf(fppres, "|%+-'*.* |\n", width, precision, var);
	ft_printf("#1871");
	ret2 = ft_printf("|%+-'*.* |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1872");
	ret1 = fprintf(fppres, "|%0+-'*.*d|\n", width, precision, var);
	ft_printf("#1872");
	ret2 = ft_printf("|%0+-'*.*d|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1873");
	ret1 = fprintf(fppres, "|%0+-'*.*hhd|\n", width, precision, var);
	ft_printf("#1873");
	ret2 = ft_printf("|%0+-'*.*hhd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1874");
	ret1 = fprintf(fppres, "|%0+-'*.*hd|\n", width, precision, var);
	ft_printf("#1874");
	ret2 = ft_printf("|%0+-'*.*hd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1875");
	ret1 = fprintf(fppres, "|%0+-'*.*ld|\n", width, precision, var);
	ft_printf("#1875");
	ret2 = ft_printf("|%0+-'*.*ld|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1876");
	ret1 = fprintf(fppres, "|%0+-'*.*lld|\n", width, precision, var);
	ft_printf("#1876");
	ret2 = ft_printf("|%0+-'*.*lld|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1877");
	ret1 = fprintf(fppres, "|%0+-'*.*jd|\n", width, precision, var);
	ft_printf("#1877");
	ret2 = ft_printf("|%0+-'*.*jd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1878");
	ret1 = fprintf(fppres, "|%0+-'*.*zd|\n", width, precision, var);
	ft_printf("#1878");
	ret2 = ft_printf("|%0+-'*.*zd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1879");
	ret1 = fprintf(fppres, "|%0+-'*.*d|\n", width, precision, var);
	ft_printf("#1879");
	ret2 = ft_printf("|%0+-'*.*d|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1880");
	ret1 = fprintf(fppres, "|%0+-'*.*i|\n", width, precision, var);
	ft_printf("#1880");
	ret2 = ft_printf("|%0+-'*.*i|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1881");
	ret1 = fprintf(fppres, "|%0+-'*.*hhi|\n", width, precision, var);
	ft_printf("#1881");
	ret2 = ft_printf("|%0+-'*.*hhi|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1882");
	ret1 = fprintf(fppres, "|%0+-'*.*hi|\n", width, precision, var);
	ft_printf("#1882");
	ret2 = ft_printf("|%0+-'*.*hi|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1883");
	ret1 = fprintf(fppres, "|%0+-'*.*li|\n", width, precision, var);
	ft_printf("#1883");
	ret2 = ft_printf("|%0+-'*.*li|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1884");
	ret1 = fprintf(fppres, "|%0+-'*.*lli|\n", width, precision, var);
	ft_printf("#1884");
	ret2 = ft_printf("|%0+-'*.*lli|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1885");
	ret1 = fprintf(fppres, "|%0+-'*.*ji|\n", width, precision, var);
	ft_printf("#1885");
	ret2 = ft_printf("|%0+-'*.*ji|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1886");
	ret1 = fprintf(fppres, "|%0+-'*.*zi|\n", width, precision, var);
	ft_printf("#1886");
	ret2 = ft_printf("|%0+-'*.*zi|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1887");
	ret1 = fprintf(fppres, "|%0+-'*.*i|\n", width, precision, var);
	ft_printf("#1887");
	ret2 = ft_printf("|%0+-'*.*i|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1888");
	ret1 = fprintf(fppres, "|%0+-'*.*u|\n", width, precision, var);
	ft_printf("#1888");
	ret2 = ft_printf("|%0+-'*.*u|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1889");
	ret1 = fprintf(fppres, "|%0+-'*.*hhu|\n", width, precision, var);
	ft_printf("#1889");
	ret2 = ft_printf("|%0+-'*.*hhu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1890");
	ret1 = fprintf(fppres, "|%0+-'*.*hu|\n", width, precision, var);
	ft_printf("#1890");
	ret2 = ft_printf("|%0+-'*.*hu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1891");
	ret1 = fprintf(fppres, "|%0+-'*.*lu|\n", width, precision, var);
	ft_printf("#1891");
	ret2 = ft_printf("|%0+-'*.*lu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1892");
	ret1 = fprintf(fppres, "|%0+-'*.*llu|\n", width, precision, var);
	ft_printf("#1892");
	ret2 = ft_printf("|%0+-'*.*llu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1893");
	ret1 = fprintf(fppres, "|%0+-'*.*ju|\n", width, precision, var);
	ft_printf("#1893");
	ret2 = ft_printf("|%0+-'*.*ju|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1894");
	ret1 = fprintf(fppres, "|%0+-'*.*zu|\n", width, precision, var);
	ft_printf("#1894");
	ret2 = ft_printf("|%0+-'*.*zu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1895");
	ret1 = fprintf(fppres, "|%0+-'*.*u|\n", width, precision, var);
	ft_printf("#1895");
	ret2 = ft_printf("|%0+-'*.*u|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1896");
	ret1 = fprintf(fppres, "|%0+-'*.*f|\n", width, precision, var);
	ft_printf("#1896");
	ret2 = ft_printf("|%0+-'*.*f|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1897");
	ret1 = fprintf(fppres, "|%0+-'*.*hhf|\n", width, precision, var);
	ft_printf("#1897");
	ret2 = ft_printf("|%0+-'*.*hhf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1898");
	ret1 = fprintf(fppres, "|%0+-'*.*hf|\n", width, precision, var);
	ft_printf("#1898");
	ret2 = ft_printf("|%0+-'*.*hf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1899");
	ret1 = fprintf(fppres, "|%0+-'*.*lf|\n", width, precision, var);
	ft_printf("#1899");
	ret2 = ft_printf("|%0+-'*.*lf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1900");
	ret1 = fprintf(fppres, "|%0+-'*.*llf|\n", width, precision, var);
	ft_printf("#1900");
	ret2 = ft_printf("|%0+-'*.*llf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1901");
	ret1 = fprintf(fppres, "|%0+-'*.*jf|\n", width, precision, var);
	ft_printf("#1901");
	ret2 = ft_printf("|%0+-'*.*jf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1902");
	ret1 = fprintf(fppres, "|%0+-'*.*zf|\n", width, precision, var);
	ft_printf("#1902");
	ret2 = ft_printf("|%0+-'*.*zf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1903");
	ret1 = fprintf(fppres, "|%0+-'*.*f|\n", width, precision, var);
	ft_printf("#1903");
	ret2 = ft_printf("|%0+-'*.*f|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1904");
	ret1 = fprintf(fppres, "|%0+-'*.*F|\n", width, precision, var);
	ft_printf("#1904");
	ret2 = ft_printf("|%0+-'*.*F|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1905");
	ret1 = fprintf(fppres, "|%0+-'*.*hhF|\n", width, precision, var);
	ft_printf("#1905");
	ret2 = ft_printf("|%0+-'*.*hhF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1906");
	ret1 = fprintf(fppres, "|%0+-'*.*hF|\n", width, precision, var);
	ft_printf("#1906");
	ret2 = ft_printf("|%0+-'*.*hF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1907");
	ret1 = fprintf(fppres, "|%0+-'*.*lF|\n", width, precision, var);
	ft_printf("#1907");
	ret2 = ft_printf("|%0+-'*.*lF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1908");
	ret1 = fprintf(fppres, "|%0+-'*.*llF|\n", width, precision, var);
	ft_printf("#1908");
	ret2 = ft_printf("|%0+-'*.*llF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1909");
	ret1 = fprintf(fppres, "|%0+-'*.*jF|\n", width, precision, var);
	ft_printf("#1909");
	ret2 = ft_printf("|%0+-'*.*jF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1910");
	ret1 = fprintf(fppres, "|%0+-'*.*zF|\n", width, precision, var);
	ft_printf("#1910");
	ret2 = ft_printf("|%0+-'*.*zF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1911");
	ret1 = fprintf(fppres, "|%0+-'*.*F|\n", width, precision, var);
	ft_printf("#1911");
	ret2 = ft_printf("|%0+-'*.*F|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1912");
	ret1 = fprintf(fppres, "|%0+-'*.* |\n", width, precision, var);
	ft_printf("#1912");
	ret2 = ft_printf("|%0+-'*.* |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1913");
	ret1 = fprintf(fppres, "|%0+-'*.*hh |\n", width, precision, var);
	ft_printf("#1913");
	ret2 = ft_printf("|%0+-'*.*hh |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1914");
	ret1 = fprintf(fppres, "|%0+-'*.*h |\n", width, precision, var);
	ft_printf("#1914");
	ret2 = ft_printf("|%0+-'*.*h |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1915");
	ret1 = fprintf(fppres, "|%0+-'*.*l |\n", width, precision, var);
	ft_printf("#1915");
	ret2 = ft_printf("|%0+-'*.*l |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1916");
	ret1 = fprintf(fppres, "|%0+-'*.*ll |\n", width, precision, var);
	ft_printf("#1916");
	ret2 = ft_printf("|%0+-'*.*ll |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1917");
	ret1 = fprintf(fppres, "|%0+-'*.*j |\n", width, precision, var);
	ft_printf("#1917");
	ret2 = ft_printf("|%0+-'*.*j |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1918");
	ret1 = fprintf(fppres, "|%0+-'*.*z |\n", width, precision, var);
	ft_printf("#1918");
	ret2 = ft_printf("|%0+-'*.*z |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1919");
	ret1 = fprintf(fppres, "|%0+-'*.* |\n", width, precision, var);
	ft_printf("#1919");
	ret2 = ft_printf("|%0+-'*.* |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1920");
	ret1 = fprintf(fppres, "|%#'*.*d|\n", width, precision, var);
	ft_printf("#1920");
	ret2 = ft_printf("|%#'*.*d|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1921");
	ret1 = fprintf(fppres, "|%#'*.*hhd|\n", width, precision, var);
	ft_printf("#1921");
	ret2 = ft_printf("|%#'*.*hhd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1922");
	ret1 = fprintf(fppres, "|%#'*.*hd|\n", width, precision, var);
	ft_printf("#1922");
	ret2 = ft_printf("|%#'*.*hd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1923");
	ret1 = fprintf(fppres, "|%#'*.*ld|\n", width, precision, var);
	ft_printf("#1923");
	ret2 = ft_printf("|%#'*.*ld|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1924");
	ret1 = fprintf(fppres, "|%#'*.*lld|\n", width, precision, var);
	ft_printf("#1924");
	ret2 = ft_printf("|%#'*.*lld|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1925");
	ret1 = fprintf(fppres, "|%#'*.*jd|\n", width, precision, var);
	ft_printf("#1925");
	ret2 = ft_printf("|%#'*.*jd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1926");
	ret1 = fprintf(fppres, "|%#'*.*zd|\n", width, precision, var);
	ft_printf("#1926");
	ret2 = ft_printf("|%#'*.*zd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1927");
	ret1 = fprintf(fppres, "|%#'*.*d|\n", width, precision, var);
	ft_printf("#1927");
	ret2 = ft_printf("|%#'*.*d|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1928");
	ret1 = fprintf(fppres, "|%#'*.*i|\n", width, precision, var);
	ft_printf("#1928");
	ret2 = ft_printf("|%#'*.*i|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1929");
	ret1 = fprintf(fppres, "|%#'*.*hhi|\n", width, precision, var);
	ft_printf("#1929");
	ret2 = ft_printf("|%#'*.*hhi|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1930");
	ret1 = fprintf(fppres, "|%#'*.*hi|\n", width, precision, var);
	ft_printf("#1930");
	ret2 = ft_printf("|%#'*.*hi|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1931");
	ret1 = fprintf(fppres, "|%#'*.*li|\n", width, precision, var);
	ft_printf("#1931");
	ret2 = ft_printf("|%#'*.*li|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1932");
	ret1 = fprintf(fppres, "|%#'*.*lli|\n", width, precision, var);
	ft_printf("#1932");
	ret2 = ft_printf("|%#'*.*lli|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1933");
	ret1 = fprintf(fppres, "|%#'*.*ji|\n", width, precision, var);
	ft_printf("#1933");
	ret2 = ft_printf("|%#'*.*ji|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1934");
	ret1 = fprintf(fppres, "|%#'*.*zi|\n", width, precision, var);
	ft_printf("#1934");
	ret2 = ft_printf("|%#'*.*zi|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1935");
	ret1 = fprintf(fppres, "|%#'*.*i|\n", width, precision, var);
	ft_printf("#1935");
	ret2 = ft_printf("|%#'*.*i|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1936");
	ret1 = fprintf(fppres, "|%#'*.*u|\n", width, precision, var);
	ft_printf("#1936");
	ret2 = ft_printf("|%#'*.*u|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1937");
	ret1 = fprintf(fppres, "|%#'*.*hhu|\n", width, precision, var);
	ft_printf("#1937");
	ret2 = ft_printf("|%#'*.*hhu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1938");
	ret1 = fprintf(fppres, "|%#'*.*hu|\n", width, precision, var);
	ft_printf("#1938");
	ret2 = ft_printf("|%#'*.*hu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1939");
	ret1 = fprintf(fppres, "|%#'*.*lu|\n", width, precision, var);
	ft_printf("#1939");
	ret2 = ft_printf("|%#'*.*lu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1940");
	ret1 = fprintf(fppres, "|%#'*.*llu|\n", width, precision, var);
	ft_printf("#1940");
	ret2 = ft_printf("|%#'*.*llu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1941");
	ret1 = fprintf(fppres, "|%#'*.*ju|\n", width, precision, var);
	ft_printf("#1941");
	ret2 = ft_printf("|%#'*.*ju|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1942");
	ret1 = fprintf(fppres, "|%#'*.*zu|\n", width, precision, var);
	ft_printf("#1942");
	ret2 = ft_printf("|%#'*.*zu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1943");
	ret1 = fprintf(fppres, "|%#'*.*u|\n", width, precision, var);
	ft_printf("#1943");
	ret2 = ft_printf("|%#'*.*u|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1944");
	ret1 = fprintf(fppres, "|%#'*.*f|\n", width, precision, var);
	ft_printf("#1944");
	ret2 = ft_printf("|%#'*.*f|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1945");
	ret1 = fprintf(fppres, "|%#'*.*hhf|\n", width, precision, var);
	ft_printf("#1945");
	ret2 = ft_printf("|%#'*.*hhf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1946");
	ret1 = fprintf(fppres, "|%#'*.*hf|\n", width, precision, var);
	ft_printf("#1946");
	ret2 = ft_printf("|%#'*.*hf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1947");
	ret1 = fprintf(fppres, "|%#'*.*lf|\n", width, precision, var);
	ft_printf("#1947");
	ret2 = ft_printf("|%#'*.*lf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1948");
	ret1 = fprintf(fppres, "|%#'*.*llf|\n", width, precision, var);
	ft_printf("#1948");
	ret2 = ft_printf("|%#'*.*llf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1949");
	ret1 = fprintf(fppres, "|%#'*.*jf|\n", width, precision, var);
	ft_printf("#1949");
	ret2 = ft_printf("|%#'*.*jf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1950");
	ret1 = fprintf(fppres, "|%#'*.*zf|\n", width, precision, var);
	ft_printf("#1950");
	ret2 = ft_printf("|%#'*.*zf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1951");
	ret1 = fprintf(fppres, "|%#'*.*f|\n", width, precision, var);
	ft_printf("#1951");
	ret2 = ft_printf("|%#'*.*f|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1952");
	ret1 = fprintf(fppres, "|%#'*.*F|\n", width, precision, var);
	ft_printf("#1952");
	ret2 = ft_printf("|%#'*.*F|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1953");
	ret1 = fprintf(fppres, "|%#'*.*hhF|\n", width, precision, var);
	ft_printf("#1953");
	ret2 = ft_printf("|%#'*.*hhF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1954");
	ret1 = fprintf(fppres, "|%#'*.*hF|\n", width, precision, var);
	ft_printf("#1954");
	ret2 = ft_printf("|%#'*.*hF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1955");
	ret1 = fprintf(fppres, "|%#'*.*lF|\n", width, precision, var);
	ft_printf("#1955");
	ret2 = ft_printf("|%#'*.*lF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1956");
	ret1 = fprintf(fppres, "|%#'*.*llF|\n", width, precision, var);
	ft_printf("#1956");
	ret2 = ft_printf("|%#'*.*llF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1957");
	ret1 = fprintf(fppres, "|%#'*.*jF|\n", width, precision, var);
	ft_printf("#1957");
	ret2 = ft_printf("|%#'*.*jF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1958");
	ret1 = fprintf(fppres, "|%#'*.*zF|\n", width, precision, var);
	ft_printf("#1958");
	ret2 = ft_printf("|%#'*.*zF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1959");
	ret1 = fprintf(fppres, "|%#'*.*F|\n", width, precision, var);
	ft_printf("#1959");
	ret2 = ft_printf("|%#'*.*F|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1960");
	ret1 = fprintf(fppres, "|%#'*.* |\n", width, precision, var);
	ft_printf("#1960");
	ret2 = ft_printf("|%#'*.* |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1961");
	ret1 = fprintf(fppres, "|%#'*.*hh |\n", width, precision, var);
	ft_printf("#1961");
	ret2 = ft_printf("|%#'*.*hh |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1962");
	ret1 = fprintf(fppres, "|%#'*.*h |\n", width, precision, var);
	ft_printf("#1962");
	ret2 = ft_printf("|%#'*.*h |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1963");
	ret1 = fprintf(fppres, "|%#'*.*l |\n", width, precision, var);
	ft_printf("#1963");
	ret2 = ft_printf("|%#'*.*l |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1964");
	ret1 = fprintf(fppres, "|%#'*.*ll |\n", width, precision, var);
	ft_printf("#1964");
	ret2 = ft_printf("|%#'*.*ll |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1965");
	ret1 = fprintf(fppres, "|%#'*.*j |\n", width, precision, var);
	ft_printf("#1965");
	ret2 = ft_printf("|%#'*.*j |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1966");
	ret1 = fprintf(fppres, "|%#'*.*z |\n", width, precision, var);
	ft_printf("#1966");
	ret2 = ft_printf("|%#'*.*z |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1967");
	ret1 = fprintf(fppres, "|%#'*.* |\n", width, precision, var);
	ft_printf("#1967");
	ret2 = ft_printf("|%#'*.* |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1968");
	ret1 = fprintf(fppres, "|%0#'*.*d|\n", width, precision, var);
	ft_printf("#1968");
	ret2 = ft_printf("|%0#'*.*d|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1969");
	ret1 = fprintf(fppres, "|%0#'*.*hhd|\n", width, precision, var);
	ft_printf("#1969");
	ret2 = ft_printf("|%0#'*.*hhd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1970");
	ret1 = fprintf(fppres, "|%0#'*.*hd|\n", width, precision, var);
	ft_printf("#1970");
	ret2 = ft_printf("|%0#'*.*hd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1971");
	ret1 = fprintf(fppres, "|%0#'*.*ld|\n", width, precision, var);
	ft_printf("#1971");
	ret2 = ft_printf("|%0#'*.*ld|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1972");
	ret1 = fprintf(fppres, "|%0#'*.*lld|\n", width, precision, var);
	ft_printf("#1972");
	ret2 = ft_printf("|%0#'*.*lld|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1973");
	ret1 = fprintf(fppres, "|%0#'*.*jd|\n", width, precision, var);
	ft_printf("#1973");
	ret2 = ft_printf("|%0#'*.*jd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1974");
	ret1 = fprintf(fppres, "|%0#'*.*zd|\n", width, precision, var);
	ft_printf("#1974");
	ret2 = ft_printf("|%0#'*.*zd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1975");
	ret1 = fprintf(fppres, "|%0#'*.*d|\n", width, precision, var);
	ft_printf("#1975");
	ret2 = ft_printf("|%0#'*.*d|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1976");
	ret1 = fprintf(fppres, "|%0#'*.*i|\n", width, precision, var);
	ft_printf("#1976");
	ret2 = ft_printf("|%0#'*.*i|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1977");
	ret1 = fprintf(fppres, "|%0#'*.*hhi|\n", width, precision, var);
	ft_printf("#1977");
	ret2 = ft_printf("|%0#'*.*hhi|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1978");
	ret1 = fprintf(fppres, "|%0#'*.*hi|\n", width, precision, var);
	ft_printf("#1978");
	ret2 = ft_printf("|%0#'*.*hi|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1979");
	ret1 = fprintf(fppres, "|%0#'*.*li|\n", width, precision, var);
	ft_printf("#1979");
	ret2 = ft_printf("|%0#'*.*li|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1980");
	ret1 = fprintf(fppres, "|%0#'*.*lli|\n", width, precision, var);
	ft_printf("#1980");
	ret2 = ft_printf("|%0#'*.*lli|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1981");
	ret1 = fprintf(fppres, "|%0#'*.*ji|\n", width, precision, var);
	ft_printf("#1981");
	ret2 = ft_printf("|%0#'*.*ji|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1982");
	ret1 = fprintf(fppres, "|%0#'*.*zi|\n", width, precision, var);
	ft_printf("#1982");
	ret2 = ft_printf("|%0#'*.*zi|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1983");
	ret1 = fprintf(fppres, "|%0#'*.*i|\n", width, precision, var);
	ft_printf("#1983");
	ret2 = ft_printf("|%0#'*.*i|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1984");
	ret1 = fprintf(fppres, "|%0#'*.*u|\n", width, precision, var);
	ft_printf("#1984");
	ret2 = ft_printf("|%0#'*.*u|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1985");
	ret1 = fprintf(fppres, "|%0#'*.*hhu|\n", width, precision, var);
	ft_printf("#1985");
	ret2 = ft_printf("|%0#'*.*hhu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1986");
	ret1 = fprintf(fppres, "|%0#'*.*hu|\n", width, precision, var);
	ft_printf("#1986");
	ret2 = ft_printf("|%0#'*.*hu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1987");
	ret1 = fprintf(fppres, "|%0#'*.*lu|\n", width, precision, var);
	ft_printf("#1987");
	ret2 = ft_printf("|%0#'*.*lu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1988");
	ret1 = fprintf(fppres, "|%0#'*.*llu|\n", width, precision, var);
	ft_printf("#1988");
	ret2 = ft_printf("|%0#'*.*llu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1989");
	ret1 = fprintf(fppres, "|%0#'*.*ju|\n", width, precision, var);
	ft_printf("#1989");
	ret2 = ft_printf("|%0#'*.*ju|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1990");
	ret1 = fprintf(fppres, "|%0#'*.*zu|\n", width, precision, var);
	ft_printf("#1990");
	ret2 = ft_printf("|%0#'*.*zu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1991");
	ret1 = fprintf(fppres, "|%0#'*.*u|\n", width, precision, var);
	ft_printf("#1991");
	ret2 = ft_printf("|%0#'*.*u|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1992");
	ret1 = fprintf(fppres, "|%0#'*.*f|\n", width, precision, var);
	ft_printf("#1992");
	ret2 = ft_printf("|%0#'*.*f|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1993");
	ret1 = fprintf(fppres, "|%0#'*.*hhf|\n", width, precision, var);
	ft_printf("#1993");
	ret2 = ft_printf("|%0#'*.*hhf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1994");
	ret1 = fprintf(fppres, "|%0#'*.*hf|\n", width, precision, var);
	ft_printf("#1994");
	ret2 = ft_printf("|%0#'*.*hf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1995");
	ret1 = fprintf(fppres, "|%0#'*.*lf|\n", width, precision, var);
	ft_printf("#1995");
	ret2 = ft_printf("|%0#'*.*lf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1996");
	ret1 = fprintf(fppres, "|%0#'*.*llf|\n", width, precision, var);
	ft_printf("#1996");
	ret2 = ft_printf("|%0#'*.*llf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1997");
	ret1 = fprintf(fppres, "|%0#'*.*jf|\n", width, precision, var);
	ft_printf("#1997");
	ret2 = ft_printf("|%0#'*.*jf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1998");
	ret1 = fprintf(fppres, "|%0#'*.*zf|\n", width, precision, var);
	ft_printf("#1998");
	ret2 = ft_printf("|%0#'*.*zf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1999");
	ret1 = fprintf(fppres, "|%0#'*.*f|\n", width, precision, var);
	ft_printf("#1999");
	ret2 = ft_printf("|%0#'*.*f|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2000");
	ret1 = fprintf(fppres, "|%0#'*.*F|\n", width, precision, var);
	ft_printf("#2000");
	ret2 = ft_printf("|%0#'*.*F|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2001");
	ret1 = fprintf(fppres, "|%0#'*.*hhF|\n", width, precision, var);
	ft_printf("#2001");
	ret2 = ft_printf("|%0#'*.*hhF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2002");
	ret1 = fprintf(fppres, "|%0#'*.*hF|\n", width, precision, var);
	ft_printf("#2002");
	ret2 = ft_printf("|%0#'*.*hF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2003");
	ret1 = fprintf(fppres, "|%0#'*.*lF|\n", width, precision, var);
	ft_printf("#2003");
	ret2 = ft_printf("|%0#'*.*lF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2004");
	ret1 = fprintf(fppres, "|%0#'*.*llF|\n", width, precision, var);
	ft_printf("#2004");
	ret2 = ft_printf("|%0#'*.*llF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2005");
	ret1 = fprintf(fppres, "|%0#'*.*jF|\n", width, precision, var);
	ft_printf("#2005");
	ret2 = ft_printf("|%0#'*.*jF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2006");
	ret1 = fprintf(fppres, "|%0#'*.*zF|\n", width, precision, var);
	ft_printf("#2006");
	ret2 = ft_printf("|%0#'*.*zF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2007");
	ret1 = fprintf(fppres, "|%0#'*.*F|\n", width, precision, var);
	ft_printf("#2007");
	ret2 = ft_printf("|%0#'*.*F|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2008");
	ret1 = fprintf(fppres, "|%0#'*.* |\n", width, precision, var);
	ft_printf("#2008");
	ret2 = ft_printf("|%0#'*.* |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2009");
	ret1 = fprintf(fppres, "|%0#'*.*hh |\n", width, precision, var);
	ft_printf("#2009");
	ret2 = ft_printf("|%0#'*.*hh |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2010");
	ret1 = fprintf(fppres, "|%0#'*.*h |\n", width, precision, var);
	ft_printf("#2010");
	ret2 = ft_printf("|%0#'*.*h |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2011");
	ret1 = fprintf(fppres, "|%0#'*.*l |\n", width, precision, var);
	ft_printf("#2011");
	ret2 = ft_printf("|%0#'*.*l |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2012");
	ret1 = fprintf(fppres, "|%0#'*.*ll |\n", width, precision, var);
	ft_printf("#2012");
	ret2 = ft_printf("|%0#'*.*ll |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2013");
	ret1 = fprintf(fppres, "|%0#'*.*j |\n", width, precision, var);
	ft_printf("#2013");
	ret2 = ft_printf("|%0#'*.*j |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2014");
	ret1 = fprintf(fppres, "|%0#'*.*z |\n", width, precision, var);
	ft_printf("#2014");
	ret2 = ft_printf("|%0#'*.*z |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2015");
	ret1 = fprintf(fppres, "|%0#'*.* |\n", width, precision, var);
	ft_printf("#2015");
	ret2 = ft_printf("|%0#'*.* |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2016");
	ret1 = fprintf(fppres, "|%+#'*.*d|\n", width, precision, var);
	ft_printf("#2016");
	ret2 = ft_printf("|%+#'*.*d|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2017");
	ret1 = fprintf(fppres, "|%+#'*.*hhd|\n", width, precision, var);
	ft_printf("#2017");
	ret2 = ft_printf("|%+#'*.*hhd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2018");
	ret1 = fprintf(fppres, "|%+#'*.*hd|\n", width, precision, var);
	ft_printf("#2018");
	ret2 = ft_printf("|%+#'*.*hd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2019");
	ret1 = fprintf(fppres, "|%+#'*.*ld|\n", width, precision, var);
	ft_printf("#2019");
	ret2 = ft_printf("|%+#'*.*ld|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2020");
	ret1 = fprintf(fppres, "|%+#'*.*lld|\n", width, precision, var);
	ft_printf("#2020");
	ret2 = ft_printf("|%+#'*.*lld|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2021");
	ret1 = fprintf(fppres, "|%+#'*.*jd|\n", width, precision, var);
	ft_printf("#2021");
	ret2 = ft_printf("|%+#'*.*jd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2022");
	ret1 = fprintf(fppres, "|%+#'*.*zd|\n", width, precision, var);
	ft_printf("#2022");
	ret2 = ft_printf("|%+#'*.*zd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2023");
	ret1 = fprintf(fppres, "|%+#'*.*d|\n", width, precision, var);
	ft_printf("#2023");
	ret2 = ft_printf("|%+#'*.*d|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2024");
	ret1 = fprintf(fppres, "|%+#'*.*i|\n", width, precision, var);
	ft_printf("#2024");
	ret2 = ft_printf("|%+#'*.*i|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2025");
	ret1 = fprintf(fppres, "|%+#'*.*hhi|\n", width, precision, var);
	ft_printf("#2025");
	ret2 = ft_printf("|%+#'*.*hhi|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2026");
	ret1 = fprintf(fppres, "|%+#'*.*hi|\n", width, precision, var);
	ft_printf("#2026");
	ret2 = ft_printf("|%+#'*.*hi|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2027");
	ret1 = fprintf(fppres, "|%+#'*.*li|\n", width, precision, var);
	ft_printf("#2027");
	ret2 = ft_printf("|%+#'*.*li|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2028");
	ret1 = fprintf(fppres, "|%+#'*.*lli|\n", width, precision, var);
	ft_printf("#2028");
	ret2 = ft_printf("|%+#'*.*lli|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2029");
	ret1 = fprintf(fppres, "|%+#'*.*ji|\n", width, precision, var);
	ft_printf("#2029");
	ret2 = ft_printf("|%+#'*.*ji|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2030");
	ret1 = fprintf(fppres, "|%+#'*.*zi|\n", width, precision, var);
	ft_printf("#2030");
	ret2 = ft_printf("|%+#'*.*zi|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2031");
	ret1 = fprintf(fppres, "|%+#'*.*i|\n", width, precision, var);
	ft_printf("#2031");
	ret2 = ft_printf("|%+#'*.*i|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2032");
	ret1 = fprintf(fppres, "|%+#'*.*u|\n", width, precision, var);
	ft_printf("#2032");
	ret2 = ft_printf("|%+#'*.*u|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2033");
	ret1 = fprintf(fppres, "|%+#'*.*hhu|\n", width, precision, var);
	ft_printf("#2033");
	ret2 = ft_printf("|%+#'*.*hhu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2034");
	ret1 = fprintf(fppres, "|%+#'*.*hu|\n", width, precision, var);
	ft_printf("#2034");
	ret2 = ft_printf("|%+#'*.*hu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2035");
	ret1 = fprintf(fppres, "|%+#'*.*lu|\n", width, precision, var);
	ft_printf("#2035");
	ret2 = ft_printf("|%+#'*.*lu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2036");
	ret1 = fprintf(fppres, "|%+#'*.*llu|\n", width, precision, var);
	ft_printf("#2036");
	ret2 = ft_printf("|%+#'*.*llu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2037");
	ret1 = fprintf(fppres, "|%+#'*.*ju|\n", width, precision, var);
	ft_printf("#2037");
	ret2 = ft_printf("|%+#'*.*ju|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2038");
	ret1 = fprintf(fppres, "|%+#'*.*zu|\n", width, precision, var);
	ft_printf("#2038");
	ret2 = ft_printf("|%+#'*.*zu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2039");
	ret1 = fprintf(fppres, "|%+#'*.*u|\n", width, precision, var);
	ft_printf("#2039");
	ret2 = ft_printf("|%+#'*.*u|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2040");
	ret1 = fprintf(fppres, "|%+#'*.*f|\n", width, precision, var);
	ft_printf("#2040");
	ret2 = ft_printf("|%+#'*.*f|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2041");
	ret1 = fprintf(fppres, "|%+#'*.*hhf|\n", width, precision, var);
	ft_printf("#2041");
	ret2 = ft_printf("|%+#'*.*hhf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2042");
	ret1 = fprintf(fppres, "|%+#'*.*hf|\n", width, precision, var);
	ft_printf("#2042");
	ret2 = ft_printf("|%+#'*.*hf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2043");
	ret1 = fprintf(fppres, "|%+#'*.*lf|\n", width, precision, var);
	ft_printf("#2043");
	ret2 = ft_printf("|%+#'*.*lf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2044");
	ret1 = fprintf(fppres, "|%+#'*.*llf|\n", width, precision, var);
	ft_printf("#2044");
	ret2 = ft_printf("|%+#'*.*llf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2045");
	ret1 = fprintf(fppres, "|%+#'*.*jf|\n", width, precision, var);
	ft_printf("#2045");
	ret2 = ft_printf("|%+#'*.*jf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2046");
	ret1 = fprintf(fppres, "|%+#'*.*zf|\n", width, precision, var);
	ft_printf("#2046");
	ret2 = ft_printf("|%+#'*.*zf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2047");
	ret1 = fprintf(fppres, "|%+#'*.*f|\n", width, precision, var);
	ft_printf("#2047");
	ret2 = ft_printf("|%+#'*.*f|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2048");
	ret1 = fprintf(fppres, "|%+#'*.*F|\n", width, precision, var);
	ft_printf("#2048");
	ret2 = ft_printf("|%+#'*.*F|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2049");
	ret1 = fprintf(fppres, "|%+#'*.*hhF|\n", width, precision, var);
	ft_printf("#2049");
	ret2 = ft_printf("|%+#'*.*hhF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2050");
	ret1 = fprintf(fppres, "|%+#'*.*hF|\n", width, precision, var);
	ft_printf("#2050");
	ret2 = ft_printf("|%+#'*.*hF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2051");
	ret1 = fprintf(fppres, "|%+#'*.*lF|\n", width, precision, var);
	ft_printf("#2051");
	ret2 = ft_printf("|%+#'*.*lF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2052");
	ret1 = fprintf(fppres, "|%+#'*.*llF|\n", width, precision, var);
	ft_printf("#2052");
	ret2 = ft_printf("|%+#'*.*llF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2053");
	ret1 = fprintf(fppres, "|%+#'*.*jF|\n", width, precision, var);
	ft_printf("#2053");
	ret2 = ft_printf("|%+#'*.*jF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2054");
	ret1 = fprintf(fppres, "|%+#'*.*zF|\n", width, precision, var);
	ft_printf("#2054");
	ret2 = ft_printf("|%+#'*.*zF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2055");
	ret1 = fprintf(fppres, "|%+#'*.*F|\n", width, precision, var);
	ft_printf("#2055");
	ret2 = ft_printf("|%+#'*.*F|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2056");
	ret1 = fprintf(fppres, "|%+#'*.* |\n", width, precision, var);
	ft_printf("#2056");
	ret2 = ft_printf("|%+#'*.* |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2057");
	ret1 = fprintf(fppres, "|%+#'*.*hh |\n", width, precision, var);
	ft_printf("#2057");
	ret2 = ft_printf("|%+#'*.*hh |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2058");
	ret1 = fprintf(fppres, "|%+#'*.*h |\n", width, precision, var);
	ft_printf("#2058");
	ret2 = ft_printf("|%+#'*.*h |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2059");
	ret1 = fprintf(fppres, "|%+#'*.*l |\n", width, precision, var);
	ft_printf("#2059");
	ret2 = ft_printf("|%+#'*.*l |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2060");
	ret1 = fprintf(fppres, "|%+#'*.*ll |\n", width, precision, var);
	ft_printf("#2060");
	ret2 = ft_printf("|%+#'*.*ll |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2061");
	ret1 = fprintf(fppres, "|%+#'*.*j |\n", width, precision, var);
	ft_printf("#2061");
	ret2 = ft_printf("|%+#'*.*j |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2062");
	ret1 = fprintf(fppres, "|%+#'*.*z |\n", width, precision, var);
	ft_printf("#2062");
	ret2 = ft_printf("|%+#'*.*z |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2063");
	ret1 = fprintf(fppres, "|%+#'*.* |\n", width, precision, var);
	ft_printf("#2063");
	ret2 = ft_printf("|%+#'*.* |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2064");
	ret1 = fprintf(fppres, "|%0+#'*.*d|\n", width, precision, var);
	ft_printf("#2064");
	ret2 = ft_printf("|%0+#'*.*d|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2065");
	ret1 = fprintf(fppres, "|%0+#'*.*hhd|\n", width, precision, var);
	ft_printf("#2065");
	ret2 = ft_printf("|%0+#'*.*hhd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2066");
	ret1 = fprintf(fppres, "|%0+#'*.*hd|\n", width, precision, var);
	ft_printf("#2066");
	ret2 = ft_printf("|%0+#'*.*hd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2067");
	ret1 = fprintf(fppres, "|%0+#'*.*ld|\n", width, precision, var);
	ft_printf("#2067");
	ret2 = ft_printf("|%0+#'*.*ld|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2068");
	ret1 = fprintf(fppres, "|%0+#'*.*lld|\n", width, precision, var);
	ft_printf("#2068");
	ret2 = ft_printf("|%0+#'*.*lld|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2069");
	ret1 = fprintf(fppres, "|%0+#'*.*jd|\n", width, precision, var);
	ft_printf("#2069");
	ret2 = ft_printf("|%0+#'*.*jd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2070");
	ret1 = fprintf(fppres, "|%0+#'*.*zd|\n", width, precision, var);
	ft_printf("#2070");
	ret2 = ft_printf("|%0+#'*.*zd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2071");
	ret1 = fprintf(fppres, "|%0+#'*.*d|\n", width, precision, var);
	ft_printf("#2071");
	ret2 = ft_printf("|%0+#'*.*d|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2072");
	ret1 = fprintf(fppres, "|%0+#'*.*i|\n", width, precision, var);
	ft_printf("#2072");
	ret2 = ft_printf("|%0+#'*.*i|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2073");
	ret1 = fprintf(fppres, "|%0+#'*.*hhi|\n", width, precision, var);
	ft_printf("#2073");
	ret2 = ft_printf("|%0+#'*.*hhi|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2074");
	ret1 = fprintf(fppres, "|%0+#'*.*hi|\n", width, precision, var);
	ft_printf("#2074");
	ret2 = ft_printf("|%0+#'*.*hi|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2075");
	ret1 = fprintf(fppres, "|%0+#'*.*li|\n", width, precision, var);
	ft_printf("#2075");
	ret2 = ft_printf("|%0+#'*.*li|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2076");
	ret1 = fprintf(fppres, "|%0+#'*.*lli|\n", width, precision, var);
	ft_printf("#2076");
	ret2 = ft_printf("|%0+#'*.*lli|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2077");
	ret1 = fprintf(fppres, "|%0+#'*.*ji|\n", width, precision, var);
	ft_printf("#2077");
	ret2 = ft_printf("|%0+#'*.*ji|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2078");
	ret1 = fprintf(fppres, "|%0+#'*.*zi|\n", width, precision, var);
	ft_printf("#2078");
	ret2 = ft_printf("|%0+#'*.*zi|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2079");
	ret1 = fprintf(fppres, "|%0+#'*.*i|\n", width, precision, var);
	ft_printf("#2079");
	ret2 = ft_printf("|%0+#'*.*i|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2080");
	ret1 = fprintf(fppres, "|%0+#'*.*u|\n", width, precision, var);
	ft_printf("#2080");
	ret2 = ft_printf("|%0+#'*.*u|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2081");
	ret1 = fprintf(fppres, "|%0+#'*.*hhu|\n", width, precision, var);
	ft_printf("#2081");
	ret2 = ft_printf("|%0+#'*.*hhu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2082");
	ret1 = fprintf(fppres, "|%0+#'*.*hu|\n", width, precision, var);
	ft_printf("#2082");
	ret2 = ft_printf("|%0+#'*.*hu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2083");
	ret1 = fprintf(fppres, "|%0+#'*.*lu|\n", width, precision, var);
	ft_printf("#2083");
	ret2 = ft_printf("|%0+#'*.*lu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2084");
	ret1 = fprintf(fppres, "|%0+#'*.*llu|\n", width, precision, var);
	ft_printf("#2084");
	ret2 = ft_printf("|%0+#'*.*llu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2085");
	ret1 = fprintf(fppres, "|%0+#'*.*ju|\n", width, precision, var);
	ft_printf("#2085");
	ret2 = ft_printf("|%0+#'*.*ju|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2086");
	ret1 = fprintf(fppres, "|%0+#'*.*zu|\n", width, precision, var);
	ft_printf("#2086");
	ret2 = ft_printf("|%0+#'*.*zu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2087");
	ret1 = fprintf(fppres, "|%0+#'*.*u|\n", width, precision, var);
	ft_printf("#2087");
	ret2 = ft_printf("|%0+#'*.*u|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2088");
	ret1 = fprintf(fppres, "|%0+#'*.*f|\n", width, precision, var);
	ft_printf("#2088");
	ret2 = ft_printf("|%0+#'*.*f|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2089");
	ret1 = fprintf(fppres, "|%0+#'*.*hhf|\n", width, precision, var);
	ft_printf("#2089");
	ret2 = ft_printf("|%0+#'*.*hhf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2090");
	ret1 = fprintf(fppres, "|%0+#'*.*hf|\n", width, precision, var);
	ft_printf("#2090");
	ret2 = ft_printf("|%0+#'*.*hf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2091");
	ret1 = fprintf(fppres, "|%0+#'*.*lf|\n", width, precision, var);
	ft_printf("#2091");
	ret2 = ft_printf("|%0+#'*.*lf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2092");
	ret1 = fprintf(fppres, "|%0+#'*.*llf|\n", width, precision, var);
	ft_printf("#2092");
	ret2 = ft_printf("|%0+#'*.*llf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2093");
	ret1 = fprintf(fppres, "|%0+#'*.*jf|\n", width, precision, var);
	ft_printf("#2093");
	ret2 = ft_printf("|%0+#'*.*jf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2094");
	ret1 = fprintf(fppres, "|%0+#'*.*zf|\n", width, precision, var);
	ft_printf("#2094");
	ret2 = ft_printf("|%0+#'*.*zf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2095");
	ret1 = fprintf(fppres, "|%0+#'*.*f|\n", width, precision, var);
	ft_printf("#2095");
	ret2 = ft_printf("|%0+#'*.*f|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2096");
	ret1 = fprintf(fppres, "|%0+#'*.*F|\n", width, precision, var);
	ft_printf("#2096");
	ret2 = ft_printf("|%0+#'*.*F|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2097");
	ret1 = fprintf(fppres, "|%0+#'*.*hhF|\n", width, precision, var);
	ft_printf("#2097");
	ret2 = ft_printf("|%0+#'*.*hhF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2098");
	ret1 = fprintf(fppres, "|%0+#'*.*hF|\n", width, precision, var);
	ft_printf("#2098");
	ret2 = ft_printf("|%0+#'*.*hF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2099");
	ret1 = fprintf(fppres, "|%0+#'*.*lF|\n", width, precision, var);
	ft_printf("#2099");
	ret2 = ft_printf("|%0+#'*.*lF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2100");
	ret1 = fprintf(fppres, "|%0+#'*.*llF|\n", width, precision, var);
	ft_printf("#2100");
	ret2 = ft_printf("|%0+#'*.*llF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2101");
	ret1 = fprintf(fppres, "|%0+#'*.*jF|\n", width, precision, var);
	ft_printf("#2101");
	ret2 = ft_printf("|%0+#'*.*jF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2102");
	ret1 = fprintf(fppres, "|%0+#'*.*zF|\n", width, precision, var);
	ft_printf("#2102");
	ret2 = ft_printf("|%0+#'*.*zF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2103");
	ret1 = fprintf(fppres, "|%0+#'*.*F|\n", width, precision, var);
	ft_printf("#2103");
	ret2 = ft_printf("|%0+#'*.*F|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2104");
	ret1 = fprintf(fppres, "|%0+#'*.* |\n", width, precision, var);
	ft_printf("#2104");
	ret2 = ft_printf("|%0+#'*.* |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2105");
	ret1 = fprintf(fppres, "|%0+#'*.*hh |\n", width, precision, var);
	ft_printf("#2105");
	ret2 = ft_printf("|%0+#'*.*hh |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2106");
	ret1 = fprintf(fppres, "|%0+#'*.*h |\n", width, precision, var);
	ft_printf("#2106");
	ret2 = ft_printf("|%0+#'*.*h |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2107");
	ret1 = fprintf(fppres, "|%0+#'*.*l |\n", width, precision, var);
	ft_printf("#2107");
	ret2 = ft_printf("|%0+#'*.*l |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2108");
	ret1 = fprintf(fppres, "|%0+#'*.*ll |\n", width, precision, var);
	ft_printf("#2108");
	ret2 = ft_printf("|%0+#'*.*ll |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2109");
	ret1 = fprintf(fppres, "|%0+#'*.*j |\n", width, precision, var);
	ft_printf("#2109");
	ret2 = ft_printf("|%0+#'*.*j |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2110");
	ret1 = fprintf(fppres, "|%0+#'*.*z |\n", width, precision, var);
	ft_printf("#2110");
	ret2 = ft_printf("|%0+#'*.*z |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2111");
	ret1 = fprintf(fppres, "|%0+#'*.* |\n", width, precision, var);
	ft_printf("#2111");
	ret2 = ft_printf("|%0+#'*.* |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2112");
	ret1 = fprintf(fppres, "|%-#'*.*d|\n", width, precision, var);
	ft_printf("#2112");
	ret2 = ft_printf("|%-#'*.*d|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2113");
	ret1 = fprintf(fppres, "|%-#'*.*hhd|\n", width, precision, var);
	ft_printf("#2113");
	ret2 = ft_printf("|%-#'*.*hhd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2114");
	ret1 = fprintf(fppres, "|%-#'*.*hd|\n", width, precision, var);
	ft_printf("#2114");
	ret2 = ft_printf("|%-#'*.*hd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2115");
	ret1 = fprintf(fppres, "|%-#'*.*ld|\n", width, precision, var);
	ft_printf("#2115");
	ret2 = ft_printf("|%-#'*.*ld|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2116");
	ret1 = fprintf(fppres, "|%-#'*.*lld|\n", width, precision, var);
	ft_printf("#2116");
	ret2 = ft_printf("|%-#'*.*lld|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2117");
	ret1 = fprintf(fppres, "|%-#'*.*jd|\n", width, precision, var);
	ft_printf("#2117");
	ret2 = ft_printf("|%-#'*.*jd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2118");
	ret1 = fprintf(fppres, "|%-#'*.*zd|\n", width, precision, var);
	ft_printf("#2118");
	ret2 = ft_printf("|%-#'*.*zd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2119");
	ret1 = fprintf(fppres, "|%-#'*.*d|\n", width, precision, var);
	ft_printf("#2119");
	ret2 = ft_printf("|%-#'*.*d|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2120");
	ret1 = fprintf(fppres, "|%-#'*.*i|\n", width, precision, var);
	ft_printf("#2120");
	ret2 = ft_printf("|%-#'*.*i|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2121");
	ret1 = fprintf(fppres, "|%-#'*.*hhi|\n", width, precision, var);
	ft_printf("#2121");
	ret2 = ft_printf("|%-#'*.*hhi|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2122");
	ret1 = fprintf(fppres, "|%-#'*.*hi|\n", width, precision, var);
	ft_printf("#2122");
	ret2 = ft_printf("|%-#'*.*hi|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2123");
	ret1 = fprintf(fppres, "|%-#'*.*li|\n", width, precision, var);
	ft_printf("#2123");
	ret2 = ft_printf("|%-#'*.*li|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2124");
	ret1 = fprintf(fppres, "|%-#'*.*lli|\n", width, precision, var);
	ft_printf("#2124");
	ret2 = ft_printf("|%-#'*.*lli|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2125");
	ret1 = fprintf(fppres, "|%-#'*.*ji|\n", width, precision, var);
	ft_printf("#2125");
	ret2 = ft_printf("|%-#'*.*ji|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2126");
	ret1 = fprintf(fppres, "|%-#'*.*zi|\n", width, precision, var);
	ft_printf("#2126");
	ret2 = ft_printf("|%-#'*.*zi|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2127");
	ret1 = fprintf(fppres, "|%-#'*.*i|\n", width, precision, var);
	ft_printf("#2127");
	ret2 = ft_printf("|%-#'*.*i|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2128");
	ret1 = fprintf(fppres, "|%-#'*.*u|\n", width, precision, var);
	ft_printf("#2128");
	ret2 = ft_printf("|%-#'*.*u|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2129");
	ret1 = fprintf(fppres, "|%-#'*.*hhu|\n", width, precision, var);
	ft_printf("#2129");
	ret2 = ft_printf("|%-#'*.*hhu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2130");
	ret1 = fprintf(fppres, "|%-#'*.*hu|\n", width, precision, var);
	ft_printf("#2130");
	ret2 = ft_printf("|%-#'*.*hu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2131");
	ret1 = fprintf(fppres, "|%-#'*.*lu|\n", width, precision, var);
	ft_printf("#2131");
	ret2 = ft_printf("|%-#'*.*lu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2132");
	ret1 = fprintf(fppres, "|%-#'*.*llu|\n", width, precision, var);
	ft_printf("#2132");
	ret2 = ft_printf("|%-#'*.*llu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2133");
	ret1 = fprintf(fppres, "|%-#'*.*ju|\n", width, precision, var);
	ft_printf("#2133");
	ret2 = ft_printf("|%-#'*.*ju|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2134");
	ret1 = fprintf(fppres, "|%-#'*.*zu|\n", width, precision, var);
	ft_printf("#2134");
	ret2 = ft_printf("|%-#'*.*zu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2135");
	ret1 = fprintf(fppres, "|%-#'*.*u|\n", width, precision, var);
	ft_printf("#2135");
	ret2 = ft_printf("|%-#'*.*u|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2136");
	ret1 = fprintf(fppres, "|%-#'*.*f|\n", width, precision, var);
	ft_printf("#2136");
	ret2 = ft_printf("|%-#'*.*f|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2137");
	ret1 = fprintf(fppres, "|%-#'*.*hhf|\n", width, precision, var);
	ft_printf("#2137");
	ret2 = ft_printf("|%-#'*.*hhf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2138");
	ret1 = fprintf(fppres, "|%-#'*.*hf|\n", width, precision, var);
	ft_printf("#2138");
	ret2 = ft_printf("|%-#'*.*hf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2139");
	ret1 = fprintf(fppres, "|%-#'*.*lf|\n", width, precision, var);
	ft_printf("#2139");
	ret2 = ft_printf("|%-#'*.*lf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2140");
	ret1 = fprintf(fppres, "|%-#'*.*llf|\n", width, precision, var);
	ft_printf("#2140");
	ret2 = ft_printf("|%-#'*.*llf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2141");
	ret1 = fprintf(fppres, "|%-#'*.*jf|\n", width, precision, var);
	ft_printf("#2141");
	ret2 = ft_printf("|%-#'*.*jf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2142");
	ret1 = fprintf(fppres, "|%-#'*.*zf|\n", width, precision, var);
	ft_printf("#2142");
	ret2 = ft_printf("|%-#'*.*zf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2143");
	ret1 = fprintf(fppres, "|%-#'*.*f|\n", width, precision, var);
	ft_printf("#2143");
	ret2 = ft_printf("|%-#'*.*f|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2144");
	ret1 = fprintf(fppres, "|%-#'*.*F|\n", width, precision, var);
	ft_printf("#2144");
	ret2 = ft_printf("|%-#'*.*F|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2145");
	ret1 = fprintf(fppres, "|%-#'*.*hhF|\n", width, precision, var);
	ft_printf("#2145");
	ret2 = ft_printf("|%-#'*.*hhF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2146");
	ret1 = fprintf(fppres, "|%-#'*.*hF|\n", width, precision, var);
	ft_printf("#2146");
	ret2 = ft_printf("|%-#'*.*hF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2147");
	ret1 = fprintf(fppres, "|%-#'*.*lF|\n", width, precision, var);
	ft_printf("#2147");
	ret2 = ft_printf("|%-#'*.*lF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2148");
	ret1 = fprintf(fppres, "|%-#'*.*llF|\n", width, precision, var);
	ft_printf("#2148");
	ret2 = ft_printf("|%-#'*.*llF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2149");
	ret1 = fprintf(fppres, "|%-#'*.*jF|\n", width, precision, var);
	ft_printf("#2149");
	ret2 = ft_printf("|%-#'*.*jF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2150");
	ret1 = fprintf(fppres, "|%-#'*.*zF|\n", width, precision, var);
	ft_printf("#2150");
	ret2 = ft_printf("|%-#'*.*zF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2151");
	ret1 = fprintf(fppres, "|%-#'*.*F|\n", width, precision, var);
	ft_printf("#2151");
	ret2 = ft_printf("|%-#'*.*F|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2152");
	ret1 = fprintf(fppres, "|%-#'*.* |\n", width, precision, var);
	ft_printf("#2152");
	ret2 = ft_printf("|%-#'*.* |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2153");
	ret1 = fprintf(fppres, "|%-#'*.*hh |\n", width, precision, var);
	ft_printf("#2153");
	ret2 = ft_printf("|%-#'*.*hh |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2154");
	ret1 = fprintf(fppres, "|%-#'*.*h |\n", width, precision, var);
	ft_printf("#2154");
	ret2 = ft_printf("|%-#'*.*h |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2155");
	ret1 = fprintf(fppres, "|%-#'*.*l |\n", width, precision, var);
	ft_printf("#2155");
	ret2 = ft_printf("|%-#'*.*l |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2156");
	ret1 = fprintf(fppres, "|%-#'*.*ll |\n", width, precision, var);
	ft_printf("#2156");
	ret2 = ft_printf("|%-#'*.*ll |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2157");
	ret1 = fprintf(fppres, "|%-#'*.*j |\n", width, precision, var);
	ft_printf("#2157");
	ret2 = ft_printf("|%-#'*.*j |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2158");
	ret1 = fprintf(fppres, "|%-#'*.*z |\n", width, precision, var);
	ft_printf("#2158");
	ret2 = ft_printf("|%-#'*.*z |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2159");
	ret1 = fprintf(fppres, "|%-#'*.* |\n", width, precision, var);
	ft_printf("#2159");
	ret2 = ft_printf("|%-#'*.* |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2160");
	ret1 = fprintf(fppres, "|%0-#'*.*d|\n", width, precision, var);
	ft_printf("#2160");
	ret2 = ft_printf("|%0-#'*.*d|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2161");
	ret1 = fprintf(fppres, "|%0-#'*.*hhd|\n", width, precision, var);
	ft_printf("#2161");
	ret2 = ft_printf("|%0-#'*.*hhd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2162");
	ret1 = fprintf(fppres, "|%0-#'*.*hd|\n", width, precision, var);
	ft_printf("#2162");
	ret2 = ft_printf("|%0-#'*.*hd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2163");
	ret1 = fprintf(fppres, "|%0-#'*.*ld|\n", width, precision, var);
	ft_printf("#2163");
	ret2 = ft_printf("|%0-#'*.*ld|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2164");
	ret1 = fprintf(fppres, "|%0-#'*.*lld|\n", width, precision, var);
	ft_printf("#2164");
	ret2 = ft_printf("|%0-#'*.*lld|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2165");
	ret1 = fprintf(fppres, "|%0-#'*.*jd|\n", width, precision, var);
	ft_printf("#2165");
	ret2 = ft_printf("|%0-#'*.*jd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2166");
	ret1 = fprintf(fppres, "|%0-#'*.*zd|\n", width, precision, var);
	ft_printf("#2166");
	ret2 = ft_printf("|%0-#'*.*zd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2167");
	ret1 = fprintf(fppres, "|%0-#'*.*d|\n", width, precision, var);
	ft_printf("#2167");
	ret2 = ft_printf("|%0-#'*.*d|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2168");
	ret1 = fprintf(fppres, "|%0-#'*.*i|\n", width, precision, var);
	ft_printf("#2168");
	ret2 = ft_printf("|%0-#'*.*i|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2169");
	ret1 = fprintf(fppres, "|%0-#'*.*hhi|\n", width, precision, var);
	ft_printf("#2169");
	ret2 = ft_printf("|%0-#'*.*hhi|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2170");
	ret1 = fprintf(fppres, "|%0-#'*.*hi|\n", width, precision, var);
	ft_printf("#2170");
	ret2 = ft_printf("|%0-#'*.*hi|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2171");
	ret1 = fprintf(fppres, "|%0-#'*.*li|\n", width, precision, var);
	ft_printf("#2171");
	ret2 = ft_printf("|%0-#'*.*li|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2172");
	ret1 = fprintf(fppres, "|%0-#'*.*lli|\n", width, precision, var);
	ft_printf("#2172");
	ret2 = ft_printf("|%0-#'*.*lli|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2173");
	ret1 = fprintf(fppres, "|%0-#'*.*ji|\n", width, precision, var);
	ft_printf("#2173");
	ret2 = ft_printf("|%0-#'*.*ji|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2174");
	ret1 = fprintf(fppres, "|%0-#'*.*zi|\n", width, precision, var);
	ft_printf("#2174");
	ret2 = ft_printf("|%0-#'*.*zi|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2175");
	ret1 = fprintf(fppres, "|%0-#'*.*i|\n", width, precision, var);
	ft_printf("#2175");
	ret2 = ft_printf("|%0-#'*.*i|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2176");
	ret1 = fprintf(fppres, "|%0-#'*.*u|\n", width, precision, var);
	ft_printf("#2176");
	ret2 = ft_printf("|%0-#'*.*u|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2177");
	ret1 = fprintf(fppres, "|%0-#'*.*hhu|\n", width, precision, var);
	ft_printf("#2177");
	ret2 = ft_printf("|%0-#'*.*hhu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2178");
	ret1 = fprintf(fppres, "|%0-#'*.*hu|\n", width, precision, var);
	ft_printf("#2178");
	ret2 = ft_printf("|%0-#'*.*hu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2179");
	ret1 = fprintf(fppres, "|%0-#'*.*lu|\n", width, precision, var);
	ft_printf("#2179");
	ret2 = ft_printf("|%0-#'*.*lu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2180");
	ret1 = fprintf(fppres, "|%0-#'*.*llu|\n", width, precision, var);
	ft_printf("#2180");
	ret2 = ft_printf("|%0-#'*.*llu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2181");
	ret1 = fprintf(fppres, "|%0-#'*.*ju|\n", width, precision, var);
	ft_printf("#2181");
	ret2 = ft_printf("|%0-#'*.*ju|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2182");
	ret1 = fprintf(fppres, "|%0-#'*.*zu|\n", width, precision, var);
	ft_printf("#2182");
	ret2 = ft_printf("|%0-#'*.*zu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2183");
	ret1 = fprintf(fppres, "|%0-#'*.*u|\n", width, precision, var);
	ft_printf("#2183");
	ret2 = ft_printf("|%0-#'*.*u|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2184");
	ret1 = fprintf(fppres, "|%0-#'*.*f|\n", width, precision, var);
	ft_printf("#2184");
	ret2 = ft_printf("|%0-#'*.*f|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2185");
	ret1 = fprintf(fppres, "|%0-#'*.*hhf|\n", width, precision, var);
	ft_printf("#2185");
	ret2 = ft_printf("|%0-#'*.*hhf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2186");
	ret1 = fprintf(fppres, "|%0-#'*.*hf|\n", width, precision, var);
	ft_printf("#2186");
	ret2 = ft_printf("|%0-#'*.*hf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2187");
	ret1 = fprintf(fppres, "|%0-#'*.*lf|\n", width, precision, var);
	ft_printf("#2187");
	ret2 = ft_printf("|%0-#'*.*lf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2188");
	ret1 = fprintf(fppres, "|%0-#'*.*llf|\n", width, precision, var);
	ft_printf("#2188");
	ret2 = ft_printf("|%0-#'*.*llf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2189");
	ret1 = fprintf(fppres, "|%0-#'*.*jf|\n", width, precision, var);
	ft_printf("#2189");
	ret2 = ft_printf("|%0-#'*.*jf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2190");
	ret1 = fprintf(fppres, "|%0-#'*.*zf|\n", width, precision, var);
	ft_printf("#2190");
	ret2 = ft_printf("|%0-#'*.*zf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2191");
	ret1 = fprintf(fppres, "|%0-#'*.*f|\n", width, precision, var);
	ft_printf("#2191");
	ret2 = ft_printf("|%0-#'*.*f|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2192");
	ret1 = fprintf(fppres, "|%0-#'*.*F|\n", width, precision, var);
	ft_printf("#2192");
	ret2 = ft_printf("|%0-#'*.*F|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2193");
	ret1 = fprintf(fppres, "|%0-#'*.*hhF|\n", width, precision, var);
	ft_printf("#2193");
	ret2 = ft_printf("|%0-#'*.*hhF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2194");
	ret1 = fprintf(fppres, "|%0-#'*.*hF|\n", width, precision, var);
	ft_printf("#2194");
	ret2 = ft_printf("|%0-#'*.*hF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2195");
	ret1 = fprintf(fppres, "|%0-#'*.*lF|\n", width, precision, var);
	ft_printf("#2195");
	ret2 = ft_printf("|%0-#'*.*lF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2196");
	ret1 = fprintf(fppres, "|%0-#'*.*llF|\n", width, precision, var);
	ft_printf("#2196");
	ret2 = ft_printf("|%0-#'*.*llF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2197");
	ret1 = fprintf(fppres, "|%0-#'*.*jF|\n", width, precision, var);
	ft_printf("#2197");
	ret2 = ft_printf("|%0-#'*.*jF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2198");
	ret1 = fprintf(fppres, "|%0-#'*.*zF|\n", width, precision, var);
	ft_printf("#2198");
	ret2 = ft_printf("|%0-#'*.*zF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2199");
	ret1 = fprintf(fppres, "|%0-#'*.*F|\n", width, precision, var);
	ft_printf("#2199");
	ret2 = ft_printf("|%0-#'*.*F|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2200");
	ret1 = fprintf(fppres, "|%0-#'*.* |\n", width, precision, var);
	ft_printf("#2200");
	ret2 = ft_printf("|%0-#'*.* |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2201");
	ret1 = fprintf(fppres, "|%0-#'*.*hh |\n", width, precision, var);
	ft_printf("#2201");
	ret2 = ft_printf("|%0-#'*.*hh |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2202");
	ret1 = fprintf(fppres, "|%0-#'*.*h |\n", width, precision, var);
	ft_printf("#2202");
	ret2 = ft_printf("|%0-#'*.*h |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2203");
	ret1 = fprintf(fppres, "|%0-#'*.*l |\n", width, precision, var);
	ft_printf("#2203");
	ret2 = ft_printf("|%0-#'*.*l |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2204");
	ret1 = fprintf(fppres, "|%0-#'*.*ll |\n", width, precision, var);
	ft_printf("#2204");
	ret2 = ft_printf("|%0-#'*.*ll |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2205");
	ret1 = fprintf(fppres, "|%0-#'*.*j |\n", width, precision, var);
	ft_printf("#2205");
	ret2 = ft_printf("|%0-#'*.*j |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2206");
	ret1 = fprintf(fppres, "|%0-#'*.*z |\n", width, precision, var);
	ft_printf("#2206");
	ret2 = ft_printf("|%0-#'*.*z |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2207");
	ret1 = fprintf(fppres, "|%0-#'*.* |\n", width, precision, var);
	ft_printf("#2207");
	ret2 = ft_printf("|%0-#'*.* |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2208");
	ret1 = fprintf(fppres, "|%+-#'*.*d|\n", width, precision, var);
	ft_printf("#2208");
	ret2 = ft_printf("|%+-#'*.*d|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2209");
	ret1 = fprintf(fppres, "|%+-#'*.*hhd|\n", width, precision, var);
	ft_printf("#2209");
	ret2 = ft_printf("|%+-#'*.*hhd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2210");
	ret1 = fprintf(fppres, "|%+-#'*.*hd|\n", width, precision, var);
	ft_printf("#2210");
	ret2 = ft_printf("|%+-#'*.*hd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2211");
	ret1 = fprintf(fppres, "|%+-#'*.*ld|\n", width, precision, var);
	ft_printf("#2211");
	ret2 = ft_printf("|%+-#'*.*ld|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2212");
	ret1 = fprintf(fppres, "|%+-#'*.*lld|\n", width, precision, var);
	ft_printf("#2212");
	ret2 = ft_printf("|%+-#'*.*lld|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2213");
	ret1 = fprintf(fppres, "|%+-#'*.*jd|\n", width, precision, var);
	ft_printf("#2213");
	ret2 = ft_printf("|%+-#'*.*jd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2214");
	ret1 = fprintf(fppres, "|%+-#'*.*zd|\n", width, precision, var);
	ft_printf("#2214");
	ret2 = ft_printf("|%+-#'*.*zd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2215");
	ret1 = fprintf(fppres, "|%+-#'*.*d|\n", width, precision, var);
	ft_printf("#2215");
	ret2 = ft_printf("|%+-#'*.*d|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2216");
	ret1 = fprintf(fppres, "|%+-#'*.*i|\n", width, precision, var);
	ft_printf("#2216");
	ret2 = ft_printf("|%+-#'*.*i|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2217");
	ret1 = fprintf(fppres, "|%+-#'*.*hhi|\n", width, precision, var);
	ft_printf("#2217");
	ret2 = ft_printf("|%+-#'*.*hhi|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2218");
	ret1 = fprintf(fppres, "|%+-#'*.*hi|\n", width, precision, var);
	ft_printf("#2218");
	ret2 = ft_printf("|%+-#'*.*hi|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2219");
	ret1 = fprintf(fppres, "|%+-#'*.*li|\n", width, precision, var);
	ft_printf("#2219");
	ret2 = ft_printf("|%+-#'*.*li|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2220");
	ret1 = fprintf(fppres, "|%+-#'*.*lli|\n", width, precision, var);
	ft_printf("#2220");
	ret2 = ft_printf("|%+-#'*.*lli|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2221");
	ret1 = fprintf(fppres, "|%+-#'*.*ji|\n", width, precision, var);
	ft_printf("#2221");
	ret2 = ft_printf("|%+-#'*.*ji|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2222");
	ret1 = fprintf(fppres, "|%+-#'*.*zi|\n", width, precision, var);
	ft_printf("#2222");
	ret2 = ft_printf("|%+-#'*.*zi|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2223");
	ret1 = fprintf(fppres, "|%+-#'*.*i|\n", width, precision, var);
	ft_printf("#2223");
	ret2 = ft_printf("|%+-#'*.*i|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2224");
	ret1 = fprintf(fppres, "|%+-#'*.*u|\n", width, precision, var);
	ft_printf("#2224");
	ret2 = ft_printf("|%+-#'*.*u|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2225");
	ret1 = fprintf(fppres, "|%+-#'*.*hhu|\n", width, precision, var);
	ft_printf("#2225");
	ret2 = ft_printf("|%+-#'*.*hhu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2226");
	ret1 = fprintf(fppres, "|%+-#'*.*hu|\n", width, precision, var);
	ft_printf("#2226");
	ret2 = ft_printf("|%+-#'*.*hu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2227");
	ret1 = fprintf(fppres, "|%+-#'*.*lu|\n", width, precision, var);
	ft_printf("#2227");
	ret2 = ft_printf("|%+-#'*.*lu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2228");
	ret1 = fprintf(fppres, "|%+-#'*.*llu|\n", width, precision, var);
	ft_printf("#2228");
	ret2 = ft_printf("|%+-#'*.*llu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2229");
	ret1 = fprintf(fppres, "|%+-#'*.*ju|\n", width, precision, var);
	ft_printf("#2229");
	ret2 = ft_printf("|%+-#'*.*ju|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2230");
	ret1 = fprintf(fppres, "|%+-#'*.*zu|\n", width, precision, var);
	ft_printf("#2230");
	ret2 = ft_printf("|%+-#'*.*zu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2231");
	ret1 = fprintf(fppres, "|%+-#'*.*u|\n", width, precision, var);
	ft_printf("#2231");
	ret2 = ft_printf("|%+-#'*.*u|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2232");
	ret1 = fprintf(fppres, "|%+-#'*.*f|\n", width, precision, var);
	ft_printf("#2232");
	ret2 = ft_printf("|%+-#'*.*f|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2233");
	ret1 = fprintf(fppres, "|%+-#'*.*hhf|\n", width, precision, var);
	ft_printf("#2233");
	ret2 = ft_printf("|%+-#'*.*hhf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2234");
	ret1 = fprintf(fppres, "|%+-#'*.*hf|\n", width, precision, var);
	ft_printf("#2234");
	ret2 = ft_printf("|%+-#'*.*hf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2235");
	ret1 = fprintf(fppres, "|%+-#'*.*lf|\n", width, precision, var);
	ft_printf("#2235");
	ret2 = ft_printf("|%+-#'*.*lf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2236");
	ret1 = fprintf(fppres, "|%+-#'*.*llf|\n", width, precision, var);
	ft_printf("#2236");
	ret2 = ft_printf("|%+-#'*.*llf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2237");
	ret1 = fprintf(fppres, "|%+-#'*.*jf|\n", width, precision, var);
	ft_printf("#2237");
	ret2 = ft_printf("|%+-#'*.*jf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2238");
	ret1 = fprintf(fppres, "|%+-#'*.*zf|\n", width, precision, var);
	ft_printf("#2238");
	ret2 = ft_printf("|%+-#'*.*zf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2239");
	ret1 = fprintf(fppres, "|%+-#'*.*f|\n", width, precision, var);
	ft_printf("#2239");
	ret2 = ft_printf("|%+-#'*.*f|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2240");
	ret1 = fprintf(fppres, "|%+-#'*.*F|\n", width, precision, var);
	ft_printf("#2240");
	ret2 = ft_printf("|%+-#'*.*F|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2241");
	ret1 = fprintf(fppres, "|%+-#'*.*hhF|\n", width, precision, var);
	ft_printf("#2241");
	ret2 = ft_printf("|%+-#'*.*hhF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2242");
	ret1 = fprintf(fppres, "|%+-#'*.*hF|\n", width, precision, var);
	ft_printf("#2242");
	ret2 = ft_printf("|%+-#'*.*hF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2243");
	ret1 = fprintf(fppres, "|%+-#'*.*lF|\n", width, precision, var);
	ft_printf("#2243");
	ret2 = ft_printf("|%+-#'*.*lF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2244");
	ret1 = fprintf(fppres, "|%+-#'*.*llF|\n", width, precision, var);
	ft_printf("#2244");
	ret2 = ft_printf("|%+-#'*.*llF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2245");
	ret1 = fprintf(fppres, "|%+-#'*.*jF|\n", width, precision, var);
	ft_printf("#2245");
	ret2 = ft_printf("|%+-#'*.*jF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2246");
	ret1 = fprintf(fppres, "|%+-#'*.*zF|\n", width, precision, var);
	ft_printf("#2246");
	ret2 = ft_printf("|%+-#'*.*zF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2247");
	ret1 = fprintf(fppres, "|%+-#'*.*F|\n", width, precision, var);
	ft_printf("#2247");
	ret2 = ft_printf("|%+-#'*.*F|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2248");
	ret1 = fprintf(fppres, "|%+-#'*.* |\n", width, precision, var);
	ft_printf("#2248");
	ret2 = ft_printf("|%+-#'*.* |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2249");
	ret1 = fprintf(fppres, "|%+-#'*.*hh |\n", width, precision, var);
	ft_printf("#2249");
	ret2 = ft_printf("|%+-#'*.*hh |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2250");
	ret1 = fprintf(fppres, "|%+-#'*.*h |\n", width, precision, var);
	ft_printf("#2250");
	ret2 = ft_printf("|%+-#'*.*h |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2251");
	ret1 = fprintf(fppres, "|%+-#'*.*l |\n", width, precision, var);
	ft_printf("#2251");
	ret2 = ft_printf("|%+-#'*.*l |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2252");
	ret1 = fprintf(fppres, "|%+-#'*.*ll |\n", width, precision, var);
	ft_printf("#2252");
	ret2 = ft_printf("|%+-#'*.*ll |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2253");
	ret1 = fprintf(fppres, "|%+-#'*.*j |\n", width, precision, var);
	ft_printf("#2253");
	ret2 = ft_printf("|%+-#'*.*j |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2254");
	ret1 = fprintf(fppres, "|%+-#'*.*z |\n", width, precision, var);
	ft_printf("#2254");
	ret2 = ft_printf("|%+-#'*.*z |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2255");
	ret1 = fprintf(fppres, "|%+-#'*.* |\n", width, precision, var);
	ft_printf("#2255");
	ret2 = ft_printf("|%+-#'*.* |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2256");
	ret1 = fprintf(fppres, "|%0+-#'*.*d|\n", width, precision, var);
	ft_printf("#2256");
	ret2 = ft_printf("|%0+-#'*.*d|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2257");
	ret1 = fprintf(fppres, "|%0+-#'*.*hhd|\n", width, precision, var);
	ft_printf("#2257");
	ret2 = ft_printf("|%0+-#'*.*hhd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2258");
	ret1 = fprintf(fppres, "|%0+-#'*.*hd|\n", width, precision, var);
	ft_printf("#2258");
	ret2 = ft_printf("|%0+-#'*.*hd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2259");
	ret1 = fprintf(fppres, "|%0+-#'*.*ld|\n", width, precision, var);
	ft_printf("#2259");
	ret2 = ft_printf("|%0+-#'*.*ld|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2260");
	ret1 = fprintf(fppres, "|%0+-#'*.*lld|\n", width, precision, var);
	ft_printf("#2260");
	ret2 = ft_printf("|%0+-#'*.*lld|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2261");
	ret1 = fprintf(fppres, "|%0+-#'*.*jd|\n", width, precision, var);
	ft_printf("#2261");
	ret2 = ft_printf("|%0+-#'*.*jd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2262");
	ret1 = fprintf(fppres, "|%0+-#'*.*zd|\n", width, precision, var);
	ft_printf("#2262");
	ret2 = ft_printf("|%0+-#'*.*zd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2263");
	ret1 = fprintf(fppres, "|%0+-#'*.*d|\n", width, precision, var);
	ft_printf("#2263");
	ret2 = ft_printf("|%0+-#'*.*d|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2264");
	ret1 = fprintf(fppres, "|%0+-#'*.*i|\n", width, precision, var);
	ft_printf("#2264");
	ret2 = ft_printf("|%0+-#'*.*i|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2265");
	ret1 = fprintf(fppres, "|%0+-#'*.*hhi|\n", width, precision, var);
	ft_printf("#2265");
	ret2 = ft_printf("|%0+-#'*.*hhi|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2266");
	ret1 = fprintf(fppres, "|%0+-#'*.*hi|\n", width, precision, var);
	ft_printf("#2266");
	ret2 = ft_printf("|%0+-#'*.*hi|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2267");
	ret1 = fprintf(fppres, "|%0+-#'*.*li|\n", width, precision, var);
	ft_printf("#2267");
	ret2 = ft_printf("|%0+-#'*.*li|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2268");
	ret1 = fprintf(fppres, "|%0+-#'*.*lli|\n", width, precision, var);
	ft_printf("#2268");
	ret2 = ft_printf("|%0+-#'*.*lli|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2269");
	ret1 = fprintf(fppres, "|%0+-#'*.*ji|\n", width, precision, var);
	ft_printf("#2269");
	ret2 = ft_printf("|%0+-#'*.*ji|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2270");
	ret1 = fprintf(fppres, "|%0+-#'*.*zi|\n", width, precision, var);
	ft_printf("#2270");
	ret2 = ft_printf("|%0+-#'*.*zi|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2271");
	ret1 = fprintf(fppres, "|%0+-#'*.*i|\n", width, precision, var);
	ft_printf("#2271");
	ret2 = ft_printf("|%0+-#'*.*i|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2272");
	ret1 = fprintf(fppres, "|%0+-#'*.*u|\n", width, precision, var);
	ft_printf("#2272");
	ret2 = ft_printf("|%0+-#'*.*u|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2273");
	ret1 = fprintf(fppres, "|%0+-#'*.*hhu|\n", width, precision, var);
	ft_printf("#2273");
	ret2 = ft_printf("|%0+-#'*.*hhu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2274");
	ret1 = fprintf(fppres, "|%0+-#'*.*hu|\n", width, precision, var);
	ft_printf("#2274");
	ret2 = ft_printf("|%0+-#'*.*hu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2275");
	ret1 = fprintf(fppres, "|%0+-#'*.*lu|\n", width, precision, var);
	ft_printf("#2275");
	ret2 = ft_printf("|%0+-#'*.*lu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2276");
	ret1 = fprintf(fppres, "|%0+-#'*.*llu|\n", width, precision, var);
	ft_printf("#2276");
	ret2 = ft_printf("|%0+-#'*.*llu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2277");
	ret1 = fprintf(fppres, "|%0+-#'*.*ju|\n", width, precision, var);
	ft_printf("#2277");
	ret2 = ft_printf("|%0+-#'*.*ju|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2278");
	ret1 = fprintf(fppres, "|%0+-#'*.*zu|\n", width, precision, var);
	ft_printf("#2278");
	ret2 = ft_printf("|%0+-#'*.*zu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2279");
	ret1 = fprintf(fppres, "|%0+-#'*.*u|\n", width, precision, var);
	ft_printf("#2279");
	ret2 = ft_printf("|%0+-#'*.*u|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2280");
	ret1 = fprintf(fppres, "|%0+-#'*.*f|\n", width, precision, var);
	ft_printf("#2280");
	ret2 = ft_printf("|%0+-#'*.*f|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2281");
	ret1 = fprintf(fppres, "|%0+-#'*.*hhf|\n", width, precision, var);
	ft_printf("#2281");
	ret2 = ft_printf("|%0+-#'*.*hhf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2282");
	ret1 = fprintf(fppres, "|%0+-#'*.*hf|\n", width, precision, var);
	ft_printf("#2282");
	ret2 = ft_printf("|%0+-#'*.*hf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2283");
	ret1 = fprintf(fppres, "|%0+-#'*.*lf|\n", width, precision, var);
	ft_printf("#2283");
	ret2 = ft_printf("|%0+-#'*.*lf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2284");
	ret1 = fprintf(fppres, "|%0+-#'*.*llf|\n", width, precision, var);
	ft_printf("#2284");
	ret2 = ft_printf("|%0+-#'*.*llf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2285");
	ret1 = fprintf(fppres, "|%0+-#'*.*jf|\n", width, precision, var);
	ft_printf("#2285");
	ret2 = ft_printf("|%0+-#'*.*jf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2286");
	ret1 = fprintf(fppres, "|%0+-#'*.*zf|\n", width, precision, var);
	ft_printf("#2286");
	ret2 = ft_printf("|%0+-#'*.*zf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2287");
	ret1 = fprintf(fppres, "|%0+-#'*.*f|\n", width, precision, var);
	ft_printf("#2287");
	ret2 = ft_printf("|%0+-#'*.*f|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2288");
	ret1 = fprintf(fppres, "|%0+-#'*.*F|\n", width, precision, var);
	ft_printf("#2288");
	ret2 = ft_printf("|%0+-#'*.*F|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2289");
	ret1 = fprintf(fppres, "|%0+-#'*.*hhF|\n", width, precision, var);
	ft_printf("#2289");
	ret2 = ft_printf("|%0+-#'*.*hhF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2290");
	ret1 = fprintf(fppres, "|%0+-#'*.*hF|\n", width, precision, var);
	ft_printf("#2290");
	ret2 = ft_printf("|%0+-#'*.*hF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2291");
	ret1 = fprintf(fppres, "|%0+-#'*.*lF|\n", width, precision, var);
	ft_printf("#2291");
	ret2 = ft_printf("|%0+-#'*.*lF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2292");
	ret1 = fprintf(fppres, "|%0+-#'*.*llF|\n", width, precision, var);
	ft_printf("#2292");
	ret2 = ft_printf("|%0+-#'*.*llF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2293");
	ret1 = fprintf(fppres, "|%0+-#'*.*jF|\n", width, precision, var);
	ft_printf("#2293");
	ret2 = ft_printf("|%0+-#'*.*jF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2294");
	ret1 = fprintf(fppres, "|%0+-#'*.*zF|\n", width, precision, var);
	ft_printf("#2294");
	ret2 = ft_printf("|%0+-#'*.*zF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2295");
	ret1 = fprintf(fppres, "|%0+-#'*.*F|\n", width, precision, var);
	ft_printf("#2295");
	ret2 = ft_printf("|%0+-#'*.*F|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2296");
	ret1 = fprintf(fppres, "|%0+-#'*.* |\n", width, precision, var);
	ft_printf("#2296");
	ret2 = ft_printf("|%0+-#'*.* |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2297");
	ret1 = fprintf(fppres, "|%0+-#'*.*hh |\n", width, precision, var);
	ft_printf("#2297");
	ret2 = ft_printf("|%0+-#'*.*hh |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2298");
	ret1 = fprintf(fppres, "|%0+-#'*.*h |\n", width, precision, var);
	ft_printf("#2298");
	ret2 = ft_printf("|%0+-#'*.*h |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2299");
	ret1 = fprintf(fppres, "|%0+-#'*.*l |\n", width, precision, var);
	ft_printf("#2299");
	ret2 = ft_printf("|%0+-#'*.*l |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2300");
	ret1 = fprintf(fppres, "|%0+-#'*.*ll |\n", width, precision, var);
	ft_printf("#2300");
	ret2 = ft_printf("|%0+-#'*.*ll |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2301");
	ret1 = fprintf(fppres, "|%0+-#'*.*j |\n", width, precision, var);
	ft_printf("#2301");
	ret2 = ft_printf("|%0+-#'*.*j |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2302");
	ret1 = fprintf(fppres, "|%0+-#'*.*z |\n", width, precision, var);
	ft_printf("#2302");
	ret2 = ft_printf("|%0+-#'*.*z |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2303");
	ret1 = fprintf(fppres, "|%0+-#'*.* |\n", width, precision, var);
	ft_printf("#2303");
	ret2 = ft_printf("|%0+-#'*.* |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2304");
	ret1 = fprintf(fppres, "|%\'*.*d|\n", width, precision, var);
	ft_printf("#2304");
	ret2 = ft_printf("|%\'*.*d|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2305");
	ret1 = fprintf(fppres, "|%\'*.*hhd|\n", width, precision, var);
	ft_printf("#2305");
	ret2 = ft_printf("|%\'*.*hhd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2306");
	ret1 = fprintf(fppres, "|%\'*.*hd|\n", width, precision, var);
	ft_printf("#2306");
	ret2 = ft_printf("|%\'*.*hd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2307");
	ret1 = fprintf(fppres, "|%\'*.*ld|\n", width, precision, var);
	ft_printf("#2307");
	ret2 = ft_printf("|%\'*.*ld|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2308");
	ret1 = fprintf(fppres, "|%\'*.*lld|\n", width, precision, var);
	ft_printf("#2308");
	ret2 = ft_printf("|%\'*.*lld|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2309");
	ret1 = fprintf(fppres, "|%\'*.*jd|\n", width, precision, var);
	ft_printf("#2309");
	ret2 = ft_printf("|%\'*.*jd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2310");
	ret1 = fprintf(fppres, "|%\'*.*zd|\n", width, precision, var);
	ft_printf("#2310");
	ret2 = ft_printf("|%\'*.*zd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2311");
	ret1 = fprintf(fppres, "|%\'*.*d|\n", width, precision, var);
	ft_printf("#2311");
	ret2 = ft_printf("|%\'*.*d|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2312");
	ret1 = fprintf(fppres, "|%\'*.*i|\n", width, precision, var);
	ft_printf("#2312");
	ret2 = ft_printf("|%\'*.*i|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2313");
	ret1 = fprintf(fppres, "|%\'*.*hhi|\n", width, precision, var);
	ft_printf("#2313");
	ret2 = ft_printf("|%\'*.*hhi|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2314");
	ret1 = fprintf(fppres, "|%\'*.*hi|\n", width, precision, var);
	ft_printf("#2314");
	ret2 = ft_printf("|%\'*.*hi|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2315");
	ret1 = fprintf(fppres, "|%\'*.*li|\n", width, precision, var);
	ft_printf("#2315");
	ret2 = ft_printf("|%\'*.*li|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2316");
	ret1 = fprintf(fppres, "|%\'*.*lli|\n", width, precision, var);
	ft_printf("#2316");
	ret2 = ft_printf("|%\'*.*lli|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2317");
	ret1 = fprintf(fppres, "|%\'*.*ji|\n", width, precision, var);
	ft_printf("#2317");
	ret2 = ft_printf("|%\'*.*ji|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2318");
	ret1 = fprintf(fppres, "|%\'*.*zi|\n", width, precision, var);
	ft_printf("#2318");
	ret2 = ft_printf("|%\'*.*zi|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2319");
	ret1 = fprintf(fppres, "|%\'*.*i|\n", width, precision, var);
	ft_printf("#2319");
	ret2 = ft_printf("|%\'*.*i|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2320");
	ret1 = fprintf(fppres, "|%\'*.*u|\n", width, precision, var);
	ft_printf("#2320");
	ret2 = ft_printf("|%\'*.*u|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2321");
	ret1 = fprintf(fppres, "|%\'*.*hhu|\n", width, precision, var);
	ft_printf("#2321");
	ret2 = ft_printf("|%\'*.*hhu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2322");
	ret1 = fprintf(fppres, "|%\'*.*hu|\n", width, precision, var);
	ft_printf("#2322");
	ret2 = ft_printf("|%\'*.*hu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2323");
	ret1 = fprintf(fppres, "|%\'*.*lu|\n", width, precision, var);
	ft_printf("#2323");
	ret2 = ft_printf("|%\'*.*lu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2324");
	ret1 = fprintf(fppres, "|%\'*.*llu|\n", width, precision, var);
	ft_printf("#2324");
	ret2 = ft_printf("|%\'*.*llu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2325");
	ret1 = fprintf(fppres, "|%\'*.*ju|\n", width, precision, var);
	ft_printf("#2325");
	ret2 = ft_printf("|%\'*.*ju|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2326");
	ret1 = fprintf(fppres, "|%\'*.*zu|\n", width, precision, var);
	ft_printf("#2326");
	ret2 = ft_printf("|%\'*.*zu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2327");
	ret1 = fprintf(fppres, "|%\'*.*u|\n", width, precision, var);
	ft_printf("#2327");
	ret2 = ft_printf("|%\'*.*u|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2328");
	ret1 = fprintf(fppres, "|%\'*.*f|\n", width, precision, var);
	ft_printf("#2328");
	ret2 = ft_printf("|%\'*.*f|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2329");
	ret1 = fprintf(fppres, "|%\'*.*hhf|\n", width, precision, var);
	ft_printf("#2329");
	ret2 = ft_printf("|%\'*.*hhf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2330");
	ret1 = fprintf(fppres, "|%\'*.*hf|\n", width, precision, var);
	ft_printf("#2330");
	ret2 = ft_printf("|%\'*.*hf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2331");
	ret1 = fprintf(fppres, "|%\'*.*lf|\n", width, precision, var);
	ft_printf("#2331");
	ret2 = ft_printf("|%\'*.*lf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2332");
	ret1 = fprintf(fppres, "|%\'*.*llf|\n", width, precision, var);
	ft_printf("#2332");
	ret2 = ft_printf("|%\'*.*llf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2333");
	ret1 = fprintf(fppres, "|%\'*.*jf|\n", width, precision, var);
	ft_printf("#2333");
	ret2 = ft_printf("|%\'*.*jf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2334");
	ret1 = fprintf(fppres, "|%\'*.*zf|\n", width, precision, var);
	ft_printf("#2334");
	ret2 = ft_printf("|%\'*.*zf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2335");
	ret1 = fprintf(fppres, "|%\'*.*f|\n", width, precision, var);
	ft_printf("#2335");
	ret2 = ft_printf("|%\'*.*f|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2336");
	ret1 = fprintf(fppres, "|%\'*.*F|\n", width, precision, var);
	ft_printf("#2336");
	ret2 = ft_printf("|%\'*.*F|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2337");
	ret1 = fprintf(fppres, "|%\'*.*hhF|\n", width, precision, var);
	ft_printf("#2337");
	ret2 = ft_printf("|%\'*.*hhF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2338");
	ret1 = fprintf(fppres, "|%\'*.*hF|\n", width, precision, var);
	ft_printf("#2338");
	ret2 = ft_printf("|%\'*.*hF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2339");
	ret1 = fprintf(fppres, "|%\'*.*lF|\n", width, precision, var);
	ft_printf("#2339");
	ret2 = ft_printf("|%\'*.*lF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2340");
	ret1 = fprintf(fppres, "|%\'*.*llF|\n", width, precision, var);
	ft_printf("#2340");
	ret2 = ft_printf("|%\'*.*llF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2341");
	ret1 = fprintf(fppres, "|%\'*.*jF|\n", width, precision, var);
	ft_printf("#2341");
	ret2 = ft_printf("|%\'*.*jF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2342");
	ret1 = fprintf(fppres, "|%\'*.*zF|\n", width, precision, var);
	ft_printf("#2342");
	ret2 = ft_printf("|%\'*.*zF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2343");
	ret1 = fprintf(fppres, "|%\'*.*F|\n", width, precision, var);
	ft_printf("#2343");
	ret2 = ft_printf("|%\'*.*F|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2344");
	ret1 = fprintf(fppres, "|%\'*.* |\n", width, precision, var);
	ft_printf("#2344");
	ret2 = ft_printf("|%\'*.* |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2345");
	ret1 = fprintf(fppres, "|%\'*.*hh |\n", width, precision, var);
	ft_printf("#2345");
	ret2 = ft_printf("|%\'*.*hh |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2346");
	ret1 = fprintf(fppres, "|%\'*.*h |\n", width, precision, var);
	ft_printf("#2346");
	ret2 = ft_printf("|%\'*.*h |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2347");
	ret1 = fprintf(fppres, "|%\'*.*l |\n", width, precision, var);
	ft_printf("#2347");
	ret2 = ft_printf("|%\'*.*l |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2348");
	ret1 = fprintf(fppres, "|%\'*.*ll |\n", width, precision, var);
	ft_printf("#2348");
	ret2 = ft_printf("|%\'*.*ll |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2349");
	ret1 = fprintf(fppres, "|%\'*.*j |\n", width, precision, var);
	ft_printf("#2349");
	ret2 = ft_printf("|%\'*.*j |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2350");
	ret1 = fprintf(fppres, "|%\'*.*z |\n", width, precision, var);
	ft_printf("#2350");
	ret2 = ft_printf("|%\'*.*z |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2351");
	ret1 = fprintf(fppres, "|%\'*.* |\n", width, precision, var);
	ft_printf("#2351");
	ret2 = ft_printf("|%\'*.* |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2352");
	ret1 = fprintf(fppres, "|%0\'*.*d|\n", width, precision, var);
	ft_printf("#2352");
	ret2 = ft_printf("|%0\'*.*d|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2353");
	ret1 = fprintf(fppres, "|%0\'*.*hhd|\n", width, precision, var);
	ft_printf("#2353");
	ret2 = ft_printf("|%0\'*.*hhd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2354");
	ret1 = fprintf(fppres, "|%0\'*.*hd|\n", width, precision, var);
	ft_printf("#2354");
	ret2 = ft_printf("|%0\'*.*hd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2355");
	ret1 = fprintf(fppres, "|%0\'*.*ld|\n", width, precision, var);
	ft_printf("#2355");
	ret2 = ft_printf("|%0\'*.*ld|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2356");
	ret1 = fprintf(fppres, "|%0\'*.*lld|\n", width, precision, var);
	ft_printf("#2356");
	ret2 = ft_printf("|%0\'*.*lld|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2357");
	ret1 = fprintf(fppres, "|%0\'*.*jd|\n", width, precision, var);
	ft_printf("#2357");
	ret2 = ft_printf("|%0\'*.*jd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2358");
	ret1 = fprintf(fppres, "|%0\'*.*zd|\n", width, precision, var);
	ft_printf("#2358");
	ret2 = ft_printf("|%0\'*.*zd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2359");
	ret1 = fprintf(fppres, "|%0\'*.*d|\n", width, precision, var);
	ft_printf("#2359");
	ret2 = ft_printf("|%0\'*.*d|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2360");
	ret1 = fprintf(fppres, "|%0\'*.*i|\n", width, precision, var);
	ft_printf("#2360");
	ret2 = ft_printf("|%0\'*.*i|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2361");
	ret1 = fprintf(fppres, "|%0\'*.*hhi|\n", width, precision, var);
	ft_printf("#2361");
	ret2 = ft_printf("|%0\'*.*hhi|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2362");
	ret1 = fprintf(fppres, "|%0\'*.*hi|\n", width, precision, var);
	ft_printf("#2362");
	ret2 = ft_printf("|%0\'*.*hi|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2363");
	ret1 = fprintf(fppres, "|%0\'*.*li|\n", width, precision, var);
	ft_printf("#2363");
	ret2 = ft_printf("|%0\'*.*li|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2364");
	ret1 = fprintf(fppres, "|%0\'*.*lli|\n", width, precision, var);
	ft_printf("#2364");
	ret2 = ft_printf("|%0\'*.*lli|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2365");
	ret1 = fprintf(fppres, "|%0\'*.*ji|\n", width, precision, var);
	ft_printf("#2365");
	ret2 = ft_printf("|%0\'*.*ji|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2366");
	ret1 = fprintf(fppres, "|%0\'*.*zi|\n", width, precision, var);
	ft_printf("#2366");
	ret2 = ft_printf("|%0\'*.*zi|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2367");
	ret1 = fprintf(fppres, "|%0\'*.*i|\n", width, precision, var);
	ft_printf("#2367");
	ret2 = ft_printf("|%0\'*.*i|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2368");
	ret1 = fprintf(fppres, "|%0\'*.*u|\n", width, precision, var);
	ft_printf("#2368");
	ret2 = ft_printf("|%0\'*.*u|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2369");
	ret1 = fprintf(fppres, "|%0\'*.*hhu|\n", width, precision, var);
	ft_printf("#2369");
	ret2 = ft_printf("|%0\'*.*hhu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2370");
	ret1 = fprintf(fppres, "|%0\'*.*hu|\n", width, precision, var);
	ft_printf("#2370");
	ret2 = ft_printf("|%0\'*.*hu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2371");
	ret1 = fprintf(fppres, "|%0\'*.*lu|\n", width, precision, var);
	ft_printf("#2371");
	ret2 = ft_printf("|%0\'*.*lu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2372");
	ret1 = fprintf(fppres, "|%0\'*.*llu|\n", width, precision, var);
	ft_printf("#2372");
	ret2 = ft_printf("|%0\'*.*llu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2373");
	ret1 = fprintf(fppres, "|%0\'*.*ju|\n", width, precision, var);
	ft_printf("#2373");
	ret2 = ft_printf("|%0\'*.*ju|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2374");
	ret1 = fprintf(fppres, "|%0\'*.*zu|\n", width, precision, var);
	ft_printf("#2374");
	ret2 = ft_printf("|%0\'*.*zu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2375");
	ret1 = fprintf(fppres, "|%0\'*.*u|\n", width, precision, var);
	ft_printf("#2375");
	ret2 = ft_printf("|%0\'*.*u|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2376");
	ret1 = fprintf(fppres, "|%0\'*.*f|\n", width, precision, var);
	ft_printf("#2376");
	ret2 = ft_printf("|%0\'*.*f|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2377");
	ret1 = fprintf(fppres, "|%0\'*.*hhf|\n", width, precision, var);
	ft_printf("#2377");
	ret2 = ft_printf("|%0\'*.*hhf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2378");
	ret1 = fprintf(fppres, "|%0\'*.*hf|\n", width, precision, var);
	ft_printf("#2378");
	ret2 = ft_printf("|%0\'*.*hf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2379");
	ret1 = fprintf(fppres, "|%0\'*.*lf|\n", width, precision, var);
	ft_printf("#2379");
	ret2 = ft_printf("|%0\'*.*lf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2380");
	ret1 = fprintf(fppres, "|%0\'*.*llf|\n", width, precision, var);
	ft_printf("#2380");
	ret2 = ft_printf("|%0\'*.*llf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2381");
	ret1 = fprintf(fppres, "|%0\'*.*jf|\n", width, precision, var);
	ft_printf("#2381");
	ret2 = ft_printf("|%0\'*.*jf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2382");
	ret1 = fprintf(fppres, "|%0\'*.*zf|\n", width, precision, var);
	ft_printf("#2382");
	ret2 = ft_printf("|%0\'*.*zf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2383");
	ret1 = fprintf(fppres, "|%0\'*.*f|\n", width, precision, var);
	ft_printf("#2383");
	ret2 = ft_printf("|%0\'*.*f|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2384");
	ret1 = fprintf(fppres, "|%0\'*.*F|\n", width, precision, var);
	ft_printf("#2384");
	ret2 = ft_printf("|%0\'*.*F|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2385");
	ret1 = fprintf(fppres, "|%0\'*.*hhF|\n", width, precision, var);
	ft_printf("#2385");
	ret2 = ft_printf("|%0\'*.*hhF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2386");
	ret1 = fprintf(fppres, "|%0\'*.*hF|\n", width, precision, var);
	ft_printf("#2386");
	ret2 = ft_printf("|%0\'*.*hF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2387");
	ret1 = fprintf(fppres, "|%0\'*.*lF|\n", width, precision, var);
	ft_printf("#2387");
	ret2 = ft_printf("|%0\'*.*lF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2388");
	ret1 = fprintf(fppres, "|%0\'*.*llF|\n", width, precision, var);
	ft_printf("#2388");
	ret2 = ft_printf("|%0\'*.*llF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2389");
	ret1 = fprintf(fppres, "|%0\'*.*jF|\n", width, precision, var);
	ft_printf("#2389");
	ret2 = ft_printf("|%0\'*.*jF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2390");
	ret1 = fprintf(fppres, "|%0\'*.*zF|\n", width, precision, var);
	ft_printf("#2390");
	ret2 = ft_printf("|%0\'*.*zF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2391");
	ret1 = fprintf(fppres, "|%0\'*.*F|\n", width, precision, var);
	ft_printf("#2391");
	ret2 = ft_printf("|%0\'*.*F|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2392");
	ret1 = fprintf(fppres, "|%0\'*.* |\n", width, precision, var);
	ft_printf("#2392");
	ret2 = ft_printf("|%0\'*.* |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2393");
	ret1 = fprintf(fppres, "|%0\'*.*hh |\n", width, precision, var);
	ft_printf("#2393");
	ret2 = ft_printf("|%0\'*.*hh |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2394");
	ret1 = fprintf(fppres, "|%0\'*.*h |\n", width, precision, var);
	ft_printf("#2394");
	ret2 = ft_printf("|%0\'*.*h |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2395");
	ret1 = fprintf(fppres, "|%0\'*.*l |\n", width, precision, var);
	ft_printf("#2395");
	ret2 = ft_printf("|%0\'*.*l |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2396");
	ret1 = fprintf(fppres, "|%0\'*.*ll |\n", width, precision, var);
	ft_printf("#2396");
	ret2 = ft_printf("|%0\'*.*ll |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2397");
	ret1 = fprintf(fppres, "|%0\'*.*j |\n", width, precision, var);
	ft_printf("#2397");
	ret2 = ft_printf("|%0\'*.*j |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2398");
	ret1 = fprintf(fppres, "|%0\'*.*z |\n", width, precision, var);
	ft_printf("#2398");
	ret2 = ft_printf("|%0\'*.*z |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2399");
	ret1 = fprintf(fppres, "|%0\'*.* |\n", width, precision, var);
	ft_printf("#2399");
	ret2 = ft_printf("|%0\'*.* |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2400");
	ret1 = fprintf(fppres, "|%+\'*.*d|\n", width, precision, var);
	ft_printf("#2400");
	ret2 = ft_printf("|%+\'*.*d|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2401");
	ret1 = fprintf(fppres, "|%+\'*.*hhd|\n", width, precision, var);
	ft_printf("#2401");
	ret2 = ft_printf("|%+\'*.*hhd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2402");
	ret1 = fprintf(fppres, "|%+\'*.*hd|\n", width, precision, var);
	ft_printf("#2402");
	ret2 = ft_printf("|%+\'*.*hd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2403");
	ret1 = fprintf(fppres, "|%+\'*.*ld|\n", width, precision, var);
	ft_printf("#2403");
	ret2 = ft_printf("|%+\'*.*ld|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2404");
	ret1 = fprintf(fppres, "|%+\'*.*lld|\n", width, precision, var);
	ft_printf("#2404");
	ret2 = ft_printf("|%+\'*.*lld|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2405");
	ret1 = fprintf(fppres, "|%+\'*.*jd|\n", width, precision, var);
	ft_printf("#2405");
	ret2 = ft_printf("|%+\'*.*jd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2406");
	ret1 = fprintf(fppres, "|%+\'*.*zd|\n", width, precision, var);
	ft_printf("#2406");
	ret2 = ft_printf("|%+\'*.*zd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2407");
	ret1 = fprintf(fppres, "|%+\'*.*d|\n", width, precision, var);
	ft_printf("#2407");
	ret2 = ft_printf("|%+\'*.*d|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2408");
	ret1 = fprintf(fppres, "|%+\'*.*i|\n", width, precision, var);
	ft_printf("#2408");
	ret2 = ft_printf("|%+\'*.*i|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2409");
	ret1 = fprintf(fppres, "|%+\'*.*hhi|\n", width, precision, var);
	ft_printf("#2409");
	ret2 = ft_printf("|%+\'*.*hhi|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2410");
	ret1 = fprintf(fppres, "|%+\'*.*hi|\n", width, precision, var);
	ft_printf("#2410");
	ret2 = ft_printf("|%+\'*.*hi|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2411");
	ret1 = fprintf(fppres, "|%+\'*.*li|\n", width, precision, var);
	ft_printf("#2411");
	ret2 = ft_printf("|%+\'*.*li|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2412");
	ret1 = fprintf(fppres, "|%+\'*.*lli|\n", width, precision, var);
	ft_printf("#2412");
	ret2 = ft_printf("|%+\'*.*lli|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2413");
	ret1 = fprintf(fppres, "|%+\'*.*ji|\n", width, precision, var);
	ft_printf("#2413");
	ret2 = ft_printf("|%+\'*.*ji|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2414");
	ret1 = fprintf(fppres, "|%+\'*.*zi|\n", width, precision, var);
	ft_printf("#2414");
	ret2 = ft_printf("|%+\'*.*zi|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2415");
	ret1 = fprintf(fppres, "|%+\'*.*i|\n", width, precision, var);
	ft_printf("#2415");
	ret2 = ft_printf("|%+\'*.*i|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2416");
	ret1 = fprintf(fppres, "|%+\'*.*u|\n", width, precision, var);
	ft_printf("#2416");
	ret2 = ft_printf("|%+\'*.*u|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2417");
	ret1 = fprintf(fppres, "|%+\'*.*hhu|\n", width, precision, var);
	ft_printf("#2417");
	ret2 = ft_printf("|%+\'*.*hhu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2418");
	ret1 = fprintf(fppres, "|%+\'*.*hu|\n", width, precision, var);
	ft_printf("#2418");
	ret2 = ft_printf("|%+\'*.*hu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2419");
	ret1 = fprintf(fppres, "|%+\'*.*lu|\n", width, precision, var);
	ft_printf("#2419");
	ret2 = ft_printf("|%+\'*.*lu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2420");
	ret1 = fprintf(fppres, "|%+\'*.*llu|\n", width, precision, var);
	ft_printf("#2420");
	ret2 = ft_printf("|%+\'*.*llu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2421");
	ret1 = fprintf(fppres, "|%+\'*.*ju|\n", width, precision, var);
	ft_printf("#2421");
	ret2 = ft_printf("|%+\'*.*ju|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2422");
	ret1 = fprintf(fppres, "|%+\'*.*zu|\n", width, precision, var);
	ft_printf("#2422");
	ret2 = ft_printf("|%+\'*.*zu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2423");
	ret1 = fprintf(fppres, "|%+\'*.*u|\n", width, precision, var);
	ft_printf("#2423");
	ret2 = ft_printf("|%+\'*.*u|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2424");
	ret1 = fprintf(fppres, "|%+\'*.*f|\n", width, precision, var);
	ft_printf("#2424");
	ret2 = ft_printf("|%+\'*.*f|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2425");
	ret1 = fprintf(fppres, "|%+\'*.*hhf|\n", width, precision, var);
	ft_printf("#2425");
	ret2 = ft_printf("|%+\'*.*hhf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2426");
	ret1 = fprintf(fppres, "|%+\'*.*hf|\n", width, precision, var);
	ft_printf("#2426");
	ret2 = ft_printf("|%+\'*.*hf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2427");
	ret1 = fprintf(fppres, "|%+\'*.*lf|\n", width, precision, var);
	ft_printf("#2427");
	ret2 = ft_printf("|%+\'*.*lf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2428");
	ret1 = fprintf(fppres, "|%+\'*.*llf|\n", width, precision, var);
	ft_printf("#2428");
	ret2 = ft_printf("|%+\'*.*llf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2429");
	ret1 = fprintf(fppres, "|%+\'*.*jf|\n", width, precision, var);
	ft_printf("#2429");
	ret2 = ft_printf("|%+\'*.*jf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2430");
	ret1 = fprintf(fppres, "|%+\'*.*zf|\n", width, precision, var);
	ft_printf("#2430");
	ret2 = ft_printf("|%+\'*.*zf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2431");
	ret1 = fprintf(fppres, "|%+\'*.*f|\n", width, precision, var);
	ft_printf("#2431");
	ret2 = ft_printf("|%+\'*.*f|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2432");
	ret1 = fprintf(fppres, "|%+\'*.*F|\n", width, precision, var);
	ft_printf("#2432");
	ret2 = ft_printf("|%+\'*.*F|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2433");
	ret1 = fprintf(fppres, "|%+\'*.*hhF|\n", width, precision, var);
	ft_printf("#2433");
	ret2 = ft_printf("|%+\'*.*hhF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2434");
	ret1 = fprintf(fppres, "|%+\'*.*hF|\n", width, precision, var);
	ft_printf("#2434");
	ret2 = ft_printf("|%+\'*.*hF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2435");
	ret1 = fprintf(fppres, "|%+\'*.*lF|\n", width, precision, var);
	ft_printf("#2435");
	ret2 = ft_printf("|%+\'*.*lF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2436");
	ret1 = fprintf(fppres, "|%+\'*.*llF|\n", width, precision, var);
	ft_printf("#2436");
	ret2 = ft_printf("|%+\'*.*llF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2437");
	ret1 = fprintf(fppres, "|%+\'*.*jF|\n", width, precision, var);
	ft_printf("#2437");
	ret2 = ft_printf("|%+\'*.*jF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2438");
	ret1 = fprintf(fppres, "|%+\'*.*zF|\n", width, precision, var);
	ft_printf("#2438");
	ret2 = ft_printf("|%+\'*.*zF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2439");
	ret1 = fprintf(fppres, "|%+\'*.*F|\n", width, precision, var);
	ft_printf("#2439");
	ret2 = ft_printf("|%+\'*.*F|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2440");
	ret1 = fprintf(fppres, "|%+\'*.* |\n", width, precision, var);
	ft_printf("#2440");
	ret2 = ft_printf("|%+\'*.* |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2441");
	ret1 = fprintf(fppres, "|%+\'*.*hh |\n", width, precision, var);
	ft_printf("#2441");
	ret2 = ft_printf("|%+\'*.*hh |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2442");
	ret1 = fprintf(fppres, "|%+\'*.*h |\n", width, precision, var);
	ft_printf("#2442");
	ret2 = ft_printf("|%+\'*.*h |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2443");
	ret1 = fprintf(fppres, "|%+\'*.*l |\n", width, precision, var);
	ft_printf("#2443");
	ret2 = ft_printf("|%+\'*.*l |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2444");
	ret1 = fprintf(fppres, "|%+\'*.*ll |\n", width, precision, var);
	ft_printf("#2444");
	ret2 = ft_printf("|%+\'*.*ll |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2445");
	ret1 = fprintf(fppres, "|%+\'*.*j |\n", width, precision, var);
	ft_printf("#2445");
	ret2 = ft_printf("|%+\'*.*j |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2446");
	ret1 = fprintf(fppres, "|%+\'*.*z |\n", width, precision, var);
	ft_printf("#2446");
	ret2 = ft_printf("|%+\'*.*z |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2447");
	ret1 = fprintf(fppres, "|%+\'*.* |\n", width, precision, var);
	ft_printf("#2447");
	ret2 = ft_printf("|%+\'*.* |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2448");
	ret1 = fprintf(fppres, "|%0+\'*.*d|\n", width, precision, var);
	ft_printf("#2448");
	ret2 = ft_printf("|%0+\'*.*d|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2449");
	ret1 = fprintf(fppres, "|%0+\'*.*hhd|\n", width, precision, var);
	ft_printf("#2449");
	ret2 = ft_printf("|%0+\'*.*hhd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2450");
	ret1 = fprintf(fppres, "|%0+\'*.*hd|\n", width, precision, var);
	ft_printf("#2450");
	ret2 = ft_printf("|%0+\'*.*hd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2451");
	ret1 = fprintf(fppres, "|%0+\'*.*ld|\n", width, precision, var);
	ft_printf("#2451");
	ret2 = ft_printf("|%0+\'*.*ld|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2452");
	ret1 = fprintf(fppres, "|%0+\'*.*lld|\n", width, precision, var);
	ft_printf("#2452");
	ret2 = ft_printf("|%0+\'*.*lld|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2453");
	ret1 = fprintf(fppres, "|%0+\'*.*jd|\n", width, precision, var);
	ft_printf("#2453");
	ret2 = ft_printf("|%0+\'*.*jd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2454");
	ret1 = fprintf(fppres, "|%0+\'*.*zd|\n", width, precision, var);
	ft_printf("#2454");
	ret2 = ft_printf("|%0+\'*.*zd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2455");
	ret1 = fprintf(fppres, "|%0+\'*.*d|\n", width, precision, var);
	ft_printf("#2455");
	ret2 = ft_printf("|%0+\'*.*d|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2456");
	ret1 = fprintf(fppres, "|%0+\'*.*i|\n", width, precision, var);
	ft_printf("#2456");
	ret2 = ft_printf("|%0+\'*.*i|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2457");
	ret1 = fprintf(fppres, "|%0+\'*.*hhi|\n", width, precision, var);
	ft_printf("#2457");
	ret2 = ft_printf("|%0+\'*.*hhi|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2458");
	ret1 = fprintf(fppres, "|%0+\'*.*hi|\n", width, precision, var);
	ft_printf("#2458");
	ret2 = ft_printf("|%0+\'*.*hi|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2459");
	ret1 = fprintf(fppres, "|%0+\'*.*li|\n", width, precision, var);
	ft_printf("#2459");
	ret2 = ft_printf("|%0+\'*.*li|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2460");
	ret1 = fprintf(fppres, "|%0+\'*.*lli|\n", width, precision, var);
	ft_printf("#2460");
	ret2 = ft_printf("|%0+\'*.*lli|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2461");
	ret1 = fprintf(fppres, "|%0+\'*.*ji|\n", width, precision, var);
	ft_printf("#2461");
	ret2 = ft_printf("|%0+\'*.*ji|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2462");
	ret1 = fprintf(fppres, "|%0+\'*.*zi|\n", width, precision, var);
	ft_printf("#2462");
	ret2 = ft_printf("|%0+\'*.*zi|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2463");
	ret1 = fprintf(fppres, "|%0+\'*.*i|\n", width, precision, var);
	ft_printf("#2463");
	ret2 = ft_printf("|%0+\'*.*i|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2464");
	ret1 = fprintf(fppres, "|%0+\'*.*u|\n", width, precision, var);
	ft_printf("#2464");
	ret2 = ft_printf("|%0+\'*.*u|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2465");
	ret1 = fprintf(fppres, "|%0+\'*.*hhu|\n", width, precision, var);
	ft_printf("#2465");
	ret2 = ft_printf("|%0+\'*.*hhu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2466");
	ret1 = fprintf(fppres, "|%0+\'*.*hu|\n", width, precision, var);
	ft_printf("#2466");
	ret2 = ft_printf("|%0+\'*.*hu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2467");
	ret1 = fprintf(fppres, "|%0+\'*.*lu|\n", width, precision, var);
	ft_printf("#2467");
	ret2 = ft_printf("|%0+\'*.*lu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2468");
	ret1 = fprintf(fppres, "|%0+\'*.*llu|\n", width, precision, var);
	ft_printf("#2468");
	ret2 = ft_printf("|%0+\'*.*llu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2469");
	ret1 = fprintf(fppres, "|%0+\'*.*ju|\n", width, precision, var);
	ft_printf("#2469");
	ret2 = ft_printf("|%0+\'*.*ju|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2470");
	ret1 = fprintf(fppres, "|%0+\'*.*zu|\n", width, precision, var);
	ft_printf("#2470");
	ret2 = ft_printf("|%0+\'*.*zu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2471");
	ret1 = fprintf(fppres, "|%0+\'*.*u|\n", width, precision, var);
	ft_printf("#2471");
	ret2 = ft_printf("|%0+\'*.*u|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2472");
	ret1 = fprintf(fppres, "|%0+\'*.*f|\n", width, precision, var);
	ft_printf("#2472");
	ret2 = ft_printf("|%0+\'*.*f|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2473");
	ret1 = fprintf(fppres, "|%0+\'*.*hhf|\n", width, precision, var);
	ft_printf("#2473");
	ret2 = ft_printf("|%0+\'*.*hhf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2474");
	ret1 = fprintf(fppres, "|%0+\'*.*hf|\n", width, precision, var);
	ft_printf("#2474");
	ret2 = ft_printf("|%0+\'*.*hf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2475");
	ret1 = fprintf(fppres, "|%0+\'*.*lf|\n", width, precision, var);
	ft_printf("#2475");
	ret2 = ft_printf("|%0+\'*.*lf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2476");
	ret1 = fprintf(fppres, "|%0+\'*.*llf|\n", width, precision, var);
	ft_printf("#2476");
	ret2 = ft_printf("|%0+\'*.*llf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2477");
	ret1 = fprintf(fppres, "|%0+\'*.*jf|\n", width, precision, var);
	ft_printf("#2477");
	ret2 = ft_printf("|%0+\'*.*jf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2478");
	ret1 = fprintf(fppres, "|%0+\'*.*zf|\n", width, precision, var);
	ft_printf("#2478");
	ret2 = ft_printf("|%0+\'*.*zf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2479");
	ret1 = fprintf(fppres, "|%0+\'*.*f|\n", width, precision, var);
	ft_printf("#2479");
	ret2 = ft_printf("|%0+\'*.*f|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2480");
	ret1 = fprintf(fppres, "|%0+\'*.*F|\n", width, precision, var);
	ft_printf("#2480");
	ret2 = ft_printf("|%0+\'*.*F|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2481");
	ret1 = fprintf(fppres, "|%0+\'*.*hhF|\n", width, precision, var);
	ft_printf("#2481");
	ret2 = ft_printf("|%0+\'*.*hhF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2482");
	ret1 = fprintf(fppres, "|%0+\'*.*hF|\n", width, precision, var);
	ft_printf("#2482");
	ret2 = ft_printf("|%0+\'*.*hF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2483");
	ret1 = fprintf(fppres, "|%0+\'*.*lF|\n", width, precision, var);
	ft_printf("#2483");
	ret2 = ft_printf("|%0+\'*.*lF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2484");
	ret1 = fprintf(fppres, "|%0+\'*.*llF|\n", width, precision, var);
	ft_printf("#2484");
	ret2 = ft_printf("|%0+\'*.*llF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2485");
	ret1 = fprintf(fppres, "|%0+\'*.*jF|\n", width, precision, var);
	ft_printf("#2485");
	ret2 = ft_printf("|%0+\'*.*jF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2486");
	ret1 = fprintf(fppres, "|%0+\'*.*zF|\n", width, precision, var);
	ft_printf("#2486");
	ret2 = ft_printf("|%0+\'*.*zF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2487");
	ret1 = fprintf(fppres, "|%0+\'*.*F|\n", width, precision, var);
	ft_printf("#2487");
	ret2 = ft_printf("|%0+\'*.*F|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2488");
	ret1 = fprintf(fppres, "|%0+\'*.* |\n", width, precision, var);
	ft_printf("#2488");
	ret2 = ft_printf("|%0+\'*.* |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2489");
	ret1 = fprintf(fppres, "|%0+\'*.*hh |\n", width, precision, var);
	ft_printf("#2489");
	ret2 = ft_printf("|%0+\'*.*hh |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2490");
	ret1 = fprintf(fppres, "|%0+\'*.*h |\n", width, precision, var);
	ft_printf("#2490");
	ret2 = ft_printf("|%0+\'*.*h |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2491");
	ret1 = fprintf(fppres, "|%0+\'*.*l |\n", width, precision, var);
	ft_printf("#2491");
	ret2 = ft_printf("|%0+\'*.*l |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2492");
	ret1 = fprintf(fppres, "|%0+\'*.*ll |\n", width, precision, var);
	ft_printf("#2492");
	ret2 = ft_printf("|%0+\'*.*ll |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2493");
	ret1 = fprintf(fppres, "|%0+\'*.*j |\n", width, precision, var);
	ft_printf("#2493");
	ret2 = ft_printf("|%0+\'*.*j |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2494");
	ret1 = fprintf(fppres, "|%0+\'*.*z |\n", width, precision, var);
	ft_printf("#2494");
	ret2 = ft_printf("|%0+\'*.*z |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2495");
	ret1 = fprintf(fppres, "|%0+\'*.* |\n", width, precision, var);
	ft_printf("#2495");
	ret2 = ft_printf("|%0+\'*.* |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2496");
	ret1 = fprintf(fppres, "|%-\'*.*d|\n", width, precision, var);
	ft_printf("#2496");
	ret2 = ft_printf("|%-\'*.*d|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2497");
	ret1 = fprintf(fppres, "|%-\'*.*hhd|\n", width, precision, var);
	ft_printf("#2497");
	ret2 = ft_printf("|%-\'*.*hhd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2498");
	ret1 = fprintf(fppres, "|%-\'*.*hd|\n", width, precision, var);
	ft_printf("#2498");
	ret2 = ft_printf("|%-\'*.*hd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2499");
	ret1 = fprintf(fppres, "|%-\'*.*ld|\n", width, precision, var);
	ft_printf("#2499");
	ret2 = ft_printf("|%-\'*.*ld|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2500");
	ret1 = fprintf(fppres, "|%-\'*.*lld|\n", width, precision, var);
	ft_printf("#2500");
	ret2 = ft_printf("|%-\'*.*lld|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2501");
	ret1 = fprintf(fppres, "|%-\'*.*jd|\n", width, precision, var);
	ft_printf("#2501");
	ret2 = ft_printf("|%-\'*.*jd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2502");
	ret1 = fprintf(fppres, "|%-\'*.*zd|\n", width, precision, var);
	ft_printf("#2502");
	ret2 = ft_printf("|%-\'*.*zd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2503");
	ret1 = fprintf(fppres, "|%-\'*.*d|\n", width, precision, var);
	ft_printf("#2503");
	ret2 = ft_printf("|%-\'*.*d|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2504");
	ret1 = fprintf(fppres, "|%-\'*.*i|\n", width, precision, var);
	ft_printf("#2504");
	ret2 = ft_printf("|%-\'*.*i|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2505");
	ret1 = fprintf(fppres, "|%-\'*.*hhi|\n", width, precision, var);
	ft_printf("#2505");
	ret2 = ft_printf("|%-\'*.*hhi|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2506");
	ret1 = fprintf(fppres, "|%-\'*.*hi|\n", width, precision, var);
	ft_printf("#2506");
	ret2 = ft_printf("|%-\'*.*hi|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2507");
	ret1 = fprintf(fppres, "|%-\'*.*li|\n", width, precision, var);
	ft_printf("#2507");
	ret2 = ft_printf("|%-\'*.*li|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2508");
	ret1 = fprintf(fppres, "|%-\'*.*lli|\n", width, precision, var);
	ft_printf("#2508");
	ret2 = ft_printf("|%-\'*.*lli|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2509");
	ret1 = fprintf(fppres, "|%-\'*.*ji|\n", width, precision, var);
	ft_printf("#2509");
	ret2 = ft_printf("|%-\'*.*ji|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2510");
	ret1 = fprintf(fppres, "|%-\'*.*zi|\n", width, precision, var);
	ft_printf("#2510");
	ret2 = ft_printf("|%-\'*.*zi|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2511");
	ret1 = fprintf(fppres, "|%-\'*.*i|\n", width, precision, var);
	ft_printf("#2511");
	ret2 = ft_printf("|%-\'*.*i|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2512");
	ret1 = fprintf(fppres, "|%-\'*.*u|\n", width, precision, var);
	ft_printf("#2512");
	ret2 = ft_printf("|%-\'*.*u|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2513");
	ret1 = fprintf(fppres, "|%-\'*.*hhu|\n", width, precision, var);
	ft_printf("#2513");
	ret2 = ft_printf("|%-\'*.*hhu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2514");
	ret1 = fprintf(fppres, "|%-\'*.*hu|\n", width, precision, var);
	ft_printf("#2514");
	ret2 = ft_printf("|%-\'*.*hu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2515");
	ret1 = fprintf(fppres, "|%-\'*.*lu|\n", width, precision, var);
	ft_printf("#2515");
	ret2 = ft_printf("|%-\'*.*lu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2516");
	ret1 = fprintf(fppres, "|%-\'*.*llu|\n", width, precision, var);
	ft_printf("#2516");
	ret2 = ft_printf("|%-\'*.*llu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2517");
	ret1 = fprintf(fppres, "|%-\'*.*ju|\n", width, precision, var);
	ft_printf("#2517");
	ret2 = ft_printf("|%-\'*.*ju|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2518");
	ret1 = fprintf(fppres, "|%-\'*.*zu|\n", width, precision, var);
	ft_printf("#2518");
	ret2 = ft_printf("|%-\'*.*zu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2519");
	ret1 = fprintf(fppres, "|%-\'*.*u|\n", width, precision, var);
	ft_printf("#2519");
	ret2 = ft_printf("|%-\'*.*u|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2520");
	ret1 = fprintf(fppres, "|%-\'*.*f|\n", width, precision, var);
	ft_printf("#2520");
	ret2 = ft_printf("|%-\'*.*f|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2521");
	ret1 = fprintf(fppres, "|%-\'*.*hhf|\n", width, precision, var);
	ft_printf("#2521");
	ret2 = ft_printf("|%-\'*.*hhf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2522");
	ret1 = fprintf(fppres, "|%-\'*.*hf|\n", width, precision, var);
	ft_printf("#2522");
	ret2 = ft_printf("|%-\'*.*hf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2523");
	ret1 = fprintf(fppres, "|%-\'*.*lf|\n", width, precision, var);
	ft_printf("#2523");
	ret2 = ft_printf("|%-\'*.*lf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2524");
	ret1 = fprintf(fppres, "|%-\'*.*llf|\n", width, precision, var);
	ft_printf("#2524");
	ret2 = ft_printf("|%-\'*.*llf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2525");
	ret1 = fprintf(fppres, "|%-\'*.*jf|\n", width, precision, var);
	ft_printf("#2525");
	ret2 = ft_printf("|%-\'*.*jf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2526");
	ret1 = fprintf(fppres, "|%-\'*.*zf|\n", width, precision, var);
	ft_printf("#2526");
	ret2 = ft_printf("|%-\'*.*zf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2527");
	ret1 = fprintf(fppres, "|%-\'*.*f|\n", width, precision, var);
	ft_printf("#2527");
	ret2 = ft_printf("|%-\'*.*f|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2528");
	ret1 = fprintf(fppres, "|%-\'*.*F|\n", width, precision, var);
	ft_printf("#2528");
	ret2 = ft_printf("|%-\'*.*F|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2529");
	ret1 = fprintf(fppres, "|%-\'*.*hhF|\n", width, precision, var);
	ft_printf("#2529");
	ret2 = ft_printf("|%-\'*.*hhF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2530");
	ret1 = fprintf(fppres, "|%-\'*.*hF|\n", width, precision, var);
	ft_printf("#2530");
	ret2 = ft_printf("|%-\'*.*hF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2531");
	ret1 = fprintf(fppres, "|%-\'*.*lF|\n", width, precision, var);
	ft_printf("#2531");
	ret2 = ft_printf("|%-\'*.*lF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2532");
	ret1 = fprintf(fppres, "|%-\'*.*llF|\n", width, precision, var);
	ft_printf("#2532");
	ret2 = ft_printf("|%-\'*.*llF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2533");
	ret1 = fprintf(fppres, "|%-\'*.*jF|\n", width, precision, var);
	ft_printf("#2533");
	ret2 = ft_printf("|%-\'*.*jF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2534");
	ret1 = fprintf(fppres, "|%-\'*.*zF|\n", width, precision, var);
	ft_printf("#2534");
	ret2 = ft_printf("|%-\'*.*zF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2535");
	ret1 = fprintf(fppres, "|%-\'*.*F|\n", width, precision, var);
	ft_printf("#2535");
	ret2 = ft_printf("|%-\'*.*F|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2536");
	ret1 = fprintf(fppres, "|%-\'*.* |\n", width, precision, var);
	ft_printf("#2536");
	ret2 = ft_printf("|%-\'*.* |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2537");
	ret1 = fprintf(fppres, "|%-\'*.*hh |\n", width, precision, var);
	ft_printf("#2537");
	ret2 = ft_printf("|%-\'*.*hh |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2538");
	ret1 = fprintf(fppres, "|%-\'*.*h |\n", width, precision, var);
	ft_printf("#2538");
	ret2 = ft_printf("|%-\'*.*h |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2539");
	ret1 = fprintf(fppres, "|%-\'*.*l |\n", width, precision, var);
	ft_printf("#2539");
	ret2 = ft_printf("|%-\'*.*l |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2540");
	ret1 = fprintf(fppres, "|%-\'*.*ll |\n", width, precision, var);
	ft_printf("#2540");
	ret2 = ft_printf("|%-\'*.*ll |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2541");
	ret1 = fprintf(fppres, "|%-\'*.*j |\n", width, precision, var);
	ft_printf("#2541");
	ret2 = ft_printf("|%-\'*.*j |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2542");
	ret1 = fprintf(fppres, "|%-\'*.*z |\n", width, precision, var);
	ft_printf("#2542");
	ret2 = ft_printf("|%-\'*.*z |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2543");
	ret1 = fprintf(fppres, "|%-\'*.* |\n", width, precision, var);
	ft_printf("#2543");
	ret2 = ft_printf("|%-\'*.* |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2544");
	ret1 = fprintf(fppres, "|%0-\'*.*d|\n", width, precision, var);
	ft_printf("#2544");
	ret2 = ft_printf("|%0-\'*.*d|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2545");
	ret1 = fprintf(fppres, "|%0-\'*.*hhd|\n", width, precision, var);
	ft_printf("#2545");
	ret2 = ft_printf("|%0-\'*.*hhd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2546");
	ret1 = fprintf(fppres, "|%0-\'*.*hd|\n", width, precision, var);
	ft_printf("#2546");
	ret2 = ft_printf("|%0-\'*.*hd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2547");
	ret1 = fprintf(fppres, "|%0-\'*.*ld|\n", width, precision, var);
	ft_printf("#2547");
	ret2 = ft_printf("|%0-\'*.*ld|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2548");
	ret1 = fprintf(fppres, "|%0-\'*.*lld|\n", width, precision, var);
	ft_printf("#2548");
	ret2 = ft_printf("|%0-\'*.*lld|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2549");
	ret1 = fprintf(fppres, "|%0-\'*.*jd|\n", width, precision, var);
	ft_printf("#2549");
	ret2 = ft_printf("|%0-\'*.*jd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2550");
	ret1 = fprintf(fppres, "|%0-\'*.*zd|\n", width, precision, var);
	ft_printf("#2550");
	ret2 = ft_printf("|%0-\'*.*zd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2551");
	ret1 = fprintf(fppres, "|%0-\'*.*d|\n", width, precision, var);
	ft_printf("#2551");
	ret2 = ft_printf("|%0-\'*.*d|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2552");
	ret1 = fprintf(fppres, "|%0-\'*.*i|\n", width, precision, var);
	ft_printf("#2552");
	ret2 = ft_printf("|%0-\'*.*i|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2553");
	ret1 = fprintf(fppres, "|%0-\'*.*hhi|\n", width, precision, var);
	ft_printf("#2553");
	ret2 = ft_printf("|%0-\'*.*hhi|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2554");
	ret1 = fprintf(fppres, "|%0-\'*.*hi|\n", width, precision, var);
	ft_printf("#2554");
	ret2 = ft_printf("|%0-\'*.*hi|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2555");
	ret1 = fprintf(fppres, "|%0-\'*.*li|\n", width, precision, var);
	ft_printf("#2555");
	ret2 = ft_printf("|%0-\'*.*li|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2556");
	ret1 = fprintf(fppres, "|%0-\'*.*lli|\n", width, precision, var);
	ft_printf("#2556");
	ret2 = ft_printf("|%0-\'*.*lli|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2557");
	ret1 = fprintf(fppres, "|%0-\'*.*ji|\n", width, precision, var);
	ft_printf("#2557");
	ret2 = ft_printf("|%0-\'*.*ji|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2558");
	ret1 = fprintf(fppres, "|%0-\'*.*zi|\n", width, precision, var);
	ft_printf("#2558");
	ret2 = ft_printf("|%0-\'*.*zi|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2559");
	ret1 = fprintf(fppres, "|%0-\'*.*i|\n", width, precision, var);
	ft_printf("#2559");
	ret2 = ft_printf("|%0-\'*.*i|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2560");
	ret1 = fprintf(fppres, "|%0-\'*.*u|\n", width, precision, var);
	ft_printf("#2560");
	ret2 = ft_printf("|%0-\'*.*u|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2561");
	ret1 = fprintf(fppres, "|%0-\'*.*hhu|\n", width, precision, var);
	ft_printf("#2561");
	ret2 = ft_printf("|%0-\'*.*hhu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2562");
	ret1 = fprintf(fppres, "|%0-\'*.*hu|\n", width, precision, var);
	ft_printf("#2562");
	ret2 = ft_printf("|%0-\'*.*hu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2563");
	ret1 = fprintf(fppres, "|%0-\'*.*lu|\n", width, precision, var);
	ft_printf("#2563");
	ret2 = ft_printf("|%0-\'*.*lu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2564");
	ret1 = fprintf(fppres, "|%0-\'*.*llu|\n", width, precision, var);
	ft_printf("#2564");
	ret2 = ft_printf("|%0-\'*.*llu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2565");
	ret1 = fprintf(fppres, "|%0-\'*.*ju|\n", width, precision, var);
	ft_printf("#2565");
	ret2 = ft_printf("|%0-\'*.*ju|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2566");
	ret1 = fprintf(fppres, "|%0-\'*.*zu|\n", width, precision, var);
	ft_printf("#2566");
	ret2 = ft_printf("|%0-\'*.*zu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2567");
	ret1 = fprintf(fppres, "|%0-\'*.*u|\n", width, precision, var);
	ft_printf("#2567");
	ret2 = ft_printf("|%0-\'*.*u|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2568");
	ret1 = fprintf(fppres, "|%0-\'*.*f|\n", width, precision, var);
	ft_printf("#2568");
	ret2 = ft_printf("|%0-\'*.*f|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2569");
	ret1 = fprintf(fppres, "|%0-\'*.*hhf|\n", width, precision, var);
	ft_printf("#2569");
	ret2 = ft_printf("|%0-\'*.*hhf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2570");
	ret1 = fprintf(fppres, "|%0-\'*.*hf|\n", width, precision, var);
	ft_printf("#2570");
	ret2 = ft_printf("|%0-\'*.*hf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2571");
	ret1 = fprintf(fppres, "|%0-\'*.*lf|\n", width, precision, var);
	ft_printf("#2571");
	ret2 = ft_printf("|%0-\'*.*lf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2572");
	ret1 = fprintf(fppres, "|%0-\'*.*llf|\n", width, precision, var);
	ft_printf("#2572");
	ret2 = ft_printf("|%0-\'*.*llf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2573");
	ret1 = fprintf(fppres, "|%0-\'*.*jf|\n", width, precision, var);
	ft_printf("#2573");
	ret2 = ft_printf("|%0-\'*.*jf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2574");
	ret1 = fprintf(fppres, "|%0-\'*.*zf|\n", width, precision, var);
	ft_printf("#2574");
	ret2 = ft_printf("|%0-\'*.*zf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2575");
	ret1 = fprintf(fppres, "|%0-\'*.*f|\n", width, precision, var);
	ft_printf("#2575");
	ret2 = ft_printf("|%0-\'*.*f|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2576");
	ret1 = fprintf(fppres, "|%0-\'*.*F|\n", width, precision, var);
	ft_printf("#2576");
	ret2 = ft_printf("|%0-\'*.*F|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2577");
	ret1 = fprintf(fppres, "|%0-\'*.*hhF|\n", width, precision, var);
	ft_printf("#2577");
	ret2 = ft_printf("|%0-\'*.*hhF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2578");
	ret1 = fprintf(fppres, "|%0-\'*.*hF|\n", width, precision, var);
	ft_printf("#2578");
	ret2 = ft_printf("|%0-\'*.*hF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2579");
	ret1 = fprintf(fppres, "|%0-\'*.*lF|\n", width, precision, var);
	ft_printf("#2579");
	ret2 = ft_printf("|%0-\'*.*lF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2580");
	ret1 = fprintf(fppres, "|%0-\'*.*llF|\n", width, precision, var);
	ft_printf("#2580");
	ret2 = ft_printf("|%0-\'*.*llF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2581");
	ret1 = fprintf(fppres, "|%0-\'*.*jF|\n", width, precision, var);
	ft_printf("#2581");
	ret2 = ft_printf("|%0-\'*.*jF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2582");
	ret1 = fprintf(fppres, "|%0-\'*.*zF|\n", width, precision, var);
	ft_printf("#2582");
	ret2 = ft_printf("|%0-\'*.*zF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2583");
	ret1 = fprintf(fppres, "|%0-\'*.*F|\n", width, precision, var);
	ft_printf("#2583");
	ret2 = ft_printf("|%0-\'*.*F|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2584");
	ret1 = fprintf(fppres, "|%0-\'*.* |\n", width, precision, var);
	ft_printf("#2584");
	ret2 = ft_printf("|%0-\'*.* |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2585");
	ret1 = fprintf(fppres, "|%0-\'*.*hh |\n", width, precision, var);
	ft_printf("#2585");
	ret2 = ft_printf("|%0-\'*.*hh |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2586");
	ret1 = fprintf(fppres, "|%0-\'*.*h |\n", width, precision, var);
	ft_printf("#2586");
	ret2 = ft_printf("|%0-\'*.*h |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2587");
	ret1 = fprintf(fppres, "|%0-\'*.*l |\n", width, precision, var);
	ft_printf("#2587");
	ret2 = ft_printf("|%0-\'*.*l |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2588");
	ret1 = fprintf(fppres, "|%0-\'*.*ll |\n", width, precision, var);
	ft_printf("#2588");
	ret2 = ft_printf("|%0-\'*.*ll |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2589");
	ret1 = fprintf(fppres, "|%0-\'*.*j |\n", width, precision, var);
	ft_printf("#2589");
	ret2 = ft_printf("|%0-\'*.*j |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2590");
	ret1 = fprintf(fppres, "|%0-\'*.*z |\n", width, precision, var);
	ft_printf("#2590");
	ret2 = ft_printf("|%0-\'*.*z |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2591");
	ret1 = fprintf(fppres, "|%0-\'*.* |\n", width, precision, var);
	ft_printf("#2591");
	ret2 = ft_printf("|%0-\'*.* |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2592");
	ret1 = fprintf(fppres, "|%+-\'*.*d|\n", width, precision, var);
	ft_printf("#2592");
	ret2 = ft_printf("|%+-\'*.*d|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2593");
	ret1 = fprintf(fppres, "|%+-\'*.*hhd|\n", width, precision, var);
	ft_printf("#2593");
	ret2 = ft_printf("|%+-\'*.*hhd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2594");
	ret1 = fprintf(fppres, "|%+-\'*.*hd|\n", width, precision, var);
	ft_printf("#2594");
	ret2 = ft_printf("|%+-\'*.*hd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2595");
	ret1 = fprintf(fppres, "|%+-\'*.*ld|\n", width, precision, var);
	ft_printf("#2595");
	ret2 = ft_printf("|%+-\'*.*ld|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2596");
	ret1 = fprintf(fppres, "|%+-\'*.*lld|\n", width, precision, var);
	ft_printf("#2596");
	ret2 = ft_printf("|%+-\'*.*lld|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2597");
	ret1 = fprintf(fppres, "|%+-\'*.*jd|\n", width, precision, var);
	ft_printf("#2597");
	ret2 = ft_printf("|%+-\'*.*jd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2598");
	ret1 = fprintf(fppres, "|%+-\'*.*zd|\n", width, precision, var);
	ft_printf("#2598");
	ret2 = ft_printf("|%+-\'*.*zd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2599");
	ret1 = fprintf(fppres, "|%+-\'*.*d|\n", width, precision, var);
	ft_printf("#2599");
	ret2 = ft_printf("|%+-\'*.*d|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2600");
	ret1 = fprintf(fppres, "|%+-\'*.*i|\n", width, precision, var);
	ft_printf("#2600");
	ret2 = ft_printf("|%+-\'*.*i|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2601");
	ret1 = fprintf(fppres, "|%+-\'*.*hhi|\n", width, precision, var);
	ft_printf("#2601");
	ret2 = ft_printf("|%+-\'*.*hhi|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2602");
	ret1 = fprintf(fppres, "|%+-\'*.*hi|\n", width, precision, var);
	ft_printf("#2602");
	ret2 = ft_printf("|%+-\'*.*hi|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2603");
	ret1 = fprintf(fppres, "|%+-\'*.*li|\n", width, precision, var);
	ft_printf("#2603");
	ret2 = ft_printf("|%+-\'*.*li|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2604");
	ret1 = fprintf(fppres, "|%+-\'*.*lli|\n", width, precision, var);
	ft_printf("#2604");
	ret2 = ft_printf("|%+-\'*.*lli|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2605");
	ret1 = fprintf(fppres, "|%+-\'*.*ji|\n", width, precision, var);
	ft_printf("#2605");
	ret2 = ft_printf("|%+-\'*.*ji|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2606");
	ret1 = fprintf(fppres, "|%+-\'*.*zi|\n", width, precision, var);
	ft_printf("#2606");
	ret2 = ft_printf("|%+-\'*.*zi|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2607");
	ret1 = fprintf(fppres, "|%+-\'*.*i|\n", width, precision, var);
	ft_printf("#2607");
	ret2 = ft_printf("|%+-\'*.*i|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2608");
	ret1 = fprintf(fppres, "|%+-\'*.*u|\n", width, precision, var);
	ft_printf("#2608");
	ret2 = ft_printf("|%+-\'*.*u|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2609");
	ret1 = fprintf(fppres, "|%+-\'*.*hhu|\n", width, precision, var);
	ft_printf("#2609");
	ret2 = ft_printf("|%+-\'*.*hhu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2610");
	ret1 = fprintf(fppres, "|%+-\'*.*hu|\n", width, precision, var);
	ft_printf("#2610");
	ret2 = ft_printf("|%+-\'*.*hu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2611");
	ret1 = fprintf(fppres, "|%+-\'*.*lu|\n", width, precision, var);
	ft_printf("#2611");
	ret2 = ft_printf("|%+-\'*.*lu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2612");
	ret1 = fprintf(fppres, "|%+-\'*.*llu|\n", width, precision, var);
	ft_printf("#2612");
	ret2 = ft_printf("|%+-\'*.*llu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2613");
	ret1 = fprintf(fppres, "|%+-\'*.*ju|\n", width, precision, var);
	ft_printf("#2613");
	ret2 = ft_printf("|%+-\'*.*ju|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2614");
	ret1 = fprintf(fppres, "|%+-\'*.*zu|\n", width, precision, var);
	ft_printf("#2614");
	ret2 = ft_printf("|%+-\'*.*zu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2615");
	ret1 = fprintf(fppres, "|%+-\'*.*u|\n", width, precision, var);
	ft_printf("#2615");
	ret2 = ft_printf("|%+-\'*.*u|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2616");
	ret1 = fprintf(fppres, "|%+-\'*.*f|\n", width, precision, var);
	ft_printf("#2616");
	ret2 = ft_printf("|%+-\'*.*f|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2617");
	ret1 = fprintf(fppres, "|%+-\'*.*hhf|\n", width, precision, var);
	ft_printf("#2617");
	ret2 = ft_printf("|%+-\'*.*hhf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2618");
	ret1 = fprintf(fppres, "|%+-\'*.*hf|\n", width, precision, var);
	ft_printf("#2618");
	ret2 = ft_printf("|%+-\'*.*hf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2619");
	ret1 = fprintf(fppres, "|%+-\'*.*lf|\n", width, precision, var);
	ft_printf("#2619");
	ret2 = ft_printf("|%+-\'*.*lf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2620");
	ret1 = fprintf(fppres, "|%+-\'*.*llf|\n", width, precision, var);
	ft_printf("#2620");
	ret2 = ft_printf("|%+-\'*.*llf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2621");
	ret1 = fprintf(fppres, "|%+-\'*.*jf|\n", width, precision, var);
	ft_printf("#2621");
	ret2 = ft_printf("|%+-\'*.*jf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2622");
	ret1 = fprintf(fppres, "|%+-\'*.*zf|\n", width, precision, var);
	ft_printf("#2622");
	ret2 = ft_printf("|%+-\'*.*zf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2623");
	ret1 = fprintf(fppres, "|%+-\'*.*f|\n", width, precision, var);
	ft_printf("#2623");
	ret2 = ft_printf("|%+-\'*.*f|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2624");
	ret1 = fprintf(fppres, "|%+-\'*.*F|\n", width, precision, var);
	ft_printf("#2624");
	ret2 = ft_printf("|%+-\'*.*F|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2625");
	ret1 = fprintf(fppres, "|%+-\'*.*hhF|\n", width, precision, var);
	ft_printf("#2625");
	ret2 = ft_printf("|%+-\'*.*hhF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2626");
	ret1 = fprintf(fppres, "|%+-\'*.*hF|\n", width, precision, var);
	ft_printf("#2626");
	ret2 = ft_printf("|%+-\'*.*hF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2627");
	ret1 = fprintf(fppres, "|%+-\'*.*lF|\n", width, precision, var);
	ft_printf("#2627");
	ret2 = ft_printf("|%+-\'*.*lF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2628");
	ret1 = fprintf(fppres, "|%+-\'*.*llF|\n", width, precision, var);
	ft_printf("#2628");
	ret2 = ft_printf("|%+-\'*.*llF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2629");
	ret1 = fprintf(fppres, "|%+-\'*.*jF|\n", width, precision, var);
	ft_printf("#2629");
	ret2 = ft_printf("|%+-\'*.*jF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2630");
	ret1 = fprintf(fppres, "|%+-\'*.*zF|\n", width, precision, var);
	ft_printf("#2630");
	ret2 = ft_printf("|%+-\'*.*zF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2631");
	ret1 = fprintf(fppres, "|%+-\'*.*F|\n", width, precision, var);
	ft_printf("#2631");
	ret2 = ft_printf("|%+-\'*.*F|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2632");
	ret1 = fprintf(fppres, "|%+-\'*.* |\n", width, precision, var);
	ft_printf("#2632");
	ret2 = ft_printf("|%+-\'*.* |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2633");
	ret1 = fprintf(fppres, "|%+-\'*.*hh |\n", width, precision, var);
	ft_printf("#2633");
	ret2 = ft_printf("|%+-\'*.*hh |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2634");
	ret1 = fprintf(fppres, "|%+-\'*.*h |\n", width, precision, var);
	ft_printf("#2634");
	ret2 = ft_printf("|%+-\'*.*h |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2635");
	ret1 = fprintf(fppres, "|%+-\'*.*l |\n", width, precision, var);
	ft_printf("#2635");
	ret2 = ft_printf("|%+-\'*.*l |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2636");
	ret1 = fprintf(fppres, "|%+-\'*.*ll |\n", width, precision, var);
	ft_printf("#2636");
	ret2 = ft_printf("|%+-\'*.*ll |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2637");
	ret1 = fprintf(fppres, "|%+-\'*.*j |\n", width, precision, var);
	ft_printf("#2637");
	ret2 = ft_printf("|%+-\'*.*j |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2638");
	ret1 = fprintf(fppres, "|%+-\'*.*z |\n", width, precision, var);
	ft_printf("#2638");
	ret2 = ft_printf("|%+-\'*.*z |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2639");
	ret1 = fprintf(fppres, "|%+-\'*.* |\n", width, precision, var);
	ft_printf("#2639");
	ret2 = ft_printf("|%+-\'*.* |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2640");
	ret1 = fprintf(fppres, "|%0+-\'*.*d|\n", width, precision, var);
	ft_printf("#2640");
	ret2 = ft_printf("|%0+-\'*.*d|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2641");
	ret1 = fprintf(fppres, "|%0+-\'*.*hhd|\n", width, precision, var);
	ft_printf("#2641");
	ret2 = ft_printf("|%0+-\'*.*hhd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2642");
	ret1 = fprintf(fppres, "|%0+-\'*.*hd|\n", width, precision, var);
	ft_printf("#2642");
	ret2 = ft_printf("|%0+-\'*.*hd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2643");
	ret1 = fprintf(fppres, "|%0+-\'*.*ld|\n", width, precision, var);
	ft_printf("#2643");
	ret2 = ft_printf("|%0+-\'*.*ld|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2644");
	ret1 = fprintf(fppres, "|%0+-\'*.*lld|\n", width, precision, var);
	ft_printf("#2644");
	ret2 = ft_printf("|%0+-\'*.*lld|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2645");
	ret1 = fprintf(fppres, "|%0+-\'*.*jd|\n", width, precision, var);
	ft_printf("#2645");
	ret2 = ft_printf("|%0+-\'*.*jd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2646");
	ret1 = fprintf(fppres, "|%0+-\'*.*zd|\n", width, precision, var);
	ft_printf("#2646");
	ret2 = ft_printf("|%0+-\'*.*zd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2647");
	ret1 = fprintf(fppres, "|%0+-\'*.*d|\n", width, precision, var);
	ft_printf("#2647");
	ret2 = ft_printf("|%0+-\'*.*d|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2648");
	ret1 = fprintf(fppres, "|%0+-\'*.*i|\n", width, precision, var);
	ft_printf("#2648");
	ret2 = ft_printf("|%0+-\'*.*i|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2649");
	ret1 = fprintf(fppres, "|%0+-\'*.*hhi|\n", width, precision, var);
	ft_printf("#2649");
	ret2 = ft_printf("|%0+-\'*.*hhi|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2650");
	ret1 = fprintf(fppres, "|%0+-\'*.*hi|\n", width, precision, var);
	ft_printf("#2650");
	ret2 = ft_printf("|%0+-\'*.*hi|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2651");
	ret1 = fprintf(fppres, "|%0+-\'*.*li|\n", width, precision, var);
	ft_printf("#2651");
	ret2 = ft_printf("|%0+-\'*.*li|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2652");
	ret1 = fprintf(fppres, "|%0+-\'*.*lli|\n", width, precision, var);
	ft_printf("#2652");
	ret2 = ft_printf("|%0+-\'*.*lli|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2653");
	ret1 = fprintf(fppres, "|%0+-\'*.*ji|\n", width, precision, var);
	ft_printf("#2653");
	ret2 = ft_printf("|%0+-\'*.*ji|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2654");
	ret1 = fprintf(fppres, "|%0+-\'*.*zi|\n", width, precision, var);
	ft_printf("#2654");
	ret2 = ft_printf("|%0+-\'*.*zi|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2655");
	ret1 = fprintf(fppres, "|%0+-\'*.*i|\n", width, precision, var);
	ft_printf("#2655");
	ret2 = ft_printf("|%0+-\'*.*i|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2656");
	ret1 = fprintf(fppres, "|%0+-\'*.*u|\n", width, precision, var);
	ft_printf("#2656");
	ret2 = ft_printf("|%0+-\'*.*u|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2657");
	ret1 = fprintf(fppres, "|%0+-\'*.*hhu|\n", width, precision, var);
	ft_printf("#2657");
	ret2 = ft_printf("|%0+-\'*.*hhu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2658");
	ret1 = fprintf(fppres, "|%0+-\'*.*hu|\n", width, precision, var);
	ft_printf("#2658");
	ret2 = ft_printf("|%0+-\'*.*hu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2659");
	ret1 = fprintf(fppres, "|%0+-\'*.*lu|\n", width, precision, var);
	ft_printf("#2659");
	ret2 = ft_printf("|%0+-\'*.*lu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2660");
	ret1 = fprintf(fppres, "|%0+-\'*.*llu|\n", width, precision, var);
	ft_printf("#2660");
	ret2 = ft_printf("|%0+-\'*.*llu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2661");
	ret1 = fprintf(fppres, "|%0+-\'*.*ju|\n", width, precision, var);
	ft_printf("#2661");
	ret2 = ft_printf("|%0+-\'*.*ju|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2662");
	ret1 = fprintf(fppres, "|%0+-\'*.*zu|\n", width, precision, var);
	ft_printf("#2662");
	ret2 = ft_printf("|%0+-\'*.*zu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2663");
	ret1 = fprintf(fppres, "|%0+-\'*.*u|\n", width, precision, var);
	ft_printf("#2663");
	ret2 = ft_printf("|%0+-\'*.*u|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2664");
	ret1 = fprintf(fppres, "|%0+-\'*.*f|\n", width, precision, var);
	ft_printf("#2664");
	ret2 = ft_printf("|%0+-\'*.*f|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2665");
	ret1 = fprintf(fppres, "|%0+-\'*.*hhf|\n", width, precision, var);
	ft_printf("#2665");
	ret2 = ft_printf("|%0+-\'*.*hhf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2666");
	ret1 = fprintf(fppres, "|%0+-\'*.*hf|\n", width, precision, var);
	ft_printf("#2666");
	ret2 = ft_printf("|%0+-\'*.*hf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2667");
	ret1 = fprintf(fppres, "|%0+-\'*.*lf|\n", width, precision, var);
	ft_printf("#2667");
	ret2 = ft_printf("|%0+-\'*.*lf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2668");
	ret1 = fprintf(fppres, "|%0+-\'*.*llf|\n", width, precision, var);
	ft_printf("#2668");
	ret2 = ft_printf("|%0+-\'*.*llf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2669");
	ret1 = fprintf(fppres, "|%0+-\'*.*jf|\n", width, precision, var);
	ft_printf("#2669");
	ret2 = ft_printf("|%0+-\'*.*jf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2670");
	ret1 = fprintf(fppres, "|%0+-\'*.*zf|\n", width, precision, var);
	ft_printf("#2670");
	ret2 = ft_printf("|%0+-\'*.*zf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2671");
	ret1 = fprintf(fppres, "|%0+-\'*.*f|\n", width, precision, var);
	ft_printf("#2671");
	ret2 = ft_printf("|%0+-\'*.*f|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2672");
	ret1 = fprintf(fppres, "|%0+-\'*.*F|\n", width, precision, var);
	ft_printf("#2672");
	ret2 = ft_printf("|%0+-\'*.*F|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2673");
	ret1 = fprintf(fppres, "|%0+-\'*.*hhF|\n", width, precision, var);
	ft_printf("#2673");
	ret2 = ft_printf("|%0+-\'*.*hhF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2674");
	ret1 = fprintf(fppres, "|%0+-\'*.*hF|\n", width, precision, var);
	ft_printf("#2674");
	ret2 = ft_printf("|%0+-\'*.*hF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2675");
	ret1 = fprintf(fppres, "|%0+-\'*.*lF|\n", width, precision, var);
	ft_printf("#2675");
	ret2 = ft_printf("|%0+-\'*.*lF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2676");
	ret1 = fprintf(fppres, "|%0+-\'*.*llF|\n", width, precision, var);
	ft_printf("#2676");
	ret2 = ft_printf("|%0+-\'*.*llF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2677");
	ret1 = fprintf(fppres, "|%0+-\'*.*jF|\n", width, precision, var);
	ft_printf("#2677");
	ret2 = ft_printf("|%0+-\'*.*jF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2678");
	ret1 = fprintf(fppres, "|%0+-\'*.*zF|\n", width, precision, var);
	ft_printf("#2678");
	ret2 = ft_printf("|%0+-\'*.*zF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2679");
	ret1 = fprintf(fppres, "|%0+-\'*.*F|\n", width, precision, var);
	ft_printf("#2679");
	ret2 = ft_printf("|%0+-\'*.*F|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2680");
	ret1 = fprintf(fppres, "|%0+-\'*.* |\n", width, precision, var);
	ft_printf("#2680");
	ret2 = ft_printf("|%0+-\'*.* |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2681");
	ret1 = fprintf(fppres, "|%0+-\'*.*hh |\n", width, precision, var);
	ft_printf("#2681");
	ret2 = ft_printf("|%0+-\'*.*hh |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2682");
	ret1 = fprintf(fppres, "|%0+-\'*.*h |\n", width, precision, var);
	ft_printf("#2682");
	ret2 = ft_printf("|%0+-\'*.*h |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2683");
	ret1 = fprintf(fppres, "|%0+-\'*.*l |\n", width, precision, var);
	ft_printf("#2683");
	ret2 = ft_printf("|%0+-\'*.*l |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2684");
	ret1 = fprintf(fppres, "|%0+-\'*.*ll |\n", width, precision, var);
	ft_printf("#2684");
	ret2 = ft_printf("|%0+-\'*.*ll |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2685");
	ret1 = fprintf(fppres, "|%0+-\'*.*j |\n", width, precision, var);
	ft_printf("#2685");
	ret2 = ft_printf("|%0+-\'*.*j |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2686");
	ret1 = fprintf(fppres, "|%0+-\'*.*z |\n", width, precision, var);
	ft_printf("#2686");
	ret2 = ft_printf("|%0+-\'*.*z |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2687");
	ret1 = fprintf(fppres, "|%0+-\'*.* |\n", width, precision, var);
	ft_printf("#2687");
	ret2 = ft_printf("|%0+-\'*.* |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2688");
	ret1 = fprintf(fppres, "|%#\'*.*d|\n", width, precision, var);
	ft_printf("#2688");
	ret2 = ft_printf("|%#\'*.*d|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2689");
	ret1 = fprintf(fppres, "|%#\'*.*hhd|\n", width, precision, var);
	ft_printf("#2689");
	ret2 = ft_printf("|%#\'*.*hhd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2690");
	ret1 = fprintf(fppres, "|%#\'*.*hd|\n", width, precision, var);
	ft_printf("#2690");
	ret2 = ft_printf("|%#\'*.*hd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2691");
	ret1 = fprintf(fppres, "|%#\'*.*ld|\n", width, precision, var);
	ft_printf("#2691");
	ret2 = ft_printf("|%#\'*.*ld|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2692");
	ret1 = fprintf(fppres, "|%#\'*.*lld|\n", width, precision, var);
	ft_printf("#2692");
	ret2 = ft_printf("|%#\'*.*lld|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2693");
	ret1 = fprintf(fppres, "|%#\'*.*jd|\n", width, precision, var);
	ft_printf("#2693");
	ret2 = ft_printf("|%#\'*.*jd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2694");
	ret1 = fprintf(fppres, "|%#\'*.*zd|\n", width, precision, var);
	ft_printf("#2694");
	ret2 = ft_printf("|%#\'*.*zd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2695");
	ret1 = fprintf(fppres, "|%#\'*.*d|\n", width, precision, var);
	ft_printf("#2695");
	ret2 = ft_printf("|%#\'*.*d|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2696");
	ret1 = fprintf(fppres, "|%#\'*.*i|\n", width, precision, var);
	ft_printf("#2696");
	ret2 = ft_printf("|%#\'*.*i|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2697");
	ret1 = fprintf(fppres, "|%#\'*.*hhi|\n", width, precision, var);
	ft_printf("#2697");
	ret2 = ft_printf("|%#\'*.*hhi|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2698");
	ret1 = fprintf(fppres, "|%#\'*.*hi|\n", width, precision, var);
	ft_printf("#2698");
	ret2 = ft_printf("|%#\'*.*hi|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2699");
	ret1 = fprintf(fppres, "|%#\'*.*li|\n", width, precision, var);
	ft_printf("#2699");
	ret2 = ft_printf("|%#\'*.*li|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2700");
	ret1 = fprintf(fppres, "|%#\'*.*lli|\n", width, precision, var);
	ft_printf("#2700");
	ret2 = ft_printf("|%#\'*.*lli|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2701");
	ret1 = fprintf(fppres, "|%#\'*.*ji|\n", width, precision, var);
	ft_printf("#2701");
	ret2 = ft_printf("|%#\'*.*ji|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2702");
	ret1 = fprintf(fppres, "|%#\'*.*zi|\n", width, precision, var);
	ft_printf("#2702");
	ret2 = ft_printf("|%#\'*.*zi|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2703");
	ret1 = fprintf(fppres, "|%#\'*.*i|\n", width, precision, var);
	ft_printf("#2703");
	ret2 = ft_printf("|%#\'*.*i|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2704");
	ret1 = fprintf(fppres, "|%#\'*.*u|\n", width, precision, var);
	ft_printf("#2704");
	ret2 = ft_printf("|%#\'*.*u|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2705");
	ret1 = fprintf(fppres, "|%#\'*.*hhu|\n", width, precision, var);
	ft_printf("#2705");
	ret2 = ft_printf("|%#\'*.*hhu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2706");
	ret1 = fprintf(fppres, "|%#\'*.*hu|\n", width, precision, var);
	ft_printf("#2706");
	ret2 = ft_printf("|%#\'*.*hu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2707");
	ret1 = fprintf(fppres, "|%#\'*.*lu|\n", width, precision, var);
	ft_printf("#2707");
	ret2 = ft_printf("|%#\'*.*lu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2708");
	ret1 = fprintf(fppres, "|%#\'*.*llu|\n", width, precision, var);
	ft_printf("#2708");
	ret2 = ft_printf("|%#\'*.*llu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2709");
	ret1 = fprintf(fppres, "|%#\'*.*ju|\n", width, precision, var);
	ft_printf("#2709");
	ret2 = ft_printf("|%#\'*.*ju|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2710");
	ret1 = fprintf(fppres, "|%#\'*.*zu|\n", width, precision, var);
	ft_printf("#2710");
	ret2 = ft_printf("|%#\'*.*zu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2711");
	ret1 = fprintf(fppres, "|%#\'*.*u|\n", width, precision, var);
	ft_printf("#2711");
	ret2 = ft_printf("|%#\'*.*u|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2712");
	ret1 = fprintf(fppres, "|%#\'*.*f|\n", width, precision, var);
	ft_printf("#2712");
	ret2 = ft_printf("|%#\'*.*f|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2713");
	ret1 = fprintf(fppres, "|%#\'*.*hhf|\n", width, precision, var);
	ft_printf("#2713");
	ret2 = ft_printf("|%#\'*.*hhf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2714");
	ret1 = fprintf(fppres, "|%#\'*.*hf|\n", width, precision, var);
	ft_printf("#2714");
	ret2 = ft_printf("|%#\'*.*hf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2715");
	ret1 = fprintf(fppres, "|%#\'*.*lf|\n", width, precision, var);
	ft_printf("#2715");
	ret2 = ft_printf("|%#\'*.*lf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2716");
	ret1 = fprintf(fppres, "|%#\'*.*llf|\n", width, precision, var);
	ft_printf("#2716");
	ret2 = ft_printf("|%#\'*.*llf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2717");
	ret1 = fprintf(fppres, "|%#\'*.*jf|\n", width, precision, var);
	ft_printf("#2717");
	ret2 = ft_printf("|%#\'*.*jf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2718");
	ret1 = fprintf(fppres, "|%#\'*.*zf|\n", width, precision, var);
	ft_printf("#2718");
	ret2 = ft_printf("|%#\'*.*zf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2719");
	ret1 = fprintf(fppres, "|%#\'*.*f|\n", width, precision, var);
	ft_printf("#2719");
	ret2 = ft_printf("|%#\'*.*f|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2720");
	ret1 = fprintf(fppres, "|%#\'*.*F|\n", width, precision, var);
	ft_printf("#2720");
	ret2 = ft_printf("|%#\'*.*F|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2721");
	ret1 = fprintf(fppres, "|%#\'*.*hhF|\n", width, precision, var);
	ft_printf("#2721");
	ret2 = ft_printf("|%#\'*.*hhF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2722");
	ret1 = fprintf(fppres, "|%#\'*.*hF|\n", width, precision, var);
	ft_printf("#2722");
	ret2 = ft_printf("|%#\'*.*hF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2723");
	ret1 = fprintf(fppres, "|%#\'*.*lF|\n", width, precision, var);
	ft_printf("#2723");
	ret2 = ft_printf("|%#\'*.*lF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2724");
	ret1 = fprintf(fppres, "|%#\'*.*llF|\n", width, precision, var);
	ft_printf("#2724");
	ret2 = ft_printf("|%#\'*.*llF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2725");
	ret1 = fprintf(fppres, "|%#\'*.*jF|\n", width, precision, var);
	ft_printf("#2725");
	ret2 = ft_printf("|%#\'*.*jF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2726");
	ret1 = fprintf(fppres, "|%#\'*.*zF|\n", width, precision, var);
	ft_printf("#2726");
	ret2 = ft_printf("|%#\'*.*zF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2727");
	ret1 = fprintf(fppres, "|%#\'*.*F|\n", width, precision, var);
	ft_printf("#2727");
	ret2 = ft_printf("|%#\'*.*F|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2728");
	ret1 = fprintf(fppres, "|%#\'*.* |\n", width, precision, var);
	ft_printf("#2728");
	ret2 = ft_printf("|%#\'*.* |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2729");
	ret1 = fprintf(fppres, "|%#\'*.*hh |\n", width, precision, var);
	ft_printf("#2729");
	ret2 = ft_printf("|%#\'*.*hh |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2730");
	ret1 = fprintf(fppres, "|%#\'*.*h |\n", width, precision, var);
	ft_printf("#2730");
	ret2 = ft_printf("|%#\'*.*h |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2731");
	ret1 = fprintf(fppres, "|%#\'*.*l |\n", width, precision, var);
	ft_printf("#2731");
	ret2 = ft_printf("|%#\'*.*l |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2732");
	ret1 = fprintf(fppres, "|%#\'*.*ll |\n", width, precision, var);
	ft_printf("#2732");
	ret2 = ft_printf("|%#\'*.*ll |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2733");
	ret1 = fprintf(fppres, "|%#\'*.*j |\n", width, precision, var);
	ft_printf("#2733");
	ret2 = ft_printf("|%#\'*.*j |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2734");
	ret1 = fprintf(fppres, "|%#\'*.*z |\n", width, precision, var);
	ft_printf("#2734");
	ret2 = ft_printf("|%#\'*.*z |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2735");
	ret1 = fprintf(fppres, "|%#\'*.* |\n", width, precision, var);
	ft_printf("#2735");
	ret2 = ft_printf("|%#\'*.* |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2736");
	ret1 = fprintf(fppres, "|%0#\'*.*d|\n", width, precision, var);
	ft_printf("#2736");
	ret2 = ft_printf("|%0#\'*.*d|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2737");
	ret1 = fprintf(fppres, "|%0#\'*.*hhd|\n", width, precision, var);
	ft_printf("#2737");
	ret2 = ft_printf("|%0#\'*.*hhd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2738");
	ret1 = fprintf(fppres, "|%0#\'*.*hd|\n", width, precision, var);
	ft_printf("#2738");
	ret2 = ft_printf("|%0#\'*.*hd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2739");
	ret1 = fprintf(fppres, "|%0#\'*.*ld|\n", width, precision, var);
	ft_printf("#2739");
	ret2 = ft_printf("|%0#\'*.*ld|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2740");
	ret1 = fprintf(fppres, "|%0#\'*.*lld|\n", width, precision, var);
	ft_printf("#2740");
	ret2 = ft_printf("|%0#\'*.*lld|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2741");
	ret1 = fprintf(fppres, "|%0#\'*.*jd|\n", width, precision, var);
	ft_printf("#2741");
	ret2 = ft_printf("|%0#\'*.*jd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2742");
	ret1 = fprintf(fppres, "|%0#\'*.*zd|\n", width, precision, var);
	ft_printf("#2742");
	ret2 = ft_printf("|%0#\'*.*zd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2743");
	ret1 = fprintf(fppres, "|%0#\'*.*d|\n", width, precision, var);
	ft_printf("#2743");
	ret2 = ft_printf("|%0#\'*.*d|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2744");
	ret1 = fprintf(fppres, "|%0#\'*.*i|\n", width, precision, var);
	ft_printf("#2744");
	ret2 = ft_printf("|%0#\'*.*i|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2745");
	ret1 = fprintf(fppres, "|%0#\'*.*hhi|\n", width, precision, var);
	ft_printf("#2745");
	ret2 = ft_printf("|%0#\'*.*hhi|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2746");
	ret1 = fprintf(fppres, "|%0#\'*.*hi|\n", width, precision, var);
	ft_printf("#2746");
	ret2 = ft_printf("|%0#\'*.*hi|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2747");
	ret1 = fprintf(fppres, "|%0#\'*.*li|\n", width, precision, var);
	ft_printf("#2747");
	ret2 = ft_printf("|%0#\'*.*li|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2748");
	ret1 = fprintf(fppres, "|%0#\'*.*lli|\n", width, precision, var);
	ft_printf("#2748");
	ret2 = ft_printf("|%0#\'*.*lli|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2749");
	ret1 = fprintf(fppres, "|%0#\'*.*ji|\n", width, precision, var);
	ft_printf("#2749");
	ret2 = ft_printf("|%0#\'*.*ji|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2750");
	ret1 = fprintf(fppres, "|%0#\'*.*zi|\n", width, precision, var);
	ft_printf("#2750");
	ret2 = ft_printf("|%0#\'*.*zi|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2751");
	ret1 = fprintf(fppres, "|%0#\'*.*i|\n", width, precision, var);
	ft_printf("#2751");
	ret2 = ft_printf("|%0#\'*.*i|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2752");
	ret1 = fprintf(fppres, "|%0#\'*.*u|\n", width, precision, var);
	ft_printf("#2752");
	ret2 = ft_printf("|%0#\'*.*u|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2753");
	ret1 = fprintf(fppres, "|%0#\'*.*hhu|\n", width, precision, var);
	ft_printf("#2753");
	ret2 = ft_printf("|%0#\'*.*hhu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2754");
	ret1 = fprintf(fppres, "|%0#\'*.*hu|\n", width, precision, var);
	ft_printf("#2754");
	ret2 = ft_printf("|%0#\'*.*hu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2755");
	ret1 = fprintf(fppres, "|%0#\'*.*lu|\n", width, precision, var);
	ft_printf("#2755");
	ret2 = ft_printf("|%0#\'*.*lu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2756");
	ret1 = fprintf(fppres, "|%0#\'*.*llu|\n", width, precision, var);
	ft_printf("#2756");
	ret2 = ft_printf("|%0#\'*.*llu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2757");
	ret1 = fprintf(fppres, "|%0#\'*.*ju|\n", width, precision, var);
	ft_printf("#2757");
	ret2 = ft_printf("|%0#\'*.*ju|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2758");
	ret1 = fprintf(fppres, "|%0#\'*.*zu|\n", width, precision, var);
	ft_printf("#2758");
	ret2 = ft_printf("|%0#\'*.*zu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2759");
	ret1 = fprintf(fppres, "|%0#\'*.*u|\n", width, precision, var);
	ft_printf("#2759");
	ret2 = ft_printf("|%0#\'*.*u|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2760");
	ret1 = fprintf(fppres, "|%0#\'*.*f|\n", width, precision, var);
	ft_printf("#2760");
	ret2 = ft_printf("|%0#\'*.*f|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2761");
	ret1 = fprintf(fppres, "|%0#\'*.*hhf|\n", width, precision, var);
	ft_printf("#2761");
	ret2 = ft_printf("|%0#\'*.*hhf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2762");
	ret1 = fprintf(fppres, "|%0#\'*.*hf|\n", width, precision, var);
	ft_printf("#2762");
	ret2 = ft_printf("|%0#\'*.*hf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2763");
	ret1 = fprintf(fppres, "|%0#\'*.*lf|\n", width, precision, var);
	ft_printf("#2763");
	ret2 = ft_printf("|%0#\'*.*lf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2764");
	ret1 = fprintf(fppres, "|%0#\'*.*llf|\n", width, precision, var);
	ft_printf("#2764");
	ret2 = ft_printf("|%0#\'*.*llf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2765");
	ret1 = fprintf(fppres, "|%0#\'*.*jf|\n", width, precision, var);
	ft_printf("#2765");
	ret2 = ft_printf("|%0#\'*.*jf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2766");
	ret1 = fprintf(fppres, "|%0#\'*.*zf|\n", width, precision, var);
	ft_printf("#2766");
	ret2 = ft_printf("|%0#\'*.*zf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2767");
	ret1 = fprintf(fppres, "|%0#\'*.*f|\n", width, precision, var);
	ft_printf("#2767");
	ret2 = ft_printf("|%0#\'*.*f|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2768");
	ret1 = fprintf(fppres, "|%0#\'*.*F|\n", width, precision, var);
	ft_printf("#2768");
	ret2 = ft_printf("|%0#\'*.*F|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2769");
	ret1 = fprintf(fppres, "|%0#\'*.*hhF|\n", width, precision, var);
	ft_printf("#2769");
	ret2 = ft_printf("|%0#\'*.*hhF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2770");
	ret1 = fprintf(fppres, "|%0#\'*.*hF|\n", width, precision, var);
	ft_printf("#2770");
	ret2 = ft_printf("|%0#\'*.*hF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2771");
	ret1 = fprintf(fppres, "|%0#\'*.*lF|\n", width, precision, var);
	ft_printf("#2771");
	ret2 = ft_printf("|%0#\'*.*lF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2772");
	ret1 = fprintf(fppres, "|%0#\'*.*llF|\n", width, precision, var);
	ft_printf("#2772");
	ret2 = ft_printf("|%0#\'*.*llF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2773");
	ret1 = fprintf(fppres, "|%0#\'*.*jF|\n", width, precision, var);
	ft_printf("#2773");
	ret2 = ft_printf("|%0#\'*.*jF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2774");
	ret1 = fprintf(fppres, "|%0#\'*.*zF|\n", width, precision, var);
	ft_printf("#2774");
	ret2 = ft_printf("|%0#\'*.*zF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2775");
	ret1 = fprintf(fppres, "|%0#\'*.*F|\n", width, precision, var);
	ft_printf("#2775");
	ret2 = ft_printf("|%0#\'*.*F|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2776");
	ret1 = fprintf(fppres, "|%0#\'*.* |\n", width, precision, var);
	ft_printf("#2776");
	ret2 = ft_printf("|%0#\'*.* |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2777");
	ret1 = fprintf(fppres, "|%0#\'*.*hh |\n", width, precision, var);
	ft_printf("#2777");
	ret2 = ft_printf("|%0#\'*.*hh |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2778");
	ret1 = fprintf(fppres, "|%0#\'*.*h |\n", width, precision, var);
	ft_printf("#2778");
	ret2 = ft_printf("|%0#\'*.*h |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2779");
	ret1 = fprintf(fppres, "|%0#\'*.*l |\n", width, precision, var);
	ft_printf("#2779");
	ret2 = ft_printf("|%0#\'*.*l |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2780");
	ret1 = fprintf(fppres, "|%0#\'*.*ll |\n", width, precision, var);
	ft_printf("#2780");
	ret2 = ft_printf("|%0#\'*.*ll |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2781");
	ret1 = fprintf(fppres, "|%0#\'*.*j |\n", width, precision, var);
	ft_printf("#2781");
	ret2 = ft_printf("|%0#\'*.*j |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2782");
	ret1 = fprintf(fppres, "|%0#\'*.*z |\n", width, precision, var);
	ft_printf("#2782");
	ret2 = ft_printf("|%0#\'*.*z |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2783");
	ret1 = fprintf(fppres, "|%0#\'*.* |\n", width, precision, var);
	ft_printf("#2783");
	ret2 = ft_printf("|%0#\'*.* |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2784");
	ret1 = fprintf(fppres, "|%+#\'*.*d|\n", width, precision, var);
	ft_printf("#2784");
	ret2 = ft_printf("|%+#\'*.*d|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2785");
	ret1 = fprintf(fppres, "|%+#\'*.*hhd|\n", width, precision, var);
	ft_printf("#2785");
	ret2 = ft_printf("|%+#\'*.*hhd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2786");
	ret1 = fprintf(fppres, "|%+#\'*.*hd|\n", width, precision, var);
	ft_printf("#2786");
	ret2 = ft_printf("|%+#\'*.*hd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2787");
	ret1 = fprintf(fppres, "|%+#\'*.*ld|\n", width, precision, var);
	ft_printf("#2787");
	ret2 = ft_printf("|%+#\'*.*ld|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2788");
	ret1 = fprintf(fppres, "|%+#\'*.*lld|\n", width, precision, var);
	ft_printf("#2788");
	ret2 = ft_printf("|%+#\'*.*lld|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2789");
	ret1 = fprintf(fppres, "|%+#\'*.*jd|\n", width, precision, var);
	ft_printf("#2789");
	ret2 = ft_printf("|%+#\'*.*jd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2790");
	ret1 = fprintf(fppres, "|%+#\'*.*zd|\n", width, precision, var);
	ft_printf("#2790");
	ret2 = ft_printf("|%+#\'*.*zd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2791");
	ret1 = fprintf(fppres, "|%+#\'*.*d|\n", width, precision, var);
	ft_printf("#2791");
	ret2 = ft_printf("|%+#\'*.*d|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2792");
	ret1 = fprintf(fppres, "|%+#\'*.*i|\n", width, precision, var);
	ft_printf("#2792");
	ret2 = ft_printf("|%+#\'*.*i|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2793");
	ret1 = fprintf(fppres, "|%+#\'*.*hhi|\n", width, precision, var);
	ft_printf("#2793");
	ret2 = ft_printf("|%+#\'*.*hhi|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2794");
	ret1 = fprintf(fppres, "|%+#\'*.*hi|\n", width, precision, var);
	ft_printf("#2794");
	ret2 = ft_printf("|%+#\'*.*hi|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2795");
	ret1 = fprintf(fppres, "|%+#\'*.*li|\n", width, precision, var);
	ft_printf("#2795");
	ret2 = ft_printf("|%+#\'*.*li|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2796");
	ret1 = fprintf(fppres, "|%+#\'*.*lli|\n", width, precision, var);
	ft_printf("#2796");
	ret2 = ft_printf("|%+#\'*.*lli|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2797");
	ret1 = fprintf(fppres, "|%+#\'*.*ji|\n", width, precision, var);
	ft_printf("#2797");
	ret2 = ft_printf("|%+#\'*.*ji|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2798");
	ret1 = fprintf(fppres, "|%+#\'*.*zi|\n", width, precision, var);
	ft_printf("#2798");
	ret2 = ft_printf("|%+#\'*.*zi|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2799");
	ret1 = fprintf(fppres, "|%+#\'*.*i|\n", width, precision, var);
	ft_printf("#2799");
	ret2 = ft_printf("|%+#\'*.*i|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2800");
	ret1 = fprintf(fppres, "|%+#\'*.*u|\n", width, precision, var);
	ft_printf("#2800");
	ret2 = ft_printf("|%+#\'*.*u|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2801");
	ret1 = fprintf(fppres, "|%+#\'*.*hhu|\n", width, precision, var);
	ft_printf("#2801");
	ret2 = ft_printf("|%+#\'*.*hhu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2802");
	ret1 = fprintf(fppres, "|%+#\'*.*hu|\n", width, precision, var);
	ft_printf("#2802");
	ret2 = ft_printf("|%+#\'*.*hu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2803");
	ret1 = fprintf(fppres, "|%+#\'*.*lu|\n", width, precision, var);
	ft_printf("#2803");
	ret2 = ft_printf("|%+#\'*.*lu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2804");
	ret1 = fprintf(fppres, "|%+#\'*.*llu|\n", width, precision, var);
	ft_printf("#2804");
	ret2 = ft_printf("|%+#\'*.*llu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2805");
	ret1 = fprintf(fppres, "|%+#\'*.*ju|\n", width, precision, var);
	ft_printf("#2805");
	ret2 = ft_printf("|%+#\'*.*ju|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2806");
	ret1 = fprintf(fppres, "|%+#\'*.*zu|\n", width, precision, var);
	ft_printf("#2806");
	ret2 = ft_printf("|%+#\'*.*zu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2807");
	ret1 = fprintf(fppres, "|%+#\'*.*u|\n", width, precision, var);
	ft_printf("#2807");
	ret2 = ft_printf("|%+#\'*.*u|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2808");
	ret1 = fprintf(fppres, "|%+#\'*.*f|\n", width, precision, var);
	ft_printf("#2808");
	ret2 = ft_printf("|%+#\'*.*f|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2809");
	ret1 = fprintf(fppres, "|%+#\'*.*hhf|\n", width, precision, var);
	ft_printf("#2809");
	ret2 = ft_printf("|%+#\'*.*hhf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2810");
	ret1 = fprintf(fppres, "|%+#\'*.*hf|\n", width, precision, var);
	ft_printf("#2810");
	ret2 = ft_printf("|%+#\'*.*hf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2811");
	ret1 = fprintf(fppres, "|%+#\'*.*lf|\n", width, precision, var);
	ft_printf("#2811");
	ret2 = ft_printf("|%+#\'*.*lf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2812");
	ret1 = fprintf(fppres, "|%+#\'*.*llf|\n", width, precision, var);
	ft_printf("#2812");
	ret2 = ft_printf("|%+#\'*.*llf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2813");
	ret1 = fprintf(fppres, "|%+#\'*.*jf|\n", width, precision, var);
	ft_printf("#2813");
	ret2 = ft_printf("|%+#\'*.*jf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2814");
	ret1 = fprintf(fppres, "|%+#\'*.*zf|\n", width, precision, var);
	ft_printf("#2814");
	ret2 = ft_printf("|%+#\'*.*zf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2815");
	ret1 = fprintf(fppres, "|%+#\'*.*f|\n", width, precision, var);
	ft_printf("#2815");
	ret2 = ft_printf("|%+#\'*.*f|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2816");
	ret1 = fprintf(fppres, "|%+#\'*.*F|\n", width, precision, var);
	ft_printf("#2816");
	ret2 = ft_printf("|%+#\'*.*F|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2817");
	ret1 = fprintf(fppres, "|%+#\'*.*hhF|\n", width, precision, var);
	ft_printf("#2817");
	ret2 = ft_printf("|%+#\'*.*hhF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2818");
	ret1 = fprintf(fppres, "|%+#\'*.*hF|\n", width, precision, var);
	ft_printf("#2818");
	ret2 = ft_printf("|%+#\'*.*hF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2819");
	ret1 = fprintf(fppres, "|%+#\'*.*lF|\n", width, precision, var);
	ft_printf("#2819");
	ret2 = ft_printf("|%+#\'*.*lF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2820");
	ret1 = fprintf(fppres, "|%+#\'*.*llF|\n", width, precision, var);
	ft_printf("#2820");
	ret2 = ft_printf("|%+#\'*.*llF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2821");
	ret1 = fprintf(fppres, "|%+#\'*.*jF|\n", width, precision, var);
	ft_printf("#2821");
	ret2 = ft_printf("|%+#\'*.*jF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2822");
	ret1 = fprintf(fppres, "|%+#\'*.*zF|\n", width, precision, var);
	ft_printf("#2822");
	ret2 = ft_printf("|%+#\'*.*zF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2823");
	ret1 = fprintf(fppres, "|%+#\'*.*F|\n", width, precision, var);
	ft_printf("#2823");
	ret2 = ft_printf("|%+#\'*.*F|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2824");
	ret1 = fprintf(fppres, "|%+#\'*.* |\n", width, precision, var);
	ft_printf("#2824");
	ret2 = ft_printf("|%+#\'*.* |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2825");
	ret1 = fprintf(fppres, "|%+#\'*.*hh |\n", width, precision, var);
	ft_printf("#2825");
	ret2 = ft_printf("|%+#\'*.*hh |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2826");
	ret1 = fprintf(fppres, "|%+#\'*.*h |\n", width, precision, var);
	ft_printf("#2826");
	ret2 = ft_printf("|%+#\'*.*h |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2827");
	ret1 = fprintf(fppres, "|%+#\'*.*l |\n", width, precision, var);
	ft_printf("#2827");
	ret2 = ft_printf("|%+#\'*.*l |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2828");
	ret1 = fprintf(fppres, "|%+#\'*.*ll |\n", width, precision, var);
	ft_printf("#2828");
	ret2 = ft_printf("|%+#\'*.*ll |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2829");
	ret1 = fprintf(fppres, "|%+#\'*.*j |\n", width, precision, var);
	ft_printf("#2829");
	ret2 = ft_printf("|%+#\'*.*j |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2830");
	ret1 = fprintf(fppres, "|%+#\'*.*z |\n", width, precision, var);
	ft_printf("#2830");
	ret2 = ft_printf("|%+#\'*.*z |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2831");
	ret1 = fprintf(fppres, "|%+#\'*.* |\n", width, precision, var);
	ft_printf("#2831");
	ret2 = ft_printf("|%+#\'*.* |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2832");
	ret1 = fprintf(fppres, "|%0+#\'*.*d|\n", width, precision, var);
	ft_printf("#2832");
	ret2 = ft_printf("|%0+#\'*.*d|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2833");
	ret1 = fprintf(fppres, "|%0+#\'*.*hhd|\n", width, precision, var);
	ft_printf("#2833");
	ret2 = ft_printf("|%0+#\'*.*hhd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2834");
	ret1 = fprintf(fppres, "|%0+#\'*.*hd|\n", width, precision, var);
	ft_printf("#2834");
	ret2 = ft_printf("|%0+#\'*.*hd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2835");
	ret1 = fprintf(fppres, "|%0+#\'*.*ld|\n", width, precision, var);
	ft_printf("#2835");
	ret2 = ft_printf("|%0+#\'*.*ld|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2836");
	ret1 = fprintf(fppres, "|%0+#\'*.*lld|\n", width, precision, var);
	ft_printf("#2836");
	ret2 = ft_printf("|%0+#\'*.*lld|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2837");
	ret1 = fprintf(fppres, "|%0+#\'*.*jd|\n", width, precision, var);
	ft_printf("#2837");
	ret2 = ft_printf("|%0+#\'*.*jd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2838");
	ret1 = fprintf(fppres, "|%0+#\'*.*zd|\n", width, precision, var);
	ft_printf("#2838");
	ret2 = ft_printf("|%0+#\'*.*zd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2839");
	ret1 = fprintf(fppres, "|%0+#\'*.*d|\n", width, precision, var);
	ft_printf("#2839");
	ret2 = ft_printf("|%0+#\'*.*d|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2840");
	ret1 = fprintf(fppres, "|%0+#\'*.*i|\n", width, precision, var);
	ft_printf("#2840");
	ret2 = ft_printf("|%0+#\'*.*i|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2841");
	ret1 = fprintf(fppres, "|%0+#\'*.*hhi|\n", width, precision, var);
	ft_printf("#2841");
	ret2 = ft_printf("|%0+#\'*.*hhi|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2842");
	ret1 = fprintf(fppres, "|%0+#\'*.*hi|\n", width, precision, var);
	ft_printf("#2842");
	ret2 = ft_printf("|%0+#\'*.*hi|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2843");
	ret1 = fprintf(fppres, "|%0+#\'*.*li|\n", width, precision, var);
	ft_printf("#2843");
	ret2 = ft_printf("|%0+#\'*.*li|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2844");
	ret1 = fprintf(fppres, "|%0+#\'*.*lli|\n", width, precision, var);
	ft_printf("#2844");
	ret2 = ft_printf("|%0+#\'*.*lli|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2845");
	ret1 = fprintf(fppres, "|%0+#\'*.*ji|\n", width, precision, var);
	ft_printf("#2845");
	ret2 = ft_printf("|%0+#\'*.*ji|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2846");
	ret1 = fprintf(fppres, "|%0+#\'*.*zi|\n", width, precision, var);
	ft_printf("#2846");
	ret2 = ft_printf("|%0+#\'*.*zi|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2847");
	ret1 = fprintf(fppres, "|%0+#\'*.*i|\n", width, precision, var);
	ft_printf("#2847");
	ret2 = ft_printf("|%0+#\'*.*i|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2848");
	ret1 = fprintf(fppres, "|%0+#\'*.*u|\n", width, precision, var);
	ft_printf("#2848");
	ret2 = ft_printf("|%0+#\'*.*u|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2849");
	ret1 = fprintf(fppres, "|%0+#\'*.*hhu|\n", width, precision, var);
	ft_printf("#2849");
	ret2 = ft_printf("|%0+#\'*.*hhu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2850");
	ret1 = fprintf(fppres, "|%0+#\'*.*hu|\n", width, precision, var);
	ft_printf("#2850");
	ret2 = ft_printf("|%0+#\'*.*hu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2851");
	ret1 = fprintf(fppres, "|%0+#\'*.*lu|\n", width, precision, var);
	ft_printf("#2851");
	ret2 = ft_printf("|%0+#\'*.*lu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2852");
	ret1 = fprintf(fppres, "|%0+#\'*.*llu|\n", width, precision, var);
	ft_printf("#2852");
	ret2 = ft_printf("|%0+#\'*.*llu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2853");
	ret1 = fprintf(fppres, "|%0+#\'*.*ju|\n", width, precision, var);
	ft_printf("#2853");
	ret2 = ft_printf("|%0+#\'*.*ju|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2854");
	ret1 = fprintf(fppres, "|%0+#\'*.*zu|\n", width, precision, var);
	ft_printf("#2854");
	ret2 = ft_printf("|%0+#\'*.*zu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2855");
	ret1 = fprintf(fppres, "|%0+#\'*.*u|\n", width, precision, var);
	ft_printf("#2855");
	ret2 = ft_printf("|%0+#\'*.*u|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2856");
	ret1 = fprintf(fppres, "|%0+#\'*.*f|\n", width, precision, var);
	ft_printf("#2856");
	ret2 = ft_printf("|%0+#\'*.*f|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2857");
	ret1 = fprintf(fppres, "|%0+#\'*.*hhf|\n", width, precision, var);
	ft_printf("#2857");
	ret2 = ft_printf("|%0+#\'*.*hhf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2858");
	ret1 = fprintf(fppres, "|%0+#\'*.*hf|\n", width, precision, var);
	ft_printf("#2858");
	ret2 = ft_printf("|%0+#\'*.*hf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2859");
	ret1 = fprintf(fppres, "|%0+#\'*.*lf|\n", width, precision, var);
	ft_printf("#2859");
	ret2 = ft_printf("|%0+#\'*.*lf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2860");
	ret1 = fprintf(fppres, "|%0+#\'*.*llf|\n", width, precision, var);
	ft_printf("#2860");
	ret2 = ft_printf("|%0+#\'*.*llf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2861");
	ret1 = fprintf(fppres, "|%0+#\'*.*jf|\n", width, precision, var);
	ft_printf("#2861");
	ret2 = ft_printf("|%0+#\'*.*jf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2862");
	ret1 = fprintf(fppres, "|%0+#\'*.*zf|\n", width, precision, var);
	ft_printf("#2862");
	ret2 = ft_printf("|%0+#\'*.*zf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2863");
	ret1 = fprintf(fppres, "|%0+#\'*.*f|\n", width, precision, var);
	ft_printf("#2863");
	ret2 = ft_printf("|%0+#\'*.*f|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2864");
	ret1 = fprintf(fppres, "|%0+#\'*.*F|\n", width, precision, var);
	ft_printf("#2864");
	ret2 = ft_printf("|%0+#\'*.*F|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2865");
	ret1 = fprintf(fppres, "|%0+#\'*.*hhF|\n", width, precision, var);
	ft_printf("#2865");
	ret2 = ft_printf("|%0+#\'*.*hhF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2866");
	ret1 = fprintf(fppres, "|%0+#\'*.*hF|\n", width, precision, var);
	ft_printf("#2866");
	ret2 = ft_printf("|%0+#\'*.*hF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2867");
	ret1 = fprintf(fppres, "|%0+#\'*.*lF|\n", width, precision, var);
	ft_printf("#2867");
	ret2 = ft_printf("|%0+#\'*.*lF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2868");
	ret1 = fprintf(fppres, "|%0+#\'*.*llF|\n", width, precision, var);
	ft_printf("#2868");
	ret2 = ft_printf("|%0+#\'*.*llF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2869");
	ret1 = fprintf(fppres, "|%0+#\'*.*jF|\n", width, precision, var);
	ft_printf("#2869");
	ret2 = ft_printf("|%0+#\'*.*jF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2870");
	ret1 = fprintf(fppres, "|%0+#\'*.*zF|\n", width, precision, var);
	ft_printf("#2870");
	ret2 = ft_printf("|%0+#\'*.*zF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2871");
	ret1 = fprintf(fppres, "|%0+#\'*.*F|\n", width, precision, var);
	ft_printf("#2871");
	ret2 = ft_printf("|%0+#\'*.*F|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2872");
	ret1 = fprintf(fppres, "|%0+#\'*.* |\n", width, precision, var);
	ft_printf("#2872");
	ret2 = ft_printf("|%0+#\'*.* |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2873");
	ret1 = fprintf(fppres, "|%0+#\'*.*hh |\n", width, precision, var);
	ft_printf("#2873");
	ret2 = ft_printf("|%0+#\'*.*hh |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2874");
	ret1 = fprintf(fppres, "|%0+#\'*.*h |\n", width, precision, var);
	ft_printf("#2874");
	ret2 = ft_printf("|%0+#\'*.*h |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2875");
	ret1 = fprintf(fppres, "|%0+#\'*.*l |\n", width, precision, var);
	ft_printf("#2875");
	ret2 = ft_printf("|%0+#\'*.*l |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2876");
	ret1 = fprintf(fppres, "|%0+#\'*.*ll |\n", width, precision, var);
	ft_printf("#2876");
	ret2 = ft_printf("|%0+#\'*.*ll |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2877");
	ret1 = fprintf(fppres, "|%0+#\'*.*j |\n", width, precision, var);
	ft_printf("#2877");
	ret2 = ft_printf("|%0+#\'*.*j |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2878");
	ret1 = fprintf(fppres, "|%0+#\'*.*z |\n", width, precision, var);
	ft_printf("#2878");
	ret2 = ft_printf("|%0+#\'*.*z |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2879");
	ret1 = fprintf(fppres, "|%0+#\'*.* |\n", width, precision, var);
	ft_printf("#2879");
	ret2 = ft_printf("|%0+#\'*.* |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2880");
	ret1 = fprintf(fppres, "|%-#\'*.*d|\n", width, precision, var);
	ft_printf("#2880");
	ret2 = ft_printf("|%-#\'*.*d|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2881");
	ret1 = fprintf(fppres, "|%-#\'*.*hhd|\n", width, precision, var);
	ft_printf("#2881");
	ret2 = ft_printf("|%-#\'*.*hhd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2882");
	ret1 = fprintf(fppres, "|%-#\'*.*hd|\n", width, precision, var);
	ft_printf("#2882");
	ret2 = ft_printf("|%-#\'*.*hd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2883");
	ret1 = fprintf(fppres, "|%-#\'*.*ld|\n", width, precision, var);
	ft_printf("#2883");
	ret2 = ft_printf("|%-#\'*.*ld|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2884");
	ret1 = fprintf(fppres, "|%-#\'*.*lld|\n", width, precision, var);
	ft_printf("#2884");
	ret2 = ft_printf("|%-#\'*.*lld|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2885");
	ret1 = fprintf(fppres, "|%-#\'*.*jd|\n", width, precision, var);
	ft_printf("#2885");
	ret2 = ft_printf("|%-#\'*.*jd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2886");
	ret1 = fprintf(fppres, "|%-#\'*.*zd|\n", width, precision, var);
	ft_printf("#2886");
	ret2 = ft_printf("|%-#\'*.*zd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2887");
	ret1 = fprintf(fppres, "|%-#\'*.*d|\n", width, precision, var);
	ft_printf("#2887");
	ret2 = ft_printf("|%-#\'*.*d|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2888");
	ret1 = fprintf(fppres, "|%-#\'*.*i|\n", width, precision, var);
	ft_printf("#2888");
	ret2 = ft_printf("|%-#\'*.*i|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2889");
	ret1 = fprintf(fppres, "|%-#\'*.*hhi|\n", width, precision, var);
	ft_printf("#2889");
	ret2 = ft_printf("|%-#\'*.*hhi|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2890");
	ret1 = fprintf(fppres, "|%-#\'*.*hi|\n", width, precision, var);
	ft_printf("#2890");
	ret2 = ft_printf("|%-#\'*.*hi|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2891");
	ret1 = fprintf(fppres, "|%-#\'*.*li|\n", width, precision, var);
	ft_printf("#2891");
	ret2 = ft_printf("|%-#\'*.*li|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2892");
	ret1 = fprintf(fppres, "|%-#\'*.*lli|\n", width, precision, var);
	ft_printf("#2892");
	ret2 = ft_printf("|%-#\'*.*lli|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2893");
	ret1 = fprintf(fppres, "|%-#\'*.*ji|\n", width, precision, var);
	ft_printf("#2893");
	ret2 = ft_printf("|%-#\'*.*ji|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2894");
	ret1 = fprintf(fppres, "|%-#\'*.*zi|\n", width, precision, var);
	ft_printf("#2894");
	ret2 = ft_printf("|%-#\'*.*zi|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2895");
	ret1 = fprintf(fppres, "|%-#\'*.*i|\n", width, precision, var);
	ft_printf("#2895");
	ret2 = ft_printf("|%-#\'*.*i|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2896");
	ret1 = fprintf(fppres, "|%-#\'*.*u|\n", width, precision, var);
	ft_printf("#2896");
	ret2 = ft_printf("|%-#\'*.*u|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2897");
	ret1 = fprintf(fppres, "|%-#\'*.*hhu|\n", width, precision, var);
	ft_printf("#2897");
	ret2 = ft_printf("|%-#\'*.*hhu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2898");
	ret1 = fprintf(fppres, "|%-#\'*.*hu|\n", width, precision, var);
	ft_printf("#2898");
	ret2 = ft_printf("|%-#\'*.*hu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2899");
	ret1 = fprintf(fppres, "|%-#\'*.*lu|\n", width, precision, var);
	ft_printf("#2899");
	ret2 = ft_printf("|%-#\'*.*lu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2900");
	ret1 = fprintf(fppres, "|%-#\'*.*llu|\n", width, precision, var);
	ft_printf("#2900");
	ret2 = ft_printf("|%-#\'*.*llu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2901");
	ret1 = fprintf(fppres, "|%-#\'*.*ju|\n", width, precision, var);
	ft_printf("#2901");
	ret2 = ft_printf("|%-#\'*.*ju|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2902");
	ret1 = fprintf(fppres, "|%-#\'*.*zu|\n", width, precision, var);
	ft_printf("#2902");
	ret2 = ft_printf("|%-#\'*.*zu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2903");
	ret1 = fprintf(fppres, "|%-#\'*.*u|\n", width, precision, var);
	ft_printf("#2903");
	ret2 = ft_printf("|%-#\'*.*u|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2904");
	ret1 = fprintf(fppres, "|%-#\'*.*f|\n", width, precision, var);
	ft_printf("#2904");
	ret2 = ft_printf("|%-#\'*.*f|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2905");
	ret1 = fprintf(fppres, "|%-#\'*.*hhf|\n", width, precision, var);
	ft_printf("#2905");
	ret2 = ft_printf("|%-#\'*.*hhf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2906");
	ret1 = fprintf(fppres, "|%-#\'*.*hf|\n", width, precision, var);
	ft_printf("#2906");
	ret2 = ft_printf("|%-#\'*.*hf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2907");
	ret1 = fprintf(fppres, "|%-#\'*.*lf|\n", width, precision, var);
	ft_printf("#2907");
	ret2 = ft_printf("|%-#\'*.*lf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2908");
	ret1 = fprintf(fppres, "|%-#\'*.*llf|\n", width, precision, var);
	ft_printf("#2908");
	ret2 = ft_printf("|%-#\'*.*llf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2909");
	ret1 = fprintf(fppres, "|%-#\'*.*jf|\n", width, precision, var);
	ft_printf("#2909");
	ret2 = ft_printf("|%-#\'*.*jf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2910");
	ret1 = fprintf(fppres, "|%-#\'*.*zf|\n", width, precision, var);
	ft_printf("#2910");
	ret2 = ft_printf("|%-#\'*.*zf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2911");
	ret1 = fprintf(fppres, "|%-#\'*.*f|\n", width, precision, var);
	ft_printf("#2911");
	ret2 = ft_printf("|%-#\'*.*f|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2912");
	ret1 = fprintf(fppres, "|%-#\'*.*F|\n", width, precision, var);
	ft_printf("#2912");
	ret2 = ft_printf("|%-#\'*.*F|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2913");
	ret1 = fprintf(fppres, "|%-#\'*.*hhF|\n", width, precision, var);
	ft_printf("#2913");
	ret2 = ft_printf("|%-#\'*.*hhF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2914");
	ret1 = fprintf(fppres, "|%-#\'*.*hF|\n", width, precision, var);
	ft_printf("#2914");
	ret2 = ft_printf("|%-#\'*.*hF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2915");
	ret1 = fprintf(fppres, "|%-#\'*.*lF|\n", width, precision, var);
	ft_printf("#2915");
	ret2 = ft_printf("|%-#\'*.*lF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2916");
	ret1 = fprintf(fppres, "|%-#\'*.*llF|\n", width, precision, var);
	ft_printf("#2916");
	ret2 = ft_printf("|%-#\'*.*llF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2917");
	ret1 = fprintf(fppres, "|%-#\'*.*jF|\n", width, precision, var);
	ft_printf("#2917");
	ret2 = ft_printf("|%-#\'*.*jF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2918");
	ret1 = fprintf(fppres, "|%-#\'*.*zF|\n", width, precision, var);
	ft_printf("#2918");
	ret2 = ft_printf("|%-#\'*.*zF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2919");
	ret1 = fprintf(fppres, "|%-#\'*.*F|\n", width, precision, var);
	ft_printf("#2919");
	ret2 = ft_printf("|%-#\'*.*F|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2920");
	ret1 = fprintf(fppres, "|%-#\'*.* |\n", width, precision, var);
	ft_printf("#2920");
	ret2 = ft_printf("|%-#\'*.* |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2921");
	ret1 = fprintf(fppres, "|%-#\'*.*hh |\n", width, precision, var);
	ft_printf("#2921");
	ret2 = ft_printf("|%-#\'*.*hh |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2922");
	ret1 = fprintf(fppres, "|%-#\'*.*h |\n", width, precision, var);
	ft_printf("#2922");
	ret2 = ft_printf("|%-#\'*.*h |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2923");
	ret1 = fprintf(fppres, "|%-#\'*.*l |\n", width, precision, var);
	ft_printf("#2923");
	ret2 = ft_printf("|%-#\'*.*l |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2924");
	ret1 = fprintf(fppres, "|%-#\'*.*ll |\n", width, precision, var);
	ft_printf("#2924");
	ret2 = ft_printf("|%-#\'*.*ll |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2925");
	ret1 = fprintf(fppres, "|%-#\'*.*j |\n", width, precision, var);
	ft_printf("#2925");
	ret2 = ft_printf("|%-#\'*.*j |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2926");
	ret1 = fprintf(fppres, "|%-#\'*.*z |\n", width, precision, var);
	ft_printf("#2926");
	ret2 = ft_printf("|%-#\'*.*z |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2927");
	ret1 = fprintf(fppres, "|%-#\'*.* |\n", width, precision, var);
	ft_printf("#2927");
	ret2 = ft_printf("|%-#\'*.* |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2928");
	ret1 = fprintf(fppres, "|%0-#\'*.*d|\n", width, precision, var);
	ft_printf("#2928");
	ret2 = ft_printf("|%0-#\'*.*d|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2929");
	ret1 = fprintf(fppres, "|%0-#\'*.*hhd|\n", width, precision, var);
	ft_printf("#2929");
	ret2 = ft_printf("|%0-#\'*.*hhd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2930");
	ret1 = fprintf(fppres, "|%0-#\'*.*hd|\n", width, precision, var);
	ft_printf("#2930");
	ret2 = ft_printf("|%0-#\'*.*hd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2931");
	ret1 = fprintf(fppres, "|%0-#\'*.*ld|\n", width, precision, var);
	ft_printf("#2931");
	ret2 = ft_printf("|%0-#\'*.*ld|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2932");
	ret1 = fprintf(fppres, "|%0-#\'*.*lld|\n", width, precision, var);
	ft_printf("#2932");
	ret2 = ft_printf("|%0-#\'*.*lld|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2933");
	ret1 = fprintf(fppres, "|%0-#\'*.*jd|\n", width, precision, var);
	ft_printf("#2933");
	ret2 = ft_printf("|%0-#\'*.*jd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2934");
	ret1 = fprintf(fppres, "|%0-#\'*.*zd|\n", width, precision, var);
	ft_printf("#2934");
	ret2 = ft_printf("|%0-#\'*.*zd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2935");
	ret1 = fprintf(fppres, "|%0-#\'*.*d|\n", width, precision, var);
	ft_printf("#2935");
	ret2 = ft_printf("|%0-#\'*.*d|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2936");
	ret1 = fprintf(fppres, "|%0-#\'*.*i|\n", width, precision, var);
	ft_printf("#2936");
	ret2 = ft_printf("|%0-#\'*.*i|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2937");
	ret1 = fprintf(fppres, "|%0-#\'*.*hhi|\n", width, precision, var);
	ft_printf("#2937");
	ret2 = ft_printf("|%0-#\'*.*hhi|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2938");
	ret1 = fprintf(fppres, "|%0-#\'*.*hi|\n", width, precision, var);
	ft_printf("#2938");
	ret2 = ft_printf("|%0-#\'*.*hi|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2939");
	ret1 = fprintf(fppres, "|%0-#\'*.*li|\n", width, precision, var);
	ft_printf("#2939");
	ret2 = ft_printf("|%0-#\'*.*li|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2940");
	ret1 = fprintf(fppres, "|%0-#\'*.*lli|\n", width, precision, var);
	ft_printf("#2940");
	ret2 = ft_printf("|%0-#\'*.*lli|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2941");
	ret1 = fprintf(fppres, "|%0-#\'*.*ji|\n", width, precision, var);
	ft_printf("#2941");
	ret2 = ft_printf("|%0-#\'*.*ji|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2942");
	ret1 = fprintf(fppres, "|%0-#\'*.*zi|\n", width, precision, var);
	ft_printf("#2942");
	ret2 = ft_printf("|%0-#\'*.*zi|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2943");
	ret1 = fprintf(fppres, "|%0-#\'*.*i|\n", width, precision, var);
	ft_printf("#2943");
	ret2 = ft_printf("|%0-#\'*.*i|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2944");
	ret1 = fprintf(fppres, "|%0-#\'*.*u|\n", width, precision, var);
	ft_printf("#2944");
	ret2 = ft_printf("|%0-#\'*.*u|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2945");
	ret1 = fprintf(fppres, "|%0-#\'*.*hhu|\n", width, precision, var);
	ft_printf("#2945");
	ret2 = ft_printf("|%0-#\'*.*hhu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2946");
	ret1 = fprintf(fppres, "|%0-#\'*.*hu|\n", width, precision, var);
	ft_printf("#2946");
	ret2 = ft_printf("|%0-#\'*.*hu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2947");
	ret1 = fprintf(fppres, "|%0-#\'*.*lu|\n", width, precision, var);
	ft_printf("#2947");
	ret2 = ft_printf("|%0-#\'*.*lu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2948");
	ret1 = fprintf(fppres, "|%0-#\'*.*llu|\n", width, precision, var);
	ft_printf("#2948");
	ret2 = ft_printf("|%0-#\'*.*llu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2949");
	ret1 = fprintf(fppres, "|%0-#\'*.*ju|\n", width, precision, var);
	ft_printf("#2949");
	ret2 = ft_printf("|%0-#\'*.*ju|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2950");
	ret1 = fprintf(fppres, "|%0-#\'*.*zu|\n", width, precision, var);
	ft_printf("#2950");
	ret2 = ft_printf("|%0-#\'*.*zu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2951");
	ret1 = fprintf(fppres, "|%0-#\'*.*u|\n", width, precision, var);
	ft_printf("#2951");
	ret2 = ft_printf("|%0-#\'*.*u|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2952");
	ret1 = fprintf(fppres, "|%0-#\'*.*f|\n", width, precision, var);
	ft_printf("#2952");
	ret2 = ft_printf("|%0-#\'*.*f|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2953");
	ret1 = fprintf(fppres, "|%0-#\'*.*hhf|\n", width, precision, var);
	ft_printf("#2953");
	ret2 = ft_printf("|%0-#\'*.*hhf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2954");
	ret1 = fprintf(fppres, "|%0-#\'*.*hf|\n", width, precision, var);
	ft_printf("#2954");
	ret2 = ft_printf("|%0-#\'*.*hf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2955");
	ret1 = fprintf(fppres, "|%0-#\'*.*lf|\n", width, precision, var);
	ft_printf("#2955");
	ret2 = ft_printf("|%0-#\'*.*lf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2956");
	ret1 = fprintf(fppres, "|%0-#\'*.*llf|\n", width, precision, var);
	ft_printf("#2956");
	ret2 = ft_printf("|%0-#\'*.*llf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2957");
	ret1 = fprintf(fppres, "|%0-#\'*.*jf|\n", width, precision, var);
	ft_printf("#2957");
	ret2 = ft_printf("|%0-#\'*.*jf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2958");
	ret1 = fprintf(fppres, "|%0-#\'*.*zf|\n", width, precision, var);
	ft_printf("#2958");
	ret2 = ft_printf("|%0-#\'*.*zf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2959");
	ret1 = fprintf(fppres, "|%0-#\'*.*f|\n", width, precision, var);
	ft_printf("#2959");
	ret2 = ft_printf("|%0-#\'*.*f|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2960");
	ret1 = fprintf(fppres, "|%0-#\'*.*F|\n", width, precision, var);
	ft_printf("#2960");
	ret2 = ft_printf("|%0-#\'*.*F|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2961");
	ret1 = fprintf(fppres, "|%0-#\'*.*hhF|\n", width, precision, var);
	ft_printf("#2961");
	ret2 = ft_printf("|%0-#\'*.*hhF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2962");
	ret1 = fprintf(fppres, "|%0-#\'*.*hF|\n", width, precision, var);
	ft_printf("#2962");
	ret2 = ft_printf("|%0-#\'*.*hF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2963");
	ret1 = fprintf(fppres, "|%0-#\'*.*lF|\n", width, precision, var);
	ft_printf("#2963");
	ret2 = ft_printf("|%0-#\'*.*lF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2964");
	ret1 = fprintf(fppres, "|%0-#\'*.*llF|\n", width, precision, var);
	ft_printf("#2964");
	ret2 = ft_printf("|%0-#\'*.*llF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2965");
	ret1 = fprintf(fppres, "|%0-#\'*.*jF|\n", width, precision, var);
	ft_printf("#2965");
	ret2 = ft_printf("|%0-#\'*.*jF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2966");
	ret1 = fprintf(fppres, "|%0-#\'*.*zF|\n", width, precision, var);
	ft_printf("#2966");
	ret2 = ft_printf("|%0-#\'*.*zF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2967");
	ret1 = fprintf(fppres, "|%0-#\'*.*F|\n", width, precision, var);
	ft_printf("#2967");
	ret2 = ft_printf("|%0-#\'*.*F|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2968");
	ret1 = fprintf(fppres, "|%0-#\'*.* |\n", width, precision, var);
	ft_printf("#2968");
	ret2 = ft_printf("|%0-#\'*.* |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2969");
	ret1 = fprintf(fppres, "|%0-#\'*.*hh |\n", width, precision, var);
	ft_printf("#2969");
	ret2 = ft_printf("|%0-#\'*.*hh |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2970");
	ret1 = fprintf(fppres, "|%0-#\'*.*h |\n", width, precision, var);
	ft_printf("#2970");
	ret2 = ft_printf("|%0-#\'*.*h |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2971");
	ret1 = fprintf(fppres, "|%0-#\'*.*l |\n", width, precision, var);
	ft_printf("#2971");
	ret2 = ft_printf("|%0-#\'*.*l |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2972");
	ret1 = fprintf(fppres, "|%0-#\'*.*ll |\n", width, precision, var);
	ft_printf("#2972");
	ret2 = ft_printf("|%0-#\'*.*ll |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2973");
	ret1 = fprintf(fppres, "|%0-#\'*.*j |\n", width, precision, var);
	ft_printf("#2973");
	ret2 = ft_printf("|%0-#\'*.*j |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2974");
	ret1 = fprintf(fppres, "|%0-#\'*.*z |\n", width, precision, var);
	ft_printf("#2974");
	ret2 = ft_printf("|%0-#\'*.*z |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2975");
	ret1 = fprintf(fppres, "|%0-#\'*.* |\n", width, precision, var);
	ft_printf("#2975");
	ret2 = ft_printf("|%0-#\'*.* |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2976");
	ret1 = fprintf(fppres, "|%+-#\'*.*d|\n", width, precision, var);
	ft_printf("#2976");
	ret2 = ft_printf("|%+-#\'*.*d|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2977");
	ret1 = fprintf(fppres, "|%+-#\'*.*hhd|\n", width, precision, var);
	ft_printf("#2977");
	ret2 = ft_printf("|%+-#\'*.*hhd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2978");
	ret1 = fprintf(fppres, "|%+-#\'*.*hd|\n", width, precision, var);
	ft_printf("#2978");
	ret2 = ft_printf("|%+-#\'*.*hd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2979");
	ret1 = fprintf(fppres, "|%+-#\'*.*ld|\n", width, precision, var);
	ft_printf("#2979");
	ret2 = ft_printf("|%+-#\'*.*ld|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2980");
	ret1 = fprintf(fppres, "|%+-#\'*.*lld|\n", width, precision, var);
	ft_printf("#2980");
	ret2 = ft_printf("|%+-#\'*.*lld|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2981");
	ret1 = fprintf(fppres, "|%+-#\'*.*jd|\n", width, precision, var);
	ft_printf("#2981");
	ret2 = ft_printf("|%+-#\'*.*jd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2982");
	ret1 = fprintf(fppres, "|%+-#\'*.*zd|\n", width, precision, var);
	ft_printf("#2982");
	ret2 = ft_printf("|%+-#\'*.*zd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2983");
	ret1 = fprintf(fppres, "|%+-#\'*.*d|\n", width, precision, var);
	ft_printf("#2983");
	ret2 = ft_printf("|%+-#\'*.*d|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2984");
	ret1 = fprintf(fppres, "|%+-#\'*.*i|\n", width, precision, var);
	ft_printf("#2984");
	ret2 = ft_printf("|%+-#\'*.*i|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2985");
	ret1 = fprintf(fppres, "|%+-#\'*.*hhi|\n", width, precision, var);
	ft_printf("#2985");
	ret2 = ft_printf("|%+-#\'*.*hhi|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2986");
	ret1 = fprintf(fppres, "|%+-#\'*.*hi|\n", width, precision, var);
	ft_printf("#2986");
	ret2 = ft_printf("|%+-#\'*.*hi|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2987");
	ret1 = fprintf(fppres, "|%+-#\'*.*li|\n", width, precision, var);
	ft_printf("#2987");
	ret2 = ft_printf("|%+-#\'*.*li|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2988");
	ret1 = fprintf(fppres, "|%+-#\'*.*lli|\n", width, precision, var);
	ft_printf("#2988");
	ret2 = ft_printf("|%+-#\'*.*lli|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2989");
	ret1 = fprintf(fppres, "|%+-#\'*.*ji|\n", width, precision, var);
	ft_printf("#2989");
	ret2 = ft_printf("|%+-#\'*.*ji|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2990");
	ret1 = fprintf(fppres, "|%+-#\'*.*zi|\n", width, precision, var);
	ft_printf("#2990");
	ret2 = ft_printf("|%+-#\'*.*zi|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2991");
	ret1 = fprintf(fppres, "|%+-#\'*.*i|\n", width, precision, var);
	ft_printf("#2991");
	ret2 = ft_printf("|%+-#\'*.*i|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2992");
	ret1 = fprintf(fppres, "|%+-#\'*.*u|\n", width, precision, var);
	ft_printf("#2992");
	ret2 = ft_printf("|%+-#\'*.*u|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2993");
	ret1 = fprintf(fppres, "|%+-#\'*.*hhu|\n", width, precision, var);
	ft_printf("#2993");
	ret2 = ft_printf("|%+-#\'*.*hhu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2994");
	ret1 = fprintf(fppres, "|%+-#\'*.*hu|\n", width, precision, var);
	ft_printf("#2994");
	ret2 = ft_printf("|%+-#\'*.*hu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2995");
	ret1 = fprintf(fppres, "|%+-#\'*.*lu|\n", width, precision, var);
	ft_printf("#2995");
	ret2 = ft_printf("|%+-#\'*.*lu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2996");
	ret1 = fprintf(fppres, "|%+-#\'*.*llu|\n", width, precision, var);
	ft_printf("#2996");
	ret2 = ft_printf("|%+-#\'*.*llu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2997");
	ret1 = fprintf(fppres, "|%+-#\'*.*ju|\n", width, precision, var);
	ft_printf("#2997");
	ret2 = ft_printf("|%+-#\'*.*ju|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2998");
	ret1 = fprintf(fppres, "|%+-#\'*.*zu|\n", width, precision, var);
	ft_printf("#2998");
	ret2 = ft_printf("|%+-#\'*.*zu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#2999");
	ret1 = fprintf(fppres, "|%+-#\'*.*u|\n", width, precision, var);
	ft_printf("#2999");
	ret2 = ft_printf("|%+-#\'*.*u|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#3000");
	ret1 = fprintf(fppres, "|%+-#\'*.*f|\n", width, precision, var);
	ft_printf("#3000");
	ret2 = ft_printf("|%+-#\'*.*f|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#3001");
	ret1 = fprintf(fppres, "|%+-#\'*.*hhf|\n", width, precision, var);
	ft_printf("#3001");
	ret2 = ft_printf("|%+-#\'*.*hhf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#3002");
	ret1 = fprintf(fppres, "|%+-#\'*.*hf|\n", width, precision, var);
	ft_printf("#3002");
	ret2 = ft_printf("|%+-#\'*.*hf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#3003");
	ret1 = fprintf(fppres, "|%+-#\'*.*lf|\n", width, precision, var);
	ft_printf("#3003");
	ret2 = ft_printf("|%+-#\'*.*lf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#3004");
	ret1 = fprintf(fppres, "|%+-#\'*.*llf|\n", width, precision, var);
	ft_printf("#3004");
	ret2 = ft_printf("|%+-#\'*.*llf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#3005");
	ret1 = fprintf(fppres, "|%+-#\'*.*jf|\n", width, precision, var);
	ft_printf("#3005");
	ret2 = ft_printf("|%+-#\'*.*jf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#3006");
	ret1 = fprintf(fppres, "|%+-#\'*.*zf|\n", width, precision, var);
	ft_printf("#3006");
	ret2 = ft_printf("|%+-#\'*.*zf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#3007");
	ret1 = fprintf(fppres, "|%+-#\'*.*f|\n", width, precision, var);
	ft_printf("#3007");
	ret2 = ft_printf("|%+-#\'*.*f|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#3008");
	ret1 = fprintf(fppres, "|%+-#\'*.*F|\n", width, precision, var);
	ft_printf("#3008");
	ret2 = ft_printf("|%+-#\'*.*F|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#3009");
	ret1 = fprintf(fppres, "|%+-#\'*.*hhF|\n", width, precision, var);
	ft_printf("#3009");
	ret2 = ft_printf("|%+-#\'*.*hhF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#3010");
	ret1 = fprintf(fppres, "|%+-#\'*.*hF|\n", width, precision, var);
	ft_printf("#3010");
	ret2 = ft_printf("|%+-#\'*.*hF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#3011");
	ret1 = fprintf(fppres, "|%+-#\'*.*lF|\n", width, precision, var);
	ft_printf("#3011");
	ret2 = ft_printf("|%+-#\'*.*lF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#3012");
	ret1 = fprintf(fppres, "|%+-#\'*.*llF|\n", width, precision, var);
	ft_printf("#3012");
	ret2 = ft_printf("|%+-#\'*.*llF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#3013");
	ret1 = fprintf(fppres, "|%+-#\'*.*jF|\n", width, precision, var);
	ft_printf("#3013");
	ret2 = ft_printf("|%+-#\'*.*jF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#3014");
	ret1 = fprintf(fppres, "|%+-#\'*.*zF|\n", width, precision, var);
	ft_printf("#3014");
	ret2 = ft_printf("|%+-#\'*.*zF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#3015");
	ret1 = fprintf(fppres, "|%+-#\'*.*F|\n", width, precision, var);
	ft_printf("#3015");
	ret2 = ft_printf("|%+-#\'*.*F|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#3016");
	ret1 = fprintf(fppres, "|%+-#\'*.* |\n", width, precision, var);
	ft_printf("#3016");
	ret2 = ft_printf("|%+-#\'*.* |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#3017");
	ret1 = fprintf(fppres, "|%+-#\'*.*hh |\n", width, precision, var);
	ft_printf("#3017");
	ret2 = ft_printf("|%+-#\'*.*hh |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#3018");
	ret1 = fprintf(fppres, "|%+-#\'*.*h |\n", width, precision, var);
	ft_printf("#3018");
	ret2 = ft_printf("|%+-#\'*.*h |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#3019");
	ret1 = fprintf(fppres, "|%+-#\'*.*l |\n", width, precision, var);
	ft_printf("#3019");
	ret2 = ft_printf("|%+-#\'*.*l |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#3020");
	ret1 = fprintf(fppres, "|%+-#\'*.*ll |\n", width, precision, var);
	ft_printf("#3020");
	ret2 = ft_printf("|%+-#\'*.*ll |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#3021");
	ret1 = fprintf(fppres, "|%+-#\'*.*j |\n", width, precision, var);
	ft_printf("#3021");
	ret2 = ft_printf("|%+-#\'*.*j |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#3022");
	ret1 = fprintf(fppres, "|%+-#\'*.*z |\n", width, precision, var);
	ft_printf("#3022");
	ret2 = ft_printf("|%+-#\'*.*z |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#3023");
	ret1 = fprintf(fppres, "|%+-#\'*.* |\n", width, precision, var);
	ft_printf("#3023");
	ret2 = ft_printf("|%+-#\'*.* |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#3024");
	ret1 = fprintf(fppres, "|%0+-#\'*.*d|\n", width, precision, var);
	ft_printf("#3024");
	ret2 = ft_printf("|%0+-#\'*.*d|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#3025");
	ret1 = fprintf(fppres, "|%0+-#\'*.*hhd|\n", width, precision, var);
	ft_printf("#3025");
	ret2 = ft_printf("|%0+-#\'*.*hhd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#3026");
	ret1 = fprintf(fppres, "|%0+-#\'*.*hd|\n", width, precision, var);
	ft_printf("#3026");
	ret2 = ft_printf("|%0+-#\'*.*hd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#3027");
	ret1 = fprintf(fppres, "|%0+-#\'*.*ld|\n", width, precision, var);
	ft_printf("#3027");
	ret2 = ft_printf("|%0+-#\'*.*ld|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#3028");
	ret1 = fprintf(fppres, "|%0+-#\'*.*lld|\n", width, precision, var);
	ft_printf("#3028");
	ret2 = ft_printf("|%0+-#\'*.*lld|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#3029");
	ret1 = fprintf(fppres, "|%0+-#\'*.*jd|\n", width, precision, var);
	ft_printf("#3029");
	ret2 = ft_printf("|%0+-#\'*.*jd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#3030");
	ret1 = fprintf(fppres, "|%0+-#\'*.*zd|\n", width, precision, var);
	ft_printf("#3030");
	ret2 = ft_printf("|%0+-#\'*.*zd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#3031");
	ret1 = fprintf(fppres, "|%0+-#\'*.*d|\n", width, precision, var);
	ft_printf("#3031");
	ret2 = ft_printf("|%0+-#\'*.*d|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#3032");
	ret1 = fprintf(fppres, "|%0+-#\'*.*i|\n", width, precision, var);
	ft_printf("#3032");
	ret2 = ft_printf("|%0+-#\'*.*i|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#3033");
	ret1 = fprintf(fppres, "|%0+-#\'*.*hhi|\n", width, precision, var);
	ft_printf("#3033");
	ret2 = ft_printf("|%0+-#\'*.*hhi|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#3034");
	ret1 = fprintf(fppres, "|%0+-#\'*.*hi|\n", width, precision, var);
	ft_printf("#3034");
	ret2 = ft_printf("|%0+-#\'*.*hi|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#3035");
	ret1 = fprintf(fppres, "|%0+-#\'*.*li|\n", width, precision, var);
	ft_printf("#3035");
	ret2 = ft_printf("|%0+-#\'*.*li|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#3036");
	ret1 = fprintf(fppres, "|%0+-#\'*.*lli|\n", width, precision, var);
	ft_printf("#3036");
	ret2 = ft_printf("|%0+-#\'*.*lli|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#3037");
	ret1 = fprintf(fppres, "|%0+-#\'*.*ji|\n", width, precision, var);
	ft_printf("#3037");
	ret2 = ft_printf("|%0+-#\'*.*ji|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#3038");
	ret1 = fprintf(fppres, "|%0+-#\'*.*zi|\n", width, precision, var);
	ft_printf("#3038");
	ret2 = ft_printf("|%0+-#\'*.*zi|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#3039");
	ret1 = fprintf(fppres, "|%0+-#\'*.*i|\n", width, precision, var);
	ft_printf("#3039");
	ret2 = ft_printf("|%0+-#\'*.*i|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#3040");
	ret1 = fprintf(fppres, "|%0+-#\'*.*u|\n", width, precision, var);
	ft_printf("#3040");
	ret2 = ft_printf("|%0+-#\'*.*u|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#3041");
	ret1 = fprintf(fppres, "|%0+-#\'*.*hhu|\n", width, precision, var);
	ft_printf("#3041");
	ret2 = ft_printf("|%0+-#\'*.*hhu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#3042");
	ret1 = fprintf(fppres, "|%0+-#\'*.*hu|\n", width, precision, var);
	ft_printf("#3042");
	ret2 = ft_printf("|%0+-#\'*.*hu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#3043");
	ret1 = fprintf(fppres, "|%0+-#\'*.*lu|\n", width, precision, var);
	ft_printf("#3043");
	ret2 = ft_printf("|%0+-#\'*.*lu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#3044");
	ret1 = fprintf(fppres, "|%0+-#\'*.*llu|\n", width, precision, var);
	ft_printf("#3044");
	ret2 = ft_printf("|%0+-#\'*.*llu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#3045");
	ret1 = fprintf(fppres, "|%0+-#\'*.*ju|\n", width, precision, var);
	ft_printf("#3045");
	ret2 = ft_printf("|%0+-#\'*.*ju|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#3046");
	ret1 = fprintf(fppres, "|%0+-#\'*.*zu|\n", width, precision, var);
	ft_printf("#3046");
	ret2 = ft_printf("|%0+-#\'*.*zu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#3047");
	ret1 = fprintf(fppres, "|%0+-#\'*.*u|\n", width, precision, var);
	ft_printf("#3047");
	ret2 = ft_printf("|%0+-#\'*.*u|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#3048");
	ret1 = fprintf(fppres, "|%0+-#\'*.*f|\n", width, precision, var);
	ft_printf("#3048");
	ret2 = ft_printf("|%0+-#\'*.*f|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#3049");
	ret1 = fprintf(fppres, "|%0+-#\'*.*hhf|\n", width, precision, var);
	ft_printf("#3049");
	ret2 = ft_printf("|%0+-#\'*.*hhf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#3050");
	ret1 = fprintf(fppres, "|%0+-#\'*.*hf|\n", width, precision, var);
	ft_printf("#3050");
	ret2 = ft_printf("|%0+-#\'*.*hf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#3051");
	ret1 = fprintf(fppres, "|%0+-#\'*.*lf|\n", width, precision, var);
	ft_printf("#3051");
	ret2 = ft_printf("|%0+-#\'*.*lf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#3052");
	ret1 = fprintf(fppres, "|%0+-#\'*.*llf|\n", width, precision, var);
	ft_printf("#3052");
	ret2 = ft_printf("|%0+-#\'*.*llf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#3053");
	ret1 = fprintf(fppres, "|%0+-#\'*.*jf|\n", width, precision, var);
	ft_printf("#3053");
	ret2 = ft_printf("|%0+-#\'*.*jf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#3054");
	ret1 = fprintf(fppres, "|%0+-#\'*.*zf|\n", width, precision, var);
	ft_printf("#3054");
	ret2 = ft_printf("|%0+-#\'*.*zf|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#3055");
	ret1 = fprintf(fppres, "|%0+-#\'*.*f|\n", width, precision, var);
	ft_printf("#3055");
	ret2 = ft_printf("|%0+-#\'*.*f|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#3056");
	ret1 = fprintf(fppres, "|%0+-#\'*.*F|\n", width, precision, var);
	ft_printf("#3056");
	ret2 = ft_printf("|%0+-#\'*.*F|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#3057");
	ret1 = fprintf(fppres, "|%0+-#\'*.*hhF|\n", width, precision, var);
	ft_printf("#3057");
	ret2 = ft_printf("|%0+-#\'*.*hhF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#3058");
	ret1 = fprintf(fppres, "|%0+-#\'*.*hF|\n", width, precision, var);
	ft_printf("#3058");
	ret2 = ft_printf("|%0+-#\'*.*hF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#3059");
	ret1 = fprintf(fppres, "|%0+-#\'*.*lF|\n", width, precision, var);
	ft_printf("#3059");
	ret2 = ft_printf("|%0+-#\'*.*lF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#3060");
	ret1 = fprintf(fppres, "|%0+-#\'*.*llF|\n", width, precision, var);
	ft_printf("#3060");
	ret2 = ft_printf("|%0+-#\'*.*llF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#3061");
	ret1 = fprintf(fppres, "|%0+-#\'*.*jF|\n", width, precision, var);
	ft_printf("#3061");
	ret2 = ft_printf("|%0+-#\'*.*jF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#3062");
	ret1 = fprintf(fppres, "|%0+-#\'*.*zF|\n", width, precision, var);
	ft_printf("#3062");
	ret2 = ft_printf("|%0+-#\'*.*zF|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#3063");
	ret1 = fprintf(fppres, "|%0+-#\'*.*F|\n", width, precision, var);
	ft_printf("#3063");
	ret2 = ft_printf("|%0+-#\'*.*F|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#3064");
	ret1 = fprintf(fppres, "|%0+-#\'*.* |\n", width, precision, var);
	ft_printf("#3064");
	ret2 = ft_printf("|%0+-#\'*.* |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#3065");
	ret1 = fprintf(fppres, "|%0+-#\'*.*hh |\n", width, precision, var);
	ft_printf("#3065");
	ret2 = ft_printf("|%0+-#\'*.*hh |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#3066");
	ret1 = fprintf(fppres, "|%0+-#\'*.*h |\n", width, precision, var);
	ft_printf("#3066");
	ret2 = ft_printf("|%0+-#\'*.*h |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#3067");
	ret1 = fprintf(fppres, "|%0+-#\'*.*l |\n", width, precision, var);
	ft_printf("#3067");
	ret2 = ft_printf("|%0+-#\'*.*l |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#3068");
	ret1 = fprintf(fppres, "|%0+-#\'*.*ll |\n", width, precision, var);
	ft_printf("#3068");
	ret2 = ft_printf("|%0+-#\'*.*ll |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#3069");
	ret1 = fprintf(fppres, "|%0+-#\'*.*j |\n", width, precision, var);
	ft_printf("#3069");
	ret2 = ft_printf("|%0+-#\'*.*j |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#3070");
	ret1 = fprintf(fppres, "|%0+-#\'*.*z |\n", width, precision, var);
	ft_printf("#3070");
	ret2 = ft_printf("|%0+-#\'*.*z |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#3071");
	ret1 = fprintf(fppres, "|%0+-#\'*.* |\n", width, precision, var);
	ft_printf("#3071");
	ret2 = ft_printf("|%0+-#\'*.* |\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@	fclose(fppres);
	fclose(fppret);
	fclose(fpftret);
	*n = *n + 1;
}
