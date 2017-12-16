#include <stdio.h>
#include <stdint.h>
#include "libftprintf.h"

size_t numeric_testing_diouxbx_tests = 1536;

void		numeric_testing_diouxbx(int *n, int width, int precision, intmax_t var)
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
	fprintf(fppres, "NAME = numeric_testing_diouxbx.c\n");
	fprintf(fppres, "TESTS = %zu\n", numeric_testing_diouxbx_tests);
	fprintf(fppres, "WIDTH = %d\n", width);
	fprintf(fppres, "PRECISION = %d\n", precision);
	fprintf(fppres, "VAR = %lld\n\n", var);

	ft_printf("===\\ NEW TEST\n");
	ft_printf("NAME = numeric_testing_diouxbx.c\n");
	ft_printf("TESTS = %zu\n", numeric_testing_diouxbx_tests);
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
	ret1 = fprintf(fppres, "|%*.*o|\n", width, precision, var);
	ft_printf("#0016");
	ret2 = ft_printf("|%*.*o|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0017");
	ret1 = fprintf(fppres, "|%*.*hho|\n", width, precision, var);
	ft_printf("#0017");
	ret2 = ft_printf("|%*.*hho|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0018");
	ret1 = fprintf(fppres, "|%*.*ho|\n", width, precision, var);
	ft_printf("#0018");
	ret2 = ft_printf("|%*.*ho|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0019");
	ret1 = fprintf(fppres, "|%*.*lo|\n", width, precision, var);
	ft_printf("#0019");
	ret2 = ft_printf("|%*.*lo|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0020");
	ret1 = fprintf(fppres, "|%*.*llo|\n", width, precision, var);
	ft_printf("#0020");
	ret2 = ft_printf("|%*.*llo|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0021");
	ret1 = fprintf(fppres, "|%*.*jo|\n", width, precision, var);
	ft_printf("#0021");
	ret2 = ft_printf("|%*.*jo|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0022");
	ret1 = fprintf(fppres, "|%*.*zo|\n", width, precision, var);
	ft_printf("#0022");
	ret2 = ft_printf("|%*.*zo|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0023");
	ret1 = fprintf(fppres, "|%*.*o|\n", width, precision, var);
	ft_printf("#0023");
	ret2 = ft_printf("|%*.*o|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0024");
	ret1 = fprintf(fppres, "|%*.*u|\n", width, precision, var);
	ft_printf("#0024");
	ret2 = ft_printf("|%*.*u|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0025");
	ret1 = fprintf(fppres, "|%*.*hhu|\n", width, precision, var);
	ft_printf("#0025");
	ret2 = ft_printf("|%*.*hhu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0026");
	ret1 = fprintf(fppres, "|%*.*hu|\n", width, precision, var);
	ft_printf("#0026");
	ret2 = ft_printf("|%*.*hu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0027");
	ret1 = fprintf(fppres, "|%*.*lu|\n", width, precision, var);
	ft_printf("#0027");
	ret2 = ft_printf("|%*.*lu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0028");
	ret1 = fprintf(fppres, "|%*.*llu|\n", width, precision, var);
	ft_printf("#0028");
	ret2 = ft_printf("|%*.*llu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0029");
	ret1 = fprintf(fppres, "|%*.*ju|\n", width, precision, var);
	ft_printf("#0029");
	ret2 = ft_printf("|%*.*ju|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0030");
	ret1 = fprintf(fppres, "|%*.*zu|\n", width, precision, var);
	ft_printf("#0030");
	ret2 = ft_printf("|%*.*zu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0031");
	ret1 = fprintf(fppres, "|%*.*u|\n", width, precision, var);
	ft_printf("#0031");
	ret2 = ft_printf("|%*.*u|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0032");
	ret1 = fprintf(fppres, "|%*.*x|\n", width, precision, var);
	ft_printf("#0032");
	ret2 = ft_printf("|%*.*x|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0033");
	ret1 = fprintf(fppres, "|%*.*hhx|\n", width, precision, var);
	ft_printf("#0033");
	ret2 = ft_printf("|%*.*hhx|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0034");
	ret1 = fprintf(fppres, "|%*.*hx|\n", width, precision, var);
	ft_printf("#0034");
	ret2 = ft_printf("|%*.*hx|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0035");
	ret1 = fprintf(fppres, "|%*.*lx|\n", width, precision, var);
	ft_printf("#0035");
	ret2 = ft_printf("|%*.*lx|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0036");
	ret1 = fprintf(fppres, "|%*.*llx|\n", width, precision, var);
	ft_printf("#0036");
	ret2 = ft_printf("|%*.*llx|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0037");
	ret1 = fprintf(fppres, "|%*.*jx|\n", width, precision, var);
	ft_printf("#0037");
	ret2 = ft_printf("|%*.*jx|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0038");
	ret1 = fprintf(fppres, "|%*.*zx|\n", width, precision, var);
	ft_printf("#0038");
	ret2 = ft_printf("|%*.*zx|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0039");
	ret1 = fprintf(fppres, "|%*.*x|\n", width, precision, var);
	ft_printf("#0039");
	ret2 = ft_printf("|%*.*x|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0040");
	ret1 = fprintf(fppres, "|%*.*X|\n", width, precision, var);
	ft_printf("#0040");
	ret2 = ft_printf("|%*.*X|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0041");
	ret1 = fprintf(fppres, "|%*.*hhX|\n", width, precision, var);
	ft_printf("#0041");
	ret2 = ft_printf("|%*.*hhX|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0042");
	ret1 = fprintf(fppres, "|%*.*hX|\n", width, precision, var);
	ft_printf("#0042");
	ret2 = ft_printf("|%*.*hX|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0043");
	ret1 = fprintf(fppres, "|%*.*lX|\n", width, precision, var);
	ft_printf("#0043");
	ret2 = ft_printf("|%*.*lX|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0044");
	ret1 = fprintf(fppres, "|%*.*llX|\n", width, precision, var);
	ft_printf("#0044");
	ret2 = ft_printf("|%*.*llX|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0045");
	ret1 = fprintf(fppres, "|%*.*jX|\n", width, precision, var);
	ft_printf("#0045");
	ret2 = ft_printf("|%*.*jX|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0046");
	ret1 = fprintf(fppres, "|%*.*zX|\n", width, precision, var);
	ft_printf("#0046");
	ret2 = ft_printf("|%*.*zX|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0047");
	ret1 = fprintf(fppres, "|%*.*X|\n", width, precision, var);
	ft_printf("#0047");
	ret2 = ft_printf("|%*.*X|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0048");
	ret1 = fprintf(fppres, "|% *.*d|\n", width, precision, var);
	ft_printf("#0048");
	ret2 = ft_printf("|% *.*d|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0049");
	ret1 = fprintf(fppres, "|% *.*hhd|\n", width, precision, var);
	ft_printf("#0049");
	ret2 = ft_printf("|% *.*hhd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0050");
	ret1 = fprintf(fppres, "|% *.*hd|\n", width, precision, var);
	ft_printf("#0050");
	ret2 = ft_printf("|% *.*hd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0051");
	ret1 = fprintf(fppres, "|% *.*ld|\n", width, precision, var);
	ft_printf("#0051");
	ret2 = ft_printf("|% *.*ld|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0052");
	ret1 = fprintf(fppres, "|% *.*lld|\n", width, precision, var);
	ft_printf("#0052");
	ret2 = ft_printf("|% *.*lld|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0053");
	ret1 = fprintf(fppres, "|% *.*jd|\n", width, precision, var);
	ft_printf("#0053");
	ret2 = ft_printf("|% *.*jd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0054");
	ret1 = fprintf(fppres, "|% *.*zd|\n", width, precision, var);
	ft_printf("#0054");
	ret2 = ft_printf("|% *.*zd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0055");
	ret1 = fprintf(fppres, "|% *.*d|\n", width, precision, var);
	ft_printf("#0055");
	ret2 = ft_printf("|% *.*d|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0056");
	ret1 = fprintf(fppres, "|% *.*i|\n", width, precision, var);
	ft_printf("#0056");
	ret2 = ft_printf("|% *.*i|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0057");
	ret1 = fprintf(fppres, "|% *.*hhi|\n", width, precision, var);
	ft_printf("#0057");
	ret2 = ft_printf("|% *.*hhi|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0058");
	ret1 = fprintf(fppres, "|% *.*hi|\n", width, precision, var);
	ft_printf("#0058");
	ret2 = ft_printf("|% *.*hi|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0059");
	ret1 = fprintf(fppres, "|% *.*li|\n", width, precision, var);
	ft_printf("#0059");
	ret2 = ft_printf("|% *.*li|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0060");
	ret1 = fprintf(fppres, "|% *.*lli|\n", width, precision, var);
	ft_printf("#0060");
	ret2 = ft_printf("|% *.*lli|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0061");
	ret1 = fprintf(fppres, "|% *.*ji|\n", width, precision, var);
	ft_printf("#0061");
	ret2 = ft_printf("|% *.*ji|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0062");
	ret1 = fprintf(fppres, "|% *.*zi|\n", width, precision, var);
	ft_printf("#0062");
	ret2 = ft_printf("|% *.*zi|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0063");
	ret1 = fprintf(fppres, "|% *.*i|\n", width, precision, var);
	ft_printf("#0063");
	ret2 = ft_printf("|% *.*i|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0064");
	ret1 = fprintf(fppres, "|% *.*o|\n", width, precision, var);
	ft_printf("#0064");
	ret2 = ft_printf("|% *.*o|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0065");
	ret1 = fprintf(fppres, "|% *.*hho|\n", width, precision, var);
	ft_printf("#0065");
	ret2 = ft_printf("|% *.*hho|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0066");
	ret1 = fprintf(fppres, "|% *.*ho|\n", width, precision, var);
	ft_printf("#0066");
	ret2 = ft_printf("|% *.*ho|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0067");
	ret1 = fprintf(fppres, "|% *.*lo|\n", width, precision, var);
	ft_printf("#0067");
	ret2 = ft_printf("|% *.*lo|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0068");
	ret1 = fprintf(fppres, "|% *.*llo|\n", width, precision, var);
	ft_printf("#0068");
	ret2 = ft_printf("|% *.*llo|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0069");
	ret1 = fprintf(fppres, "|% *.*jo|\n", width, precision, var);
	ft_printf("#0069");
	ret2 = ft_printf("|% *.*jo|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0070");
	ret1 = fprintf(fppres, "|% *.*zo|\n", width, precision, var);
	ft_printf("#0070");
	ret2 = ft_printf("|% *.*zo|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0071");
	ret1 = fprintf(fppres, "|% *.*o|\n", width, precision, var);
	ft_printf("#0071");
	ret2 = ft_printf("|% *.*o|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0072");
	ret1 = fprintf(fppres, "|% *.*u|\n", width, precision, var);
	ft_printf("#0072");
	ret2 = ft_printf("|% *.*u|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0073");
	ret1 = fprintf(fppres, "|% *.*hhu|\n", width, precision, var);
	ft_printf("#0073");
	ret2 = ft_printf("|% *.*hhu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0074");
	ret1 = fprintf(fppres, "|% *.*hu|\n", width, precision, var);
	ft_printf("#0074");
	ret2 = ft_printf("|% *.*hu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0075");
	ret1 = fprintf(fppres, "|% *.*lu|\n", width, precision, var);
	ft_printf("#0075");
	ret2 = ft_printf("|% *.*lu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0076");
	ret1 = fprintf(fppres, "|% *.*llu|\n", width, precision, var);
	ft_printf("#0076");
	ret2 = ft_printf("|% *.*llu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0077");
	ret1 = fprintf(fppres, "|% *.*ju|\n", width, precision, var);
	ft_printf("#0077");
	ret2 = ft_printf("|% *.*ju|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0078");
	ret1 = fprintf(fppres, "|% *.*zu|\n", width, precision, var);
	ft_printf("#0078");
	ret2 = ft_printf("|% *.*zu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0079");
	ret1 = fprintf(fppres, "|% *.*u|\n", width, precision, var);
	ft_printf("#0079");
	ret2 = ft_printf("|% *.*u|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0080");
	ret1 = fprintf(fppres, "|% *.*x|\n", width, precision, var);
	ft_printf("#0080");
	ret2 = ft_printf("|% *.*x|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0081");
	ret1 = fprintf(fppres, "|% *.*hhx|\n", width, precision, var);
	ft_printf("#0081");
	ret2 = ft_printf("|% *.*hhx|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0082");
	ret1 = fprintf(fppres, "|% *.*hx|\n", width, precision, var);
	ft_printf("#0082");
	ret2 = ft_printf("|% *.*hx|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0083");
	ret1 = fprintf(fppres, "|% *.*lx|\n", width, precision, var);
	ft_printf("#0083");
	ret2 = ft_printf("|% *.*lx|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0084");
	ret1 = fprintf(fppres, "|% *.*llx|\n", width, precision, var);
	ft_printf("#0084");
	ret2 = ft_printf("|% *.*llx|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0085");
	ret1 = fprintf(fppres, "|% *.*jx|\n", width, precision, var);
	ft_printf("#0085");
	ret2 = ft_printf("|% *.*jx|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0086");
	ret1 = fprintf(fppres, "|% *.*zx|\n", width, precision, var);
	ft_printf("#0086");
	ret2 = ft_printf("|% *.*zx|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0087");
	ret1 = fprintf(fppres, "|% *.*x|\n", width, precision, var);
	ft_printf("#0087");
	ret2 = ft_printf("|% *.*x|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0088");
	ret1 = fprintf(fppres, "|% *.*X|\n", width, precision, var);
	ft_printf("#0088");
	ret2 = ft_printf("|% *.*X|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0089");
	ret1 = fprintf(fppres, "|% *.*hhX|\n", width, precision, var);
	ft_printf("#0089");
	ret2 = ft_printf("|% *.*hhX|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0090");
	ret1 = fprintf(fppres, "|% *.*hX|\n", width, precision, var);
	ft_printf("#0090");
	ret2 = ft_printf("|% *.*hX|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0091");
	ret1 = fprintf(fppres, "|% *.*lX|\n", width, precision, var);
	ft_printf("#0091");
	ret2 = ft_printf("|% *.*lX|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0092");
	ret1 = fprintf(fppres, "|% *.*llX|\n", width, precision, var);
	ft_printf("#0092");
	ret2 = ft_printf("|% *.*llX|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0093");
	ret1 = fprintf(fppres, "|% *.*jX|\n", width, precision, var);
	ft_printf("#0093");
	ret2 = ft_printf("|% *.*jX|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0094");
	ret1 = fprintf(fppres, "|% *.*zX|\n", width, precision, var);
	ft_printf("#0094");
	ret2 = ft_printf("|% *.*zX|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0095");
	ret1 = fprintf(fppres, "|% *.*X|\n", width, precision, var);
	ft_printf("#0095");
	ret2 = ft_printf("|% *.*X|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0096");
	ret1 = fprintf(fppres, "|%0*.*d|\n", width, precision, var);
	ft_printf("#0096");
	ret2 = ft_printf("|%0*.*d|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0097");
	ret1 = fprintf(fppres, "|%0*.*hhd|\n", width, precision, var);
	ft_printf("#0097");
	ret2 = ft_printf("|%0*.*hhd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0098");
	ret1 = fprintf(fppres, "|%0*.*hd|\n", width, precision, var);
	ft_printf("#0098");
	ret2 = ft_printf("|%0*.*hd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0099");
	ret1 = fprintf(fppres, "|%0*.*ld|\n", width, precision, var);
	ft_printf("#0099");
	ret2 = ft_printf("|%0*.*ld|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0100");
	ret1 = fprintf(fppres, "|%0*.*lld|\n", width, precision, var);
	ft_printf("#0100");
	ret2 = ft_printf("|%0*.*lld|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0101");
	ret1 = fprintf(fppres, "|%0*.*jd|\n", width, precision, var);
	ft_printf("#0101");
	ret2 = ft_printf("|%0*.*jd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0102");
	ret1 = fprintf(fppres, "|%0*.*zd|\n", width, precision, var);
	ft_printf("#0102");
	ret2 = ft_printf("|%0*.*zd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0103");
	ret1 = fprintf(fppres, "|%0*.*d|\n", width, precision, var);
	ft_printf("#0103");
	ret2 = ft_printf("|%0*.*d|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0104");
	ret1 = fprintf(fppres, "|%0*.*i|\n", width, precision, var);
	ft_printf("#0104");
	ret2 = ft_printf("|%0*.*i|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0105");
	ret1 = fprintf(fppres, "|%0*.*hhi|\n", width, precision, var);
	ft_printf("#0105");
	ret2 = ft_printf("|%0*.*hhi|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0106");
	ret1 = fprintf(fppres, "|%0*.*hi|\n", width, precision, var);
	ft_printf("#0106");
	ret2 = ft_printf("|%0*.*hi|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0107");
	ret1 = fprintf(fppres, "|%0*.*li|\n", width, precision, var);
	ft_printf("#0107");
	ret2 = ft_printf("|%0*.*li|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0108");
	ret1 = fprintf(fppres, "|%0*.*lli|\n", width, precision, var);
	ft_printf("#0108");
	ret2 = ft_printf("|%0*.*lli|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0109");
	ret1 = fprintf(fppres, "|%0*.*ji|\n", width, precision, var);
	ft_printf("#0109");
	ret2 = ft_printf("|%0*.*ji|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0110");
	ret1 = fprintf(fppres, "|%0*.*zi|\n", width, precision, var);
	ft_printf("#0110");
	ret2 = ft_printf("|%0*.*zi|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0111");
	ret1 = fprintf(fppres, "|%0*.*i|\n", width, precision, var);
	ft_printf("#0111");
	ret2 = ft_printf("|%0*.*i|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0112");
	ret1 = fprintf(fppres, "|%0*.*o|\n", width, precision, var);
	ft_printf("#0112");
	ret2 = ft_printf("|%0*.*o|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0113");
	ret1 = fprintf(fppres, "|%0*.*hho|\n", width, precision, var);
	ft_printf("#0113");
	ret2 = ft_printf("|%0*.*hho|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0114");
	ret1 = fprintf(fppres, "|%0*.*ho|\n", width, precision, var);
	ft_printf("#0114");
	ret2 = ft_printf("|%0*.*ho|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0115");
	ret1 = fprintf(fppres, "|%0*.*lo|\n", width, precision, var);
	ft_printf("#0115");
	ret2 = ft_printf("|%0*.*lo|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0116");
	ret1 = fprintf(fppres, "|%0*.*llo|\n", width, precision, var);
	ft_printf("#0116");
	ret2 = ft_printf("|%0*.*llo|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0117");
	ret1 = fprintf(fppres, "|%0*.*jo|\n", width, precision, var);
	ft_printf("#0117");
	ret2 = ft_printf("|%0*.*jo|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0118");
	ret1 = fprintf(fppres, "|%0*.*zo|\n", width, precision, var);
	ft_printf("#0118");
	ret2 = ft_printf("|%0*.*zo|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0119");
	ret1 = fprintf(fppres, "|%0*.*o|\n", width, precision, var);
	ft_printf("#0119");
	ret2 = ft_printf("|%0*.*o|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0120");
	ret1 = fprintf(fppres, "|%0*.*u|\n", width, precision, var);
	ft_printf("#0120");
	ret2 = ft_printf("|%0*.*u|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0121");
	ret1 = fprintf(fppres, "|%0*.*hhu|\n", width, precision, var);
	ft_printf("#0121");
	ret2 = ft_printf("|%0*.*hhu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0122");
	ret1 = fprintf(fppres, "|%0*.*hu|\n", width, precision, var);
	ft_printf("#0122");
	ret2 = ft_printf("|%0*.*hu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0123");
	ret1 = fprintf(fppres, "|%0*.*lu|\n", width, precision, var);
	ft_printf("#0123");
	ret2 = ft_printf("|%0*.*lu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0124");
	ret1 = fprintf(fppres, "|%0*.*llu|\n", width, precision, var);
	ft_printf("#0124");
	ret2 = ft_printf("|%0*.*llu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0125");
	ret1 = fprintf(fppres, "|%0*.*ju|\n", width, precision, var);
	ft_printf("#0125");
	ret2 = ft_printf("|%0*.*ju|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0126");
	ret1 = fprintf(fppres, "|%0*.*zu|\n", width, precision, var);
	ft_printf("#0126");
	ret2 = ft_printf("|%0*.*zu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0127");
	ret1 = fprintf(fppres, "|%0*.*u|\n", width, precision, var);
	ft_printf("#0127");
	ret2 = ft_printf("|%0*.*u|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0128");
	ret1 = fprintf(fppres, "|%0*.*x|\n", width, precision, var);
	ft_printf("#0128");
	ret2 = ft_printf("|%0*.*x|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0129");
	ret1 = fprintf(fppres, "|%0*.*hhx|\n", width, precision, var);
	ft_printf("#0129");
	ret2 = ft_printf("|%0*.*hhx|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0130");
	ret1 = fprintf(fppres, "|%0*.*hx|\n", width, precision, var);
	ft_printf("#0130");
	ret2 = ft_printf("|%0*.*hx|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0131");
	ret1 = fprintf(fppres, "|%0*.*lx|\n", width, precision, var);
	ft_printf("#0131");
	ret2 = ft_printf("|%0*.*lx|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0132");
	ret1 = fprintf(fppres, "|%0*.*llx|\n", width, precision, var);
	ft_printf("#0132");
	ret2 = ft_printf("|%0*.*llx|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0133");
	ret1 = fprintf(fppres, "|%0*.*jx|\n", width, precision, var);
	ft_printf("#0133");
	ret2 = ft_printf("|%0*.*jx|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0134");
	ret1 = fprintf(fppres, "|%0*.*zx|\n", width, precision, var);
	ft_printf("#0134");
	ret2 = ft_printf("|%0*.*zx|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0135");
	ret1 = fprintf(fppres, "|%0*.*x|\n", width, precision, var);
	ft_printf("#0135");
	ret2 = ft_printf("|%0*.*x|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0136");
	ret1 = fprintf(fppres, "|%0*.*X|\n", width, precision, var);
	ft_printf("#0136");
	ret2 = ft_printf("|%0*.*X|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0137");
	ret1 = fprintf(fppres, "|%0*.*hhX|\n", width, precision, var);
	ft_printf("#0137");
	ret2 = ft_printf("|%0*.*hhX|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0138");
	ret1 = fprintf(fppres, "|%0*.*hX|\n", width, precision, var);
	ft_printf("#0138");
	ret2 = ft_printf("|%0*.*hX|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0139");
	ret1 = fprintf(fppres, "|%0*.*lX|\n", width, precision, var);
	ft_printf("#0139");
	ret2 = ft_printf("|%0*.*lX|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0140");
	ret1 = fprintf(fppres, "|%0*.*llX|\n", width, precision, var);
	ft_printf("#0140");
	ret2 = ft_printf("|%0*.*llX|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0141");
	ret1 = fprintf(fppres, "|%0*.*jX|\n", width, precision, var);
	ft_printf("#0141");
	ret2 = ft_printf("|%0*.*jX|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0142");
	ret1 = fprintf(fppres, "|%0*.*zX|\n", width, precision, var);
	ft_printf("#0142");
	ret2 = ft_printf("|%0*.*zX|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0143");
	ret1 = fprintf(fppres, "|%0*.*X|\n", width, precision, var);
	ft_printf("#0143");
	ret2 = ft_printf("|%0*.*X|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0144");
	ret1 = fprintf(fppres, "|% 0*.*d|\n", width, precision, var);
	ft_printf("#0144");
	ret2 = ft_printf("|% 0*.*d|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0145");
	ret1 = fprintf(fppres, "|% 0*.*hhd|\n", width, precision, var);
	ft_printf("#0145");
	ret2 = ft_printf("|% 0*.*hhd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0146");
	ret1 = fprintf(fppres, "|% 0*.*hd|\n", width, precision, var);
	ft_printf("#0146");
	ret2 = ft_printf("|% 0*.*hd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0147");
	ret1 = fprintf(fppres, "|% 0*.*ld|\n", width, precision, var);
	ft_printf("#0147");
	ret2 = ft_printf("|% 0*.*ld|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0148");
	ret1 = fprintf(fppres, "|% 0*.*lld|\n", width, precision, var);
	ft_printf("#0148");
	ret2 = ft_printf("|% 0*.*lld|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0149");
	ret1 = fprintf(fppres, "|% 0*.*jd|\n", width, precision, var);
	ft_printf("#0149");
	ret2 = ft_printf("|% 0*.*jd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0150");
	ret1 = fprintf(fppres, "|% 0*.*zd|\n", width, precision, var);
	ft_printf("#0150");
	ret2 = ft_printf("|% 0*.*zd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0151");
	ret1 = fprintf(fppres, "|% 0*.*d|\n", width, precision, var);
	ft_printf("#0151");
	ret2 = ft_printf("|% 0*.*d|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0152");
	ret1 = fprintf(fppres, "|% 0*.*i|\n", width, precision, var);
	ft_printf("#0152");
	ret2 = ft_printf("|% 0*.*i|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0153");
	ret1 = fprintf(fppres, "|% 0*.*hhi|\n", width, precision, var);
	ft_printf("#0153");
	ret2 = ft_printf("|% 0*.*hhi|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0154");
	ret1 = fprintf(fppres, "|% 0*.*hi|\n", width, precision, var);
	ft_printf("#0154");
	ret2 = ft_printf("|% 0*.*hi|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0155");
	ret1 = fprintf(fppres, "|% 0*.*li|\n", width, precision, var);
	ft_printf("#0155");
	ret2 = ft_printf("|% 0*.*li|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0156");
	ret1 = fprintf(fppres, "|% 0*.*lli|\n", width, precision, var);
	ft_printf("#0156");
	ret2 = ft_printf("|% 0*.*lli|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0157");
	ret1 = fprintf(fppres, "|% 0*.*ji|\n", width, precision, var);
	ft_printf("#0157");
	ret2 = ft_printf("|% 0*.*ji|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0158");
	ret1 = fprintf(fppres, "|% 0*.*zi|\n", width, precision, var);
	ft_printf("#0158");
	ret2 = ft_printf("|% 0*.*zi|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0159");
	ret1 = fprintf(fppres, "|% 0*.*i|\n", width, precision, var);
	ft_printf("#0159");
	ret2 = ft_printf("|% 0*.*i|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0160");
	ret1 = fprintf(fppres, "|% 0*.*o|\n", width, precision, var);
	ft_printf("#0160");
	ret2 = ft_printf("|% 0*.*o|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0161");
	ret1 = fprintf(fppres, "|% 0*.*hho|\n", width, precision, var);
	ft_printf("#0161");
	ret2 = ft_printf("|% 0*.*hho|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0162");
	ret1 = fprintf(fppres, "|% 0*.*ho|\n", width, precision, var);
	ft_printf("#0162");
	ret2 = ft_printf("|% 0*.*ho|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0163");
	ret1 = fprintf(fppres, "|% 0*.*lo|\n", width, precision, var);
	ft_printf("#0163");
	ret2 = ft_printf("|% 0*.*lo|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0164");
	ret1 = fprintf(fppres, "|% 0*.*llo|\n", width, precision, var);
	ft_printf("#0164");
	ret2 = ft_printf("|% 0*.*llo|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0165");
	ret1 = fprintf(fppres, "|% 0*.*jo|\n", width, precision, var);
	ft_printf("#0165");
	ret2 = ft_printf("|% 0*.*jo|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0166");
	ret1 = fprintf(fppres, "|% 0*.*zo|\n", width, precision, var);
	ft_printf("#0166");
	ret2 = ft_printf("|% 0*.*zo|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0167");
	ret1 = fprintf(fppres, "|% 0*.*o|\n", width, precision, var);
	ft_printf("#0167");
	ret2 = ft_printf("|% 0*.*o|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0168");
	ret1 = fprintf(fppres, "|% 0*.*u|\n", width, precision, var);
	ft_printf("#0168");
	ret2 = ft_printf("|% 0*.*u|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0169");
	ret1 = fprintf(fppres, "|% 0*.*hhu|\n", width, precision, var);
	ft_printf("#0169");
	ret2 = ft_printf("|% 0*.*hhu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0170");
	ret1 = fprintf(fppres, "|% 0*.*hu|\n", width, precision, var);
	ft_printf("#0170");
	ret2 = ft_printf("|% 0*.*hu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0171");
	ret1 = fprintf(fppres, "|% 0*.*lu|\n", width, precision, var);
	ft_printf("#0171");
	ret2 = ft_printf("|% 0*.*lu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0172");
	ret1 = fprintf(fppres, "|% 0*.*llu|\n", width, precision, var);
	ft_printf("#0172");
	ret2 = ft_printf("|% 0*.*llu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0173");
	ret1 = fprintf(fppres, "|% 0*.*ju|\n", width, precision, var);
	ft_printf("#0173");
	ret2 = ft_printf("|% 0*.*ju|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0174");
	ret1 = fprintf(fppres, "|% 0*.*zu|\n", width, precision, var);
	ft_printf("#0174");
	ret2 = ft_printf("|% 0*.*zu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0175");
	ret1 = fprintf(fppres, "|% 0*.*u|\n", width, precision, var);
	ft_printf("#0175");
	ret2 = ft_printf("|% 0*.*u|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0176");
	ret1 = fprintf(fppres, "|% 0*.*x|\n", width, precision, var);
	ft_printf("#0176");
	ret2 = ft_printf("|% 0*.*x|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0177");
	ret1 = fprintf(fppres, "|% 0*.*hhx|\n", width, precision, var);
	ft_printf("#0177");
	ret2 = ft_printf("|% 0*.*hhx|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0178");
	ret1 = fprintf(fppres, "|% 0*.*hx|\n", width, precision, var);
	ft_printf("#0178");
	ret2 = ft_printf("|% 0*.*hx|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0179");
	ret1 = fprintf(fppres, "|% 0*.*lx|\n", width, precision, var);
	ft_printf("#0179");
	ret2 = ft_printf("|% 0*.*lx|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0180");
	ret1 = fprintf(fppres, "|% 0*.*llx|\n", width, precision, var);
	ft_printf("#0180");
	ret2 = ft_printf("|% 0*.*llx|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0181");
	ret1 = fprintf(fppres, "|% 0*.*jx|\n", width, precision, var);
	ft_printf("#0181");
	ret2 = ft_printf("|% 0*.*jx|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0182");
	ret1 = fprintf(fppres, "|% 0*.*zx|\n", width, precision, var);
	ft_printf("#0182");
	ret2 = ft_printf("|% 0*.*zx|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0183");
	ret1 = fprintf(fppres, "|% 0*.*x|\n", width, precision, var);
	ft_printf("#0183");
	ret2 = ft_printf("|% 0*.*x|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0184");
	ret1 = fprintf(fppres, "|% 0*.*X|\n", width, precision, var);
	ft_printf("#0184");
	ret2 = ft_printf("|% 0*.*X|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0185");
	ret1 = fprintf(fppres, "|% 0*.*hhX|\n", width, precision, var);
	ft_printf("#0185");
	ret2 = ft_printf("|% 0*.*hhX|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0186");
	ret1 = fprintf(fppres, "|% 0*.*hX|\n", width, precision, var);
	ft_printf("#0186");
	ret2 = ft_printf("|% 0*.*hX|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0187");
	ret1 = fprintf(fppres, "|% 0*.*lX|\n", width, precision, var);
	ft_printf("#0187");
	ret2 = ft_printf("|% 0*.*lX|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0188");
	ret1 = fprintf(fppres, "|% 0*.*llX|\n", width, precision, var);
	ft_printf("#0188");
	ret2 = ft_printf("|% 0*.*llX|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0189");
	ret1 = fprintf(fppres, "|% 0*.*jX|\n", width, precision, var);
	ft_printf("#0189");
	ret2 = ft_printf("|% 0*.*jX|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0190");
	ret1 = fprintf(fppres, "|% 0*.*zX|\n", width, precision, var);
	ft_printf("#0190");
	ret2 = ft_printf("|% 0*.*zX|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0191");
	ret1 = fprintf(fppres, "|% 0*.*X|\n", width, precision, var);
	ft_printf("#0191");
	ret2 = ft_printf("|% 0*.*X|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0192");
	ret1 = fprintf(fppres, "|%+*.*d|\n", width, precision, var);
	ft_printf("#0192");
	ret2 = ft_printf("|%+*.*d|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0193");
	ret1 = fprintf(fppres, "|%+*.*hhd|\n", width, precision, var);
	ft_printf("#0193");
	ret2 = ft_printf("|%+*.*hhd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0194");
	ret1 = fprintf(fppres, "|%+*.*hd|\n", width, precision, var);
	ft_printf("#0194");
	ret2 = ft_printf("|%+*.*hd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0195");
	ret1 = fprintf(fppres, "|%+*.*ld|\n", width, precision, var);
	ft_printf("#0195");
	ret2 = ft_printf("|%+*.*ld|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0196");
	ret1 = fprintf(fppres, "|%+*.*lld|\n", width, precision, var);
	ft_printf("#0196");
	ret2 = ft_printf("|%+*.*lld|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0197");
	ret1 = fprintf(fppres, "|%+*.*jd|\n", width, precision, var);
	ft_printf("#0197");
	ret2 = ft_printf("|%+*.*jd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0198");
	ret1 = fprintf(fppres, "|%+*.*zd|\n", width, precision, var);
	ft_printf("#0198");
	ret2 = ft_printf("|%+*.*zd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0199");
	ret1 = fprintf(fppres, "|%+*.*d|\n", width, precision, var);
	ft_printf("#0199");
	ret2 = ft_printf("|%+*.*d|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0200");
	ret1 = fprintf(fppres, "|%+*.*i|\n", width, precision, var);
	ft_printf("#0200");
	ret2 = ft_printf("|%+*.*i|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0201");
	ret1 = fprintf(fppres, "|%+*.*hhi|\n", width, precision, var);
	ft_printf("#0201");
	ret2 = ft_printf("|%+*.*hhi|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0202");
	ret1 = fprintf(fppres, "|%+*.*hi|\n", width, precision, var);
	ft_printf("#0202");
	ret2 = ft_printf("|%+*.*hi|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0203");
	ret1 = fprintf(fppres, "|%+*.*li|\n", width, precision, var);
	ft_printf("#0203");
	ret2 = ft_printf("|%+*.*li|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0204");
	ret1 = fprintf(fppres, "|%+*.*lli|\n", width, precision, var);
	ft_printf("#0204");
	ret2 = ft_printf("|%+*.*lli|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0205");
	ret1 = fprintf(fppres, "|%+*.*ji|\n", width, precision, var);
	ft_printf("#0205");
	ret2 = ft_printf("|%+*.*ji|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0206");
	ret1 = fprintf(fppres, "|%+*.*zi|\n", width, precision, var);
	ft_printf("#0206");
	ret2 = ft_printf("|%+*.*zi|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0207");
	ret1 = fprintf(fppres, "|%+*.*i|\n", width, precision, var);
	ft_printf("#0207");
	ret2 = ft_printf("|%+*.*i|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0208");
	ret1 = fprintf(fppres, "|%+*.*o|\n", width, precision, var);
	ft_printf("#0208");
	ret2 = ft_printf("|%+*.*o|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0209");
	ret1 = fprintf(fppres, "|%+*.*hho|\n", width, precision, var);
	ft_printf("#0209");
	ret2 = ft_printf("|%+*.*hho|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0210");
	ret1 = fprintf(fppres, "|%+*.*ho|\n", width, precision, var);
	ft_printf("#0210");
	ret2 = ft_printf("|%+*.*ho|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0211");
	ret1 = fprintf(fppres, "|%+*.*lo|\n", width, precision, var);
	ft_printf("#0211");
	ret2 = ft_printf("|%+*.*lo|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0212");
	ret1 = fprintf(fppres, "|%+*.*llo|\n", width, precision, var);
	ft_printf("#0212");
	ret2 = ft_printf("|%+*.*llo|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0213");
	ret1 = fprintf(fppres, "|%+*.*jo|\n", width, precision, var);
	ft_printf("#0213");
	ret2 = ft_printf("|%+*.*jo|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0214");
	ret1 = fprintf(fppres, "|%+*.*zo|\n", width, precision, var);
	ft_printf("#0214");
	ret2 = ft_printf("|%+*.*zo|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0215");
	ret1 = fprintf(fppres, "|%+*.*o|\n", width, precision, var);
	ft_printf("#0215");
	ret2 = ft_printf("|%+*.*o|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0216");
	ret1 = fprintf(fppres, "|%+*.*u|\n", width, precision, var);
	ft_printf("#0216");
	ret2 = ft_printf("|%+*.*u|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0217");
	ret1 = fprintf(fppres, "|%+*.*hhu|\n", width, precision, var);
	ft_printf("#0217");
	ret2 = ft_printf("|%+*.*hhu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0218");
	ret1 = fprintf(fppres, "|%+*.*hu|\n", width, precision, var);
	ft_printf("#0218");
	ret2 = ft_printf("|%+*.*hu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0219");
	ret1 = fprintf(fppres, "|%+*.*lu|\n", width, precision, var);
	ft_printf("#0219");
	ret2 = ft_printf("|%+*.*lu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0220");
	ret1 = fprintf(fppres, "|%+*.*llu|\n", width, precision, var);
	ft_printf("#0220");
	ret2 = ft_printf("|%+*.*llu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0221");
	ret1 = fprintf(fppres, "|%+*.*ju|\n", width, precision, var);
	ft_printf("#0221");
	ret2 = ft_printf("|%+*.*ju|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0222");
	ret1 = fprintf(fppres, "|%+*.*zu|\n", width, precision, var);
	ft_printf("#0222");
	ret2 = ft_printf("|%+*.*zu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0223");
	ret1 = fprintf(fppres, "|%+*.*u|\n", width, precision, var);
	ft_printf("#0223");
	ret2 = ft_printf("|%+*.*u|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0224");
	ret1 = fprintf(fppres, "|%+*.*x|\n", width, precision, var);
	ft_printf("#0224");
	ret2 = ft_printf("|%+*.*x|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0225");
	ret1 = fprintf(fppres, "|%+*.*hhx|\n", width, precision, var);
	ft_printf("#0225");
	ret2 = ft_printf("|%+*.*hhx|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0226");
	ret1 = fprintf(fppres, "|%+*.*hx|\n", width, precision, var);
	ft_printf("#0226");
	ret2 = ft_printf("|%+*.*hx|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0227");
	ret1 = fprintf(fppres, "|%+*.*lx|\n", width, precision, var);
	ft_printf("#0227");
	ret2 = ft_printf("|%+*.*lx|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0228");
	ret1 = fprintf(fppres, "|%+*.*llx|\n", width, precision, var);
	ft_printf("#0228");
	ret2 = ft_printf("|%+*.*llx|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0229");
	ret1 = fprintf(fppres, "|%+*.*jx|\n", width, precision, var);
	ft_printf("#0229");
	ret2 = ft_printf("|%+*.*jx|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0230");
	ret1 = fprintf(fppres, "|%+*.*zx|\n", width, precision, var);
	ft_printf("#0230");
	ret2 = ft_printf("|%+*.*zx|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0231");
	ret1 = fprintf(fppres, "|%+*.*x|\n", width, precision, var);
	ft_printf("#0231");
	ret2 = ft_printf("|%+*.*x|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0232");
	ret1 = fprintf(fppres, "|%+*.*X|\n", width, precision, var);
	ft_printf("#0232");
	ret2 = ft_printf("|%+*.*X|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0233");
	ret1 = fprintf(fppres, "|%+*.*hhX|\n", width, precision, var);
	ft_printf("#0233");
	ret2 = ft_printf("|%+*.*hhX|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0234");
	ret1 = fprintf(fppres, "|%+*.*hX|\n", width, precision, var);
	ft_printf("#0234");
	ret2 = ft_printf("|%+*.*hX|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0235");
	ret1 = fprintf(fppres, "|%+*.*lX|\n", width, precision, var);
	ft_printf("#0235");
	ret2 = ft_printf("|%+*.*lX|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0236");
	ret1 = fprintf(fppres, "|%+*.*llX|\n", width, precision, var);
	ft_printf("#0236");
	ret2 = ft_printf("|%+*.*llX|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0237");
	ret1 = fprintf(fppres, "|%+*.*jX|\n", width, precision, var);
	ft_printf("#0237");
	ret2 = ft_printf("|%+*.*jX|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0238");
	ret1 = fprintf(fppres, "|%+*.*zX|\n", width, precision, var);
	ft_printf("#0238");
	ret2 = ft_printf("|%+*.*zX|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0239");
	ret1 = fprintf(fppres, "|%+*.*X|\n", width, precision, var);
	ft_printf("#0239");
	ret2 = ft_printf("|%+*.*X|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0240");
	ret1 = fprintf(fppres, "|% +*.*d|\n", width, precision, var);
	ft_printf("#0240");
	ret2 = ft_printf("|% +*.*d|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0241");
	ret1 = fprintf(fppres, "|% +*.*hhd|\n", width, precision, var);
	ft_printf("#0241");
	ret2 = ft_printf("|% +*.*hhd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0242");
	ret1 = fprintf(fppres, "|% +*.*hd|\n", width, precision, var);
	ft_printf("#0242");
	ret2 = ft_printf("|% +*.*hd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0243");
	ret1 = fprintf(fppres, "|% +*.*ld|\n", width, precision, var);
	ft_printf("#0243");
	ret2 = ft_printf("|% +*.*ld|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0244");
	ret1 = fprintf(fppres, "|% +*.*lld|\n", width, precision, var);
	ft_printf("#0244");
	ret2 = ft_printf("|% +*.*lld|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0245");
	ret1 = fprintf(fppres, "|% +*.*jd|\n", width, precision, var);
	ft_printf("#0245");
	ret2 = ft_printf("|% +*.*jd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0246");
	ret1 = fprintf(fppres, "|% +*.*zd|\n", width, precision, var);
	ft_printf("#0246");
	ret2 = ft_printf("|% +*.*zd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0247");
	ret1 = fprintf(fppres, "|% +*.*d|\n", width, precision, var);
	ft_printf("#0247");
	ret2 = ft_printf("|% +*.*d|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0248");
	ret1 = fprintf(fppres, "|% +*.*i|\n", width, precision, var);
	ft_printf("#0248");
	ret2 = ft_printf("|% +*.*i|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0249");
	ret1 = fprintf(fppres, "|% +*.*hhi|\n", width, precision, var);
	ft_printf("#0249");
	ret2 = ft_printf("|% +*.*hhi|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0250");
	ret1 = fprintf(fppres, "|% +*.*hi|\n", width, precision, var);
	ft_printf("#0250");
	ret2 = ft_printf("|% +*.*hi|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0251");
	ret1 = fprintf(fppres, "|% +*.*li|\n", width, precision, var);
	ft_printf("#0251");
	ret2 = ft_printf("|% +*.*li|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0252");
	ret1 = fprintf(fppres, "|% +*.*lli|\n", width, precision, var);
	ft_printf("#0252");
	ret2 = ft_printf("|% +*.*lli|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0253");
	ret1 = fprintf(fppres, "|% +*.*ji|\n", width, precision, var);
	ft_printf("#0253");
	ret2 = ft_printf("|% +*.*ji|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0254");
	ret1 = fprintf(fppres, "|% +*.*zi|\n", width, precision, var);
	ft_printf("#0254");
	ret2 = ft_printf("|% +*.*zi|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0255");
	ret1 = fprintf(fppres, "|% +*.*i|\n", width, precision, var);
	ft_printf("#0255");
	ret2 = ft_printf("|% +*.*i|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0256");
	ret1 = fprintf(fppres, "|% +*.*o|\n", width, precision, var);
	ft_printf("#0256");
	ret2 = ft_printf("|% +*.*o|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0257");
	ret1 = fprintf(fppres, "|% +*.*hho|\n", width, precision, var);
	ft_printf("#0257");
	ret2 = ft_printf("|% +*.*hho|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0258");
	ret1 = fprintf(fppres, "|% +*.*ho|\n", width, precision, var);
	ft_printf("#0258");
	ret2 = ft_printf("|% +*.*ho|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0259");
	ret1 = fprintf(fppres, "|% +*.*lo|\n", width, precision, var);
	ft_printf("#0259");
	ret2 = ft_printf("|% +*.*lo|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0260");
	ret1 = fprintf(fppres, "|% +*.*llo|\n", width, precision, var);
	ft_printf("#0260");
	ret2 = ft_printf("|% +*.*llo|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0261");
	ret1 = fprintf(fppres, "|% +*.*jo|\n", width, precision, var);
	ft_printf("#0261");
	ret2 = ft_printf("|% +*.*jo|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0262");
	ret1 = fprintf(fppres, "|% +*.*zo|\n", width, precision, var);
	ft_printf("#0262");
	ret2 = ft_printf("|% +*.*zo|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0263");
	ret1 = fprintf(fppres, "|% +*.*o|\n", width, precision, var);
	ft_printf("#0263");
	ret2 = ft_printf("|% +*.*o|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0264");
	ret1 = fprintf(fppres, "|% +*.*u|\n", width, precision, var);
	ft_printf("#0264");
	ret2 = ft_printf("|% +*.*u|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0265");
	ret1 = fprintf(fppres, "|% +*.*hhu|\n", width, precision, var);
	ft_printf("#0265");
	ret2 = ft_printf("|% +*.*hhu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0266");
	ret1 = fprintf(fppres, "|% +*.*hu|\n", width, precision, var);
	ft_printf("#0266");
	ret2 = ft_printf("|% +*.*hu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0267");
	ret1 = fprintf(fppres, "|% +*.*lu|\n", width, precision, var);
	ft_printf("#0267");
	ret2 = ft_printf("|% +*.*lu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0268");
	ret1 = fprintf(fppres, "|% +*.*llu|\n", width, precision, var);
	ft_printf("#0268");
	ret2 = ft_printf("|% +*.*llu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0269");
	ret1 = fprintf(fppres, "|% +*.*ju|\n", width, precision, var);
	ft_printf("#0269");
	ret2 = ft_printf("|% +*.*ju|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0270");
	ret1 = fprintf(fppres, "|% +*.*zu|\n", width, precision, var);
	ft_printf("#0270");
	ret2 = ft_printf("|% +*.*zu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0271");
	ret1 = fprintf(fppres, "|% +*.*u|\n", width, precision, var);
	ft_printf("#0271");
	ret2 = ft_printf("|% +*.*u|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0272");
	ret1 = fprintf(fppres, "|% +*.*x|\n", width, precision, var);
	ft_printf("#0272");
	ret2 = ft_printf("|% +*.*x|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0273");
	ret1 = fprintf(fppres, "|% +*.*hhx|\n", width, precision, var);
	ft_printf("#0273");
	ret2 = ft_printf("|% +*.*hhx|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0274");
	ret1 = fprintf(fppres, "|% +*.*hx|\n", width, precision, var);
	ft_printf("#0274");
	ret2 = ft_printf("|% +*.*hx|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0275");
	ret1 = fprintf(fppres, "|% +*.*lx|\n", width, precision, var);
	ft_printf("#0275");
	ret2 = ft_printf("|% +*.*lx|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0276");
	ret1 = fprintf(fppres, "|% +*.*llx|\n", width, precision, var);
	ft_printf("#0276");
	ret2 = ft_printf("|% +*.*llx|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0277");
	ret1 = fprintf(fppres, "|% +*.*jx|\n", width, precision, var);
	ft_printf("#0277");
	ret2 = ft_printf("|% +*.*jx|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0278");
	ret1 = fprintf(fppres, "|% +*.*zx|\n", width, precision, var);
	ft_printf("#0278");
	ret2 = ft_printf("|% +*.*zx|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0279");
	ret1 = fprintf(fppres, "|% +*.*x|\n", width, precision, var);
	ft_printf("#0279");
	ret2 = ft_printf("|% +*.*x|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0280");
	ret1 = fprintf(fppres, "|% +*.*X|\n", width, precision, var);
	ft_printf("#0280");
	ret2 = ft_printf("|% +*.*X|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0281");
	ret1 = fprintf(fppres, "|% +*.*hhX|\n", width, precision, var);
	ft_printf("#0281");
	ret2 = ft_printf("|% +*.*hhX|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0282");
	ret1 = fprintf(fppres, "|% +*.*hX|\n", width, precision, var);
	ft_printf("#0282");
	ret2 = ft_printf("|% +*.*hX|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0283");
	ret1 = fprintf(fppres, "|% +*.*lX|\n", width, precision, var);
	ft_printf("#0283");
	ret2 = ft_printf("|% +*.*lX|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0284");
	ret1 = fprintf(fppres, "|% +*.*llX|\n", width, precision, var);
	ft_printf("#0284");
	ret2 = ft_printf("|% +*.*llX|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0285");
	ret1 = fprintf(fppres, "|% +*.*jX|\n", width, precision, var);
	ft_printf("#0285");
	ret2 = ft_printf("|% +*.*jX|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0286");
	ret1 = fprintf(fppres, "|% +*.*zX|\n", width, precision, var);
	ft_printf("#0286");
	ret2 = ft_printf("|% +*.*zX|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0287");
	ret1 = fprintf(fppres, "|% +*.*X|\n", width, precision, var);
	ft_printf("#0287");
	ret2 = ft_printf("|% +*.*X|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0288");
	ret1 = fprintf(fppres, "|%0+*.*d|\n", width, precision, var);
	ft_printf("#0288");
	ret2 = ft_printf("|%0+*.*d|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0289");
	ret1 = fprintf(fppres, "|%0+*.*hhd|\n", width, precision, var);
	ft_printf("#0289");
	ret2 = ft_printf("|%0+*.*hhd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0290");
	ret1 = fprintf(fppres, "|%0+*.*hd|\n", width, precision, var);
	ft_printf("#0290");
	ret2 = ft_printf("|%0+*.*hd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0291");
	ret1 = fprintf(fppres, "|%0+*.*ld|\n", width, precision, var);
	ft_printf("#0291");
	ret2 = ft_printf("|%0+*.*ld|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0292");
	ret1 = fprintf(fppres, "|%0+*.*lld|\n", width, precision, var);
	ft_printf("#0292");
	ret2 = ft_printf("|%0+*.*lld|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0293");
	ret1 = fprintf(fppres, "|%0+*.*jd|\n", width, precision, var);
	ft_printf("#0293");
	ret2 = ft_printf("|%0+*.*jd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0294");
	ret1 = fprintf(fppres, "|%0+*.*zd|\n", width, precision, var);
	ft_printf("#0294");
	ret2 = ft_printf("|%0+*.*zd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0295");
	ret1 = fprintf(fppres, "|%0+*.*d|\n", width, precision, var);
	ft_printf("#0295");
	ret2 = ft_printf("|%0+*.*d|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0296");
	ret1 = fprintf(fppres, "|%0+*.*i|\n", width, precision, var);
	ft_printf("#0296");
	ret2 = ft_printf("|%0+*.*i|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0297");
	ret1 = fprintf(fppres, "|%0+*.*hhi|\n", width, precision, var);
	ft_printf("#0297");
	ret2 = ft_printf("|%0+*.*hhi|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0298");
	ret1 = fprintf(fppres, "|%0+*.*hi|\n", width, precision, var);
	ft_printf("#0298");
	ret2 = ft_printf("|%0+*.*hi|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0299");
	ret1 = fprintf(fppres, "|%0+*.*li|\n", width, precision, var);
	ft_printf("#0299");
	ret2 = ft_printf("|%0+*.*li|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0300");
	ret1 = fprintf(fppres, "|%0+*.*lli|\n", width, precision, var);
	ft_printf("#0300");
	ret2 = ft_printf("|%0+*.*lli|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0301");
	ret1 = fprintf(fppres, "|%0+*.*ji|\n", width, precision, var);
	ft_printf("#0301");
	ret2 = ft_printf("|%0+*.*ji|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0302");
	ret1 = fprintf(fppres, "|%0+*.*zi|\n", width, precision, var);
	ft_printf("#0302");
	ret2 = ft_printf("|%0+*.*zi|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0303");
	ret1 = fprintf(fppres, "|%0+*.*i|\n", width, precision, var);
	ft_printf("#0303");
	ret2 = ft_printf("|%0+*.*i|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0304");
	ret1 = fprintf(fppres, "|%0+*.*o|\n", width, precision, var);
	ft_printf("#0304");
	ret2 = ft_printf("|%0+*.*o|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0305");
	ret1 = fprintf(fppres, "|%0+*.*hho|\n", width, precision, var);
	ft_printf("#0305");
	ret2 = ft_printf("|%0+*.*hho|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0306");
	ret1 = fprintf(fppres, "|%0+*.*ho|\n", width, precision, var);
	ft_printf("#0306");
	ret2 = ft_printf("|%0+*.*ho|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0307");
	ret1 = fprintf(fppres, "|%0+*.*lo|\n", width, precision, var);
	ft_printf("#0307");
	ret2 = ft_printf("|%0+*.*lo|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0308");
	ret1 = fprintf(fppres, "|%0+*.*llo|\n", width, precision, var);
	ft_printf("#0308");
	ret2 = ft_printf("|%0+*.*llo|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0309");
	ret1 = fprintf(fppres, "|%0+*.*jo|\n", width, precision, var);
	ft_printf("#0309");
	ret2 = ft_printf("|%0+*.*jo|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0310");
	ret1 = fprintf(fppres, "|%0+*.*zo|\n", width, precision, var);
	ft_printf("#0310");
	ret2 = ft_printf("|%0+*.*zo|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0311");
	ret1 = fprintf(fppres, "|%0+*.*o|\n", width, precision, var);
	ft_printf("#0311");
	ret2 = ft_printf("|%0+*.*o|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0312");
	ret1 = fprintf(fppres, "|%0+*.*u|\n", width, precision, var);
	ft_printf("#0312");
	ret2 = ft_printf("|%0+*.*u|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0313");
	ret1 = fprintf(fppres, "|%0+*.*hhu|\n", width, precision, var);
	ft_printf("#0313");
	ret2 = ft_printf("|%0+*.*hhu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0314");
	ret1 = fprintf(fppres, "|%0+*.*hu|\n", width, precision, var);
	ft_printf("#0314");
	ret2 = ft_printf("|%0+*.*hu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0315");
	ret1 = fprintf(fppres, "|%0+*.*lu|\n", width, precision, var);
	ft_printf("#0315");
	ret2 = ft_printf("|%0+*.*lu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0316");
	ret1 = fprintf(fppres, "|%0+*.*llu|\n", width, precision, var);
	ft_printf("#0316");
	ret2 = ft_printf("|%0+*.*llu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0317");
	ret1 = fprintf(fppres, "|%0+*.*ju|\n", width, precision, var);
	ft_printf("#0317");
	ret2 = ft_printf("|%0+*.*ju|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0318");
	ret1 = fprintf(fppres, "|%0+*.*zu|\n", width, precision, var);
	ft_printf("#0318");
	ret2 = ft_printf("|%0+*.*zu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0319");
	ret1 = fprintf(fppres, "|%0+*.*u|\n", width, precision, var);
	ft_printf("#0319");
	ret2 = ft_printf("|%0+*.*u|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0320");
	ret1 = fprintf(fppres, "|%0+*.*x|\n", width, precision, var);
	ft_printf("#0320");
	ret2 = ft_printf("|%0+*.*x|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0321");
	ret1 = fprintf(fppres, "|%0+*.*hhx|\n", width, precision, var);
	ft_printf("#0321");
	ret2 = ft_printf("|%0+*.*hhx|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0322");
	ret1 = fprintf(fppres, "|%0+*.*hx|\n", width, precision, var);
	ft_printf("#0322");
	ret2 = ft_printf("|%0+*.*hx|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0323");
	ret1 = fprintf(fppres, "|%0+*.*lx|\n", width, precision, var);
	ft_printf("#0323");
	ret2 = ft_printf("|%0+*.*lx|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0324");
	ret1 = fprintf(fppres, "|%0+*.*llx|\n", width, precision, var);
	ft_printf("#0324");
	ret2 = ft_printf("|%0+*.*llx|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0325");
	ret1 = fprintf(fppres, "|%0+*.*jx|\n", width, precision, var);
	ft_printf("#0325");
	ret2 = ft_printf("|%0+*.*jx|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0326");
	ret1 = fprintf(fppres, "|%0+*.*zx|\n", width, precision, var);
	ft_printf("#0326");
	ret2 = ft_printf("|%0+*.*zx|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0327");
	ret1 = fprintf(fppres, "|%0+*.*x|\n", width, precision, var);
	ft_printf("#0327");
	ret2 = ft_printf("|%0+*.*x|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0328");
	ret1 = fprintf(fppres, "|%0+*.*X|\n", width, precision, var);
	ft_printf("#0328");
	ret2 = ft_printf("|%0+*.*X|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0329");
	ret1 = fprintf(fppres, "|%0+*.*hhX|\n", width, precision, var);
	ft_printf("#0329");
	ret2 = ft_printf("|%0+*.*hhX|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0330");
	ret1 = fprintf(fppres, "|%0+*.*hX|\n", width, precision, var);
	ft_printf("#0330");
	ret2 = ft_printf("|%0+*.*hX|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0331");
	ret1 = fprintf(fppres, "|%0+*.*lX|\n", width, precision, var);
	ft_printf("#0331");
	ret2 = ft_printf("|%0+*.*lX|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0332");
	ret1 = fprintf(fppres, "|%0+*.*llX|\n", width, precision, var);
	ft_printf("#0332");
	ret2 = ft_printf("|%0+*.*llX|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0333");
	ret1 = fprintf(fppres, "|%0+*.*jX|\n", width, precision, var);
	ft_printf("#0333");
	ret2 = ft_printf("|%0+*.*jX|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0334");
	ret1 = fprintf(fppres, "|%0+*.*zX|\n", width, precision, var);
	ft_printf("#0334");
	ret2 = ft_printf("|%0+*.*zX|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0335");
	ret1 = fprintf(fppres, "|%0+*.*X|\n", width, precision, var);
	ft_printf("#0335");
	ret2 = ft_printf("|%0+*.*X|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0336");
	ret1 = fprintf(fppres, "|% 0+*.*d|\n", width, precision, var);
	ft_printf("#0336");
	ret2 = ft_printf("|% 0+*.*d|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0337");
	ret1 = fprintf(fppres, "|% 0+*.*hhd|\n", width, precision, var);
	ft_printf("#0337");
	ret2 = ft_printf("|% 0+*.*hhd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0338");
	ret1 = fprintf(fppres, "|% 0+*.*hd|\n", width, precision, var);
	ft_printf("#0338");
	ret2 = ft_printf("|% 0+*.*hd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0339");
	ret1 = fprintf(fppres, "|% 0+*.*ld|\n", width, precision, var);
	ft_printf("#0339");
	ret2 = ft_printf("|% 0+*.*ld|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0340");
	ret1 = fprintf(fppres, "|% 0+*.*lld|\n", width, precision, var);
	ft_printf("#0340");
	ret2 = ft_printf("|% 0+*.*lld|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0341");
	ret1 = fprintf(fppres, "|% 0+*.*jd|\n", width, precision, var);
	ft_printf("#0341");
	ret2 = ft_printf("|% 0+*.*jd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0342");
	ret1 = fprintf(fppres, "|% 0+*.*zd|\n", width, precision, var);
	ft_printf("#0342");
	ret2 = ft_printf("|% 0+*.*zd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0343");
	ret1 = fprintf(fppres, "|% 0+*.*d|\n", width, precision, var);
	ft_printf("#0343");
	ret2 = ft_printf("|% 0+*.*d|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0344");
	ret1 = fprintf(fppres, "|% 0+*.*i|\n", width, precision, var);
	ft_printf("#0344");
	ret2 = ft_printf("|% 0+*.*i|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0345");
	ret1 = fprintf(fppres, "|% 0+*.*hhi|\n", width, precision, var);
	ft_printf("#0345");
	ret2 = ft_printf("|% 0+*.*hhi|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0346");
	ret1 = fprintf(fppres, "|% 0+*.*hi|\n", width, precision, var);
	ft_printf("#0346");
	ret2 = ft_printf("|% 0+*.*hi|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0347");
	ret1 = fprintf(fppres, "|% 0+*.*li|\n", width, precision, var);
	ft_printf("#0347");
	ret2 = ft_printf("|% 0+*.*li|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0348");
	ret1 = fprintf(fppres, "|% 0+*.*lli|\n", width, precision, var);
	ft_printf("#0348");
	ret2 = ft_printf("|% 0+*.*lli|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0349");
	ret1 = fprintf(fppres, "|% 0+*.*ji|\n", width, precision, var);
	ft_printf("#0349");
	ret2 = ft_printf("|% 0+*.*ji|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0350");
	ret1 = fprintf(fppres, "|% 0+*.*zi|\n", width, precision, var);
	ft_printf("#0350");
	ret2 = ft_printf("|% 0+*.*zi|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0351");
	ret1 = fprintf(fppres, "|% 0+*.*i|\n", width, precision, var);
	ft_printf("#0351");
	ret2 = ft_printf("|% 0+*.*i|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0352");
	ret1 = fprintf(fppres, "|% 0+*.*o|\n", width, precision, var);
	ft_printf("#0352");
	ret2 = ft_printf("|% 0+*.*o|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0353");
	ret1 = fprintf(fppres, "|% 0+*.*hho|\n", width, precision, var);
	ft_printf("#0353");
	ret2 = ft_printf("|% 0+*.*hho|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0354");
	ret1 = fprintf(fppres, "|% 0+*.*ho|\n", width, precision, var);
	ft_printf("#0354");
	ret2 = ft_printf("|% 0+*.*ho|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0355");
	ret1 = fprintf(fppres, "|% 0+*.*lo|\n", width, precision, var);
	ft_printf("#0355");
	ret2 = ft_printf("|% 0+*.*lo|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0356");
	ret1 = fprintf(fppres, "|% 0+*.*llo|\n", width, precision, var);
	ft_printf("#0356");
	ret2 = ft_printf("|% 0+*.*llo|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0357");
	ret1 = fprintf(fppres, "|% 0+*.*jo|\n", width, precision, var);
	ft_printf("#0357");
	ret2 = ft_printf("|% 0+*.*jo|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0358");
	ret1 = fprintf(fppres, "|% 0+*.*zo|\n", width, precision, var);
	ft_printf("#0358");
	ret2 = ft_printf("|% 0+*.*zo|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0359");
	ret1 = fprintf(fppres, "|% 0+*.*o|\n", width, precision, var);
	ft_printf("#0359");
	ret2 = ft_printf("|% 0+*.*o|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0360");
	ret1 = fprintf(fppres, "|% 0+*.*u|\n", width, precision, var);
	ft_printf("#0360");
	ret2 = ft_printf("|% 0+*.*u|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0361");
	ret1 = fprintf(fppres, "|% 0+*.*hhu|\n", width, precision, var);
	ft_printf("#0361");
	ret2 = ft_printf("|% 0+*.*hhu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0362");
	ret1 = fprintf(fppres, "|% 0+*.*hu|\n", width, precision, var);
	ft_printf("#0362");
	ret2 = ft_printf("|% 0+*.*hu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0363");
	ret1 = fprintf(fppres, "|% 0+*.*lu|\n", width, precision, var);
	ft_printf("#0363");
	ret2 = ft_printf("|% 0+*.*lu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0364");
	ret1 = fprintf(fppres, "|% 0+*.*llu|\n", width, precision, var);
	ft_printf("#0364");
	ret2 = ft_printf("|% 0+*.*llu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0365");
	ret1 = fprintf(fppres, "|% 0+*.*ju|\n", width, precision, var);
	ft_printf("#0365");
	ret2 = ft_printf("|% 0+*.*ju|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0366");
	ret1 = fprintf(fppres, "|% 0+*.*zu|\n", width, precision, var);
	ft_printf("#0366");
	ret2 = ft_printf("|% 0+*.*zu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0367");
	ret1 = fprintf(fppres, "|% 0+*.*u|\n", width, precision, var);
	ft_printf("#0367");
	ret2 = ft_printf("|% 0+*.*u|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0368");
	ret1 = fprintf(fppres, "|% 0+*.*x|\n", width, precision, var);
	ft_printf("#0368");
	ret2 = ft_printf("|% 0+*.*x|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0369");
	ret1 = fprintf(fppres, "|% 0+*.*hhx|\n", width, precision, var);
	ft_printf("#0369");
	ret2 = ft_printf("|% 0+*.*hhx|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0370");
	ret1 = fprintf(fppres, "|% 0+*.*hx|\n", width, precision, var);
	ft_printf("#0370");
	ret2 = ft_printf("|% 0+*.*hx|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0371");
	ret1 = fprintf(fppres, "|% 0+*.*lx|\n", width, precision, var);
	ft_printf("#0371");
	ret2 = ft_printf("|% 0+*.*lx|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0372");
	ret1 = fprintf(fppres, "|% 0+*.*llx|\n", width, precision, var);
	ft_printf("#0372");
	ret2 = ft_printf("|% 0+*.*llx|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0373");
	ret1 = fprintf(fppres, "|% 0+*.*jx|\n", width, precision, var);
	ft_printf("#0373");
	ret2 = ft_printf("|% 0+*.*jx|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0374");
	ret1 = fprintf(fppres, "|% 0+*.*zx|\n", width, precision, var);
	ft_printf("#0374");
	ret2 = ft_printf("|% 0+*.*zx|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0375");
	ret1 = fprintf(fppres, "|% 0+*.*x|\n", width, precision, var);
	ft_printf("#0375");
	ret2 = ft_printf("|% 0+*.*x|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0376");
	ret1 = fprintf(fppres, "|% 0+*.*X|\n", width, precision, var);
	ft_printf("#0376");
	ret2 = ft_printf("|% 0+*.*X|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0377");
	ret1 = fprintf(fppres, "|% 0+*.*hhX|\n", width, precision, var);
	ft_printf("#0377");
	ret2 = ft_printf("|% 0+*.*hhX|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0378");
	ret1 = fprintf(fppres, "|% 0+*.*hX|\n", width, precision, var);
	ft_printf("#0378");
	ret2 = ft_printf("|% 0+*.*hX|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0379");
	ret1 = fprintf(fppres, "|% 0+*.*lX|\n", width, precision, var);
	ft_printf("#0379");
	ret2 = ft_printf("|% 0+*.*lX|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0380");
	ret1 = fprintf(fppres, "|% 0+*.*llX|\n", width, precision, var);
	ft_printf("#0380");
	ret2 = ft_printf("|% 0+*.*llX|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0381");
	ret1 = fprintf(fppres, "|% 0+*.*jX|\n", width, precision, var);
	ft_printf("#0381");
	ret2 = ft_printf("|% 0+*.*jX|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0382");
	ret1 = fprintf(fppres, "|% 0+*.*zX|\n", width, precision, var);
	ft_printf("#0382");
	ret2 = ft_printf("|% 0+*.*zX|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0383");
	ret1 = fprintf(fppres, "|% 0+*.*X|\n", width, precision, var);
	ft_printf("#0383");
	ret2 = ft_printf("|% 0+*.*X|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0384");
	ret1 = fprintf(fppres, "|%-*.*d|\n", width, precision, var);
	ft_printf("#0384");
	ret2 = ft_printf("|%-*.*d|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0385");
	ret1 = fprintf(fppres, "|%-*.*hhd|\n", width, precision, var);
	ft_printf("#0385");
	ret2 = ft_printf("|%-*.*hhd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0386");
	ret1 = fprintf(fppres, "|%-*.*hd|\n", width, precision, var);
	ft_printf("#0386");
	ret2 = ft_printf("|%-*.*hd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0387");
	ret1 = fprintf(fppres, "|%-*.*ld|\n", width, precision, var);
	ft_printf("#0387");
	ret2 = ft_printf("|%-*.*ld|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0388");
	ret1 = fprintf(fppres, "|%-*.*lld|\n", width, precision, var);
	ft_printf("#0388");
	ret2 = ft_printf("|%-*.*lld|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0389");
	ret1 = fprintf(fppres, "|%-*.*jd|\n", width, precision, var);
	ft_printf("#0389");
	ret2 = ft_printf("|%-*.*jd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0390");
	ret1 = fprintf(fppres, "|%-*.*zd|\n", width, precision, var);
	ft_printf("#0390");
	ret2 = ft_printf("|%-*.*zd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0391");
	ret1 = fprintf(fppres, "|%-*.*d|\n", width, precision, var);
	ft_printf("#0391");
	ret2 = ft_printf("|%-*.*d|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0392");
	ret1 = fprintf(fppres, "|%-*.*i|\n", width, precision, var);
	ft_printf("#0392");
	ret2 = ft_printf("|%-*.*i|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0393");
	ret1 = fprintf(fppres, "|%-*.*hhi|\n", width, precision, var);
	ft_printf("#0393");
	ret2 = ft_printf("|%-*.*hhi|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0394");
	ret1 = fprintf(fppres, "|%-*.*hi|\n", width, precision, var);
	ft_printf("#0394");
	ret2 = ft_printf("|%-*.*hi|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0395");
	ret1 = fprintf(fppres, "|%-*.*li|\n", width, precision, var);
	ft_printf("#0395");
	ret2 = ft_printf("|%-*.*li|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0396");
	ret1 = fprintf(fppres, "|%-*.*lli|\n", width, precision, var);
	ft_printf("#0396");
	ret2 = ft_printf("|%-*.*lli|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0397");
	ret1 = fprintf(fppres, "|%-*.*ji|\n", width, precision, var);
	ft_printf("#0397");
	ret2 = ft_printf("|%-*.*ji|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0398");
	ret1 = fprintf(fppres, "|%-*.*zi|\n", width, precision, var);
	ft_printf("#0398");
	ret2 = ft_printf("|%-*.*zi|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0399");
	ret1 = fprintf(fppres, "|%-*.*i|\n", width, precision, var);
	ft_printf("#0399");
	ret2 = ft_printf("|%-*.*i|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0400");
	ret1 = fprintf(fppres, "|%-*.*o|\n", width, precision, var);
	ft_printf("#0400");
	ret2 = ft_printf("|%-*.*o|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0401");
	ret1 = fprintf(fppres, "|%-*.*hho|\n", width, precision, var);
	ft_printf("#0401");
	ret2 = ft_printf("|%-*.*hho|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0402");
	ret1 = fprintf(fppres, "|%-*.*ho|\n", width, precision, var);
	ft_printf("#0402");
	ret2 = ft_printf("|%-*.*ho|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0403");
	ret1 = fprintf(fppres, "|%-*.*lo|\n", width, precision, var);
	ft_printf("#0403");
	ret2 = ft_printf("|%-*.*lo|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0404");
	ret1 = fprintf(fppres, "|%-*.*llo|\n", width, precision, var);
	ft_printf("#0404");
	ret2 = ft_printf("|%-*.*llo|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0405");
	ret1 = fprintf(fppres, "|%-*.*jo|\n", width, precision, var);
	ft_printf("#0405");
	ret2 = ft_printf("|%-*.*jo|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0406");
	ret1 = fprintf(fppres, "|%-*.*zo|\n", width, precision, var);
	ft_printf("#0406");
	ret2 = ft_printf("|%-*.*zo|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0407");
	ret1 = fprintf(fppres, "|%-*.*o|\n", width, precision, var);
	ft_printf("#0407");
	ret2 = ft_printf("|%-*.*o|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0408");
	ret1 = fprintf(fppres, "|%-*.*u|\n", width, precision, var);
	ft_printf("#0408");
	ret2 = ft_printf("|%-*.*u|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0409");
	ret1 = fprintf(fppres, "|%-*.*hhu|\n", width, precision, var);
	ft_printf("#0409");
	ret2 = ft_printf("|%-*.*hhu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0410");
	ret1 = fprintf(fppres, "|%-*.*hu|\n", width, precision, var);
	ft_printf("#0410");
	ret2 = ft_printf("|%-*.*hu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0411");
	ret1 = fprintf(fppres, "|%-*.*lu|\n", width, precision, var);
	ft_printf("#0411");
	ret2 = ft_printf("|%-*.*lu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0412");
	ret1 = fprintf(fppres, "|%-*.*llu|\n", width, precision, var);
	ft_printf("#0412");
	ret2 = ft_printf("|%-*.*llu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0413");
	ret1 = fprintf(fppres, "|%-*.*ju|\n", width, precision, var);
	ft_printf("#0413");
	ret2 = ft_printf("|%-*.*ju|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0414");
	ret1 = fprintf(fppres, "|%-*.*zu|\n", width, precision, var);
	ft_printf("#0414");
	ret2 = ft_printf("|%-*.*zu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0415");
	ret1 = fprintf(fppres, "|%-*.*u|\n", width, precision, var);
	ft_printf("#0415");
	ret2 = ft_printf("|%-*.*u|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0416");
	ret1 = fprintf(fppres, "|%-*.*x|\n", width, precision, var);
	ft_printf("#0416");
	ret2 = ft_printf("|%-*.*x|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0417");
	ret1 = fprintf(fppres, "|%-*.*hhx|\n", width, precision, var);
	ft_printf("#0417");
	ret2 = ft_printf("|%-*.*hhx|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0418");
	ret1 = fprintf(fppres, "|%-*.*hx|\n", width, precision, var);
	ft_printf("#0418");
	ret2 = ft_printf("|%-*.*hx|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0419");
	ret1 = fprintf(fppres, "|%-*.*lx|\n", width, precision, var);
	ft_printf("#0419");
	ret2 = ft_printf("|%-*.*lx|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0420");
	ret1 = fprintf(fppres, "|%-*.*llx|\n", width, precision, var);
	ft_printf("#0420");
	ret2 = ft_printf("|%-*.*llx|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0421");
	ret1 = fprintf(fppres, "|%-*.*jx|\n", width, precision, var);
	ft_printf("#0421");
	ret2 = ft_printf("|%-*.*jx|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0422");
	ret1 = fprintf(fppres, "|%-*.*zx|\n", width, precision, var);
	ft_printf("#0422");
	ret2 = ft_printf("|%-*.*zx|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0423");
	ret1 = fprintf(fppres, "|%-*.*x|\n", width, precision, var);
	ft_printf("#0423");
	ret2 = ft_printf("|%-*.*x|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0424");
	ret1 = fprintf(fppres, "|%-*.*X|\n", width, precision, var);
	ft_printf("#0424");
	ret2 = ft_printf("|%-*.*X|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0425");
	ret1 = fprintf(fppres, "|%-*.*hhX|\n", width, precision, var);
	ft_printf("#0425");
	ret2 = ft_printf("|%-*.*hhX|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0426");
	ret1 = fprintf(fppres, "|%-*.*hX|\n", width, precision, var);
	ft_printf("#0426");
	ret2 = ft_printf("|%-*.*hX|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0427");
	ret1 = fprintf(fppres, "|%-*.*lX|\n", width, precision, var);
	ft_printf("#0427");
	ret2 = ft_printf("|%-*.*lX|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0428");
	ret1 = fprintf(fppres, "|%-*.*llX|\n", width, precision, var);
	ft_printf("#0428");
	ret2 = ft_printf("|%-*.*llX|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0429");
	ret1 = fprintf(fppres, "|%-*.*jX|\n", width, precision, var);
	ft_printf("#0429");
	ret2 = ft_printf("|%-*.*jX|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0430");
	ret1 = fprintf(fppres, "|%-*.*zX|\n", width, precision, var);
	ft_printf("#0430");
	ret2 = ft_printf("|%-*.*zX|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0431");
	ret1 = fprintf(fppres, "|%-*.*X|\n", width, precision, var);
	ft_printf("#0431");
	ret2 = ft_printf("|%-*.*X|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0432");
	ret1 = fprintf(fppres, "|% -*.*d|\n", width, precision, var);
	ft_printf("#0432");
	ret2 = ft_printf("|% -*.*d|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0433");
	ret1 = fprintf(fppres, "|% -*.*hhd|\n", width, precision, var);
	ft_printf("#0433");
	ret2 = ft_printf("|% -*.*hhd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0434");
	ret1 = fprintf(fppres, "|% -*.*hd|\n", width, precision, var);
	ft_printf("#0434");
	ret2 = ft_printf("|% -*.*hd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0435");
	ret1 = fprintf(fppres, "|% -*.*ld|\n", width, precision, var);
	ft_printf("#0435");
	ret2 = ft_printf("|% -*.*ld|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0436");
	ret1 = fprintf(fppres, "|% -*.*lld|\n", width, precision, var);
	ft_printf("#0436");
	ret2 = ft_printf("|% -*.*lld|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0437");
	ret1 = fprintf(fppres, "|% -*.*jd|\n", width, precision, var);
	ft_printf("#0437");
	ret2 = ft_printf("|% -*.*jd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0438");
	ret1 = fprintf(fppres, "|% -*.*zd|\n", width, precision, var);
	ft_printf("#0438");
	ret2 = ft_printf("|% -*.*zd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0439");
	ret1 = fprintf(fppres, "|% -*.*d|\n", width, precision, var);
	ft_printf("#0439");
	ret2 = ft_printf("|% -*.*d|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0440");
	ret1 = fprintf(fppres, "|% -*.*i|\n", width, precision, var);
	ft_printf("#0440");
	ret2 = ft_printf("|% -*.*i|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0441");
	ret1 = fprintf(fppres, "|% -*.*hhi|\n", width, precision, var);
	ft_printf("#0441");
	ret2 = ft_printf("|% -*.*hhi|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0442");
	ret1 = fprintf(fppres, "|% -*.*hi|\n", width, precision, var);
	ft_printf("#0442");
	ret2 = ft_printf("|% -*.*hi|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0443");
	ret1 = fprintf(fppres, "|% -*.*li|\n", width, precision, var);
	ft_printf("#0443");
	ret2 = ft_printf("|% -*.*li|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0444");
	ret1 = fprintf(fppres, "|% -*.*lli|\n", width, precision, var);
	ft_printf("#0444");
	ret2 = ft_printf("|% -*.*lli|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0445");
	ret1 = fprintf(fppres, "|% -*.*ji|\n", width, precision, var);
	ft_printf("#0445");
	ret2 = ft_printf("|% -*.*ji|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0446");
	ret1 = fprintf(fppres, "|% -*.*zi|\n", width, precision, var);
	ft_printf("#0446");
	ret2 = ft_printf("|% -*.*zi|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0447");
	ret1 = fprintf(fppres, "|% -*.*i|\n", width, precision, var);
	ft_printf("#0447");
	ret2 = ft_printf("|% -*.*i|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0448");
	ret1 = fprintf(fppres, "|% -*.*o|\n", width, precision, var);
	ft_printf("#0448");
	ret2 = ft_printf("|% -*.*o|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0449");
	ret1 = fprintf(fppres, "|% -*.*hho|\n", width, precision, var);
	ft_printf("#0449");
	ret2 = ft_printf("|% -*.*hho|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0450");
	ret1 = fprintf(fppres, "|% -*.*ho|\n", width, precision, var);
	ft_printf("#0450");
	ret2 = ft_printf("|% -*.*ho|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0451");
	ret1 = fprintf(fppres, "|% -*.*lo|\n", width, precision, var);
	ft_printf("#0451");
	ret2 = ft_printf("|% -*.*lo|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0452");
	ret1 = fprintf(fppres, "|% -*.*llo|\n", width, precision, var);
	ft_printf("#0452");
	ret2 = ft_printf("|% -*.*llo|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0453");
	ret1 = fprintf(fppres, "|% -*.*jo|\n", width, precision, var);
	ft_printf("#0453");
	ret2 = ft_printf("|% -*.*jo|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0454");
	ret1 = fprintf(fppres, "|% -*.*zo|\n", width, precision, var);
	ft_printf("#0454");
	ret2 = ft_printf("|% -*.*zo|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0455");
	ret1 = fprintf(fppres, "|% -*.*o|\n", width, precision, var);
	ft_printf("#0455");
	ret2 = ft_printf("|% -*.*o|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0456");
	ret1 = fprintf(fppres, "|% -*.*u|\n", width, precision, var);
	ft_printf("#0456");
	ret2 = ft_printf("|% -*.*u|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0457");
	ret1 = fprintf(fppres, "|% -*.*hhu|\n", width, precision, var);
	ft_printf("#0457");
	ret2 = ft_printf("|% -*.*hhu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0458");
	ret1 = fprintf(fppres, "|% -*.*hu|\n", width, precision, var);
	ft_printf("#0458");
	ret2 = ft_printf("|% -*.*hu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0459");
	ret1 = fprintf(fppres, "|% -*.*lu|\n", width, precision, var);
	ft_printf("#0459");
	ret2 = ft_printf("|% -*.*lu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0460");
	ret1 = fprintf(fppres, "|% -*.*llu|\n", width, precision, var);
	ft_printf("#0460");
	ret2 = ft_printf("|% -*.*llu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0461");
	ret1 = fprintf(fppres, "|% -*.*ju|\n", width, precision, var);
	ft_printf("#0461");
	ret2 = ft_printf("|% -*.*ju|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0462");
	ret1 = fprintf(fppres, "|% -*.*zu|\n", width, precision, var);
	ft_printf("#0462");
	ret2 = ft_printf("|% -*.*zu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0463");
	ret1 = fprintf(fppres, "|% -*.*u|\n", width, precision, var);
	ft_printf("#0463");
	ret2 = ft_printf("|% -*.*u|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0464");
	ret1 = fprintf(fppres, "|% -*.*x|\n", width, precision, var);
	ft_printf("#0464");
	ret2 = ft_printf("|% -*.*x|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0465");
	ret1 = fprintf(fppres, "|% -*.*hhx|\n", width, precision, var);
	ft_printf("#0465");
	ret2 = ft_printf("|% -*.*hhx|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0466");
	ret1 = fprintf(fppres, "|% -*.*hx|\n", width, precision, var);
	ft_printf("#0466");
	ret2 = ft_printf("|% -*.*hx|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0467");
	ret1 = fprintf(fppres, "|% -*.*lx|\n", width, precision, var);
	ft_printf("#0467");
	ret2 = ft_printf("|% -*.*lx|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0468");
	ret1 = fprintf(fppres, "|% -*.*llx|\n", width, precision, var);
	ft_printf("#0468");
	ret2 = ft_printf("|% -*.*llx|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0469");
	ret1 = fprintf(fppres, "|% -*.*jx|\n", width, precision, var);
	ft_printf("#0469");
	ret2 = ft_printf("|% -*.*jx|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0470");
	ret1 = fprintf(fppres, "|% -*.*zx|\n", width, precision, var);
	ft_printf("#0470");
	ret2 = ft_printf("|% -*.*zx|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0471");
	ret1 = fprintf(fppres, "|% -*.*x|\n", width, precision, var);
	ft_printf("#0471");
	ret2 = ft_printf("|% -*.*x|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0472");
	ret1 = fprintf(fppres, "|% -*.*X|\n", width, precision, var);
	ft_printf("#0472");
	ret2 = ft_printf("|% -*.*X|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0473");
	ret1 = fprintf(fppres, "|% -*.*hhX|\n", width, precision, var);
	ft_printf("#0473");
	ret2 = ft_printf("|% -*.*hhX|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0474");
	ret1 = fprintf(fppres, "|% -*.*hX|\n", width, precision, var);
	ft_printf("#0474");
	ret2 = ft_printf("|% -*.*hX|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0475");
	ret1 = fprintf(fppres, "|% -*.*lX|\n", width, precision, var);
	ft_printf("#0475");
	ret2 = ft_printf("|% -*.*lX|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0476");
	ret1 = fprintf(fppres, "|% -*.*llX|\n", width, precision, var);
	ft_printf("#0476");
	ret2 = ft_printf("|% -*.*llX|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0477");
	ret1 = fprintf(fppres, "|% -*.*jX|\n", width, precision, var);
	ft_printf("#0477");
	ret2 = ft_printf("|% -*.*jX|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0478");
	ret1 = fprintf(fppres, "|% -*.*zX|\n", width, precision, var);
	ft_printf("#0478");
	ret2 = ft_printf("|% -*.*zX|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0479");
	ret1 = fprintf(fppres, "|% -*.*X|\n", width, precision, var);
	ft_printf("#0479");
	ret2 = ft_printf("|% -*.*X|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0480");
	ret1 = fprintf(fppres, "|%0-*.*d|\n", width, precision, var);
	ft_printf("#0480");
	ret2 = ft_printf("|%0-*.*d|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0481");
	ret1 = fprintf(fppres, "|%0-*.*hhd|\n", width, precision, var);
	ft_printf("#0481");
	ret2 = ft_printf("|%0-*.*hhd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0482");
	ret1 = fprintf(fppres, "|%0-*.*hd|\n", width, precision, var);
	ft_printf("#0482");
	ret2 = ft_printf("|%0-*.*hd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0483");
	ret1 = fprintf(fppres, "|%0-*.*ld|\n", width, precision, var);
	ft_printf("#0483");
	ret2 = ft_printf("|%0-*.*ld|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0484");
	ret1 = fprintf(fppres, "|%0-*.*lld|\n", width, precision, var);
	ft_printf("#0484");
	ret2 = ft_printf("|%0-*.*lld|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0485");
	ret1 = fprintf(fppres, "|%0-*.*jd|\n", width, precision, var);
	ft_printf("#0485");
	ret2 = ft_printf("|%0-*.*jd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0486");
	ret1 = fprintf(fppres, "|%0-*.*zd|\n", width, precision, var);
	ft_printf("#0486");
	ret2 = ft_printf("|%0-*.*zd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0487");
	ret1 = fprintf(fppres, "|%0-*.*d|\n", width, precision, var);
	ft_printf("#0487");
	ret2 = ft_printf("|%0-*.*d|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0488");
	ret1 = fprintf(fppres, "|%0-*.*i|\n", width, precision, var);
	ft_printf("#0488");
	ret2 = ft_printf("|%0-*.*i|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0489");
	ret1 = fprintf(fppres, "|%0-*.*hhi|\n", width, precision, var);
	ft_printf("#0489");
	ret2 = ft_printf("|%0-*.*hhi|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0490");
	ret1 = fprintf(fppres, "|%0-*.*hi|\n", width, precision, var);
	ft_printf("#0490");
	ret2 = ft_printf("|%0-*.*hi|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0491");
	ret1 = fprintf(fppres, "|%0-*.*li|\n", width, precision, var);
	ft_printf("#0491");
	ret2 = ft_printf("|%0-*.*li|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0492");
	ret1 = fprintf(fppres, "|%0-*.*lli|\n", width, precision, var);
	ft_printf("#0492");
	ret2 = ft_printf("|%0-*.*lli|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0493");
	ret1 = fprintf(fppres, "|%0-*.*ji|\n", width, precision, var);
	ft_printf("#0493");
	ret2 = ft_printf("|%0-*.*ji|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0494");
	ret1 = fprintf(fppres, "|%0-*.*zi|\n", width, precision, var);
	ft_printf("#0494");
	ret2 = ft_printf("|%0-*.*zi|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0495");
	ret1 = fprintf(fppres, "|%0-*.*i|\n", width, precision, var);
	ft_printf("#0495");
	ret2 = ft_printf("|%0-*.*i|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0496");
	ret1 = fprintf(fppres, "|%0-*.*o|\n", width, precision, var);
	ft_printf("#0496");
	ret2 = ft_printf("|%0-*.*o|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0497");
	ret1 = fprintf(fppres, "|%0-*.*hho|\n", width, precision, var);
	ft_printf("#0497");
	ret2 = ft_printf("|%0-*.*hho|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0498");
	ret1 = fprintf(fppres, "|%0-*.*ho|\n", width, precision, var);
	ft_printf("#0498");
	ret2 = ft_printf("|%0-*.*ho|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0499");
	ret1 = fprintf(fppres, "|%0-*.*lo|\n", width, precision, var);
	ft_printf("#0499");
	ret2 = ft_printf("|%0-*.*lo|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0500");
	ret1 = fprintf(fppres, "|%0-*.*llo|\n", width, precision, var);
	ft_printf("#0500");
	ret2 = ft_printf("|%0-*.*llo|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0501");
	ret1 = fprintf(fppres, "|%0-*.*jo|\n", width, precision, var);
	ft_printf("#0501");
	ret2 = ft_printf("|%0-*.*jo|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0502");
	ret1 = fprintf(fppres, "|%0-*.*zo|\n", width, precision, var);
	ft_printf("#0502");
	ret2 = ft_printf("|%0-*.*zo|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0503");
	ret1 = fprintf(fppres, "|%0-*.*o|\n", width, precision, var);
	ft_printf("#0503");
	ret2 = ft_printf("|%0-*.*o|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0504");
	ret1 = fprintf(fppres, "|%0-*.*u|\n", width, precision, var);
	ft_printf("#0504");
	ret2 = ft_printf("|%0-*.*u|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0505");
	ret1 = fprintf(fppres, "|%0-*.*hhu|\n", width, precision, var);
	ft_printf("#0505");
	ret2 = ft_printf("|%0-*.*hhu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0506");
	ret1 = fprintf(fppres, "|%0-*.*hu|\n", width, precision, var);
	ft_printf("#0506");
	ret2 = ft_printf("|%0-*.*hu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0507");
	ret1 = fprintf(fppres, "|%0-*.*lu|\n", width, precision, var);
	ft_printf("#0507");
	ret2 = ft_printf("|%0-*.*lu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0508");
	ret1 = fprintf(fppres, "|%0-*.*llu|\n", width, precision, var);
	ft_printf("#0508");
	ret2 = ft_printf("|%0-*.*llu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0509");
	ret1 = fprintf(fppres, "|%0-*.*ju|\n", width, precision, var);
	ft_printf("#0509");
	ret2 = ft_printf("|%0-*.*ju|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0510");
	ret1 = fprintf(fppres, "|%0-*.*zu|\n", width, precision, var);
	ft_printf("#0510");
	ret2 = ft_printf("|%0-*.*zu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0511");
	ret1 = fprintf(fppres, "|%0-*.*u|\n", width, precision, var);
	ft_printf("#0511");
	ret2 = ft_printf("|%0-*.*u|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0512");
	ret1 = fprintf(fppres, "|%0-*.*x|\n", width, precision, var);
	ft_printf("#0512");
	ret2 = ft_printf("|%0-*.*x|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0513");
	ret1 = fprintf(fppres, "|%0-*.*hhx|\n", width, precision, var);
	ft_printf("#0513");
	ret2 = ft_printf("|%0-*.*hhx|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0514");
	ret1 = fprintf(fppres, "|%0-*.*hx|\n", width, precision, var);
	ft_printf("#0514");
	ret2 = ft_printf("|%0-*.*hx|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0515");
	ret1 = fprintf(fppres, "|%0-*.*lx|\n", width, precision, var);
	ft_printf("#0515");
	ret2 = ft_printf("|%0-*.*lx|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0516");
	ret1 = fprintf(fppres, "|%0-*.*llx|\n", width, precision, var);
	ft_printf("#0516");
	ret2 = ft_printf("|%0-*.*llx|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0517");
	ret1 = fprintf(fppres, "|%0-*.*jx|\n", width, precision, var);
	ft_printf("#0517");
	ret2 = ft_printf("|%0-*.*jx|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0518");
	ret1 = fprintf(fppres, "|%0-*.*zx|\n", width, precision, var);
	ft_printf("#0518");
	ret2 = ft_printf("|%0-*.*zx|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0519");
	ret1 = fprintf(fppres, "|%0-*.*x|\n", width, precision, var);
	ft_printf("#0519");
	ret2 = ft_printf("|%0-*.*x|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0520");
	ret1 = fprintf(fppres, "|%0-*.*X|\n", width, precision, var);
	ft_printf("#0520");
	ret2 = ft_printf("|%0-*.*X|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0521");
	ret1 = fprintf(fppres, "|%0-*.*hhX|\n", width, precision, var);
	ft_printf("#0521");
	ret2 = ft_printf("|%0-*.*hhX|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0522");
	ret1 = fprintf(fppres, "|%0-*.*hX|\n", width, precision, var);
	ft_printf("#0522");
	ret2 = ft_printf("|%0-*.*hX|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0523");
	ret1 = fprintf(fppres, "|%0-*.*lX|\n", width, precision, var);
	ft_printf("#0523");
	ret2 = ft_printf("|%0-*.*lX|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0524");
	ret1 = fprintf(fppres, "|%0-*.*llX|\n", width, precision, var);
	ft_printf("#0524");
	ret2 = ft_printf("|%0-*.*llX|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0525");
	ret1 = fprintf(fppres, "|%0-*.*jX|\n", width, precision, var);
	ft_printf("#0525");
	ret2 = ft_printf("|%0-*.*jX|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0526");
	ret1 = fprintf(fppres, "|%0-*.*zX|\n", width, precision, var);
	ft_printf("#0526");
	ret2 = ft_printf("|%0-*.*zX|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0527");
	ret1 = fprintf(fppres, "|%0-*.*X|\n", width, precision, var);
	ft_printf("#0527");
	ret2 = ft_printf("|%0-*.*X|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0528");
	ret1 = fprintf(fppres, "|% 0-*.*d|\n", width, precision, var);
	ft_printf("#0528");
	ret2 = ft_printf("|% 0-*.*d|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0529");
	ret1 = fprintf(fppres, "|% 0-*.*hhd|\n", width, precision, var);
	ft_printf("#0529");
	ret2 = ft_printf("|% 0-*.*hhd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0530");
	ret1 = fprintf(fppres, "|% 0-*.*hd|\n", width, precision, var);
	ft_printf("#0530");
	ret2 = ft_printf("|% 0-*.*hd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0531");
	ret1 = fprintf(fppres, "|% 0-*.*ld|\n", width, precision, var);
	ft_printf("#0531");
	ret2 = ft_printf("|% 0-*.*ld|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0532");
	ret1 = fprintf(fppres, "|% 0-*.*lld|\n", width, precision, var);
	ft_printf("#0532");
	ret2 = ft_printf("|% 0-*.*lld|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0533");
	ret1 = fprintf(fppres, "|% 0-*.*jd|\n", width, precision, var);
	ft_printf("#0533");
	ret2 = ft_printf("|% 0-*.*jd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0534");
	ret1 = fprintf(fppres, "|% 0-*.*zd|\n", width, precision, var);
	ft_printf("#0534");
	ret2 = ft_printf("|% 0-*.*zd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0535");
	ret1 = fprintf(fppres, "|% 0-*.*d|\n", width, precision, var);
	ft_printf("#0535");
	ret2 = ft_printf("|% 0-*.*d|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0536");
	ret1 = fprintf(fppres, "|% 0-*.*i|\n", width, precision, var);
	ft_printf("#0536");
	ret2 = ft_printf("|% 0-*.*i|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0537");
	ret1 = fprintf(fppres, "|% 0-*.*hhi|\n", width, precision, var);
	ft_printf("#0537");
	ret2 = ft_printf("|% 0-*.*hhi|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0538");
	ret1 = fprintf(fppres, "|% 0-*.*hi|\n", width, precision, var);
	ft_printf("#0538");
	ret2 = ft_printf("|% 0-*.*hi|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0539");
	ret1 = fprintf(fppres, "|% 0-*.*li|\n", width, precision, var);
	ft_printf("#0539");
	ret2 = ft_printf("|% 0-*.*li|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0540");
	ret1 = fprintf(fppres, "|% 0-*.*lli|\n", width, precision, var);
	ft_printf("#0540");
	ret2 = ft_printf("|% 0-*.*lli|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0541");
	ret1 = fprintf(fppres, "|% 0-*.*ji|\n", width, precision, var);
	ft_printf("#0541");
	ret2 = ft_printf("|% 0-*.*ji|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0542");
	ret1 = fprintf(fppres, "|% 0-*.*zi|\n", width, precision, var);
	ft_printf("#0542");
	ret2 = ft_printf("|% 0-*.*zi|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0543");
	ret1 = fprintf(fppres, "|% 0-*.*i|\n", width, precision, var);
	ft_printf("#0543");
	ret2 = ft_printf("|% 0-*.*i|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0544");
	ret1 = fprintf(fppres, "|% 0-*.*o|\n", width, precision, var);
	ft_printf("#0544");
	ret2 = ft_printf("|% 0-*.*o|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0545");
	ret1 = fprintf(fppres, "|% 0-*.*hho|\n", width, precision, var);
	ft_printf("#0545");
	ret2 = ft_printf("|% 0-*.*hho|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0546");
	ret1 = fprintf(fppres, "|% 0-*.*ho|\n", width, precision, var);
	ft_printf("#0546");
	ret2 = ft_printf("|% 0-*.*ho|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0547");
	ret1 = fprintf(fppres, "|% 0-*.*lo|\n", width, precision, var);
	ft_printf("#0547");
	ret2 = ft_printf("|% 0-*.*lo|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0548");
	ret1 = fprintf(fppres, "|% 0-*.*llo|\n", width, precision, var);
	ft_printf("#0548");
	ret2 = ft_printf("|% 0-*.*llo|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0549");
	ret1 = fprintf(fppres, "|% 0-*.*jo|\n", width, precision, var);
	ft_printf("#0549");
	ret2 = ft_printf("|% 0-*.*jo|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0550");
	ret1 = fprintf(fppres, "|% 0-*.*zo|\n", width, precision, var);
	ft_printf("#0550");
	ret2 = ft_printf("|% 0-*.*zo|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0551");
	ret1 = fprintf(fppres, "|% 0-*.*o|\n", width, precision, var);
	ft_printf("#0551");
	ret2 = ft_printf("|% 0-*.*o|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0552");
	ret1 = fprintf(fppres, "|% 0-*.*u|\n", width, precision, var);
	ft_printf("#0552");
	ret2 = ft_printf("|% 0-*.*u|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0553");
	ret1 = fprintf(fppres, "|% 0-*.*hhu|\n", width, precision, var);
	ft_printf("#0553");
	ret2 = ft_printf("|% 0-*.*hhu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0554");
	ret1 = fprintf(fppres, "|% 0-*.*hu|\n", width, precision, var);
	ft_printf("#0554");
	ret2 = ft_printf("|% 0-*.*hu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0555");
	ret1 = fprintf(fppres, "|% 0-*.*lu|\n", width, precision, var);
	ft_printf("#0555");
	ret2 = ft_printf("|% 0-*.*lu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0556");
	ret1 = fprintf(fppres, "|% 0-*.*llu|\n", width, precision, var);
	ft_printf("#0556");
	ret2 = ft_printf("|% 0-*.*llu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0557");
	ret1 = fprintf(fppres, "|% 0-*.*ju|\n", width, precision, var);
	ft_printf("#0557");
	ret2 = ft_printf("|% 0-*.*ju|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0558");
	ret1 = fprintf(fppres, "|% 0-*.*zu|\n", width, precision, var);
	ft_printf("#0558");
	ret2 = ft_printf("|% 0-*.*zu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0559");
	ret1 = fprintf(fppres, "|% 0-*.*u|\n", width, precision, var);
	ft_printf("#0559");
	ret2 = ft_printf("|% 0-*.*u|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0560");
	ret1 = fprintf(fppres, "|% 0-*.*x|\n", width, precision, var);
	ft_printf("#0560");
	ret2 = ft_printf("|% 0-*.*x|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0561");
	ret1 = fprintf(fppres, "|% 0-*.*hhx|\n", width, precision, var);
	ft_printf("#0561");
	ret2 = ft_printf("|% 0-*.*hhx|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0562");
	ret1 = fprintf(fppres, "|% 0-*.*hx|\n", width, precision, var);
	ft_printf("#0562");
	ret2 = ft_printf("|% 0-*.*hx|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0563");
	ret1 = fprintf(fppres, "|% 0-*.*lx|\n", width, precision, var);
	ft_printf("#0563");
	ret2 = ft_printf("|% 0-*.*lx|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0564");
	ret1 = fprintf(fppres, "|% 0-*.*llx|\n", width, precision, var);
	ft_printf("#0564");
	ret2 = ft_printf("|% 0-*.*llx|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0565");
	ret1 = fprintf(fppres, "|% 0-*.*jx|\n", width, precision, var);
	ft_printf("#0565");
	ret2 = ft_printf("|% 0-*.*jx|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0566");
	ret1 = fprintf(fppres, "|% 0-*.*zx|\n", width, precision, var);
	ft_printf("#0566");
	ret2 = ft_printf("|% 0-*.*zx|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0567");
	ret1 = fprintf(fppres, "|% 0-*.*x|\n", width, precision, var);
	ft_printf("#0567");
	ret2 = ft_printf("|% 0-*.*x|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0568");
	ret1 = fprintf(fppres, "|% 0-*.*X|\n", width, precision, var);
	ft_printf("#0568");
	ret2 = ft_printf("|% 0-*.*X|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0569");
	ret1 = fprintf(fppres, "|% 0-*.*hhX|\n", width, precision, var);
	ft_printf("#0569");
	ret2 = ft_printf("|% 0-*.*hhX|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0570");
	ret1 = fprintf(fppres, "|% 0-*.*hX|\n", width, precision, var);
	ft_printf("#0570");
	ret2 = ft_printf("|% 0-*.*hX|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0571");
	ret1 = fprintf(fppres, "|% 0-*.*lX|\n", width, precision, var);
	ft_printf("#0571");
	ret2 = ft_printf("|% 0-*.*lX|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0572");
	ret1 = fprintf(fppres, "|% 0-*.*llX|\n", width, precision, var);
	ft_printf("#0572");
	ret2 = ft_printf("|% 0-*.*llX|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0573");
	ret1 = fprintf(fppres, "|% 0-*.*jX|\n", width, precision, var);
	ft_printf("#0573");
	ret2 = ft_printf("|% 0-*.*jX|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0574");
	ret1 = fprintf(fppres, "|% 0-*.*zX|\n", width, precision, var);
	ft_printf("#0574");
	ret2 = ft_printf("|% 0-*.*zX|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0575");
	ret1 = fprintf(fppres, "|% 0-*.*X|\n", width, precision, var);
	ft_printf("#0575");
	ret2 = ft_printf("|% 0-*.*X|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0576");
	ret1 = fprintf(fppres, "|%+-*.*d|\n", width, precision, var);
	ft_printf("#0576");
	ret2 = ft_printf("|%+-*.*d|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0577");
	ret1 = fprintf(fppres, "|%+-*.*hhd|\n", width, precision, var);
	ft_printf("#0577");
	ret2 = ft_printf("|%+-*.*hhd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0578");
	ret1 = fprintf(fppres, "|%+-*.*hd|\n", width, precision, var);
	ft_printf("#0578");
	ret2 = ft_printf("|%+-*.*hd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0579");
	ret1 = fprintf(fppres, "|%+-*.*ld|\n", width, precision, var);
	ft_printf("#0579");
	ret2 = ft_printf("|%+-*.*ld|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0580");
	ret1 = fprintf(fppres, "|%+-*.*lld|\n", width, precision, var);
	ft_printf("#0580");
	ret2 = ft_printf("|%+-*.*lld|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0581");
	ret1 = fprintf(fppres, "|%+-*.*jd|\n", width, precision, var);
	ft_printf("#0581");
	ret2 = ft_printf("|%+-*.*jd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0582");
	ret1 = fprintf(fppres, "|%+-*.*zd|\n", width, precision, var);
	ft_printf("#0582");
	ret2 = ft_printf("|%+-*.*zd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0583");
	ret1 = fprintf(fppres, "|%+-*.*d|\n", width, precision, var);
	ft_printf("#0583");
	ret2 = ft_printf("|%+-*.*d|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0584");
	ret1 = fprintf(fppres, "|%+-*.*i|\n", width, precision, var);
	ft_printf("#0584");
	ret2 = ft_printf("|%+-*.*i|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0585");
	ret1 = fprintf(fppres, "|%+-*.*hhi|\n", width, precision, var);
	ft_printf("#0585");
	ret2 = ft_printf("|%+-*.*hhi|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0586");
	ret1 = fprintf(fppres, "|%+-*.*hi|\n", width, precision, var);
	ft_printf("#0586");
	ret2 = ft_printf("|%+-*.*hi|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0587");
	ret1 = fprintf(fppres, "|%+-*.*li|\n", width, precision, var);
	ft_printf("#0587");
	ret2 = ft_printf("|%+-*.*li|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0588");
	ret1 = fprintf(fppres, "|%+-*.*lli|\n", width, precision, var);
	ft_printf("#0588");
	ret2 = ft_printf("|%+-*.*lli|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0589");
	ret1 = fprintf(fppres, "|%+-*.*ji|\n", width, precision, var);
	ft_printf("#0589");
	ret2 = ft_printf("|%+-*.*ji|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0590");
	ret1 = fprintf(fppres, "|%+-*.*zi|\n", width, precision, var);
	ft_printf("#0590");
	ret2 = ft_printf("|%+-*.*zi|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0591");
	ret1 = fprintf(fppres, "|%+-*.*i|\n", width, precision, var);
	ft_printf("#0591");
	ret2 = ft_printf("|%+-*.*i|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0592");
	ret1 = fprintf(fppres, "|%+-*.*o|\n", width, precision, var);
	ft_printf("#0592");
	ret2 = ft_printf("|%+-*.*o|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0593");
	ret1 = fprintf(fppres, "|%+-*.*hho|\n", width, precision, var);
	ft_printf("#0593");
	ret2 = ft_printf("|%+-*.*hho|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0594");
	ret1 = fprintf(fppres, "|%+-*.*ho|\n", width, precision, var);
	ft_printf("#0594");
	ret2 = ft_printf("|%+-*.*ho|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0595");
	ret1 = fprintf(fppres, "|%+-*.*lo|\n", width, precision, var);
	ft_printf("#0595");
	ret2 = ft_printf("|%+-*.*lo|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0596");
	ret1 = fprintf(fppres, "|%+-*.*llo|\n", width, precision, var);
	ft_printf("#0596");
	ret2 = ft_printf("|%+-*.*llo|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0597");
	ret1 = fprintf(fppres, "|%+-*.*jo|\n", width, precision, var);
	ft_printf("#0597");
	ret2 = ft_printf("|%+-*.*jo|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0598");
	ret1 = fprintf(fppres, "|%+-*.*zo|\n", width, precision, var);
	ft_printf("#0598");
	ret2 = ft_printf("|%+-*.*zo|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0599");
	ret1 = fprintf(fppres, "|%+-*.*o|\n", width, precision, var);
	ft_printf("#0599");
	ret2 = ft_printf("|%+-*.*o|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0600");
	ret1 = fprintf(fppres, "|%+-*.*u|\n", width, precision, var);
	ft_printf("#0600");
	ret2 = ft_printf("|%+-*.*u|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0601");
	ret1 = fprintf(fppres, "|%+-*.*hhu|\n", width, precision, var);
	ft_printf("#0601");
	ret2 = ft_printf("|%+-*.*hhu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0602");
	ret1 = fprintf(fppres, "|%+-*.*hu|\n", width, precision, var);
	ft_printf("#0602");
	ret2 = ft_printf("|%+-*.*hu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0603");
	ret1 = fprintf(fppres, "|%+-*.*lu|\n", width, precision, var);
	ft_printf("#0603");
	ret2 = ft_printf("|%+-*.*lu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0604");
	ret1 = fprintf(fppres, "|%+-*.*llu|\n", width, precision, var);
	ft_printf("#0604");
	ret2 = ft_printf("|%+-*.*llu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0605");
	ret1 = fprintf(fppres, "|%+-*.*ju|\n", width, precision, var);
	ft_printf("#0605");
	ret2 = ft_printf("|%+-*.*ju|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0606");
	ret1 = fprintf(fppres, "|%+-*.*zu|\n", width, precision, var);
	ft_printf("#0606");
	ret2 = ft_printf("|%+-*.*zu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0607");
	ret1 = fprintf(fppres, "|%+-*.*u|\n", width, precision, var);
	ft_printf("#0607");
	ret2 = ft_printf("|%+-*.*u|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0608");
	ret1 = fprintf(fppres, "|%+-*.*x|\n", width, precision, var);
	ft_printf("#0608");
	ret2 = ft_printf("|%+-*.*x|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0609");
	ret1 = fprintf(fppres, "|%+-*.*hhx|\n", width, precision, var);
	ft_printf("#0609");
	ret2 = ft_printf("|%+-*.*hhx|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0610");
	ret1 = fprintf(fppres, "|%+-*.*hx|\n", width, precision, var);
	ft_printf("#0610");
	ret2 = ft_printf("|%+-*.*hx|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0611");
	ret1 = fprintf(fppres, "|%+-*.*lx|\n", width, precision, var);
	ft_printf("#0611");
	ret2 = ft_printf("|%+-*.*lx|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0612");
	ret1 = fprintf(fppres, "|%+-*.*llx|\n", width, precision, var);
	ft_printf("#0612");
	ret2 = ft_printf("|%+-*.*llx|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0613");
	ret1 = fprintf(fppres, "|%+-*.*jx|\n", width, precision, var);
	ft_printf("#0613");
	ret2 = ft_printf("|%+-*.*jx|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0614");
	ret1 = fprintf(fppres, "|%+-*.*zx|\n", width, precision, var);
	ft_printf("#0614");
	ret2 = ft_printf("|%+-*.*zx|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0615");
	ret1 = fprintf(fppres, "|%+-*.*x|\n", width, precision, var);
	ft_printf("#0615");
	ret2 = ft_printf("|%+-*.*x|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0616");
	ret1 = fprintf(fppres, "|%+-*.*X|\n", width, precision, var);
	ft_printf("#0616");
	ret2 = ft_printf("|%+-*.*X|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0617");
	ret1 = fprintf(fppres, "|%+-*.*hhX|\n", width, precision, var);
	ft_printf("#0617");
	ret2 = ft_printf("|%+-*.*hhX|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0618");
	ret1 = fprintf(fppres, "|%+-*.*hX|\n", width, precision, var);
	ft_printf("#0618");
	ret2 = ft_printf("|%+-*.*hX|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0619");
	ret1 = fprintf(fppres, "|%+-*.*lX|\n", width, precision, var);
	ft_printf("#0619");
	ret2 = ft_printf("|%+-*.*lX|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0620");
	ret1 = fprintf(fppres, "|%+-*.*llX|\n", width, precision, var);
	ft_printf("#0620");
	ret2 = ft_printf("|%+-*.*llX|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0621");
	ret1 = fprintf(fppres, "|%+-*.*jX|\n", width, precision, var);
	ft_printf("#0621");
	ret2 = ft_printf("|%+-*.*jX|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0622");
	ret1 = fprintf(fppres, "|%+-*.*zX|\n", width, precision, var);
	ft_printf("#0622");
	ret2 = ft_printf("|%+-*.*zX|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0623");
	ret1 = fprintf(fppres, "|%+-*.*X|\n", width, precision, var);
	ft_printf("#0623");
	ret2 = ft_printf("|%+-*.*X|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0624");
	ret1 = fprintf(fppres, "|% +-*.*d|\n", width, precision, var);
	ft_printf("#0624");
	ret2 = ft_printf("|% +-*.*d|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0625");
	ret1 = fprintf(fppres, "|% +-*.*hhd|\n", width, precision, var);
	ft_printf("#0625");
	ret2 = ft_printf("|% +-*.*hhd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0626");
	ret1 = fprintf(fppres, "|% +-*.*hd|\n", width, precision, var);
	ft_printf("#0626");
	ret2 = ft_printf("|% +-*.*hd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0627");
	ret1 = fprintf(fppres, "|% +-*.*ld|\n", width, precision, var);
	ft_printf("#0627");
	ret2 = ft_printf("|% +-*.*ld|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0628");
	ret1 = fprintf(fppres, "|% +-*.*lld|\n", width, precision, var);
	ft_printf("#0628");
	ret2 = ft_printf("|% +-*.*lld|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0629");
	ret1 = fprintf(fppres, "|% +-*.*jd|\n", width, precision, var);
	ft_printf("#0629");
	ret2 = ft_printf("|% +-*.*jd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0630");
	ret1 = fprintf(fppres, "|% +-*.*zd|\n", width, precision, var);
	ft_printf("#0630");
	ret2 = ft_printf("|% +-*.*zd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0631");
	ret1 = fprintf(fppres, "|% +-*.*d|\n", width, precision, var);
	ft_printf("#0631");
	ret2 = ft_printf("|% +-*.*d|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0632");
	ret1 = fprintf(fppres, "|% +-*.*i|\n", width, precision, var);
	ft_printf("#0632");
	ret2 = ft_printf("|% +-*.*i|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0633");
	ret1 = fprintf(fppres, "|% +-*.*hhi|\n", width, precision, var);
	ft_printf("#0633");
	ret2 = ft_printf("|% +-*.*hhi|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0634");
	ret1 = fprintf(fppres, "|% +-*.*hi|\n", width, precision, var);
	ft_printf("#0634");
	ret2 = ft_printf("|% +-*.*hi|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0635");
	ret1 = fprintf(fppres, "|% +-*.*li|\n", width, precision, var);
	ft_printf("#0635");
	ret2 = ft_printf("|% +-*.*li|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0636");
	ret1 = fprintf(fppres, "|% +-*.*lli|\n", width, precision, var);
	ft_printf("#0636");
	ret2 = ft_printf("|% +-*.*lli|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0637");
	ret1 = fprintf(fppres, "|% +-*.*ji|\n", width, precision, var);
	ft_printf("#0637");
	ret2 = ft_printf("|% +-*.*ji|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0638");
	ret1 = fprintf(fppres, "|% +-*.*zi|\n", width, precision, var);
	ft_printf("#0638");
	ret2 = ft_printf("|% +-*.*zi|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0639");
	ret1 = fprintf(fppres, "|% +-*.*i|\n", width, precision, var);
	ft_printf("#0639");
	ret2 = ft_printf("|% +-*.*i|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0640");
	ret1 = fprintf(fppres, "|% +-*.*o|\n", width, precision, var);
	ft_printf("#0640");
	ret2 = ft_printf("|% +-*.*o|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0641");
	ret1 = fprintf(fppres, "|% +-*.*hho|\n", width, precision, var);
	ft_printf("#0641");
	ret2 = ft_printf("|% +-*.*hho|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0642");
	ret1 = fprintf(fppres, "|% +-*.*ho|\n", width, precision, var);
	ft_printf("#0642");
	ret2 = ft_printf("|% +-*.*ho|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0643");
	ret1 = fprintf(fppres, "|% +-*.*lo|\n", width, precision, var);
	ft_printf("#0643");
	ret2 = ft_printf("|% +-*.*lo|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0644");
	ret1 = fprintf(fppres, "|% +-*.*llo|\n", width, precision, var);
	ft_printf("#0644");
	ret2 = ft_printf("|% +-*.*llo|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0645");
	ret1 = fprintf(fppres, "|% +-*.*jo|\n", width, precision, var);
	ft_printf("#0645");
	ret2 = ft_printf("|% +-*.*jo|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0646");
	ret1 = fprintf(fppres, "|% +-*.*zo|\n", width, precision, var);
	ft_printf("#0646");
	ret2 = ft_printf("|% +-*.*zo|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0647");
	ret1 = fprintf(fppres, "|% +-*.*o|\n", width, precision, var);
	ft_printf("#0647");
	ret2 = ft_printf("|% +-*.*o|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0648");
	ret1 = fprintf(fppres, "|% +-*.*u|\n", width, precision, var);
	ft_printf("#0648");
	ret2 = ft_printf("|% +-*.*u|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0649");
	ret1 = fprintf(fppres, "|% +-*.*hhu|\n", width, precision, var);
	ft_printf("#0649");
	ret2 = ft_printf("|% +-*.*hhu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0650");
	ret1 = fprintf(fppres, "|% +-*.*hu|\n", width, precision, var);
	ft_printf("#0650");
	ret2 = ft_printf("|% +-*.*hu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0651");
	ret1 = fprintf(fppres, "|% +-*.*lu|\n", width, precision, var);
	ft_printf("#0651");
	ret2 = ft_printf("|% +-*.*lu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0652");
	ret1 = fprintf(fppres, "|% +-*.*llu|\n", width, precision, var);
	ft_printf("#0652");
	ret2 = ft_printf("|% +-*.*llu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0653");
	ret1 = fprintf(fppres, "|% +-*.*ju|\n", width, precision, var);
	ft_printf("#0653");
	ret2 = ft_printf("|% +-*.*ju|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0654");
	ret1 = fprintf(fppres, "|% +-*.*zu|\n", width, precision, var);
	ft_printf("#0654");
	ret2 = ft_printf("|% +-*.*zu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0655");
	ret1 = fprintf(fppres, "|% +-*.*u|\n", width, precision, var);
	ft_printf("#0655");
	ret2 = ft_printf("|% +-*.*u|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0656");
	ret1 = fprintf(fppres, "|% +-*.*x|\n", width, precision, var);
	ft_printf("#0656");
	ret2 = ft_printf("|% +-*.*x|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0657");
	ret1 = fprintf(fppres, "|% +-*.*hhx|\n", width, precision, var);
	ft_printf("#0657");
	ret2 = ft_printf("|% +-*.*hhx|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0658");
	ret1 = fprintf(fppres, "|% +-*.*hx|\n", width, precision, var);
	ft_printf("#0658");
	ret2 = ft_printf("|% +-*.*hx|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0659");
	ret1 = fprintf(fppres, "|% +-*.*lx|\n", width, precision, var);
	ft_printf("#0659");
	ret2 = ft_printf("|% +-*.*lx|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0660");
	ret1 = fprintf(fppres, "|% +-*.*llx|\n", width, precision, var);
	ft_printf("#0660");
	ret2 = ft_printf("|% +-*.*llx|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0661");
	ret1 = fprintf(fppres, "|% +-*.*jx|\n", width, precision, var);
	ft_printf("#0661");
	ret2 = ft_printf("|% +-*.*jx|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0662");
	ret1 = fprintf(fppres, "|% +-*.*zx|\n", width, precision, var);
	ft_printf("#0662");
	ret2 = ft_printf("|% +-*.*zx|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0663");
	ret1 = fprintf(fppres, "|% +-*.*x|\n", width, precision, var);
	ft_printf("#0663");
	ret2 = ft_printf("|% +-*.*x|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0664");
	ret1 = fprintf(fppres, "|% +-*.*X|\n", width, precision, var);
	ft_printf("#0664");
	ret2 = ft_printf("|% +-*.*X|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0665");
	ret1 = fprintf(fppres, "|% +-*.*hhX|\n", width, precision, var);
	ft_printf("#0665");
	ret2 = ft_printf("|% +-*.*hhX|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0666");
	ret1 = fprintf(fppres, "|% +-*.*hX|\n", width, precision, var);
	ft_printf("#0666");
	ret2 = ft_printf("|% +-*.*hX|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0667");
	ret1 = fprintf(fppres, "|% +-*.*lX|\n", width, precision, var);
	ft_printf("#0667");
	ret2 = ft_printf("|% +-*.*lX|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0668");
	ret1 = fprintf(fppres, "|% +-*.*llX|\n", width, precision, var);
	ft_printf("#0668");
	ret2 = ft_printf("|% +-*.*llX|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0669");
	ret1 = fprintf(fppres, "|% +-*.*jX|\n", width, precision, var);
	ft_printf("#0669");
	ret2 = ft_printf("|% +-*.*jX|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0670");
	ret1 = fprintf(fppres, "|% +-*.*zX|\n", width, precision, var);
	ft_printf("#0670");
	ret2 = ft_printf("|% +-*.*zX|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0671");
	ret1 = fprintf(fppres, "|% +-*.*X|\n", width, precision, var);
	ft_printf("#0671");
	ret2 = ft_printf("|% +-*.*X|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0672");
	ret1 = fprintf(fppres, "|%0+-*.*d|\n", width, precision, var);
	ft_printf("#0672");
	ret2 = ft_printf("|%0+-*.*d|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0673");
	ret1 = fprintf(fppres, "|%0+-*.*hhd|\n", width, precision, var);
	ft_printf("#0673");
	ret2 = ft_printf("|%0+-*.*hhd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0674");
	ret1 = fprintf(fppres, "|%0+-*.*hd|\n", width, precision, var);
	ft_printf("#0674");
	ret2 = ft_printf("|%0+-*.*hd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0675");
	ret1 = fprintf(fppres, "|%0+-*.*ld|\n", width, precision, var);
	ft_printf("#0675");
	ret2 = ft_printf("|%0+-*.*ld|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0676");
	ret1 = fprintf(fppres, "|%0+-*.*lld|\n", width, precision, var);
	ft_printf("#0676");
	ret2 = ft_printf("|%0+-*.*lld|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0677");
	ret1 = fprintf(fppres, "|%0+-*.*jd|\n", width, precision, var);
	ft_printf("#0677");
	ret2 = ft_printf("|%0+-*.*jd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0678");
	ret1 = fprintf(fppres, "|%0+-*.*zd|\n", width, precision, var);
	ft_printf("#0678");
	ret2 = ft_printf("|%0+-*.*zd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0679");
	ret1 = fprintf(fppres, "|%0+-*.*d|\n", width, precision, var);
	ft_printf("#0679");
	ret2 = ft_printf("|%0+-*.*d|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0680");
	ret1 = fprintf(fppres, "|%0+-*.*i|\n", width, precision, var);
	ft_printf("#0680");
	ret2 = ft_printf("|%0+-*.*i|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0681");
	ret1 = fprintf(fppres, "|%0+-*.*hhi|\n", width, precision, var);
	ft_printf("#0681");
	ret2 = ft_printf("|%0+-*.*hhi|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0682");
	ret1 = fprintf(fppres, "|%0+-*.*hi|\n", width, precision, var);
	ft_printf("#0682");
	ret2 = ft_printf("|%0+-*.*hi|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0683");
	ret1 = fprintf(fppres, "|%0+-*.*li|\n", width, precision, var);
	ft_printf("#0683");
	ret2 = ft_printf("|%0+-*.*li|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0684");
	ret1 = fprintf(fppres, "|%0+-*.*lli|\n", width, precision, var);
	ft_printf("#0684");
	ret2 = ft_printf("|%0+-*.*lli|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0685");
	ret1 = fprintf(fppres, "|%0+-*.*ji|\n", width, precision, var);
	ft_printf("#0685");
	ret2 = ft_printf("|%0+-*.*ji|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0686");
	ret1 = fprintf(fppres, "|%0+-*.*zi|\n", width, precision, var);
	ft_printf("#0686");
	ret2 = ft_printf("|%0+-*.*zi|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0687");
	ret1 = fprintf(fppres, "|%0+-*.*i|\n", width, precision, var);
	ft_printf("#0687");
	ret2 = ft_printf("|%0+-*.*i|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0688");
	ret1 = fprintf(fppres, "|%0+-*.*o|\n", width, precision, var);
	ft_printf("#0688");
	ret2 = ft_printf("|%0+-*.*o|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0689");
	ret1 = fprintf(fppres, "|%0+-*.*hho|\n", width, precision, var);
	ft_printf("#0689");
	ret2 = ft_printf("|%0+-*.*hho|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0690");
	ret1 = fprintf(fppres, "|%0+-*.*ho|\n", width, precision, var);
	ft_printf("#0690");
	ret2 = ft_printf("|%0+-*.*ho|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0691");
	ret1 = fprintf(fppres, "|%0+-*.*lo|\n", width, precision, var);
	ft_printf("#0691");
	ret2 = ft_printf("|%0+-*.*lo|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0692");
	ret1 = fprintf(fppres, "|%0+-*.*llo|\n", width, precision, var);
	ft_printf("#0692");
	ret2 = ft_printf("|%0+-*.*llo|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0693");
	ret1 = fprintf(fppres, "|%0+-*.*jo|\n", width, precision, var);
	ft_printf("#0693");
	ret2 = ft_printf("|%0+-*.*jo|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0694");
	ret1 = fprintf(fppres, "|%0+-*.*zo|\n", width, precision, var);
	ft_printf("#0694");
	ret2 = ft_printf("|%0+-*.*zo|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0695");
	ret1 = fprintf(fppres, "|%0+-*.*o|\n", width, precision, var);
	ft_printf("#0695");
	ret2 = ft_printf("|%0+-*.*o|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0696");
	ret1 = fprintf(fppres, "|%0+-*.*u|\n", width, precision, var);
	ft_printf("#0696");
	ret2 = ft_printf("|%0+-*.*u|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0697");
	ret1 = fprintf(fppres, "|%0+-*.*hhu|\n", width, precision, var);
	ft_printf("#0697");
	ret2 = ft_printf("|%0+-*.*hhu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0698");
	ret1 = fprintf(fppres, "|%0+-*.*hu|\n", width, precision, var);
	ft_printf("#0698");
	ret2 = ft_printf("|%0+-*.*hu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0699");
	ret1 = fprintf(fppres, "|%0+-*.*lu|\n", width, precision, var);
	ft_printf("#0699");
	ret2 = ft_printf("|%0+-*.*lu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0700");
	ret1 = fprintf(fppres, "|%0+-*.*llu|\n", width, precision, var);
	ft_printf("#0700");
	ret2 = ft_printf("|%0+-*.*llu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0701");
	ret1 = fprintf(fppres, "|%0+-*.*ju|\n", width, precision, var);
	ft_printf("#0701");
	ret2 = ft_printf("|%0+-*.*ju|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0702");
	ret1 = fprintf(fppres, "|%0+-*.*zu|\n", width, precision, var);
	ft_printf("#0702");
	ret2 = ft_printf("|%0+-*.*zu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0703");
	ret1 = fprintf(fppres, "|%0+-*.*u|\n", width, precision, var);
	ft_printf("#0703");
	ret2 = ft_printf("|%0+-*.*u|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0704");
	ret1 = fprintf(fppres, "|%0+-*.*x|\n", width, precision, var);
	ft_printf("#0704");
	ret2 = ft_printf("|%0+-*.*x|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0705");
	ret1 = fprintf(fppres, "|%0+-*.*hhx|\n", width, precision, var);
	ft_printf("#0705");
	ret2 = ft_printf("|%0+-*.*hhx|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0706");
	ret1 = fprintf(fppres, "|%0+-*.*hx|\n", width, precision, var);
	ft_printf("#0706");
	ret2 = ft_printf("|%0+-*.*hx|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0707");
	ret1 = fprintf(fppres, "|%0+-*.*lx|\n", width, precision, var);
	ft_printf("#0707");
	ret2 = ft_printf("|%0+-*.*lx|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0708");
	ret1 = fprintf(fppres, "|%0+-*.*llx|\n", width, precision, var);
	ft_printf("#0708");
	ret2 = ft_printf("|%0+-*.*llx|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0709");
	ret1 = fprintf(fppres, "|%0+-*.*jx|\n", width, precision, var);
	ft_printf("#0709");
	ret2 = ft_printf("|%0+-*.*jx|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0710");
	ret1 = fprintf(fppres, "|%0+-*.*zx|\n", width, precision, var);
	ft_printf("#0710");
	ret2 = ft_printf("|%0+-*.*zx|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0711");
	ret1 = fprintf(fppres, "|%0+-*.*x|\n", width, precision, var);
	ft_printf("#0711");
	ret2 = ft_printf("|%0+-*.*x|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0712");
	ret1 = fprintf(fppres, "|%0+-*.*X|\n", width, precision, var);
	ft_printf("#0712");
	ret2 = ft_printf("|%0+-*.*X|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0713");
	ret1 = fprintf(fppres, "|%0+-*.*hhX|\n", width, precision, var);
	ft_printf("#0713");
	ret2 = ft_printf("|%0+-*.*hhX|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0714");
	ret1 = fprintf(fppres, "|%0+-*.*hX|\n", width, precision, var);
	ft_printf("#0714");
	ret2 = ft_printf("|%0+-*.*hX|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0715");
	ret1 = fprintf(fppres, "|%0+-*.*lX|\n", width, precision, var);
	ft_printf("#0715");
	ret2 = ft_printf("|%0+-*.*lX|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0716");
	ret1 = fprintf(fppres, "|%0+-*.*llX|\n", width, precision, var);
	ft_printf("#0716");
	ret2 = ft_printf("|%0+-*.*llX|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0717");
	ret1 = fprintf(fppres, "|%0+-*.*jX|\n", width, precision, var);
	ft_printf("#0717");
	ret2 = ft_printf("|%0+-*.*jX|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0718");
	ret1 = fprintf(fppres, "|%0+-*.*zX|\n", width, precision, var);
	ft_printf("#0718");
	ret2 = ft_printf("|%0+-*.*zX|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0719");
	ret1 = fprintf(fppres, "|%0+-*.*X|\n", width, precision, var);
	ft_printf("#0719");
	ret2 = ft_printf("|%0+-*.*X|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0720");
	ret1 = fprintf(fppres, "|% 0+-*.*d|\n", width, precision, var);
	ft_printf("#0720");
	ret2 = ft_printf("|% 0+-*.*d|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0721");
	ret1 = fprintf(fppres, "|% 0+-*.*hhd|\n", width, precision, var);
	ft_printf("#0721");
	ret2 = ft_printf("|% 0+-*.*hhd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0722");
	ret1 = fprintf(fppres, "|% 0+-*.*hd|\n", width, precision, var);
	ft_printf("#0722");
	ret2 = ft_printf("|% 0+-*.*hd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0723");
	ret1 = fprintf(fppres, "|% 0+-*.*ld|\n", width, precision, var);
	ft_printf("#0723");
	ret2 = ft_printf("|% 0+-*.*ld|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0724");
	ret1 = fprintf(fppres, "|% 0+-*.*lld|\n", width, precision, var);
	ft_printf("#0724");
	ret2 = ft_printf("|% 0+-*.*lld|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0725");
	ret1 = fprintf(fppres, "|% 0+-*.*jd|\n", width, precision, var);
	ft_printf("#0725");
	ret2 = ft_printf("|% 0+-*.*jd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0726");
	ret1 = fprintf(fppres, "|% 0+-*.*zd|\n", width, precision, var);
	ft_printf("#0726");
	ret2 = ft_printf("|% 0+-*.*zd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0727");
	ret1 = fprintf(fppres, "|% 0+-*.*d|\n", width, precision, var);
	ft_printf("#0727");
	ret2 = ft_printf("|% 0+-*.*d|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0728");
	ret1 = fprintf(fppres, "|% 0+-*.*i|\n", width, precision, var);
	ft_printf("#0728");
	ret2 = ft_printf("|% 0+-*.*i|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0729");
	ret1 = fprintf(fppres, "|% 0+-*.*hhi|\n", width, precision, var);
	ft_printf("#0729");
	ret2 = ft_printf("|% 0+-*.*hhi|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0730");
	ret1 = fprintf(fppres, "|% 0+-*.*hi|\n", width, precision, var);
	ft_printf("#0730");
	ret2 = ft_printf("|% 0+-*.*hi|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0731");
	ret1 = fprintf(fppres, "|% 0+-*.*li|\n", width, precision, var);
	ft_printf("#0731");
	ret2 = ft_printf("|% 0+-*.*li|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0732");
	ret1 = fprintf(fppres, "|% 0+-*.*lli|\n", width, precision, var);
	ft_printf("#0732");
	ret2 = ft_printf("|% 0+-*.*lli|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0733");
	ret1 = fprintf(fppres, "|% 0+-*.*ji|\n", width, precision, var);
	ft_printf("#0733");
	ret2 = ft_printf("|% 0+-*.*ji|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0734");
	ret1 = fprintf(fppres, "|% 0+-*.*zi|\n", width, precision, var);
	ft_printf("#0734");
	ret2 = ft_printf("|% 0+-*.*zi|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0735");
	ret1 = fprintf(fppres, "|% 0+-*.*i|\n", width, precision, var);
	ft_printf("#0735");
	ret2 = ft_printf("|% 0+-*.*i|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0736");
	ret1 = fprintf(fppres, "|% 0+-*.*o|\n", width, precision, var);
	ft_printf("#0736");
	ret2 = ft_printf("|% 0+-*.*o|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0737");
	ret1 = fprintf(fppres, "|% 0+-*.*hho|\n", width, precision, var);
	ft_printf("#0737");
	ret2 = ft_printf("|% 0+-*.*hho|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0738");
	ret1 = fprintf(fppres, "|% 0+-*.*ho|\n", width, precision, var);
	ft_printf("#0738");
	ret2 = ft_printf("|% 0+-*.*ho|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0739");
	ret1 = fprintf(fppres, "|% 0+-*.*lo|\n", width, precision, var);
	ft_printf("#0739");
	ret2 = ft_printf("|% 0+-*.*lo|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0740");
	ret1 = fprintf(fppres, "|% 0+-*.*llo|\n", width, precision, var);
	ft_printf("#0740");
	ret2 = ft_printf("|% 0+-*.*llo|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0741");
	ret1 = fprintf(fppres, "|% 0+-*.*jo|\n", width, precision, var);
	ft_printf("#0741");
	ret2 = ft_printf("|% 0+-*.*jo|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0742");
	ret1 = fprintf(fppres, "|% 0+-*.*zo|\n", width, precision, var);
	ft_printf("#0742");
	ret2 = ft_printf("|% 0+-*.*zo|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0743");
	ret1 = fprintf(fppres, "|% 0+-*.*o|\n", width, precision, var);
	ft_printf("#0743");
	ret2 = ft_printf("|% 0+-*.*o|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0744");
	ret1 = fprintf(fppres, "|% 0+-*.*u|\n", width, precision, var);
	ft_printf("#0744");
	ret2 = ft_printf("|% 0+-*.*u|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0745");
	ret1 = fprintf(fppres, "|% 0+-*.*hhu|\n", width, precision, var);
	ft_printf("#0745");
	ret2 = ft_printf("|% 0+-*.*hhu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0746");
	ret1 = fprintf(fppres, "|% 0+-*.*hu|\n", width, precision, var);
	ft_printf("#0746");
	ret2 = ft_printf("|% 0+-*.*hu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0747");
	ret1 = fprintf(fppres, "|% 0+-*.*lu|\n", width, precision, var);
	ft_printf("#0747");
	ret2 = ft_printf("|% 0+-*.*lu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0748");
	ret1 = fprintf(fppres, "|% 0+-*.*llu|\n", width, precision, var);
	ft_printf("#0748");
	ret2 = ft_printf("|% 0+-*.*llu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0749");
	ret1 = fprintf(fppres, "|% 0+-*.*ju|\n", width, precision, var);
	ft_printf("#0749");
	ret2 = ft_printf("|% 0+-*.*ju|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0750");
	ret1 = fprintf(fppres, "|% 0+-*.*zu|\n", width, precision, var);
	ft_printf("#0750");
	ret2 = ft_printf("|% 0+-*.*zu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0751");
	ret1 = fprintf(fppres, "|% 0+-*.*u|\n", width, precision, var);
	ft_printf("#0751");
	ret2 = ft_printf("|% 0+-*.*u|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0752");
	ret1 = fprintf(fppres, "|% 0+-*.*x|\n", width, precision, var);
	ft_printf("#0752");
	ret2 = ft_printf("|% 0+-*.*x|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0753");
	ret1 = fprintf(fppres, "|% 0+-*.*hhx|\n", width, precision, var);
	ft_printf("#0753");
	ret2 = ft_printf("|% 0+-*.*hhx|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0754");
	ret1 = fprintf(fppres, "|% 0+-*.*hx|\n", width, precision, var);
	ft_printf("#0754");
	ret2 = ft_printf("|% 0+-*.*hx|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0755");
	ret1 = fprintf(fppres, "|% 0+-*.*lx|\n", width, precision, var);
	ft_printf("#0755");
	ret2 = ft_printf("|% 0+-*.*lx|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0756");
	ret1 = fprintf(fppres, "|% 0+-*.*llx|\n", width, precision, var);
	ft_printf("#0756");
	ret2 = ft_printf("|% 0+-*.*llx|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0757");
	ret1 = fprintf(fppres, "|% 0+-*.*jx|\n", width, precision, var);
	ft_printf("#0757");
	ret2 = ft_printf("|% 0+-*.*jx|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0758");
	ret1 = fprintf(fppres, "|% 0+-*.*zx|\n", width, precision, var);
	ft_printf("#0758");
	ret2 = ft_printf("|% 0+-*.*zx|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0759");
	ret1 = fprintf(fppres, "|% 0+-*.*x|\n", width, precision, var);
	ft_printf("#0759");
	ret2 = ft_printf("|% 0+-*.*x|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0760");
	ret1 = fprintf(fppres, "|% 0+-*.*X|\n", width, precision, var);
	ft_printf("#0760");
	ret2 = ft_printf("|% 0+-*.*X|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0761");
	ret1 = fprintf(fppres, "|% 0+-*.*hhX|\n", width, precision, var);
	ft_printf("#0761");
	ret2 = ft_printf("|% 0+-*.*hhX|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0762");
	ret1 = fprintf(fppres, "|% 0+-*.*hX|\n", width, precision, var);
	ft_printf("#0762");
	ret2 = ft_printf("|% 0+-*.*hX|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0763");
	ret1 = fprintf(fppres, "|% 0+-*.*lX|\n", width, precision, var);
	ft_printf("#0763");
	ret2 = ft_printf("|% 0+-*.*lX|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0764");
	ret1 = fprintf(fppres, "|% 0+-*.*llX|\n", width, precision, var);
	ft_printf("#0764");
	ret2 = ft_printf("|% 0+-*.*llX|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0765");
	ret1 = fprintf(fppres, "|% 0+-*.*jX|\n", width, precision, var);
	ft_printf("#0765");
	ret2 = ft_printf("|% 0+-*.*jX|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0766");
	ret1 = fprintf(fppres, "|% 0+-*.*zX|\n", width, precision, var);
	ft_printf("#0766");
	ret2 = ft_printf("|% 0+-*.*zX|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0767");
	ret1 = fprintf(fppres, "|% 0+-*.*X|\n", width, precision, var);
	ft_printf("#0767");
	ret2 = ft_printf("|% 0+-*.*X|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0768");
	ret1 = fprintf(fppres, "|%#*.*d|\n", width, precision, var);
	ft_printf("#0768");
	ret2 = ft_printf("|%#*.*d|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0769");
	ret1 = fprintf(fppres, "|%#*.*hhd|\n", width, precision, var);
	ft_printf("#0769");
	ret2 = ft_printf("|%#*.*hhd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0770");
	ret1 = fprintf(fppres, "|%#*.*hd|\n", width, precision, var);
	ft_printf("#0770");
	ret2 = ft_printf("|%#*.*hd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0771");
	ret1 = fprintf(fppres, "|%#*.*ld|\n", width, precision, var);
	ft_printf("#0771");
	ret2 = ft_printf("|%#*.*ld|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0772");
	ret1 = fprintf(fppres, "|%#*.*lld|\n", width, precision, var);
	ft_printf("#0772");
	ret2 = ft_printf("|%#*.*lld|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0773");
	ret1 = fprintf(fppres, "|%#*.*jd|\n", width, precision, var);
	ft_printf("#0773");
	ret2 = ft_printf("|%#*.*jd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0774");
	ret1 = fprintf(fppres, "|%#*.*zd|\n", width, precision, var);
	ft_printf("#0774");
	ret2 = ft_printf("|%#*.*zd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0775");
	ret1 = fprintf(fppres, "|%#*.*d|\n", width, precision, var);
	ft_printf("#0775");
	ret2 = ft_printf("|%#*.*d|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0776");
	ret1 = fprintf(fppres, "|%#*.*i|\n", width, precision, var);
	ft_printf("#0776");
	ret2 = ft_printf("|%#*.*i|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0777");
	ret1 = fprintf(fppres, "|%#*.*hhi|\n", width, precision, var);
	ft_printf("#0777");
	ret2 = ft_printf("|%#*.*hhi|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0778");
	ret1 = fprintf(fppres, "|%#*.*hi|\n", width, precision, var);
	ft_printf("#0778");
	ret2 = ft_printf("|%#*.*hi|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0779");
	ret1 = fprintf(fppres, "|%#*.*li|\n", width, precision, var);
	ft_printf("#0779");
	ret2 = ft_printf("|%#*.*li|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0780");
	ret1 = fprintf(fppres, "|%#*.*lli|\n", width, precision, var);
	ft_printf("#0780");
	ret2 = ft_printf("|%#*.*lli|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0781");
	ret1 = fprintf(fppres, "|%#*.*ji|\n", width, precision, var);
	ft_printf("#0781");
	ret2 = ft_printf("|%#*.*ji|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0782");
	ret1 = fprintf(fppres, "|%#*.*zi|\n", width, precision, var);
	ft_printf("#0782");
	ret2 = ft_printf("|%#*.*zi|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0783");
	ret1 = fprintf(fppres, "|%#*.*i|\n", width, precision, var);
	ft_printf("#0783");
	ret2 = ft_printf("|%#*.*i|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0784");
	ret1 = fprintf(fppres, "|%#*.*o|\n", width, precision, var);
	ft_printf("#0784");
	ret2 = ft_printf("|%#*.*o|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0785");
	ret1 = fprintf(fppres, "|%#*.*hho|\n", width, precision, var);
	ft_printf("#0785");
	ret2 = ft_printf("|%#*.*hho|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0786");
	ret1 = fprintf(fppres, "|%#*.*ho|\n", width, precision, var);
	ft_printf("#0786");
	ret2 = ft_printf("|%#*.*ho|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0787");
	ret1 = fprintf(fppres, "|%#*.*lo|\n", width, precision, var);
	ft_printf("#0787");
	ret2 = ft_printf("|%#*.*lo|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0788");
	ret1 = fprintf(fppres, "|%#*.*llo|\n", width, precision, var);
	ft_printf("#0788");
	ret2 = ft_printf("|%#*.*llo|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0789");
	ret1 = fprintf(fppres, "|%#*.*jo|\n", width, precision, var);
	ft_printf("#0789");
	ret2 = ft_printf("|%#*.*jo|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0790");
	ret1 = fprintf(fppres, "|%#*.*zo|\n", width, precision, var);
	ft_printf("#0790");
	ret2 = ft_printf("|%#*.*zo|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0791");
	ret1 = fprintf(fppres, "|%#*.*o|\n", width, precision, var);
	ft_printf("#0791");
	ret2 = ft_printf("|%#*.*o|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0792");
	ret1 = fprintf(fppres, "|%#*.*u|\n", width, precision, var);
	ft_printf("#0792");
	ret2 = ft_printf("|%#*.*u|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0793");
	ret1 = fprintf(fppres, "|%#*.*hhu|\n", width, precision, var);
	ft_printf("#0793");
	ret2 = ft_printf("|%#*.*hhu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0794");
	ret1 = fprintf(fppres, "|%#*.*hu|\n", width, precision, var);
	ft_printf("#0794");
	ret2 = ft_printf("|%#*.*hu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0795");
	ret1 = fprintf(fppres, "|%#*.*lu|\n", width, precision, var);
	ft_printf("#0795");
	ret2 = ft_printf("|%#*.*lu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0796");
	ret1 = fprintf(fppres, "|%#*.*llu|\n", width, precision, var);
	ft_printf("#0796");
	ret2 = ft_printf("|%#*.*llu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0797");
	ret1 = fprintf(fppres, "|%#*.*ju|\n", width, precision, var);
	ft_printf("#0797");
	ret2 = ft_printf("|%#*.*ju|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0798");
	ret1 = fprintf(fppres, "|%#*.*zu|\n", width, precision, var);
	ft_printf("#0798");
	ret2 = ft_printf("|%#*.*zu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0799");
	ret1 = fprintf(fppres, "|%#*.*u|\n", width, precision, var);
	ft_printf("#0799");
	ret2 = ft_printf("|%#*.*u|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0800");
	ret1 = fprintf(fppres, "|%#*.*x|\n", width, precision, var);
	ft_printf("#0800");
	ret2 = ft_printf("|%#*.*x|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0801");
	ret1 = fprintf(fppres, "|%#*.*hhx|\n", width, precision, var);
	ft_printf("#0801");
	ret2 = ft_printf("|%#*.*hhx|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0802");
	ret1 = fprintf(fppres, "|%#*.*hx|\n", width, precision, var);
	ft_printf("#0802");
	ret2 = ft_printf("|%#*.*hx|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0803");
	ret1 = fprintf(fppres, "|%#*.*lx|\n", width, precision, var);
	ft_printf("#0803");
	ret2 = ft_printf("|%#*.*lx|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0804");
	ret1 = fprintf(fppres, "|%#*.*llx|\n", width, precision, var);
	ft_printf("#0804");
	ret2 = ft_printf("|%#*.*llx|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0805");
	ret1 = fprintf(fppres, "|%#*.*jx|\n", width, precision, var);
	ft_printf("#0805");
	ret2 = ft_printf("|%#*.*jx|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0806");
	ret1 = fprintf(fppres, "|%#*.*zx|\n", width, precision, var);
	ft_printf("#0806");
	ret2 = ft_printf("|%#*.*zx|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0807");
	ret1 = fprintf(fppres, "|%#*.*x|\n", width, precision, var);
	ft_printf("#0807");
	ret2 = ft_printf("|%#*.*x|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0808");
	ret1 = fprintf(fppres, "|%#*.*X|\n", width, precision, var);
	ft_printf("#0808");
	ret2 = ft_printf("|%#*.*X|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0809");
	ret1 = fprintf(fppres, "|%#*.*hhX|\n", width, precision, var);
	ft_printf("#0809");
	ret2 = ft_printf("|%#*.*hhX|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0810");
	ret1 = fprintf(fppres, "|%#*.*hX|\n", width, precision, var);
	ft_printf("#0810");
	ret2 = ft_printf("|%#*.*hX|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0811");
	ret1 = fprintf(fppres, "|%#*.*lX|\n", width, precision, var);
	ft_printf("#0811");
	ret2 = ft_printf("|%#*.*lX|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0812");
	ret1 = fprintf(fppres, "|%#*.*llX|\n", width, precision, var);
	ft_printf("#0812");
	ret2 = ft_printf("|%#*.*llX|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0813");
	ret1 = fprintf(fppres, "|%#*.*jX|\n", width, precision, var);
	ft_printf("#0813");
	ret2 = ft_printf("|%#*.*jX|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0814");
	ret1 = fprintf(fppres, "|%#*.*zX|\n", width, precision, var);
	ft_printf("#0814");
	ret2 = ft_printf("|%#*.*zX|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0815");
	ret1 = fprintf(fppres, "|%#*.*X|\n", width, precision, var);
	ft_printf("#0815");
	ret2 = ft_printf("|%#*.*X|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0816");
	ret1 = fprintf(fppres, "|% #*.*d|\n", width, precision, var);
	ft_printf("#0816");
	ret2 = ft_printf("|% #*.*d|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0817");
	ret1 = fprintf(fppres, "|% #*.*hhd|\n", width, precision, var);
	ft_printf("#0817");
	ret2 = ft_printf("|% #*.*hhd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0818");
	ret1 = fprintf(fppres, "|% #*.*hd|\n", width, precision, var);
	ft_printf("#0818");
	ret2 = ft_printf("|% #*.*hd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0819");
	ret1 = fprintf(fppres, "|% #*.*ld|\n", width, precision, var);
	ft_printf("#0819");
	ret2 = ft_printf("|% #*.*ld|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0820");
	ret1 = fprintf(fppres, "|% #*.*lld|\n", width, precision, var);
	ft_printf("#0820");
	ret2 = ft_printf("|% #*.*lld|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0821");
	ret1 = fprintf(fppres, "|% #*.*jd|\n", width, precision, var);
	ft_printf("#0821");
	ret2 = ft_printf("|% #*.*jd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0822");
	ret1 = fprintf(fppres, "|% #*.*zd|\n", width, precision, var);
	ft_printf("#0822");
	ret2 = ft_printf("|% #*.*zd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0823");
	ret1 = fprintf(fppres, "|% #*.*d|\n", width, precision, var);
	ft_printf("#0823");
	ret2 = ft_printf("|% #*.*d|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0824");
	ret1 = fprintf(fppres, "|% #*.*i|\n", width, precision, var);
	ft_printf("#0824");
	ret2 = ft_printf("|% #*.*i|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0825");
	ret1 = fprintf(fppres, "|% #*.*hhi|\n", width, precision, var);
	ft_printf("#0825");
	ret2 = ft_printf("|% #*.*hhi|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0826");
	ret1 = fprintf(fppres, "|% #*.*hi|\n", width, precision, var);
	ft_printf("#0826");
	ret2 = ft_printf("|% #*.*hi|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0827");
	ret1 = fprintf(fppres, "|% #*.*li|\n", width, precision, var);
	ft_printf("#0827");
	ret2 = ft_printf("|% #*.*li|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0828");
	ret1 = fprintf(fppres, "|% #*.*lli|\n", width, precision, var);
	ft_printf("#0828");
	ret2 = ft_printf("|% #*.*lli|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0829");
	ret1 = fprintf(fppres, "|% #*.*ji|\n", width, precision, var);
	ft_printf("#0829");
	ret2 = ft_printf("|% #*.*ji|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0830");
	ret1 = fprintf(fppres, "|% #*.*zi|\n", width, precision, var);
	ft_printf("#0830");
	ret2 = ft_printf("|% #*.*zi|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0831");
	ret1 = fprintf(fppres, "|% #*.*i|\n", width, precision, var);
	ft_printf("#0831");
	ret2 = ft_printf("|% #*.*i|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0832");
	ret1 = fprintf(fppres, "|% #*.*o|\n", width, precision, var);
	ft_printf("#0832");
	ret2 = ft_printf("|% #*.*o|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0833");
	ret1 = fprintf(fppres, "|% #*.*hho|\n", width, precision, var);
	ft_printf("#0833");
	ret2 = ft_printf("|% #*.*hho|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0834");
	ret1 = fprintf(fppres, "|% #*.*ho|\n", width, precision, var);
	ft_printf("#0834");
	ret2 = ft_printf("|% #*.*ho|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0835");
	ret1 = fprintf(fppres, "|% #*.*lo|\n", width, precision, var);
	ft_printf("#0835");
	ret2 = ft_printf("|% #*.*lo|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0836");
	ret1 = fprintf(fppres, "|% #*.*llo|\n", width, precision, var);
	ft_printf("#0836");
	ret2 = ft_printf("|% #*.*llo|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0837");
	ret1 = fprintf(fppres, "|% #*.*jo|\n", width, precision, var);
	ft_printf("#0837");
	ret2 = ft_printf("|% #*.*jo|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0838");
	ret1 = fprintf(fppres, "|% #*.*zo|\n", width, precision, var);
	ft_printf("#0838");
	ret2 = ft_printf("|% #*.*zo|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0839");
	ret1 = fprintf(fppres, "|% #*.*o|\n", width, precision, var);
	ft_printf("#0839");
	ret2 = ft_printf("|% #*.*o|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0840");
	ret1 = fprintf(fppres, "|% #*.*u|\n", width, precision, var);
	ft_printf("#0840");
	ret2 = ft_printf("|% #*.*u|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0841");
	ret1 = fprintf(fppres, "|% #*.*hhu|\n", width, precision, var);
	ft_printf("#0841");
	ret2 = ft_printf("|% #*.*hhu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0842");
	ret1 = fprintf(fppres, "|% #*.*hu|\n", width, precision, var);
	ft_printf("#0842");
	ret2 = ft_printf("|% #*.*hu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0843");
	ret1 = fprintf(fppres, "|% #*.*lu|\n", width, precision, var);
	ft_printf("#0843");
	ret2 = ft_printf("|% #*.*lu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0844");
	ret1 = fprintf(fppres, "|% #*.*llu|\n", width, precision, var);
	ft_printf("#0844");
	ret2 = ft_printf("|% #*.*llu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0845");
	ret1 = fprintf(fppres, "|% #*.*ju|\n", width, precision, var);
	ft_printf("#0845");
	ret2 = ft_printf("|% #*.*ju|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0846");
	ret1 = fprintf(fppres, "|% #*.*zu|\n", width, precision, var);
	ft_printf("#0846");
	ret2 = ft_printf("|% #*.*zu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0847");
	ret1 = fprintf(fppres, "|% #*.*u|\n", width, precision, var);
	ft_printf("#0847");
	ret2 = ft_printf("|% #*.*u|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0848");
	ret1 = fprintf(fppres, "|% #*.*x|\n", width, precision, var);
	ft_printf("#0848");
	ret2 = ft_printf("|% #*.*x|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0849");
	ret1 = fprintf(fppres, "|% #*.*hhx|\n", width, precision, var);
	ft_printf("#0849");
	ret2 = ft_printf("|% #*.*hhx|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0850");
	ret1 = fprintf(fppres, "|% #*.*hx|\n", width, precision, var);
	ft_printf("#0850");
	ret2 = ft_printf("|% #*.*hx|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0851");
	ret1 = fprintf(fppres, "|% #*.*lx|\n", width, precision, var);
	ft_printf("#0851");
	ret2 = ft_printf("|% #*.*lx|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0852");
	ret1 = fprintf(fppres, "|% #*.*llx|\n", width, precision, var);
	ft_printf("#0852");
	ret2 = ft_printf("|% #*.*llx|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0853");
	ret1 = fprintf(fppres, "|% #*.*jx|\n", width, precision, var);
	ft_printf("#0853");
	ret2 = ft_printf("|% #*.*jx|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0854");
	ret1 = fprintf(fppres, "|% #*.*zx|\n", width, precision, var);
	ft_printf("#0854");
	ret2 = ft_printf("|% #*.*zx|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0855");
	ret1 = fprintf(fppres, "|% #*.*x|\n", width, precision, var);
	ft_printf("#0855");
	ret2 = ft_printf("|% #*.*x|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0856");
	ret1 = fprintf(fppres, "|% #*.*X|\n", width, precision, var);
	ft_printf("#0856");
	ret2 = ft_printf("|% #*.*X|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0857");
	ret1 = fprintf(fppres, "|% #*.*hhX|\n", width, precision, var);
	ft_printf("#0857");
	ret2 = ft_printf("|% #*.*hhX|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0858");
	ret1 = fprintf(fppres, "|% #*.*hX|\n", width, precision, var);
	ft_printf("#0858");
	ret2 = ft_printf("|% #*.*hX|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0859");
	ret1 = fprintf(fppres, "|% #*.*lX|\n", width, precision, var);
	ft_printf("#0859");
	ret2 = ft_printf("|% #*.*lX|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0860");
	ret1 = fprintf(fppres, "|% #*.*llX|\n", width, precision, var);
	ft_printf("#0860");
	ret2 = ft_printf("|% #*.*llX|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0861");
	ret1 = fprintf(fppres, "|% #*.*jX|\n", width, precision, var);
	ft_printf("#0861");
	ret2 = ft_printf("|% #*.*jX|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0862");
	ret1 = fprintf(fppres, "|% #*.*zX|\n", width, precision, var);
	ft_printf("#0862");
	ret2 = ft_printf("|% #*.*zX|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0863");
	ret1 = fprintf(fppres, "|% #*.*X|\n", width, precision, var);
	ft_printf("#0863");
	ret2 = ft_printf("|% #*.*X|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0864");
	ret1 = fprintf(fppres, "|%0#*.*d|\n", width, precision, var);
	ft_printf("#0864");
	ret2 = ft_printf("|%0#*.*d|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0865");
	ret1 = fprintf(fppres, "|%0#*.*hhd|\n", width, precision, var);
	ft_printf("#0865");
	ret2 = ft_printf("|%0#*.*hhd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0866");
	ret1 = fprintf(fppres, "|%0#*.*hd|\n", width, precision, var);
	ft_printf("#0866");
	ret2 = ft_printf("|%0#*.*hd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0867");
	ret1 = fprintf(fppres, "|%0#*.*ld|\n", width, precision, var);
	ft_printf("#0867");
	ret2 = ft_printf("|%0#*.*ld|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0868");
	ret1 = fprintf(fppres, "|%0#*.*lld|\n", width, precision, var);
	ft_printf("#0868");
	ret2 = ft_printf("|%0#*.*lld|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0869");
	ret1 = fprintf(fppres, "|%0#*.*jd|\n", width, precision, var);
	ft_printf("#0869");
	ret2 = ft_printf("|%0#*.*jd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0870");
	ret1 = fprintf(fppres, "|%0#*.*zd|\n", width, precision, var);
	ft_printf("#0870");
	ret2 = ft_printf("|%0#*.*zd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0871");
	ret1 = fprintf(fppres, "|%0#*.*d|\n", width, precision, var);
	ft_printf("#0871");
	ret2 = ft_printf("|%0#*.*d|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0872");
	ret1 = fprintf(fppres, "|%0#*.*i|\n", width, precision, var);
	ft_printf("#0872");
	ret2 = ft_printf("|%0#*.*i|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0873");
	ret1 = fprintf(fppres, "|%0#*.*hhi|\n", width, precision, var);
	ft_printf("#0873");
	ret2 = ft_printf("|%0#*.*hhi|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0874");
	ret1 = fprintf(fppres, "|%0#*.*hi|\n", width, precision, var);
	ft_printf("#0874");
	ret2 = ft_printf("|%0#*.*hi|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0875");
	ret1 = fprintf(fppres, "|%0#*.*li|\n", width, precision, var);
	ft_printf("#0875");
	ret2 = ft_printf("|%0#*.*li|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0876");
	ret1 = fprintf(fppres, "|%0#*.*lli|\n", width, precision, var);
	ft_printf("#0876");
	ret2 = ft_printf("|%0#*.*lli|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0877");
	ret1 = fprintf(fppres, "|%0#*.*ji|\n", width, precision, var);
	ft_printf("#0877");
	ret2 = ft_printf("|%0#*.*ji|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0878");
	ret1 = fprintf(fppres, "|%0#*.*zi|\n", width, precision, var);
	ft_printf("#0878");
	ret2 = ft_printf("|%0#*.*zi|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0879");
	ret1 = fprintf(fppres, "|%0#*.*i|\n", width, precision, var);
	ft_printf("#0879");
	ret2 = ft_printf("|%0#*.*i|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0880");
	ret1 = fprintf(fppres, "|%0#*.*o|\n", width, precision, var);
	ft_printf("#0880");
	ret2 = ft_printf("|%0#*.*o|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0881");
	ret1 = fprintf(fppres, "|%0#*.*hho|\n", width, precision, var);
	ft_printf("#0881");
	ret2 = ft_printf("|%0#*.*hho|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0882");
	ret1 = fprintf(fppres, "|%0#*.*ho|\n", width, precision, var);
	ft_printf("#0882");
	ret2 = ft_printf("|%0#*.*ho|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0883");
	ret1 = fprintf(fppres, "|%0#*.*lo|\n", width, precision, var);
	ft_printf("#0883");
	ret2 = ft_printf("|%0#*.*lo|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0884");
	ret1 = fprintf(fppres, "|%0#*.*llo|\n", width, precision, var);
	ft_printf("#0884");
	ret2 = ft_printf("|%0#*.*llo|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0885");
	ret1 = fprintf(fppres, "|%0#*.*jo|\n", width, precision, var);
	ft_printf("#0885");
	ret2 = ft_printf("|%0#*.*jo|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0886");
	ret1 = fprintf(fppres, "|%0#*.*zo|\n", width, precision, var);
	ft_printf("#0886");
	ret2 = ft_printf("|%0#*.*zo|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0887");
	ret1 = fprintf(fppres, "|%0#*.*o|\n", width, precision, var);
	ft_printf("#0887");
	ret2 = ft_printf("|%0#*.*o|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0888");
	ret1 = fprintf(fppres, "|%0#*.*u|\n", width, precision, var);
	ft_printf("#0888");
	ret2 = ft_printf("|%0#*.*u|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0889");
	ret1 = fprintf(fppres, "|%0#*.*hhu|\n", width, precision, var);
	ft_printf("#0889");
	ret2 = ft_printf("|%0#*.*hhu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0890");
	ret1 = fprintf(fppres, "|%0#*.*hu|\n", width, precision, var);
	ft_printf("#0890");
	ret2 = ft_printf("|%0#*.*hu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0891");
	ret1 = fprintf(fppres, "|%0#*.*lu|\n", width, precision, var);
	ft_printf("#0891");
	ret2 = ft_printf("|%0#*.*lu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0892");
	ret1 = fprintf(fppres, "|%0#*.*llu|\n", width, precision, var);
	ft_printf("#0892");
	ret2 = ft_printf("|%0#*.*llu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0893");
	ret1 = fprintf(fppres, "|%0#*.*ju|\n", width, precision, var);
	ft_printf("#0893");
	ret2 = ft_printf("|%0#*.*ju|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0894");
	ret1 = fprintf(fppres, "|%0#*.*zu|\n", width, precision, var);
	ft_printf("#0894");
	ret2 = ft_printf("|%0#*.*zu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0895");
	ret1 = fprintf(fppres, "|%0#*.*u|\n", width, precision, var);
	ft_printf("#0895");
	ret2 = ft_printf("|%0#*.*u|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0896");
	ret1 = fprintf(fppres, "|%0#*.*x|\n", width, precision, var);
	ft_printf("#0896");
	ret2 = ft_printf("|%0#*.*x|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0897");
	ret1 = fprintf(fppres, "|%0#*.*hhx|\n", width, precision, var);
	ft_printf("#0897");
	ret2 = ft_printf("|%0#*.*hhx|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0898");
	ret1 = fprintf(fppres, "|%0#*.*hx|\n", width, precision, var);
	ft_printf("#0898");
	ret2 = ft_printf("|%0#*.*hx|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0899");
	ret1 = fprintf(fppres, "|%0#*.*lx|\n", width, precision, var);
	ft_printf("#0899");
	ret2 = ft_printf("|%0#*.*lx|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0900");
	ret1 = fprintf(fppres, "|%0#*.*llx|\n", width, precision, var);
	ft_printf("#0900");
	ret2 = ft_printf("|%0#*.*llx|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0901");
	ret1 = fprintf(fppres, "|%0#*.*jx|\n", width, precision, var);
	ft_printf("#0901");
	ret2 = ft_printf("|%0#*.*jx|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0902");
	ret1 = fprintf(fppres, "|%0#*.*zx|\n", width, precision, var);
	ft_printf("#0902");
	ret2 = ft_printf("|%0#*.*zx|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0903");
	ret1 = fprintf(fppres, "|%0#*.*x|\n", width, precision, var);
	ft_printf("#0903");
	ret2 = ft_printf("|%0#*.*x|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0904");
	ret1 = fprintf(fppres, "|%0#*.*X|\n", width, precision, var);
	ft_printf("#0904");
	ret2 = ft_printf("|%0#*.*X|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0905");
	ret1 = fprintf(fppres, "|%0#*.*hhX|\n", width, precision, var);
	ft_printf("#0905");
	ret2 = ft_printf("|%0#*.*hhX|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0906");
	ret1 = fprintf(fppres, "|%0#*.*hX|\n", width, precision, var);
	ft_printf("#0906");
	ret2 = ft_printf("|%0#*.*hX|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0907");
	ret1 = fprintf(fppres, "|%0#*.*lX|\n", width, precision, var);
	ft_printf("#0907");
	ret2 = ft_printf("|%0#*.*lX|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0908");
	ret1 = fprintf(fppres, "|%0#*.*llX|\n", width, precision, var);
	ft_printf("#0908");
	ret2 = ft_printf("|%0#*.*llX|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0909");
	ret1 = fprintf(fppres, "|%0#*.*jX|\n", width, precision, var);
	ft_printf("#0909");
	ret2 = ft_printf("|%0#*.*jX|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0910");
	ret1 = fprintf(fppres, "|%0#*.*zX|\n", width, precision, var);
	ft_printf("#0910");
	ret2 = ft_printf("|%0#*.*zX|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0911");
	ret1 = fprintf(fppres, "|%0#*.*X|\n", width, precision, var);
	ft_printf("#0911");
	ret2 = ft_printf("|%0#*.*X|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0912");
	ret1 = fprintf(fppres, "|% 0#*.*d|\n", width, precision, var);
	ft_printf("#0912");
	ret2 = ft_printf("|% 0#*.*d|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0913");
	ret1 = fprintf(fppres, "|% 0#*.*hhd|\n", width, precision, var);
	ft_printf("#0913");
	ret2 = ft_printf("|% 0#*.*hhd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0914");
	ret1 = fprintf(fppres, "|% 0#*.*hd|\n", width, precision, var);
	ft_printf("#0914");
	ret2 = ft_printf("|% 0#*.*hd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0915");
	ret1 = fprintf(fppres, "|% 0#*.*ld|\n", width, precision, var);
	ft_printf("#0915");
	ret2 = ft_printf("|% 0#*.*ld|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0916");
	ret1 = fprintf(fppres, "|% 0#*.*lld|\n", width, precision, var);
	ft_printf("#0916");
	ret2 = ft_printf("|% 0#*.*lld|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0917");
	ret1 = fprintf(fppres, "|% 0#*.*jd|\n", width, precision, var);
	ft_printf("#0917");
	ret2 = ft_printf("|% 0#*.*jd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0918");
	ret1 = fprintf(fppres, "|% 0#*.*zd|\n", width, precision, var);
	ft_printf("#0918");
	ret2 = ft_printf("|% 0#*.*zd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0919");
	ret1 = fprintf(fppres, "|% 0#*.*d|\n", width, precision, var);
	ft_printf("#0919");
	ret2 = ft_printf("|% 0#*.*d|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0920");
	ret1 = fprintf(fppres, "|% 0#*.*i|\n", width, precision, var);
	ft_printf("#0920");
	ret2 = ft_printf("|% 0#*.*i|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0921");
	ret1 = fprintf(fppres, "|% 0#*.*hhi|\n", width, precision, var);
	ft_printf("#0921");
	ret2 = ft_printf("|% 0#*.*hhi|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0922");
	ret1 = fprintf(fppres, "|% 0#*.*hi|\n", width, precision, var);
	ft_printf("#0922");
	ret2 = ft_printf("|% 0#*.*hi|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0923");
	ret1 = fprintf(fppres, "|% 0#*.*li|\n", width, precision, var);
	ft_printf("#0923");
	ret2 = ft_printf("|% 0#*.*li|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0924");
	ret1 = fprintf(fppres, "|% 0#*.*lli|\n", width, precision, var);
	ft_printf("#0924");
	ret2 = ft_printf("|% 0#*.*lli|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0925");
	ret1 = fprintf(fppres, "|% 0#*.*ji|\n", width, precision, var);
	ft_printf("#0925");
	ret2 = ft_printf("|% 0#*.*ji|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0926");
	ret1 = fprintf(fppres, "|% 0#*.*zi|\n", width, precision, var);
	ft_printf("#0926");
	ret2 = ft_printf("|% 0#*.*zi|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0927");
	ret1 = fprintf(fppres, "|% 0#*.*i|\n", width, precision, var);
	ft_printf("#0927");
	ret2 = ft_printf("|% 0#*.*i|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0928");
	ret1 = fprintf(fppres, "|% 0#*.*o|\n", width, precision, var);
	ft_printf("#0928");
	ret2 = ft_printf("|% 0#*.*o|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0929");
	ret1 = fprintf(fppres, "|% 0#*.*hho|\n", width, precision, var);
	ft_printf("#0929");
	ret2 = ft_printf("|% 0#*.*hho|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0930");
	ret1 = fprintf(fppres, "|% 0#*.*ho|\n", width, precision, var);
	ft_printf("#0930");
	ret2 = ft_printf("|% 0#*.*ho|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0931");
	ret1 = fprintf(fppres, "|% 0#*.*lo|\n", width, precision, var);
	ft_printf("#0931");
	ret2 = ft_printf("|% 0#*.*lo|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0932");
	ret1 = fprintf(fppres, "|% 0#*.*llo|\n", width, precision, var);
	ft_printf("#0932");
	ret2 = ft_printf("|% 0#*.*llo|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0933");
	ret1 = fprintf(fppres, "|% 0#*.*jo|\n", width, precision, var);
	ft_printf("#0933");
	ret2 = ft_printf("|% 0#*.*jo|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0934");
	ret1 = fprintf(fppres, "|% 0#*.*zo|\n", width, precision, var);
	ft_printf("#0934");
	ret2 = ft_printf("|% 0#*.*zo|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0935");
	ret1 = fprintf(fppres, "|% 0#*.*o|\n", width, precision, var);
	ft_printf("#0935");
	ret2 = ft_printf("|% 0#*.*o|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0936");
	ret1 = fprintf(fppres, "|% 0#*.*u|\n", width, precision, var);
	ft_printf("#0936");
	ret2 = ft_printf("|% 0#*.*u|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0937");
	ret1 = fprintf(fppres, "|% 0#*.*hhu|\n", width, precision, var);
	ft_printf("#0937");
	ret2 = ft_printf("|% 0#*.*hhu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0938");
	ret1 = fprintf(fppres, "|% 0#*.*hu|\n", width, precision, var);
	ft_printf("#0938");
	ret2 = ft_printf("|% 0#*.*hu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0939");
	ret1 = fprintf(fppres, "|% 0#*.*lu|\n", width, precision, var);
	ft_printf("#0939");
	ret2 = ft_printf("|% 0#*.*lu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0940");
	ret1 = fprintf(fppres, "|% 0#*.*llu|\n", width, precision, var);
	ft_printf("#0940");
	ret2 = ft_printf("|% 0#*.*llu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0941");
	ret1 = fprintf(fppres, "|% 0#*.*ju|\n", width, precision, var);
	ft_printf("#0941");
	ret2 = ft_printf("|% 0#*.*ju|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0942");
	ret1 = fprintf(fppres, "|% 0#*.*zu|\n", width, precision, var);
	ft_printf("#0942");
	ret2 = ft_printf("|% 0#*.*zu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0943");
	ret1 = fprintf(fppres, "|% 0#*.*u|\n", width, precision, var);
	ft_printf("#0943");
	ret2 = ft_printf("|% 0#*.*u|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0944");
	ret1 = fprintf(fppres, "|% 0#*.*x|\n", width, precision, var);
	ft_printf("#0944");
	ret2 = ft_printf("|% 0#*.*x|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0945");
	ret1 = fprintf(fppres, "|% 0#*.*hhx|\n", width, precision, var);
	ft_printf("#0945");
	ret2 = ft_printf("|% 0#*.*hhx|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0946");
	ret1 = fprintf(fppres, "|% 0#*.*hx|\n", width, precision, var);
	ft_printf("#0946");
	ret2 = ft_printf("|% 0#*.*hx|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0947");
	ret1 = fprintf(fppres, "|% 0#*.*lx|\n", width, precision, var);
	ft_printf("#0947");
	ret2 = ft_printf("|% 0#*.*lx|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0948");
	ret1 = fprintf(fppres, "|% 0#*.*llx|\n", width, precision, var);
	ft_printf("#0948");
	ret2 = ft_printf("|% 0#*.*llx|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0949");
	ret1 = fprintf(fppres, "|% 0#*.*jx|\n", width, precision, var);
	ft_printf("#0949");
	ret2 = ft_printf("|% 0#*.*jx|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0950");
	ret1 = fprintf(fppres, "|% 0#*.*zx|\n", width, precision, var);
	ft_printf("#0950");
	ret2 = ft_printf("|% 0#*.*zx|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0951");
	ret1 = fprintf(fppres, "|% 0#*.*x|\n", width, precision, var);
	ft_printf("#0951");
	ret2 = ft_printf("|% 0#*.*x|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0952");
	ret1 = fprintf(fppres, "|% 0#*.*X|\n", width, precision, var);
	ft_printf("#0952");
	ret2 = ft_printf("|% 0#*.*X|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0953");
	ret1 = fprintf(fppres, "|% 0#*.*hhX|\n", width, precision, var);
	ft_printf("#0953");
	ret2 = ft_printf("|% 0#*.*hhX|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0954");
	ret1 = fprintf(fppres, "|% 0#*.*hX|\n", width, precision, var);
	ft_printf("#0954");
	ret2 = ft_printf("|% 0#*.*hX|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0955");
	ret1 = fprintf(fppres, "|% 0#*.*lX|\n", width, precision, var);
	ft_printf("#0955");
	ret2 = ft_printf("|% 0#*.*lX|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0956");
	ret1 = fprintf(fppres, "|% 0#*.*llX|\n", width, precision, var);
	ft_printf("#0956");
	ret2 = ft_printf("|% 0#*.*llX|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0957");
	ret1 = fprintf(fppres, "|% 0#*.*jX|\n", width, precision, var);
	ft_printf("#0957");
	ret2 = ft_printf("|% 0#*.*jX|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0958");
	ret1 = fprintf(fppres, "|% 0#*.*zX|\n", width, precision, var);
	ft_printf("#0958");
	ret2 = ft_printf("|% 0#*.*zX|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0959");
	ret1 = fprintf(fppres, "|% 0#*.*X|\n", width, precision, var);
	ft_printf("#0959");
	ret2 = ft_printf("|% 0#*.*X|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0960");
	ret1 = fprintf(fppres, "|%+#*.*d|\n", width, precision, var);
	ft_printf("#0960");
	ret2 = ft_printf("|%+#*.*d|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0961");
	ret1 = fprintf(fppres, "|%+#*.*hhd|\n", width, precision, var);
	ft_printf("#0961");
	ret2 = ft_printf("|%+#*.*hhd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0962");
	ret1 = fprintf(fppres, "|%+#*.*hd|\n", width, precision, var);
	ft_printf("#0962");
	ret2 = ft_printf("|%+#*.*hd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0963");
	ret1 = fprintf(fppres, "|%+#*.*ld|\n", width, precision, var);
	ft_printf("#0963");
	ret2 = ft_printf("|%+#*.*ld|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0964");
	ret1 = fprintf(fppres, "|%+#*.*lld|\n", width, precision, var);
	ft_printf("#0964");
	ret2 = ft_printf("|%+#*.*lld|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0965");
	ret1 = fprintf(fppres, "|%+#*.*jd|\n", width, precision, var);
	ft_printf("#0965");
	ret2 = ft_printf("|%+#*.*jd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0966");
	ret1 = fprintf(fppres, "|%+#*.*zd|\n", width, precision, var);
	ft_printf("#0966");
	ret2 = ft_printf("|%+#*.*zd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0967");
	ret1 = fprintf(fppres, "|%+#*.*d|\n", width, precision, var);
	ft_printf("#0967");
	ret2 = ft_printf("|%+#*.*d|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0968");
	ret1 = fprintf(fppres, "|%+#*.*i|\n", width, precision, var);
	ft_printf("#0968");
	ret2 = ft_printf("|%+#*.*i|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0969");
	ret1 = fprintf(fppres, "|%+#*.*hhi|\n", width, precision, var);
	ft_printf("#0969");
	ret2 = ft_printf("|%+#*.*hhi|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0970");
	ret1 = fprintf(fppres, "|%+#*.*hi|\n", width, precision, var);
	ft_printf("#0970");
	ret2 = ft_printf("|%+#*.*hi|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0971");
	ret1 = fprintf(fppres, "|%+#*.*li|\n", width, precision, var);
	ft_printf("#0971");
	ret2 = ft_printf("|%+#*.*li|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0972");
	ret1 = fprintf(fppres, "|%+#*.*lli|\n", width, precision, var);
	ft_printf("#0972");
	ret2 = ft_printf("|%+#*.*lli|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0973");
	ret1 = fprintf(fppres, "|%+#*.*ji|\n", width, precision, var);
	ft_printf("#0973");
	ret2 = ft_printf("|%+#*.*ji|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0974");
	ret1 = fprintf(fppres, "|%+#*.*zi|\n", width, precision, var);
	ft_printf("#0974");
	ret2 = ft_printf("|%+#*.*zi|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0975");
	ret1 = fprintf(fppres, "|%+#*.*i|\n", width, precision, var);
	ft_printf("#0975");
	ret2 = ft_printf("|%+#*.*i|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0976");
	ret1 = fprintf(fppres, "|%+#*.*o|\n", width, precision, var);
	ft_printf("#0976");
	ret2 = ft_printf("|%+#*.*o|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0977");
	ret1 = fprintf(fppres, "|%+#*.*hho|\n", width, precision, var);
	ft_printf("#0977");
	ret2 = ft_printf("|%+#*.*hho|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0978");
	ret1 = fprintf(fppres, "|%+#*.*ho|\n", width, precision, var);
	ft_printf("#0978");
	ret2 = ft_printf("|%+#*.*ho|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0979");
	ret1 = fprintf(fppres, "|%+#*.*lo|\n", width, precision, var);
	ft_printf("#0979");
	ret2 = ft_printf("|%+#*.*lo|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0980");
	ret1 = fprintf(fppres, "|%+#*.*llo|\n", width, precision, var);
	ft_printf("#0980");
	ret2 = ft_printf("|%+#*.*llo|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0981");
	ret1 = fprintf(fppres, "|%+#*.*jo|\n", width, precision, var);
	ft_printf("#0981");
	ret2 = ft_printf("|%+#*.*jo|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0982");
	ret1 = fprintf(fppres, "|%+#*.*zo|\n", width, precision, var);
	ft_printf("#0982");
	ret2 = ft_printf("|%+#*.*zo|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0983");
	ret1 = fprintf(fppres, "|%+#*.*o|\n", width, precision, var);
	ft_printf("#0983");
	ret2 = ft_printf("|%+#*.*o|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0984");
	ret1 = fprintf(fppres, "|%+#*.*u|\n", width, precision, var);
	ft_printf("#0984");
	ret2 = ft_printf("|%+#*.*u|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0985");
	ret1 = fprintf(fppres, "|%+#*.*hhu|\n", width, precision, var);
	ft_printf("#0985");
	ret2 = ft_printf("|%+#*.*hhu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0986");
	ret1 = fprintf(fppres, "|%+#*.*hu|\n", width, precision, var);
	ft_printf("#0986");
	ret2 = ft_printf("|%+#*.*hu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0987");
	ret1 = fprintf(fppres, "|%+#*.*lu|\n", width, precision, var);
	ft_printf("#0987");
	ret2 = ft_printf("|%+#*.*lu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0988");
	ret1 = fprintf(fppres, "|%+#*.*llu|\n", width, precision, var);
	ft_printf("#0988");
	ret2 = ft_printf("|%+#*.*llu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0989");
	ret1 = fprintf(fppres, "|%+#*.*ju|\n", width, precision, var);
	ft_printf("#0989");
	ret2 = ft_printf("|%+#*.*ju|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0990");
	ret1 = fprintf(fppres, "|%+#*.*zu|\n", width, precision, var);
	ft_printf("#0990");
	ret2 = ft_printf("|%+#*.*zu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0991");
	ret1 = fprintf(fppres, "|%+#*.*u|\n", width, precision, var);
	ft_printf("#0991");
	ret2 = ft_printf("|%+#*.*u|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0992");
	ret1 = fprintf(fppres, "|%+#*.*x|\n", width, precision, var);
	ft_printf("#0992");
	ret2 = ft_printf("|%+#*.*x|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0993");
	ret1 = fprintf(fppres, "|%+#*.*hhx|\n", width, precision, var);
	ft_printf("#0993");
	ret2 = ft_printf("|%+#*.*hhx|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0994");
	ret1 = fprintf(fppres, "|%+#*.*hx|\n", width, precision, var);
	ft_printf("#0994");
	ret2 = ft_printf("|%+#*.*hx|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0995");
	ret1 = fprintf(fppres, "|%+#*.*lx|\n", width, precision, var);
	ft_printf("#0995");
	ret2 = ft_printf("|%+#*.*lx|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0996");
	ret1 = fprintf(fppres, "|%+#*.*llx|\n", width, precision, var);
	ft_printf("#0996");
	ret2 = ft_printf("|%+#*.*llx|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0997");
	ret1 = fprintf(fppres, "|%+#*.*jx|\n", width, precision, var);
	ft_printf("#0997");
	ret2 = ft_printf("|%+#*.*jx|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0998");
	ret1 = fprintf(fppres, "|%+#*.*zx|\n", width, precision, var);
	ft_printf("#0998");
	ret2 = ft_printf("|%+#*.*zx|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0999");
	ret1 = fprintf(fppres, "|%+#*.*x|\n", width, precision, var);
	ft_printf("#0999");
	ret2 = ft_printf("|%+#*.*x|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1000");
	ret1 = fprintf(fppres, "|%+#*.*X|\n", width, precision, var);
	ft_printf("#1000");
	ret2 = ft_printf("|%+#*.*X|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1001");
	ret1 = fprintf(fppres, "|%+#*.*hhX|\n", width, precision, var);
	ft_printf("#1001");
	ret2 = ft_printf("|%+#*.*hhX|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1002");
	ret1 = fprintf(fppres, "|%+#*.*hX|\n", width, precision, var);
	ft_printf("#1002");
	ret2 = ft_printf("|%+#*.*hX|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1003");
	ret1 = fprintf(fppres, "|%+#*.*lX|\n", width, precision, var);
	ft_printf("#1003");
	ret2 = ft_printf("|%+#*.*lX|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1004");
	ret1 = fprintf(fppres, "|%+#*.*llX|\n", width, precision, var);
	ft_printf("#1004");
	ret2 = ft_printf("|%+#*.*llX|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1005");
	ret1 = fprintf(fppres, "|%+#*.*jX|\n", width, precision, var);
	ft_printf("#1005");
	ret2 = ft_printf("|%+#*.*jX|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1006");
	ret1 = fprintf(fppres, "|%+#*.*zX|\n", width, precision, var);
	ft_printf("#1006");
	ret2 = ft_printf("|%+#*.*zX|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1007");
	ret1 = fprintf(fppres, "|%+#*.*X|\n", width, precision, var);
	ft_printf("#1007");
	ret2 = ft_printf("|%+#*.*X|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1008");
	ret1 = fprintf(fppres, "|% +#*.*d|\n", width, precision, var);
	ft_printf("#1008");
	ret2 = ft_printf("|% +#*.*d|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1009");
	ret1 = fprintf(fppres, "|% +#*.*hhd|\n", width, precision, var);
	ft_printf("#1009");
	ret2 = ft_printf("|% +#*.*hhd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1010");
	ret1 = fprintf(fppres, "|% +#*.*hd|\n", width, precision, var);
	ft_printf("#1010");
	ret2 = ft_printf("|% +#*.*hd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1011");
	ret1 = fprintf(fppres, "|% +#*.*ld|\n", width, precision, var);
	ft_printf("#1011");
	ret2 = ft_printf("|% +#*.*ld|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1012");
	ret1 = fprintf(fppres, "|% +#*.*lld|\n", width, precision, var);
	ft_printf("#1012");
	ret2 = ft_printf("|% +#*.*lld|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1013");
	ret1 = fprintf(fppres, "|% +#*.*jd|\n", width, precision, var);
	ft_printf("#1013");
	ret2 = ft_printf("|% +#*.*jd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1014");
	ret1 = fprintf(fppres, "|% +#*.*zd|\n", width, precision, var);
	ft_printf("#1014");
	ret2 = ft_printf("|% +#*.*zd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1015");
	ret1 = fprintf(fppres, "|% +#*.*d|\n", width, precision, var);
	ft_printf("#1015");
	ret2 = ft_printf("|% +#*.*d|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1016");
	ret1 = fprintf(fppres, "|% +#*.*i|\n", width, precision, var);
	ft_printf("#1016");
	ret2 = ft_printf("|% +#*.*i|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1017");
	ret1 = fprintf(fppres, "|% +#*.*hhi|\n", width, precision, var);
	ft_printf("#1017");
	ret2 = ft_printf("|% +#*.*hhi|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1018");
	ret1 = fprintf(fppres, "|% +#*.*hi|\n", width, precision, var);
	ft_printf("#1018");
	ret2 = ft_printf("|% +#*.*hi|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1019");
	ret1 = fprintf(fppres, "|% +#*.*li|\n", width, precision, var);
	ft_printf("#1019");
	ret2 = ft_printf("|% +#*.*li|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1020");
	ret1 = fprintf(fppres, "|% +#*.*lli|\n", width, precision, var);
	ft_printf("#1020");
	ret2 = ft_printf("|% +#*.*lli|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1021");
	ret1 = fprintf(fppres, "|% +#*.*ji|\n", width, precision, var);
	ft_printf("#1021");
	ret2 = ft_printf("|% +#*.*ji|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1022");
	ret1 = fprintf(fppres, "|% +#*.*zi|\n", width, precision, var);
	ft_printf("#1022");
	ret2 = ft_printf("|% +#*.*zi|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1023");
	ret1 = fprintf(fppres, "|% +#*.*i|\n", width, precision, var);
	ft_printf("#1023");
	ret2 = ft_printf("|% +#*.*i|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1024");
	ret1 = fprintf(fppres, "|% +#*.*o|\n", width, precision, var);
	ft_printf("#1024");
	ret2 = ft_printf("|% +#*.*o|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1025");
	ret1 = fprintf(fppres, "|% +#*.*hho|\n", width, precision, var);
	ft_printf("#1025");
	ret2 = ft_printf("|% +#*.*hho|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1026");
	ret1 = fprintf(fppres, "|% +#*.*ho|\n", width, precision, var);
	ft_printf("#1026");
	ret2 = ft_printf("|% +#*.*ho|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1027");
	ret1 = fprintf(fppres, "|% +#*.*lo|\n", width, precision, var);
	ft_printf("#1027");
	ret2 = ft_printf("|% +#*.*lo|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1028");
	ret1 = fprintf(fppres, "|% +#*.*llo|\n", width, precision, var);
	ft_printf("#1028");
	ret2 = ft_printf("|% +#*.*llo|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1029");
	ret1 = fprintf(fppres, "|% +#*.*jo|\n", width, precision, var);
	ft_printf("#1029");
	ret2 = ft_printf("|% +#*.*jo|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1030");
	ret1 = fprintf(fppres, "|% +#*.*zo|\n", width, precision, var);
	ft_printf("#1030");
	ret2 = ft_printf("|% +#*.*zo|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1031");
	ret1 = fprintf(fppres, "|% +#*.*o|\n", width, precision, var);
	ft_printf("#1031");
	ret2 = ft_printf("|% +#*.*o|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1032");
	ret1 = fprintf(fppres, "|% +#*.*u|\n", width, precision, var);
	ft_printf("#1032");
	ret2 = ft_printf("|% +#*.*u|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1033");
	ret1 = fprintf(fppres, "|% +#*.*hhu|\n", width, precision, var);
	ft_printf("#1033");
	ret2 = ft_printf("|% +#*.*hhu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1034");
	ret1 = fprintf(fppres, "|% +#*.*hu|\n", width, precision, var);
	ft_printf("#1034");
	ret2 = ft_printf("|% +#*.*hu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1035");
	ret1 = fprintf(fppres, "|% +#*.*lu|\n", width, precision, var);
	ft_printf("#1035");
	ret2 = ft_printf("|% +#*.*lu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1036");
	ret1 = fprintf(fppres, "|% +#*.*llu|\n", width, precision, var);
	ft_printf("#1036");
	ret2 = ft_printf("|% +#*.*llu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1037");
	ret1 = fprintf(fppres, "|% +#*.*ju|\n", width, precision, var);
	ft_printf("#1037");
	ret2 = ft_printf("|% +#*.*ju|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1038");
	ret1 = fprintf(fppres, "|% +#*.*zu|\n", width, precision, var);
	ft_printf("#1038");
	ret2 = ft_printf("|% +#*.*zu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1039");
	ret1 = fprintf(fppres, "|% +#*.*u|\n", width, precision, var);
	ft_printf("#1039");
	ret2 = ft_printf("|% +#*.*u|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1040");
	ret1 = fprintf(fppres, "|% +#*.*x|\n", width, precision, var);
	ft_printf("#1040");
	ret2 = ft_printf("|% +#*.*x|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1041");
	ret1 = fprintf(fppres, "|% +#*.*hhx|\n", width, precision, var);
	ft_printf("#1041");
	ret2 = ft_printf("|% +#*.*hhx|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1042");
	ret1 = fprintf(fppres, "|% +#*.*hx|\n", width, precision, var);
	ft_printf("#1042");
	ret2 = ft_printf("|% +#*.*hx|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1043");
	ret1 = fprintf(fppres, "|% +#*.*lx|\n", width, precision, var);
	ft_printf("#1043");
	ret2 = ft_printf("|% +#*.*lx|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1044");
	ret1 = fprintf(fppres, "|% +#*.*llx|\n", width, precision, var);
	ft_printf("#1044");
	ret2 = ft_printf("|% +#*.*llx|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1045");
	ret1 = fprintf(fppres, "|% +#*.*jx|\n", width, precision, var);
	ft_printf("#1045");
	ret2 = ft_printf("|% +#*.*jx|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1046");
	ret1 = fprintf(fppres, "|% +#*.*zx|\n", width, precision, var);
	ft_printf("#1046");
	ret2 = ft_printf("|% +#*.*zx|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1047");
	ret1 = fprintf(fppres, "|% +#*.*x|\n", width, precision, var);
	ft_printf("#1047");
	ret2 = ft_printf("|% +#*.*x|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1048");
	ret1 = fprintf(fppres, "|% +#*.*X|\n", width, precision, var);
	ft_printf("#1048");
	ret2 = ft_printf("|% +#*.*X|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1049");
	ret1 = fprintf(fppres, "|% +#*.*hhX|\n", width, precision, var);
	ft_printf("#1049");
	ret2 = ft_printf("|% +#*.*hhX|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1050");
	ret1 = fprintf(fppres, "|% +#*.*hX|\n", width, precision, var);
	ft_printf("#1050");
	ret2 = ft_printf("|% +#*.*hX|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1051");
	ret1 = fprintf(fppres, "|% +#*.*lX|\n", width, precision, var);
	ft_printf("#1051");
	ret2 = ft_printf("|% +#*.*lX|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1052");
	ret1 = fprintf(fppres, "|% +#*.*llX|\n", width, precision, var);
	ft_printf("#1052");
	ret2 = ft_printf("|% +#*.*llX|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1053");
	ret1 = fprintf(fppres, "|% +#*.*jX|\n", width, precision, var);
	ft_printf("#1053");
	ret2 = ft_printf("|% +#*.*jX|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1054");
	ret1 = fprintf(fppres, "|% +#*.*zX|\n", width, precision, var);
	ft_printf("#1054");
	ret2 = ft_printf("|% +#*.*zX|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1055");
	ret1 = fprintf(fppres, "|% +#*.*X|\n", width, precision, var);
	ft_printf("#1055");
	ret2 = ft_printf("|% +#*.*X|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1056");
	ret1 = fprintf(fppres, "|%0+#*.*d|\n", width, precision, var);
	ft_printf("#1056");
	ret2 = ft_printf("|%0+#*.*d|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1057");
	ret1 = fprintf(fppres, "|%0+#*.*hhd|\n", width, precision, var);
	ft_printf("#1057");
	ret2 = ft_printf("|%0+#*.*hhd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1058");
	ret1 = fprintf(fppres, "|%0+#*.*hd|\n", width, precision, var);
	ft_printf("#1058");
	ret2 = ft_printf("|%0+#*.*hd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1059");
	ret1 = fprintf(fppres, "|%0+#*.*ld|\n", width, precision, var);
	ft_printf("#1059");
	ret2 = ft_printf("|%0+#*.*ld|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1060");
	ret1 = fprintf(fppres, "|%0+#*.*lld|\n", width, precision, var);
	ft_printf("#1060");
	ret2 = ft_printf("|%0+#*.*lld|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1061");
	ret1 = fprintf(fppres, "|%0+#*.*jd|\n", width, precision, var);
	ft_printf("#1061");
	ret2 = ft_printf("|%0+#*.*jd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1062");
	ret1 = fprintf(fppres, "|%0+#*.*zd|\n", width, precision, var);
	ft_printf("#1062");
	ret2 = ft_printf("|%0+#*.*zd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1063");
	ret1 = fprintf(fppres, "|%0+#*.*d|\n", width, precision, var);
	ft_printf("#1063");
	ret2 = ft_printf("|%0+#*.*d|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1064");
	ret1 = fprintf(fppres, "|%0+#*.*i|\n", width, precision, var);
	ft_printf("#1064");
	ret2 = ft_printf("|%0+#*.*i|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1065");
	ret1 = fprintf(fppres, "|%0+#*.*hhi|\n", width, precision, var);
	ft_printf("#1065");
	ret2 = ft_printf("|%0+#*.*hhi|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1066");
	ret1 = fprintf(fppres, "|%0+#*.*hi|\n", width, precision, var);
	ft_printf("#1066");
	ret2 = ft_printf("|%0+#*.*hi|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1067");
	ret1 = fprintf(fppres, "|%0+#*.*li|\n", width, precision, var);
	ft_printf("#1067");
	ret2 = ft_printf("|%0+#*.*li|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1068");
	ret1 = fprintf(fppres, "|%0+#*.*lli|\n", width, precision, var);
	ft_printf("#1068");
	ret2 = ft_printf("|%0+#*.*lli|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1069");
	ret1 = fprintf(fppres, "|%0+#*.*ji|\n", width, precision, var);
	ft_printf("#1069");
	ret2 = ft_printf("|%0+#*.*ji|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1070");
	ret1 = fprintf(fppres, "|%0+#*.*zi|\n", width, precision, var);
	ft_printf("#1070");
	ret2 = ft_printf("|%0+#*.*zi|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1071");
	ret1 = fprintf(fppres, "|%0+#*.*i|\n", width, precision, var);
	ft_printf("#1071");
	ret2 = ft_printf("|%0+#*.*i|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1072");
	ret1 = fprintf(fppres, "|%0+#*.*o|\n", width, precision, var);
	ft_printf("#1072");
	ret2 = ft_printf("|%0+#*.*o|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1073");
	ret1 = fprintf(fppres, "|%0+#*.*hho|\n", width, precision, var);
	ft_printf("#1073");
	ret2 = ft_printf("|%0+#*.*hho|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1074");
	ret1 = fprintf(fppres, "|%0+#*.*ho|\n", width, precision, var);
	ft_printf("#1074");
	ret2 = ft_printf("|%0+#*.*ho|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1075");
	ret1 = fprintf(fppres, "|%0+#*.*lo|\n", width, precision, var);
	ft_printf("#1075");
	ret2 = ft_printf("|%0+#*.*lo|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1076");
	ret1 = fprintf(fppres, "|%0+#*.*llo|\n", width, precision, var);
	ft_printf("#1076");
	ret2 = ft_printf("|%0+#*.*llo|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1077");
	ret1 = fprintf(fppres, "|%0+#*.*jo|\n", width, precision, var);
	ft_printf("#1077");
	ret2 = ft_printf("|%0+#*.*jo|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1078");
	ret1 = fprintf(fppres, "|%0+#*.*zo|\n", width, precision, var);
	ft_printf("#1078");
	ret2 = ft_printf("|%0+#*.*zo|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1079");
	ret1 = fprintf(fppres, "|%0+#*.*o|\n", width, precision, var);
	ft_printf("#1079");
	ret2 = ft_printf("|%0+#*.*o|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1080");
	ret1 = fprintf(fppres, "|%0+#*.*u|\n", width, precision, var);
	ft_printf("#1080");
	ret2 = ft_printf("|%0+#*.*u|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1081");
	ret1 = fprintf(fppres, "|%0+#*.*hhu|\n", width, precision, var);
	ft_printf("#1081");
	ret2 = ft_printf("|%0+#*.*hhu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1082");
	ret1 = fprintf(fppres, "|%0+#*.*hu|\n", width, precision, var);
	ft_printf("#1082");
	ret2 = ft_printf("|%0+#*.*hu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1083");
	ret1 = fprintf(fppres, "|%0+#*.*lu|\n", width, precision, var);
	ft_printf("#1083");
	ret2 = ft_printf("|%0+#*.*lu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1084");
	ret1 = fprintf(fppres, "|%0+#*.*llu|\n", width, precision, var);
	ft_printf("#1084");
	ret2 = ft_printf("|%0+#*.*llu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1085");
	ret1 = fprintf(fppres, "|%0+#*.*ju|\n", width, precision, var);
	ft_printf("#1085");
	ret2 = ft_printf("|%0+#*.*ju|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1086");
	ret1 = fprintf(fppres, "|%0+#*.*zu|\n", width, precision, var);
	ft_printf("#1086");
	ret2 = ft_printf("|%0+#*.*zu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1087");
	ret1 = fprintf(fppres, "|%0+#*.*u|\n", width, precision, var);
	ft_printf("#1087");
	ret2 = ft_printf("|%0+#*.*u|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1088");
	ret1 = fprintf(fppres, "|%0+#*.*x|\n", width, precision, var);
	ft_printf("#1088");
	ret2 = ft_printf("|%0+#*.*x|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1089");
	ret1 = fprintf(fppres, "|%0+#*.*hhx|\n", width, precision, var);
	ft_printf("#1089");
	ret2 = ft_printf("|%0+#*.*hhx|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1090");
	ret1 = fprintf(fppres, "|%0+#*.*hx|\n", width, precision, var);
	ft_printf("#1090");
	ret2 = ft_printf("|%0+#*.*hx|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1091");
	ret1 = fprintf(fppres, "|%0+#*.*lx|\n", width, precision, var);
	ft_printf("#1091");
	ret2 = ft_printf("|%0+#*.*lx|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1092");
	ret1 = fprintf(fppres, "|%0+#*.*llx|\n", width, precision, var);
	ft_printf("#1092");
	ret2 = ft_printf("|%0+#*.*llx|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1093");
	ret1 = fprintf(fppres, "|%0+#*.*jx|\n", width, precision, var);
	ft_printf("#1093");
	ret2 = ft_printf("|%0+#*.*jx|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1094");
	ret1 = fprintf(fppres, "|%0+#*.*zx|\n", width, precision, var);
	ft_printf("#1094");
	ret2 = ft_printf("|%0+#*.*zx|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1095");
	ret1 = fprintf(fppres, "|%0+#*.*x|\n", width, precision, var);
	ft_printf("#1095");
	ret2 = ft_printf("|%0+#*.*x|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1096");
	ret1 = fprintf(fppres, "|%0+#*.*X|\n", width, precision, var);
	ft_printf("#1096");
	ret2 = ft_printf("|%0+#*.*X|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1097");
	ret1 = fprintf(fppres, "|%0+#*.*hhX|\n", width, precision, var);
	ft_printf("#1097");
	ret2 = ft_printf("|%0+#*.*hhX|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1098");
	ret1 = fprintf(fppres, "|%0+#*.*hX|\n", width, precision, var);
	ft_printf("#1098");
	ret2 = ft_printf("|%0+#*.*hX|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1099");
	ret1 = fprintf(fppres, "|%0+#*.*lX|\n", width, precision, var);
	ft_printf("#1099");
	ret2 = ft_printf("|%0+#*.*lX|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1100");
	ret1 = fprintf(fppres, "|%0+#*.*llX|\n", width, precision, var);
	ft_printf("#1100");
	ret2 = ft_printf("|%0+#*.*llX|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1101");
	ret1 = fprintf(fppres, "|%0+#*.*jX|\n", width, precision, var);
	ft_printf("#1101");
	ret2 = ft_printf("|%0+#*.*jX|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1102");
	ret1 = fprintf(fppres, "|%0+#*.*zX|\n", width, precision, var);
	ft_printf("#1102");
	ret2 = ft_printf("|%0+#*.*zX|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1103");
	ret1 = fprintf(fppres, "|%0+#*.*X|\n", width, precision, var);
	ft_printf("#1103");
	ret2 = ft_printf("|%0+#*.*X|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1104");
	ret1 = fprintf(fppres, "|% 0+#*.*d|\n", width, precision, var);
	ft_printf("#1104");
	ret2 = ft_printf("|% 0+#*.*d|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1105");
	ret1 = fprintf(fppres, "|% 0+#*.*hhd|\n", width, precision, var);
	ft_printf("#1105");
	ret2 = ft_printf("|% 0+#*.*hhd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1106");
	ret1 = fprintf(fppres, "|% 0+#*.*hd|\n", width, precision, var);
	ft_printf("#1106");
	ret2 = ft_printf("|% 0+#*.*hd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1107");
	ret1 = fprintf(fppres, "|% 0+#*.*ld|\n", width, precision, var);
	ft_printf("#1107");
	ret2 = ft_printf("|% 0+#*.*ld|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1108");
	ret1 = fprintf(fppres, "|% 0+#*.*lld|\n", width, precision, var);
	ft_printf("#1108");
	ret2 = ft_printf("|% 0+#*.*lld|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1109");
	ret1 = fprintf(fppres, "|% 0+#*.*jd|\n", width, precision, var);
	ft_printf("#1109");
	ret2 = ft_printf("|% 0+#*.*jd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1110");
	ret1 = fprintf(fppres, "|% 0+#*.*zd|\n", width, precision, var);
	ft_printf("#1110");
	ret2 = ft_printf("|% 0+#*.*zd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1111");
	ret1 = fprintf(fppres, "|% 0+#*.*d|\n", width, precision, var);
	ft_printf("#1111");
	ret2 = ft_printf("|% 0+#*.*d|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1112");
	ret1 = fprintf(fppres, "|% 0+#*.*i|\n", width, precision, var);
	ft_printf("#1112");
	ret2 = ft_printf("|% 0+#*.*i|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1113");
	ret1 = fprintf(fppres, "|% 0+#*.*hhi|\n", width, precision, var);
	ft_printf("#1113");
	ret2 = ft_printf("|% 0+#*.*hhi|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1114");
	ret1 = fprintf(fppres, "|% 0+#*.*hi|\n", width, precision, var);
	ft_printf("#1114");
	ret2 = ft_printf("|% 0+#*.*hi|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1115");
	ret1 = fprintf(fppres, "|% 0+#*.*li|\n", width, precision, var);
	ft_printf("#1115");
	ret2 = ft_printf("|% 0+#*.*li|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1116");
	ret1 = fprintf(fppres, "|% 0+#*.*lli|\n", width, precision, var);
	ft_printf("#1116");
	ret2 = ft_printf("|% 0+#*.*lli|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1117");
	ret1 = fprintf(fppres, "|% 0+#*.*ji|\n", width, precision, var);
	ft_printf("#1117");
	ret2 = ft_printf("|% 0+#*.*ji|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1118");
	ret1 = fprintf(fppres, "|% 0+#*.*zi|\n", width, precision, var);
	ft_printf("#1118");
	ret2 = ft_printf("|% 0+#*.*zi|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1119");
	ret1 = fprintf(fppres, "|% 0+#*.*i|\n", width, precision, var);
	ft_printf("#1119");
	ret2 = ft_printf("|% 0+#*.*i|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1120");
	ret1 = fprintf(fppres, "|% 0+#*.*o|\n", width, precision, var);
	ft_printf("#1120");
	ret2 = ft_printf("|% 0+#*.*o|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1121");
	ret1 = fprintf(fppres, "|% 0+#*.*hho|\n", width, precision, var);
	ft_printf("#1121");
	ret2 = ft_printf("|% 0+#*.*hho|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1122");
	ret1 = fprintf(fppres, "|% 0+#*.*ho|\n", width, precision, var);
	ft_printf("#1122");
	ret2 = ft_printf("|% 0+#*.*ho|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1123");
	ret1 = fprintf(fppres, "|% 0+#*.*lo|\n", width, precision, var);
	ft_printf("#1123");
	ret2 = ft_printf("|% 0+#*.*lo|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1124");
	ret1 = fprintf(fppres, "|% 0+#*.*llo|\n", width, precision, var);
	ft_printf("#1124");
	ret2 = ft_printf("|% 0+#*.*llo|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1125");
	ret1 = fprintf(fppres, "|% 0+#*.*jo|\n", width, precision, var);
	ft_printf("#1125");
	ret2 = ft_printf("|% 0+#*.*jo|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1126");
	ret1 = fprintf(fppres, "|% 0+#*.*zo|\n", width, precision, var);
	ft_printf("#1126");
	ret2 = ft_printf("|% 0+#*.*zo|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1127");
	ret1 = fprintf(fppres, "|% 0+#*.*o|\n", width, precision, var);
	ft_printf("#1127");
	ret2 = ft_printf("|% 0+#*.*o|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1128");
	ret1 = fprintf(fppres, "|% 0+#*.*u|\n", width, precision, var);
	ft_printf("#1128");
	ret2 = ft_printf("|% 0+#*.*u|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1129");
	ret1 = fprintf(fppres, "|% 0+#*.*hhu|\n", width, precision, var);
	ft_printf("#1129");
	ret2 = ft_printf("|% 0+#*.*hhu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1130");
	ret1 = fprintf(fppres, "|% 0+#*.*hu|\n", width, precision, var);
	ft_printf("#1130");
	ret2 = ft_printf("|% 0+#*.*hu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1131");
	ret1 = fprintf(fppres, "|% 0+#*.*lu|\n", width, precision, var);
	ft_printf("#1131");
	ret2 = ft_printf("|% 0+#*.*lu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1132");
	ret1 = fprintf(fppres, "|% 0+#*.*llu|\n", width, precision, var);
	ft_printf("#1132");
	ret2 = ft_printf("|% 0+#*.*llu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1133");
	ret1 = fprintf(fppres, "|% 0+#*.*ju|\n", width, precision, var);
	ft_printf("#1133");
	ret2 = ft_printf("|% 0+#*.*ju|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1134");
	ret1 = fprintf(fppres, "|% 0+#*.*zu|\n", width, precision, var);
	ft_printf("#1134");
	ret2 = ft_printf("|% 0+#*.*zu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1135");
	ret1 = fprintf(fppres, "|% 0+#*.*u|\n", width, precision, var);
	ft_printf("#1135");
	ret2 = ft_printf("|% 0+#*.*u|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1136");
	ret1 = fprintf(fppres, "|% 0+#*.*x|\n", width, precision, var);
	ft_printf("#1136");
	ret2 = ft_printf("|% 0+#*.*x|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1137");
	ret1 = fprintf(fppres, "|% 0+#*.*hhx|\n", width, precision, var);
	ft_printf("#1137");
	ret2 = ft_printf("|% 0+#*.*hhx|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1138");
	ret1 = fprintf(fppres, "|% 0+#*.*hx|\n", width, precision, var);
	ft_printf("#1138");
	ret2 = ft_printf("|% 0+#*.*hx|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1139");
	ret1 = fprintf(fppres, "|% 0+#*.*lx|\n", width, precision, var);
	ft_printf("#1139");
	ret2 = ft_printf("|% 0+#*.*lx|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1140");
	ret1 = fprintf(fppres, "|% 0+#*.*llx|\n", width, precision, var);
	ft_printf("#1140");
	ret2 = ft_printf("|% 0+#*.*llx|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1141");
	ret1 = fprintf(fppres, "|% 0+#*.*jx|\n", width, precision, var);
	ft_printf("#1141");
	ret2 = ft_printf("|% 0+#*.*jx|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1142");
	ret1 = fprintf(fppres, "|% 0+#*.*zx|\n", width, precision, var);
	ft_printf("#1142");
	ret2 = ft_printf("|% 0+#*.*zx|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1143");
	ret1 = fprintf(fppres, "|% 0+#*.*x|\n", width, precision, var);
	ft_printf("#1143");
	ret2 = ft_printf("|% 0+#*.*x|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1144");
	ret1 = fprintf(fppres, "|% 0+#*.*X|\n", width, precision, var);
	ft_printf("#1144");
	ret2 = ft_printf("|% 0+#*.*X|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1145");
	ret1 = fprintf(fppres, "|% 0+#*.*hhX|\n", width, precision, var);
	ft_printf("#1145");
	ret2 = ft_printf("|% 0+#*.*hhX|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1146");
	ret1 = fprintf(fppres, "|% 0+#*.*hX|\n", width, precision, var);
	ft_printf("#1146");
	ret2 = ft_printf("|% 0+#*.*hX|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1147");
	ret1 = fprintf(fppres, "|% 0+#*.*lX|\n", width, precision, var);
	ft_printf("#1147");
	ret2 = ft_printf("|% 0+#*.*lX|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1148");
	ret1 = fprintf(fppres, "|% 0+#*.*llX|\n", width, precision, var);
	ft_printf("#1148");
	ret2 = ft_printf("|% 0+#*.*llX|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1149");
	ret1 = fprintf(fppres, "|% 0+#*.*jX|\n", width, precision, var);
	ft_printf("#1149");
	ret2 = ft_printf("|% 0+#*.*jX|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1150");
	ret1 = fprintf(fppres, "|% 0+#*.*zX|\n", width, precision, var);
	ft_printf("#1150");
	ret2 = ft_printf("|% 0+#*.*zX|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1151");
	ret1 = fprintf(fppres, "|% 0+#*.*X|\n", width, precision, var);
	ft_printf("#1151");
	ret2 = ft_printf("|% 0+#*.*X|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1152");
	ret1 = fprintf(fppres, "|%-#*.*d|\n", width, precision, var);
	ft_printf("#1152");
	ret2 = ft_printf("|%-#*.*d|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1153");
	ret1 = fprintf(fppres, "|%-#*.*hhd|\n", width, precision, var);
	ft_printf("#1153");
	ret2 = ft_printf("|%-#*.*hhd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1154");
	ret1 = fprintf(fppres, "|%-#*.*hd|\n", width, precision, var);
	ft_printf("#1154");
	ret2 = ft_printf("|%-#*.*hd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1155");
	ret1 = fprintf(fppres, "|%-#*.*ld|\n", width, precision, var);
	ft_printf("#1155");
	ret2 = ft_printf("|%-#*.*ld|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1156");
	ret1 = fprintf(fppres, "|%-#*.*lld|\n", width, precision, var);
	ft_printf("#1156");
	ret2 = ft_printf("|%-#*.*lld|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1157");
	ret1 = fprintf(fppres, "|%-#*.*jd|\n", width, precision, var);
	ft_printf("#1157");
	ret2 = ft_printf("|%-#*.*jd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1158");
	ret1 = fprintf(fppres, "|%-#*.*zd|\n", width, precision, var);
	ft_printf("#1158");
	ret2 = ft_printf("|%-#*.*zd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1159");
	ret1 = fprintf(fppres, "|%-#*.*d|\n", width, precision, var);
	ft_printf("#1159");
	ret2 = ft_printf("|%-#*.*d|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1160");
	ret1 = fprintf(fppres, "|%-#*.*i|\n", width, precision, var);
	ft_printf("#1160");
	ret2 = ft_printf("|%-#*.*i|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1161");
	ret1 = fprintf(fppres, "|%-#*.*hhi|\n", width, precision, var);
	ft_printf("#1161");
	ret2 = ft_printf("|%-#*.*hhi|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1162");
	ret1 = fprintf(fppres, "|%-#*.*hi|\n", width, precision, var);
	ft_printf("#1162");
	ret2 = ft_printf("|%-#*.*hi|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1163");
	ret1 = fprintf(fppres, "|%-#*.*li|\n", width, precision, var);
	ft_printf("#1163");
	ret2 = ft_printf("|%-#*.*li|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1164");
	ret1 = fprintf(fppres, "|%-#*.*lli|\n", width, precision, var);
	ft_printf("#1164");
	ret2 = ft_printf("|%-#*.*lli|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1165");
	ret1 = fprintf(fppres, "|%-#*.*ji|\n", width, precision, var);
	ft_printf("#1165");
	ret2 = ft_printf("|%-#*.*ji|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1166");
	ret1 = fprintf(fppres, "|%-#*.*zi|\n", width, precision, var);
	ft_printf("#1166");
	ret2 = ft_printf("|%-#*.*zi|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1167");
	ret1 = fprintf(fppres, "|%-#*.*i|\n", width, precision, var);
	ft_printf("#1167");
	ret2 = ft_printf("|%-#*.*i|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1168");
	ret1 = fprintf(fppres, "|%-#*.*o|\n", width, precision, var);
	ft_printf("#1168");
	ret2 = ft_printf("|%-#*.*o|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1169");
	ret1 = fprintf(fppres, "|%-#*.*hho|\n", width, precision, var);
	ft_printf("#1169");
	ret2 = ft_printf("|%-#*.*hho|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1170");
	ret1 = fprintf(fppres, "|%-#*.*ho|\n", width, precision, var);
	ft_printf("#1170");
	ret2 = ft_printf("|%-#*.*ho|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1171");
	ret1 = fprintf(fppres, "|%-#*.*lo|\n", width, precision, var);
	ft_printf("#1171");
	ret2 = ft_printf("|%-#*.*lo|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1172");
	ret1 = fprintf(fppres, "|%-#*.*llo|\n", width, precision, var);
	ft_printf("#1172");
	ret2 = ft_printf("|%-#*.*llo|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1173");
	ret1 = fprintf(fppres, "|%-#*.*jo|\n", width, precision, var);
	ft_printf("#1173");
	ret2 = ft_printf("|%-#*.*jo|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1174");
	ret1 = fprintf(fppres, "|%-#*.*zo|\n", width, precision, var);
	ft_printf("#1174");
	ret2 = ft_printf("|%-#*.*zo|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1175");
	ret1 = fprintf(fppres, "|%-#*.*o|\n", width, precision, var);
	ft_printf("#1175");
	ret2 = ft_printf("|%-#*.*o|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1176");
	ret1 = fprintf(fppres, "|%-#*.*u|\n", width, precision, var);
	ft_printf("#1176");
	ret2 = ft_printf("|%-#*.*u|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1177");
	ret1 = fprintf(fppres, "|%-#*.*hhu|\n", width, precision, var);
	ft_printf("#1177");
	ret2 = ft_printf("|%-#*.*hhu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1178");
	ret1 = fprintf(fppres, "|%-#*.*hu|\n", width, precision, var);
	ft_printf("#1178");
	ret2 = ft_printf("|%-#*.*hu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1179");
	ret1 = fprintf(fppres, "|%-#*.*lu|\n", width, precision, var);
	ft_printf("#1179");
	ret2 = ft_printf("|%-#*.*lu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1180");
	ret1 = fprintf(fppres, "|%-#*.*llu|\n", width, precision, var);
	ft_printf("#1180");
	ret2 = ft_printf("|%-#*.*llu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1181");
	ret1 = fprintf(fppres, "|%-#*.*ju|\n", width, precision, var);
	ft_printf("#1181");
	ret2 = ft_printf("|%-#*.*ju|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1182");
	ret1 = fprintf(fppres, "|%-#*.*zu|\n", width, precision, var);
	ft_printf("#1182");
	ret2 = ft_printf("|%-#*.*zu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1183");
	ret1 = fprintf(fppres, "|%-#*.*u|\n", width, precision, var);
	ft_printf("#1183");
	ret2 = ft_printf("|%-#*.*u|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1184");
	ret1 = fprintf(fppres, "|%-#*.*x|\n", width, precision, var);
	ft_printf("#1184");
	ret2 = ft_printf("|%-#*.*x|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1185");
	ret1 = fprintf(fppres, "|%-#*.*hhx|\n", width, precision, var);
	ft_printf("#1185");
	ret2 = ft_printf("|%-#*.*hhx|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1186");
	ret1 = fprintf(fppres, "|%-#*.*hx|\n", width, precision, var);
	ft_printf("#1186");
	ret2 = ft_printf("|%-#*.*hx|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1187");
	ret1 = fprintf(fppres, "|%-#*.*lx|\n", width, precision, var);
	ft_printf("#1187");
	ret2 = ft_printf("|%-#*.*lx|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1188");
	ret1 = fprintf(fppres, "|%-#*.*llx|\n", width, precision, var);
	ft_printf("#1188");
	ret2 = ft_printf("|%-#*.*llx|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1189");
	ret1 = fprintf(fppres, "|%-#*.*jx|\n", width, precision, var);
	ft_printf("#1189");
	ret2 = ft_printf("|%-#*.*jx|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1190");
	ret1 = fprintf(fppres, "|%-#*.*zx|\n", width, precision, var);
	ft_printf("#1190");
	ret2 = ft_printf("|%-#*.*zx|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1191");
	ret1 = fprintf(fppres, "|%-#*.*x|\n", width, precision, var);
	ft_printf("#1191");
	ret2 = ft_printf("|%-#*.*x|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1192");
	ret1 = fprintf(fppres, "|%-#*.*X|\n", width, precision, var);
	ft_printf("#1192");
	ret2 = ft_printf("|%-#*.*X|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1193");
	ret1 = fprintf(fppres, "|%-#*.*hhX|\n", width, precision, var);
	ft_printf("#1193");
	ret2 = ft_printf("|%-#*.*hhX|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1194");
	ret1 = fprintf(fppres, "|%-#*.*hX|\n", width, precision, var);
	ft_printf("#1194");
	ret2 = ft_printf("|%-#*.*hX|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1195");
	ret1 = fprintf(fppres, "|%-#*.*lX|\n", width, precision, var);
	ft_printf("#1195");
	ret2 = ft_printf("|%-#*.*lX|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1196");
	ret1 = fprintf(fppres, "|%-#*.*llX|\n", width, precision, var);
	ft_printf("#1196");
	ret2 = ft_printf("|%-#*.*llX|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1197");
	ret1 = fprintf(fppres, "|%-#*.*jX|\n", width, precision, var);
	ft_printf("#1197");
	ret2 = ft_printf("|%-#*.*jX|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1198");
	ret1 = fprintf(fppres, "|%-#*.*zX|\n", width, precision, var);
	ft_printf("#1198");
	ret2 = ft_printf("|%-#*.*zX|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1199");
	ret1 = fprintf(fppres, "|%-#*.*X|\n", width, precision, var);
	ft_printf("#1199");
	ret2 = ft_printf("|%-#*.*X|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1200");
	ret1 = fprintf(fppres, "|% -#*.*d|\n", width, precision, var);
	ft_printf("#1200");
	ret2 = ft_printf("|% -#*.*d|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1201");
	ret1 = fprintf(fppres, "|% -#*.*hhd|\n", width, precision, var);
	ft_printf("#1201");
	ret2 = ft_printf("|% -#*.*hhd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1202");
	ret1 = fprintf(fppres, "|% -#*.*hd|\n", width, precision, var);
	ft_printf("#1202");
	ret2 = ft_printf("|% -#*.*hd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1203");
	ret1 = fprintf(fppres, "|% -#*.*ld|\n", width, precision, var);
	ft_printf("#1203");
	ret2 = ft_printf("|% -#*.*ld|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1204");
	ret1 = fprintf(fppres, "|% -#*.*lld|\n", width, precision, var);
	ft_printf("#1204");
	ret2 = ft_printf("|% -#*.*lld|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1205");
	ret1 = fprintf(fppres, "|% -#*.*jd|\n", width, precision, var);
	ft_printf("#1205");
	ret2 = ft_printf("|% -#*.*jd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1206");
	ret1 = fprintf(fppres, "|% -#*.*zd|\n", width, precision, var);
	ft_printf("#1206");
	ret2 = ft_printf("|% -#*.*zd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1207");
	ret1 = fprintf(fppres, "|% -#*.*d|\n", width, precision, var);
	ft_printf("#1207");
	ret2 = ft_printf("|% -#*.*d|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1208");
	ret1 = fprintf(fppres, "|% -#*.*i|\n", width, precision, var);
	ft_printf("#1208");
	ret2 = ft_printf("|% -#*.*i|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1209");
	ret1 = fprintf(fppres, "|% -#*.*hhi|\n", width, precision, var);
	ft_printf("#1209");
	ret2 = ft_printf("|% -#*.*hhi|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1210");
	ret1 = fprintf(fppres, "|% -#*.*hi|\n", width, precision, var);
	ft_printf("#1210");
	ret2 = ft_printf("|% -#*.*hi|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1211");
	ret1 = fprintf(fppres, "|% -#*.*li|\n", width, precision, var);
	ft_printf("#1211");
	ret2 = ft_printf("|% -#*.*li|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1212");
	ret1 = fprintf(fppres, "|% -#*.*lli|\n", width, precision, var);
	ft_printf("#1212");
	ret2 = ft_printf("|% -#*.*lli|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1213");
	ret1 = fprintf(fppres, "|% -#*.*ji|\n", width, precision, var);
	ft_printf("#1213");
	ret2 = ft_printf("|% -#*.*ji|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1214");
	ret1 = fprintf(fppres, "|% -#*.*zi|\n", width, precision, var);
	ft_printf("#1214");
	ret2 = ft_printf("|% -#*.*zi|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1215");
	ret1 = fprintf(fppres, "|% -#*.*i|\n", width, precision, var);
	ft_printf("#1215");
	ret2 = ft_printf("|% -#*.*i|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1216");
	ret1 = fprintf(fppres, "|% -#*.*o|\n", width, precision, var);
	ft_printf("#1216");
	ret2 = ft_printf("|% -#*.*o|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1217");
	ret1 = fprintf(fppres, "|% -#*.*hho|\n", width, precision, var);
	ft_printf("#1217");
	ret2 = ft_printf("|% -#*.*hho|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1218");
	ret1 = fprintf(fppres, "|% -#*.*ho|\n", width, precision, var);
	ft_printf("#1218");
	ret2 = ft_printf("|% -#*.*ho|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1219");
	ret1 = fprintf(fppres, "|% -#*.*lo|\n", width, precision, var);
	ft_printf("#1219");
	ret2 = ft_printf("|% -#*.*lo|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1220");
	ret1 = fprintf(fppres, "|% -#*.*llo|\n", width, precision, var);
	ft_printf("#1220");
	ret2 = ft_printf("|% -#*.*llo|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1221");
	ret1 = fprintf(fppres, "|% -#*.*jo|\n", width, precision, var);
	ft_printf("#1221");
	ret2 = ft_printf("|% -#*.*jo|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1222");
	ret1 = fprintf(fppres, "|% -#*.*zo|\n", width, precision, var);
	ft_printf("#1222");
	ret2 = ft_printf("|% -#*.*zo|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1223");
	ret1 = fprintf(fppres, "|% -#*.*o|\n", width, precision, var);
	ft_printf("#1223");
	ret2 = ft_printf("|% -#*.*o|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1224");
	ret1 = fprintf(fppres, "|% -#*.*u|\n", width, precision, var);
	ft_printf("#1224");
	ret2 = ft_printf("|% -#*.*u|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1225");
	ret1 = fprintf(fppres, "|% -#*.*hhu|\n", width, precision, var);
	ft_printf("#1225");
	ret2 = ft_printf("|% -#*.*hhu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1226");
	ret1 = fprintf(fppres, "|% -#*.*hu|\n", width, precision, var);
	ft_printf("#1226");
	ret2 = ft_printf("|% -#*.*hu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1227");
	ret1 = fprintf(fppres, "|% -#*.*lu|\n", width, precision, var);
	ft_printf("#1227");
	ret2 = ft_printf("|% -#*.*lu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1228");
	ret1 = fprintf(fppres, "|% -#*.*llu|\n", width, precision, var);
	ft_printf("#1228");
	ret2 = ft_printf("|% -#*.*llu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1229");
	ret1 = fprintf(fppres, "|% -#*.*ju|\n", width, precision, var);
	ft_printf("#1229");
	ret2 = ft_printf("|% -#*.*ju|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1230");
	ret1 = fprintf(fppres, "|% -#*.*zu|\n", width, precision, var);
	ft_printf("#1230");
	ret2 = ft_printf("|% -#*.*zu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1231");
	ret1 = fprintf(fppres, "|% -#*.*u|\n", width, precision, var);
	ft_printf("#1231");
	ret2 = ft_printf("|% -#*.*u|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1232");
	ret1 = fprintf(fppres, "|% -#*.*x|\n", width, precision, var);
	ft_printf("#1232");
	ret2 = ft_printf("|% -#*.*x|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1233");
	ret1 = fprintf(fppres, "|% -#*.*hhx|\n", width, precision, var);
	ft_printf("#1233");
	ret2 = ft_printf("|% -#*.*hhx|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1234");
	ret1 = fprintf(fppres, "|% -#*.*hx|\n", width, precision, var);
	ft_printf("#1234");
	ret2 = ft_printf("|% -#*.*hx|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1235");
	ret1 = fprintf(fppres, "|% -#*.*lx|\n", width, precision, var);
	ft_printf("#1235");
	ret2 = ft_printf("|% -#*.*lx|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1236");
	ret1 = fprintf(fppres, "|% -#*.*llx|\n", width, precision, var);
	ft_printf("#1236");
	ret2 = ft_printf("|% -#*.*llx|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1237");
	ret1 = fprintf(fppres, "|% -#*.*jx|\n", width, precision, var);
	ft_printf("#1237");
	ret2 = ft_printf("|% -#*.*jx|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1238");
	ret1 = fprintf(fppres, "|% -#*.*zx|\n", width, precision, var);
	ft_printf("#1238");
	ret2 = ft_printf("|% -#*.*zx|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1239");
	ret1 = fprintf(fppres, "|% -#*.*x|\n", width, precision, var);
	ft_printf("#1239");
	ret2 = ft_printf("|% -#*.*x|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1240");
	ret1 = fprintf(fppres, "|% -#*.*X|\n", width, precision, var);
	ft_printf("#1240");
	ret2 = ft_printf("|% -#*.*X|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1241");
	ret1 = fprintf(fppres, "|% -#*.*hhX|\n", width, precision, var);
	ft_printf("#1241");
	ret2 = ft_printf("|% -#*.*hhX|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1242");
	ret1 = fprintf(fppres, "|% -#*.*hX|\n", width, precision, var);
	ft_printf("#1242");
	ret2 = ft_printf("|% -#*.*hX|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1243");
	ret1 = fprintf(fppres, "|% -#*.*lX|\n", width, precision, var);
	ft_printf("#1243");
	ret2 = ft_printf("|% -#*.*lX|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1244");
	ret1 = fprintf(fppres, "|% -#*.*llX|\n", width, precision, var);
	ft_printf("#1244");
	ret2 = ft_printf("|% -#*.*llX|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1245");
	ret1 = fprintf(fppres, "|% -#*.*jX|\n", width, precision, var);
	ft_printf("#1245");
	ret2 = ft_printf("|% -#*.*jX|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1246");
	ret1 = fprintf(fppres, "|% -#*.*zX|\n", width, precision, var);
	ft_printf("#1246");
	ret2 = ft_printf("|% -#*.*zX|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1247");
	ret1 = fprintf(fppres, "|% -#*.*X|\n", width, precision, var);
	ft_printf("#1247");
	ret2 = ft_printf("|% -#*.*X|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1248");
	ret1 = fprintf(fppres, "|%0-#*.*d|\n", width, precision, var);
	ft_printf("#1248");
	ret2 = ft_printf("|%0-#*.*d|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1249");
	ret1 = fprintf(fppres, "|%0-#*.*hhd|\n", width, precision, var);
	ft_printf("#1249");
	ret2 = ft_printf("|%0-#*.*hhd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1250");
	ret1 = fprintf(fppres, "|%0-#*.*hd|\n", width, precision, var);
	ft_printf("#1250");
	ret2 = ft_printf("|%0-#*.*hd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1251");
	ret1 = fprintf(fppres, "|%0-#*.*ld|\n", width, precision, var);
	ft_printf("#1251");
	ret2 = ft_printf("|%0-#*.*ld|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1252");
	ret1 = fprintf(fppres, "|%0-#*.*lld|\n", width, precision, var);
	ft_printf("#1252");
	ret2 = ft_printf("|%0-#*.*lld|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1253");
	ret1 = fprintf(fppres, "|%0-#*.*jd|\n", width, precision, var);
	ft_printf("#1253");
	ret2 = ft_printf("|%0-#*.*jd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1254");
	ret1 = fprintf(fppres, "|%0-#*.*zd|\n", width, precision, var);
	ft_printf("#1254");
	ret2 = ft_printf("|%0-#*.*zd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1255");
	ret1 = fprintf(fppres, "|%0-#*.*d|\n", width, precision, var);
	ft_printf("#1255");
	ret2 = ft_printf("|%0-#*.*d|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1256");
	ret1 = fprintf(fppres, "|%0-#*.*i|\n", width, precision, var);
	ft_printf("#1256");
	ret2 = ft_printf("|%0-#*.*i|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1257");
	ret1 = fprintf(fppres, "|%0-#*.*hhi|\n", width, precision, var);
	ft_printf("#1257");
	ret2 = ft_printf("|%0-#*.*hhi|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1258");
	ret1 = fprintf(fppres, "|%0-#*.*hi|\n", width, precision, var);
	ft_printf("#1258");
	ret2 = ft_printf("|%0-#*.*hi|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1259");
	ret1 = fprintf(fppres, "|%0-#*.*li|\n", width, precision, var);
	ft_printf("#1259");
	ret2 = ft_printf("|%0-#*.*li|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1260");
	ret1 = fprintf(fppres, "|%0-#*.*lli|\n", width, precision, var);
	ft_printf("#1260");
	ret2 = ft_printf("|%0-#*.*lli|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1261");
	ret1 = fprintf(fppres, "|%0-#*.*ji|\n", width, precision, var);
	ft_printf("#1261");
	ret2 = ft_printf("|%0-#*.*ji|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1262");
	ret1 = fprintf(fppres, "|%0-#*.*zi|\n", width, precision, var);
	ft_printf("#1262");
	ret2 = ft_printf("|%0-#*.*zi|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1263");
	ret1 = fprintf(fppres, "|%0-#*.*i|\n", width, precision, var);
	ft_printf("#1263");
	ret2 = ft_printf("|%0-#*.*i|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1264");
	ret1 = fprintf(fppres, "|%0-#*.*o|\n", width, precision, var);
	ft_printf("#1264");
	ret2 = ft_printf("|%0-#*.*o|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1265");
	ret1 = fprintf(fppres, "|%0-#*.*hho|\n", width, precision, var);
	ft_printf("#1265");
	ret2 = ft_printf("|%0-#*.*hho|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1266");
	ret1 = fprintf(fppres, "|%0-#*.*ho|\n", width, precision, var);
	ft_printf("#1266");
	ret2 = ft_printf("|%0-#*.*ho|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1267");
	ret1 = fprintf(fppres, "|%0-#*.*lo|\n", width, precision, var);
	ft_printf("#1267");
	ret2 = ft_printf("|%0-#*.*lo|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1268");
	ret1 = fprintf(fppres, "|%0-#*.*llo|\n", width, precision, var);
	ft_printf("#1268");
	ret2 = ft_printf("|%0-#*.*llo|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1269");
	ret1 = fprintf(fppres, "|%0-#*.*jo|\n", width, precision, var);
	ft_printf("#1269");
	ret2 = ft_printf("|%0-#*.*jo|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1270");
	ret1 = fprintf(fppres, "|%0-#*.*zo|\n", width, precision, var);
	ft_printf("#1270");
	ret2 = ft_printf("|%0-#*.*zo|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1271");
	ret1 = fprintf(fppres, "|%0-#*.*o|\n", width, precision, var);
	ft_printf("#1271");
	ret2 = ft_printf("|%0-#*.*o|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1272");
	ret1 = fprintf(fppres, "|%0-#*.*u|\n", width, precision, var);
	ft_printf("#1272");
	ret2 = ft_printf("|%0-#*.*u|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1273");
	ret1 = fprintf(fppres, "|%0-#*.*hhu|\n", width, precision, var);
	ft_printf("#1273");
	ret2 = ft_printf("|%0-#*.*hhu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1274");
	ret1 = fprintf(fppres, "|%0-#*.*hu|\n", width, precision, var);
	ft_printf("#1274");
	ret2 = ft_printf("|%0-#*.*hu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1275");
	ret1 = fprintf(fppres, "|%0-#*.*lu|\n", width, precision, var);
	ft_printf("#1275");
	ret2 = ft_printf("|%0-#*.*lu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1276");
	ret1 = fprintf(fppres, "|%0-#*.*llu|\n", width, precision, var);
	ft_printf("#1276");
	ret2 = ft_printf("|%0-#*.*llu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1277");
	ret1 = fprintf(fppres, "|%0-#*.*ju|\n", width, precision, var);
	ft_printf("#1277");
	ret2 = ft_printf("|%0-#*.*ju|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1278");
	ret1 = fprintf(fppres, "|%0-#*.*zu|\n", width, precision, var);
	ft_printf("#1278");
	ret2 = ft_printf("|%0-#*.*zu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1279");
	ret1 = fprintf(fppres, "|%0-#*.*u|\n", width, precision, var);
	ft_printf("#1279");
	ret2 = ft_printf("|%0-#*.*u|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1280");
	ret1 = fprintf(fppres, "|%0-#*.*x|\n", width, precision, var);
	ft_printf("#1280");
	ret2 = ft_printf("|%0-#*.*x|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1281");
	ret1 = fprintf(fppres, "|%0-#*.*hhx|\n", width, precision, var);
	ft_printf("#1281");
	ret2 = ft_printf("|%0-#*.*hhx|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1282");
	ret1 = fprintf(fppres, "|%0-#*.*hx|\n", width, precision, var);
	ft_printf("#1282");
	ret2 = ft_printf("|%0-#*.*hx|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1283");
	ret1 = fprintf(fppres, "|%0-#*.*lx|\n", width, precision, var);
	ft_printf("#1283");
	ret2 = ft_printf("|%0-#*.*lx|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1284");
	ret1 = fprintf(fppres, "|%0-#*.*llx|\n", width, precision, var);
	ft_printf("#1284");
	ret2 = ft_printf("|%0-#*.*llx|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1285");
	ret1 = fprintf(fppres, "|%0-#*.*jx|\n", width, precision, var);
	ft_printf("#1285");
	ret2 = ft_printf("|%0-#*.*jx|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1286");
	ret1 = fprintf(fppres, "|%0-#*.*zx|\n", width, precision, var);
	ft_printf("#1286");
	ret2 = ft_printf("|%0-#*.*zx|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1287");
	ret1 = fprintf(fppres, "|%0-#*.*x|\n", width, precision, var);
	ft_printf("#1287");
	ret2 = ft_printf("|%0-#*.*x|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1288");
	ret1 = fprintf(fppres, "|%0-#*.*X|\n", width, precision, var);
	ft_printf("#1288");
	ret2 = ft_printf("|%0-#*.*X|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1289");
	ret1 = fprintf(fppres, "|%0-#*.*hhX|\n", width, precision, var);
	ft_printf("#1289");
	ret2 = ft_printf("|%0-#*.*hhX|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1290");
	ret1 = fprintf(fppres, "|%0-#*.*hX|\n", width, precision, var);
	ft_printf("#1290");
	ret2 = ft_printf("|%0-#*.*hX|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1291");
	ret1 = fprintf(fppres, "|%0-#*.*lX|\n", width, precision, var);
	ft_printf("#1291");
	ret2 = ft_printf("|%0-#*.*lX|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1292");
	ret1 = fprintf(fppres, "|%0-#*.*llX|\n", width, precision, var);
	ft_printf("#1292");
	ret2 = ft_printf("|%0-#*.*llX|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1293");
	ret1 = fprintf(fppres, "|%0-#*.*jX|\n", width, precision, var);
	ft_printf("#1293");
	ret2 = ft_printf("|%0-#*.*jX|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1294");
	ret1 = fprintf(fppres, "|%0-#*.*zX|\n", width, precision, var);
	ft_printf("#1294");
	ret2 = ft_printf("|%0-#*.*zX|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1295");
	ret1 = fprintf(fppres, "|%0-#*.*X|\n", width, precision, var);
	ft_printf("#1295");
	ret2 = ft_printf("|%0-#*.*X|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1296");
	ret1 = fprintf(fppres, "|% 0-#*.*d|\n", width, precision, var);
	ft_printf("#1296");
	ret2 = ft_printf("|% 0-#*.*d|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1297");
	ret1 = fprintf(fppres, "|% 0-#*.*hhd|\n", width, precision, var);
	ft_printf("#1297");
	ret2 = ft_printf("|% 0-#*.*hhd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1298");
	ret1 = fprintf(fppres, "|% 0-#*.*hd|\n", width, precision, var);
	ft_printf("#1298");
	ret2 = ft_printf("|% 0-#*.*hd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1299");
	ret1 = fprintf(fppres, "|% 0-#*.*ld|\n", width, precision, var);
	ft_printf("#1299");
	ret2 = ft_printf("|% 0-#*.*ld|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1300");
	ret1 = fprintf(fppres, "|% 0-#*.*lld|\n", width, precision, var);
	ft_printf("#1300");
	ret2 = ft_printf("|% 0-#*.*lld|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1301");
	ret1 = fprintf(fppres, "|% 0-#*.*jd|\n", width, precision, var);
	ft_printf("#1301");
	ret2 = ft_printf("|% 0-#*.*jd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1302");
	ret1 = fprintf(fppres, "|% 0-#*.*zd|\n", width, precision, var);
	ft_printf("#1302");
	ret2 = ft_printf("|% 0-#*.*zd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1303");
	ret1 = fprintf(fppres, "|% 0-#*.*d|\n", width, precision, var);
	ft_printf("#1303");
	ret2 = ft_printf("|% 0-#*.*d|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1304");
	ret1 = fprintf(fppres, "|% 0-#*.*i|\n", width, precision, var);
	ft_printf("#1304");
	ret2 = ft_printf("|% 0-#*.*i|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1305");
	ret1 = fprintf(fppres, "|% 0-#*.*hhi|\n", width, precision, var);
	ft_printf("#1305");
	ret2 = ft_printf("|% 0-#*.*hhi|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1306");
	ret1 = fprintf(fppres, "|% 0-#*.*hi|\n", width, precision, var);
	ft_printf("#1306");
	ret2 = ft_printf("|% 0-#*.*hi|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1307");
	ret1 = fprintf(fppres, "|% 0-#*.*li|\n", width, precision, var);
	ft_printf("#1307");
	ret2 = ft_printf("|% 0-#*.*li|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1308");
	ret1 = fprintf(fppres, "|% 0-#*.*lli|\n", width, precision, var);
	ft_printf("#1308");
	ret2 = ft_printf("|% 0-#*.*lli|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1309");
	ret1 = fprintf(fppres, "|% 0-#*.*ji|\n", width, precision, var);
	ft_printf("#1309");
	ret2 = ft_printf("|% 0-#*.*ji|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1310");
	ret1 = fprintf(fppres, "|% 0-#*.*zi|\n", width, precision, var);
	ft_printf("#1310");
	ret2 = ft_printf("|% 0-#*.*zi|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1311");
	ret1 = fprintf(fppres, "|% 0-#*.*i|\n", width, precision, var);
	ft_printf("#1311");
	ret2 = ft_printf("|% 0-#*.*i|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1312");
	ret1 = fprintf(fppres, "|% 0-#*.*o|\n", width, precision, var);
	ft_printf("#1312");
	ret2 = ft_printf("|% 0-#*.*o|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1313");
	ret1 = fprintf(fppres, "|% 0-#*.*hho|\n", width, precision, var);
	ft_printf("#1313");
	ret2 = ft_printf("|% 0-#*.*hho|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1314");
	ret1 = fprintf(fppres, "|% 0-#*.*ho|\n", width, precision, var);
	ft_printf("#1314");
	ret2 = ft_printf("|% 0-#*.*ho|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1315");
	ret1 = fprintf(fppres, "|% 0-#*.*lo|\n", width, precision, var);
	ft_printf("#1315");
	ret2 = ft_printf("|% 0-#*.*lo|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1316");
	ret1 = fprintf(fppres, "|% 0-#*.*llo|\n", width, precision, var);
	ft_printf("#1316");
	ret2 = ft_printf("|% 0-#*.*llo|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1317");
	ret1 = fprintf(fppres, "|% 0-#*.*jo|\n", width, precision, var);
	ft_printf("#1317");
	ret2 = ft_printf("|% 0-#*.*jo|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1318");
	ret1 = fprintf(fppres, "|% 0-#*.*zo|\n", width, precision, var);
	ft_printf("#1318");
	ret2 = ft_printf("|% 0-#*.*zo|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1319");
	ret1 = fprintf(fppres, "|% 0-#*.*o|\n", width, precision, var);
	ft_printf("#1319");
	ret2 = ft_printf("|% 0-#*.*o|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1320");
	ret1 = fprintf(fppres, "|% 0-#*.*u|\n", width, precision, var);
	ft_printf("#1320");
	ret2 = ft_printf("|% 0-#*.*u|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1321");
	ret1 = fprintf(fppres, "|% 0-#*.*hhu|\n", width, precision, var);
	ft_printf("#1321");
	ret2 = ft_printf("|% 0-#*.*hhu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1322");
	ret1 = fprintf(fppres, "|% 0-#*.*hu|\n", width, precision, var);
	ft_printf("#1322");
	ret2 = ft_printf("|% 0-#*.*hu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1323");
	ret1 = fprintf(fppres, "|% 0-#*.*lu|\n", width, precision, var);
	ft_printf("#1323");
	ret2 = ft_printf("|% 0-#*.*lu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1324");
	ret1 = fprintf(fppres, "|% 0-#*.*llu|\n", width, precision, var);
	ft_printf("#1324");
	ret2 = ft_printf("|% 0-#*.*llu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1325");
	ret1 = fprintf(fppres, "|% 0-#*.*ju|\n", width, precision, var);
	ft_printf("#1325");
	ret2 = ft_printf("|% 0-#*.*ju|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1326");
	ret1 = fprintf(fppres, "|% 0-#*.*zu|\n", width, precision, var);
	ft_printf("#1326");
	ret2 = ft_printf("|% 0-#*.*zu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1327");
	ret1 = fprintf(fppres, "|% 0-#*.*u|\n", width, precision, var);
	ft_printf("#1327");
	ret2 = ft_printf("|% 0-#*.*u|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1328");
	ret1 = fprintf(fppres, "|% 0-#*.*x|\n", width, precision, var);
	ft_printf("#1328");
	ret2 = ft_printf("|% 0-#*.*x|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1329");
	ret1 = fprintf(fppres, "|% 0-#*.*hhx|\n", width, precision, var);
	ft_printf("#1329");
	ret2 = ft_printf("|% 0-#*.*hhx|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1330");
	ret1 = fprintf(fppres, "|% 0-#*.*hx|\n", width, precision, var);
	ft_printf("#1330");
	ret2 = ft_printf("|% 0-#*.*hx|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1331");
	ret1 = fprintf(fppres, "|% 0-#*.*lx|\n", width, precision, var);
	ft_printf("#1331");
	ret2 = ft_printf("|% 0-#*.*lx|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1332");
	ret1 = fprintf(fppres, "|% 0-#*.*llx|\n", width, precision, var);
	ft_printf("#1332");
	ret2 = ft_printf("|% 0-#*.*llx|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1333");
	ret1 = fprintf(fppres, "|% 0-#*.*jx|\n", width, precision, var);
	ft_printf("#1333");
	ret2 = ft_printf("|% 0-#*.*jx|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1334");
	ret1 = fprintf(fppres, "|% 0-#*.*zx|\n", width, precision, var);
	ft_printf("#1334");
	ret2 = ft_printf("|% 0-#*.*zx|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1335");
	ret1 = fprintf(fppres, "|% 0-#*.*x|\n", width, precision, var);
	ft_printf("#1335");
	ret2 = ft_printf("|% 0-#*.*x|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1336");
	ret1 = fprintf(fppres, "|% 0-#*.*X|\n", width, precision, var);
	ft_printf("#1336");
	ret2 = ft_printf("|% 0-#*.*X|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1337");
	ret1 = fprintf(fppres, "|% 0-#*.*hhX|\n", width, precision, var);
	ft_printf("#1337");
	ret2 = ft_printf("|% 0-#*.*hhX|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1338");
	ret1 = fprintf(fppres, "|% 0-#*.*hX|\n", width, precision, var);
	ft_printf("#1338");
	ret2 = ft_printf("|% 0-#*.*hX|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1339");
	ret1 = fprintf(fppres, "|% 0-#*.*lX|\n", width, precision, var);
	ft_printf("#1339");
	ret2 = ft_printf("|% 0-#*.*lX|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1340");
	ret1 = fprintf(fppres, "|% 0-#*.*llX|\n", width, precision, var);
	ft_printf("#1340");
	ret2 = ft_printf("|% 0-#*.*llX|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1341");
	ret1 = fprintf(fppres, "|% 0-#*.*jX|\n", width, precision, var);
	ft_printf("#1341");
	ret2 = ft_printf("|% 0-#*.*jX|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1342");
	ret1 = fprintf(fppres, "|% 0-#*.*zX|\n", width, precision, var);
	ft_printf("#1342");
	ret2 = ft_printf("|% 0-#*.*zX|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1343");
	ret1 = fprintf(fppres, "|% 0-#*.*X|\n", width, precision, var);
	ft_printf("#1343");
	ret2 = ft_printf("|% 0-#*.*X|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1344");
	ret1 = fprintf(fppres, "|%+-#*.*d|\n", width, precision, var);
	ft_printf("#1344");
	ret2 = ft_printf("|%+-#*.*d|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1345");
	ret1 = fprintf(fppres, "|%+-#*.*hhd|\n", width, precision, var);
	ft_printf("#1345");
	ret2 = ft_printf("|%+-#*.*hhd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1346");
	ret1 = fprintf(fppres, "|%+-#*.*hd|\n", width, precision, var);
	ft_printf("#1346");
	ret2 = ft_printf("|%+-#*.*hd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1347");
	ret1 = fprintf(fppres, "|%+-#*.*ld|\n", width, precision, var);
	ft_printf("#1347");
	ret2 = ft_printf("|%+-#*.*ld|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1348");
	ret1 = fprintf(fppres, "|%+-#*.*lld|\n", width, precision, var);
	ft_printf("#1348");
	ret2 = ft_printf("|%+-#*.*lld|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1349");
	ret1 = fprintf(fppres, "|%+-#*.*jd|\n", width, precision, var);
	ft_printf("#1349");
	ret2 = ft_printf("|%+-#*.*jd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1350");
	ret1 = fprintf(fppres, "|%+-#*.*zd|\n", width, precision, var);
	ft_printf("#1350");
	ret2 = ft_printf("|%+-#*.*zd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1351");
	ret1 = fprintf(fppres, "|%+-#*.*d|\n", width, precision, var);
	ft_printf("#1351");
	ret2 = ft_printf("|%+-#*.*d|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1352");
	ret1 = fprintf(fppres, "|%+-#*.*i|\n", width, precision, var);
	ft_printf("#1352");
	ret2 = ft_printf("|%+-#*.*i|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1353");
	ret1 = fprintf(fppres, "|%+-#*.*hhi|\n", width, precision, var);
	ft_printf("#1353");
	ret2 = ft_printf("|%+-#*.*hhi|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1354");
	ret1 = fprintf(fppres, "|%+-#*.*hi|\n", width, precision, var);
	ft_printf("#1354");
	ret2 = ft_printf("|%+-#*.*hi|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1355");
	ret1 = fprintf(fppres, "|%+-#*.*li|\n", width, precision, var);
	ft_printf("#1355");
	ret2 = ft_printf("|%+-#*.*li|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1356");
	ret1 = fprintf(fppres, "|%+-#*.*lli|\n", width, precision, var);
	ft_printf("#1356");
	ret2 = ft_printf("|%+-#*.*lli|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1357");
	ret1 = fprintf(fppres, "|%+-#*.*ji|\n", width, precision, var);
	ft_printf("#1357");
	ret2 = ft_printf("|%+-#*.*ji|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1358");
	ret1 = fprintf(fppres, "|%+-#*.*zi|\n", width, precision, var);
	ft_printf("#1358");
	ret2 = ft_printf("|%+-#*.*zi|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1359");
	ret1 = fprintf(fppres, "|%+-#*.*i|\n", width, precision, var);
	ft_printf("#1359");
	ret2 = ft_printf("|%+-#*.*i|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1360");
	ret1 = fprintf(fppres, "|%+-#*.*o|\n", width, precision, var);
	ft_printf("#1360");
	ret2 = ft_printf("|%+-#*.*o|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1361");
	ret1 = fprintf(fppres, "|%+-#*.*hho|\n", width, precision, var);
	ft_printf("#1361");
	ret2 = ft_printf("|%+-#*.*hho|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1362");
	ret1 = fprintf(fppres, "|%+-#*.*ho|\n", width, precision, var);
	ft_printf("#1362");
	ret2 = ft_printf("|%+-#*.*ho|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1363");
	ret1 = fprintf(fppres, "|%+-#*.*lo|\n", width, precision, var);
	ft_printf("#1363");
	ret2 = ft_printf("|%+-#*.*lo|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1364");
	ret1 = fprintf(fppres, "|%+-#*.*llo|\n", width, precision, var);
	ft_printf("#1364");
	ret2 = ft_printf("|%+-#*.*llo|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1365");
	ret1 = fprintf(fppres, "|%+-#*.*jo|\n", width, precision, var);
	ft_printf("#1365");
	ret2 = ft_printf("|%+-#*.*jo|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1366");
	ret1 = fprintf(fppres, "|%+-#*.*zo|\n", width, precision, var);
	ft_printf("#1366");
	ret2 = ft_printf("|%+-#*.*zo|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1367");
	ret1 = fprintf(fppres, "|%+-#*.*o|\n", width, precision, var);
	ft_printf("#1367");
	ret2 = ft_printf("|%+-#*.*o|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1368");
	ret1 = fprintf(fppres, "|%+-#*.*u|\n", width, precision, var);
	ft_printf("#1368");
	ret2 = ft_printf("|%+-#*.*u|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1369");
	ret1 = fprintf(fppres, "|%+-#*.*hhu|\n", width, precision, var);
	ft_printf("#1369");
	ret2 = ft_printf("|%+-#*.*hhu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1370");
	ret1 = fprintf(fppres, "|%+-#*.*hu|\n", width, precision, var);
	ft_printf("#1370");
	ret2 = ft_printf("|%+-#*.*hu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1371");
	ret1 = fprintf(fppres, "|%+-#*.*lu|\n", width, precision, var);
	ft_printf("#1371");
	ret2 = ft_printf("|%+-#*.*lu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1372");
	ret1 = fprintf(fppres, "|%+-#*.*llu|\n", width, precision, var);
	ft_printf("#1372");
	ret2 = ft_printf("|%+-#*.*llu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1373");
	ret1 = fprintf(fppres, "|%+-#*.*ju|\n", width, precision, var);
	ft_printf("#1373");
	ret2 = ft_printf("|%+-#*.*ju|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1374");
	ret1 = fprintf(fppres, "|%+-#*.*zu|\n", width, precision, var);
	ft_printf("#1374");
	ret2 = ft_printf("|%+-#*.*zu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1375");
	ret1 = fprintf(fppres, "|%+-#*.*u|\n", width, precision, var);
	ft_printf("#1375");
	ret2 = ft_printf("|%+-#*.*u|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1376");
	ret1 = fprintf(fppres, "|%+-#*.*x|\n", width, precision, var);
	ft_printf("#1376");
	ret2 = ft_printf("|%+-#*.*x|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1377");
	ret1 = fprintf(fppres, "|%+-#*.*hhx|\n", width, precision, var);
	ft_printf("#1377");
	ret2 = ft_printf("|%+-#*.*hhx|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1378");
	ret1 = fprintf(fppres, "|%+-#*.*hx|\n", width, precision, var);
	ft_printf("#1378");
	ret2 = ft_printf("|%+-#*.*hx|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1379");
	ret1 = fprintf(fppres, "|%+-#*.*lx|\n", width, precision, var);
	ft_printf("#1379");
	ret2 = ft_printf("|%+-#*.*lx|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1380");
	ret1 = fprintf(fppres, "|%+-#*.*llx|\n", width, precision, var);
	ft_printf("#1380");
	ret2 = ft_printf("|%+-#*.*llx|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1381");
	ret1 = fprintf(fppres, "|%+-#*.*jx|\n", width, precision, var);
	ft_printf("#1381");
	ret2 = ft_printf("|%+-#*.*jx|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1382");
	ret1 = fprintf(fppres, "|%+-#*.*zx|\n", width, precision, var);
	ft_printf("#1382");
	ret2 = ft_printf("|%+-#*.*zx|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1383");
	ret1 = fprintf(fppres, "|%+-#*.*x|\n", width, precision, var);
	ft_printf("#1383");
	ret2 = ft_printf("|%+-#*.*x|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1384");
	ret1 = fprintf(fppres, "|%+-#*.*X|\n", width, precision, var);
	ft_printf("#1384");
	ret2 = ft_printf("|%+-#*.*X|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1385");
	ret1 = fprintf(fppres, "|%+-#*.*hhX|\n", width, precision, var);
	ft_printf("#1385");
	ret2 = ft_printf("|%+-#*.*hhX|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1386");
	ret1 = fprintf(fppres, "|%+-#*.*hX|\n", width, precision, var);
	ft_printf("#1386");
	ret2 = ft_printf("|%+-#*.*hX|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1387");
	ret1 = fprintf(fppres, "|%+-#*.*lX|\n", width, precision, var);
	ft_printf("#1387");
	ret2 = ft_printf("|%+-#*.*lX|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1388");
	ret1 = fprintf(fppres, "|%+-#*.*llX|\n", width, precision, var);
	ft_printf("#1388");
	ret2 = ft_printf("|%+-#*.*llX|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1389");
	ret1 = fprintf(fppres, "|%+-#*.*jX|\n", width, precision, var);
	ft_printf("#1389");
	ret2 = ft_printf("|%+-#*.*jX|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1390");
	ret1 = fprintf(fppres, "|%+-#*.*zX|\n", width, precision, var);
	ft_printf("#1390");
	ret2 = ft_printf("|%+-#*.*zX|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1391");
	ret1 = fprintf(fppres, "|%+-#*.*X|\n", width, precision, var);
	ft_printf("#1391");
	ret2 = ft_printf("|%+-#*.*X|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1392");
	ret1 = fprintf(fppres, "|% +-#*.*d|\n", width, precision, var);
	ft_printf("#1392");
	ret2 = ft_printf("|% +-#*.*d|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1393");
	ret1 = fprintf(fppres, "|% +-#*.*hhd|\n", width, precision, var);
	ft_printf("#1393");
	ret2 = ft_printf("|% +-#*.*hhd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1394");
	ret1 = fprintf(fppres, "|% +-#*.*hd|\n", width, precision, var);
	ft_printf("#1394");
	ret2 = ft_printf("|% +-#*.*hd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1395");
	ret1 = fprintf(fppres, "|% +-#*.*ld|\n", width, precision, var);
	ft_printf("#1395");
	ret2 = ft_printf("|% +-#*.*ld|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1396");
	ret1 = fprintf(fppres, "|% +-#*.*lld|\n", width, precision, var);
	ft_printf("#1396");
	ret2 = ft_printf("|% +-#*.*lld|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1397");
	ret1 = fprintf(fppres, "|% +-#*.*jd|\n", width, precision, var);
	ft_printf("#1397");
	ret2 = ft_printf("|% +-#*.*jd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1398");
	ret1 = fprintf(fppres, "|% +-#*.*zd|\n", width, precision, var);
	ft_printf("#1398");
	ret2 = ft_printf("|% +-#*.*zd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1399");
	ret1 = fprintf(fppres, "|% +-#*.*d|\n", width, precision, var);
	ft_printf("#1399");
	ret2 = ft_printf("|% +-#*.*d|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1400");
	ret1 = fprintf(fppres, "|% +-#*.*i|\n", width, precision, var);
	ft_printf("#1400");
	ret2 = ft_printf("|% +-#*.*i|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1401");
	ret1 = fprintf(fppres, "|% +-#*.*hhi|\n", width, precision, var);
	ft_printf("#1401");
	ret2 = ft_printf("|% +-#*.*hhi|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1402");
	ret1 = fprintf(fppres, "|% +-#*.*hi|\n", width, precision, var);
	ft_printf("#1402");
	ret2 = ft_printf("|% +-#*.*hi|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1403");
	ret1 = fprintf(fppres, "|% +-#*.*li|\n", width, precision, var);
	ft_printf("#1403");
	ret2 = ft_printf("|% +-#*.*li|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1404");
	ret1 = fprintf(fppres, "|% +-#*.*lli|\n", width, precision, var);
	ft_printf("#1404");
	ret2 = ft_printf("|% +-#*.*lli|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1405");
	ret1 = fprintf(fppres, "|% +-#*.*ji|\n", width, precision, var);
	ft_printf("#1405");
	ret2 = ft_printf("|% +-#*.*ji|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1406");
	ret1 = fprintf(fppres, "|% +-#*.*zi|\n", width, precision, var);
	ft_printf("#1406");
	ret2 = ft_printf("|% +-#*.*zi|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1407");
	ret1 = fprintf(fppres, "|% +-#*.*i|\n", width, precision, var);
	ft_printf("#1407");
	ret2 = ft_printf("|% +-#*.*i|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1408");
	ret1 = fprintf(fppres, "|% +-#*.*o|\n", width, precision, var);
	ft_printf("#1408");
	ret2 = ft_printf("|% +-#*.*o|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1409");
	ret1 = fprintf(fppres, "|% +-#*.*hho|\n", width, precision, var);
	ft_printf("#1409");
	ret2 = ft_printf("|% +-#*.*hho|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1410");
	ret1 = fprintf(fppres, "|% +-#*.*ho|\n", width, precision, var);
	ft_printf("#1410");
	ret2 = ft_printf("|% +-#*.*ho|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1411");
	ret1 = fprintf(fppres, "|% +-#*.*lo|\n", width, precision, var);
	ft_printf("#1411");
	ret2 = ft_printf("|% +-#*.*lo|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1412");
	ret1 = fprintf(fppres, "|% +-#*.*llo|\n", width, precision, var);
	ft_printf("#1412");
	ret2 = ft_printf("|% +-#*.*llo|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1413");
	ret1 = fprintf(fppres, "|% +-#*.*jo|\n", width, precision, var);
	ft_printf("#1413");
	ret2 = ft_printf("|% +-#*.*jo|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1414");
	ret1 = fprintf(fppres, "|% +-#*.*zo|\n", width, precision, var);
	ft_printf("#1414");
	ret2 = ft_printf("|% +-#*.*zo|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1415");
	ret1 = fprintf(fppres, "|% +-#*.*o|\n", width, precision, var);
	ft_printf("#1415");
	ret2 = ft_printf("|% +-#*.*o|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1416");
	ret1 = fprintf(fppres, "|% +-#*.*u|\n", width, precision, var);
	ft_printf("#1416");
	ret2 = ft_printf("|% +-#*.*u|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1417");
	ret1 = fprintf(fppres, "|% +-#*.*hhu|\n", width, precision, var);
	ft_printf("#1417");
	ret2 = ft_printf("|% +-#*.*hhu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1418");
	ret1 = fprintf(fppres, "|% +-#*.*hu|\n", width, precision, var);
	ft_printf("#1418");
	ret2 = ft_printf("|% +-#*.*hu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1419");
	ret1 = fprintf(fppres, "|% +-#*.*lu|\n", width, precision, var);
	ft_printf("#1419");
	ret2 = ft_printf("|% +-#*.*lu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1420");
	ret1 = fprintf(fppres, "|% +-#*.*llu|\n", width, precision, var);
	ft_printf("#1420");
	ret2 = ft_printf("|% +-#*.*llu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1421");
	ret1 = fprintf(fppres, "|% +-#*.*ju|\n", width, precision, var);
	ft_printf("#1421");
	ret2 = ft_printf("|% +-#*.*ju|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1422");
	ret1 = fprintf(fppres, "|% +-#*.*zu|\n", width, precision, var);
	ft_printf("#1422");
	ret2 = ft_printf("|% +-#*.*zu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1423");
	ret1 = fprintf(fppres, "|% +-#*.*u|\n", width, precision, var);
	ft_printf("#1423");
	ret2 = ft_printf("|% +-#*.*u|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1424");
	ret1 = fprintf(fppres, "|% +-#*.*x|\n", width, precision, var);
	ft_printf("#1424");
	ret2 = ft_printf("|% +-#*.*x|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1425");
	ret1 = fprintf(fppres, "|% +-#*.*hhx|\n", width, precision, var);
	ft_printf("#1425");
	ret2 = ft_printf("|% +-#*.*hhx|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1426");
	ret1 = fprintf(fppres, "|% +-#*.*hx|\n", width, precision, var);
	ft_printf("#1426");
	ret2 = ft_printf("|% +-#*.*hx|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1427");
	ret1 = fprintf(fppres, "|% +-#*.*lx|\n", width, precision, var);
	ft_printf("#1427");
	ret2 = ft_printf("|% +-#*.*lx|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1428");
	ret1 = fprintf(fppres, "|% +-#*.*llx|\n", width, precision, var);
	ft_printf("#1428");
	ret2 = ft_printf("|% +-#*.*llx|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1429");
	ret1 = fprintf(fppres, "|% +-#*.*jx|\n", width, precision, var);
	ft_printf("#1429");
	ret2 = ft_printf("|% +-#*.*jx|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1430");
	ret1 = fprintf(fppres, "|% +-#*.*zx|\n", width, precision, var);
	ft_printf("#1430");
	ret2 = ft_printf("|% +-#*.*zx|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1431");
	ret1 = fprintf(fppres, "|% +-#*.*x|\n", width, precision, var);
	ft_printf("#1431");
	ret2 = ft_printf("|% +-#*.*x|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1432");
	ret1 = fprintf(fppres, "|% +-#*.*X|\n", width, precision, var);
	ft_printf("#1432");
	ret2 = ft_printf("|% +-#*.*X|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1433");
	ret1 = fprintf(fppres, "|% +-#*.*hhX|\n", width, precision, var);
	ft_printf("#1433");
	ret2 = ft_printf("|% +-#*.*hhX|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1434");
	ret1 = fprintf(fppres, "|% +-#*.*hX|\n", width, precision, var);
	ft_printf("#1434");
	ret2 = ft_printf("|% +-#*.*hX|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1435");
	ret1 = fprintf(fppres, "|% +-#*.*lX|\n", width, precision, var);
	ft_printf("#1435");
	ret2 = ft_printf("|% +-#*.*lX|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1436");
	ret1 = fprintf(fppres, "|% +-#*.*llX|\n", width, precision, var);
	ft_printf("#1436");
	ret2 = ft_printf("|% +-#*.*llX|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1437");
	ret1 = fprintf(fppres, "|% +-#*.*jX|\n", width, precision, var);
	ft_printf("#1437");
	ret2 = ft_printf("|% +-#*.*jX|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1438");
	ret1 = fprintf(fppres, "|% +-#*.*zX|\n", width, precision, var);
	ft_printf("#1438");
	ret2 = ft_printf("|% +-#*.*zX|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1439");
	ret1 = fprintf(fppres, "|% +-#*.*X|\n", width, precision, var);
	ft_printf("#1439");
	ret2 = ft_printf("|% +-#*.*X|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1440");
	ret1 = fprintf(fppres, "|%0+-#*.*d|\n", width, precision, var);
	ft_printf("#1440");
	ret2 = ft_printf("|%0+-#*.*d|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1441");
	ret1 = fprintf(fppres, "|%0+-#*.*hhd|\n", width, precision, var);
	ft_printf("#1441");
	ret2 = ft_printf("|%0+-#*.*hhd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1442");
	ret1 = fprintf(fppres, "|%0+-#*.*hd|\n", width, precision, var);
	ft_printf("#1442");
	ret2 = ft_printf("|%0+-#*.*hd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1443");
	ret1 = fprintf(fppres, "|%0+-#*.*ld|\n", width, precision, var);
	ft_printf("#1443");
	ret2 = ft_printf("|%0+-#*.*ld|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1444");
	ret1 = fprintf(fppres, "|%0+-#*.*lld|\n", width, precision, var);
	ft_printf("#1444");
	ret2 = ft_printf("|%0+-#*.*lld|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1445");
	ret1 = fprintf(fppres, "|%0+-#*.*jd|\n", width, precision, var);
	ft_printf("#1445");
	ret2 = ft_printf("|%0+-#*.*jd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1446");
	ret1 = fprintf(fppres, "|%0+-#*.*zd|\n", width, precision, var);
	ft_printf("#1446");
	ret2 = ft_printf("|%0+-#*.*zd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1447");
	ret1 = fprintf(fppres, "|%0+-#*.*d|\n", width, precision, var);
	ft_printf("#1447");
	ret2 = ft_printf("|%0+-#*.*d|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1448");
	ret1 = fprintf(fppres, "|%0+-#*.*i|\n", width, precision, var);
	ft_printf("#1448");
	ret2 = ft_printf("|%0+-#*.*i|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1449");
	ret1 = fprintf(fppres, "|%0+-#*.*hhi|\n", width, precision, var);
	ft_printf("#1449");
	ret2 = ft_printf("|%0+-#*.*hhi|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1450");
	ret1 = fprintf(fppres, "|%0+-#*.*hi|\n", width, precision, var);
	ft_printf("#1450");
	ret2 = ft_printf("|%0+-#*.*hi|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1451");
	ret1 = fprintf(fppres, "|%0+-#*.*li|\n", width, precision, var);
	ft_printf("#1451");
	ret2 = ft_printf("|%0+-#*.*li|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1452");
	ret1 = fprintf(fppres, "|%0+-#*.*lli|\n", width, precision, var);
	ft_printf("#1452");
	ret2 = ft_printf("|%0+-#*.*lli|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1453");
	ret1 = fprintf(fppres, "|%0+-#*.*ji|\n", width, precision, var);
	ft_printf("#1453");
	ret2 = ft_printf("|%0+-#*.*ji|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1454");
	ret1 = fprintf(fppres, "|%0+-#*.*zi|\n", width, precision, var);
	ft_printf("#1454");
	ret2 = ft_printf("|%0+-#*.*zi|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1455");
	ret1 = fprintf(fppres, "|%0+-#*.*i|\n", width, precision, var);
	ft_printf("#1455");
	ret2 = ft_printf("|%0+-#*.*i|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1456");
	ret1 = fprintf(fppres, "|%0+-#*.*o|\n", width, precision, var);
	ft_printf("#1456");
	ret2 = ft_printf("|%0+-#*.*o|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1457");
	ret1 = fprintf(fppres, "|%0+-#*.*hho|\n", width, precision, var);
	ft_printf("#1457");
	ret2 = ft_printf("|%0+-#*.*hho|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1458");
	ret1 = fprintf(fppres, "|%0+-#*.*ho|\n", width, precision, var);
	ft_printf("#1458");
	ret2 = ft_printf("|%0+-#*.*ho|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1459");
	ret1 = fprintf(fppres, "|%0+-#*.*lo|\n", width, precision, var);
	ft_printf("#1459");
	ret2 = ft_printf("|%0+-#*.*lo|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1460");
	ret1 = fprintf(fppres, "|%0+-#*.*llo|\n", width, precision, var);
	ft_printf("#1460");
	ret2 = ft_printf("|%0+-#*.*llo|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1461");
	ret1 = fprintf(fppres, "|%0+-#*.*jo|\n", width, precision, var);
	ft_printf("#1461");
	ret2 = ft_printf("|%0+-#*.*jo|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1462");
	ret1 = fprintf(fppres, "|%0+-#*.*zo|\n", width, precision, var);
	ft_printf("#1462");
	ret2 = ft_printf("|%0+-#*.*zo|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1463");
	ret1 = fprintf(fppres, "|%0+-#*.*o|\n", width, precision, var);
	ft_printf("#1463");
	ret2 = ft_printf("|%0+-#*.*o|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1464");
	ret1 = fprintf(fppres, "|%0+-#*.*u|\n", width, precision, var);
	ft_printf("#1464");
	ret2 = ft_printf("|%0+-#*.*u|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1465");
	ret1 = fprintf(fppres, "|%0+-#*.*hhu|\n", width, precision, var);
	ft_printf("#1465");
	ret2 = ft_printf("|%0+-#*.*hhu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1466");
	ret1 = fprintf(fppres, "|%0+-#*.*hu|\n", width, precision, var);
	ft_printf("#1466");
	ret2 = ft_printf("|%0+-#*.*hu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1467");
	ret1 = fprintf(fppres, "|%0+-#*.*lu|\n", width, precision, var);
	ft_printf("#1467");
	ret2 = ft_printf("|%0+-#*.*lu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1468");
	ret1 = fprintf(fppres, "|%0+-#*.*llu|\n", width, precision, var);
	ft_printf("#1468");
	ret2 = ft_printf("|%0+-#*.*llu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1469");
	ret1 = fprintf(fppres, "|%0+-#*.*ju|\n", width, precision, var);
	ft_printf("#1469");
	ret2 = ft_printf("|%0+-#*.*ju|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1470");
	ret1 = fprintf(fppres, "|%0+-#*.*zu|\n", width, precision, var);
	ft_printf("#1470");
	ret2 = ft_printf("|%0+-#*.*zu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1471");
	ret1 = fprintf(fppres, "|%0+-#*.*u|\n", width, precision, var);
	ft_printf("#1471");
	ret2 = ft_printf("|%0+-#*.*u|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1472");
	ret1 = fprintf(fppres, "|%0+-#*.*x|\n", width, precision, var);
	ft_printf("#1472");
	ret2 = ft_printf("|%0+-#*.*x|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1473");
	ret1 = fprintf(fppres, "|%0+-#*.*hhx|\n", width, precision, var);
	ft_printf("#1473");
	ret2 = ft_printf("|%0+-#*.*hhx|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1474");
	ret1 = fprintf(fppres, "|%0+-#*.*hx|\n", width, precision, var);
	ft_printf("#1474");
	ret2 = ft_printf("|%0+-#*.*hx|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1475");
	ret1 = fprintf(fppres, "|%0+-#*.*lx|\n", width, precision, var);
	ft_printf("#1475");
	ret2 = ft_printf("|%0+-#*.*lx|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1476");
	ret1 = fprintf(fppres, "|%0+-#*.*llx|\n", width, precision, var);
	ft_printf("#1476");
	ret2 = ft_printf("|%0+-#*.*llx|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1477");
	ret1 = fprintf(fppres, "|%0+-#*.*jx|\n", width, precision, var);
	ft_printf("#1477");
	ret2 = ft_printf("|%0+-#*.*jx|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1478");
	ret1 = fprintf(fppres, "|%0+-#*.*zx|\n", width, precision, var);
	ft_printf("#1478");
	ret2 = ft_printf("|%0+-#*.*zx|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1479");
	ret1 = fprintf(fppres, "|%0+-#*.*x|\n", width, precision, var);
	ft_printf("#1479");
	ret2 = ft_printf("|%0+-#*.*x|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1480");
	ret1 = fprintf(fppres, "|%0+-#*.*X|\n", width, precision, var);
	ft_printf("#1480");
	ret2 = ft_printf("|%0+-#*.*X|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1481");
	ret1 = fprintf(fppres, "|%0+-#*.*hhX|\n", width, precision, var);
	ft_printf("#1481");
	ret2 = ft_printf("|%0+-#*.*hhX|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1482");
	ret1 = fprintf(fppres, "|%0+-#*.*hX|\n", width, precision, var);
	ft_printf("#1482");
	ret2 = ft_printf("|%0+-#*.*hX|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1483");
	ret1 = fprintf(fppres, "|%0+-#*.*lX|\n", width, precision, var);
	ft_printf("#1483");
	ret2 = ft_printf("|%0+-#*.*lX|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1484");
	ret1 = fprintf(fppres, "|%0+-#*.*llX|\n", width, precision, var);
	ft_printf("#1484");
	ret2 = ft_printf("|%0+-#*.*llX|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1485");
	ret1 = fprintf(fppres, "|%0+-#*.*jX|\n", width, precision, var);
	ft_printf("#1485");
	ret2 = ft_printf("|%0+-#*.*jX|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1486");
	ret1 = fprintf(fppres, "|%0+-#*.*zX|\n", width, precision, var);
	ft_printf("#1486");
	ret2 = ft_printf("|%0+-#*.*zX|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1487");
	ret1 = fprintf(fppres, "|%0+-#*.*X|\n", width, precision, var);
	ft_printf("#1487");
	ret2 = ft_printf("|%0+-#*.*X|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1488");
	ret1 = fprintf(fppres, "|% 0+-#*.*d|\n", width, precision, var);
	ft_printf("#1488");
	ret2 = ft_printf("|% 0+-#*.*d|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1489");
	ret1 = fprintf(fppres, "|% 0+-#*.*hhd|\n", width, precision, var);
	ft_printf("#1489");
	ret2 = ft_printf("|% 0+-#*.*hhd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1490");
	ret1 = fprintf(fppres, "|% 0+-#*.*hd|\n", width, precision, var);
	ft_printf("#1490");
	ret2 = ft_printf("|% 0+-#*.*hd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1491");
	ret1 = fprintf(fppres, "|% 0+-#*.*ld|\n", width, precision, var);
	ft_printf("#1491");
	ret2 = ft_printf("|% 0+-#*.*ld|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1492");
	ret1 = fprintf(fppres, "|% 0+-#*.*lld|\n", width, precision, var);
	ft_printf("#1492");
	ret2 = ft_printf("|% 0+-#*.*lld|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1493");
	ret1 = fprintf(fppres, "|% 0+-#*.*jd|\n", width, precision, var);
	ft_printf("#1493");
	ret2 = ft_printf("|% 0+-#*.*jd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1494");
	ret1 = fprintf(fppres, "|% 0+-#*.*zd|\n", width, precision, var);
	ft_printf("#1494");
	ret2 = ft_printf("|% 0+-#*.*zd|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1495");
	ret1 = fprintf(fppres, "|% 0+-#*.*d|\n", width, precision, var);
	ft_printf("#1495");
	ret2 = ft_printf("|% 0+-#*.*d|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1496");
	ret1 = fprintf(fppres, "|% 0+-#*.*i|\n", width, precision, var);
	ft_printf("#1496");
	ret2 = ft_printf("|% 0+-#*.*i|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1497");
	ret1 = fprintf(fppres, "|% 0+-#*.*hhi|\n", width, precision, var);
	ft_printf("#1497");
	ret2 = ft_printf("|% 0+-#*.*hhi|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1498");
	ret1 = fprintf(fppres, "|% 0+-#*.*hi|\n", width, precision, var);
	ft_printf("#1498");
	ret2 = ft_printf("|% 0+-#*.*hi|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1499");
	ret1 = fprintf(fppres, "|% 0+-#*.*li|\n", width, precision, var);
	ft_printf("#1499");
	ret2 = ft_printf("|% 0+-#*.*li|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1500");
	ret1 = fprintf(fppres, "|% 0+-#*.*lli|\n", width, precision, var);
	ft_printf("#1500");
	ret2 = ft_printf("|% 0+-#*.*lli|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1501");
	ret1 = fprintf(fppres, "|% 0+-#*.*ji|\n", width, precision, var);
	ft_printf("#1501");
	ret2 = ft_printf("|% 0+-#*.*ji|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1502");
	ret1 = fprintf(fppres, "|% 0+-#*.*zi|\n", width, precision, var);
	ft_printf("#1502");
	ret2 = ft_printf("|% 0+-#*.*zi|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1503");
	ret1 = fprintf(fppres, "|% 0+-#*.*i|\n", width, precision, var);
	ft_printf("#1503");
	ret2 = ft_printf("|% 0+-#*.*i|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1504");
	ret1 = fprintf(fppres, "|% 0+-#*.*o|\n", width, precision, var);
	ft_printf("#1504");
	ret2 = ft_printf("|% 0+-#*.*o|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1505");
	ret1 = fprintf(fppres, "|% 0+-#*.*hho|\n", width, precision, var);
	ft_printf("#1505");
	ret2 = ft_printf("|% 0+-#*.*hho|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1506");
	ret1 = fprintf(fppres, "|% 0+-#*.*ho|\n", width, precision, var);
	ft_printf("#1506");
	ret2 = ft_printf("|% 0+-#*.*ho|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1507");
	ret1 = fprintf(fppres, "|% 0+-#*.*lo|\n", width, precision, var);
	ft_printf("#1507");
	ret2 = ft_printf("|% 0+-#*.*lo|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1508");
	ret1 = fprintf(fppres, "|% 0+-#*.*llo|\n", width, precision, var);
	ft_printf("#1508");
	ret2 = ft_printf("|% 0+-#*.*llo|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1509");
	ret1 = fprintf(fppres, "|% 0+-#*.*jo|\n", width, precision, var);
	ft_printf("#1509");
	ret2 = ft_printf("|% 0+-#*.*jo|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1510");
	ret1 = fprintf(fppres, "|% 0+-#*.*zo|\n", width, precision, var);
	ft_printf("#1510");
	ret2 = ft_printf("|% 0+-#*.*zo|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1511");
	ret1 = fprintf(fppres, "|% 0+-#*.*o|\n", width, precision, var);
	ft_printf("#1511");
	ret2 = ft_printf("|% 0+-#*.*o|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1512");
	ret1 = fprintf(fppres, "|% 0+-#*.*u|\n", width, precision, var);
	ft_printf("#1512");
	ret2 = ft_printf("|% 0+-#*.*u|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1513");
	ret1 = fprintf(fppres, "|% 0+-#*.*hhu|\n", width, precision, var);
	ft_printf("#1513");
	ret2 = ft_printf("|% 0+-#*.*hhu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1514");
	ret1 = fprintf(fppres, "|% 0+-#*.*hu|\n", width, precision, var);
	ft_printf("#1514");
	ret2 = ft_printf("|% 0+-#*.*hu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1515");
	ret1 = fprintf(fppres, "|% 0+-#*.*lu|\n", width, precision, var);
	ft_printf("#1515");
	ret2 = ft_printf("|% 0+-#*.*lu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1516");
	ret1 = fprintf(fppres, "|% 0+-#*.*llu|\n", width, precision, var);
	ft_printf("#1516");
	ret2 = ft_printf("|% 0+-#*.*llu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1517");
	ret1 = fprintf(fppres, "|% 0+-#*.*ju|\n", width, precision, var);
	ft_printf("#1517");
	ret2 = ft_printf("|% 0+-#*.*ju|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1518");
	ret1 = fprintf(fppres, "|% 0+-#*.*zu|\n", width, precision, var);
	ft_printf("#1518");
	ret2 = ft_printf("|% 0+-#*.*zu|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1519");
	ret1 = fprintf(fppres, "|% 0+-#*.*u|\n", width, precision, var);
	ft_printf("#1519");
	ret2 = ft_printf("|% 0+-#*.*u|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1520");
	ret1 = fprintf(fppres, "|% 0+-#*.*x|\n", width, precision, var);
	ft_printf("#1520");
	ret2 = ft_printf("|% 0+-#*.*x|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1521");
	ret1 = fprintf(fppres, "|% 0+-#*.*hhx|\n", width, precision, var);
	ft_printf("#1521");
	ret2 = ft_printf("|% 0+-#*.*hhx|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1522");
	ret1 = fprintf(fppres, "|% 0+-#*.*hx|\n", width, precision, var);
	ft_printf("#1522");
	ret2 = ft_printf("|% 0+-#*.*hx|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1523");
	ret1 = fprintf(fppres, "|% 0+-#*.*lx|\n", width, precision, var);
	ft_printf("#1523");
	ret2 = ft_printf("|% 0+-#*.*lx|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1524");
	ret1 = fprintf(fppres, "|% 0+-#*.*llx|\n", width, precision, var);
	ft_printf("#1524");
	ret2 = ft_printf("|% 0+-#*.*llx|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1525");
	ret1 = fprintf(fppres, "|% 0+-#*.*jx|\n", width, precision, var);
	ft_printf("#1525");
	ret2 = ft_printf("|% 0+-#*.*jx|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1526");
	ret1 = fprintf(fppres, "|% 0+-#*.*zx|\n", width, precision, var);
	ft_printf("#1526");
	ret2 = ft_printf("|% 0+-#*.*zx|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1527");
	ret1 = fprintf(fppres, "|% 0+-#*.*x|\n", width, precision, var);
	ft_printf("#1527");
	ret2 = ft_printf("|% 0+-#*.*x|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1528");
	ret1 = fprintf(fppres, "|% 0+-#*.*X|\n", width, precision, var);
	ft_printf("#1528");
	ret2 = ft_printf("|% 0+-#*.*X|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1529");
	ret1 = fprintf(fppres, "|% 0+-#*.*hhX|\n", width, precision, var);
	ft_printf("#1529");
	ret2 = ft_printf("|% 0+-#*.*hhX|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1530");
	ret1 = fprintf(fppres, "|% 0+-#*.*hX|\n", width, precision, var);
	ft_printf("#1530");
	ret2 = ft_printf("|% 0+-#*.*hX|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1531");
	ret1 = fprintf(fppres, "|% 0+-#*.*lX|\n", width, precision, var);
	ft_printf("#1531");
	ret2 = ft_printf("|% 0+-#*.*lX|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1532");
	ret1 = fprintf(fppres, "|% 0+-#*.*llX|\n", width, precision, var);
	ft_printf("#1532");
	ret2 = ft_printf("|% 0+-#*.*llX|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1533");
	ret1 = fprintf(fppres, "|% 0+-#*.*jX|\n", width, precision, var);
	ft_printf("#1533");
	ret2 = ft_printf("|% 0+-#*.*jX|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1534");
	ret1 = fprintf(fppres, "|% 0+-#*.*zX|\n", width, precision, var);
	ft_printf("#1534");
	ret2 = ft_printf("|% 0+-#*.*zX|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#1535");
	ret1 = fprintf(fppres, "|% 0+-#*.*X|\n", width, precision, var);
	ft_printf("#1535");
	ret2 = ft_printf("|% 0+-#*.*X|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@	fclose(fppres);
	fclose(fppret);
	fclose(fpftret);
	*n = *n + 1;
}
