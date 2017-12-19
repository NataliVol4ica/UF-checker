#include <stdio.h>
#include <stdint.h>
#include <wchar.h>
#include "libftprintf.h"

size_t testing_diouxbx_tests = 768;

void		testing_diouxbx(int width, int precision, intmax_t var)
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
	fprintf(fppres, "NAME = testing_diouxbx.c\n");
	fprintf(fppres, "TESTS = %zu\n", testing_diouxbx_tests);
	fprintf(fppres, "WIDTH = %d\n", width);
	fprintf(fppres, "PRECISION = %d\n", precision);
	fprintf(fppres, "VAR = %zd\n\n", var);

	ft_printf("===\\ NEW TEST\n");
	ft_printf("NAME = testing_diouxbx.c\n");
	ft_printf("TESTS = %zu\n", testing_diouxbx_tests);
	ft_printf("WIDTH = %d\n", width);
	ft_printf("PRECISION = %d\n", precision);
	ft_printf("VAR = %zd\n\n", var);

	//@
	fprintf(fppres, "#0000");
	ret1 = fprintf(fppres, "|%*.*d|\n", width, precision, var);
	ft_printf("#0000");
	ret2 = ret1 > -1 ? ft_printf("|%*.*d|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0001");
	ret1 = fprintf(fppres, "|%*.*hhd|\n", width, precision, var);
	ft_printf("#0001");
	ret2 = ret1 > -1 ? ft_printf("|%*.*hhd|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0002");
	ret1 = fprintf(fppres, "|%*.*hd|\n", width, precision, var);
	ft_printf("#0002");
	ret2 = ret1 > -1 ? ft_printf("|%*.*hd|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0003");
	ret1 = fprintf(fppres, "|%*.*ld|\n", width, precision, var);
	ft_printf("#0003");
	ret2 = ret1 > -1 ? ft_printf("|%*.*ld|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0004");
	ret1 = fprintf(fppres, "|%*.*lld|\n", width, precision, var);
	ft_printf("#0004");
	ret2 = ret1 > -1 ? ft_printf("|%*.*lld|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0005");
	ret1 = fprintf(fppres, "|%*.*jd|\n", width, precision, var);
	ft_printf("#0005");
	ret2 = ret1 > -1 ? ft_printf("|%*.*jd|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0006");
	ret1 = fprintf(fppres, "|%*.*zd|\n", width, precision, var);
	ft_printf("#0006");
	ret2 = ret1 > -1 ? ft_printf("|%*.*zd|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0007");
	ret1 = fprintf(fppres, "|%*.*d|\n", width, precision, var);
	ft_printf("#0007");
	ret2 = ret1 > -1 ? ft_printf("|%*.*d|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0008");
	ret1 = fprintf(fppres, "|%*.*i|\n", width, precision, var);
	ft_printf("#0008");
	ret2 = ret1 > -1 ? ft_printf("|%*.*i|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0009");
	ret1 = fprintf(fppres, "|%*.*hhi|\n", width, precision, var);
	ft_printf("#0009");
	ret2 = ret1 > -1 ? ft_printf("|%*.*hhi|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0010");
	ret1 = fprintf(fppres, "|%*.*hi|\n", width, precision, var);
	ft_printf("#0010");
	ret2 = ret1 > -1 ? ft_printf("|%*.*hi|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0011");
	ret1 = fprintf(fppres, "|%*.*li|\n", width, precision, var);
	ft_printf("#0011");
	ret2 = ret1 > -1 ? ft_printf("|%*.*li|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0012");
	ret1 = fprintf(fppres, "|%*.*lli|\n", width, precision, var);
	ft_printf("#0012");
	ret2 = ret1 > -1 ? ft_printf("|%*.*lli|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0013");
	ret1 = fprintf(fppres, "|%*.*ji|\n", width, precision, var);
	ft_printf("#0013");
	ret2 = ret1 > -1 ? ft_printf("|%*.*ji|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0014");
	ret1 = fprintf(fppres, "|%*.*zi|\n", width, precision, var);
	ft_printf("#0014");
	ret2 = ret1 > -1 ? ft_printf("|%*.*zi|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0015");
	ret1 = fprintf(fppres, "|%*.*i|\n", width, precision, var);
	ft_printf("#0015");
	ret2 = ret1 > -1 ? ft_printf("|%*.*i|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0016");
	ret1 = fprintf(fppres, "|%*.*o|\n", width, precision, var);
	ft_printf("#0016");
	ret2 = ret1 > -1 ? ft_printf("|%*.*o|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0017");
	ret1 = fprintf(fppres, "|%*.*hho|\n", width, precision, var);
	ft_printf("#0017");
	ret2 = ret1 > -1 ? ft_printf("|%*.*hho|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0018");
	ret1 = fprintf(fppres, "|%*.*ho|\n", width, precision, var);
	ft_printf("#0018");
	ret2 = ret1 > -1 ? ft_printf("|%*.*ho|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0019");
	ret1 = fprintf(fppres, "|%*.*lo|\n", width, precision, var);
	ft_printf("#0019");
	ret2 = ret1 > -1 ? ft_printf("|%*.*lo|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0020");
	ret1 = fprintf(fppres, "|%*.*llo|\n", width, precision, var);
	ft_printf("#0020");
	ret2 = ret1 > -1 ? ft_printf("|%*.*llo|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0021");
	ret1 = fprintf(fppres, "|%*.*jo|\n", width, precision, var);
	ft_printf("#0021");
	ret2 = ret1 > -1 ? ft_printf("|%*.*jo|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0022");
	ret1 = fprintf(fppres, "|%*.*zo|\n", width, precision, var);
	ft_printf("#0022");
	ret2 = ret1 > -1 ? ft_printf("|%*.*zo|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0023");
	ret1 = fprintf(fppres, "|%*.*o|\n", width, precision, var);
	ft_printf("#0023");
	ret2 = ret1 > -1 ? ft_printf("|%*.*o|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0024");
	ret1 = fprintf(fppres, "|%*.*u|\n", width, precision, var);
	ft_printf("#0024");
	ret2 = ret1 > -1 ? ft_printf("|%*.*u|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0025");
	ret1 = fprintf(fppres, "|%*.*hhu|\n", width, precision, var);
	ft_printf("#0025");
	ret2 = ret1 > -1 ? ft_printf("|%*.*hhu|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0026");
	ret1 = fprintf(fppres, "|%*.*hu|\n", width, precision, var);
	ft_printf("#0026");
	ret2 = ret1 > -1 ? ft_printf("|%*.*hu|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0027");
	ret1 = fprintf(fppres, "|%*.*lu|\n", width, precision, var);
	ft_printf("#0027");
	ret2 = ret1 > -1 ? ft_printf("|%*.*lu|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0028");
	ret1 = fprintf(fppres, "|%*.*llu|\n", width, precision, var);
	ft_printf("#0028");
	ret2 = ret1 > -1 ? ft_printf("|%*.*llu|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0029");
	ret1 = fprintf(fppres, "|%*.*ju|\n", width, precision, var);
	ft_printf("#0029");
	ret2 = ret1 > -1 ? ft_printf("|%*.*ju|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0030");
	ret1 = fprintf(fppres, "|%*.*zu|\n", width, precision, var);
	ft_printf("#0030");
	ret2 = ret1 > -1 ? ft_printf("|%*.*zu|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0031");
	ret1 = fprintf(fppres, "|%*.*u|\n", width, precision, var);
	ft_printf("#0031");
	ret2 = ret1 > -1 ? ft_printf("|%*.*u|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0032");
	ret1 = fprintf(fppres, "|%*.*x|\n", width, precision, var);
	ft_printf("#0032");
	ret2 = ret1 > -1 ? ft_printf("|%*.*x|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0033");
	ret1 = fprintf(fppres, "|%*.*hhx|\n", width, precision, var);
	ft_printf("#0033");
	ret2 = ret1 > -1 ? ft_printf("|%*.*hhx|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0034");
	ret1 = fprintf(fppres, "|%*.*hx|\n", width, precision, var);
	ft_printf("#0034");
	ret2 = ret1 > -1 ? ft_printf("|%*.*hx|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0035");
	ret1 = fprintf(fppres, "|%*.*lx|\n", width, precision, var);
	ft_printf("#0035");
	ret2 = ret1 > -1 ? ft_printf("|%*.*lx|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0036");
	ret1 = fprintf(fppres, "|%*.*llx|\n", width, precision, var);
	ft_printf("#0036");
	ret2 = ret1 > -1 ? ft_printf("|%*.*llx|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0037");
	ret1 = fprintf(fppres, "|%*.*jx|\n", width, precision, var);
	ft_printf("#0037");
	ret2 = ret1 > -1 ? ft_printf("|%*.*jx|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0038");
	ret1 = fprintf(fppres, "|%*.*zx|\n", width, precision, var);
	ft_printf("#0038");
	ret2 = ret1 > -1 ? ft_printf("|%*.*zx|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0039");
	ret1 = fprintf(fppres, "|%*.*x|\n", width, precision, var);
	ft_printf("#0039");
	ret2 = ret1 > -1 ? ft_printf("|%*.*x|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0040");
	ret1 = fprintf(fppres, "|%*.*X|\n", width, precision, var);
	ft_printf("#0040");
	ret2 = ret1 > -1 ? ft_printf("|%*.*X|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0041");
	ret1 = fprintf(fppres, "|%*.*hhX|\n", width, precision, var);
	ft_printf("#0041");
	ret2 = ret1 > -1 ? ft_printf("|%*.*hhX|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0042");
	ret1 = fprintf(fppres, "|%*.*hX|\n", width, precision, var);
	ft_printf("#0042");
	ret2 = ret1 > -1 ? ft_printf("|%*.*hX|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0043");
	ret1 = fprintf(fppres, "|%*.*lX|\n", width, precision, var);
	ft_printf("#0043");
	ret2 = ret1 > -1 ? ft_printf("|%*.*lX|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0044");
	ret1 = fprintf(fppres, "|%*.*llX|\n", width, precision, var);
	ft_printf("#0044");
	ret2 = ret1 > -1 ? ft_printf("|%*.*llX|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0045");
	ret1 = fprintf(fppres, "|%*.*jX|\n", width, precision, var);
	ft_printf("#0045");
	ret2 = ret1 > -1 ? ft_printf("|%*.*jX|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0046");
	ret1 = fprintf(fppres, "|%*.*zX|\n", width, precision, var);
	ft_printf("#0046");
	ret2 = ret1 > -1 ? ft_printf("|%*.*zX|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0047");
	ret1 = fprintf(fppres, "|%*.*X|\n", width, precision, var);
	ft_printf("#0047");
	ret2 = ret1 > -1 ? ft_printf("|%*.*X|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0048");
	ret1 = fprintf(fppres, "|%0*.*d|\n", width, precision, var);
	ft_printf("#0048");
	ret2 = ret1 > -1 ? ft_printf("|%0*.*d|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0049");
	ret1 = fprintf(fppres, "|%0*.*hhd|\n", width, precision, var);
	ft_printf("#0049");
	ret2 = ret1 > -1 ? ft_printf("|%0*.*hhd|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0050");
	ret1 = fprintf(fppres, "|%0*.*hd|\n", width, precision, var);
	ft_printf("#0050");
	ret2 = ret1 > -1 ? ft_printf("|%0*.*hd|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0051");
	ret1 = fprintf(fppres, "|%0*.*ld|\n", width, precision, var);
	ft_printf("#0051");
	ret2 = ret1 > -1 ? ft_printf("|%0*.*ld|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0052");
	ret1 = fprintf(fppres, "|%0*.*lld|\n", width, precision, var);
	ft_printf("#0052");
	ret2 = ret1 > -1 ? ft_printf("|%0*.*lld|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0053");
	ret1 = fprintf(fppres, "|%0*.*jd|\n", width, precision, var);
	ft_printf("#0053");
	ret2 = ret1 > -1 ? ft_printf("|%0*.*jd|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0054");
	ret1 = fprintf(fppres, "|%0*.*zd|\n", width, precision, var);
	ft_printf("#0054");
	ret2 = ret1 > -1 ? ft_printf("|%0*.*zd|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0055");
	ret1 = fprintf(fppres, "|%0*.*d|\n", width, precision, var);
	ft_printf("#0055");
	ret2 = ret1 > -1 ? ft_printf("|%0*.*d|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0056");
	ret1 = fprintf(fppres, "|%0*.*i|\n", width, precision, var);
	ft_printf("#0056");
	ret2 = ret1 > -1 ? ft_printf("|%0*.*i|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0057");
	ret1 = fprintf(fppres, "|%0*.*hhi|\n", width, precision, var);
	ft_printf("#0057");
	ret2 = ret1 > -1 ? ft_printf("|%0*.*hhi|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0058");
	ret1 = fprintf(fppres, "|%0*.*hi|\n", width, precision, var);
	ft_printf("#0058");
	ret2 = ret1 > -1 ? ft_printf("|%0*.*hi|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0059");
	ret1 = fprintf(fppres, "|%0*.*li|\n", width, precision, var);
	ft_printf("#0059");
	ret2 = ret1 > -1 ? ft_printf("|%0*.*li|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0060");
	ret1 = fprintf(fppres, "|%0*.*lli|\n", width, precision, var);
	ft_printf("#0060");
	ret2 = ret1 > -1 ? ft_printf("|%0*.*lli|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0061");
	ret1 = fprintf(fppres, "|%0*.*ji|\n", width, precision, var);
	ft_printf("#0061");
	ret2 = ret1 > -1 ? ft_printf("|%0*.*ji|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0062");
	ret1 = fprintf(fppres, "|%0*.*zi|\n", width, precision, var);
	ft_printf("#0062");
	ret2 = ret1 > -1 ? ft_printf("|%0*.*zi|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0063");
	ret1 = fprintf(fppres, "|%0*.*i|\n", width, precision, var);
	ft_printf("#0063");
	ret2 = ret1 > -1 ? ft_printf("|%0*.*i|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0064");
	ret1 = fprintf(fppres, "|%0*.*o|\n", width, precision, var);
	ft_printf("#0064");
	ret2 = ret1 > -1 ? ft_printf("|%0*.*o|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0065");
	ret1 = fprintf(fppres, "|%0*.*hho|\n", width, precision, var);
	ft_printf("#0065");
	ret2 = ret1 > -1 ? ft_printf("|%0*.*hho|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0066");
	ret1 = fprintf(fppres, "|%0*.*ho|\n", width, precision, var);
	ft_printf("#0066");
	ret2 = ret1 > -1 ? ft_printf("|%0*.*ho|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0067");
	ret1 = fprintf(fppres, "|%0*.*lo|\n", width, precision, var);
	ft_printf("#0067");
	ret2 = ret1 > -1 ? ft_printf("|%0*.*lo|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0068");
	ret1 = fprintf(fppres, "|%0*.*llo|\n", width, precision, var);
	ft_printf("#0068");
	ret2 = ret1 > -1 ? ft_printf("|%0*.*llo|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0069");
	ret1 = fprintf(fppres, "|%0*.*jo|\n", width, precision, var);
	ft_printf("#0069");
	ret2 = ret1 > -1 ? ft_printf("|%0*.*jo|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0070");
	ret1 = fprintf(fppres, "|%0*.*zo|\n", width, precision, var);
	ft_printf("#0070");
	ret2 = ret1 > -1 ? ft_printf("|%0*.*zo|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0071");
	ret1 = fprintf(fppres, "|%0*.*o|\n", width, precision, var);
	ft_printf("#0071");
	ret2 = ret1 > -1 ? ft_printf("|%0*.*o|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0072");
	ret1 = fprintf(fppres, "|%0*.*u|\n", width, precision, var);
	ft_printf("#0072");
	ret2 = ret1 > -1 ? ft_printf("|%0*.*u|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0073");
	ret1 = fprintf(fppres, "|%0*.*hhu|\n", width, precision, var);
	ft_printf("#0073");
	ret2 = ret1 > -1 ? ft_printf("|%0*.*hhu|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0074");
	ret1 = fprintf(fppres, "|%0*.*hu|\n", width, precision, var);
	ft_printf("#0074");
	ret2 = ret1 > -1 ? ft_printf("|%0*.*hu|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0075");
	ret1 = fprintf(fppres, "|%0*.*lu|\n", width, precision, var);
	ft_printf("#0075");
	ret2 = ret1 > -1 ? ft_printf("|%0*.*lu|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0076");
	ret1 = fprintf(fppres, "|%0*.*llu|\n", width, precision, var);
	ft_printf("#0076");
	ret2 = ret1 > -1 ? ft_printf("|%0*.*llu|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0077");
	ret1 = fprintf(fppres, "|%0*.*ju|\n", width, precision, var);
	ft_printf("#0077");
	ret2 = ret1 > -1 ? ft_printf("|%0*.*ju|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0078");
	ret1 = fprintf(fppres, "|%0*.*zu|\n", width, precision, var);
	ft_printf("#0078");
	ret2 = ret1 > -1 ? ft_printf("|%0*.*zu|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0079");
	ret1 = fprintf(fppres, "|%0*.*u|\n", width, precision, var);
	ft_printf("#0079");
	ret2 = ret1 > -1 ? ft_printf("|%0*.*u|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0080");
	ret1 = fprintf(fppres, "|%0*.*x|\n", width, precision, var);
	ft_printf("#0080");
	ret2 = ret1 > -1 ? ft_printf("|%0*.*x|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0081");
	ret1 = fprintf(fppres, "|%0*.*hhx|\n", width, precision, var);
	ft_printf("#0081");
	ret2 = ret1 > -1 ? ft_printf("|%0*.*hhx|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0082");
	ret1 = fprintf(fppres, "|%0*.*hx|\n", width, precision, var);
	ft_printf("#0082");
	ret2 = ret1 > -1 ? ft_printf("|%0*.*hx|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0083");
	ret1 = fprintf(fppres, "|%0*.*lx|\n", width, precision, var);
	ft_printf("#0083");
	ret2 = ret1 > -1 ? ft_printf("|%0*.*lx|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0084");
	ret1 = fprintf(fppres, "|%0*.*llx|\n", width, precision, var);
	ft_printf("#0084");
	ret2 = ret1 > -1 ? ft_printf("|%0*.*llx|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0085");
	ret1 = fprintf(fppres, "|%0*.*jx|\n", width, precision, var);
	ft_printf("#0085");
	ret2 = ret1 > -1 ? ft_printf("|%0*.*jx|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0086");
	ret1 = fprintf(fppres, "|%0*.*zx|\n", width, precision, var);
	ft_printf("#0086");
	ret2 = ret1 > -1 ? ft_printf("|%0*.*zx|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0087");
	ret1 = fprintf(fppres, "|%0*.*x|\n", width, precision, var);
	ft_printf("#0087");
	ret2 = ret1 > -1 ? ft_printf("|%0*.*x|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0088");
	ret1 = fprintf(fppres, "|%0*.*X|\n", width, precision, var);
	ft_printf("#0088");
	ret2 = ret1 > -1 ? ft_printf("|%0*.*X|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0089");
	ret1 = fprintf(fppres, "|%0*.*hhX|\n", width, precision, var);
	ft_printf("#0089");
	ret2 = ret1 > -1 ? ft_printf("|%0*.*hhX|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0090");
	ret1 = fprintf(fppres, "|%0*.*hX|\n", width, precision, var);
	ft_printf("#0090");
	ret2 = ret1 > -1 ? ft_printf("|%0*.*hX|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0091");
	ret1 = fprintf(fppres, "|%0*.*lX|\n", width, precision, var);
	ft_printf("#0091");
	ret2 = ret1 > -1 ? ft_printf("|%0*.*lX|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0092");
	ret1 = fprintf(fppres, "|%0*.*llX|\n", width, precision, var);
	ft_printf("#0092");
	ret2 = ret1 > -1 ? ft_printf("|%0*.*llX|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0093");
	ret1 = fprintf(fppres, "|%0*.*jX|\n", width, precision, var);
	ft_printf("#0093");
	ret2 = ret1 > -1 ? ft_printf("|%0*.*jX|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0094");
	ret1 = fprintf(fppres, "|%0*.*zX|\n", width, precision, var);
	ft_printf("#0094");
	ret2 = ret1 > -1 ? ft_printf("|%0*.*zX|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0095");
	ret1 = fprintf(fppres, "|%0*.*X|\n", width, precision, var);
	ft_printf("#0095");
	ret2 = ret1 > -1 ? ft_printf("|%0*.*X|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0096");
	ret1 = fprintf(fppres, "|%+*.*d|\n", width, precision, var);
	ft_printf("#0096");
	ret2 = ret1 > -1 ? ft_printf("|%+*.*d|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0097");
	ret1 = fprintf(fppres, "|%+*.*hhd|\n", width, precision, var);
	ft_printf("#0097");
	ret2 = ret1 > -1 ? ft_printf("|%+*.*hhd|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0098");
	ret1 = fprintf(fppres, "|%+*.*hd|\n", width, precision, var);
	ft_printf("#0098");
	ret2 = ret1 > -1 ? ft_printf("|%+*.*hd|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0099");
	ret1 = fprintf(fppres, "|%+*.*ld|\n", width, precision, var);
	ft_printf("#0099");
	ret2 = ret1 > -1 ? ft_printf("|%+*.*ld|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0100");
	ret1 = fprintf(fppres, "|%+*.*lld|\n", width, precision, var);
	ft_printf("#0100");
	ret2 = ret1 > -1 ? ft_printf("|%+*.*lld|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0101");
	ret1 = fprintf(fppres, "|%+*.*jd|\n", width, precision, var);
	ft_printf("#0101");
	ret2 = ret1 > -1 ? ft_printf("|%+*.*jd|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0102");
	ret1 = fprintf(fppres, "|%+*.*zd|\n", width, precision, var);
	ft_printf("#0102");
	ret2 = ret1 > -1 ? ft_printf("|%+*.*zd|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0103");
	ret1 = fprintf(fppres, "|%+*.*d|\n", width, precision, var);
	ft_printf("#0103");
	ret2 = ret1 > -1 ? ft_printf("|%+*.*d|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0104");
	ret1 = fprintf(fppres, "|%+*.*i|\n", width, precision, var);
	ft_printf("#0104");
	ret2 = ret1 > -1 ? ft_printf("|%+*.*i|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0105");
	ret1 = fprintf(fppres, "|%+*.*hhi|\n", width, precision, var);
	ft_printf("#0105");
	ret2 = ret1 > -1 ? ft_printf("|%+*.*hhi|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0106");
	ret1 = fprintf(fppres, "|%+*.*hi|\n", width, precision, var);
	ft_printf("#0106");
	ret2 = ret1 > -1 ? ft_printf("|%+*.*hi|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0107");
	ret1 = fprintf(fppres, "|%+*.*li|\n", width, precision, var);
	ft_printf("#0107");
	ret2 = ret1 > -1 ? ft_printf("|%+*.*li|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0108");
	ret1 = fprintf(fppres, "|%+*.*lli|\n", width, precision, var);
	ft_printf("#0108");
	ret2 = ret1 > -1 ? ft_printf("|%+*.*lli|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0109");
	ret1 = fprintf(fppres, "|%+*.*ji|\n", width, precision, var);
	ft_printf("#0109");
	ret2 = ret1 > -1 ? ft_printf("|%+*.*ji|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0110");
	ret1 = fprintf(fppres, "|%+*.*zi|\n", width, precision, var);
	ft_printf("#0110");
	ret2 = ret1 > -1 ? ft_printf("|%+*.*zi|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0111");
	ret1 = fprintf(fppres, "|%+*.*i|\n", width, precision, var);
	ft_printf("#0111");
	ret2 = ret1 > -1 ? ft_printf("|%+*.*i|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0112");
	ret1 = fprintf(fppres, "|%+*.*o|\n", width, precision, var);
	ft_printf("#0112");
	ret2 = ret1 > -1 ? ft_printf("|%+*.*o|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0113");
	ret1 = fprintf(fppres, "|%+*.*hho|\n", width, precision, var);
	ft_printf("#0113");
	ret2 = ret1 > -1 ? ft_printf("|%+*.*hho|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0114");
	ret1 = fprintf(fppres, "|%+*.*ho|\n", width, precision, var);
	ft_printf("#0114");
	ret2 = ret1 > -1 ? ft_printf("|%+*.*ho|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0115");
	ret1 = fprintf(fppres, "|%+*.*lo|\n", width, precision, var);
	ft_printf("#0115");
	ret2 = ret1 > -1 ? ft_printf("|%+*.*lo|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0116");
	ret1 = fprintf(fppres, "|%+*.*llo|\n", width, precision, var);
	ft_printf("#0116");
	ret2 = ret1 > -1 ? ft_printf("|%+*.*llo|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0117");
	ret1 = fprintf(fppres, "|%+*.*jo|\n", width, precision, var);
	ft_printf("#0117");
	ret2 = ret1 > -1 ? ft_printf("|%+*.*jo|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0118");
	ret1 = fprintf(fppres, "|%+*.*zo|\n", width, precision, var);
	ft_printf("#0118");
	ret2 = ret1 > -1 ? ft_printf("|%+*.*zo|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0119");
	ret1 = fprintf(fppres, "|%+*.*o|\n", width, precision, var);
	ft_printf("#0119");
	ret2 = ret1 > -1 ? ft_printf("|%+*.*o|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0120");
	ret1 = fprintf(fppres, "|%+*.*u|\n", width, precision, var);
	ft_printf("#0120");
	ret2 = ret1 > -1 ? ft_printf("|%+*.*u|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0121");
	ret1 = fprintf(fppres, "|%+*.*hhu|\n", width, precision, var);
	ft_printf("#0121");
	ret2 = ret1 > -1 ? ft_printf("|%+*.*hhu|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0122");
	ret1 = fprintf(fppres, "|%+*.*hu|\n", width, precision, var);
	ft_printf("#0122");
	ret2 = ret1 > -1 ? ft_printf("|%+*.*hu|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0123");
	ret1 = fprintf(fppres, "|%+*.*lu|\n", width, precision, var);
	ft_printf("#0123");
	ret2 = ret1 > -1 ? ft_printf("|%+*.*lu|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0124");
	ret1 = fprintf(fppres, "|%+*.*llu|\n", width, precision, var);
	ft_printf("#0124");
	ret2 = ret1 > -1 ? ft_printf("|%+*.*llu|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0125");
	ret1 = fprintf(fppres, "|%+*.*ju|\n", width, precision, var);
	ft_printf("#0125");
	ret2 = ret1 > -1 ? ft_printf("|%+*.*ju|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0126");
	ret1 = fprintf(fppres, "|%+*.*zu|\n", width, precision, var);
	ft_printf("#0126");
	ret2 = ret1 > -1 ? ft_printf("|%+*.*zu|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0127");
	ret1 = fprintf(fppres, "|%+*.*u|\n", width, precision, var);
	ft_printf("#0127");
	ret2 = ret1 > -1 ? ft_printf("|%+*.*u|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0128");
	ret1 = fprintf(fppres, "|%+*.*x|\n", width, precision, var);
	ft_printf("#0128");
	ret2 = ret1 > -1 ? ft_printf("|%+*.*x|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0129");
	ret1 = fprintf(fppres, "|%+*.*hhx|\n", width, precision, var);
	ft_printf("#0129");
	ret2 = ret1 > -1 ? ft_printf("|%+*.*hhx|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0130");
	ret1 = fprintf(fppres, "|%+*.*hx|\n", width, precision, var);
	ft_printf("#0130");
	ret2 = ret1 > -1 ? ft_printf("|%+*.*hx|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0131");
	ret1 = fprintf(fppres, "|%+*.*lx|\n", width, precision, var);
	ft_printf("#0131");
	ret2 = ret1 > -1 ? ft_printf("|%+*.*lx|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0132");
	ret1 = fprintf(fppres, "|%+*.*llx|\n", width, precision, var);
	ft_printf("#0132");
	ret2 = ret1 > -1 ? ft_printf("|%+*.*llx|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0133");
	ret1 = fprintf(fppres, "|%+*.*jx|\n", width, precision, var);
	ft_printf("#0133");
	ret2 = ret1 > -1 ? ft_printf("|%+*.*jx|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0134");
	ret1 = fprintf(fppres, "|%+*.*zx|\n", width, precision, var);
	ft_printf("#0134");
	ret2 = ret1 > -1 ? ft_printf("|%+*.*zx|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0135");
	ret1 = fprintf(fppres, "|%+*.*x|\n", width, precision, var);
	ft_printf("#0135");
	ret2 = ret1 > -1 ? ft_printf("|%+*.*x|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0136");
	ret1 = fprintf(fppres, "|%+*.*X|\n", width, precision, var);
	ft_printf("#0136");
	ret2 = ret1 > -1 ? ft_printf("|%+*.*X|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0137");
	ret1 = fprintf(fppres, "|%+*.*hhX|\n", width, precision, var);
	ft_printf("#0137");
	ret2 = ret1 > -1 ? ft_printf("|%+*.*hhX|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0138");
	ret1 = fprintf(fppres, "|%+*.*hX|\n", width, precision, var);
	ft_printf("#0138");
	ret2 = ret1 > -1 ? ft_printf("|%+*.*hX|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0139");
	ret1 = fprintf(fppres, "|%+*.*lX|\n", width, precision, var);
	ft_printf("#0139");
	ret2 = ret1 > -1 ? ft_printf("|%+*.*lX|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0140");
	ret1 = fprintf(fppres, "|%+*.*llX|\n", width, precision, var);
	ft_printf("#0140");
	ret2 = ret1 > -1 ? ft_printf("|%+*.*llX|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0141");
	ret1 = fprintf(fppres, "|%+*.*jX|\n", width, precision, var);
	ft_printf("#0141");
	ret2 = ret1 > -1 ? ft_printf("|%+*.*jX|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0142");
	ret1 = fprintf(fppres, "|%+*.*zX|\n", width, precision, var);
	ft_printf("#0142");
	ret2 = ret1 > -1 ? ft_printf("|%+*.*zX|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0143");
	ret1 = fprintf(fppres, "|%+*.*X|\n", width, precision, var);
	ft_printf("#0143");
	ret2 = ret1 > -1 ? ft_printf("|%+*.*X|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0144");
	ret1 = fprintf(fppres, "|%0+*.*d|\n", width, precision, var);
	ft_printf("#0144");
	ret2 = ret1 > -1 ? ft_printf("|%0+*.*d|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0145");
	ret1 = fprintf(fppres, "|%0+*.*hhd|\n", width, precision, var);
	ft_printf("#0145");
	ret2 = ret1 > -1 ? ft_printf("|%0+*.*hhd|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0146");
	ret1 = fprintf(fppres, "|%0+*.*hd|\n", width, precision, var);
	ft_printf("#0146");
	ret2 = ret1 > -1 ? ft_printf("|%0+*.*hd|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0147");
	ret1 = fprintf(fppres, "|%0+*.*ld|\n", width, precision, var);
	ft_printf("#0147");
	ret2 = ret1 > -1 ? ft_printf("|%0+*.*ld|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0148");
	ret1 = fprintf(fppres, "|%0+*.*lld|\n", width, precision, var);
	ft_printf("#0148");
	ret2 = ret1 > -1 ? ft_printf("|%0+*.*lld|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0149");
	ret1 = fprintf(fppres, "|%0+*.*jd|\n", width, precision, var);
	ft_printf("#0149");
	ret2 = ret1 > -1 ? ft_printf("|%0+*.*jd|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0150");
	ret1 = fprintf(fppres, "|%0+*.*zd|\n", width, precision, var);
	ft_printf("#0150");
	ret2 = ret1 > -1 ? ft_printf("|%0+*.*zd|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0151");
	ret1 = fprintf(fppres, "|%0+*.*d|\n", width, precision, var);
	ft_printf("#0151");
	ret2 = ret1 > -1 ? ft_printf("|%0+*.*d|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0152");
	ret1 = fprintf(fppres, "|%0+*.*i|\n", width, precision, var);
	ft_printf("#0152");
	ret2 = ret1 > -1 ? ft_printf("|%0+*.*i|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0153");
	ret1 = fprintf(fppres, "|%0+*.*hhi|\n", width, precision, var);
	ft_printf("#0153");
	ret2 = ret1 > -1 ? ft_printf("|%0+*.*hhi|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0154");
	ret1 = fprintf(fppres, "|%0+*.*hi|\n", width, precision, var);
	ft_printf("#0154");
	ret2 = ret1 > -1 ? ft_printf("|%0+*.*hi|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0155");
	ret1 = fprintf(fppres, "|%0+*.*li|\n", width, precision, var);
	ft_printf("#0155");
	ret2 = ret1 > -1 ? ft_printf("|%0+*.*li|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0156");
	ret1 = fprintf(fppres, "|%0+*.*lli|\n", width, precision, var);
	ft_printf("#0156");
	ret2 = ret1 > -1 ? ft_printf("|%0+*.*lli|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0157");
	ret1 = fprintf(fppres, "|%0+*.*ji|\n", width, precision, var);
	ft_printf("#0157");
	ret2 = ret1 > -1 ? ft_printf("|%0+*.*ji|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0158");
	ret1 = fprintf(fppres, "|%0+*.*zi|\n", width, precision, var);
	ft_printf("#0158");
	ret2 = ret1 > -1 ? ft_printf("|%0+*.*zi|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0159");
	ret1 = fprintf(fppres, "|%0+*.*i|\n", width, precision, var);
	ft_printf("#0159");
	ret2 = ret1 > -1 ? ft_printf("|%0+*.*i|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0160");
	ret1 = fprintf(fppres, "|%0+*.*o|\n", width, precision, var);
	ft_printf("#0160");
	ret2 = ret1 > -1 ? ft_printf("|%0+*.*o|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0161");
	ret1 = fprintf(fppres, "|%0+*.*hho|\n", width, precision, var);
	ft_printf("#0161");
	ret2 = ret1 > -1 ? ft_printf("|%0+*.*hho|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0162");
	ret1 = fprintf(fppres, "|%0+*.*ho|\n", width, precision, var);
	ft_printf("#0162");
	ret2 = ret1 > -1 ? ft_printf("|%0+*.*ho|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0163");
	ret1 = fprintf(fppres, "|%0+*.*lo|\n", width, precision, var);
	ft_printf("#0163");
	ret2 = ret1 > -1 ? ft_printf("|%0+*.*lo|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0164");
	ret1 = fprintf(fppres, "|%0+*.*llo|\n", width, precision, var);
	ft_printf("#0164");
	ret2 = ret1 > -1 ? ft_printf("|%0+*.*llo|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0165");
	ret1 = fprintf(fppres, "|%0+*.*jo|\n", width, precision, var);
	ft_printf("#0165");
	ret2 = ret1 > -1 ? ft_printf("|%0+*.*jo|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0166");
	ret1 = fprintf(fppres, "|%0+*.*zo|\n", width, precision, var);
	ft_printf("#0166");
	ret2 = ret1 > -1 ? ft_printf("|%0+*.*zo|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0167");
	ret1 = fprintf(fppres, "|%0+*.*o|\n", width, precision, var);
	ft_printf("#0167");
	ret2 = ret1 > -1 ? ft_printf("|%0+*.*o|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0168");
	ret1 = fprintf(fppres, "|%0+*.*u|\n", width, precision, var);
	ft_printf("#0168");
	ret2 = ret1 > -1 ? ft_printf("|%0+*.*u|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0169");
	ret1 = fprintf(fppres, "|%0+*.*hhu|\n", width, precision, var);
	ft_printf("#0169");
	ret2 = ret1 > -1 ? ft_printf("|%0+*.*hhu|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0170");
	ret1 = fprintf(fppres, "|%0+*.*hu|\n", width, precision, var);
	ft_printf("#0170");
	ret2 = ret1 > -1 ? ft_printf("|%0+*.*hu|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0171");
	ret1 = fprintf(fppres, "|%0+*.*lu|\n", width, precision, var);
	ft_printf("#0171");
	ret2 = ret1 > -1 ? ft_printf("|%0+*.*lu|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0172");
	ret1 = fprintf(fppres, "|%0+*.*llu|\n", width, precision, var);
	ft_printf("#0172");
	ret2 = ret1 > -1 ? ft_printf("|%0+*.*llu|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0173");
	ret1 = fprintf(fppres, "|%0+*.*ju|\n", width, precision, var);
	ft_printf("#0173");
	ret2 = ret1 > -1 ? ft_printf("|%0+*.*ju|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0174");
	ret1 = fprintf(fppres, "|%0+*.*zu|\n", width, precision, var);
	ft_printf("#0174");
	ret2 = ret1 > -1 ? ft_printf("|%0+*.*zu|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0175");
	ret1 = fprintf(fppres, "|%0+*.*u|\n", width, precision, var);
	ft_printf("#0175");
	ret2 = ret1 > -1 ? ft_printf("|%0+*.*u|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0176");
	ret1 = fprintf(fppres, "|%0+*.*x|\n", width, precision, var);
	ft_printf("#0176");
	ret2 = ret1 > -1 ? ft_printf("|%0+*.*x|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0177");
	ret1 = fprintf(fppres, "|%0+*.*hhx|\n", width, precision, var);
	ft_printf("#0177");
	ret2 = ret1 > -1 ? ft_printf("|%0+*.*hhx|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0178");
	ret1 = fprintf(fppres, "|%0+*.*hx|\n", width, precision, var);
	ft_printf("#0178");
	ret2 = ret1 > -1 ? ft_printf("|%0+*.*hx|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0179");
	ret1 = fprintf(fppres, "|%0+*.*lx|\n", width, precision, var);
	ft_printf("#0179");
	ret2 = ret1 > -1 ? ft_printf("|%0+*.*lx|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0180");
	ret1 = fprintf(fppres, "|%0+*.*llx|\n", width, precision, var);
	ft_printf("#0180");
	ret2 = ret1 > -1 ? ft_printf("|%0+*.*llx|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0181");
	ret1 = fprintf(fppres, "|%0+*.*jx|\n", width, precision, var);
	ft_printf("#0181");
	ret2 = ret1 > -1 ? ft_printf("|%0+*.*jx|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0182");
	ret1 = fprintf(fppres, "|%0+*.*zx|\n", width, precision, var);
	ft_printf("#0182");
	ret2 = ret1 > -1 ? ft_printf("|%0+*.*zx|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0183");
	ret1 = fprintf(fppres, "|%0+*.*x|\n", width, precision, var);
	ft_printf("#0183");
	ret2 = ret1 > -1 ? ft_printf("|%0+*.*x|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0184");
	ret1 = fprintf(fppres, "|%0+*.*X|\n", width, precision, var);
	ft_printf("#0184");
	ret2 = ret1 > -1 ? ft_printf("|%0+*.*X|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0185");
	ret1 = fprintf(fppres, "|%0+*.*hhX|\n", width, precision, var);
	ft_printf("#0185");
	ret2 = ret1 > -1 ? ft_printf("|%0+*.*hhX|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0186");
	ret1 = fprintf(fppres, "|%0+*.*hX|\n", width, precision, var);
	ft_printf("#0186");
	ret2 = ret1 > -1 ? ft_printf("|%0+*.*hX|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0187");
	ret1 = fprintf(fppres, "|%0+*.*lX|\n", width, precision, var);
	ft_printf("#0187");
	ret2 = ret1 > -1 ? ft_printf("|%0+*.*lX|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0188");
	ret1 = fprintf(fppres, "|%0+*.*llX|\n", width, precision, var);
	ft_printf("#0188");
	ret2 = ret1 > -1 ? ft_printf("|%0+*.*llX|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0189");
	ret1 = fprintf(fppres, "|%0+*.*jX|\n", width, precision, var);
	ft_printf("#0189");
	ret2 = ret1 > -1 ? ft_printf("|%0+*.*jX|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0190");
	ret1 = fprintf(fppres, "|%0+*.*zX|\n", width, precision, var);
	ft_printf("#0190");
	ret2 = ret1 > -1 ? ft_printf("|%0+*.*zX|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0191");
	ret1 = fprintf(fppres, "|%0+*.*X|\n", width, precision, var);
	ft_printf("#0191");
	ret2 = ret1 > -1 ? ft_printf("|%0+*.*X|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0192");
	ret1 = fprintf(fppres, "|%-*.*d|\n", width, precision, var);
	ft_printf("#0192");
	ret2 = ret1 > -1 ? ft_printf("|%-*.*d|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0193");
	ret1 = fprintf(fppres, "|%-*.*hhd|\n", width, precision, var);
	ft_printf("#0193");
	ret2 = ret1 > -1 ? ft_printf("|%-*.*hhd|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0194");
	ret1 = fprintf(fppres, "|%-*.*hd|\n", width, precision, var);
	ft_printf("#0194");
	ret2 = ret1 > -1 ? ft_printf("|%-*.*hd|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0195");
	ret1 = fprintf(fppres, "|%-*.*ld|\n", width, precision, var);
	ft_printf("#0195");
	ret2 = ret1 > -1 ? ft_printf("|%-*.*ld|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0196");
	ret1 = fprintf(fppres, "|%-*.*lld|\n", width, precision, var);
	ft_printf("#0196");
	ret2 = ret1 > -1 ? ft_printf("|%-*.*lld|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0197");
	ret1 = fprintf(fppres, "|%-*.*jd|\n", width, precision, var);
	ft_printf("#0197");
	ret2 = ret1 > -1 ? ft_printf("|%-*.*jd|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0198");
	ret1 = fprintf(fppres, "|%-*.*zd|\n", width, precision, var);
	ft_printf("#0198");
	ret2 = ret1 > -1 ? ft_printf("|%-*.*zd|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0199");
	ret1 = fprintf(fppres, "|%-*.*d|\n", width, precision, var);
	ft_printf("#0199");
	ret2 = ret1 > -1 ? ft_printf("|%-*.*d|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0200");
	ret1 = fprintf(fppres, "|%-*.*i|\n", width, precision, var);
	ft_printf("#0200");
	ret2 = ret1 > -1 ? ft_printf("|%-*.*i|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0201");
	ret1 = fprintf(fppres, "|%-*.*hhi|\n", width, precision, var);
	ft_printf("#0201");
	ret2 = ret1 > -1 ? ft_printf("|%-*.*hhi|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0202");
	ret1 = fprintf(fppres, "|%-*.*hi|\n", width, precision, var);
	ft_printf("#0202");
	ret2 = ret1 > -1 ? ft_printf("|%-*.*hi|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0203");
	ret1 = fprintf(fppres, "|%-*.*li|\n", width, precision, var);
	ft_printf("#0203");
	ret2 = ret1 > -1 ? ft_printf("|%-*.*li|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0204");
	ret1 = fprintf(fppres, "|%-*.*lli|\n", width, precision, var);
	ft_printf("#0204");
	ret2 = ret1 > -1 ? ft_printf("|%-*.*lli|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0205");
	ret1 = fprintf(fppres, "|%-*.*ji|\n", width, precision, var);
	ft_printf("#0205");
	ret2 = ret1 > -1 ? ft_printf("|%-*.*ji|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0206");
	ret1 = fprintf(fppres, "|%-*.*zi|\n", width, precision, var);
	ft_printf("#0206");
	ret2 = ret1 > -1 ? ft_printf("|%-*.*zi|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0207");
	ret1 = fprintf(fppres, "|%-*.*i|\n", width, precision, var);
	ft_printf("#0207");
	ret2 = ret1 > -1 ? ft_printf("|%-*.*i|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0208");
	ret1 = fprintf(fppres, "|%-*.*o|\n", width, precision, var);
	ft_printf("#0208");
	ret2 = ret1 > -1 ? ft_printf("|%-*.*o|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0209");
	ret1 = fprintf(fppres, "|%-*.*hho|\n", width, precision, var);
	ft_printf("#0209");
	ret2 = ret1 > -1 ? ft_printf("|%-*.*hho|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0210");
	ret1 = fprintf(fppres, "|%-*.*ho|\n", width, precision, var);
	ft_printf("#0210");
	ret2 = ret1 > -1 ? ft_printf("|%-*.*ho|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0211");
	ret1 = fprintf(fppres, "|%-*.*lo|\n", width, precision, var);
	ft_printf("#0211");
	ret2 = ret1 > -1 ? ft_printf("|%-*.*lo|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0212");
	ret1 = fprintf(fppres, "|%-*.*llo|\n", width, precision, var);
	ft_printf("#0212");
	ret2 = ret1 > -1 ? ft_printf("|%-*.*llo|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0213");
	ret1 = fprintf(fppres, "|%-*.*jo|\n", width, precision, var);
	ft_printf("#0213");
	ret2 = ret1 > -1 ? ft_printf("|%-*.*jo|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0214");
	ret1 = fprintf(fppres, "|%-*.*zo|\n", width, precision, var);
	ft_printf("#0214");
	ret2 = ret1 > -1 ? ft_printf("|%-*.*zo|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0215");
	ret1 = fprintf(fppres, "|%-*.*o|\n", width, precision, var);
	ft_printf("#0215");
	ret2 = ret1 > -1 ? ft_printf("|%-*.*o|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0216");
	ret1 = fprintf(fppres, "|%-*.*u|\n", width, precision, var);
	ft_printf("#0216");
	ret2 = ret1 > -1 ? ft_printf("|%-*.*u|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0217");
	ret1 = fprintf(fppres, "|%-*.*hhu|\n", width, precision, var);
	ft_printf("#0217");
	ret2 = ret1 > -1 ? ft_printf("|%-*.*hhu|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0218");
	ret1 = fprintf(fppres, "|%-*.*hu|\n", width, precision, var);
	ft_printf("#0218");
	ret2 = ret1 > -1 ? ft_printf("|%-*.*hu|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0219");
	ret1 = fprintf(fppres, "|%-*.*lu|\n", width, precision, var);
	ft_printf("#0219");
	ret2 = ret1 > -1 ? ft_printf("|%-*.*lu|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0220");
	ret1 = fprintf(fppres, "|%-*.*llu|\n", width, precision, var);
	ft_printf("#0220");
	ret2 = ret1 > -1 ? ft_printf("|%-*.*llu|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0221");
	ret1 = fprintf(fppres, "|%-*.*ju|\n", width, precision, var);
	ft_printf("#0221");
	ret2 = ret1 > -1 ? ft_printf("|%-*.*ju|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0222");
	ret1 = fprintf(fppres, "|%-*.*zu|\n", width, precision, var);
	ft_printf("#0222");
	ret2 = ret1 > -1 ? ft_printf("|%-*.*zu|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0223");
	ret1 = fprintf(fppres, "|%-*.*u|\n", width, precision, var);
	ft_printf("#0223");
	ret2 = ret1 > -1 ? ft_printf("|%-*.*u|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0224");
	ret1 = fprintf(fppres, "|%-*.*x|\n", width, precision, var);
	ft_printf("#0224");
	ret2 = ret1 > -1 ? ft_printf("|%-*.*x|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0225");
	ret1 = fprintf(fppres, "|%-*.*hhx|\n", width, precision, var);
	ft_printf("#0225");
	ret2 = ret1 > -1 ? ft_printf("|%-*.*hhx|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0226");
	ret1 = fprintf(fppres, "|%-*.*hx|\n", width, precision, var);
	ft_printf("#0226");
	ret2 = ret1 > -1 ? ft_printf("|%-*.*hx|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0227");
	ret1 = fprintf(fppres, "|%-*.*lx|\n", width, precision, var);
	ft_printf("#0227");
	ret2 = ret1 > -1 ? ft_printf("|%-*.*lx|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0228");
	ret1 = fprintf(fppres, "|%-*.*llx|\n", width, precision, var);
	ft_printf("#0228");
	ret2 = ret1 > -1 ? ft_printf("|%-*.*llx|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0229");
	ret1 = fprintf(fppres, "|%-*.*jx|\n", width, precision, var);
	ft_printf("#0229");
	ret2 = ret1 > -1 ? ft_printf("|%-*.*jx|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0230");
	ret1 = fprintf(fppres, "|%-*.*zx|\n", width, precision, var);
	ft_printf("#0230");
	ret2 = ret1 > -1 ? ft_printf("|%-*.*zx|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0231");
	ret1 = fprintf(fppres, "|%-*.*x|\n", width, precision, var);
	ft_printf("#0231");
	ret2 = ret1 > -1 ? ft_printf("|%-*.*x|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0232");
	ret1 = fprintf(fppres, "|%-*.*X|\n", width, precision, var);
	ft_printf("#0232");
	ret2 = ret1 > -1 ? ft_printf("|%-*.*X|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0233");
	ret1 = fprintf(fppres, "|%-*.*hhX|\n", width, precision, var);
	ft_printf("#0233");
	ret2 = ret1 > -1 ? ft_printf("|%-*.*hhX|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0234");
	ret1 = fprintf(fppres, "|%-*.*hX|\n", width, precision, var);
	ft_printf("#0234");
	ret2 = ret1 > -1 ? ft_printf("|%-*.*hX|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0235");
	ret1 = fprintf(fppres, "|%-*.*lX|\n", width, precision, var);
	ft_printf("#0235");
	ret2 = ret1 > -1 ? ft_printf("|%-*.*lX|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0236");
	ret1 = fprintf(fppres, "|%-*.*llX|\n", width, precision, var);
	ft_printf("#0236");
	ret2 = ret1 > -1 ? ft_printf("|%-*.*llX|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0237");
	ret1 = fprintf(fppres, "|%-*.*jX|\n", width, precision, var);
	ft_printf("#0237");
	ret2 = ret1 > -1 ? ft_printf("|%-*.*jX|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0238");
	ret1 = fprintf(fppres, "|%-*.*zX|\n", width, precision, var);
	ft_printf("#0238");
	ret2 = ret1 > -1 ? ft_printf("|%-*.*zX|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0239");
	ret1 = fprintf(fppres, "|%-*.*X|\n", width, precision, var);
	ft_printf("#0239");
	ret2 = ret1 > -1 ? ft_printf("|%-*.*X|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0240");
	ret1 = fprintf(fppres, "|%0-*.*d|\n", width, precision, var);
	ft_printf("#0240");
	ret2 = ret1 > -1 ? ft_printf("|%0-*.*d|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0241");
	ret1 = fprintf(fppres, "|%0-*.*hhd|\n", width, precision, var);
	ft_printf("#0241");
	ret2 = ret1 > -1 ? ft_printf("|%0-*.*hhd|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0242");
	ret1 = fprintf(fppres, "|%0-*.*hd|\n", width, precision, var);
	ft_printf("#0242");
	ret2 = ret1 > -1 ? ft_printf("|%0-*.*hd|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0243");
	ret1 = fprintf(fppres, "|%0-*.*ld|\n", width, precision, var);
	ft_printf("#0243");
	ret2 = ret1 > -1 ? ft_printf("|%0-*.*ld|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0244");
	ret1 = fprintf(fppres, "|%0-*.*lld|\n", width, precision, var);
	ft_printf("#0244");
	ret2 = ret1 > -1 ? ft_printf("|%0-*.*lld|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0245");
	ret1 = fprintf(fppres, "|%0-*.*jd|\n", width, precision, var);
	ft_printf("#0245");
	ret2 = ret1 > -1 ? ft_printf("|%0-*.*jd|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0246");
	ret1 = fprintf(fppres, "|%0-*.*zd|\n", width, precision, var);
	ft_printf("#0246");
	ret2 = ret1 > -1 ? ft_printf("|%0-*.*zd|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0247");
	ret1 = fprintf(fppres, "|%0-*.*d|\n", width, precision, var);
	ft_printf("#0247");
	ret2 = ret1 > -1 ? ft_printf("|%0-*.*d|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0248");
	ret1 = fprintf(fppres, "|%0-*.*i|\n", width, precision, var);
	ft_printf("#0248");
	ret2 = ret1 > -1 ? ft_printf("|%0-*.*i|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0249");
	ret1 = fprintf(fppres, "|%0-*.*hhi|\n", width, precision, var);
	ft_printf("#0249");
	ret2 = ret1 > -1 ? ft_printf("|%0-*.*hhi|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0250");
	ret1 = fprintf(fppres, "|%0-*.*hi|\n", width, precision, var);
	ft_printf("#0250");
	ret2 = ret1 > -1 ? ft_printf("|%0-*.*hi|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0251");
	ret1 = fprintf(fppres, "|%0-*.*li|\n", width, precision, var);
	ft_printf("#0251");
	ret2 = ret1 > -1 ? ft_printf("|%0-*.*li|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0252");
	ret1 = fprintf(fppres, "|%0-*.*lli|\n", width, precision, var);
	ft_printf("#0252");
	ret2 = ret1 > -1 ? ft_printf("|%0-*.*lli|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0253");
	ret1 = fprintf(fppres, "|%0-*.*ji|\n", width, precision, var);
	ft_printf("#0253");
	ret2 = ret1 > -1 ? ft_printf("|%0-*.*ji|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0254");
	ret1 = fprintf(fppres, "|%0-*.*zi|\n", width, precision, var);
	ft_printf("#0254");
	ret2 = ret1 > -1 ? ft_printf("|%0-*.*zi|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0255");
	ret1 = fprintf(fppres, "|%0-*.*i|\n", width, precision, var);
	ft_printf("#0255");
	ret2 = ret1 > -1 ? ft_printf("|%0-*.*i|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0256");
	ret1 = fprintf(fppres, "|%0-*.*o|\n", width, precision, var);
	ft_printf("#0256");
	ret2 = ret1 > -1 ? ft_printf("|%0-*.*o|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0257");
	ret1 = fprintf(fppres, "|%0-*.*hho|\n", width, precision, var);
	ft_printf("#0257");
	ret2 = ret1 > -1 ? ft_printf("|%0-*.*hho|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0258");
	ret1 = fprintf(fppres, "|%0-*.*ho|\n", width, precision, var);
	ft_printf("#0258");
	ret2 = ret1 > -1 ? ft_printf("|%0-*.*ho|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0259");
	ret1 = fprintf(fppres, "|%0-*.*lo|\n", width, precision, var);
	ft_printf("#0259");
	ret2 = ret1 > -1 ? ft_printf("|%0-*.*lo|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0260");
	ret1 = fprintf(fppres, "|%0-*.*llo|\n", width, precision, var);
	ft_printf("#0260");
	ret2 = ret1 > -1 ? ft_printf("|%0-*.*llo|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0261");
	ret1 = fprintf(fppres, "|%0-*.*jo|\n", width, precision, var);
	ft_printf("#0261");
	ret2 = ret1 > -1 ? ft_printf("|%0-*.*jo|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0262");
	ret1 = fprintf(fppres, "|%0-*.*zo|\n", width, precision, var);
	ft_printf("#0262");
	ret2 = ret1 > -1 ? ft_printf("|%0-*.*zo|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0263");
	ret1 = fprintf(fppres, "|%0-*.*o|\n", width, precision, var);
	ft_printf("#0263");
	ret2 = ret1 > -1 ? ft_printf("|%0-*.*o|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0264");
	ret1 = fprintf(fppres, "|%0-*.*u|\n", width, precision, var);
	ft_printf("#0264");
	ret2 = ret1 > -1 ? ft_printf("|%0-*.*u|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0265");
	ret1 = fprintf(fppres, "|%0-*.*hhu|\n", width, precision, var);
	ft_printf("#0265");
	ret2 = ret1 > -1 ? ft_printf("|%0-*.*hhu|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0266");
	ret1 = fprintf(fppres, "|%0-*.*hu|\n", width, precision, var);
	ft_printf("#0266");
	ret2 = ret1 > -1 ? ft_printf("|%0-*.*hu|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0267");
	ret1 = fprintf(fppres, "|%0-*.*lu|\n", width, precision, var);
	ft_printf("#0267");
	ret2 = ret1 > -1 ? ft_printf("|%0-*.*lu|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0268");
	ret1 = fprintf(fppres, "|%0-*.*llu|\n", width, precision, var);
	ft_printf("#0268");
	ret2 = ret1 > -1 ? ft_printf("|%0-*.*llu|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0269");
	ret1 = fprintf(fppres, "|%0-*.*ju|\n", width, precision, var);
	ft_printf("#0269");
	ret2 = ret1 > -1 ? ft_printf("|%0-*.*ju|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0270");
	ret1 = fprintf(fppres, "|%0-*.*zu|\n", width, precision, var);
	ft_printf("#0270");
	ret2 = ret1 > -1 ? ft_printf("|%0-*.*zu|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0271");
	ret1 = fprintf(fppres, "|%0-*.*u|\n", width, precision, var);
	ft_printf("#0271");
	ret2 = ret1 > -1 ? ft_printf("|%0-*.*u|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0272");
	ret1 = fprintf(fppres, "|%0-*.*x|\n", width, precision, var);
	ft_printf("#0272");
	ret2 = ret1 > -1 ? ft_printf("|%0-*.*x|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0273");
	ret1 = fprintf(fppres, "|%0-*.*hhx|\n", width, precision, var);
	ft_printf("#0273");
	ret2 = ret1 > -1 ? ft_printf("|%0-*.*hhx|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0274");
	ret1 = fprintf(fppres, "|%0-*.*hx|\n", width, precision, var);
	ft_printf("#0274");
	ret2 = ret1 > -1 ? ft_printf("|%0-*.*hx|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0275");
	ret1 = fprintf(fppres, "|%0-*.*lx|\n", width, precision, var);
	ft_printf("#0275");
	ret2 = ret1 > -1 ? ft_printf("|%0-*.*lx|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0276");
	ret1 = fprintf(fppres, "|%0-*.*llx|\n", width, precision, var);
	ft_printf("#0276");
	ret2 = ret1 > -1 ? ft_printf("|%0-*.*llx|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0277");
	ret1 = fprintf(fppres, "|%0-*.*jx|\n", width, precision, var);
	ft_printf("#0277");
	ret2 = ret1 > -1 ? ft_printf("|%0-*.*jx|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0278");
	ret1 = fprintf(fppres, "|%0-*.*zx|\n", width, precision, var);
	ft_printf("#0278");
	ret2 = ret1 > -1 ? ft_printf("|%0-*.*zx|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0279");
	ret1 = fprintf(fppres, "|%0-*.*x|\n", width, precision, var);
	ft_printf("#0279");
	ret2 = ret1 > -1 ? ft_printf("|%0-*.*x|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0280");
	ret1 = fprintf(fppres, "|%0-*.*X|\n", width, precision, var);
	ft_printf("#0280");
	ret2 = ret1 > -1 ? ft_printf("|%0-*.*X|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0281");
	ret1 = fprintf(fppres, "|%0-*.*hhX|\n", width, precision, var);
	ft_printf("#0281");
	ret2 = ret1 > -1 ? ft_printf("|%0-*.*hhX|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0282");
	ret1 = fprintf(fppres, "|%0-*.*hX|\n", width, precision, var);
	ft_printf("#0282");
	ret2 = ret1 > -1 ? ft_printf("|%0-*.*hX|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0283");
	ret1 = fprintf(fppres, "|%0-*.*lX|\n", width, precision, var);
	ft_printf("#0283");
	ret2 = ret1 > -1 ? ft_printf("|%0-*.*lX|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0284");
	ret1 = fprintf(fppres, "|%0-*.*llX|\n", width, precision, var);
	ft_printf("#0284");
	ret2 = ret1 > -1 ? ft_printf("|%0-*.*llX|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0285");
	ret1 = fprintf(fppres, "|%0-*.*jX|\n", width, precision, var);
	ft_printf("#0285");
	ret2 = ret1 > -1 ? ft_printf("|%0-*.*jX|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0286");
	ret1 = fprintf(fppres, "|%0-*.*zX|\n", width, precision, var);
	ft_printf("#0286");
	ret2 = ret1 > -1 ? ft_printf("|%0-*.*zX|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0287");
	ret1 = fprintf(fppres, "|%0-*.*X|\n", width, precision, var);
	ft_printf("#0287");
	ret2 = ret1 > -1 ? ft_printf("|%0-*.*X|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0288");
	ret1 = fprintf(fppres, "|%+-*.*d|\n", width, precision, var);
	ft_printf("#0288");
	ret2 = ret1 > -1 ? ft_printf("|%+-*.*d|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0289");
	ret1 = fprintf(fppres, "|%+-*.*hhd|\n", width, precision, var);
	ft_printf("#0289");
	ret2 = ret1 > -1 ? ft_printf("|%+-*.*hhd|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0290");
	ret1 = fprintf(fppres, "|%+-*.*hd|\n", width, precision, var);
	ft_printf("#0290");
	ret2 = ret1 > -1 ? ft_printf("|%+-*.*hd|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0291");
	ret1 = fprintf(fppres, "|%+-*.*ld|\n", width, precision, var);
	ft_printf("#0291");
	ret2 = ret1 > -1 ? ft_printf("|%+-*.*ld|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0292");
	ret1 = fprintf(fppres, "|%+-*.*lld|\n", width, precision, var);
	ft_printf("#0292");
	ret2 = ret1 > -1 ? ft_printf("|%+-*.*lld|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0293");
	ret1 = fprintf(fppres, "|%+-*.*jd|\n", width, precision, var);
	ft_printf("#0293");
	ret2 = ret1 > -1 ? ft_printf("|%+-*.*jd|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0294");
	ret1 = fprintf(fppres, "|%+-*.*zd|\n", width, precision, var);
	ft_printf("#0294");
	ret2 = ret1 > -1 ? ft_printf("|%+-*.*zd|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0295");
	ret1 = fprintf(fppres, "|%+-*.*d|\n", width, precision, var);
	ft_printf("#0295");
	ret2 = ret1 > -1 ? ft_printf("|%+-*.*d|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0296");
	ret1 = fprintf(fppres, "|%+-*.*i|\n", width, precision, var);
	ft_printf("#0296");
	ret2 = ret1 > -1 ? ft_printf("|%+-*.*i|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0297");
	ret1 = fprintf(fppres, "|%+-*.*hhi|\n", width, precision, var);
	ft_printf("#0297");
	ret2 = ret1 > -1 ? ft_printf("|%+-*.*hhi|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0298");
	ret1 = fprintf(fppres, "|%+-*.*hi|\n", width, precision, var);
	ft_printf("#0298");
	ret2 = ret1 > -1 ? ft_printf("|%+-*.*hi|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0299");
	ret1 = fprintf(fppres, "|%+-*.*li|\n", width, precision, var);
	ft_printf("#0299");
	ret2 = ret1 > -1 ? ft_printf("|%+-*.*li|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0300");
	ret1 = fprintf(fppres, "|%+-*.*lli|\n", width, precision, var);
	ft_printf("#0300");
	ret2 = ret1 > -1 ? ft_printf("|%+-*.*lli|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0301");
	ret1 = fprintf(fppres, "|%+-*.*ji|\n", width, precision, var);
	ft_printf("#0301");
	ret2 = ret1 > -1 ? ft_printf("|%+-*.*ji|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0302");
	ret1 = fprintf(fppres, "|%+-*.*zi|\n", width, precision, var);
	ft_printf("#0302");
	ret2 = ret1 > -1 ? ft_printf("|%+-*.*zi|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0303");
	ret1 = fprintf(fppres, "|%+-*.*i|\n", width, precision, var);
	ft_printf("#0303");
	ret2 = ret1 > -1 ? ft_printf("|%+-*.*i|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0304");
	ret1 = fprintf(fppres, "|%+-*.*o|\n", width, precision, var);
	ft_printf("#0304");
	ret2 = ret1 > -1 ? ft_printf("|%+-*.*o|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0305");
	ret1 = fprintf(fppres, "|%+-*.*hho|\n", width, precision, var);
	ft_printf("#0305");
	ret2 = ret1 > -1 ? ft_printf("|%+-*.*hho|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0306");
	ret1 = fprintf(fppres, "|%+-*.*ho|\n", width, precision, var);
	ft_printf("#0306");
	ret2 = ret1 > -1 ? ft_printf("|%+-*.*ho|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0307");
	ret1 = fprintf(fppres, "|%+-*.*lo|\n", width, precision, var);
	ft_printf("#0307");
	ret2 = ret1 > -1 ? ft_printf("|%+-*.*lo|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0308");
	ret1 = fprintf(fppres, "|%+-*.*llo|\n", width, precision, var);
	ft_printf("#0308");
	ret2 = ret1 > -1 ? ft_printf("|%+-*.*llo|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0309");
	ret1 = fprintf(fppres, "|%+-*.*jo|\n", width, precision, var);
	ft_printf("#0309");
	ret2 = ret1 > -1 ? ft_printf("|%+-*.*jo|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0310");
	ret1 = fprintf(fppres, "|%+-*.*zo|\n", width, precision, var);
	ft_printf("#0310");
	ret2 = ret1 > -1 ? ft_printf("|%+-*.*zo|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0311");
	ret1 = fprintf(fppres, "|%+-*.*o|\n", width, precision, var);
	ft_printf("#0311");
	ret2 = ret1 > -1 ? ft_printf("|%+-*.*o|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0312");
	ret1 = fprintf(fppres, "|%+-*.*u|\n", width, precision, var);
	ft_printf("#0312");
	ret2 = ret1 > -1 ? ft_printf("|%+-*.*u|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0313");
	ret1 = fprintf(fppres, "|%+-*.*hhu|\n", width, precision, var);
	ft_printf("#0313");
	ret2 = ret1 > -1 ? ft_printf("|%+-*.*hhu|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0314");
	ret1 = fprintf(fppres, "|%+-*.*hu|\n", width, precision, var);
	ft_printf("#0314");
	ret2 = ret1 > -1 ? ft_printf("|%+-*.*hu|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0315");
	ret1 = fprintf(fppres, "|%+-*.*lu|\n", width, precision, var);
	ft_printf("#0315");
	ret2 = ret1 > -1 ? ft_printf("|%+-*.*lu|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0316");
	ret1 = fprintf(fppres, "|%+-*.*llu|\n", width, precision, var);
	ft_printf("#0316");
	ret2 = ret1 > -1 ? ft_printf("|%+-*.*llu|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0317");
	ret1 = fprintf(fppres, "|%+-*.*ju|\n", width, precision, var);
	ft_printf("#0317");
	ret2 = ret1 > -1 ? ft_printf("|%+-*.*ju|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0318");
	ret1 = fprintf(fppres, "|%+-*.*zu|\n", width, precision, var);
	ft_printf("#0318");
	ret2 = ret1 > -1 ? ft_printf("|%+-*.*zu|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0319");
	ret1 = fprintf(fppres, "|%+-*.*u|\n", width, precision, var);
	ft_printf("#0319");
	ret2 = ret1 > -1 ? ft_printf("|%+-*.*u|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0320");
	ret1 = fprintf(fppres, "|%+-*.*x|\n", width, precision, var);
	ft_printf("#0320");
	ret2 = ret1 > -1 ? ft_printf("|%+-*.*x|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0321");
	ret1 = fprintf(fppres, "|%+-*.*hhx|\n", width, precision, var);
	ft_printf("#0321");
	ret2 = ret1 > -1 ? ft_printf("|%+-*.*hhx|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0322");
	ret1 = fprintf(fppres, "|%+-*.*hx|\n", width, precision, var);
	ft_printf("#0322");
	ret2 = ret1 > -1 ? ft_printf("|%+-*.*hx|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0323");
	ret1 = fprintf(fppres, "|%+-*.*lx|\n", width, precision, var);
	ft_printf("#0323");
	ret2 = ret1 > -1 ? ft_printf("|%+-*.*lx|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0324");
	ret1 = fprintf(fppres, "|%+-*.*llx|\n", width, precision, var);
	ft_printf("#0324");
	ret2 = ret1 > -1 ? ft_printf("|%+-*.*llx|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0325");
	ret1 = fprintf(fppres, "|%+-*.*jx|\n", width, precision, var);
	ft_printf("#0325");
	ret2 = ret1 > -1 ? ft_printf("|%+-*.*jx|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0326");
	ret1 = fprintf(fppres, "|%+-*.*zx|\n", width, precision, var);
	ft_printf("#0326");
	ret2 = ret1 > -1 ? ft_printf("|%+-*.*zx|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0327");
	ret1 = fprintf(fppres, "|%+-*.*x|\n", width, precision, var);
	ft_printf("#0327");
	ret2 = ret1 > -1 ? ft_printf("|%+-*.*x|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0328");
	ret1 = fprintf(fppres, "|%+-*.*X|\n", width, precision, var);
	ft_printf("#0328");
	ret2 = ret1 > -1 ? ft_printf("|%+-*.*X|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0329");
	ret1 = fprintf(fppres, "|%+-*.*hhX|\n", width, precision, var);
	ft_printf("#0329");
	ret2 = ret1 > -1 ? ft_printf("|%+-*.*hhX|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0330");
	ret1 = fprintf(fppres, "|%+-*.*hX|\n", width, precision, var);
	ft_printf("#0330");
	ret2 = ret1 > -1 ? ft_printf("|%+-*.*hX|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0331");
	ret1 = fprintf(fppres, "|%+-*.*lX|\n", width, precision, var);
	ft_printf("#0331");
	ret2 = ret1 > -1 ? ft_printf("|%+-*.*lX|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0332");
	ret1 = fprintf(fppres, "|%+-*.*llX|\n", width, precision, var);
	ft_printf("#0332");
	ret2 = ret1 > -1 ? ft_printf("|%+-*.*llX|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0333");
	ret1 = fprintf(fppres, "|%+-*.*jX|\n", width, precision, var);
	ft_printf("#0333");
	ret2 = ret1 > -1 ? ft_printf("|%+-*.*jX|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0334");
	ret1 = fprintf(fppres, "|%+-*.*zX|\n", width, precision, var);
	ft_printf("#0334");
	ret2 = ret1 > -1 ? ft_printf("|%+-*.*zX|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0335");
	ret1 = fprintf(fppres, "|%+-*.*X|\n", width, precision, var);
	ft_printf("#0335");
	ret2 = ret1 > -1 ? ft_printf("|%+-*.*X|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0336");
	ret1 = fprintf(fppres, "|%0+-*.*d|\n", width, precision, var);
	ft_printf("#0336");
	ret2 = ret1 > -1 ? ft_printf("|%0+-*.*d|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0337");
	ret1 = fprintf(fppres, "|%0+-*.*hhd|\n", width, precision, var);
	ft_printf("#0337");
	ret2 = ret1 > -1 ? ft_printf("|%0+-*.*hhd|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0338");
	ret1 = fprintf(fppres, "|%0+-*.*hd|\n", width, precision, var);
	ft_printf("#0338");
	ret2 = ret1 > -1 ? ft_printf("|%0+-*.*hd|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0339");
	ret1 = fprintf(fppres, "|%0+-*.*ld|\n", width, precision, var);
	ft_printf("#0339");
	ret2 = ret1 > -1 ? ft_printf("|%0+-*.*ld|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0340");
	ret1 = fprintf(fppres, "|%0+-*.*lld|\n", width, precision, var);
	ft_printf("#0340");
	ret2 = ret1 > -1 ? ft_printf("|%0+-*.*lld|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0341");
	ret1 = fprintf(fppres, "|%0+-*.*jd|\n", width, precision, var);
	ft_printf("#0341");
	ret2 = ret1 > -1 ? ft_printf("|%0+-*.*jd|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0342");
	ret1 = fprintf(fppres, "|%0+-*.*zd|\n", width, precision, var);
	ft_printf("#0342");
	ret2 = ret1 > -1 ? ft_printf("|%0+-*.*zd|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0343");
	ret1 = fprintf(fppres, "|%0+-*.*d|\n", width, precision, var);
	ft_printf("#0343");
	ret2 = ret1 > -1 ? ft_printf("|%0+-*.*d|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0344");
	ret1 = fprintf(fppres, "|%0+-*.*i|\n", width, precision, var);
	ft_printf("#0344");
	ret2 = ret1 > -1 ? ft_printf("|%0+-*.*i|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0345");
	ret1 = fprintf(fppres, "|%0+-*.*hhi|\n", width, precision, var);
	ft_printf("#0345");
	ret2 = ret1 > -1 ? ft_printf("|%0+-*.*hhi|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0346");
	ret1 = fprintf(fppres, "|%0+-*.*hi|\n", width, precision, var);
	ft_printf("#0346");
	ret2 = ret1 > -1 ? ft_printf("|%0+-*.*hi|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0347");
	ret1 = fprintf(fppres, "|%0+-*.*li|\n", width, precision, var);
	ft_printf("#0347");
	ret2 = ret1 > -1 ? ft_printf("|%0+-*.*li|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0348");
	ret1 = fprintf(fppres, "|%0+-*.*lli|\n", width, precision, var);
	ft_printf("#0348");
	ret2 = ret1 > -1 ? ft_printf("|%0+-*.*lli|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0349");
	ret1 = fprintf(fppres, "|%0+-*.*ji|\n", width, precision, var);
	ft_printf("#0349");
	ret2 = ret1 > -1 ? ft_printf("|%0+-*.*ji|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0350");
	ret1 = fprintf(fppres, "|%0+-*.*zi|\n", width, precision, var);
	ft_printf("#0350");
	ret2 = ret1 > -1 ? ft_printf("|%0+-*.*zi|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0351");
	ret1 = fprintf(fppres, "|%0+-*.*i|\n", width, precision, var);
	ft_printf("#0351");
	ret2 = ret1 > -1 ? ft_printf("|%0+-*.*i|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0352");
	ret1 = fprintf(fppres, "|%0+-*.*o|\n", width, precision, var);
	ft_printf("#0352");
	ret2 = ret1 > -1 ? ft_printf("|%0+-*.*o|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0353");
	ret1 = fprintf(fppres, "|%0+-*.*hho|\n", width, precision, var);
	ft_printf("#0353");
	ret2 = ret1 > -1 ? ft_printf("|%0+-*.*hho|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0354");
	ret1 = fprintf(fppres, "|%0+-*.*ho|\n", width, precision, var);
	ft_printf("#0354");
	ret2 = ret1 > -1 ? ft_printf("|%0+-*.*ho|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0355");
	ret1 = fprintf(fppres, "|%0+-*.*lo|\n", width, precision, var);
	ft_printf("#0355");
	ret2 = ret1 > -1 ? ft_printf("|%0+-*.*lo|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0356");
	ret1 = fprintf(fppres, "|%0+-*.*llo|\n", width, precision, var);
	ft_printf("#0356");
	ret2 = ret1 > -1 ? ft_printf("|%0+-*.*llo|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0357");
	ret1 = fprintf(fppres, "|%0+-*.*jo|\n", width, precision, var);
	ft_printf("#0357");
	ret2 = ret1 > -1 ? ft_printf("|%0+-*.*jo|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0358");
	ret1 = fprintf(fppres, "|%0+-*.*zo|\n", width, precision, var);
	ft_printf("#0358");
	ret2 = ret1 > -1 ? ft_printf("|%0+-*.*zo|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0359");
	ret1 = fprintf(fppres, "|%0+-*.*o|\n", width, precision, var);
	ft_printf("#0359");
	ret2 = ret1 > -1 ? ft_printf("|%0+-*.*o|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0360");
	ret1 = fprintf(fppres, "|%0+-*.*u|\n", width, precision, var);
	ft_printf("#0360");
	ret2 = ret1 > -1 ? ft_printf("|%0+-*.*u|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0361");
	ret1 = fprintf(fppres, "|%0+-*.*hhu|\n", width, precision, var);
	ft_printf("#0361");
	ret2 = ret1 > -1 ? ft_printf("|%0+-*.*hhu|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0362");
	ret1 = fprintf(fppres, "|%0+-*.*hu|\n", width, precision, var);
	ft_printf("#0362");
	ret2 = ret1 > -1 ? ft_printf("|%0+-*.*hu|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0363");
	ret1 = fprintf(fppres, "|%0+-*.*lu|\n", width, precision, var);
	ft_printf("#0363");
	ret2 = ret1 > -1 ? ft_printf("|%0+-*.*lu|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0364");
	ret1 = fprintf(fppres, "|%0+-*.*llu|\n", width, precision, var);
	ft_printf("#0364");
	ret2 = ret1 > -1 ? ft_printf("|%0+-*.*llu|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0365");
	ret1 = fprintf(fppres, "|%0+-*.*ju|\n", width, precision, var);
	ft_printf("#0365");
	ret2 = ret1 > -1 ? ft_printf("|%0+-*.*ju|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0366");
	ret1 = fprintf(fppres, "|%0+-*.*zu|\n", width, precision, var);
	ft_printf("#0366");
	ret2 = ret1 > -1 ? ft_printf("|%0+-*.*zu|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0367");
	ret1 = fprintf(fppres, "|%0+-*.*u|\n", width, precision, var);
	ft_printf("#0367");
	ret2 = ret1 > -1 ? ft_printf("|%0+-*.*u|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0368");
	ret1 = fprintf(fppres, "|%0+-*.*x|\n", width, precision, var);
	ft_printf("#0368");
	ret2 = ret1 > -1 ? ft_printf("|%0+-*.*x|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0369");
	ret1 = fprintf(fppres, "|%0+-*.*hhx|\n", width, precision, var);
	ft_printf("#0369");
	ret2 = ret1 > -1 ? ft_printf("|%0+-*.*hhx|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0370");
	ret1 = fprintf(fppres, "|%0+-*.*hx|\n", width, precision, var);
	ft_printf("#0370");
	ret2 = ret1 > -1 ? ft_printf("|%0+-*.*hx|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0371");
	ret1 = fprintf(fppres, "|%0+-*.*lx|\n", width, precision, var);
	ft_printf("#0371");
	ret2 = ret1 > -1 ? ft_printf("|%0+-*.*lx|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0372");
	ret1 = fprintf(fppres, "|%0+-*.*llx|\n", width, precision, var);
	ft_printf("#0372");
	ret2 = ret1 > -1 ? ft_printf("|%0+-*.*llx|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0373");
	ret1 = fprintf(fppres, "|%0+-*.*jx|\n", width, precision, var);
	ft_printf("#0373");
	ret2 = ret1 > -1 ? ft_printf("|%0+-*.*jx|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0374");
	ret1 = fprintf(fppres, "|%0+-*.*zx|\n", width, precision, var);
	ft_printf("#0374");
	ret2 = ret1 > -1 ? ft_printf("|%0+-*.*zx|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0375");
	ret1 = fprintf(fppres, "|%0+-*.*x|\n", width, precision, var);
	ft_printf("#0375");
	ret2 = ret1 > -1 ? ft_printf("|%0+-*.*x|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0376");
	ret1 = fprintf(fppres, "|%0+-*.*X|\n", width, precision, var);
	ft_printf("#0376");
	ret2 = ret1 > -1 ? ft_printf("|%0+-*.*X|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0377");
	ret1 = fprintf(fppres, "|%0+-*.*hhX|\n", width, precision, var);
	ft_printf("#0377");
	ret2 = ret1 > -1 ? ft_printf("|%0+-*.*hhX|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0378");
	ret1 = fprintf(fppres, "|%0+-*.*hX|\n", width, precision, var);
	ft_printf("#0378");
	ret2 = ret1 > -1 ? ft_printf("|%0+-*.*hX|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0379");
	ret1 = fprintf(fppres, "|%0+-*.*lX|\n", width, precision, var);
	ft_printf("#0379");
	ret2 = ret1 > -1 ? ft_printf("|%0+-*.*lX|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0380");
	ret1 = fprintf(fppres, "|%0+-*.*llX|\n", width, precision, var);
	ft_printf("#0380");
	ret2 = ret1 > -1 ? ft_printf("|%0+-*.*llX|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0381");
	ret1 = fprintf(fppres, "|%0+-*.*jX|\n", width, precision, var);
	ft_printf("#0381");
	ret2 = ret1 > -1 ? ft_printf("|%0+-*.*jX|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0382");
	ret1 = fprintf(fppres, "|%0+-*.*zX|\n", width, precision, var);
	ft_printf("#0382");
	ret2 = ret1 > -1 ? ft_printf("|%0+-*.*zX|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0383");
	ret1 = fprintf(fppres, "|%0+-*.*X|\n", width, precision, var);
	ft_printf("#0383");
	ret2 = ret1 > -1 ? ft_printf("|%0+-*.*X|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0384");
	ret1 = fprintf(fppres, "|%#*.*d|\n", width, precision, var);
	ft_printf("#0384");
	ret2 = ret1 > -1 ? ft_printf("|%#*.*d|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0385");
	ret1 = fprintf(fppres, "|%#*.*hhd|\n", width, precision, var);
	ft_printf("#0385");
	ret2 = ret1 > -1 ? ft_printf("|%#*.*hhd|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0386");
	ret1 = fprintf(fppres, "|%#*.*hd|\n", width, precision, var);
	ft_printf("#0386");
	ret2 = ret1 > -1 ? ft_printf("|%#*.*hd|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0387");
	ret1 = fprintf(fppres, "|%#*.*ld|\n", width, precision, var);
	ft_printf("#0387");
	ret2 = ret1 > -1 ? ft_printf("|%#*.*ld|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0388");
	ret1 = fprintf(fppres, "|%#*.*lld|\n", width, precision, var);
	ft_printf("#0388");
	ret2 = ret1 > -1 ? ft_printf("|%#*.*lld|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0389");
	ret1 = fprintf(fppres, "|%#*.*jd|\n", width, precision, var);
	ft_printf("#0389");
	ret2 = ret1 > -1 ? ft_printf("|%#*.*jd|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0390");
	ret1 = fprintf(fppres, "|%#*.*zd|\n", width, precision, var);
	ft_printf("#0390");
	ret2 = ret1 > -1 ? ft_printf("|%#*.*zd|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0391");
	ret1 = fprintf(fppres, "|%#*.*d|\n", width, precision, var);
	ft_printf("#0391");
	ret2 = ret1 > -1 ? ft_printf("|%#*.*d|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0392");
	ret1 = fprintf(fppres, "|%#*.*i|\n", width, precision, var);
	ft_printf("#0392");
	ret2 = ret1 > -1 ? ft_printf("|%#*.*i|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0393");
	ret1 = fprintf(fppres, "|%#*.*hhi|\n", width, precision, var);
	ft_printf("#0393");
	ret2 = ret1 > -1 ? ft_printf("|%#*.*hhi|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0394");
	ret1 = fprintf(fppres, "|%#*.*hi|\n", width, precision, var);
	ft_printf("#0394");
	ret2 = ret1 > -1 ? ft_printf("|%#*.*hi|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0395");
	ret1 = fprintf(fppres, "|%#*.*li|\n", width, precision, var);
	ft_printf("#0395");
	ret2 = ret1 > -1 ? ft_printf("|%#*.*li|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0396");
	ret1 = fprintf(fppres, "|%#*.*lli|\n", width, precision, var);
	ft_printf("#0396");
	ret2 = ret1 > -1 ? ft_printf("|%#*.*lli|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0397");
	ret1 = fprintf(fppres, "|%#*.*ji|\n", width, precision, var);
	ft_printf("#0397");
	ret2 = ret1 > -1 ? ft_printf("|%#*.*ji|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0398");
	ret1 = fprintf(fppres, "|%#*.*zi|\n", width, precision, var);
	ft_printf("#0398");
	ret2 = ret1 > -1 ? ft_printf("|%#*.*zi|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0399");
	ret1 = fprintf(fppres, "|%#*.*i|\n", width, precision, var);
	ft_printf("#0399");
	ret2 = ret1 > -1 ? ft_printf("|%#*.*i|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0400");
	ret1 = fprintf(fppres, "|%#*.*o|\n", width, precision, var);
	ft_printf("#0400");
	ret2 = ret1 > -1 ? ft_printf("|%#*.*o|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0401");
	ret1 = fprintf(fppres, "|%#*.*hho|\n", width, precision, var);
	ft_printf("#0401");
	ret2 = ret1 > -1 ? ft_printf("|%#*.*hho|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0402");
	ret1 = fprintf(fppres, "|%#*.*ho|\n", width, precision, var);
	ft_printf("#0402");
	ret2 = ret1 > -1 ? ft_printf("|%#*.*ho|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0403");
	ret1 = fprintf(fppres, "|%#*.*lo|\n", width, precision, var);
	ft_printf("#0403");
	ret2 = ret1 > -1 ? ft_printf("|%#*.*lo|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0404");
	ret1 = fprintf(fppres, "|%#*.*llo|\n", width, precision, var);
	ft_printf("#0404");
	ret2 = ret1 > -1 ? ft_printf("|%#*.*llo|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0405");
	ret1 = fprintf(fppres, "|%#*.*jo|\n", width, precision, var);
	ft_printf("#0405");
	ret2 = ret1 > -1 ? ft_printf("|%#*.*jo|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0406");
	ret1 = fprintf(fppres, "|%#*.*zo|\n", width, precision, var);
	ft_printf("#0406");
	ret2 = ret1 > -1 ? ft_printf("|%#*.*zo|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0407");
	ret1 = fprintf(fppres, "|%#*.*o|\n", width, precision, var);
	ft_printf("#0407");
	ret2 = ret1 > -1 ? ft_printf("|%#*.*o|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0408");
	ret1 = fprintf(fppres, "|%#*.*u|\n", width, precision, var);
	ft_printf("#0408");
	ret2 = ret1 > -1 ? ft_printf("|%#*.*u|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0409");
	ret1 = fprintf(fppres, "|%#*.*hhu|\n", width, precision, var);
	ft_printf("#0409");
	ret2 = ret1 > -1 ? ft_printf("|%#*.*hhu|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0410");
	ret1 = fprintf(fppres, "|%#*.*hu|\n", width, precision, var);
	ft_printf("#0410");
	ret2 = ret1 > -1 ? ft_printf("|%#*.*hu|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0411");
	ret1 = fprintf(fppres, "|%#*.*lu|\n", width, precision, var);
	ft_printf("#0411");
	ret2 = ret1 > -1 ? ft_printf("|%#*.*lu|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0412");
	ret1 = fprintf(fppres, "|%#*.*llu|\n", width, precision, var);
	ft_printf("#0412");
	ret2 = ret1 > -1 ? ft_printf("|%#*.*llu|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0413");
	ret1 = fprintf(fppres, "|%#*.*ju|\n", width, precision, var);
	ft_printf("#0413");
	ret2 = ret1 > -1 ? ft_printf("|%#*.*ju|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0414");
	ret1 = fprintf(fppres, "|%#*.*zu|\n", width, precision, var);
	ft_printf("#0414");
	ret2 = ret1 > -1 ? ft_printf("|%#*.*zu|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0415");
	ret1 = fprintf(fppres, "|%#*.*u|\n", width, precision, var);
	ft_printf("#0415");
	ret2 = ret1 > -1 ? ft_printf("|%#*.*u|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0416");
	ret1 = fprintf(fppres, "|%#*.*x|\n", width, precision, var);
	ft_printf("#0416");
	ret2 = ret1 > -1 ? ft_printf("|%#*.*x|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0417");
	ret1 = fprintf(fppres, "|%#*.*hhx|\n", width, precision, var);
	ft_printf("#0417");
	ret2 = ret1 > -1 ? ft_printf("|%#*.*hhx|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0418");
	ret1 = fprintf(fppres, "|%#*.*hx|\n", width, precision, var);
	ft_printf("#0418");
	ret2 = ret1 > -1 ? ft_printf("|%#*.*hx|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0419");
	ret1 = fprintf(fppres, "|%#*.*lx|\n", width, precision, var);
	ft_printf("#0419");
	ret2 = ret1 > -1 ? ft_printf("|%#*.*lx|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0420");
	ret1 = fprintf(fppres, "|%#*.*llx|\n", width, precision, var);
	ft_printf("#0420");
	ret2 = ret1 > -1 ? ft_printf("|%#*.*llx|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0421");
	ret1 = fprintf(fppres, "|%#*.*jx|\n", width, precision, var);
	ft_printf("#0421");
	ret2 = ret1 > -1 ? ft_printf("|%#*.*jx|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0422");
	ret1 = fprintf(fppres, "|%#*.*zx|\n", width, precision, var);
	ft_printf("#0422");
	ret2 = ret1 > -1 ? ft_printf("|%#*.*zx|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0423");
	ret1 = fprintf(fppres, "|%#*.*x|\n", width, precision, var);
	ft_printf("#0423");
	ret2 = ret1 > -1 ? ft_printf("|%#*.*x|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0424");
	ret1 = fprintf(fppres, "|%#*.*X|\n", width, precision, var);
	ft_printf("#0424");
	ret2 = ret1 > -1 ? ft_printf("|%#*.*X|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0425");
	ret1 = fprintf(fppres, "|%#*.*hhX|\n", width, precision, var);
	ft_printf("#0425");
	ret2 = ret1 > -1 ? ft_printf("|%#*.*hhX|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0426");
	ret1 = fprintf(fppres, "|%#*.*hX|\n", width, precision, var);
	ft_printf("#0426");
	ret2 = ret1 > -1 ? ft_printf("|%#*.*hX|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0427");
	ret1 = fprintf(fppres, "|%#*.*lX|\n", width, precision, var);
	ft_printf("#0427");
	ret2 = ret1 > -1 ? ft_printf("|%#*.*lX|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0428");
	ret1 = fprintf(fppres, "|%#*.*llX|\n", width, precision, var);
	ft_printf("#0428");
	ret2 = ret1 > -1 ? ft_printf("|%#*.*llX|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0429");
	ret1 = fprintf(fppres, "|%#*.*jX|\n", width, precision, var);
	ft_printf("#0429");
	ret2 = ret1 > -1 ? ft_printf("|%#*.*jX|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0430");
	ret1 = fprintf(fppres, "|%#*.*zX|\n", width, precision, var);
	ft_printf("#0430");
	ret2 = ret1 > -1 ? ft_printf("|%#*.*zX|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0431");
	ret1 = fprintf(fppres, "|%#*.*X|\n", width, precision, var);
	ft_printf("#0431");
	ret2 = ret1 > -1 ? ft_printf("|%#*.*X|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0432");
	ret1 = fprintf(fppres, "|%0#*.*d|\n", width, precision, var);
	ft_printf("#0432");
	ret2 = ret1 > -1 ? ft_printf("|%0#*.*d|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0433");
	ret1 = fprintf(fppres, "|%0#*.*hhd|\n", width, precision, var);
	ft_printf("#0433");
	ret2 = ret1 > -1 ? ft_printf("|%0#*.*hhd|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0434");
	ret1 = fprintf(fppres, "|%0#*.*hd|\n", width, precision, var);
	ft_printf("#0434");
	ret2 = ret1 > -1 ? ft_printf("|%0#*.*hd|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0435");
	ret1 = fprintf(fppres, "|%0#*.*ld|\n", width, precision, var);
	ft_printf("#0435");
	ret2 = ret1 > -1 ? ft_printf("|%0#*.*ld|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0436");
	ret1 = fprintf(fppres, "|%0#*.*lld|\n", width, precision, var);
	ft_printf("#0436");
	ret2 = ret1 > -1 ? ft_printf("|%0#*.*lld|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0437");
	ret1 = fprintf(fppres, "|%0#*.*jd|\n", width, precision, var);
	ft_printf("#0437");
	ret2 = ret1 > -1 ? ft_printf("|%0#*.*jd|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0438");
	ret1 = fprintf(fppres, "|%0#*.*zd|\n", width, precision, var);
	ft_printf("#0438");
	ret2 = ret1 > -1 ? ft_printf("|%0#*.*zd|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0439");
	ret1 = fprintf(fppres, "|%0#*.*d|\n", width, precision, var);
	ft_printf("#0439");
	ret2 = ret1 > -1 ? ft_printf("|%0#*.*d|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0440");
	ret1 = fprintf(fppres, "|%0#*.*i|\n", width, precision, var);
	ft_printf("#0440");
	ret2 = ret1 > -1 ? ft_printf("|%0#*.*i|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0441");
	ret1 = fprintf(fppres, "|%0#*.*hhi|\n", width, precision, var);
	ft_printf("#0441");
	ret2 = ret1 > -1 ? ft_printf("|%0#*.*hhi|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0442");
	ret1 = fprintf(fppres, "|%0#*.*hi|\n", width, precision, var);
	ft_printf("#0442");
	ret2 = ret1 > -1 ? ft_printf("|%0#*.*hi|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0443");
	ret1 = fprintf(fppres, "|%0#*.*li|\n", width, precision, var);
	ft_printf("#0443");
	ret2 = ret1 > -1 ? ft_printf("|%0#*.*li|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0444");
	ret1 = fprintf(fppres, "|%0#*.*lli|\n", width, precision, var);
	ft_printf("#0444");
	ret2 = ret1 > -1 ? ft_printf("|%0#*.*lli|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0445");
	ret1 = fprintf(fppres, "|%0#*.*ji|\n", width, precision, var);
	ft_printf("#0445");
	ret2 = ret1 > -1 ? ft_printf("|%0#*.*ji|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0446");
	ret1 = fprintf(fppres, "|%0#*.*zi|\n", width, precision, var);
	ft_printf("#0446");
	ret2 = ret1 > -1 ? ft_printf("|%0#*.*zi|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0447");
	ret1 = fprintf(fppres, "|%0#*.*i|\n", width, precision, var);
	ft_printf("#0447");
	ret2 = ret1 > -1 ? ft_printf("|%0#*.*i|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0448");
	ret1 = fprintf(fppres, "|%0#*.*o|\n", width, precision, var);
	ft_printf("#0448");
	ret2 = ret1 > -1 ? ft_printf("|%0#*.*o|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0449");
	ret1 = fprintf(fppres, "|%0#*.*hho|\n", width, precision, var);
	ft_printf("#0449");
	ret2 = ret1 > -1 ? ft_printf("|%0#*.*hho|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0450");
	ret1 = fprintf(fppres, "|%0#*.*ho|\n", width, precision, var);
	ft_printf("#0450");
	ret2 = ret1 > -1 ? ft_printf("|%0#*.*ho|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0451");
	ret1 = fprintf(fppres, "|%0#*.*lo|\n", width, precision, var);
	ft_printf("#0451");
	ret2 = ret1 > -1 ? ft_printf("|%0#*.*lo|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0452");
	ret1 = fprintf(fppres, "|%0#*.*llo|\n", width, precision, var);
	ft_printf("#0452");
	ret2 = ret1 > -1 ? ft_printf("|%0#*.*llo|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0453");
	ret1 = fprintf(fppres, "|%0#*.*jo|\n", width, precision, var);
	ft_printf("#0453");
	ret2 = ret1 > -1 ? ft_printf("|%0#*.*jo|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0454");
	ret1 = fprintf(fppres, "|%0#*.*zo|\n", width, precision, var);
	ft_printf("#0454");
	ret2 = ret1 > -1 ? ft_printf("|%0#*.*zo|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0455");
	ret1 = fprintf(fppres, "|%0#*.*o|\n", width, precision, var);
	ft_printf("#0455");
	ret2 = ret1 > -1 ? ft_printf("|%0#*.*o|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0456");
	ret1 = fprintf(fppres, "|%0#*.*u|\n", width, precision, var);
	ft_printf("#0456");
	ret2 = ret1 > -1 ? ft_printf("|%0#*.*u|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0457");
	ret1 = fprintf(fppres, "|%0#*.*hhu|\n", width, precision, var);
	ft_printf("#0457");
	ret2 = ret1 > -1 ? ft_printf("|%0#*.*hhu|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0458");
	ret1 = fprintf(fppres, "|%0#*.*hu|\n", width, precision, var);
	ft_printf("#0458");
	ret2 = ret1 > -1 ? ft_printf("|%0#*.*hu|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0459");
	ret1 = fprintf(fppres, "|%0#*.*lu|\n", width, precision, var);
	ft_printf("#0459");
	ret2 = ret1 > -1 ? ft_printf("|%0#*.*lu|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0460");
	ret1 = fprintf(fppres, "|%0#*.*llu|\n", width, precision, var);
	ft_printf("#0460");
	ret2 = ret1 > -1 ? ft_printf("|%0#*.*llu|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0461");
	ret1 = fprintf(fppres, "|%0#*.*ju|\n", width, precision, var);
	ft_printf("#0461");
	ret2 = ret1 > -1 ? ft_printf("|%0#*.*ju|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0462");
	ret1 = fprintf(fppres, "|%0#*.*zu|\n", width, precision, var);
	ft_printf("#0462");
	ret2 = ret1 > -1 ? ft_printf("|%0#*.*zu|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0463");
	ret1 = fprintf(fppres, "|%0#*.*u|\n", width, precision, var);
	ft_printf("#0463");
	ret2 = ret1 > -1 ? ft_printf("|%0#*.*u|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0464");
	ret1 = fprintf(fppres, "|%0#*.*x|\n", width, precision, var);
	ft_printf("#0464");
	ret2 = ret1 > -1 ? ft_printf("|%0#*.*x|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0465");
	ret1 = fprintf(fppres, "|%0#*.*hhx|\n", width, precision, var);
	ft_printf("#0465");
	ret2 = ret1 > -1 ? ft_printf("|%0#*.*hhx|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0466");
	ret1 = fprintf(fppres, "|%0#*.*hx|\n", width, precision, var);
	ft_printf("#0466");
	ret2 = ret1 > -1 ? ft_printf("|%0#*.*hx|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0467");
	ret1 = fprintf(fppres, "|%0#*.*lx|\n", width, precision, var);
	ft_printf("#0467");
	ret2 = ret1 > -1 ? ft_printf("|%0#*.*lx|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0468");
	ret1 = fprintf(fppres, "|%0#*.*llx|\n", width, precision, var);
	ft_printf("#0468");
	ret2 = ret1 > -1 ? ft_printf("|%0#*.*llx|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0469");
	ret1 = fprintf(fppres, "|%0#*.*jx|\n", width, precision, var);
	ft_printf("#0469");
	ret2 = ret1 > -1 ? ft_printf("|%0#*.*jx|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0470");
	ret1 = fprintf(fppres, "|%0#*.*zx|\n", width, precision, var);
	ft_printf("#0470");
	ret2 = ret1 > -1 ? ft_printf("|%0#*.*zx|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0471");
	ret1 = fprintf(fppres, "|%0#*.*x|\n", width, precision, var);
	ft_printf("#0471");
	ret2 = ret1 > -1 ? ft_printf("|%0#*.*x|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0472");
	ret1 = fprintf(fppres, "|%0#*.*X|\n", width, precision, var);
	ft_printf("#0472");
	ret2 = ret1 > -1 ? ft_printf("|%0#*.*X|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0473");
	ret1 = fprintf(fppres, "|%0#*.*hhX|\n", width, precision, var);
	ft_printf("#0473");
	ret2 = ret1 > -1 ? ft_printf("|%0#*.*hhX|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0474");
	ret1 = fprintf(fppres, "|%0#*.*hX|\n", width, precision, var);
	ft_printf("#0474");
	ret2 = ret1 > -1 ? ft_printf("|%0#*.*hX|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0475");
	ret1 = fprintf(fppres, "|%0#*.*lX|\n", width, precision, var);
	ft_printf("#0475");
	ret2 = ret1 > -1 ? ft_printf("|%0#*.*lX|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0476");
	ret1 = fprintf(fppres, "|%0#*.*llX|\n", width, precision, var);
	ft_printf("#0476");
	ret2 = ret1 > -1 ? ft_printf("|%0#*.*llX|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0477");
	ret1 = fprintf(fppres, "|%0#*.*jX|\n", width, precision, var);
	ft_printf("#0477");
	ret2 = ret1 > -1 ? ft_printf("|%0#*.*jX|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0478");
	ret1 = fprintf(fppres, "|%0#*.*zX|\n", width, precision, var);
	ft_printf("#0478");
	ret2 = ret1 > -1 ? ft_printf("|%0#*.*zX|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0479");
	ret1 = fprintf(fppres, "|%0#*.*X|\n", width, precision, var);
	ft_printf("#0479");
	ret2 = ret1 > -1 ? ft_printf("|%0#*.*X|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0480");
	ret1 = fprintf(fppres, "|%+#*.*d|\n", width, precision, var);
	ft_printf("#0480");
	ret2 = ret1 > -1 ? ft_printf("|%+#*.*d|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0481");
	ret1 = fprintf(fppres, "|%+#*.*hhd|\n", width, precision, var);
	ft_printf("#0481");
	ret2 = ret1 > -1 ? ft_printf("|%+#*.*hhd|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0482");
	ret1 = fprintf(fppres, "|%+#*.*hd|\n", width, precision, var);
	ft_printf("#0482");
	ret2 = ret1 > -1 ? ft_printf("|%+#*.*hd|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0483");
	ret1 = fprintf(fppres, "|%+#*.*ld|\n", width, precision, var);
	ft_printf("#0483");
	ret2 = ret1 > -1 ? ft_printf("|%+#*.*ld|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0484");
	ret1 = fprintf(fppres, "|%+#*.*lld|\n", width, precision, var);
	ft_printf("#0484");
	ret2 = ret1 > -1 ? ft_printf("|%+#*.*lld|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0485");
	ret1 = fprintf(fppres, "|%+#*.*jd|\n", width, precision, var);
	ft_printf("#0485");
	ret2 = ret1 > -1 ? ft_printf("|%+#*.*jd|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0486");
	ret1 = fprintf(fppres, "|%+#*.*zd|\n", width, precision, var);
	ft_printf("#0486");
	ret2 = ret1 > -1 ? ft_printf("|%+#*.*zd|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0487");
	ret1 = fprintf(fppres, "|%+#*.*d|\n", width, precision, var);
	ft_printf("#0487");
	ret2 = ret1 > -1 ? ft_printf("|%+#*.*d|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0488");
	ret1 = fprintf(fppres, "|%+#*.*i|\n", width, precision, var);
	ft_printf("#0488");
	ret2 = ret1 > -1 ? ft_printf("|%+#*.*i|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0489");
	ret1 = fprintf(fppres, "|%+#*.*hhi|\n", width, precision, var);
	ft_printf("#0489");
	ret2 = ret1 > -1 ? ft_printf("|%+#*.*hhi|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0490");
	ret1 = fprintf(fppres, "|%+#*.*hi|\n", width, precision, var);
	ft_printf("#0490");
	ret2 = ret1 > -1 ? ft_printf("|%+#*.*hi|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0491");
	ret1 = fprintf(fppres, "|%+#*.*li|\n", width, precision, var);
	ft_printf("#0491");
	ret2 = ret1 > -1 ? ft_printf("|%+#*.*li|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0492");
	ret1 = fprintf(fppres, "|%+#*.*lli|\n", width, precision, var);
	ft_printf("#0492");
	ret2 = ret1 > -1 ? ft_printf("|%+#*.*lli|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0493");
	ret1 = fprintf(fppres, "|%+#*.*ji|\n", width, precision, var);
	ft_printf("#0493");
	ret2 = ret1 > -1 ? ft_printf("|%+#*.*ji|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0494");
	ret1 = fprintf(fppres, "|%+#*.*zi|\n", width, precision, var);
	ft_printf("#0494");
	ret2 = ret1 > -1 ? ft_printf("|%+#*.*zi|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0495");
	ret1 = fprintf(fppres, "|%+#*.*i|\n", width, precision, var);
	ft_printf("#0495");
	ret2 = ret1 > -1 ? ft_printf("|%+#*.*i|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0496");
	ret1 = fprintf(fppres, "|%+#*.*o|\n", width, precision, var);
	ft_printf("#0496");
	ret2 = ret1 > -1 ? ft_printf("|%+#*.*o|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0497");
	ret1 = fprintf(fppres, "|%+#*.*hho|\n", width, precision, var);
	ft_printf("#0497");
	ret2 = ret1 > -1 ? ft_printf("|%+#*.*hho|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0498");
	ret1 = fprintf(fppres, "|%+#*.*ho|\n", width, precision, var);
	ft_printf("#0498");
	ret2 = ret1 > -1 ? ft_printf("|%+#*.*ho|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0499");
	ret1 = fprintf(fppres, "|%+#*.*lo|\n", width, precision, var);
	ft_printf("#0499");
	ret2 = ret1 > -1 ? ft_printf("|%+#*.*lo|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0500");
	ret1 = fprintf(fppres, "|%+#*.*llo|\n", width, precision, var);
	ft_printf("#0500");
	ret2 = ret1 > -1 ? ft_printf("|%+#*.*llo|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0501");
	ret1 = fprintf(fppres, "|%+#*.*jo|\n", width, precision, var);
	ft_printf("#0501");
	ret2 = ret1 > -1 ? ft_printf("|%+#*.*jo|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0502");
	ret1 = fprintf(fppres, "|%+#*.*zo|\n", width, precision, var);
	ft_printf("#0502");
	ret2 = ret1 > -1 ? ft_printf("|%+#*.*zo|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0503");
	ret1 = fprintf(fppres, "|%+#*.*o|\n", width, precision, var);
	ft_printf("#0503");
	ret2 = ret1 > -1 ? ft_printf("|%+#*.*o|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0504");
	ret1 = fprintf(fppres, "|%+#*.*u|\n", width, precision, var);
	ft_printf("#0504");
	ret2 = ret1 > -1 ? ft_printf("|%+#*.*u|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0505");
	ret1 = fprintf(fppres, "|%+#*.*hhu|\n", width, precision, var);
	ft_printf("#0505");
	ret2 = ret1 > -1 ? ft_printf("|%+#*.*hhu|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0506");
	ret1 = fprintf(fppres, "|%+#*.*hu|\n", width, precision, var);
	ft_printf("#0506");
	ret2 = ret1 > -1 ? ft_printf("|%+#*.*hu|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0507");
	ret1 = fprintf(fppres, "|%+#*.*lu|\n", width, precision, var);
	ft_printf("#0507");
	ret2 = ret1 > -1 ? ft_printf("|%+#*.*lu|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0508");
	ret1 = fprintf(fppres, "|%+#*.*llu|\n", width, precision, var);
	ft_printf("#0508");
	ret2 = ret1 > -1 ? ft_printf("|%+#*.*llu|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0509");
	ret1 = fprintf(fppres, "|%+#*.*ju|\n", width, precision, var);
	ft_printf("#0509");
	ret2 = ret1 > -1 ? ft_printf("|%+#*.*ju|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0510");
	ret1 = fprintf(fppres, "|%+#*.*zu|\n", width, precision, var);
	ft_printf("#0510");
	ret2 = ret1 > -1 ? ft_printf("|%+#*.*zu|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0511");
	ret1 = fprintf(fppres, "|%+#*.*u|\n", width, precision, var);
	ft_printf("#0511");
	ret2 = ret1 > -1 ? ft_printf("|%+#*.*u|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0512");
	ret1 = fprintf(fppres, "|%+#*.*x|\n", width, precision, var);
	ft_printf("#0512");
	ret2 = ret1 > -1 ? ft_printf("|%+#*.*x|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0513");
	ret1 = fprintf(fppres, "|%+#*.*hhx|\n", width, precision, var);
	ft_printf("#0513");
	ret2 = ret1 > -1 ? ft_printf("|%+#*.*hhx|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0514");
	ret1 = fprintf(fppres, "|%+#*.*hx|\n", width, precision, var);
	ft_printf("#0514");
	ret2 = ret1 > -1 ? ft_printf("|%+#*.*hx|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0515");
	ret1 = fprintf(fppres, "|%+#*.*lx|\n", width, precision, var);
	ft_printf("#0515");
	ret2 = ret1 > -1 ? ft_printf("|%+#*.*lx|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0516");
	ret1 = fprintf(fppres, "|%+#*.*llx|\n", width, precision, var);
	ft_printf("#0516");
	ret2 = ret1 > -1 ? ft_printf("|%+#*.*llx|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0517");
	ret1 = fprintf(fppres, "|%+#*.*jx|\n", width, precision, var);
	ft_printf("#0517");
	ret2 = ret1 > -1 ? ft_printf("|%+#*.*jx|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0518");
	ret1 = fprintf(fppres, "|%+#*.*zx|\n", width, precision, var);
	ft_printf("#0518");
	ret2 = ret1 > -1 ? ft_printf("|%+#*.*zx|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0519");
	ret1 = fprintf(fppres, "|%+#*.*x|\n", width, precision, var);
	ft_printf("#0519");
	ret2 = ret1 > -1 ? ft_printf("|%+#*.*x|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0520");
	ret1 = fprintf(fppres, "|%+#*.*X|\n", width, precision, var);
	ft_printf("#0520");
	ret2 = ret1 > -1 ? ft_printf("|%+#*.*X|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0521");
	ret1 = fprintf(fppres, "|%+#*.*hhX|\n", width, precision, var);
	ft_printf("#0521");
	ret2 = ret1 > -1 ? ft_printf("|%+#*.*hhX|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0522");
	ret1 = fprintf(fppres, "|%+#*.*hX|\n", width, precision, var);
	ft_printf("#0522");
	ret2 = ret1 > -1 ? ft_printf("|%+#*.*hX|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0523");
	ret1 = fprintf(fppres, "|%+#*.*lX|\n", width, precision, var);
	ft_printf("#0523");
	ret2 = ret1 > -1 ? ft_printf("|%+#*.*lX|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0524");
	ret1 = fprintf(fppres, "|%+#*.*llX|\n", width, precision, var);
	ft_printf("#0524");
	ret2 = ret1 > -1 ? ft_printf("|%+#*.*llX|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0525");
	ret1 = fprintf(fppres, "|%+#*.*jX|\n", width, precision, var);
	ft_printf("#0525");
	ret2 = ret1 > -1 ? ft_printf("|%+#*.*jX|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0526");
	ret1 = fprintf(fppres, "|%+#*.*zX|\n", width, precision, var);
	ft_printf("#0526");
	ret2 = ret1 > -1 ? ft_printf("|%+#*.*zX|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0527");
	ret1 = fprintf(fppres, "|%+#*.*X|\n", width, precision, var);
	ft_printf("#0527");
	ret2 = ret1 > -1 ? ft_printf("|%+#*.*X|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0528");
	ret1 = fprintf(fppres, "|%0+#*.*d|\n", width, precision, var);
	ft_printf("#0528");
	ret2 = ret1 > -1 ? ft_printf("|%0+#*.*d|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0529");
	ret1 = fprintf(fppres, "|%0+#*.*hhd|\n", width, precision, var);
	ft_printf("#0529");
	ret2 = ret1 > -1 ? ft_printf("|%0+#*.*hhd|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0530");
	ret1 = fprintf(fppres, "|%0+#*.*hd|\n", width, precision, var);
	ft_printf("#0530");
	ret2 = ret1 > -1 ? ft_printf("|%0+#*.*hd|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0531");
	ret1 = fprintf(fppres, "|%0+#*.*ld|\n", width, precision, var);
	ft_printf("#0531");
	ret2 = ret1 > -1 ? ft_printf("|%0+#*.*ld|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0532");
	ret1 = fprintf(fppres, "|%0+#*.*lld|\n", width, precision, var);
	ft_printf("#0532");
	ret2 = ret1 > -1 ? ft_printf("|%0+#*.*lld|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0533");
	ret1 = fprintf(fppres, "|%0+#*.*jd|\n", width, precision, var);
	ft_printf("#0533");
	ret2 = ret1 > -1 ? ft_printf("|%0+#*.*jd|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0534");
	ret1 = fprintf(fppres, "|%0+#*.*zd|\n", width, precision, var);
	ft_printf("#0534");
	ret2 = ret1 > -1 ? ft_printf("|%0+#*.*zd|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0535");
	ret1 = fprintf(fppres, "|%0+#*.*d|\n", width, precision, var);
	ft_printf("#0535");
	ret2 = ret1 > -1 ? ft_printf("|%0+#*.*d|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0536");
	ret1 = fprintf(fppres, "|%0+#*.*i|\n", width, precision, var);
	ft_printf("#0536");
	ret2 = ret1 > -1 ? ft_printf("|%0+#*.*i|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0537");
	ret1 = fprintf(fppres, "|%0+#*.*hhi|\n", width, precision, var);
	ft_printf("#0537");
	ret2 = ret1 > -1 ? ft_printf("|%0+#*.*hhi|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0538");
	ret1 = fprintf(fppres, "|%0+#*.*hi|\n", width, precision, var);
	ft_printf("#0538");
	ret2 = ret1 > -1 ? ft_printf("|%0+#*.*hi|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0539");
	ret1 = fprintf(fppres, "|%0+#*.*li|\n", width, precision, var);
	ft_printf("#0539");
	ret2 = ret1 > -1 ? ft_printf("|%0+#*.*li|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0540");
	ret1 = fprintf(fppres, "|%0+#*.*lli|\n", width, precision, var);
	ft_printf("#0540");
	ret2 = ret1 > -1 ? ft_printf("|%0+#*.*lli|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0541");
	ret1 = fprintf(fppres, "|%0+#*.*ji|\n", width, precision, var);
	ft_printf("#0541");
	ret2 = ret1 > -1 ? ft_printf("|%0+#*.*ji|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0542");
	ret1 = fprintf(fppres, "|%0+#*.*zi|\n", width, precision, var);
	ft_printf("#0542");
	ret2 = ret1 > -1 ? ft_printf("|%0+#*.*zi|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0543");
	ret1 = fprintf(fppres, "|%0+#*.*i|\n", width, precision, var);
	ft_printf("#0543");
	ret2 = ret1 > -1 ? ft_printf("|%0+#*.*i|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0544");
	ret1 = fprintf(fppres, "|%0+#*.*o|\n", width, precision, var);
	ft_printf("#0544");
	ret2 = ret1 > -1 ? ft_printf("|%0+#*.*o|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0545");
	ret1 = fprintf(fppres, "|%0+#*.*hho|\n", width, precision, var);
	ft_printf("#0545");
	ret2 = ret1 > -1 ? ft_printf("|%0+#*.*hho|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0546");
	ret1 = fprintf(fppres, "|%0+#*.*ho|\n", width, precision, var);
	ft_printf("#0546");
	ret2 = ret1 > -1 ? ft_printf("|%0+#*.*ho|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0547");
	ret1 = fprintf(fppres, "|%0+#*.*lo|\n", width, precision, var);
	ft_printf("#0547");
	ret2 = ret1 > -1 ? ft_printf("|%0+#*.*lo|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0548");
	ret1 = fprintf(fppres, "|%0+#*.*llo|\n", width, precision, var);
	ft_printf("#0548");
	ret2 = ret1 > -1 ? ft_printf("|%0+#*.*llo|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0549");
	ret1 = fprintf(fppres, "|%0+#*.*jo|\n", width, precision, var);
	ft_printf("#0549");
	ret2 = ret1 > -1 ? ft_printf("|%0+#*.*jo|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0550");
	ret1 = fprintf(fppres, "|%0+#*.*zo|\n", width, precision, var);
	ft_printf("#0550");
	ret2 = ret1 > -1 ? ft_printf("|%0+#*.*zo|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0551");
	ret1 = fprintf(fppres, "|%0+#*.*o|\n", width, precision, var);
	ft_printf("#0551");
	ret2 = ret1 > -1 ? ft_printf("|%0+#*.*o|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0552");
	ret1 = fprintf(fppres, "|%0+#*.*u|\n", width, precision, var);
	ft_printf("#0552");
	ret2 = ret1 > -1 ? ft_printf("|%0+#*.*u|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0553");
	ret1 = fprintf(fppres, "|%0+#*.*hhu|\n", width, precision, var);
	ft_printf("#0553");
	ret2 = ret1 > -1 ? ft_printf("|%0+#*.*hhu|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0554");
	ret1 = fprintf(fppres, "|%0+#*.*hu|\n", width, precision, var);
	ft_printf("#0554");
	ret2 = ret1 > -1 ? ft_printf("|%0+#*.*hu|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0555");
	ret1 = fprintf(fppres, "|%0+#*.*lu|\n", width, precision, var);
	ft_printf("#0555");
	ret2 = ret1 > -1 ? ft_printf("|%0+#*.*lu|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0556");
	ret1 = fprintf(fppres, "|%0+#*.*llu|\n", width, precision, var);
	ft_printf("#0556");
	ret2 = ret1 > -1 ? ft_printf("|%0+#*.*llu|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0557");
	ret1 = fprintf(fppres, "|%0+#*.*ju|\n", width, precision, var);
	ft_printf("#0557");
	ret2 = ret1 > -1 ? ft_printf("|%0+#*.*ju|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0558");
	ret1 = fprintf(fppres, "|%0+#*.*zu|\n", width, precision, var);
	ft_printf("#0558");
	ret2 = ret1 > -1 ? ft_printf("|%0+#*.*zu|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0559");
	ret1 = fprintf(fppres, "|%0+#*.*u|\n", width, precision, var);
	ft_printf("#0559");
	ret2 = ret1 > -1 ? ft_printf("|%0+#*.*u|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0560");
	ret1 = fprintf(fppres, "|%0+#*.*x|\n", width, precision, var);
	ft_printf("#0560");
	ret2 = ret1 > -1 ? ft_printf("|%0+#*.*x|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0561");
	ret1 = fprintf(fppres, "|%0+#*.*hhx|\n", width, precision, var);
	ft_printf("#0561");
	ret2 = ret1 > -1 ? ft_printf("|%0+#*.*hhx|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0562");
	ret1 = fprintf(fppres, "|%0+#*.*hx|\n", width, precision, var);
	ft_printf("#0562");
	ret2 = ret1 > -1 ? ft_printf("|%0+#*.*hx|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0563");
	ret1 = fprintf(fppres, "|%0+#*.*lx|\n", width, precision, var);
	ft_printf("#0563");
	ret2 = ret1 > -1 ? ft_printf("|%0+#*.*lx|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0564");
	ret1 = fprintf(fppres, "|%0+#*.*llx|\n", width, precision, var);
	ft_printf("#0564");
	ret2 = ret1 > -1 ? ft_printf("|%0+#*.*llx|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0565");
	ret1 = fprintf(fppres, "|%0+#*.*jx|\n", width, precision, var);
	ft_printf("#0565");
	ret2 = ret1 > -1 ? ft_printf("|%0+#*.*jx|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0566");
	ret1 = fprintf(fppres, "|%0+#*.*zx|\n", width, precision, var);
	ft_printf("#0566");
	ret2 = ret1 > -1 ? ft_printf("|%0+#*.*zx|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0567");
	ret1 = fprintf(fppres, "|%0+#*.*x|\n", width, precision, var);
	ft_printf("#0567");
	ret2 = ret1 > -1 ? ft_printf("|%0+#*.*x|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0568");
	ret1 = fprintf(fppres, "|%0+#*.*X|\n", width, precision, var);
	ft_printf("#0568");
	ret2 = ret1 > -1 ? ft_printf("|%0+#*.*X|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0569");
	ret1 = fprintf(fppres, "|%0+#*.*hhX|\n", width, precision, var);
	ft_printf("#0569");
	ret2 = ret1 > -1 ? ft_printf("|%0+#*.*hhX|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0570");
	ret1 = fprintf(fppres, "|%0+#*.*hX|\n", width, precision, var);
	ft_printf("#0570");
	ret2 = ret1 > -1 ? ft_printf("|%0+#*.*hX|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0571");
	ret1 = fprintf(fppres, "|%0+#*.*lX|\n", width, precision, var);
	ft_printf("#0571");
	ret2 = ret1 > -1 ? ft_printf("|%0+#*.*lX|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0572");
	ret1 = fprintf(fppres, "|%0+#*.*llX|\n", width, precision, var);
	ft_printf("#0572");
	ret2 = ret1 > -1 ? ft_printf("|%0+#*.*llX|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0573");
	ret1 = fprintf(fppres, "|%0+#*.*jX|\n", width, precision, var);
	ft_printf("#0573");
	ret2 = ret1 > -1 ? ft_printf("|%0+#*.*jX|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0574");
	ret1 = fprintf(fppres, "|%0+#*.*zX|\n", width, precision, var);
	ft_printf("#0574");
	ret2 = ret1 > -1 ? ft_printf("|%0+#*.*zX|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0575");
	ret1 = fprintf(fppres, "|%0+#*.*X|\n", width, precision, var);
	ft_printf("#0575");
	ret2 = ret1 > -1 ? ft_printf("|%0+#*.*X|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0576");
	ret1 = fprintf(fppres, "|%-#*.*d|\n", width, precision, var);
	ft_printf("#0576");
	ret2 = ret1 > -1 ? ft_printf("|%-#*.*d|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0577");
	ret1 = fprintf(fppres, "|%-#*.*hhd|\n", width, precision, var);
	ft_printf("#0577");
	ret2 = ret1 > -1 ? ft_printf("|%-#*.*hhd|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0578");
	ret1 = fprintf(fppres, "|%-#*.*hd|\n", width, precision, var);
	ft_printf("#0578");
	ret2 = ret1 > -1 ? ft_printf("|%-#*.*hd|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0579");
	ret1 = fprintf(fppres, "|%-#*.*ld|\n", width, precision, var);
	ft_printf("#0579");
	ret2 = ret1 > -1 ? ft_printf("|%-#*.*ld|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0580");
	ret1 = fprintf(fppres, "|%-#*.*lld|\n", width, precision, var);
	ft_printf("#0580");
	ret2 = ret1 > -1 ? ft_printf("|%-#*.*lld|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0581");
	ret1 = fprintf(fppres, "|%-#*.*jd|\n", width, precision, var);
	ft_printf("#0581");
	ret2 = ret1 > -1 ? ft_printf("|%-#*.*jd|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0582");
	ret1 = fprintf(fppres, "|%-#*.*zd|\n", width, precision, var);
	ft_printf("#0582");
	ret2 = ret1 > -1 ? ft_printf("|%-#*.*zd|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0583");
	ret1 = fprintf(fppres, "|%-#*.*d|\n", width, precision, var);
	ft_printf("#0583");
	ret2 = ret1 > -1 ? ft_printf("|%-#*.*d|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0584");
	ret1 = fprintf(fppres, "|%-#*.*i|\n", width, precision, var);
	ft_printf("#0584");
	ret2 = ret1 > -1 ? ft_printf("|%-#*.*i|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0585");
	ret1 = fprintf(fppres, "|%-#*.*hhi|\n", width, precision, var);
	ft_printf("#0585");
	ret2 = ret1 > -1 ? ft_printf("|%-#*.*hhi|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0586");
	ret1 = fprintf(fppres, "|%-#*.*hi|\n", width, precision, var);
	ft_printf("#0586");
	ret2 = ret1 > -1 ? ft_printf("|%-#*.*hi|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0587");
	ret1 = fprintf(fppres, "|%-#*.*li|\n", width, precision, var);
	ft_printf("#0587");
	ret2 = ret1 > -1 ? ft_printf("|%-#*.*li|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0588");
	ret1 = fprintf(fppres, "|%-#*.*lli|\n", width, precision, var);
	ft_printf("#0588");
	ret2 = ret1 > -1 ? ft_printf("|%-#*.*lli|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0589");
	ret1 = fprintf(fppres, "|%-#*.*ji|\n", width, precision, var);
	ft_printf("#0589");
	ret2 = ret1 > -1 ? ft_printf("|%-#*.*ji|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0590");
	ret1 = fprintf(fppres, "|%-#*.*zi|\n", width, precision, var);
	ft_printf("#0590");
	ret2 = ret1 > -1 ? ft_printf("|%-#*.*zi|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0591");
	ret1 = fprintf(fppres, "|%-#*.*i|\n", width, precision, var);
	ft_printf("#0591");
	ret2 = ret1 > -1 ? ft_printf("|%-#*.*i|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0592");
	ret1 = fprintf(fppres, "|%-#*.*o|\n", width, precision, var);
	ft_printf("#0592");
	ret2 = ret1 > -1 ? ft_printf("|%-#*.*o|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0593");
	ret1 = fprintf(fppres, "|%-#*.*hho|\n", width, precision, var);
	ft_printf("#0593");
	ret2 = ret1 > -1 ? ft_printf("|%-#*.*hho|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0594");
	ret1 = fprintf(fppres, "|%-#*.*ho|\n", width, precision, var);
	ft_printf("#0594");
	ret2 = ret1 > -1 ? ft_printf("|%-#*.*ho|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0595");
	ret1 = fprintf(fppres, "|%-#*.*lo|\n", width, precision, var);
	ft_printf("#0595");
	ret2 = ret1 > -1 ? ft_printf("|%-#*.*lo|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0596");
	ret1 = fprintf(fppres, "|%-#*.*llo|\n", width, precision, var);
	ft_printf("#0596");
	ret2 = ret1 > -1 ? ft_printf("|%-#*.*llo|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0597");
	ret1 = fprintf(fppres, "|%-#*.*jo|\n", width, precision, var);
	ft_printf("#0597");
	ret2 = ret1 > -1 ? ft_printf("|%-#*.*jo|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0598");
	ret1 = fprintf(fppres, "|%-#*.*zo|\n", width, precision, var);
	ft_printf("#0598");
	ret2 = ret1 > -1 ? ft_printf("|%-#*.*zo|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0599");
	ret1 = fprintf(fppres, "|%-#*.*o|\n", width, precision, var);
	ft_printf("#0599");
	ret2 = ret1 > -1 ? ft_printf("|%-#*.*o|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0600");
	ret1 = fprintf(fppres, "|%-#*.*u|\n", width, precision, var);
	ft_printf("#0600");
	ret2 = ret1 > -1 ? ft_printf("|%-#*.*u|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0601");
	ret1 = fprintf(fppres, "|%-#*.*hhu|\n", width, precision, var);
	ft_printf("#0601");
	ret2 = ret1 > -1 ? ft_printf("|%-#*.*hhu|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0602");
	ret1 = fprintf(fppres, "|%-#*.*hu|\n", width, precision, var);
	ft_printf("#0602");
	ret2 = ret1 > -1 ? ft_printf("|%-#*.*hu|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0603");
	ret1 = fprintf(fppres, "|%-#*.*lu|\n", width, precision, var);
	ft_printf("#0603");
	ret2 = ret1 > -1 ? ft_printf("|%-#*.*lu|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0604");
	ret1 = fprintf(fppres, "|%-#*.*llu|\n", width, precision, var);
	ft_printf("#0604");
	ret2 = ret1 > -1 ? ft_printf("|%-#*.*llu|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0605");
	ret1 = fprintf(fppres, "|%-#*.*ju|\n", width, precision, var);
	ft_printf("#0605");
	ret2 = ret1 > -1 ? ft_printf("|%-#*.*ju|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0606");
	ret1 = fprintf(fppres, "|%-#*.*zu|\n", width, precision, var);
	ft_printf("#0606");
	ret2 = ret1 > -1 ? ft_printf("|%-#*.*zu|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0607");
	ret1 = fprintf(fppres, "|%-#*.*u|\n", width, precision, var);
	ft_printf("#0607");
	ret2 = ret1 > -1 ? ft_printf("|%-#*.*u|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0608");
	ret1 = fprintf(fppres, "|%-#*.*x|\n", width, precision, var);
	ft_printf("#0608");
	ret2 = ret1 > -1 ? ft_printf("|%-#*.*x|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0609");
	ret1 = fprintf(fppres, "|%-#*.*hhx|\n", width, precision, var);
	ft_printf("#0609");
	ret2 = ret1 > -1 ? ft_printf("|%-#*.*hhx|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0610");
	ret1 = fprintf(fppres, "|%-#*.*hx|\n", width, precision, var);
	ft_printf("#0610");
	ret2 = ret1 > -1 ? ft_printf("|%-#*.*hx|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0611");
	ret1 = fprintf(fppres, "|%-#*.*lx|\n", width, precision, var);
	ft_printf("#0611");
	ret2 = ret1 > -1 ? ft_printf("|%-#*.*lx|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0612");
	ret1 = fprintf(fppres, "|%-#*.*llx|\n", width, precision, var);
	ft_printf("#0612");
	ret2 = ret1 > -1 ? ft_printf("|%-#*.*llx|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0613");
	ret1 = fprintf(fppres, "|%-#*.*jx|\n", width, precision, var);
	ft_printf("#0613");
	ret2 = ret1 > -1 ? ft_printf("|%-#*.*jx|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0614");
	ret1 = fprintf(fppres, "|%-#*.*zx|\n", width, precision, var);
	ft_printf("#0614");
	ret2 = ret1 > -1 ? ft_printf("|%-#*.*zx|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0615");
	ret1 = fprintf(fppres, "|%-#*.*x|\n", width, precision, var);
	ft_printf("#0615");
	ret2 = ret1 > -1 ? ft_printf("|%-#*.*x|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0616");
	ret1 = fprintf(fppres, "|%-#*.*X|\n", width, precision, var);
	ft_printf("#0616");
	ret2 = ret1 > -1 ? ft_printf("|%-#*.*X|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0617");
	ret1 = fprintf(fppres, "|%-#*.*hhX|\n", width, precision, var);
	ft_printf("#0617");
	ret2 = ret1 > -1 ? ft_printf("|%-#*.*hhX|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0618");
	ret1 = fprintf(fppres, "|%-#*.*hX|\n", width, precision, var);
	ft_printf("#0618");
	ret2 = ret1 > -1 ? ft_printf("|%-#*.*hX|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0619");
	ret1 = fprintf(fppres, "|%-#*.*lX|\n", width, precision, var);
	ft_printf("#0619");
	ret2 = ret1 > -1 ? ft_printf("|%-#*.*lX|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0620");
	ret1 = fprintf(fppres, "|%-#*.*llX|\n", width, precision, var);
	ft_printf("#0620");
	ret2 = ret1 > -1 ? ft_printf("|%-#*.*llX|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0621");
	ret1 = fprintf(fppres, "|%-#*.*jX|\n", width, precision, var);
	ft_printf("#0621");
	ret2 = ret1 > -1 ? ft_printf("|%-#*.*jX|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0622");
	ret1 = fprintf(fppres, "|%-#*.*zX|\n", width, precision, var);
	ft_printf("#0622");
	ret2 = ret1 > -1 ? ft_printf("|%-#*.*zX|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0623");
	ret1 = fprintf(fppres, "|%-#*.*X|\n", width, precision, var);
	ft_printf("#0623");
	ret2 = ret1 > -1 ? ft_printf("|%-#*.*X|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0624");
	ret1 = fprintf(fppres, "|%0-#*.*d|\n", width, precision, var);
	ft_printf("#0624");
	ret2 = ret1 > -1 ? ft_printf("|%0-#*.*d|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0625");
	ret1 = fprintf(fppres, "|%0-#*.*hhd|\n", width, precision, var);
	ft_printf("#0625");
	ret2 = ret1 > -1 ? ft_printf("|%0-#*.*hhd|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0626");
	ret1 = fprintf(fppres, "|%0-#*.*hd|\n", width, precision, var);
	ft_printf("#0626");
	ret2 = ret1 > -1 ? ft_printf("|%0-#*.*hd|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0627");
	ret1 = fprintf(fppres, "|%0-#*.*ld|\n", width, precision, var);
	ft_printf("#0627");
	ret2 = ret1 > -1 ? ft_printf("|%0-#*.*ld|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0628");
	ret1 = fprintf(fppres, "|%0-#*.*lld|\n", width, precision, var);
	ft_printf("#0628");
	ret2 = ret1 > -1 ? ft_printf("|%0-#*.*lld|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0629");
	ret1 = fprintf(fppres, "|%0-#*.*jd|\n", width, precision, var);
	ft_printf("#0629");
	ret2 = ret1 > -1 ? ft_printf("|%0-#*.*jd|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0630");
	ret1 = fprintf(fppres, "|%0-#*.*zd|\n", width, precision, var);
	ft_printf("#0630");
	ret2 = ret1 > -1 ? ft_printf("|%0-#*.*zd|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0631");
	ret1 = fprintf(fppres, "|%0-#*.*d|\n", width, precision, var);
	ft_printf("#0631");
	ret2 = ret1 > -1 ? ft_printf("|%0-#*.*d|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0632");
	ret1 = fprintf(fppres, "|%0-#*.*i|\n", width, precision, var);
	ft_printf("#0632");
	ret2 = ret1 > -1 ? ft_printf("|%0-#*.*i|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0633");
	ret1 = fprintf(fppres, "|%0-#*.*hhi|\n", width, precision, var);
	ft_printf("#0633");
	ret2 = ret1 > -1 ? ft_printf("|%0-#*.*hhi|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0634");
	ret1 = fprintf(fppres, "|%0-#*.*hi|\n", width, precision, var);
	ft_printf("#0634");
	ret2 = ret1 > -1 ? ft_printf("|%0-#*.*hi|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0635");
	ret1 = fprintf(fppres, "|%0-#*.*li|\n", width, precision, var);
	ft_printf("#0635");
	ret2 = ret1 > -1 ? ft_printf("|%0-#*.*li|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0636");
	ret1 = fprintf(fppres, "|%0-#*.*lli|\n", width, precision, var);
	ft_printf("#0636");
	ret2 = ret1 > -1 ? ft_printf("|%0-#*.*lli|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0637");
	ret1 = fprintf(fppres, "|%0-#*.*ji|\n", width, precision, var);
	ft_printf("#0637");
	ret2 = ret1 > -1 ? ft_printf("|%0-#*.*ji|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0638");
	ret1 = fprintf(fppres, "|%0-#*.*zi|\n", width, precision, var);
	ft_printf("#0638");
	ret2 = ret1 > -1 ? ft_printf("|%0-#*.*zi|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0639");
	ret1 = fprintf(fppres, "|%0-#*.*i|\n", width, precision, var);
	ft_printf("#0639");
	ret2 = ret1 > -1 ? ft_printf("|%0-#*.*i|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0640");
	ret1 = fprintf(fppres, "|%0-#*.*o|\n", width, precision, var);
	ft_printf("#0640");
	ret2 = ret1 > -1 ? ft_printf("|%0-#*.*o|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0641");
	ret1 = fprintf(fppres, "|%0-#*.*hho|\n", width, precision, var);
	ft_printf("#0641");
	ret2 = ret1 > -1 ? ft_printf("|%0-#*.*hho|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0642");
	ret1 = fprintf(fppres, "|%0-#*.*ho|\n", width, precision, var);
	ft_printf("#0642");
	ret2 = ret1 > -1 ? ft_printf("|%0-#*.*ho|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0643");
	ret1 = fprintf(fppres, "|%0-#*.*lo|\n", width, precision, var);
	ft_printf("#0643");
	ret2 = ret1 > -1 ? ft_printf("|%0-#*.*lo|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0644");
	ret1 = fprintf(fppres, "|%0-#*.*llo|\n", width, precision, var);
	ft_printf("#0644");
	ret2 = ret1 > -1 ? ft_printf("|%0-#*.*llo|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0645");
	ret1 = fprintf(fppres, "|%0-#*.*jo|\n", width, precision, var);
	ft_printf("#0645");
	ret2 = ret1 > -1 ? ft_printf("|%0-#*.*jo|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0646");
	ret1 = fprintf(fppres, "|%0-#*.*zo|\n", width, precision, var);
	ft_printf("#0646");
	ret2 = ret1 > -1 ? ft_printf("|%0-#*.*zo|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0647");
	ret1 = fprintf(fppres, "|%0-#*.*o|\n", width, precision, var);
	ft_printf("#0647");
	ret2 = ret1 > -1 ? ft_printf("|%0-#*.*o|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0648");
	ret1 = fprintf(fppres, "|%0-#*.*u|\n", width, precision, var);
	ft_printf("#0648");
	ret2 = ret1 > -1 ? ft_printf("|%0-#*.*u|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0649");
	ret1 = fprintf(fppres, "|%0-#*.*hhu|\n", width, precision, var);
	ft_printf("#0649");
	ret2 = ret1 > -1 ? ft_printf("|%0-#*.*hhu|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0650");
	ret1 = fprintf(fppres, "|%0-#*.*hu|\n", width, precision, var);
	ft_printf("#0650");
	ret2 = ret1 > -1 ? ft_printf("|%0-#*.*hu|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0651");
	ret1 = fprintf(fppres, "|%0-#*.*lu|\n", width, precision, var);
	ft_printf("#0651");
	ret2 = ret1 > -1 ? ft_printf("|%0-#*.*lu|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0652");
	ret1 = fprintf(fppres, "|%0-#*.*llu|\n", width, precision, var);
	ft_printf("#0652");
	ret2 = ret1 > -1 ? ft_printf("|%0-#*.*llu|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0653");
	ret1 = fprintf(fppres, "|%0-#*.*ju|\n", width, precision, var);
	ft_printf("#0653");
	ret2 = ret1 > -1 ? ft_printf("|%0-#*.*ju|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0654");
	ret1 = fprintf(fppres, "|%0-#*.*zu|\n", width, precision, var);
	ft_printf("#0654");
	ret2 = ret1 > -1 ? ft_printf("|%0-#*.*zu|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0655");
	ret1 = fprintf(fppres, "|%0-#*.*u|\n", width, precision, var);
	ft_printf("#0655");
	ret2 = ret1 > -1 ? ft_printf("|%0-#*.*u|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0656");
	ret1 = fprintf(fppres, "|%0-#*.*x|\n", width, precision, var);
	ft_printf("#0656");
	ret2 = ret1 > -1 ? ft_printf("|%0-#*.*x|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0657");
	ret1 = fprintf(fppres, "|%0-#*.*hhx|\n", width, precision, var);
	ft_printf("#0657");
	ret2 = ret1 > -1 ? ft_printf("|%0-#*.*hhx|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0658");
	ret1 = fprintf(fppres, "|%0-#*.*hx|\n", width, precision, var);
	ft_printf("#0658");
	ret2 = ret1 > -1 ? ft_printf("|%0-#*.*hx|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0659");
	ret1 = fprintf(fppres, "|%0-#*.*lx|\n", width, precision, var);
	ft_printf("#0659");
	ret2 = ret1 > -1 ? ft_printf("|%0-#*.*lx|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0660");
	ret1 = fprintf(fppres, "|%0-#*.*llx|\n", width, precision, var);
	ft_printf("#0660");
	ret2 = ret1 > -1 ? ft_printf("|%0-#*.*llx|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0661");
	ret1 = fprintf(fppres, "|%0-#*.*jx|\n", width, precision, var);
	ft_printf("#0661");
	ret2 = ret1 > -1 ? ft_printf("|%0-#*.*jx|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0662");
	ret1 = fprintf(fppres, "|%0-#*.*zx|\n", width, precision, var);
	ft_printf("#0662");
	ret2 = ret1 > -1 ? ft_printf("|%0-#*.*zx|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0663");
	ret1 = fprintf(fppres, "|%0-#*.*x|\n", width, precision, var);
	ft_printf("#0663");
	ret2 = ret1 > -1 ? ft_printf("|%0-#*.*x|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0664");
	ret1 = fprintf(fppres, "|%0-#*.*X|\n", width, precision, var);
	ft_printf("#0664");
	ret2 = ret1 > -1 ? ft_printf("|%0-#*.*X|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0665");
	ret1 = fprintf(fppres, "|%0-#*.*hhX|\n", width, precision, var);
	ft_printf("#0665");
	ret2 = ret1 > -1 ? ft_printf("|%0-#*.*hhX|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0666");
	ret1 = fprintf(fppres, "|%0-#*.*hX|\n", width, precision, var);
	ft_printf("#0666");
	ret2 = ret1 > -1 ? ft_printf("|%0-#*.*hX|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0667");
	ret1 = fprintf(fppres, "|%0-#*.*lX|\n", width, precision, var);
	ft_printf("#0667");
	ret2 = ret1 > -1 ? ft_printf("|%0-#*.*lX|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0668");
	ret1 = fprintf(fppres, "|%0-#*.*llX|\n", width, precision, var);
	ft_printf("#0668");
	ret2 = ret1 > -1 ? ft_printf("|%0-#*.*llX|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0669");
	ret1 = fprintf(fppres, "|%0-#*.*jX|\n", width, precision, var);
	ft_printf("#0669");
	ret2 = ret1 > -1 ? ft_printf("|%0-#*.*jX|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0670");
	ret1 = fprintf(fppres, "|%0-#*.*zX|\n", width, precision, var);
	ft_printf("#0670");
	ret2 = ret1 > -1 ? ft_printf("|%0-#*.*zX|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0671");
	ret1 = fprintf(fppres, "|%0-#*.*X|\n", width, precision, var);
	ft_printf("#0671");
	ret2 = ret1 > -1 ? ft_printf("|%0-#*.*X|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0672");
	ret1 = fprintf(fppres, "|%+-#*.*d|\n", width, precision, var);
	ft_printf("#0672");
	ret2 = ret1 > -1 ? ft_printf("|%+-#*.*d|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0673");
	ret1 = fprintf(fppres, "|%+-#*.*hhd|\n", width, precision, var);
	ft_printf("#0673");
	ret2 = ret1 > -1 ? ft_printf("|%+-#*.*hhd|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0674");
	ret1 = fprintf(fppres, "|%+-#*.*hd|\n", width, precision, var);
	ft_printf("#0674");
	ret2 = ret1 > -1 ? ft_printf("|%+-#*.*hd|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0675");
	ret1 = fprintf(fppres, "|%+-#*.*ld|\n", width, precision, var);
	ft_printf("#0675");
	ret2 = ret1 > -1 ? ft_printf("|%+-#*.*ld|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0676");
	ret1 = fprintf(fppres, "|%+-#*.*lld|\n", width, precision, var);
	ft_printf("#0676");
	ret2 = ret1 > -1 ? ft_printf("|%+-#*.*lld|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0677");
	ret1 = fprintf(fppres, "|%+-#*.*jd|\n", width, precision, var);
	ft_printf("#0677");
	ret2 = ret1 > -1 ? ft_printf("|%+-#*.*jd|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0678");
	ret1 = fprintf(fppres, "|%+-#*.*zd|\n", width, precision, var);
	ft_printf("#0678");
	ret2 = ret1 > -1 ? ft_printf("|%+-#*.*zd|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0679");
	ret1 = fprintf(fppres, "|%+-#*.*d|\n", width, precision, var);
	ft_printf("#0679");
	ret2 = ret1 > -1 ? ft_printf("|%+-#*.*d|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0680");
	ret1 = fprintf(fppres, "|%+-#*.*i|\n", width, precision, var);
	ft_printf("#0680");
	ret2 = ret1 > -1 ? ft_printf("|%+-#*.*i|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0681");
	ret1 = fprintf(fppres, "|%+-#*.*hhi|\n", width, precision, var);
	ft_printf("#0681");
	ret2 = ret1 > -1 ? ft_printf("|%+-#*.*hhi|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0682");
	ret1 = fprintf(fppres, "|%+-#*.*hi|\n", width, precision, var);
	ft_printf("#0682");
	ret2 = ret1 > -1 ? ft_printf("|%+-#*.*hi|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0683");
	ret1 = fprintf(fppres, "|%+-#*.*li|\n", width, precision, var);
	ft_printf("#0683");
	ret2 = ret1 > -1 ? ft_printf("|%+-#*.*li|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0684");
	ret1 = fprintf(fppres, "|%+-#*.*lli|\n", width, precision, var);
	ft_printf("#0684");
	ret2 = ret1 > -1 ? ft_printf("|%+-#*.*lli|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0685");
	ret1 = fprintf(fppres, "|%+-#*.*ji|\n", width, precision, var);
	ft_printf("#0685");
	ret2 = ret1 > -1 ? ft_printf("|%+-#*.*ji|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0686");
	ret1 = fprintf(fppres, "|%+-#*.*zi|\n", width, precision, var);
	ft_printf("#0686");
	ret2 = ret1 > -1 ? ft_printf("|%+-#*.*zi|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0687");
	ret1 = fprintf(fppres, "|%+-#*.*i|\n", width, precision, var);
	ft_printf("#0687");
	ret2 = ret1 > -1 ? ft_printf("|%+-#*.*i|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0688");
	ret1 = fprintf(fppres, "|%+-#*.*o|\n", width, precision, var);
	ft_printf("#0688");
	ret2 = ret1 > -1 ? ft_printf("|%+-#*.*o|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0689");
	ret1 = fprintf(fppres, "|%+-#*.*hho|\n", width, precision, var);
	ft_printf("#0689");
	ret2 = ret1 > -1 ? ft_printf("|%+-#*.*hho|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0690");
	ret1 = fprintf(fppres, "|%+-#*.*ho|\n", width, precision, var);
	ft_printf("#0690");
	ret2 = ret1 > -1 ? ft_printf("|%+-#*.*ho|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0691");
	ret1 = fprintf(fppres, "|%+-#*.*lo|\n", width, precision, var);
	ft_printf("#0691");
	ret2 = ret1 > -1 ? ft_printf("|%+-#*.*lo|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0692");
	ret1 = fprintf(fppres, "|%+-#*.*llo|\n", width, precision, var);
	ft_printf("#0692");
	ret2 = ret1 > -1 ? ft_printf("|%+-#*.*llo|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0693");
	ret1 = fprintf(fppres, "|%+-#*.*jo|\n", width, precision, var);
	ft_printf("#0693");
	ret2 = ret1 > -1 ? ft_printf("|%+-#*.*jo|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0694");
	ret1 = fprintf(fppres, "|%+-#*.*zo|\n", width, precision, var);
	ft_printf("#0694");
	ret2 = ret1 > -1 ? ft_printf("|%+-#*.*zo|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0695");
	ret1 = fprintf(fppres, "|%+-#*.*o|\n", width, precision, var);
	ft_printf("#0695");
	ret2 = ret1 > -1 ? ft_printf("|%+-#*.*o|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0696");
	ret1 = fprintf(fppres, "|%+-#*.*u|\n", width, precision, var);
	ft_printf("#0696");
	ret2 = ret1 > -1 ? ft_printf("|%+-#*.*u|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0697");
	ret1 = fprintf(fppres, "|%+-#*.*hhu|\n", width, precision, var);
	ft_printf("#0697");
	ret2 = ret1 > -1 ? ft_printf("|%+-#*.*hhu|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0698");
	ret1 = fprintf(fppres, "|%+-#*.*hu|\n", width, precision, var);
	ft_printf("#0698");
	ret2 = ret1 > -1 ? ft_printf("|%+-#*.*hu|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0699");
	ret1 = fprintf(fppres, "|%+-#*.*lu|\n", width, precision, var);
	ft_printf("#0699");
	ret2 = ret1 > -1 ? ft_printf("|%+-#*.*lu|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0700");
	ret1 = fprintf(fppres, "|%+-#*.*llu|\n", width, precision, var);
	ft_printf("#0700");
	ret2 = ret1 > -1 ? ft_printf("|%+-#*.*llu|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0701");
	ret1 = fprintf(fppres, "|%+-#*.*ju|\n", width, precision, var);
	ft_printf("#0701");
	ret2 = ret1 > -1 ? ft_printf("|%+-#*.*ju|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0702");
	ret1 = fprintf(fppres, "|%+-#*.*zu|\n", width, precision, var);
	ft_printf("#0702");
	ret2 = ret1 > -1 ? ft_printf("|%+-#*.*zu|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0703");
	ret1 = fprintf(fppres, "|%+-#*.*u|\n", width, precision, var);
	ft_printf("#0703");
	ret2 = ret1 > -1 ? ft_printf("|%+-#*.*u|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0704");
	ret1 = fprintf(fppres, "|%+-#*.*x|\n", width, precision, var);
	ft_printf("#0704");
	ret2 = ret1 > -1 ? ft_printf("|%+-#*.*x|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0705");
	ret1 = fprintf(fppres, "|%+-#*.*hhx|\n", width, precision, var);
	ft_printf("#0705");
	ret2 = ret1 > -1 ? ft_printf("|%+-#*.*hhx|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0706");
	ret1 = fprintf(fppres, "|%+-#*.*hx|\n", width, precision, var);
	ft_printf("#0706");
	ret2 = ret1 > -1 ? ft_printf("|%+-#*.*hx|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0707");
	ret1 = fprintf(fppres, "|%+-#*.*lx|\n", width, precision, var);
	ft_printf("#0707");
	ret2 = ret1 > -1 ? ft_printf("|%+-#*.*lx|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0708");
	ret1 = fprintf(fppres, "|%+-#*.*llx|\n", width, precision, var);
	ft_printf("#0708");
	ret2 = ret1 > -1 ? ft_printf("|%+-#*.*llx|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0709");
	ret1 = fprintf(fppres, "|%+-#*.*jx|\n", width, precision, var);
	ft_printf("#0709");
	ret2 = ret1 > -1 ? ft_printf("|%+-#*.*jx|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0710");
	ret1 = fprintf(fppres, "|%+-#*.*zx|\n", width, precision, var);
	ft_printf("#0710");
	ret2 = ret1 > -1 ? ft_printf("|%+-#*.*zx|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0711");
	ret1 = fprintf(fppres, "|%+-#*.*x|\n", width, precision, var);
	ft_printf("#0711");
	ret2 = ret1 > -1 ? ft_printf("|%+-#*.*x|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0712");
	ret1 = fprintf(fppres, "|%+-#*.*X|\n", width, precision, var);
	ft_printf("#0712");
	ret2 = ret1 > -1 ? ft_printf("|%+-#*.*X|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0713");
	ret1 = fprintf(fppres, "|%+-#*.*hhX|\n", width, precision, var);
	ft_printf("#0713");
	ret2 = ret1 > -1 ? ft_printf("|%+-#*.*hhX|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0714");
	ret1 = fprintf(fppres, "|%+-#*.*hX|\n", width, precision, var);
	ft_printf("#0714");
	ret2 = ret1 > -1 ? ft_printf("|%+-#*.*hX|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0715");
	ret1 = fprintf(fppres, "|%+-#*.*lX|\n", width, precision, var);
	ft_printf("#0715");
	ret2 = ret1 > -1 ? ft_printf("|%+-#*.*lX|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0716");
	ret1 = fprintf(fppres, "|%+-#*.*llX|\n", width, precision, var);
	ft_printf("#0716");
	ret2 = ret1 > -1 ? ft_printf("|%+-#*.*llX|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0717");
	ret1 = fprintf(fppres, "|%+-#*.*jX|\n", width, precision, var);
	ft_printf("#0717");
	ret2 = ret1 > -1 ? ft_printf("|%+-#*.*jX|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0718");
	ret1 = fprintf(fppres, "|%+-#*.*zX|\n", width, precision, var);
	ft_printf("#0718");
	ret2 = ret1 > -1 ? ft_printf("|%+-#*.*zX|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0719");
	ret1 = fprintf(fppres, "|%+-#*.*X|\n", width, precision, var);
	ft_printf("#0719");
	ret2 = ret1 > -1 ? ft_printf("|%+-#*.*X|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0720");
	ret1 = fprintf(fppres, "|%0+-#*.*d|\n", width, precision, var);
	ft_printf("#0720");
	ret2 = ret1 > -1 ? ft_printf("|%0+-#*.*d|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0721");
	ret1 = fprintf(fppres, "|%0+-#*.*hhd|\n", width, precision, var);
	ft_printf("#0721");
	ret2 = ret1 > -1 ? ft_printf("|%0+-#*.*hhd|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0722");
	ret1 = fprintf(fppres, "|%0+-#*.*hd|\n", width, precision, var);
	ft_printf("#0722");
	ret2 = ret1 > -1 ? ft_printf("|%0+-#*.*hd|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0723");
	ret1 = fprintf(fppres, "|%0+-#*.*ld|\n", width, precision, var);
	ft_printf("#0723");
	ret2 = ret1 > -1 ? ft_printf("|%0+-#*.*ld|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0724");
	ret1 = fprintf(fppres, "|%0+-#*.*lld|\n", width, precision, var);
	ft_printf("#0724");
	ret2 = ret1 > -1 ? ft_printf("|%0+-#*.*lld|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0725");
	ret1 = fprintf(fppres, "|%0+-#*.*jd|\n", width, precision, var);
	ft_printf("#0725");
	ret2 = ret1 > -1 ? ft_printf("|%0+-#*.*jd|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0726");
	ret1 = fprintf(fppres, "|%0+-#*.*zd|\n", width, precision, var);
	ft_printf("#0726");
	ret2 = ret1 > -1 ? ft_printf("|%0+-#*.*zd|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0727");
	ret1 = fprintf(fppres, "|%0+-#*.*d|\n", width, precision, var);
	ft_printf("#0727");
	ret2 = ret1 > -1 ? ft_printf("|%0+-#*.*d|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0728");
	ret1 = fprintf(fppres, "|%0+-#*.*i|\n", width, precision, var);
	ft_printf("#0728");
	ret2 = ret1 > -1 ? ft_printf("|%0+-#*.*i|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0729");
	ret1 = fprintf(fppres, "|%0+-#*.*hhi|\n", width, precision, var);
	ft_printf("#0729");
	ret2 = ret1 > -1 ? ft_printf("|%0+-#*.*hhi|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0730");
	ret1 = fprintf(fppres, "|%0+-#*.*hi|\n", width, precision, var);
	ft_printf("#0730");
	ret2 = ret1 > -1 ? ft_printf("|%0+-#*.*hi|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0731");
	ret1 = fprintf(fppres, "|%0+-#*.*li|\n", width, precision, var);
	ft_printf("#0731");
	ret2 = ret1 > -1 ? ft_printf("|%0+-#*.*li|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0732");
	ret1 = fprintf(fppres, "|%0+-#*.*lli|\n", width, precision, var);
	ft_printf("#0732");
	ret2 = ret1 > -1 ? ft_printf("|%0+-#*.*lli|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0733");
	ret1 = fprintf(fppres, "|%0+-#*.*ji|\n", width, precision, var);
	ft_printf("#0733");
	ret2 = ret1 > -1 ? ft_printf("|%0+-#*.*ji|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0734");
	ret1 = fprintf(fppres, "|%0+-#*.*zi|\n", width, precision, var);
	ft_printf("#0734");
	ret2 = ret1 > -1 ? ft_printf("|%0+-#*.*zi|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0735");
	ret1 = fprintf(fppres, "|%0+-#*.*i|\n", width, precision, var);
	ft_printf("#0735");
	ret2 = ret1 > -1 ? ft_printf("|%0+-#*.*i|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0736");
	ret1 = fprintf(fppres, "|%0+-#*.*o|\n", width, precision, var);
	ft_printf("#0736");
	ret2 = ret1 > -1 ? ft_printf("|%0+-#*.*o|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0737");
	ret1 = fprintf(fppres, "|%0+-#*.*hho|\n", width, precision, var);
	ft_printf("#0737");
	ret2 = ret1 > -1 ? ft_printf("|%0+-#*.*hho|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0738");
	ret1 = fprintf(fppres, "|%0+-#*.*ho|\n", width, precision, var);
	ft_printf("#0738");
	ret2 = ret1 > -1 ? ft_printf("|%0+-#*.*ho|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0739");
	ret1 = fprintf(fppres, "|%0+-#*.*lo|\n", width, precision, var);
	ft_printf("#0739");
	ret2 = ret1 > -1 ? ft_printf("|%0+-#*.*lo|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0740");
	ret1 = fprintf(fppres, "|%0+-#*.*llo|\n", width, precision, var);
	ft_printf("#0740");
	ret2 = ret1 > -1 ? ft_printf("|%0+-#*.*llo|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0741");
	ret1 = fprintf(fppres, "|%0+-#*.*jo|\n", width, precision, var);
	ft_printf("#0741");
	ret2 = ret1 > -1 ? ft_printf("|%0+-#*.*jo|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0742");
	ret1 = fprintf(fppres, "|%0+-#*.*zo|\n", width, precision, var);
	ft_printf("#0742");
	ret2 = ret1 > -1 ? ft_printf("|%0+-#*.*zo|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0743");
	ret1 = fprintf(fppres, "|%0+-#*.*o|\n", width, precision, var);
	ft_printf("#0743");
	ret2 = ret1 > -1 ? ft_printf("|%0+-#*.*o|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0744");
	ret1 = fprintf(fppres, "|%0+-#*.*u|\n", width, precision, var);
	ft_printf("#0744");
	ret2 = ret1 > -1 ? ft_printf("|%0+-#*.*u|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0745");
	ret1 = fprintf(fppres, "|%0+-#*.*hhu|\n", width, precision, var);
	ft_printf("#0745");
	ret2 = ret1 > -1 ? ft_printf("|%0+-#*.*hhu|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0746");
	ret1 = fprintf(fppres, "|%0+-#*.*hu|\n", width, precision, var);
	ft_printf("#0746");
	ret2 = ret1 > -1 ? ft_printf("|%0+-#*.*hu|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0747");
	ret1 = fprintf(fppres, "|%0+-#*.*lu|\n", width, precision, var);
	ft_printf("#0747");
	ret2 = ret1 > -1 ? ft_printf("|%0+-#*.*lu|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0748");
	ret1 = fprintf(fppres, "|%0+-#*.*llu|\n", width, precision, var);
	ft_printf("#0748");
	ret2 = ret1 > -1 ? ft_printf("|%0+-#*.*llu|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0749");
	ret1 = fprintf(fppres, "|%0+-#*.*ju|\n", width, precision, var);
	ft_printf("#0749");
	ret2 = ret1 > -1 ? ft_printf("|%0+-#*.*ju|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0750");
	ret1 = fprintf(fppres, "|%0+-#*.*zu|\n", width, precision, var);
	ft_printf("#0750");
	ret2 = ret1 > -1 ? ft_printf("|%0+-#*.*zu|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0751");
	ret1 = fprintf(fppres, "|%0+-#*.*u|\n", width, precision, var);
	ft_printf("#0751");
	ret2 = ret1 > -1 ? ft_printf("|%0+-#*.*u|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0752");
	ret1 = fprintf(fppres, "|%0+-#*.*x|\n", width, precision, var);
	ft_printf("#0752");
	ret2 = ret1 > -1 ? ft_printf("|%0+-#*.*x|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0753");
	ret1 = fprintf(fppres, "|%0+-#*.*hhx|\n", width, precision, var);
	ft_printf("#0753");
	ret2 = ret1 > -1 ? ft_printf("|%0+-#*.*hhx|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0754");
	ret1 = fprintf(fppres, "|%0+-#*.*hx|\n", width, precision, var);
	ft_printf("#0754");
	ret2 = ret1 > -1 ? ft_printf("|%0+-#*.*hx|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0755");
	ret1 = fprintf(fppres, "|%0+-#*.*lx|\n", width, precision, var);
	ft_printf("#0755");
	ret2 = ret1 > -1 ? ft_printf("|%0+-#*.*lx|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0756");
	ret1 = fprintf(fppres, "|%0+-#*.*llx|\n", width, precision, var);
	ft_printf("#0756");
	ret2 = ret1 > -1 ? ft_printf("|%0+-#*.*llx|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0757");
	ret1 = fprintf(fppres, "|%0+-#*.*jx|\n", width, precision, var);
	ft_printf("#0757");
	ret2 = ret1 > -1 ? ft_printf("|%0+-#*.*jx|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0758");
	ret1 = fprintf(fppres, "|%0+-#*.*zx|\n", width, precision, var);
	ft_printf("#0758");
	ret2 = ret1 > -1 ? ft_printf("|%0+-#*.*zx|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0759");
	ret1 = fprintf(fppres, "|%0+-#*.*x|\n", width, precision, var);
	ft_printf("#0759");
	ret2 = ret1 > -1 ? ft_printf("|%0+-#*.*x|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0760");
	ret1 = fprintf(fppres, "|%0+-#*.*X|\n", width, precision, var);
	ft_printf("#0760");
	ret2 = ret1 > -1 ? ft_printf("|%0+-#*.*X|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0761");
	ret1 = fprintf(fppres, "|%0+-#*.*hhX|\n", width, precision, var);
	ft_printf("#0761");
	ret2 = ret1 > -1 ? ft_printf("|%0+-#*.*hhX|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0762");
	ret1 = fprintf(fppres, "|%0+-#*.*hX|\n", width, precision, var);
	ft_printf("#0762");
	ret2 = ret1 > -1 ? ft_printf("|%0+-#*.*hX|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0763");
	ret1 = fprintf(fppres, "|%0+-#*.*lX|\n", width, precision, var);
	ft_printf("#0763");
	ret2 = ret1 > -1 ? ft_printf("|%0+-#*.*lX|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0764");
	ret1 = fprintf(fppres, "|%0+-#*.*llX|\n", width, precision, var);
	ft_printf("#0764");
	ret2 = ret1 > -1 ? ft_printf("|%0+-#*.*llX|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0765");
	ret1 = fprintf(fppres, "|%0+-#*.*jX|\n", width, precision, var);
	ft_printf("#0765");
	ret2 = ret1 > -1 ? ft_printf("|%0+-#*.*jX|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0766");
	ret1 = fprintf(fppres, "|%0+-#*.*zX|\n", width, precision, var);
	ft_printf("#0766");
	ret2 = ret1 > -1 ? ft_printf("|%0+-#*.*zX|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0767");
	ret1 = fprintf(fppres, "|%0+-#*.*X|\n", width, precision, var);
	ft_printf("#0767");
	ret2 = ret1 > -1 ? ft_printf("|%0+-#*.*X|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@	fclose(fppres);
	fclose(fppret);
	fclose(fpftret);
}
