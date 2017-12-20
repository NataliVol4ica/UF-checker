#include <stdio.h>
#include <stdint.h>
#include <locale.h>
#include <wchar.h>
#include "libftprintf.h"

size_t testing_p_tests = 112;

void		testing_p(int width, int precision, void *var)
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
	fprintf(fppres, "NAME = testing_p.c\n");
	fprintf(fppres, "TESTS = %zu\n", testing_p_tests);
	fprintf(fppres, "WIDTH = %d\n", width);
	fprintf(fppres, "PRECISION = %d\n", precision);
	fprintf(fppres, "VAR = \"%p\"\n", var);
	fprintf(fppres, "LOCALE = \"%s\"\n\n", loc);

	ft_printf("===\\ NEW TEST\n");
	ft_printf("NAME = testing_p.c\n");
	ft_printf("TESTS = %zu\n", testing_p_tests);
	ft_printf("WIDTH = %d\n", width);
	ft_printf("PRECISION = %d\n", precision);
	ft_printf("VAR = \"%p\"\n", var);
	ft_printf("LOCALE = \"%s\"\n\n", loc);

	setlocale(LC_CTYPE, loc);
	//@
	fprintf(fppres, "#0000");
	ret1 = fprintf(fppres, "|%*.*p|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0000") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%*.*p|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0001");
	ret1 = fprintf(fppres, "|%*.*hhp|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0001") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%*.*hhp|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0002");
	ret1 = fprintf(fppres, "|%*.*hp|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0002") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%*.*hp|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0003");
	ret1 = fprintf(fppres, "|%*.*lp|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0003") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%*.*lp|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0004");
	ret1 = fprintf(fppres, "|%*.*llp|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0004") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%*.*llp|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0005");
	ret1 = fprintf(fppres, "|%*.*jp|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0005") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%*.*jp|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0006");
	ret1 = fprintf(fppres, "|%*.*zp|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0006") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%*.*zp|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0007");
	ret1 = fprintf(fppres, "|%0*.*p|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0007") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0*.*p|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0008");
	ret1 = fprintf(fppres, "|%0*.*hhp|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0008") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0*.*hhp|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0009");
	ret1 = fprintf(fppres, "|%0*.*hp|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0009") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0*.*hp|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0010");
	ret1 = fprintf(fppres, "|%0*.*lp|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0010") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0*.*lp|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0011");
	ret1 = fprintf(fppres, "|%0*.*llp|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0011") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0*.*llp|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0012");
	ret1 = fprintf(fppres, "|%0*.*jp|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0012") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0*.*jp|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0013");
	ret1 = fprintf(fppres, "|%0*.*zp|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0013") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0*.*zp|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0014");
	ret1 = fprintf(fppres, "|%+*.*p|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0014") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+*.*p|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0015");
	ret1 = fprintf(fppres, "|%+*.*hhp|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0015") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+*.*hhp|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0016");
	ret1 = fprintf(fppres, "|%+*.*hp|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0016") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+*.*hp|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0017");
	ret1 = fprintf(fppres, "|%+*.*lp|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0017") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+*.*lp|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0018");
	ret1 = fprintf(fppres, "|%+*.*llp|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0018") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+*.*llp|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0019");
	ret1 = fprintf(fppres, "|%+*.*jp|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0019") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+*.*jp|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0020");
	ret1 = fprintf(fppres, "|%+*.*zp|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0020") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+*.*zp|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0021");
	ret1 = fprintf(fppres, "|%0+*.*p|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0021") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+*.*p|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0022");
	ret1 = fprintf(fppres, "|%0+*.*hhp|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0022") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+*.*hhp|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0023");
	ret1 = fprintf(fppres, "|%0+*.*hp|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0023") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+*.*hp|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0024");
	ret1 = fprintf(fppres, "|%0+*.*lp|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0024") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+*.*lp|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0025");
	ret1 = fprintf(fppres, "|%0+*.*llp|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0025") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+*.*llp|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0026");
	ret1 = fprintf(fppres, "|%0+*.*jp|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0026") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+*.*jp|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0027");
	ret1 = fprintf(fppres, "|%0+*.*zp|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0027") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+*.*zp|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0028");
	ret1 = fprintf(fppres, "|%-*.*p|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0028") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%-*.*p|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0029");
	ret1 = fprintf(fppres, "|%-*.*hhp|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0029") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%-*.*hhp|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0030");
	ret1 = fprintf(fppres, "|%-*.*hp|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0030") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%-*.*hp|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0031");
	ret1 = fprintf(fppres, "|%-*.*lp|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0031") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%-*.*lp|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0032");
	ret1 = fprintf(fppres, "|%-*.*llp|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0032") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%-*.*llp|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0033");
	ret1 = fprintf(fppres, "|%-*.*jp|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0033") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%-*.*jp|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0034");
	ret1 = fprintf(fppres, "|%-*.*zp|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0034") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%-*.*zp|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0035");
	ret1 = fprintf(fppres, "|%0-*.*p|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0035") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0-*.*p|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0036");
	ret1 = fprintf(fppres, "|%0-*.*hhp|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0036") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0-*.*hhp|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0037");
	ret1 = fprintf(fppres, "|%0-*.*hp|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0037") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0-*.*hp|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0038");
	ret1 = fprintf(fppres, "|%0-*.*lp|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0038") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0-*.*lp|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0039");
	ret1 = fprintf(fppres, "|%0-*.*llp|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0039") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0-*.*llp|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0040");
	ret1 = fprintf(fppres, "|%0-*.*jp|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0040") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0-*.*jp|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0041");
	ret1 = fprintf(fppres, "|%0-*.*zp|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0041") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0-*.*zp|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0042");
	ret1 = fprintf(fppres, "|%+-*.*p|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0042") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+-*.*p|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0043");
	ret1 = fprintf(fppres, "|%+-*.*hhp|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0043") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+-*.*hhp|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0044");
	ret1 = fprintf(fppres, "|%+-*.*hp|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0044") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+-*.*hp|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0045");
	ret1 = fprintf(fppres, "|%+-*.*lp|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0045") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+-*.*lp|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0046");
	ret1 = fprintf(fppres, "|%+-*.*llp|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0046") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+-*.*llp|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0047");
	ret1 = fprintf(fppres, "|%+-*.*jp|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0047") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+-*.*jp|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0048");
	ret1 = fprintf(fppres, "|%+-*.*zp|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0048") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+-*.*zp|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0049");
	ret1 = fprintf(fppres, "|%0+-*.*p|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0049") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+-*.*p|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0050");
	ret1 = fprintf(fppres, "|%0+-*.*hhp|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0050") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+-*.*hhp|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0051");
	ret1 = fprintf(fppres, "|%0+-*.*hp|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0051") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+-*.*hp|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0052");
	ret1 = fprintf(fppres, "|%0+-*.*lp|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0052") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+-*.*lp|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0053");
	ret1 = fprintf(fppres, "|%0+-*.*llp|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0053") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+-*.*llp|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0054");
	ret1 = fprintf(fppres, "|%0+-*.*jp|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0054") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+-*.*jp|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0055");
	ret1 = fprintf(fppres, "|%0+-*.*zp|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0055") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+-*.*zp|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0056");
	ret1 = fprintf(fppres, "|%#*.*p|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0056") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%#*.*p|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0057");
	ret1 = fprintf(fppres, "|%#*.*hhp|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0057") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%#*.*hhp|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0058");
	ret1 = fprintf(fppres, "|%#*.*hp|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0058") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%#*.*hp|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0059");
	ret1 = fprintf(fppres, "|%#*.*lp|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0059") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%#*.*lp|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0060");
	ret1 = fprintf(fppres, "|%#*.*llp|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0060") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%#*.*llp|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0061");
	ret1 = fprintf(fppres, "|%#*.*jp|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0061") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%#*.*jp|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0062");
	ret1 = fprintf(fppres, "|%#*.*zp|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0062") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%#*.*zp|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0063");
	ret1 = fprintf(fppres, "|%0#*.*p|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0063") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0#*.*p|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0064");
	ret1 = fprintf(fppres, "|%0#*.*hhp|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0064") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0#*.*hhp|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0065");
	ret1 = fprintf(fppres, "|%0#*.*hp|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0065") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0#*.*hp|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0066");
	ret1 = fprintf(fppres, "|%0#*.*lp|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0066") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0#*.*lp|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0067");
	ret1 = fprintf(fppres, "|%0#*.*llp|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0067") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0#*.*llp|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0068");
	ret1 = fprintf(fppres, "|%0#*.*jp|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0068") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0#*.*jp|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0069");
	ret1 = fprintf(fppres, "|%0#*.*zp|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0069") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0#*.*zp|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0070");
	ret1 = fprintf(fppres, "|%+#*.*p|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0070") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+#*.*p|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0071");
	ret1 = fprintf(fppres, "|%+#*.*hhp|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0071") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+#*.*hhp|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0072");
	ret1 = fprintf(fppres, "|%+#*.*hp|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0072") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+#*.*hp|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0073");
	ret1 = fprintf(fppres, "|%+#*.*lp|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0073") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+#*.*lp|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0074");
	ret1 = fprintf(fppres, "|%+#*.*llp|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0074") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+#*.*llp|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0075");
	ret1 = fprintf(fppres, "|%+#*.*jp|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0075") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+#*.*jp|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0076");
	ret1 = fprintf(fppres, "|%+#*.*zp|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0076") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+#*.*zp|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0077");
	ret1 = fprintf(fppres, "|%0+#*.*p|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0077") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+#*.*p|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0078");
	ret1 = fprintf(fppres, "|%0+#*.*hhp|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0078") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+#*.*hhp|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0079");
	ret1 = fprintf(fppres, "|%0+#*.*hp|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0079") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+#*.*hp|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0080");
	ret1 = fprintf(fppres, "|%0+#*.*lp|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0080") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+#*.*lp|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0081");
	ret1 = fprintf(fppres, "|%0+#*.*llp|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0081") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+#*.*llp|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0082");
	ret1 = fprintf(fppres, "|%0+#*.*jp|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0082") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+#*.*jp|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0083");
	ret1 = fprintf(fppres, "|%0+#*.*zp|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0083") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+#*.*zp|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0084");
	ret1 = fprintf(fppres, "|%-#*.*p|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0084") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%-#*.*p|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0085");
	ret1 = fprintf(fppres, "|%-#*.*hhp|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0085") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%-#*.*hhp|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0086");
	ret1 = fprintf(fppres, "|%-#*.*hp|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0086") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%-#*.*hp|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0087");
	ret1 = fprintf(fppres, "|%-#*.*lp|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0087") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%-#*.*lp|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0088");
	ret1 = fprintf(fppres, "|%-#*.*llp|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0088") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%-#*.*llp|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0089");
	ret1 = fprintf(fppres, "|%-#*.*jp|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0089") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%-#*.*jp|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0090");
	ret1 = fprintf(fppres, "|%-#*.*zp|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0090") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%-#*.*zp|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0091");
	ret1 = fprintf(fppres, "|%0-#*.*p|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0091") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0-#*.*p|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0092");
	ret1 = fprintf(fppres, "|%0-#*.*hhp|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0092") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0-#*.*hhp|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0093");
	ret1 = fprintf(fppres, "|%0-#*.*hp|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0093") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0-#*.*hp|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0094");
	ret1 = fprintf(fppres, "|%0-#*.*lp|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0094") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0-#*.*lp|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0095");
	ret1 = fprintf(fppres, "|%0-#*.*llp|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0095") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0-#*.*llp|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0096");
	ret1 = fprintf(fppres, "|%0-#*.*jp|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0096") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0-#*.*jp|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0097");
	ret1 = fprintf(fppres, "|%0-#*.*zp|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0097") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0-#*.*zp|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0098");
	ret1 = fprintf(fppres, "|%+-#*.*p|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0098") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+-#*.*p|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0099");
	ret1 = fprintf(fppres, "|%+-#*.*hhp|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0099") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+-#*.*hhp|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0100");
	ret1 = fprintf(fppres, "|%+-#*.*hp|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0100") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+-#*.*hp|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0101");
	ret1 = fprintf(fppres, "|%+-#*.*lp|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0101") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+-#*.*lp|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0102");
	ret1 = fprintf(fppres, "|%+-#*.*llp|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0102") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+-#*.*llp|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0103");
	ret1 = fprintf(fppres, "|%+-#*.*jp|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0103") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+-#*.*jp|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0104");
	ret1 = fprintf(fppres, "|%+-#*.*zp|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0104") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+-#*.*zp|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0105");
	ret1 = fprintf(fppres, "|%0+-#*.*p|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0105") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+-#*.*p|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0106");
	ret1 = fprintf(fppres, "|%0+-#*.*hhp|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0106") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+-#*.*hhp|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0107");
	ret1 = fprintf(fppres, "|%0+-#*.*hp|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0107") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+-#*.*hp|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0108");
	ret1 = fprintf(fppres, "|%0+-#*.*lp|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0108") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+-#*.*lp|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0109");
	ret1 = fprintf(fppres, "|%0+-#*.*llp|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0109") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+-#*.*llp|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0110");
	ret1 = fprintf(fppres, "|%0+-#*.*jp|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0110") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+-#*.*jp|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0111");
	ret1 = fprintf(fppres, "|%0+-#*.*zp|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0111") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+-#*.*zp|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "\n");
	ft_printf("\n");
	fclose(fppres);
	fclose(fppret);
	fclose(fpftret);
}
