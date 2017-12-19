#include <stdio.h>
#include <stdint.h>
#include <wchar.h>
#include <locale.h>
#include "libftprintf.h"

size_t testing_sbs_tests = 256;

void		testing_sbs(int width, int precision, wchar_t *var)
{
	int		ret1;
	int		ret2;
	FILE	*fppres, *fppret, *fpftret;

	setlocale(LC_ALL, "en_US.UTF-8");

	fppres = fopen("./files/printf_res", "a");
	fppret = fopen("./files/printf_ret", "a");
	fpftret = fopen("./files/ft_printf_ret", "a");

	setvbuf(fppres, NULL, _IONBF, 0);
	setvbuf(fppret, NULL, _IONBF, 0);
	setvbuf(fpftret, NULL, _IONBF, 0);
	fprintf(fppres, "===\\ NEW TEST\n");
	fprintf(fppres, "NAME = testing_sbs.c\n");
	fprintf(fppres, "TESTS = %zu\n", testing_sbs_tests);
	fprintf(fppres, "WIDTH = %d\n", width);
	fprintf(fppres, "PRECISION = %d\n", precision);
	fprintf(fppres, "VAR = %S\n\n", var);

	ft_printf("===\\ NEW TEST\n");
	ft_printf("NAME = testing_sbs.c\n");
	ft_printf("TESTS = %zu\n", testing_sbs_tests);
	ft_printf("WIDTH = %d\n", width);
	ft_printf("PRECISION = %d\n", precision);
	ft_printf("VAR = %lld\n\n", var);
	//@
	fprintf(fppres, "#0000");
	ret1 = fprintf(fppres, "|%*.*s|\n", width, precision, var);
	ft_printf("#0000");
	ret2 = ft_printf("|%*.*s|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0001");
	ret1 = fprintf(fppres, "|%*.*hhs|\n", width, precision, var);
	ft_printf("#0001");
	ret2 = ft_printf("|%*.*hhs|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0002");
	ret1 = fprintf(fppres, "|%*.*hs|\n", width, precision, var);
	ft_printf("#0002");
	ret2 = ft_printf("|%*.*hs|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0003");
	ret1 = fprintf(fppres, "|%*.*ls|\n", width, precision, var);
	ft_printf("#0003");
	ret2 = ft_printf("|%*.*ls|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0004");
	ret1 = fprintf(fppres, "|%*.*lls|\n", width, precision, var);
	ft_printf("#0004");
	ret2 = ft_printf("|%*.*lls|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0005");
	ret1 = fprintf(fppres, "|%*.*js|\n", width, precision, var);
	ft_printf("#0005");
	ret2 = ft_printf("|%*.*js|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0006");
	ret1 = fprintf(fppres, "|%*.*zs|\n", width, precision, var);
	ft_printf("#0006");
	ret2 = ft_printf("|%*.*zs|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0007");
	ret1 = fprintf(fppres, "|%*.*s|\n", width, precision, var);
	ft_printf("#0007");
	ret2 = ft_printf("|%*.*s|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0008");
	ret1 = fprintf(fppres, "|%*.*S|\n", width, precision, var);
	ft_printf("#0008");
	ret2 = ft_printf("|%*.*S|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0009");
	ret1 = fprintf(fppres, "|%*.*hhS|\n", width, precision, var);
	ft_printf("#0009");
	ret2 = ft_printf("|%*.*hhS|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0010");
	ret1 = fprintf(fppres, "|%*.*hS|\n", width, precision, var);
	ft_printf("#0010");
	ret2 = ft_printf("|%*.*hS|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0011");
	ret1 = fprintf(fppres, "|%*.*lS|\n", width, precision, var);
	ft_printf("#0011");
	ret2 = ft_printf("|%*.*lS|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0012");
	ret1 = fprintf(fppres, "|%*.*llS|\n", width, precision, var);
	ft_printf("#0012");
	ret2 = ft_printf("|%*.*llS|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0013");
	ret1 = fprintf(fppres, "|%*.*jS|\n", width, precision, var);
	ft_printf("#0013");
	ret2 = ft_printf("|%*.*jS|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0014");
	ret1 = fprintf(fppres, "|%*.*zS|\n", width, precision, var);
	ft_printf("#0014");
	ret2 = ft_printf("|%*.*zS|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0015");
	ret1 = fprintf(fppres, "|%*.*S|\n", width, precision, var);
	ft_printf("#0015");
	ret2 = ft_printf("|%*.*S|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0016");
	ret1 = fprintf(fppres, "|%0*.*s|\n", width, precision, var);
	ft_printf("#0016");
	ret2 = ft_printf("|%0*.*s|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0017");
	ret1 = fprintf(fppres, "|%0*.*hhs|\n", width, precision, var);
	ft_printf("#0017");
	ret2 = ft_printf("|%0*.*hhs|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0018");
	ret1 = fprintf(fppres, "|%0*.*hs|\n", width, precision, var);
	ft_printf("#0018");
	ret2 = ft_printf("|%0*.*hs|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0019");
	ret1 = fprintf(fppres, "|%0*.*ls|\n", width, precision, var);
	ft_printf("#0019");
	ret2 = ft_printf("|%0*.*ls|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0020");
	ret1 = fprintf(fppres, "|%0*.*lls|\n", width, precision, var);
	ft_printf("#0020");
	ret2 = ft_printf("|%0*.*lls|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0021");
	ret1 = fprintf(fppres, "|%0*.*js|\n", width, precision, var);
	ft_printf("#0021");
	ret2 = ft_printf("|%0*.*js|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0022");
	ret1 = fprintf(fppres, "|%0*.*zs|\n", width, precision, var);
	ft_printf("#0022");
	ret2 = ft_printf("|%0*.*zs|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0023");
	ret1 = fprintf(fppres, "|%0*.*s|\n", width, precision, var);
	ft_printf("#0023");
	ret2 = ft_printf("|%0*.*s|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0024");
	ret1 = fprintf(fppres, "|%0*.*S|\n", width, precision, var);
	ft_printf("#0024");
	ret2 = ft_printf("|%0*.*S|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0025");
	ret1 = fprintf(fppres, "|%0*.*hhS|\n", width, precision, var);
	ft_printf("#0025");
	ret2 = ft_printf("|%0*.*hhS|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0026");
	ret1 = fprintf(fppres, "|%0*.*hS|\n", width, precision, var);
	ft_printf("#0026");
	ret2 = ft_printf("|%0*.*hS|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0027");
	ret1 = fprintf(fppres, "|%0*.*lS|\n", width, precision, var);
	ft_printf("#0027");
	ret2 = ft_printf("|%0*.*lS|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0028");
	ret1 = fprintf(fppres, "|%0*.*llS|\n", width, precision, var);
	ft_printf("#0028");
	ret2 = ft_printf("|%0*.*llS|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0029");
	ret1 = fprintf(fppres, "|%0*.*jS|\n", width, precision, var);
	ft_printf("#0029");
	ret2 = ft_printf("|%0*.*jS|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0030");
	ret1 = fprintf(fppres, "|%0*.*zS|\n", width, precision, var);
	ft_printf("#0030");
	ret2 = ft_printf("|%0*.*zS|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0031");
	ret1 = fprintf(fppres, "|%0*.*S|\n", width, precision, var);
	ft_printf("#0031");
	ret2 = ft_printf("|%0*.*S|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0032");
	ret1 = fprintf(fppres, "|%+*.*s|\n", width, precision, var);
	ft_printf("#0032");
	ret2 = ft_printf("|%+*.*s|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0033");
	ret1 = fprintf(fppres, "|%+*.*hhs|\n", width, precision, var);
	ft_printf("#0033");
	ret2 = ft_printf("|%+*.*hhs|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0034");
	ret1 = fprintf(fppres, "|%+*.*hs|\n", width, precision, var);
	ft_printf("#0034");
	ret2 = ft_printf("|%+*.*hs|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0035");
	ret1 = fprintf(fppres, "|%+*.*ls|\n", width, precision, var);
	ft_printf("#0035");
	ret2 = ft_printf("|%+*.*ls|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0036");
	ret1 = fprintf(fppres, "|%+*.*lls|\n", width, precision, var);
	ft_printf("#0036");
	ret2 = ft_printf("|%+*.*lls|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0037");
	ret1 = fprintf(fppres, "|%+*.*js|\n", width, precision, var);
	ft_printf("#0037");
	ret2 = ft_printf("|%+*.*js|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0038");
	ret1 = fprintf(fppres, "|%+*.*zs|\n", width, precision, var);
	ft_printf("#0038");
	ret2 = ft_printf("|%+*.*zs|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0039");
	ret1 = fprintf(fppres, "|%+*.*s|\n", width, precision, var);
	ft_printf("#0039");
	ret2 = ft_printf("|%+*.*s|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0040");
	ret1 = fprintf(fppres, "|%+*.*S|\n", width, precision, var);
	ft_printf("#0040");
	ret2 = ft_printf("|%+*.*S|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0041");
	ret1 = fprintf(fppres, "|%+*.*hhS|\n", width, precision, var);
	ft_printf("#0041");
	ret2 = ft_printf("|%+*.*hhS|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0042");
	ret1 = fprintf(fppres, "|%+*.*hS|\n", width, precision, var);
	ft_printf("#0042");
	ret2 = ft_printf("|%+*.*hS|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0043");
	ret1 = fprintf(fppres, "|%+*.*lS|\n", width, precision, var);
	ft_printf("#0043");
	ret2 = ft_printf("|%+*.*lS|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0044");
	ret1 = fprintf(fppres, "|%+*.*llS|\n", width, precision, var);
	ft_printf("#0044");
	ret2 = ft_printf("|%+*.*llS|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0045");
	ret1 = fprintf(fppres, "|%+*.*jS|\n", width, precision, var);
	ft_printf("#0045");
	ret2 = ft_printf("|%+*.*jS|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0046");
	ret1 = fprintf(fppres, "|%+*.*zS|\n", width, precision, var);
	ft_printf("#0046");
	ret2 = ft_printf("|%+*.*zS|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0047");
	ret1 = fprintf(fppres, "|%+*.*S|\n", width, precision, var);
	ft_printf("#0047");
	ret2 = ft_printf("|%+*.*S|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0048");
	ret1 = fprintf(fppres, "|%0+*.*s|\n", width, precision, var);
	ft_printf("#0048");
	ret2 = ft_printf("|%0+*.*s|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0049");
	ret1 = fprintf(fppres, "|%0+*.*hhs|\n", width, precision, var);
	ft_printf("#0049");
	ret2 = ft_printf("|%0+*.*hhs|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0050");
	ret1 = fprintf(fppres, "|%0+*.*hs|\n", width, precision, var);
	ft_printf("#0050");
	ret2 = ft_printf("|%0+*.*hs|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0051");
	ret1 = fprintf(fppres, "|%0+*.*ls|\n", width, precision, var);
	ft_printf("#0051");
	ret2 = ft_printf("|%0+*.*ls|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0052");
	ret1 = fprintf(fppres, "|%0+*.*lls|\n", width, precision, var);
	ft_printf("#0052");
	ret2 = ft_printf("|%0+*.*lls|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0053");
	ret1 = fprintf(fppres, "|%0+*.*js|\n", width, precision, var);
	ft_printf("#0053");
	ret2 = ft_printf("|%0+*.*js|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0054");
	ret1 = fprintf(fppres, "|%0+*.*zs|\n", width, precision, var);
	ft_printf("#0054");
	ret2 = ft_printf("|%0+*.*zs|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0055");
	ret1 = fprintf(fppres, "|%0+*.*s|\n", width, precision, var);
	ft_printf("#0055");
	ret2 = ft_printf("|%0+*.*s|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0056");
	ret1 = fprintf(fppres, "|%0+*.*S|\n", width, precision, var);
	ft_printf("#0056");
	ret2 = ft_printf("|%0+*.*S|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0057");
	ret1 = fprintf(fppres, "|%0+*.*hhS|\n", width, precision, var);
	ft_printf("#0057");
	ret2 = ft_printf("|%0+*.*hhS|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0058");
	ret1 = fprintf(fppres, "|%0+*.*hS|\n", width, precision, var);
	ft_printf("#0058");
	ret2 = ft_printf("|%0+*.*hS|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0059");
	ret1 = fprintf(fppres, "|%0+*.*lS|\n", width, precision, var);
	ft_printf("#0059");
	ret2 = ft_printf("|%0+*.*lS|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0060");
	ret1 = fprintf(fppres, "|%0+*.*llS|\n", width, precision, var);
	ft_printf("#0060");
	ret2 = ft_printf("|%0+*.*llS|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0061");
	ret1 = fprintf(fppres, "|%0+*.*jS|\n", width, precision, var);
	ft_printf("#0061");
	ret2 = ft_printf("|%0+*.*jS|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0062");
	ret1 = fprintf(fppres, "|%0+*.*zS|\n", width, precision, var);
	ft_printf("#0062");
	ret2 = ft_printf("|%0+*.*zS|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0063");
	ret1 = fprintf(fppres, "|%0+*.*S|\n", width, precision, var);
	ft_printf("#0063");
	ret2 = ft_printf("|%0+*.*S|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0064");
	ret1 = fprintf(fppres, "|%-*.*s|\n", width, precision, var);
	ft_printf("#0064");
	ret2 = ft_printf("|%-*.*s|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0065");
	ret1 = fprintf(fppres, "|%-*.*hhs|\n", width, precision, var);
	ft_printf("#0065");
	ret2 = ft_printf("|%-*.*hhs|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0066");
	ret1 = fprintf(fppres, "|%-*.*hs|\n", width, precision, var);
	ft_printf("#0066");
	ret2 = ft_printf("|%-*.*hs|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0067");
	ret1 = fprintf(fppres, "|%-*.*ls|\n", width, precision, var);
	ft_printf("#0067");
	ret2 = ft_printf("|%-*.*ls|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0068");
	ret1 = fprintf(fppres, "|%-*.*lls|\n", width, precision, var);
	ft_printf("#0068");
	ret2 = ft_printf("|%-*.*lls|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0069");
	ret1 = fprintf(fppres, "|%-*.*js|\n", width, precision, var);
	ft_printf("#0069");
	ret2 = ft_printf("|%-*.*js|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0070");
	ret1 = fprintf(fppres, "|%-*.*zs|\n", width, precision, var);
	ft_printf("#0070");
	ret2 = ft_printf("|%-*.*zs|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0071");
	ret1 = fprintf(fppres, "|%-*.*s|\n", width, precision, var);
	ft_printf("#0071");
	ret2 = ft_printf("|%-*.*s|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0072");
	ret1 = fprintf(fppres, "|%-*.*S|\n", width, precision, var);
	ft_printf("#0072");
	ret2 = ft_printf("|%-*.*S|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0073");
	ret1 = fprintf(fppres, "|%-*.*hhS|\n", width, precision, var);
	ft_printf("#0073");
	ret2 = ft_printf("|%-*.*hhS|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0074");
	ret1 = fprintf(fppres, "|%-*.*hS|\n", width, precision, var);
	ft_printf("#0074");
	ret2 = ft_printf("|%-*.*hS|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0075");
	ret1 = fprintf(fppres, "|%-*.*lS|\n", width, precision, var);
	ft_printf("#0075");
	ret2 = ft_printf("|%-*.*lS|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0076");
	ret1 = fprintf(fppres, "|%-*.*llS|\n", width, precision, var);
	ft_printf("#0076");
	ret2 = ft_printf("|%-*.*llS|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0077");
	ret1 = fprintf(fppres, "|%-*.*jS|\n", width, precision, var);
	ft_printf("#0077");
	ret2 = ft_printf("|%-*.*jS|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0078");
	ret1 = fprintf(fppres, "|%-*.*zS|\n", width, precision, var);
	ft_printf("#0078");
	ret2 = ft_printf("|%-*.*zS|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0079");
	ret1 = fprintf(fppres, "|%-*.*S|\n", width, precision, var);
	ft_printf("#0079");
	ret2 = ft_printf("|%-*.*S|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0080");
	ret1 = fprintf(fppres, "|%0-*.*s|\n", width, precision, var);
	ft_printf("#0080");
	ret2 = ft_printf("|%0-*.*s|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0081");
	ret1 = fprintf(fppres, "|%0-*.*hhs|\n", width, precision, var);
	ft_printf("#0081");
	ret2 = ft_printf("|%0-*.*hhs|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0082");
	ret1 = fprintf(fppres, "|%0-*.*hs|\n", width, precision, var);
	ft_printf("#0082");
	ret2 = ft_printf("|%0-*.*hs|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0083");
	ret1 = fprintf(fppres, "|%0-*.*ls|\n", width, precision, var);
	ft_printf("#0083");
	ret2 = ft_printf("|%0-*.*ls|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0084");
	ret1 = fprintf(fppres, "|%0-*.*lls|\n", width, precision, var);
	ft_printf("#0084");
	ret2 = ft_printf("|%0-*.*lls|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0085");
	ret1 = fprintf(fppres, "|%0-*.*js|\n", width, precision, var);
	ft_printf("#0085");
	ret2 = ft_printf("|%0-*.*js|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0086");
	ret1 = fprintf(fppres, "|%0-*.*zs|\n", width, precision, var);
	ft_printf("#0086");
	ret2 = ft_printf("|%0-*.*zs|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0087");
	ret1 = fprintf(fppres, "|%0-*.*s|\n", width, precision, var);
	ft_printf("#0087");
	ret2 = ft_printf("|%0-*.*s|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0088");
	ret1 = fprintf(fppres, "|%0-*.*S|\n", width, precision, var);
	ft_printf("#0088");
	ret2 = ft_printf("|%0-*.*S|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0089");
	ret1 = fprintf(fppres, "|%0-*.*hhS|\n", width, precision, var);
	ft_printf("#0089");
	ret2 = ft_printf("|%0-*.*hhS|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0090");
	ret1 = fprintf(fppres, "|%0-*.*hS|\n", width, precision, var);
	ft_printf("#0090");
	ret2 = ft_printf("|%0-*.*hS|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0091");
	ret1 = fprintf(fppres, "|%0-*.*lS|\n", width, precision, var);
	ft_printf("#0091");
	ret2 = ft_printf("|%0-*.*lS|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0092");
	ret1 = fprintf(fppres, "|%0-*.*llS|\n", width, precision, var);
	ft_printf("#0092");
	ret2 = ft_printf("|%0-*.*llS|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0093");
	ret1 = fprintf(fppres, "|%0-*.*jS|\n", width, precision, var);
	ft_printf("#0093");
	ret2 = ft_printf("|%0-*.*jS|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0094");
	ret1 = fprintf(fppres, "|%0-*.*zS|\n", width, precision, var);
	ft_printf("#0094");
	ret2 = ft_printf("|%0-*.*zS|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0095");
	ret1 = fprintf(fppres, "|%0-*.*S|\n", width, precision, var);
	ft_printf("#0095");
	ret2 = ft_printf("|%0-*.*S|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0096");
	ret1 = fprintf(fppres, "|%+-*.*s|\n", width, precision, var);
	ft_printf("#0096");
	ret2 = ft_printf("|%+-*.*s|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0097");
	ret1 = fprintf(fppres, "|%+-*.*hhs|\n", width, precision, var);
	ft_printf("#0097");
	ret2 = ft_printf("|%+-*.*hhs|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0098");
	ret1 = fprintf(fppres, "|%+-*.*hs|\n", width, precision, var);
	ft_printf("#0098");
	ret2 = ft_printf("|%+-*.*hs|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0099");
	ret1 = fprintf(fppres, "|%+-*.*ls|\n", width, precision, var);
	ft_printf("#0099");
	ret2 = ft_printf("|%+-*.*ls|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0100");
	ret1 = fprintf(fppres, "|%+-*.*lls|\n", width, precision, var);
	ft_printf("#0100");
	ret2 = ft_printf("|%+-*.*lls|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0101");
	ret1 = fprintf(fppres, "|%+-*.*js|\n", width, precision, var);
	ft_printf("#0101");
	ret2 = ft_printf("|%+-*.*js|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0102");
	ret1 = fprintf(fppres, "|%+-*.*zs|\n", width, precision, var);
	ft_printf("#0102");
	ret2 = ft_printf("|%+-*.*zs|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0103");
	ret1 = fprintf(fppres, "|%+-*.*s|\n", width, precision, var);
	ft_printf("#0103");
	ret2 = ft_printf("|%+-*.*s|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0104");
	ret1 = fprintf(fppres, "|%+-*.*S|\n", width, precision, var);
	ft_printf("#0104");
	ret2 = ft_printf("|%+-*.*S|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0105");
	ret1 = fprintf(fppres, "|%+-*.*hhS|\n", width, precision, var);
	ft_printf("#0105");
	ret2 = ft_printf("|%+-*.*hhS|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0106");
	ret1 = fprintf(fppres, "|%+-*.*hS|\n", width, precision, var);
	ft_printf("#0106");
	ret2 = ft_printf("|%+-*.*hS|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0107");
	ret1 = fprintf(fppres, "|%+-*.*lS|\n", width, precision, var);
	ft_printf("#0107");
	ret2 = ft_printf("|%+-*.*lS|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0108");
	ret1 = fprintf(fppres, "|%+-*.*llS|\n", width, precision, var);
	ft_printf("#0108");
	ret2 = ft_printf("|%+-*.*llS|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0109");
	ret1 = fprintf(fppres, "|%+-*.*jS|\n", width, precision, var);
	ft_printf("#0109");
	ret2 = ft_printf("|%+-*.*jS|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0110");
	ret1 = fprintf(fppres, "|%+-*.*zS|\n", width, precision, var);
	ft_printf("#0110");
	ret2 = ft_printf("|%+-*.*zS|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0111");
	ret1 = fprintf(fppres, "|%+-*.*S|\n", width, precision, var);
	ft_printf("#0111");
	ret2 = ft_printf("|%+-*.*S|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0112");
	ret1 = fprintf(fppres, "|%0+-*.*s|\n", width, precision, var);
	ft_printf("#0112");
	ret2 = ft_printf("|%0+-*.*s|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0113");
	ret1 = fprintf(fppres, "|%0+-*.*hhs|\n", width, precision, var);
	ft_printf("#0113");
	ret2 = ft_printf("|%0+-*.*hhs|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0114");
	ret1 = fprintf(fppres, "|%0+-*.*hs|\n", width, precision, var);
	ft_printf("#0114");
	ret2 = ft_printf("|%0+-*.*hs|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0115");
	ret1 = fprintf(fppres, "|%0+-*.*ls|\n", width, precision, var);
	ft_printf("#0115");
	ret2 = ft_printf("|%0+-*.*ls|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0116");
	ret1 = fprintf(fppres, "|%0+-*.*lls|\n", width, precision, var);
	ft_printf("#0116");
	ret2 = ft_printf("|%0+-*.*lls|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0117");
	ret1 = fprintf(fppres, "|%0+-*.*js|\n", width, precision, var);
	ft_printf("#0117");
	ret2 = ft_printf("|%0+-*.*js|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0118");
	ret1 = fprintf(fppres, "|%0+-*.*zs|\n", width, precision, var);
	ft_printf("#0118");
	ret2 = ft_printf("|%0+-*.*zs|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0119");
	ret1 = fprintf(fppres, "|%0+-*.*s|\n", width, precision, var);
	ft_printf("#0119");
	ret2 = ft_printf("|%0+-*.*s|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0120");
	ret1 = fprintf(fppres, "|%0+-*.*S|\n", width, precision, var);
	ft_printf("#0120");
	ret2 = ft_printf("|%0+-*.*S|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0121");
	ret1 = fprintf(fppres, "|%0+-*.*hhS|\n", width, precision, var);
	ft_printf("#0121");
	ret2 = ft_printf("|%0+-*.*hhS|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0122");
	ret1 = fprintf(fppres, "|%0+-*.*hS|\n", width, precision, var);
	ft_printf("#0122");
	ret2 = ft_printf("|%0+-*.*hS|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0123");
	ret1 = fprintf(fppres, "|%0+-*.*lS|\n", width, precision, var);
	ft_printf("#0123");
	ret2 = ft_printf("|%0+-*.*lS|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0124");
	ret1 = fprintf(fppres, "|%0+-*.*llS|\n", width, precision, var);
	ft_printf("#0124");
	ret2 = ft_printf("|%0+-*.*llS|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0125");
	ret1 = fprintf(fppres, "|%0+-*.*jS|\n", width, precision, var);
	ft_printf("#0125");
	ret2 = ft_printf("|%0+-*.*jS|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0126");
	ret1 = fprintf(fppres, "|%0+-*.*zS|\n", width, precision, var);
	ft_printf("#0126");
	ret2 = ft_printf("|%0+-*.*zS|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0127");
	ret1 = fprintf(fppres, "|%0+-*.*S|\n", width, precision, var);
	ft_printf("#0127");
	ret2 = ft_printf("|%0+-*.*S|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0128");
	ret1 = fprintf(fppres, "|%#*.*s|\n", width, precision, var);
	ft_printf("#0128");
	ret2 = ft_printf("|%#*.*s|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0129");
	ret1 = fprintf(fppres, "|%#*.*hhs|\n", width, precision, var);
	ft_printf("#0129");
	ret2 = ft_printf("|%#*.*hhs|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0130");
	ret1 = fprintf(fppres, "|%#*.*hs|\n", width, precision, var);
	ft_printf("#0130");
	ret2 = ft_printf("|%#*.*hs|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0131");
	ret1 = fprintf(fppres, "|%#*.*ls|\n", width, precision, var);
	ft_printf("#0131");
	ret2 = ft_printf("|%#*.*ls|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0132");
	ret1 = fprintf(fppres, "|%#*.*lls|\n", width, precision, var);
	ft_printf("#0132");
	ret2 = ft_printf("|%#*.*lls|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0133");
	ret1 = fprintf(fppres, "|%#*.*js|\n", width, precision, var);
	ft_printf("#0133");
	ret2 = ft_printf("|%#*.*js|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0134");
	ret1 = fprintf(fppres, "|%#*.*zs|\n", width, precision, var);
	ft_printf("#0134");
	ret2 = ft_printf("|%#*.*zs|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0135");
	ret1 = fprintf(fppres, "|%#*.*s|\n", width, precision, var);
	ft_printf("#0135");
	ret2 = ft_printf("|%#*.*s|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0136");
	ret1 = fprintf(fppres, "|%#*.*S|\n", width, precision, var);
	ft_printf("#0136");
	ret2 = ft_printf("|%#*.*S|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0137");
	ret1 = fprintf(fppres, "|%#*.*hhS|\n", width, precision, var);
	ft_printf("#0137");
	ret2 = ft_printf("|%#*.*hhS|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0138");
	ret1 = fprintf(fppres, "|%#*.*hS|\n", width, precision, var);
	ft_printf("#0138");
	ret2 = ft_printf("|%#*.*hS|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0139");
	ret1 = fprintf(fppres, "|%#*.*lS|\n", width, precision, var);
	ft_printf("#0139");
	ret2 = ft_printf("|%#*.*lS|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0140");
	ret1 = fprintf(fppres, "|%#*.*llS|\n", width, precision, var);
	ft_printf("#0140");
	ret2 = ft_printf("|%#*.*llS|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0141");
	ret1 = fprintf(fppres, "|%#*.*jS|\n", width, precision, var);
	ft_printf("#0141");
	ret2 = ft_printf("|%#*.*jS|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0142");
	ret1 = fprintf(fppres, "|%#*.*zS|\n", width, precision, var);
	ft_printf("#0142");
	ret2 = ft_printf("|%#*.*zS|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0143");
	ret1 = fprintf(fppres, "|%#*.*S|\n", width, precision, var);
	ft_printf("#0143");
	ret2 = ft_printf("|%#*.*S|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0144");
	ret1 = fprintf(fppres, "|%0#*.*s|\n", width, precision, var);
	ft_printf("#0144");
	ret2 = ft_printf("|%0#*.*s|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0145");
	ret1 = fprintf(fppres, "|%0#*.*hhs|\n", width, precision, var);
	ft_printf("#0145");
	ret2 = ft_printf("|%0#*.*hhs|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0146");
	ret1 = fprintf(fppres, "|%0#*.*hs|\n", width, precision, var);
	ft_printf("#0146");
	ret2 = ft_printf("|%0#*.*hs|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0147");
	ret1 = fprintf(fppres, "|%0#*.*ls|\n", width, precision, var);
	ft_printf("#0147");
	ret2 = ft_printf("|%0#*.*ls|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0148");
	ret1 = fprintf(fppres, "|%0#*.*lls|\n", width, precision, var);
	ft_printf("#0148");
	ret2 = ft_printf("|%0#*.*lls|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0149");
	ret1 = fprintf(fppres, "|%0#*.*js|\n", width, precision, var);
	ft_printf("#0149");
	ret2 = ft_printf("|%0#*.*js|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0150");
	ret1 = fprintf(fppres, "|%0#*.*zs|\n", width, precision, var);
	ft_printf("#0150");
	ret2 = ft_printf("|%0#*.*zs|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0151");
	ret1 = fprintf(fppres, "|%0#*.*s|\n", width, precision, var);
	ft_printf("#0151");
	ret2 = ft_printf("|%0#*.*s|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0152");
	ret1 = fprintf(fppres, "|%0#*.*S|\n", width, precision, var);
	ft_printf("#0152");
	ret2 = ft_printf("|%0#*.*S|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0153");
	ret1 = fprintf(fppres, "|%0#*.*hhS|\n", width, precision, var);
	ft_printf("#0153");
	ret2 = ft_printf("|%0#*.*hhS|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0154");
	ret1 = fprintf(fppres, "|%0#*.*hS|\n", width, precision, var);
	ft_printf("#0154");
	ret2 = ft_printf("|%0#*.*hS|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0155");
	ret1 = fprintf(fppres, "|%0#*.*lS|\n", width, precision, var);
	ft_printf("#0155");
	ret2 = ft_printf("|%0#*.*lS|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0156");
	ret1 = fprintf(fppres, "|%0#*.*llS|\n", width, precision, var);
	ft_printf("#0156");
	ret2 = ft_printf("|%0#*.*llS|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0157");
	ret1 = fprintf(fppres, "|%0#*.*jS|\n", width, precision, var);
	ft_printf("#0157");
	ret2 = ft_printf("|%0#*.*jS|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0158");
	ret1 = fprintf(fppres, "|%0#*.*zS|\n", width, precision, var);
	ft_printf("#0158");
	ret2 = ft_printf("|%0#*.*zS|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0159");
	ret1 = fprintf(fppres, "|%0#*.*S|\n", width, precision, var);
	ft_printf("#0159");
	ret2 = ft_printf("|%0#*.*S|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0160");
	ret1 = fprintf(fppres, "|%+#*.*s|\n", width, precision, var);
	ft_printf("#0160");
	ret2 = ft_printf("|%+#*.*s|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0161");
	ret1 = fprintf(fppres, "|%+#*.*hhs|\n", width, precision, var);
	ft_printf("#0161");
	ret2 = ft_printf("|%+#*.*hhs|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0162");
	ret1 = fprintf(fppres, "|%+#*.*hs|\n", width, precision, var);
	ft_printf("#0162");
	ret2 = ft_printf("|%+#*.*hs|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0163");
	ret1 = fprintf(fppres, "|%+#*.*ls|\n", width, precision, var);
	ft_printf("#0163");
	ret2 = ft_printf("|%+#*.*ls|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0164");
	ret1 = fprintf(fppres, "|%+#*.*lls|\n", width, precision, var);
	ft_printf("#0164");
	ret2 = ft_printf("|%+#*.*lls|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0165");
	ret1 = fprintf(fppres, "|%+#*.*js|\n", width, precision, var);
	ft_printf("#0165");
	ret2 = ft_printf("|%+#*.*js|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0166");
	ret1 = fprintf(fppres, "|%+#*.*zs|\n", width, precision, var);
	ft_printf("#0166");
	ret2 = ft_printf("|%+#*.*zs|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0167");
	ret1 = fprintf(fppres, "|%+#*.*s|\n", width, precision, var);
	ft_printf("#0167");
	ret2 = ft_printf("|%+#*.*s|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0168");
	ret1 = fprintf(fppres, "|%+#*.*S|\n", width, precision, var);
	ft_printf("#0168");
	ret2 = ft_printf("|%+#*.*S|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0169");
	ret1 = fprintf(fppres, "|%+#*.*hhS|\n", width, precision, var);
	ft_printf("#0169");
	ret2 = ft_printf("|%+#*.*hhS|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0170");
	ret1 = fprintf(fppres, "|%+#*.*hS|\n", width, precision, var);
	ft_printf("#0170");
	ret2 = ft_printf("|%+#*.*hS|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0171");
	ret1 = fprintf(fppres, "|%+#*.*lS|\n", width, precision, var);
	ft_printf("#0171");
	ret2 = ft_printf("|%+#*.*lS|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0172");
	ret1 = fprintf(fppres, "|%+#*.*llS|\n", width, precision, var);
	ft_printf("#0172");
	ret2 = ft_printf("|%+#*.*llS|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0173");
	ret1 = fprintf(fppres, "|%+#*.*jS|\n", width, precision, var);
	ft_printf("#0173");
	ret2 = ft_printf("|%+#*.*jS|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0174");
	ret1 = fprintf(fppres, "|%+#*.*zS|\n", width, precision, var);
	ft_printf("#0174");
	ret2 = ft_printf("|%+#*.*zS|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0175");
	ret1 = fprintf(fppres, "|%+#*.*S|\n", width, precision, var);
	ft_printf("#0175");
	ret2 = ft_printf("|%+#*.*S|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0176");
	ret1 = fprintf(fppres, "|%0+#*.*s|\n", width, precision, var);
	ft_printf("#0176");
	ret2 = ft_printf("|%0+#*.*s|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0177");
	ret1 = fprintf(fppres, "|%0+#*.*hhs|\n", width, precision, var);
	ft_printf("#0177");
	ret2 = ft_printf("|%0+#*.*hhs|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0178");
	ret1 = fprintf(fppres, "|%0+#*.*hs|\n", width, precision, var);
	ft_printf("#0178");
	ret2 = ft_printf("|%0+#*.*hs|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0179");
	ret1 = fprintf(fppres, "|%0+#*.*ls|\n", width, precision, var);
	ft_printf("#0179");
	ret2 = ft_printf("|%0+#*.*ls|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0180");
	ret1 = fprintf(fppres, "|%0+#*.*lls|\n", width, precision, var);
	ft_printf("#0180");
	ret2 = ft_printf("|%0+#*.*lls|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0181");
	ret1 = fprintf(fppres, "|%0+#*.*js|\n", width, precision, var);
	ft_printf("#0181");
	ret2 = ft_printf("|%0+#*.*js|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0182");
	ret1 = fprintf(fppres, "|%0+#*.*zs|\n", width, precision, var);
	ft_printf("#0182");
	ret2 = ft_printf("|%0+#*.*zs|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0183");
	ret1 = fprintf(fppres, "|%0+#*.*s|\n", width, precision, var);
	ft_printf("#0183");
	ret2 = ft_printf("|%0+#*.*s|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0184");
	ret1 = fprintf(fppres, "|%0+#*.*S|\n", width, precision, var);
	ft_printf("#0184");
	ret2 = ft_printf("|%0+#*.*S|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0185");
	ret1 = fprintf(fppres, "|%0+#*.*hhS|\n", width, precision, var);
	ft_printf("#0185");
	ret2 = ft_printf("|%0+#*.*hhS|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0186");
	ret1 = fprintf(fppres, "|%0+#*.*hS|\n", width, precision, var);
	ft_printf("#0186");
	ret2 = ft_printf("|%0+#*.*hS|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0187");
	ret1 = fprintf(fppres, "|%0+#*.*lS|\n", width, precision, var);
	ft_printf("#0187");
	ret2 = ft_printf("|%0+#*.*lS|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0188");
	ret1 = fprintf(fppres, "|%0+#*.*llS|\n", width, precision, var);
	ft_printf("#0188");
	ret2 = ft_printf("|%0+#*.*llS|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0189");
	ret1 = fprintf(fppres, "|%0+#*.*jS|\n", width, precision, var);
	ft_printf("#0189");
	ret2 = ft_printf("|%0+#*.*jS|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0190");
	ret1 = fprintf(fppres, "|%0+#*.*zS|\n", width, precision, var);
	ft_printf("#0190");
	ret2 = ft_printf("|%0+#*.*zS|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0191");
	ret1 = fprintf(fppres, "|%0+#*.*S|\n", width, precision, var);
	ft_printf("#0191");
	ret2 = ft_printf("|%0+#*.*S|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0192");
	ret1 = fprintf(fppres, "|%-#*.*s|\n", width, precision, var);
	ft_printf("#0192");
	ret2 = ft_printf("|%-#*.*s|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0193");
	ret1 = fprintf(fppres, "|%-#*.*hhs|\n", width, precision, var);
	ft_printf("#0193");
	ret2 = ft_printf("|%-#*.*hhs|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0194");
	ret1 = fprintf(fppres, "|%-#*.*hs|\n", width, precision, var);
	ft_printf("#0194");
	ret2 = ft_printf("|%-#*.*hs|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0195");
	ret1 = fprintf(fppres, "|%-#*.*ls|\n", width, precision, var);
	ft_printf("#0195");
	ret2 = ft_printf("|%-#*.*ls|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0196");
	ret1 = fprintf(fppres, "|%-#*.*lls|\n", width, precision, var);
	ft_printf("#0196");
	ret2 = ft_printf("|%-#*.*lls|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0197");
	ret1 = fprintf(fppres, "|%-#*.*js|\n", width, precision, var);
	ft_printf("#0197");
	ret2 = ft_printf("|%-#*.*js|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0198");
	ret1 = fprintf(fppres, "|%-#*.*zs|\n", width, precision, var);
	ft_printf("#0198");
	ret2 = ft_printf("|%-#*.*zs|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0199");
	ret1 = fprintf(fppres, "|%-#*.*s|\n", width, precision, var);
	ft_printf("#0199");
	ret2 = ft_printf("|%-#*.*s|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0200");
	ret1 = fprintf(fppres, "|%-#*.*S|\n", width, precision, var);
	ft_printf("#0200");
	ret2 = ft_printf("|%-#*.*S|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0201");
	ret1 = fprintf(fppres, "|%-#*.*hhS|\n", width, precision, var);
	ft_printf("#0201");
	ret2 = ft_printf("|%-#*.*hhS|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0202");
	ret1 = fprintf(fppres, "|%-#*.*hS|\n", width, precision, var);
	ft_printf("#0202");
	ret2 = ft_printf("|%-#*.*hS|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0203");
	ret1 = fprintf(fppres, "|%-#*.*lS|\n", width, precision, var);
	ft_printf("#0203");
	ret2 = ft_printf("|%-#*.*lS|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0204");
	ret1 = fprintf(fppres, "|%-#*.*llS|\n", width, precision, var);
	ft_printf("#0204");
	ret2 = ft_printf("|%-#*.*llS|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0205");
	ret1 = fprintf(fppres, "|%-#*.*jS|\n", width, precision, var);
	ft_printf("#0205");
	ret2 = ft_printf("|%-#*.*jS|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0206");
	ret1 = fprintf(fppres, "|%-#*.*zS|\n", width, precision, var);
	ft_printf("#0206");
	ret2 = ft_printf("|%-#*.*zS|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0207");
	ret1 = fprintf(fppres, "|%-#*.*S|\n", width, precision, var);
	ft_printf("#0207");
	ret2 = ft_printf("|%-#*.*S|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0208");
	ret1 = fprintf(fppres, "|%0-#*.*s|\n", width, precision, var);
	ft_printf("#0208");
	ret2 = ft_printf("|%0-#*.*s|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0209");
	ret1 = fprintf(fppres, "|%0-#*.*hhs|\n", width, precision, var);
	ft_printf("#0209");
	ret2 = ft_printf("|%0-#*.*hhs|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0210");
	ret1 = fprintf(fppres, "|%0-#*.*hs|\n", width, precision, var);
	ft_printf("#0210");
	ret2 = ft_printf("|%0-#*.*hs|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0211");
	ret1 = fprintf(fppres, "|%0-#*.*ls|\n", width, precision, var);
	ft_printf("#0211");
	ret2 = ft_printf("|%0-#*.*ls|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0212");
	ret1 = fprintf(fppres, "|%0-#*.*lls|\n", width, precision, var);
	ft_printf("#0212");
	ret2 = ft_printf("|%0-#*.*lls|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0213");
	ret1 = fprintf(fppres, "|%0-#*.*js|\n", width, precision, var);
	ft_printf("#0213");
	ret2 = ft_printf("|%0-#*.*js|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0214");
	ret1 = fprintf(fppres, "|%0-#*.*zs|\n", width, precision, var);
	ft_printf("#0214");
	ret2 = ft_printf("|%0-#*.*zs|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0215");
	ret1 = fprintf(fppres, "|%0-#*.*s|\n", width, precision, var);
	ft_printf("#0215");
	ret2 = ft_printf("|%0-#*.*s|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0216");
	ret1 = fprintf(fppres, "|%0-#*.*S|\n", width, precision, var);
	ft_printf("#0216");
	ret2 = ft_printf("|%0-#*.*S|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0217");
	ret1 = fprintf(fppres, "|%0-#*.*hhS|\n", width, precision, var);
	ft_printf("#0217");
	ret2 = ft_printf("|%0-#*.*hhS|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0218");
	ret1 = fprintf(fppres, "|%0-#*.*hS|\n", width, precision, var);
	ft_printf("#0218");
	ret2 = ft_printf("|%0-#*.*hS|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0219");
	ret1 = fprintf(fppres, "|%0-#*.*lS|\n", width, precision, var);
	ft_printf("#0219");
	ret2 = ft_printf("|%0-#*.*lS|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0220");
	ret1 = fprintf(fppres, "|%0-#*.*llS|\n", width, precision, var);
	ft_printf("#0220");
	ret2 = ft_printf("|%0-#*.*llS|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0221");
	ret1 = fprintf(fppres, "|%0-#*.*jS|\n", width, precision, var);
	ft_printf("#0221");
	ret2 = ft_printf("|%0-#*.*jS|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0222");
	ret1 = fprintf(fppres, "|%0-#*.*zS|\n", width, precision, var);
	ft_printf("#0222");
	ret2 = ft_printf("|%0-#*.*zS|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0223");
	ret1 = fprintf(fppres, "|%0-#*.*S|\n", width, precision, var);
	ft_printf("#0223");
	ret2 = ft_printf("|%0-#*.*S|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0224");
	ret1 = fprintf(fppres, "|%+-#*.*s|\n", width, precision, var);
	ft_printf("#0224");
	ret2 = ft_printf("|%+-#*.*s|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0225");
	ret1 = fprintf(fppres, "|%+-#*.*hhs|\n", width, precision, var);
	ft_printf("#0225");
	ret2 = ft_printf("|%+-#*.*hhs|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0226");
	ret1 = fprintf(fppres, "|%+-#*.*hs|\n", width, precision, var);
	ft_printf("#0226");
	ret2 = ft_printf("|%+-#*.*hs|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0227");
	ret1 = fprintf(fppres, "|%+-#*.*ls|\n", width, precision, var);
	ft_printf("#0227");
	ret2 = ft_printf("|%+-#*.*ls|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0228");
	ret1 = fprintf(fppres, "|%+-#*.*lls|\n", width, precision, var);
	ft_printf("#0228");
	ret2 = ft_printf("|%+-#*.*lls|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0229");
	ret1 = fprintf(fppres, "|%+-#*.*js|\n", width, precision, var);
	ft_printf("#0229");
	ret2 = ft_printf("|%+-#*.*js|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0230");
	ret1 = fprintf(fppres, "|%+-#*.*zs|\n", width, precision, var);
	ft_printf("#0230");
	ret2 = ft_printf("|%+-#*.*zs|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0231");
	ret1 = fprintf(fppres, "|%+-#*.*s|\n", width, precision, var);
	ft_printf("#0231");
	ret2 = ft_printf("|%+-#*.*s|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0232");
	ret1 = fprintf(fppres, "|%+-#*.*S|\n", width, precision, var);
	ft_printf("#0232");
	ret2 = ft_printf("|%+-#*.*S|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0233");
	ret1 = fprintf(fppres, "|%+-#*.*hhS|\n", width, precision, var);
	ft_printf("#0233");
	ret2 = ft_printf("|%+-#*.*hhS|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0234");
	ret1 = fprintf(fppres, "|%+-#*.*hS|\n", width, precision, var);
	ft_printf("#0234");
	ret2 = ft_printf("|%+-#*.*hS|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0235");
	ret1 = fprintf(fppres, "|%+-#*.*lS|\n", width, precision, var);
	ft_printf("#0235");
	ret2 = ft_printf("|%+-#*.*lS|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0236");
	ret1 = fprintf(fppres, "|%+-#*.*llS|\n", width, precision, var);
	ft_printf("#0236");
	ret2 = ft_printf("|%+-#*.*llS|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0237");
	ret1 = fprintf(fppres, "|%+-#*.*jS|\n", width, precision, var);
	ft_printf("#0237");
	ret2 = ft_printf("|%+-#*.*jS|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0238");
	ret1 = fprintf(fppres, "|%+-#*.*zS|\n", width, precision, var);
	ft_printf("#0238");
	ret2 = ft_printf("|%+-#*.*zS|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0239");
	ret1 = fprintf(fppres, "|%+-#*.*S|\n", width, precision, var);
	ft_printf("#0239");
	ret2 = ft_printf("|%+-#*.*S|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0240");
	ret1 = fprintf(fppres, "|%0+-#*.*s|\n", width, precision, var);
	ft_printf("#0240");
	ret2 = ft_printf("|%0+-#*.*s|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0241");
	ret1 = fprintf(fppres, "|%0+-#*.*hhs|\n", width, precision, var);
	ft_printf("#0241");
	ret2 = ft_printf("|%0+-#*.*hhs|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0242");
	ret1 = fprintf(fppres, "|%0+-#*.*hs|\n", width, precision, var);
	ft_printf("#0242");
	ret2 = ft_printf("|%0+-#*.*hs|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0243");
	ret1 = fprintf(fppres, "|%0+-#*.*ls|\n", width, precision, var);
	ft_printf("#0243");
	ret2 = ft_printf("|%0+-#*.*ls|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0244");
	ret1 = fprintf(fppres, "|%0+-#*.*lls|\n", width, precision, var);
	ft_printf("#0244");
	ret2 = ft_printf("|%0+-#*.*lls|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0245");
	ret1 = fprintf(fppres, "|%0+-#*.*js|\n", width, precision, var);
	ft_printf("#0245");
	ret2 = ft_printf("|%0+-#*.*js|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0246");
	ret1 = fprintf(fppres, "|%0+-#*.*zs|\n", width, precision, var);
	ft_printf("#0246");
	ret2 = ft_printf("|%0+-#*.*zs|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0247");
	ret1 = fprintf(fppres, "|%0+-#*.*s|\n", width, precision, var);
	ft_printf("#0247");
	ret2 = ft_printf("|%0+-#*.*s|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0248");
	ret1 = fprintf(fppres, "|%0+-#*.*S|\n", width, precision, var);
	ft_printf("#0248");
	ret2 = ft_printf("|%0+-#*.*S|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0249");
	ret1 = fprintf(fppres, "|%0+-#*.*hhS|\n", width, precision, var);
	ft_printf("#0249");
	ret2 = ft_printf("|%0+-#*.*hhS|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0250");
	ret1 = fprintf(fppres, "|%0+-#*.*hS|\n", width, precision, var);
	ft_printf("#0250");
	ret2 = ft_printf("|%0+-#*.*hS|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0251");
	ret1 = fprintf(fppres, "|%0+-#*.*lS|\n", width, precision, var);
	ft_printf("#0251");
	ret2 = ft_printf("|%0+-#*.*lS|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0252");
	ret1 = fprintf(fppres, "|%0+-#*.*llS|\n", width, precision, var);
	ft_printf("#0252");
	ret2 = ft_printf("|%0+-#*.*llS|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0253");
	ret1 = fprintf(fppres, "|%0+-#*.*jS|\n", width, precision, var);
	ft_printf("#0253");
	ret2 = ft_printf("|%0+-#*.*jS|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0254");
	ret1 = fprintf(fppres, "|%0+-#*.*zS|\n", width, precision, var);
	ft_printf("#0254");
	ret2 = ft_printf("|%0+-#*.*zS|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0255");
	ret1 = fprintf(fppres, "|%0+-#*.*S|\n", width, precision, var);
	ft_printf("#0255");
	ret2 = ft_printf("|%0+-#*.*S|\n", width, precision, var);
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@	fclose(fppres);
	fclose(fppret);
	fclose(fpftret);
}
