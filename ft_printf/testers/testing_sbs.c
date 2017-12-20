#include <stdio.h>
#include <stdint.h>
#include <locale.h>
#include <wchar.h>
#include "libftprintf.h"

size_t testing_sbs_tests = 224;

void		testing_sbs(int width, int precision, wchar_t *var)
{
	int		ret1;
	int		ret2;
	char	*loc;
	FILE	*fppres, *fppret, *fpftret;

	loc = setlocale(LC_CTYPE, NULL);
	setlocale(LC_CTYPE, "");

	fppres = fopen("./files/main_printf_res", "a");
	fppret = fopen("./files/main_printf_ret", "a");
	fpftret = fopen("./files/main_ft_printf_ret", "a");

	setvbuf(fppres, NULL, _IONBF, 0);
	setvbuf(fppret, NULL, _IONBF, 0);
	setvbuf(fpftret, NULL, _IONBF, 0);

	fprintf(fppres, "===\\ NEW TEST\n");
	fprintf(fppres, "NAME = testing_sbs.c\n");
	fprintf(fppres, "TESTS = %zu\n", testing_sbs_tests);
	fprintf(fppres, "WIDTH = %d\n", width);
	fprintf(fppres, "PRECISION = %d\n", precision);
	fprintf(fppres, "VAR = \"%S\"\n", var);
	fprintf(fppres, "LOCALE = \"%s\"\n\n", loc);

	ft_printf("===\\ NEW TEST\n");
	ft_printf("NAME = testing_sbs.c\n");
	ft_printf("TESTS = %zu\n", testing_sbs_tests);
	ft_printf("WIDTH = %d\n", width);
	ft_printf("PRECISION = %d\n", precision);
	ft_printf("VAR = \"%S\"\n", var);
	ft_printf("LOCALE = \"%s\"\n\n", loc);

	setlocale(LC_CTYPE, loc);
	//@
	fprintf(fppres, "#0000");
	ret1 = fprintf(fppres, "|%*.*s|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0000") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%*.*s|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0001");
	ret1 = fprintf(fppres, "|%*.*hhs|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0001") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%*.*hhs|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0002");
	ret1 = fprintf(fppres, "|%*.*hs|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0002") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%*.*hs|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0003");
	ret1 = fprintf(fppres, "|%*.*ls|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0003") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%*.*ls|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0004");
	ret1 = fprintf(fppres, "|%*.*lls|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0004") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%*.*lls|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0005");
	ret1 = fprintf(fppres, "|%*.*js|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0005") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%*.*js|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0006");
	ret1 = fprintf(fppres, "|%*.*zs|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0006") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%*.*zs|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0007");
	ret1 = fprintf(fppres, "|%*.*S|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0007") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%*.*S|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0008");
	ret1 = fprintf(fppres, "|%*.*hhS|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0008") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%*.*hhS|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0009");
	ret1 = fprintf(fppres, "|%*.*hS|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0009") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%*.*hS|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0010");
	ret1 = fprintf(fppres, "|%*.*lS|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0010") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%*.*lS|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0011");
	ret1 = fprintf(fppres, "|%*.*llS|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0011") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%*.*llS|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0012");
	ret1 = fprintf(fppres, "|%*.*jS|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0012") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%*.*jS|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0013");
	ret1 = fprintf(fppres, "|%*.*zS|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0013") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%*.*zS|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0014");
	ret1 = fprintf(fppres, "|%0*.*s|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0014") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0*.*s|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0015");
	ret1 = fprintf(fppres, "|%0*.*hhs|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0015") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0*.*hhs|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0016");
	ret1 = fprintf(fppres, "|%0*.*hs|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0016") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0*.*hs|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0017");
	ret1 = fprintf(fppres, "|%0*.*ls|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0017") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0*.*ls|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0018");
	ret1 = fprintf(fppres, "|%0*.*lls|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0018") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0*.*lls|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0019");
	ret1 = fprintf(fppres, "|%0*.*js|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0019") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0*.*js|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0020");
	ret1 = fprintf(fppres, "|%0*.*zs|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0020") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0*.*zs|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0021");
	ret1 = fprintf(fppres, "|%0*.*S|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0021") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0*.*S|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0022");
	ret1 = fprintf(fppres, "|%0*.*hhS|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0022") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0*.*hhS|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0023");
	ret1 = fprintf(fppres, "|%0*.*hS|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0023") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0*.*hS|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0024");
	ret1 = fprintf(fppres, "|%0*.*lS|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0024") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0*.*lS|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0025");
	ret1 = fprintf(fppres, "|%0*.*llS|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0025") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0*.*llS|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0026");
	ret1 = fprintf(fppres, "|%0*.*jS|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0026") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0*.*jS|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0027");
	ret1 = fprintf(fppres, "|%0*.*zS|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0027") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0*.*zS|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0028");
	ret1 = fprintf(fppres, "|%+*.*s|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0028") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+*.*s|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0029");
	ret1 = fprintf(fppres, "|%+*.*hhs|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0029") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+*.*hhs|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0030");
	ret1 = fprintf(fppres, "|%+*.*hs|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0030") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+*.*hs|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0031");
	ret1 = fprintf(fppres, "|%+*.*ls|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0031") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+*.*ls|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0032");
	ret1 = fprintf(fppres, "|%+*.*lls|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0032") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+*.*lls|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0033");
	ret1 = fprintf(fppres, "|%+*.*js|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0033") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+*.*js|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0034");
	ret1 = fprintf(fppres, "|%+*.*zs|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0034") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+*.*zs|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0035");
	ret1 = fprintf(fppres, "|%+*.*S|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0035") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+*.*S|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0036");
	ret1 = fprintf(fppres, "|%+*.*hhS|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0036") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+*.*hhS|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0037");
	ret1 = fprintf(fppres, "|%+*.*hS|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0037") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+*.*hS|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0038");
	ret1 = fprintf(fppres, "|%+*.*lS|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0038") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+*.*lS|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0039");
	ret1 = fprintf(fppres, "|%+*.*llS|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0039") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+*.*llS|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0040");
	ret1 = fprintf(fppres, "|%+*.*jS|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0040") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+*.*jS|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0041");
	ret1 = fprintf(fppres, "|%+*.*zS|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0041") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+*.*zS|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0042");
	ret1 = fprintf(fppres, "|%0+*.*s|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0042") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+*.*s|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0043");
	ret1 = fprintf(fppres, "|%0+*.*hhs|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0043") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+*.*hhs|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0044");
	ret1 = fprintf(fppres, "|%0+*.*hs|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0044") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+*.*hs|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0045");
	ret1 = fprintf(fppres, "|%0+*.*ls|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0045") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+*.*ls|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0046");
	ret1 = fprintf(fppres, "|%0+*.*lls|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0046") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+*.*lls|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0047");
	ret1 = fprintf(fppres, "|%0+*.*js|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0047") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+*.*js|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0048");
	ret1 = fprintf(fppres, "|%0+*.*zs|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0048") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+*.*zs|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0049");
	ret1 = fprintf(fppres, "|%0+*.*S|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0049") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+*.*S|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0050");
	ret1 = fprintf(fppres, "|%0+*.*hhS|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0050") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+*.*hhS|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0051");
	ret1 = fprintf(fppres, "|%0+*.*hS|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0051") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+*.*hS|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0052");
	ret1 = fprintf(fppres, "|%0+*.*lS|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0052") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+*.*lS|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0053");
	ret1 = fprintf(fppres, "|%0+*.*llS|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0053") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+*.*llS|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0054");
	ret1 = fprintf(fppres, "|%0+*.*jS|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0054") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+*.*jS|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0055");
	ret1 = fprintf(fppres, "|%0+*.*zS|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0055") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+*.*zS|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0056");
	ret1 = fprintf(fppres, "|%-*.*s|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0056") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%-*.*s|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0057");
	ret1 = fprintf(fppres, "|%-*.*hhs|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0057") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%-*.*hhs|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0058");
	ret1 = fprintf(fppres, "|%-*.*hs|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0058") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%-*.*hs|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0059");
	ret1 = fprintf(fppres, "|%-*.*ls|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0059") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%-*.*ls|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0060");
	ret1 = fprintf(fppres, "|%-*.*lls|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0060") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%-*.*lls|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0061");
	ret1 = fprintf(fppres, "|%-*.*js|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0061") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%-*.*js|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0062");
	ret1 = fprintf(fppres, "|%-*.*zs|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0062") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%-*.*zs|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0063");
	ret1 = fprintf(fppres, "|%-*.*S|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0063") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%-*.*S|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0064");
	ret1 = fprintf(fppres, "|%-*.*hhS|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0064") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%-*.*hhS|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0065");
	ret1 = fprintf(fppres, "|%-*.*hS|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0065") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%-*.*hS|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0066");
	ret1 = fprintf(fppres, "|%-*.*lS|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0066") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%-*.*lS|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0067");
	ret1 = fprintf(fppres, "|%-*.*llS|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0067") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%-*.*llS|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0068");
	ret1 = fprintf(fppres, "|%-*.*jS|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0068") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%-*.*jS|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0069");
	ret1 = fprintf(fppres, "|%-*.*zS|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0069") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%-*.*zS|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0070");
	ret1 = fprintf(fppres, "|%0-*.*s|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0070") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0-*.*s|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0071");
	ret1 = fprintf(fppres, "|%0-*.*hhs|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0071") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0-*.*hhs|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0072");
	ret1 = fprintf(fppres, "|%0-*.*hs|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0072") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0-*.*hs|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0073");
	ret1 = fprintf(fppres, "|%0-*.*ls|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0073") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0-*.*ls|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0074");
	ret1 = fprintf(fppres, "|%0-*.*lls|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0074") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0-*.*lls|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0075");
	ret1 = fprintf(fppres, "|%0-*.*js|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0075") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0-*.*js|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0076");
	ret1 = fprintf(fppres, "|%0-*.*zs|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0076") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0-*.*zs|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0077");
	ret1 = fprintf(fppres, "|%0-*.*S|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0077") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0-*.*S|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0078");
	ret1 = fprintf(fppres, "|%0-*.*hhS|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0078") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0-*.*hhS|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0079");
	ret1 = fprintf(fppres, "|%0-*.*hS|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0079") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0-*.*hS|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0080");
	ret1 = fprintf(fppres, "|%0-*.*lS|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0080") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0-*.*lS|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0081");
	ret1 = fprintf(fppres, "|%0-*.*llS|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0081") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0-*.*llS|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0082");
	ret1 = fprintf(fppres, "|%0-*.*jS|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0082") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0-*.*jS|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0083");
	ret1 = fprintf(fppres, "|%0-*.*zS|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0083") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0-*.*zS|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0084");
	ret1 = fprintf(fppres, "|%+-*.*s|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0084") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+-*.*s|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0085");
	ret1 = fprintf(fppres, "|%+-*.*hhs|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0085") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+-*.*hhs|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0086");
	ret1 = fprintf(fppres, "|%+-*.*hs|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0086") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+-*.*hs|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0087");
	ret1 = fprintf(fppres, "|%+-*.*ls|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0087") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+-*.*ls|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0088");
	ret1 = fprintf(fppres, "|%+-*.*lls|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0088") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+-*.*lls|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0089");
	ret1 = fprintf(fppres, "|%+-*.*js|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0089") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+-*.*js|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0090");
	ret1 = fprintf(fppres, "|%+-*.*zs|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0090") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+-*.*zs|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0091");
	ret1 = fprintf(fppres, "|%+-*.*S|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0091") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+-*.*S|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0092");
	ret1 = fprintf(fppres, "|%+-*.*hhS|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0092") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+-*.*hhS|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0093");
	ret1 = fprintf(fppres, "|%+-*.*hS|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0093") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+-*.*hS|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0094");
	ret1 = fprintf(fppres, "|%+-*.*lS|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0094") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+-*.*lS|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0095");
	ret1 = fprintf(fppres, "|%+-*.*llS|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0095") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+-*.*llS|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0096");
	ret1 = fprintf(fppres, "|%+-*.*jS|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0096") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+-*.*jS|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0097");
	ret1 = fprintf(fppres, "|%+-*.*zS|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0097") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+-*.*zS|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0098");
	ret1 = fprintf(fppres, "|%0+-*.*s|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0098") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+-*.*s|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0099");
	ret1 = fprintf(fppres, "|%0+-*.*hhs|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0099") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+-*.*hhs|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0100");
	ret1 = fprintf(fppres, "|%0+-*.*hs|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0100") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+-*.*hs|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0101");
	ret1 = fprintf(fppres, "|%0+-*.*ls|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0101") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+-*.*ls|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0102");
	ret1 = fprintf(fppres, "|%0+-*.*lls|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0102") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+-*.*lls|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0103");
	ret1 = fprintf(fppres, "|%0+-*.*js|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0103") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+-*.*js|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0104");
	ret1 = fprintf(fppres, "|%0+-*.*zs|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0104") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+-*.*zs|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0105");
	ret1 = fprintf(fppres, "|%0+-*.*S|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0105") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+-*.*S|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0106");
	ret1 = fprintf(fppres, "|%0+-*.*hhS|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0106") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+-*.*hhS|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0107");
	ret1 = fprintf(fppres, "|%0+-*.*hS|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0107") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+-*.*hS|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0108");
	ret1 = fprintf(fppres, "|%0+-*.*lS|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0108") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+-*.*lS|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0109");
	ret1 = fprintf(fppres, "|%0+-*.*llS|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0109") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+-*.*llS|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0110");
	ret1 = fprintf(fppres, "|%0+-*.*jS|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0110") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+-*.*jS|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0111");
	ret1 = fprintf(fppres, "|%0+-*.*zS|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0111") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+-*.*zS|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0112");
	ret1 = fprintf(fppres, "|%#*.*s|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0112") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%#*.*s|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0113");
	ret1 = fprintf(fppres, "|%#*.*hhs|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0113") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%#*.*hhs|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0114");
	ret1 = fprintf(fppres, "|%#*.*hs|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0114") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%#*.*hs|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0115");
	ret1 = fprintf(fppres, "|%#*.*ls|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0115") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%#*.*ls|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0116");
	ret1 = fprintf(fppres, "|%#*.*lls|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0116") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%#*.*lls|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0117");
	ret1 = fprintf(fppres, "|%#*.*js|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0117") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%#*.*js|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0118");
	ret1 = fprintf(fppres, "|%#*.*zs|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0118") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%#*.*zs|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0119");
	ret1 = fprintf(fppres, "|%#*.*S|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0119") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%#*.*S|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0120");
	ret1 = fprintf(fppres, "|%#*.*hhS|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0120") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%#*.*hhS|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0121");
	ret1 = fprintf(fppres, "|%#*.*hS|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0121") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%#*.*hS|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0122");
	ret1 = fprintf(fppres, "|%#*.*lS|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0122") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%#*.*lS|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0123");
	ret1 = fprintf(fppres, "|%#*.*llS|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0123") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%#*.*llS|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0124");
	ret1 = fprintf(fppres, "|%#*.*jS|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0124") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%#*.*jS|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0125");
	ret1 = fprintf(fppres, "|%#*.*zS|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0125") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%#*.*zS|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0126");
	ret1 = fprintf(fppres, "|%0#*.*s|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0126") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0#*.*s|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0127");
	ret1 = fprintf(fppres, "|%0#*.*hhs|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0127") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0#*.*hhs|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0128");
	ret1 = fprintf(fppres, "|%0#*.*hs|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0128") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0#*.*hs|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0129");
	ret1 = fprintf(fppres, "|%0#*.*ls|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0129") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0#*.*ls|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0130");
	ret1 = fprintf(fppres, "|%0#*.*lls|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0130") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0#*.*lls|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0131");
	ret1 = fprintf(fppres, "|%0#*.*js|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0131") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0#*.*js|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0132");
	ret1 = fprintf(fppres, "|%0#*.*zs|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0132") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0#*.*zs|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0133");
	ret1 = fprintf(fppres, "|%0#*.*S|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0133") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0#*.*S|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0134");
	ret1 = fprintf(fppres, "|%0#*.*hhS|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0134") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0#*.*hhS|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0135");
	ret1 = fprintf(fppres, "|%0#*.*hS|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0135") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0#*.*hS|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0136");
	ret1 = fprintf(fppres, "|%0#*.*lS|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0136") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0#*.*lS|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0137");
	ret1 = fprintf(fppres, "|%0#*.*llS|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0137") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0#*.*llS|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0138");
	ret1 = fprintf(fppres, "|%0#*.*jS|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0138") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0#*.*jS|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0139");
	ret1 = fprintf(fppres, "|%0#*.*zS|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0139") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0#*.*zS|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0140");
	ret1 = fprintf(fppres, "|%+#*.*s|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0140") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+#*.*s|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0141");
	ret1 = fprintf(fppres, "|%+#*.*hhs|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0141") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+#*.*hhs|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0142");
	ret1 = fprintf(fppres, "|%+#*.*hs|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0142") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+#*.*hs|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0143");
	ret1 = fprintf(fppres, "|%+#*.*ls|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0143") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+#*.*ls|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0144");
	ret1 = fprintf(fppres, "|%+#*.*lls|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0144") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+#*.*lls|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0145");
	ret1 = fprintf(fppres, "|%+#*.*js|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0145") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+#*.*js|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0146");
	ret1 = fprintf(fppres, "|%+#*.*zs|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0146") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+#*.*zs|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0147");
	ret1 = fprintf(fppres, "|%+#*.*S|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0147") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+#*.*S|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0148");
	ret1 = fprintf(fppres, "|%+#*.*hhS|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0148") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+#*.*hhS|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0149");
	ret1 = fprintf(fppres, "|%+#*.*hS|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0149") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+#*.*hS|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0150");
	ret1 = fprintf(fppres, "|%+#*.*lS|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0150") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+#*.*lS|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0151");
	ret1 = fprintf(fppres, "|%+#*.*llS|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0151") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+#*.*llS|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0152");
	ret1 = fprintf(fppres, "|%+#*.*jS|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0152") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+#*.*jS|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0153");
	ret1 = fprintf(fppres, "|%+#*.*zS|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0153") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+#*.*zS|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0154");
	ret1 = fprintf(fppres, "|%0+#*.*s|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0154") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+#*.*s|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0155");
	ret1 = fprintf(fppres, "|%0+#*.*hhs|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0155") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+#*.*hhs|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0156");
	ret1 = fprintf(fppres, "|%0+#*.*hs|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0156") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+#*.*hs|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0157");
	ret1 = fprintf(fppres, "|%0+#*.*ls|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0157") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+#*.*ls|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0158");
	ret1 = fprintf(fppres, "|%0+#*.*lls|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0158") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+#*.*lls|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0159");
	ret1 = fprintf(fppres, "|%0+#*.*js|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0159") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+#*.*js|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0160");
	ret1 = fprintf(fppres, "|%0+#*.*zs|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0160") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+#*.*zs|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0161");
	ret1 = fprintf(fppres, "|%0+#*.*S|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0161") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+#*.*S|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0162");
	ret1 = fprintf(fppres, "|%0+#*.*hhS|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0162") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+#*.*hhS|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0163");
	ret1 = fprintf(fppres, "|%0+#*.*hS|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0163") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+#*.*hS|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0164");
	ret1 = fprintf(fppres, "|%0+#*.*lS|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0164") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+#*.*lS|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0165");
	ret1 = fprintf(fppres, "|%0+#*.*llS|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0165") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+#*.*llS|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0166");
	ret1 = fprintf(fppres, "|%0+#*.*jS|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0166") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+#*.*jS|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0167");
	ret1 = fprintf(fppres, "|%0+#*.*zS|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0167") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+#*.*zS|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0168");
	ret1 = fprintf(fppres, "|%-#*.*s|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0168") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%-#*.*s|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0169");
	ret1 = fprintf(fppres, "|%-#*.*hhs|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0169") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%-#*.*hhs|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0170");
	ret1 = fprintf(fppres, "|%-#*.*hs|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0170") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%-#*.*hs|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0171");
	ret1 = fprintf(fppres, "|%-#*.*ls|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0171") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%-#*.*ls|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0172");
	ret1 = fprintf(fppres, "|%-#*.*lls|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0172") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%-#*.*lls|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0173");
	ret1 = fprintf(fppres, "|%-#*.*js|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0173") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%-#*.*js|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0174");
	ret1 = fprintf(fppres, "|%-#*.*zs|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0174") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%-#*.*zs|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0175");
	ret1 = fprintf(fppres, "|%-#*.*S|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0175") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%-#*.*S|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0176");
	ret1 = fprintf(fppres, "|%-#*.*hhS|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0176") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%-#*.*hhS|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0177");
	ret1 = fprintf(fppres, "|%-#*.*hS|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0177") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%-#*.*hS|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0178");
	ret1 = fprintf(fppres, "|%-#*.*lS|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0178") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%-#*.*lS|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0179");
	ret1 = fprintf(fppres, "|%-#*.*llS|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0179") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%-#*.*llS|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0180");
	ret1 = fprintf(fppres, "|%-#*.*jS|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0180") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%-#*.*jS|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0181");
	ret1 = fprintf(fppres, "|%-#*.*zS|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0181") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%-#*.*zS|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0182");
	ret1 = fprintf(fppres, "|%0-#*.*s|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0182") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0-#*.*s|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0183");
	ret1 = fprintf(fppres, "|%0-#*.*hhs|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0183") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0-#*.*hhs|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0184");
	ret1 = fprintf(fppres, "|%0-#*.*hs|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0184") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0-#*.*hs|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0185");
	ret1 = fprintf(fppres, "|%0-#*.*ls|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0185") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0-#*.*ls|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0186");
	ret1 = fprintf(fppres, "|%0-#*.*lls|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0186") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0-#*.*lls|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0187");
	ret1 = fprintf(fppres, "|%0-#*.*js|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0187") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0-#*.*js|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0188");
	ret1 = fprintf(fppres, "|%0-#*.*zs|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0188") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0-#*.*zs|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0189");
	ret1 = fprintf(fppres, "|%0-#*.*S|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0189") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0-#*.*S|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0190");
	ret1 = fprintf(fppres, "|%0-#*.*hhS|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0190") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0-#*.*hhS|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0191");
	ret1 = fprintf(fppres, "|%0-#*.*hS|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0191") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0-#*.*hS|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0192");
	ret1 = fprintf(fppres, "|%0-#*.*lS|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0192") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0-#*.*lS|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0193");
	ret1 = fprintf(fppres, "|%0-#*.*llS|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0193") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0-#*.*llS|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0194");
	ret1 = fprintf(fppres, "|%0-#*.*jS|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0194") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0-#*.*jS|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0195");
	ret1 = fprintf(fppres, "|%0-#*.*zS|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0195") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0-#*.*zS|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0196");
	ret1 = fprintf(fppres, "|%+-#*.*s|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0196") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+-#*.*s|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0197");
	ret1 = fprintf(fppres, "|%+-#*.*hhs|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0197") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+-#*.*hhs|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0198");
	ret1 = fprintf(fppres, "|%+-#*.*hs|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0198") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+-#*.*hs|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0199");
	ret1 = fprintf(fppres, "|%+-#*.*ls|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0199") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+-#*.*ls|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0200");
	ret1 = fprintf(fppres, "|%+-#*.*lls|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0200") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+-#*.*lls|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0201");
	ret1 = fprintf(fppres, "|%+-#*.*js|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0201") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+-#*.*js|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0202");
	ret1 = fprintf(fppres, "|%+-#*.*zs|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0202") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+-#*.*zs|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0203");
	ret1 = fprintf(fppres, "|%+-#*.*S|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0203") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+-#*.*S|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0204");
	ret1 = fprintf(fppres, "|%+-#*.*hhS|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0204") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+-#*.*hhS|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0205");
	ret1 = fprintf(fppres, "|%+-#*.*hS|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0205") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+-#*.*hS|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0206");
	ret1 = fprintf(fppres, "|%+-#*.*lS|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0206") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+-#*.*lS|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0207");
	ret1 = fprintf(fppres, "|%+-#*.*llS|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0207") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+-#*.*llS|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0208");
	ret1 = fprintf(fppres, "|%+-#*.*jS|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0208") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+-#*.*jS|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0209");
	ret1 = fprintf(fppres, "|%+-#*.*zS|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0209") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+-#*.*zS|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0210");
	ret1 = fprintf(fppres, "|%0+-#*.*s|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0210") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+-#*.*s|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0211");
	ret1 = fprintf(fppres, "|%0+-#*.*hhs|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0211") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+-#*.*hhs|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0212");
	ret1 = fprintf(fppres, "|%0+-#*.*hs|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0212") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+-#*.*hs|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0213");
	ret1 = fprintf(fppres, "|%0+-#*.*ls|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0213") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+-#*.*ls|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0214");
	ret1 = fprintf(fppres, "|%0+-#*.*lls|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0214") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+-#*.*lls|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0215");
	ret1 = fprintf(fppres, "|%0+-#*.*js|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0215") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+-#*.*js|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0216");
	ret1 = fprintf(fppres, "|%0+-#*.*zs|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0216") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+-#*.*zs|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0217");
	ret1 = fprintf(fppres, "|%0+-#*.*S|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0217") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+-#*.*S|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0218");
	ret1 = fprintf(fppres, "|%0+-#*.*hhS|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0218") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+-#*.*hhS|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0219");
	ret1 = fprintf(fppres, "|%0+-#*.*hS|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0219") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+-#*.*hS|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0220");
	ret1 = fprintf(fppres, "|%0+-#*.*lS|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0220") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+-#*.*lS|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0221");
	ret1 = fprintf(fppres, "|%0+-#*.*llS|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0221") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+-#*.*llS|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0222");
	ret1 = fprintf(fppres, "|%0+-#*.*jS|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0222") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+-#*.*jS|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0223");
	ret1 = fprintf(fppres, "|%0+-#*.*zS|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0223") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+-#*.*zS|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "\n");
	ft_printf("\n");
	fclose(fppres);
	fclose(fppret);
	fclose(fpftret);
}
