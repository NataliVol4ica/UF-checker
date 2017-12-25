#include <stdio.h>
#include <stdint.h>
#include <locale.h>
#include <wchar.h>
#include "libftprintf.h"

size_t testing_apostrophe_cbc_tests = 576;

void		testing_apostrophe_cbc(int width, int precision, wchar_t var)
{
	int		ret1;
	int		ret2;
	char	*loc;
	FILE	*fppres, *fppret, *fpftret;

	loc = setlocale(LC_CTYPE, NULL);
	setlocale(LC_CTYPE, "");

	fppres = fopen("./files/bonus_printf_res", "a");
	fppret = fopen("./files/bonus_printf_ret", "a");
	fpftret = fopen("./files/bonus_ft_printf_ret", "a");

	setvbuf(fppres, NULL, _IONBF, 0);
	setvbuf(fppret, NULL, _IONBF, 0);
	setvbuf(fpftret, NULL, _IONBF, 0);

	fprintf(fppres, "===\\ NEW TEST\n");
	fprintf(fppres, "NAME = testing_apostrophe_cbc.c\n");
	fprintf(fppres, "TESTS = %zu\n", testing_apostrophe_cbc_tests);
	fprintf(fppres, "WIDTH = %d\n", width);
	fprintf(fppres, "PRECISION = %d\n", precision);
	fprintf(fppres, "VAR = \'%C\'\n", var);
	fprintf(fppres, "LOCALE = \"%s\"\n\n", loc);

	ft_printf("===\\ NEW TEST\n");
	ft_printf("NAME = testing_apostrophe_cbc.c\n");
	ft_printf("TESTS = %zu\n", testing_apostrophe_cbc_tests);
	ft_printf("WIDTH = %d\n", width);
	ft_printf("PRECISION = %d\n", precision);
	ft_printf("VAR = \'%C\'\n", var);
	ft_printf("LOCALE = \"%s\"\n\n", loc);

	setlocale(LC_CTYPE, loc);
	//@
	fprintf(fppres, "#0000");
	ret1 = fprintf(fppres, "|%'*.*c|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0000") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%'*.*c|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0001");
	ret1 = fprintf(fppres, "|%'*.*hhc|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0001") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%'*.*hhc|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0002");
	ret1 = fprintf(fppres, "|%'*.*hc|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0002") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%'*.*hc|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0003");
	ret1 = fprintf(fppres, "|%'*.*lc|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0003") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%'*.*lc|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0004");
	ret1 = fprintf(fppres, "|%'*.*llc|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0004") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%'*.*llc|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0005");
	ret1 = fprintf(fppres, "|%'*.*jc|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0005") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%'*.*jc|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0006");
	ret1 = fprintf(fppres, "|%'*.*zc|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0006") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%'*.*zc|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0007");
	ret1 = fprintf(fppres, "|%'*.*Lc|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0007") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%'*.*Lc|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0008");
	ret1 = fprintf(fppres, "|%'*.*tc|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0008") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%'*.*tc|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0009");
	ret1 = fprintf(fppres, "|%'*.*C|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0009") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%'*.*C|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0010");
	ret1 = fprintf(fppres, "|%'*.*hhC|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0010") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%'*.*hhC|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0011");
	ret1 = fprintf(fppres, "|%'*.*hC|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0011") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%'*.*hC|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0012");
	ret1 = fprintf(fppres, "|%'*.*lC|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0012") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%'*.*lC|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0013");
	ret1 = fprintf(fppres, "|%'*.*llC|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0013") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%'*.*llC|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0014");
	ret1 = fprintf(fppres, "|%'*.*jC|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0014") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%'*.*jC|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0015");
	ret1 = fprintf(fppres, "|%'*.*zC|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0015") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%'*.*zC|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0016");
	ret1 = fprintf(fppres, "|%'*.*LC|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0016") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%'*.*LC|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0017");
	ret1 = fprintf(fppres, "|%'*.*tC|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0017") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%'*.*tC|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0018");
	ret1 = fprintf(fppres, "|%0'*.*c|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0018") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0'*.*c|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0019");
	ret1 = fprintf(fppres, "|%0'*.*hhc|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0019") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0'*.*hhc|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0020");
	ret1 = fprintf(fppres, "|%0'*.*hc|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0020") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0'*.*hc|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0021");
	ret1 = fprintf(fppres, "|%0'*.*lc|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0021") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0'*.*lc|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0022");
	ret1 = fprintf(fppres, "|%0'*.*llc|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0022") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0'*.*llc|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0023");
	ret1 = fprintf(fppres, "|%0'*.*jc|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0023") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0'*.*jc|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0024");
	ret1 = fprintf(fppres, "|%0'*.*zc|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0024") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0'*.*zc|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0025");
	ret1 = fprintf(fppres, "|%0'*.*Lc|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0025") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0'*.*Lc|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0026");
	ret1 = fprintf(fppres, "|%0'*.*tc|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0026") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0'*.*tc|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0027");
	ret1 = fprintf(fppres, "|%0'*.*C|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0027") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0'*.*C|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0028");
	ret1 = fprintf(fppres, "|%0'*.*hhC|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0028") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0'*.*hhC|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0029");
	ret1 = fprintf(fppres, "|%0'*.*hC|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0029") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0'*.*hC|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0030");
	ret1 = fprintf(fppres, "|%0'*.*lC|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0030") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0'*.*lC|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0031");
	ret1 = fprintf(fppres, "|%0'*.*llC|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0031") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0'*.*llC|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0032");
	ret1 = fprintf(fppres, "|%0'*.*jC|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0032") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0'*.*jC|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0033");
	ret1 = fprintf(fppres, "|%0'*.*zC|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0033") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0'*.*zC|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0034");
	ret1 = fprintf(fppres, "|%0'*.*LC|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0034") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0'*.*LC|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0035");
	ret1 = fprintf(fppres, "|%0'*.*tC|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0035") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0'*.*tC|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0036");
	ret1 = fprintf(fppres, "|%+'*.*c|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0036") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+'*.*c|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0037");
	ret1 = fprintf(fppres, "|%+'*.*hhc|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0037") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+'*.*hhc|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0038");
	ret1 = fprintf(fppres, "|%+'*.*hc|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0038") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+'*.*hc|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0039");
	ret1 = fprintf(fppres, "|%+'*.*lc|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0039") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+'*.*lc|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0040");
	ret1 = fprintf(fppres, "|%+'*.*llc|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0040") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+'*.*llc|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0041");
	ret1 = fprintf(fppres, "|%+'*.*jc|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0041") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+'*.*jc|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0042");
	ret1 = fprintf(fppres, "|%+'*.*zc|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0042") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+'*.*zc|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0043");
	ret1 = fprintf(fppres, "|%+'*.*Lc|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0043") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+'*.*Lc|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0044");
	ret1 = fprintf(fppres, "|%+'*.*tc|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0044") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+'*.*tc|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0045");
	ret1 = fprintf(fppres, "|%+'*.*C|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0045") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+'*.*C|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0046");
	ret1 = fprintf(fppres, "|%+'*.*hhC|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0046") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+'*.*hhC|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0047");
	ret1 = fprintf(fppres, "|%+'*.*hC|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0047") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+'*.*hC|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0048");
	ret1 = fprintf(fppres, "|%+'*.*lC|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0048") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+'*.*lC|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0049");
	ret1 = fprintf(fppres, "|%+'*.*llC|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0049") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+'*.*llC|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0050");
	ret1 = fprintf(fppres, "|%+'*.*jC|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0050") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+'*.*jC|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0051");
	ret1 = fprintf(fppres, "|%+'*.*zC|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0051") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+'*.*zC|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0052");
	ret1 = fprintf(fppres, "|%+'*.*LC|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0052") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+'*.*LC|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0053");
	ret1 = fprintf(fppres, "|%+'*.*tC|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0053") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+'*.*tC|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0054");
	ret1 = fprintf(fppres, "|%0+'*.*c|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0054") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+'*.*c|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0055");
	ret1 = fprintf(fppres, "|%0+'*.*hhc|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0055") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+'*.*hhc|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0056");
	ret1 = fprintf(fppres, "|%0+'*.*hc|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0056") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+'*.*hc|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0057");
	ret1 = fprintf(fppres, "|%0+'*.*lc|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0057") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+'*.*lc|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0058");
	ret1 = fprintf(fppres, "|%0+'*.*llc|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0058") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+'*.*llc|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0059");
	ret1 = fprintf(fppres, "|%0+'*.*jc|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0059") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+'*.*jc|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0060");
	ret1 = fprintf(fppres, "|%0+'*.*zc|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0060") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+'*.*zc|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0061");
	ret1 = fprintf(fppres, "|%0+'*.*Lc|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0061") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+'*.*Lc|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0062");
	ret1 = fprintf(fppres, "|%0+'*.*tc|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0062") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+'*.*tc|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0063");
	ret1 = fprintf(fppres, "|%0+'*.*C|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0063") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+'*.*C|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0064");
	ret1 = fprintf(fppres, "|%0+'*.*hhC|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0064") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+'*.*hhC|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0065");
	ret1 = fprintf(fppres, "|%0+'*.*hC|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0065") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+'*.*hC|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0066");
	ret1 = fprintf(fppres, "|%0+'*.*lC|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0066") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+'*.*lC|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0067");
	ret1 = fprintf(fppres, "|%0+'*.*llC|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0067") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+'*.*llC|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0068");
	ret1 = fprintf(fppres, "|%0+'*.*jC|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0068") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+'*.*jC|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0069");
	ret1 = fprintf(fppres, "|%0+'*.*zC|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0069") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+'*.*zC|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0070");
	ret1 = fprintf(fppres, "|%0+'*.*LC|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0070") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+'*.*LC|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0071");
	ret1 = fprintf(fppres, "|%0+'*.*tC|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0071") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+'*.*tC|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0072");
	ret1 = fprintf(fppres, "|%-'*.*c|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0072") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%-'*.*c|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0073");
	ret1 = fprintf(fppres, "|%-'*.*hhc|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0073") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%-'*.*hhc|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0074");
	ret1 = fprintf(fppres, "|%-'*.*hc|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0074") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%-'*.*hc|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0075");
	ret1 = fprintf(fppres, "|%-'*.*lc|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0075") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%-'*.*lc|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0076");
	ret1 = fprintf(fppres, "|%-'*.*llc|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0076") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%-'*.*llc|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0077");
	ret1 = fprintf(fppres, "|%-'*.*jc|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0077") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%-'*.*jc|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0078");
	ret1 = fprintf(fppres, "|%-'*.*zc|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0078") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%-'*.*zc|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0079");
	ret1 = fprintf(fppres, "|%-'*.*Lc|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0079") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%-'*.*Lc|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0080");
	ret1 = fprintf(fppres, "|%-'*.*tc|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0080") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%-'*.*tc|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0081");
	ret1 = fprintf(fppres, "|%-'*.*C|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0081") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%-'*.*C|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0082");
	ret1 = fprintf(fppres, "|%-'*.*hhC|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0082") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%-'*.*hhC|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0083");
	ret1 = fprintf(fppres, "|%-'*.*hC|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0083") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%-'*.*hC|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0084");
	ret1 = fprintf(fppres, "|%-'*.*lC|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0084") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%-'*.*lC|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0085");
	ret1 = fprintf(fppres, "|%-'*.*llC|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0085") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%-'*.*llC|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0086");
	ret1 = fprintf(fppres, "|%-'*.*jC|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0086") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%-'*.*jC|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0087");
	ret1 = fprintf(fppres, "|%-'*.*zC|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0087") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%-'*.*zC|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0088");
	ret1 = fprintf(fppres, "|%-'*.*LC|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0088") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%-'*.*LC|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0089");
	ret1 = fprintf(fppres, "|%-'*.*tC|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0089") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%-'*.*tC|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0090");
	ret1 = fprintf(fppres, "|%0-'*.*c|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0090") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0-'*.*c|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0091");
	ret1 = fprintf(fppres, "|%0-'*.*hhc|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0091") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0-'*.*hhc|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0092");
	ret1 = fprintf(fppres, "|%0-'*.*hc|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0092") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0-'*.*hc|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0093");
	ret1 = fprintf(fppres, "|%0-'*.*lc|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0093") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0-'*.*lc|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0094");
	ret1 = fprintf(fppres, "|%0-'*.*llc|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0094") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0-'*.*llc|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0095");
	ret1 = fprintf(fppres, "|%0-'*.*jc|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0095") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0-'*.*jc|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0096");
	ret1 = fprintf(fppres, "|%0-'*.*zc|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0096") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0-'*.*zc|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0097");
	ret1 = fprintf(fppres, "|%0-'*.*Lc|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0097") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0-'*.*Lc|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0098");
	ret1 = fprintf(fppres, "|%0-'*.*tc|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0098") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0-'*.*tc|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0099");
	ret1 = fprintf(fppres, "|%0-'*.*C|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0099") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0-'*.*C|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0100");
	ret1 = fprintf(fppres, "|%0-'*.*hhC|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0100") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0-'*.*hhC|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0101");
	ret1 = fprintf(fppres, "|%0-'*.*hC|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0101") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0-'*.*hC|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0102");
	ret1 = fprintf(fppres, "|%0-'*.*lC|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0102") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0-'*.*lC|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0103");
	ret1 = fprintf(fppres, "|%0-'*.*llC|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0103") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0-'*.*llC|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0104");
	ret1 = fprintf(fppres, "|%0-'*.*jC|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0104") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0-'*.*jC|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0105");
	ret1 = fprintf(fppres, "|%0-'*.*zC|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0105") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0-'*.*zC|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0106");
	ret1 = fprintf(fppres, "|%0-'*.*LC|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0106") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0-'*.*LC|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0107");
	ret1 = fprintf(fppres, "|%0-'*.*tC|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0107") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0-'*.*tC|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0108");
	ret1 = fprintf(fppres, "|%+-'*.*c|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0108") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+-'*.*c|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0109");
	ret1 = fprintf(fppres, "|%+-'*.*hhc|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0109") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+-'*.*hhc|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0110");
	ret1 = fprintf(fppres, "|%+-'*.*hc|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0110") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+-'*.*hc|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0111");
	ret1 = fprintf(fppres, "|%+-'*.*lc|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0111") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+-'*.*lc|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0112");
	ret1 = fprintf(fppres, "|%+-'*.*llc|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0112") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+-'*.*llc|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0113");
	ret1 = fprintf(fppres, "|%+-'*.*jc|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0113") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+-'*.*jc|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0114");
	ret1 = fprintf(fppres, "|%+-'*.*zc|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0114") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+-'*.*zc|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0115");
	ret1 = fprintf(fppres, "|%+-'*.*Lc|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0115") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+-'*.*Lc|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0116");
	ret1 = fprintf(fppres, "|%+-'*.*tc|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0116") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+-'*.*tc|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0117");
	ret1 = fprintf(fppres, "|%+-'*.*C|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0117") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+-'*.*C|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0118");
	ret1 = fprintf(fppres, "|%+-'*.*hhC|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0118") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+-'*.*hhC|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0119");
	ret1 = fprintf(fppres, "|%+-'*.*hC|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0119") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+-'*.*hC|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0120");
	ret1 = fprintf(fppres, "|%+-'*.*lC|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0120") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+-'*.*lC|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0121");
	ret1 = fprintf(fppres, "|%+-'*.*llC|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0121") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+-'*.*llC|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0122");
	ret1 = fprintf(fppres, "|%+-'*.*jC|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0122") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+-'*.*jC|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0123");
	ret1 = fprintf(fppres, "|%+-'*.*zC|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0123") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+-'*.*zC|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0124");
	ret1 = fprintf(fppres, "|%+-'*.*LC|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0124") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+-'*.*LC|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0125");
	ret1 = fprintf(fppres, "|%+-'*.*tC|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0125") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+-'*.*tC|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0126");
	ret1 = fprintf(fppres, "|%0+-'*.*c|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0126") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+-'*.*c|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0127");
	ret1 = fprintf(fppres, "|%0+-'*.*hhc|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0127") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+-'*.*hhc|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0128");
	ret1 = fprintf(fppres, "|%0+-'*.*hc|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0128") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+-'*.*hc|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0129");
	ret1 = fprintf(fppres, "|%0+-'*.*lc|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0129") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+-'*.*lc|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0130");
	ret1 = fprintf(fppres, "|%0+-'*.*llc|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0130") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+-'*.*llc|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0131");
	ret1 = fprintf(fppres, "|%0+-'*.*jc|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0131") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+-'*.*jc|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0132");
	ret1 = fprintf(fppres, "|%0+-'*.*zc|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0132") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+-'*.*zc|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0133");
	ret1 = fprintf(fppres, "|%0+-'*.*Lc|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0133") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+-'*.*Lc|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0134");
	ret1 = fprintf(fppres, "|%0+-'*.*tc|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0134") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+-'*.*tc|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0135");
	ret1 = fprintf(fppres, "|%0+-'*.*C|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0135") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+-'*.*C|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0136");
	ret1 = fprintf(fppres, "|%0+-'*.*hhC|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0136") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+-'*.*hhC|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0137");
	ret1 = fprintf(fppres, "|%0+-'*.*hC|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0137") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+-'*.*hC|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0138");
	ret1 = fprintf(fppres, "|%0+-'*.*lC|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0138") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+-'*.*lC|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0139");
	ret1 = fprintf(fppres, "|%0+-'*.*llC|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0139") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+-'*.*llC|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0140");
	ret1 = fprintf(fppres, "|%0+-'*.*jC|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0140") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+-'*.*jC|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0141");
	ret1 = fprintf(fppres, "|%0+-'*.*zC|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0141") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+-'*.*zC|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0142");
	ret1 = fprintf(fppres, "|%0+-'*.*LC|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0142") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+-'*.*LC|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0143");
	ret1 = fprintf(fppres, "|%0+-'*.*tC|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0143") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+-'*.*tC|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0144");
	ret1 = fprintf(fppres, "|%#'*.*c|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0144") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%#'*.*c|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0145");
	ret1 = fprintf(fppres, "|%#'*.*hhc|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0145") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%#'*.*hhc|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0146");
	ret1 = fprintf(fppres, "|%#'*.*hc|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0146") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%#'*.*hc|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0147");
	ret1 = fprintf(fppres, "|%#'*.*lc|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0147") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%#'*.*lc|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0148");
	ret1 = fprintf(fppres, "|%#'*.*llc|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0148") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%#'*.*llc|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0149");
	ret1 = fprintf(fppres, "|%#'*.*jc|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0149") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%#'*.*jc|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0150");
	ret1 = fprintf(fppres, "|%#'*.*zc|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0150") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%#'*.*zc|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0151");
	ret1 = fprintf(fppres, "|%#'*.*Lc|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0151") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%#'*.*Lc|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0152");
	ret1 = fprintf(fppres, "|%#'*.*tc|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0152") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%#'*.*tc|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0153");
	ret1 = fprintf(fppres, "|%#'*.*C|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0153") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%#'*.*C|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0154");
	ret1 = fprintf(fppres, "|%#'*.*hhC|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0154") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%#'*.*hhC|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0155");
	ret1 = fprintf(fppres, "|%#'*.*hC|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0155") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%#'*.*hC|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0156");
	ret1 = fprintf(fppres, "|%#'*.*lC|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0156") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%#'*.*lC|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0157");
	ret1 = fprintf(fppres, "|%#'*.*llC|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0157") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%#'*.*llC|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0158");
	ret1 = fprintf(fppres, "|%#'*.*jC|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0158") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%#'*.*jC|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0159");
	ret1 = fprintf(fppres, "|%#'*.*zC|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0159") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%#'*.*zC|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0160");
	ret1 = fprintf(fppres, "|%#'*.*LC|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0160") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%#'*.*LC|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0161");
	ret1 = fprintf(fppres, "|%#'*.*tC|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0161") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%#'*.*tC|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0162");
	ret1 = fprintf(fppres, "|%0#'*.*c|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0162") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0#'*.*c|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0163");
	ret1 = fprintf(fppres, "|%0#'*.*hhc|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0163") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0#'*.*hhc|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0164");
	ret1 = fprintf(fppres, "|%0#'*.*hc|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0164") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0#'*.*hc|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0165");
	ret1 = fprintf(fppres, "|%0#'*.*lc|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0165") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0#'*.*lc|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0166");
	ret1 = fprintf(fppres, "|%0#'*.*llc|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0166") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0#'*.*llc|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0167");
	ret1 = fprintf(fppres, "|%0#'*.*jc|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0167") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0#'*.*jc|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0168");
	ret1 = fprintf(fppres, "|%0#'*.*zc|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0168") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0#'*.*zc|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0169");
	ret1 = fprintf(fppres, "|%0#'*.*Lc|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0169") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0#'*.*Lc|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0170");
	ret1 = fprintf(fppres, "|%0#'*.*tc|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0170") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0#'*.*tc|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0171");
	ret1 = fprintf(fppres, "|%0#'*.*C|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0171") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0#'*.*C|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0172");
	ret1 = fprintf(fppres, "|%0#'*.*hhC|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0172") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0#'*.*hhC|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0173");
	ret1 = fprintf(fppres, "|%0#'*.*hC|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0173") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0#'*.*hC|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0174");
	ret1 = fprintf(fppres, "|%0#'*.*lC|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0174") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0#'*.*lC|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0175");
	ret1 = fprintf(fppres, "|%0#'*.*llC|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0175") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0#'*.*llC|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0176");
	ret1 = fprintf(fppres, "|%0#'*.*jC|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0176") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0#'*.*jC|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0177");
	ret1 = fprintf(fppres, "|%0#'*.*zC|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0177") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0#'*.*zC|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0178");
	ret1 = fprintf(fppres, "|%0#'*.*LC|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0178") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0#'*.*LC|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0179");
	ret1 = fprintf(fppres, "|%0#'*.*tC|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0179") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0#'*.*tC|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0180");
	ret1 = fprintf(fppres, "|%+#'*.*c|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0180") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+#'*.*c|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0181");
	ret1 = fprintf(fppres, "|%+#'*.*hhc|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0181") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+#'*.*hhc|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0182");
	ret1 = fprintf(fppres, "|%+#'*.*hc|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0182") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+#'*.*hc|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0183");
	ret1 = fprintf(fppres, "|%+#'*.*lc|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0183") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+#'*.*lc|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0184");
	ret1 = fprintf(fppres, "|%+#'*.*llc|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0184") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+#'*.*llc|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0185");
	ret1 = fprintf(fppres, "|%+#'*.*jc|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0185") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+#'*.*jc|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0186");
	ret1 = fprintf(fppres, "|%+#'*.*zc|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0186") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+#'*.*zc|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0187");
	ret1 = fprintf(fppres, "|%+#'*.*Lc|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0187") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+#'*.*Lc|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0188");
	ret1 = fprintf(fppres, "|%+#'*.*tc|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0188") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+#'*.*tc|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0189");
	ret1 = fprintf(fppres, "|%+#'*.*C|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0189") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+#'*.*C|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0190");
	ret1 = fprintf(fppres, "|%+#'*.*hhC|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0190") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+#'*.*hhC|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0191");
	ret1 = fprintf(fppres, "|%+#'*.*hC|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0191") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+#'*.*hC|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0192");
	ret1 = fprintf(fppres, "|%+#'*.*lC|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0192") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+#'*.*lC|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0193");
	ret1 = fprintf(fppres, "|%+#'*.*llC|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0193") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+#'*.*llC|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0194");
	ret1 = fprintf(fppres, "|%+#'*.*jC|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0194") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+#'*.*jC|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0195");
	ret1 = fprintf(fppres, "|%+#'*.*zC|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0195") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+#'*.*zC|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0196");
	ret1 = fprintf(fppres, "|%+#'*.*LC|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0196") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+#'*.*LC|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0197");
	ret1 = fprintf(fppres, "|%+#'*.*tC|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0197") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+#'*.*tC|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0198");
	ret1 = fprintf(fppres, "|%0+#'*.*c|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0198") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+#'*.*c|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0199");
	ret1 = fprintf(fppres, "|%0+#'*.*hhc|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0199") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+#'*.*hhc|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0200");
	ret1 = fprintf(fppres, "|%0+#'*.*hc|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0200") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+#'*.*hc|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0201");
	ret1 = fprintf(fppres, "|%0+#'*.*lc|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0201") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+#'*.*lc|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0202");
	ret1 = fprintf(fppres, "|%0+#'*.*llc|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0202") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+#'*.*llc|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0203");
	ret1 = fprintf(fppres, "|%0+#'*.*jc|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0203") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+#'*.*jc|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0204");
	ret1 = fprintf(fppres, "|%0+#'*.*zc|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0204") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+#'*.*zc|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0205");
	ret1 = fprintf(fppres, "|%0+#'*.*Lc|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0205") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+#'*.*Lc|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0206");
	ret1 = fprintf(fppres, "|%0+#'*.*tc|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0206") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+#'*.*tc|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0207");
	ret1 = fprintf(fppres, "|%0+#'*.*C|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0207") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+#'*.*C|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0208");
	ret1 = fprintf(fppres, "|%0+#'*.*hhC|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0208") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+#'*.*hhC|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0209");
	ret1 = fprintf(fppres, "|%0+#'*.*hC|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0209") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+#'*.*hC|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0210");
	ret1 = fprintf(fppres, "|%0+#'*.*lC|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0210") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+#'*.*lC|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0211");
	ret1 = fprintf(fppres, "|%0+#'*.*llC|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0211") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+#'*.*llC|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0212");
	ret1 = fprintf(fppres, "|%0+#'*.*jC|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0212") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+#'*.*jC|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0213");
	ret1 = fprintf(fppres, "|%0+#'*.*zC|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0213") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+#'*.*zC|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0214");
	ret1 = fprintf(fppres, "|%0+#'*.*LC|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0214") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+#'*.*LC|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0215");
	ret1 = fprintf(fppres, "|%0+#'*.*tC|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0215") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+#'*.*tC|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0216");
	ret1 = fprintf(fppres, "|%-#'*.*c|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0216") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%-#'*.*c|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0217");
	ret1 = fprintf(fppres, "|%-#'*.*hhc|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0217") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%-#'*.*hhc|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0218");
	ret1 = fprintf(fppres, "|%-#'*.*hc|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0218") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%-#'*.*hc|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0219");
	ret1 = fprintf(fppres, "|%-#'*.*lc|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0219") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%-#'*.*lc|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0220");
	ret1 = fprintf(fppres, "|%-#'*.*llc|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0220") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%-#'*.*llc|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0221");
	ret1 = fprintf(fppres, "|%-#'*.*jc|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0221") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%-#'*.*jc|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0222");
	ret1 = fprintf(fppres, "|%-#'*.*zc|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0222") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%-#'*.*zc|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0223");
	ret1 = fprintf(fppres, "|%-#'*.*Lc|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0223") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%-#'*.*Lc|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0224");
	ret1 = fprintf(fppres, "|%-#'*.*tc|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0224") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%-#'*.*tc|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0225");
	ret1 = fprintf(fppres, "|%-#'*.*C|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0225") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%-#'*.*C|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0226");
	ret1 = fprintf(fppres, "|%-#'*.*hhC|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0226") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%-#'*.*hhC|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0227");
	ret1 = fprintf(fppres, "|%-#'*.*hC|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0227") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%-#'*.*hC|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0228");
	ret1 = fprintf(fppres, "|%-#'*.*lC|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0228") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%-#'*.*lC|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0229");
	ret1 = fprintf(fppres, "|%-#'*.*llC|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0229") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%-#'*.*llC|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0230");
	ret1 = fprintf(fppres, "|%-#'*.*jC|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0230") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%-#'*.*jC|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0231");
	ret1 = fprintf(fppres, "|%-#'*.*zC|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0231") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%-#'*.*zC|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0232");
	ret1 = fprintf(fppres, "|%-#'*.*LC|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0232") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%-#'*.*LC|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0233");
	ret1 = fprintf(fppres, "|%-#'*.*tC|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0233") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%-#'*.*tC|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0234");
	ret1 = fprintf(fppres, "|%0-#'*.*c|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0234") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0-#'*.*c|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0235");
	ret1 = fprintf(fppres, "|%0-#'*.*hhc|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0235") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0-#'*.*hhc|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0236");
	ret1 = fprintf(fppres, "|%0-#'*.*hc|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0236") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0-#'*.*hc|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0237");
	ret1 = fprintf(fppres, "|%0-#'*.*lc|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0237") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0-#'*.*lc|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0238");
	ret1 = fprintf(fppres, "|%0-#'*.*llc|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0238") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0-#'*.*llc|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0239");
	ret1 = fprintf(fppres, "|%0-#'*.*jc|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0239") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0-#'*.*jc|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0240");
	ret1 = fprintf(fppres, "|%0-#'*.*zc|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0240") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0-#'*.*zc|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0241");
	ret1 = fprintf(fppres, "|%0-#'*.*Lc|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0241") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0-#'*.*Lc|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0242");
	ret1 = fprintf(fppres, "|%0-#'*.*tc|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0242") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0-#'*.*tc|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0243");
	ret1 = fprintf(fppres, "|%0-#'*.*C|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0243") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0-#'*.*C|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0244");
	ret1 = fprintf(fppres, "|%0-#'*.*hhC|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0244") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0-#'*.*hhC|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0245");
	ret1 = fprintf(fppres, "|%0-#'*.*hC|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0245") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0-#'*.*hC|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0246");
	ret1 = fprintf(fppres, "|%0-#'*.*lC|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0246") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0-#'*.*lC|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0247");
	ret1 = fprintf(fppres, "|%0-#'*.*llC|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0247") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0-#'*.*llC|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0248");
	ret1 = fprintf(fppres, "|%0-#'*.*jC|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0248") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0-#'*.*jC|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0249");
	ret1 = fprintf(fppres, "|%0-#'*.*zC|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0249") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0-#'*.*zC|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0250");
	ret1 = fprintf(fppres, "|%0-#'*.*LC|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0250") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0-#'*.*LC|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0251");
	ret1 = fprintf(fppres, "|%0-#'*.*tC|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0251") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0-#'*.*tC|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0252");
	ret1 = fprintf(fppres, "|%+-#'*.*c|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0252") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+-#'*.*c|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0253");
	ret1 = fprintf(fppres, "|%+-#'*.*hhc|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0253") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+-#'*.*hhc|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0254");
	ret1 = fprintf(fppres, "|%+-#'*.*hc|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0254") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+-#'*.*hc|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0255");
	ret1 = fprintf(fppres, "|%+-#'*.*lc|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0255") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+-#'*.*lc|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0256");
	ret1 = fprintf(fppres, "|%+-#'*.*llc|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0256") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+-#'*.*llc|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0257");
	ret1 = fprintf(fppres, "|%+-#'*.*jc|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0257") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+-#'*.*jc|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0258");
	ret1 = fprintf(fppres, "|%+-#'*.*zc|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0258") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+-#'*.*zc|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0259");
	ret1 = fprintf(fppres, "|%+-#'*.*Lc|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0259") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+-#'*.*Lc|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0260");
	ret1 = fprintf(fppres, "|%+-#'*.*tc|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0260") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+-#'*.*tc|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0261");
	ret1 = fprintf(fppres, "|%+-#'*.*C|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0261") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+-#'*.*C|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0262");
	ret1 = fprintf(fppres, "|%+-#'*.*hhC|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0262") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+-#'*.*hhC|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0263");
	ret1 = fprintf(fppres, "|%+-#'*.*hC|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0263") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+-#'*.*hC|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0264");
	ret1 = fprintf(fppres, "|%+-#'*.*lC|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0264") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+-#'*.*lC|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0265");
	ret1 = fprintf(fppres, "|%+-#'*.*llC|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0265") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+-#'*.*llC|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0266");
	ret1 = fprintf(fppres, "|%+-#'*.*jC|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0266") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+-#'*.*jC|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0267");
	ret1 = fprintf(fppres, "|%+-#'*.*zC|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0267") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+-#'*.*zC|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0268");
	ret1 = fprintf(fppres, "|%+-#'*.*LC|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0268") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+-#'*.*LC|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0269");
	ret1 = fprintf(fppres, "|%+-#'*.*tC|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0269") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+-#'*.*tC|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0270");
	ret1 = fprintf(fppres, "|%0+-#'*.*c|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0270") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+-#'*.*c|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0271");
	ret1 = fprintf(fppres, "|%0+-#'*.*hhc|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0271") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+-#'*.*hhc|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0272");
	ret1 = fprintf(fppres, "|%0+-#'*.*hc|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0272") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+-#'*.*hc|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0273");
	ret1 = fprintf(fppres, "|%0+-#'*.*lc|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0273") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+-#'*.*lc|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0274");
	ret1 = fprintf(fppres, "|%0+-#'*.*llc|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0274") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+-#'*.*llc|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0275");
	ret1 = fprintf(fppres, "|%0+-#'*.*jc|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0275") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+-#'*.*jc|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0276");
	ret1 = fprintf(fppres, "|%0+-#'*.*zc|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0276") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+-#'*.*zc|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0277");
	ret1 = fprintf(fppres, "|%0+-#'*.*Lc|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0277") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+-#'*.*Lc|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0278");
	ret1 = fprintf(fppres, "|%0+-#'*.*tc|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0278") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+-#'*.*tc|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0279");
	ret1 = fprintf(fppres, "|%0+-#'*.*C|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0279") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+-#'*.*C|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0280");
	ret1 = fprintf(fppres, "|%0+-#'*.*hhC|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0280") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+-#'*.*hhC|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0281");
	ret1 = fprintf(fppres, "|%0+-#'*.*hC|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0281") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+-#'*.*hC|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0282");
	ret1 = fprintf(fppres, "|%0+-#'*.*lC|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0282") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+-#'*.*lC|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0283");
	ret1 = fprintf(fppres, "|%0+-#'*.*llC|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0283") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+-#'*.*llC|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0284");
	ret1 = fprintf(fppres, "|%0+-#'*.*jC|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0284") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+-#'*.*jC|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0285");
	ret1 = fprintf(fppres, "|%0+-#'*.*zC|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0285") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+-#'*.*zC|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0286");
	ret1 = fprintf(fppres, "|%0+-#'*.*LC|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0286") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+-#'*.*LC|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0287");
	ret1 = fprintf(fppres, "|%0+-#'*.*tC|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0287") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+-#'*.*tC|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0288");
	ret1 = fprintf(fppres, "|%\'*.*c|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0288") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%\'*.*c|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0289");
	ret1 = fprintf(fppres, "|%\'*.*hhc|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0289") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%\'*.*hhc|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0290");
	ret1 = fprintf(fppres, "|%\'*.*hc|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0290") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%\'*.*hc|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0291");
	ret1 = fprintf(fppres, "|%\'*.*lc|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0291") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%\'*.*lc|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0292");
	ret1 = fprintf(fppres, "|%\'*.*llc|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0292") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%\'*.*llc|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0293");
	ret1 = fprintf(fppres, "|%\'*.*jc|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0293") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%\'*.*jc|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0294");
	ret1 = fprintf(fppres, "|%\'*.*zc|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0294") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%\'*.*zc|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0295");
	ret1 = fprintf(fppres, "|%\'*.*Lc|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0295") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%\'*.*Lc|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0296");
	ret1 = fprintf(fppres, "|%\'*.*tc|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0296") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%\'*.*tc|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0297");
	ret1 = fprintf(fppres, "|%\'*.*C|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0297") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%\'*.*C|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0298");
	ret1 = fprintf(fppres, "|%\'*.*hhC|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0298") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%\'*.*hhC|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0299");
	ret1 = fprintf(fppres, "|%\'*.*hC|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0299") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%\'*.*hC|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0300");
	ret1 = fprintf(fppres, "|%\'*.*lC|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0300") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%\'*.*lC|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0301");
	ret1 = fprintf(fppres, "|%\'*.*llC|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0301") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%\'*.*llC|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0302");
	ret1 = fprintf(fppres, "|%\'*.*jC|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0302") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%\'*.*jC|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0303");
	ret1 = fprintf(fppres, "|%\'*.*zC|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0303") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%\'*.*zC|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0304");
	ret1 = fprintf(fppres, "|%\'*.*LC|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0304") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%\'*.*LC|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0305");
	ret1 = fprintf(fppres, "|%\'*.*tC|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0305") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%\'*.*tC|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0306");
	ret1 = fprintf(fppres, "|%0\'*.*c|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0306") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0\'*.*c|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0307");
	ret1 = fprintf(fppres, "|%0\'*.*hhc|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0307") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0\'*.*hhc|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0308");
	ret1 = fprintf(fppres, "|%0\'*.*hc|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0308") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0\'*.*hc|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0309");
	ret1 = fprintf(fppres, "|%0\'*.*lc|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0309") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0\'*.*lc|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0310");
	ret1 = fprintf(fppres, "|%0\'*.*llc|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0310") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0\'*.*llc|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0311");
	ret1 = fprintf(fppres, "|%0\'*.*jc|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0311") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0\'*.*jc|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0312");
	ret1 = fprintf(fppres, "|%0\'*.*zc|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0312") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0\'*.*zc|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0313");
	ret1 = fprintf(fppres, "|%0\'*.*Lc|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0313") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0\'*.*Lc|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0314");
	ret1 = fprintf(fppres, "|%0\'*.*tc|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0314") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0\'*.*tc|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0315");
	ret1 = fprintf(fppres, "|%0\'*.*C|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0315") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0\'*.*C|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0316");
	ret1 = fprintf(fppres, "|%0\'*.*hhC|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0316") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0\'*.*hhC|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0317");
	ret1 = fprintf(fppres, "|%0\'*.*hC|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0317") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0\'*.*hC|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0318");
	ret1 = fprintf(fppres, "|%0\'*.*lC|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0318") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0\'*.*lC|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0319");
	ret1 = fprintf(fppres, "|%0\'*.*llC|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0319") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0\'*.*llC|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0320");
	ret1 = fprintf(fppres, "|%0\'*.*jC|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0320") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0\'*.*jC|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0321");
	ret1 = fprintf(fppres, "|%0\'*.*zC|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0321") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0\'*.*zC|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0322");
	ret1 = fprintf(fppres, "|%0\'*.*LC|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0322") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0\'*.*LC|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0323");
	ret1 = fprintf(fppres, "|%0\'*.*tC|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0323") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0\'*.*tC|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0324");
	ret1 = fprintf(fppres, "|%+\'*.*c|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0324") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+\'*.*c|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0325");
	ret1 = fprintf(fppres, "|%+\'*.*hhc|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0325") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+\'*.*hhc|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0326");
	ret1 = fprintf(fppres, "|%+\'*.*hc|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0326") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+\'*.*hc|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0327");
	ret1 = fprintf(fppres, "|%+\'*.*lc|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0327") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+\'*.*lc|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0328");
	ret1 = fprintf(fppres, "|%+\'*.*llc|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0328") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+\'*.*llc|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0329");
	ret1 = fprintf(fppres, "|%+\'*.*jc|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0329") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+\'*.*jc|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0330");
	ret1 = fprintf(fppres, "|%+\'*.*zc|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0330") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+\'*.*zc|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0331");
	ret1 = fprintf(fppres, "|%+\'*.*Lc|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0331") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+\'*.*Lc|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0332");
	ret1 = fprintf(fppres, "|%+\'*.*tc|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0332") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+\'*.*tc|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0333");
	ret1 = fprintf(fppres, "|%+\'*.*C|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0333") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+\'*.*C|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0334");
	ret1 = fprintf(fppres, "|%+\'*.*hhC|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0334") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+\'*.*hhC|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0335");
	ret1 = fprintf(fppres, "|%+\'*.*hC|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0335") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+\'*.*hC|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0336");
	ret1 = fprintf(fppres, "|%+\'*.*lC|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0336") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+\'*.*lC|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0337");
	ret1 = fprintf(fppres, "|%+\'*.*llC|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0337") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+\'*.*llC|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0338");
	ret1 = fprintf(fppres, "|%+\'*.*jC|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0338") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+\'*.*jC|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0339");
	ret1 = fprintf(fppres, "|%+\'*.*zC|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0339") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+\'*.*zC|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0340");
	ret1 = fprintf(fppres, "|%+\'*.*LC|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0340") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+\'*.*LC|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0341");
	ret1 = fprintf(fppres, "|%+\'*.*tC|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0341") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+\'*.*tC|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0342");
	ret1 = fprintf(fppres, "|%0+\'*.*c|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0342") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+\'*.*c|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0343");
	ret1 = fprintf(fppres, "|%0+\'*.*hhc|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0343") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+\'*.*hhc|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0344");
	ret1 = fprintf(fppres, "|%0+\'*.*hc|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0344") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+\'*.*hc|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0345");
	ret1 = fprintf(fppres, "|%0+\'*.*lc|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0345") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+\'*.*lc|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0346");
	ret1 = fprintf(fppres, "|%0+\'*.*llc|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0346") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+\'*.*llc|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0347");
	ret1 = fprintf(fppres, "|%0+\'*.*jc|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0347") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+\'*.*jc|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0348");
	ret1 = fprintf(fppres, "|%0+\'*.*zc|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0348") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+\'*.*zc|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0349");
	ret1 = fprintf(fppres, "|%0+\'*.*Lc|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0349") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+\'*.*Lc|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0350");
	ret1 = fprintf(fppres, "|%0+\'*.*tc|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0350") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+\'*.*tc|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0351");
	ret1 = fprintf(fppres, "|%0+\'*.*C|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0351") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+\'*.*C|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0352");
	ret1 = fprintf(fppres, "|%0+\'*.*hhC|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0352") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+\'*.*hhC|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0353");
	ret1 = fprintf(fppres, "|%0+\'*.*hC|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0353") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+\'*.*hC|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0354");
	ret1 = fprintf(fppres, "|%0+\'*.*lC|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0354") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+\'*.*lC|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0355");
	ret1 = fprintf(fppres, "|%0+\'*.*llC|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0355") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+\'*.*llC|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0356");
	ret1 = fprintf(fppres, "|%0+\'*.*jC|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0356") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+\'*.*jC|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0357");
	ret1 = fprintf(fppres, "|%0+\'*.*zC|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0357") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+\'*.*zC|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0358");
	ret1 = fprintf(fppres, "|%0+\'*.*LC|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0358") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+\'*.*LC|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0359");
	ret1 = fprintf(fppres, "|%0+\'*.*tC|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0359") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+\'*.*tC|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0360");
	ret1 = fprintf(fppres, "|%-\'*.*c|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0360") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%-\'*.*c|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0361");
	ret1 = fprintf(fppres, "|%-\'*.*hhc|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0361") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%-\'*.*hhc|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0362");
	ret1 = fprintf(fppres, "|%-\'*.*hc|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0362") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%-\'*.*hc|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0363");
	ret1 = fprintf(fppres, "|%-\'*.*lc|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0363") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%-\'*.*lc|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0364");
	ret1 = fprintf(fppres, "|%-\'*.*llc|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0364") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%-\'*.*llc|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0365");
	ret1 = fprintf(fppres, "|%-\'*.*jc|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0365") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%-\'*.*jc|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0366");
	ret1 = fprintf(fppres, "|%-\'*.*zc|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0366") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%-\'*.*zc|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0367");
	ret1 = fprintf(fppres, "|%-\'*.*Lc|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0367") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%-\'*.*Lc|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0368");
	ret1 = fprintf(fppres, "|%-\'*.*tc|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0368") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%-\'*.*tc|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0369");
	ret1 = fprintf(fppres, "|%-\'*.*C|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0369") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%-\'*.*C|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0370");
	ret1 = fprintf(fppres, "|%-\'*.*hhC|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0370") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%-\'*.*hhC|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0371");
	ret1 = fprintf(fppres, "|%-\'*.*hC|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0371") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%-\'*.*hC|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0372");
	ret1 = fprintf(fppres, "|%-\'*.*lC|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0372") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%-\'*.*lC|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0373");
	ret1 = fprintf(fppres, "|%-\'*.*llC|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0373") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%-\'*.*llC|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0374");
	ret1 = fprintf(fppres, "|%-\'*.*jC|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0374") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%-\'*.*jC|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0375");
	ret1 = fprintf(fppres, "|%-\'*.*zC|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0375") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%-\'*.*zC|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0376");
	ret1 = fprintf(fppres, "|%-\'*.*LC|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0376") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%-\'*.*LC|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0377");
	ret1 = fprintf(fppres, "|%-\'*.*tC|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0377") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%-\'*.*tC|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0378");
	ret1 = fprintf(fppres, "|%0-\'*.*c|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0378") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0-\'*.*c|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0379");
	ret1 = fprintf(fppres, "|%0-\'*.*hhc|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0379") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0-\'*.*hhc|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0380");
	ret1 = fprintf(fppres, "|%0-\'*.*hc|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0380") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0-\'*.*hc|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0381");
	ret1 = fprintf(fppres, "|%0-\'*.*lc|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0381") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0-\'*.*lc|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0382");
	ret1 = fprintf(fppres, "|%0-\'*.*llc|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0382") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0-\'*.*llc|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0383");
	ret1 = fprintf(fppres, "|%0-\'*.*jc|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0383") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0-\'*.*jc|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0384");
	ret1 = fprintf(fppres, "|%0-\'*.*zc|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0384") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0-\'*.*zc|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0385");
	ret1 = fprintf(fppres, "|%0-\'*.*Lc|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0385") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0-\'*.*Lc|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0386");
	ret1 = fprintf(fppres, "|%0-\'*.*tc|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0386") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0-\'*.*tc|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0387");
	ret1 = fprintf(fppres, "|%0-\'*.*C|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0387") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0-\'*.*C|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0388");
	ret1 = fprintf(fppres, "|%0-\'*.*hhC|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0388") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0-\'*.*hhC|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0389");
	ret1 = fprintf(fppres, "|%0-\'*.*hC|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0389") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0-\'*.*hC|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0390");
	ret1 = fprintf(fppres, "|%0-\'*.*lC|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0390") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0-\'*.*lC|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0391");
	ret1 = fprintf(fppres, "|%0-\'*.*llC|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0391") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0-\'*.*llC|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0392");
	ret1 = fprintf(fppres, "|%0-\'*.*jC|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0392") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0-\'*.*jC|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0393");
	ret1 = fprintf(fppres, "|%0-\'*.*zC|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0393") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0-\'*.*zC|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0394");
	ret1 = fprintf(fppres, "|%0-\'*.*LC|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0394") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0-\'*.*LC|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0395");
	ret1 = fprintf(fppres, "|%0-\'*.*tC|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0395") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0-\'*.*tC|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0396");
	ret1 = fprintf(fppres, "|%+-\'*.*c|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0396") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+-\'*.*c|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0397");
	ret1 = fprintf(fppres, "|%+-\'*.*hhc|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0397") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+-\'*.*hhc|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0398");
	ret1 = fprintf(fppres, "|%+-\'*.*hc|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0398") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+-\'*.*hc|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0399");
	ret1 = fprintf(fppres, "|%+-\'*.*lc|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0399") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+-\'*.*lc|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0400");
	ret1 = fprintf(fppres, "|%+-\'*.*llc|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0400") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+-\'*.*llc|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0401");
	ret1 = fprintf(fppres, "|%+-\'*.*jc|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0401") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+-\'*.*jc|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0402");
	ret1 = fprintf(fppres, "|%+-\'*.*zc|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0402") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+-\'*.*zc|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0403");
	ret1 = fprintf(fppres, "|%+-\'*.*Lc|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0403") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+-\'*.*Lc|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0404");
	ret1 = fprintf(fppres, "|%+-\'*.*tc|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0404") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+-\'*.*tc|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0405");
	ret1 = fprintf(fppres, "|%+-\'*.*C|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0405") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+-\'*.*C|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0406");
	ret1 = fprintf(fppres, "|%+-\'*.*hhC|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0406") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+-\'*.*hhC|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0407");
	ret1 = fprintf(fppres, "|%+-\'*.*hC|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0407") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+-\'*.*hC|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0408");
	ret1 = fprintf(fppres, "|%+-\'*.*lC|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0408") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+-\'*.*lC|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0409");
	ret1 = fprintf(fppres, "|%+-\'*.*llC|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0409") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+-\'*.*llC|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0410");
	ret1 = fprintf(fppres, "|%+-\'*.*jC|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0410") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+-\'*.*jC|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0411");
	ret1 = fprintf(fppres, "|%+-\'*.*zC|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0411") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+-\'*.*zC|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0412");
	ret1 = fprintf(fppres, "|%+-\'*.*LC|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0412") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+-\'*.*LC|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0413");
	ret1 = fprintf(fppres, "|%+-\'*.*tC|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0413") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+-\'*.*tC|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0414");
	ret1 = fprintf(fppres, "|%0+-\'*.*c|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0414") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+-\'*.*c|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0415");
	ret1 = fprintf(fppres, "|%0+-\'*.*hhc|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0415") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+-\'*.*hhc|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0416");
	ret1 = fprintf(fppres, "|%0+-\'*.*hc|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0416") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+-\'*.*hc|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0417");
	ret1 = fprintf(fppres, "|%0+-\'*.*lc|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0417") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+-\'*.*lc|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0418");
	ret1 = fprintf(fppres, "|%0+-\'*.*llc|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0418") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+-\'*.*llc|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0419");
	ret1 = fprintf(fppres, "|%0+-\'*.*jc|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0419") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+-\'*.*jc|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0420");
	ret1 = fprintf(fppres, "|%0+-\'*.*zc|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0420") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+-\'*.*zc|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0421");
	ret1 = fprintf(fppres, "|%0+-\'*.*Lc|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0421") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+-\'*.*Lc|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0422");
	ret1 = fprintf(fppres, "|%0+-\'*.*tc|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0422") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+-\'*.*tc|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0423");
	ret1 = fprintf(fppres, "|%0+-\'*.*C|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0423") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+-\'*.*C|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0424");
	ret1 = fprintf(fppres, "|%0+-\'*.*hhC|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0424") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+-\'*.*hhC|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0425");
	ret1 = fprintf(fppres, "|%0+-\'*.*hC|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0425") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+-\'*.*hC|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0426");
	ret1 = fprintf(fppres, "|%0+-\'*.*lC|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0426") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+-\'*.*lC|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0427");
	ret1 = fprintf(fppres, "|%0+-\'*.*llC|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0427") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+-\'*.*llC|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0428");
	ret1 = fprintf(fppres, "|%0+-\'*.*jC|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0428") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+-\'*.*jC|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0429");
	ret1 = fprintf(fppres, "|%0+-\'*.*zC|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0429") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+-\'*.*zC|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0430");
	ret1 = fprintf(fppres, "|%0+-\'*.*LC|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0430") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+-\'*.*LC|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0431");
	ret1 = fprintf(fppres, "|%0+-\'*.*tC|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0431") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+-\'*.*tC|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0432");
	ret1 = fprintf(fppres, "|%#\'*.*c|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0432") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%#\'*.*c|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0433");
	ret1 = fprintf(fppres, "|%#\'*.*hhc|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0433") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%#\'*.*hhc|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0434");
	ret1 = fprintf(fppres, "|%#\'*.*hc|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0434") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%#\'*.*hc|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0435");
	ret1 = fprintf(fppres, "|%#\'*.*lc|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0435") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%#\'*.*lc|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0436");
	ret1 = fprintf(fppres, "|%#\'*.*llc|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0436") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%#\'*.*llc|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0437");
	ret1 = fprintf(fppres, "|%#\'*.*jc|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0437") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%#\'*.*jc|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0438");
	ret1 = fprintf(fppres, "|%#\'*.*zc|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0438") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%#\'*.*zc|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0439");
	ret1 = fprintf(fppres, "|%#\'*.*Lc|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0439") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%#\'*.*Lc|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0440");
	ret1 = fprintf(fppres, "|%#\'*.*tc|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0440") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%#\'*.*tc|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0441");
	ret1 = fprintf(fppres, "|%#\'*.*C|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0441") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%#\'*.*C|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0442");
	ret1 = fprintf(fppres, "|%#\'*.*hhC|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0442") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%#\'*.*hhC|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0443");
	ret1 = fprintf(fppres, "|%#\'*.*hC|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0443") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%#\'*.*hC|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0444");
	ret1 = fprintf(fppres, "|%#\'*.*lC|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0444") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%#\'*.*lC|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0445");
	ret1 = fprintf(fppres, "|%#\'*.*llC|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0445") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%#\'*.*llC|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0446");
	ret1 = fprintf(fppres, "|%#\'*.*jC|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0446") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%#\'*.*jC|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0447");
	ret1 = fprintf(fppres, "|%#\'*.*zC|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0447") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%#\'*.*zC|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0448");
	ret1 = fprintf(fppres, "|%#\'*.*LC|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0448") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%#\'*.*LC|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0449");
	ret1 = fprintf(fppres, "|%#\'*.*tC|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0449") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%#\'*.*tC|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0450");
	ret1 = fprintf(fppres, "|%0#\'*.*c|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0450") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0#\'*.*c|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0451");
	ret1 = fprintf(fppres, "|%0#\'*.*hhc|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0451") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0#\'*.*hhc|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0452");
	ret1 = fprintf(fppres, "|%0#\'*.*hc|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0452") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0#\'*.*hc|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0453");
	ret1 = fprintf(fppres, "|%0#\'*.*lc|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0453") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0#\'*.*lc|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0454");
	ret1 = fprintf(fppres, "|%0#\'*.*llc|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0454") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0#\'*.*llc|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0455");
	ret1 = fprintf(fppres, "|%0#\'*.*jc|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0455") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0#\'*.*jc|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0456");
	ret1 = fprintf(fppres, "|%0#\'*.*zc|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0456") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0#\'*.*zc|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0457");
	ret1 = fprintf(fppres, "|%0#\'*.*Lc|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0457") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0#\'*.*Lc|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0458");
	ret1 = fprintf(fppres, "|%0#\'*.*tc|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0458") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0#\'*.*tc|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0459");
	ret1 = fprintf(fppres, "|%0#\'*.*C|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0459") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0#\'*.*C|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0460");
	ret1 = fprintf(fppres, "|%0#\'*.*hhC|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0460") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0#\'*.*hhC|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0461");
	ret1 = fprintf(fppres, "|%0#\'*.*hC|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0461") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0#\'*.*hC|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0462");
	ret1 = fprintf(fppres, "|%0#\'*.*lC|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0462") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0#\'*.*lC|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0463");
	ret1 = fprintf(fppres, "|%0#\'*.*llC|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0463") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0#\'*.*llC|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0464");
	ret1 = fprintf(fppres, "|%0#\'*.*jC|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0464") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0#\'*.*jC|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0465");
	ret1 = fprintf(fppres, "|%0#\'*.*zC|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0465") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0#\'*.*zC|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0466");
	ret1 = fprintf(fppres, "|%0#\'*.*LC|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0466") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0#\'*.*LC|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0467");
	ret1 = fprintf(fppres, "|%0#\'*.*tC|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0467") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0#\'*.*tC|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0468");
	ret1 = fprintf(fppres, "|%+#\'*.*c|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0468") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+#\'*.*c|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0469");
	ret1 = fprintf(fppres, "|%+#\'*.*hhc|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0469") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+#\'*.*hhc|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0470");
	ret1 = fprintf(fppres, "|%+#\'*.*hc|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0470") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+#\'*.*hc|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0471");
	ret1 = fprintf(fppres, "|%+#\'*.*lc|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0471") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+#\'*.*lc|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0472");
	ret1 = fprintf(fppres, "|%+#\'*.*llc|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0472") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+#\'*.*llc|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0473");
	ret1 = fprintf(fppres, "|%+#\'*.*jc|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0473") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+#\'*.*jc|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0474");
	ret1 = fprintf(fppres, "|%+#\'*.*zc|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0474") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+#\'*.*zc|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0475");
	ret1 = fprintf(fppres, "|%+#\'*.*Lc|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0475") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+#\'*.*Lc|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0476");
	ret1 = fprintf(fppres, "|%+#\'*.*tc|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0476") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+#\'*.*tc|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0477");
	ret1 = fprintf(fppres, "|%+#\'*.*C|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0477") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+#\'*.*C|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0478");
	ret1 = fprintf(fppres, "|%+#\'*.*hhC|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0478") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+#\'*.*hhC|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0479");
	ret1 = fprintf(fppres, "|%+#\'*.*hC|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0479") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+#\'*.*hC|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0480");
	ret1 = fprintf(fppres, "|%+#\'*.*lC|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0480") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+#\'*.*lC|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0481");
	ret1 = fprintf(fppres, "|%+#\'*.*llC|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0481") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+#\'*.*llC|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0482");
	ret1 = fprintf(fppres, "|%+#\'*.*jC|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0482") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+#\'*.*jC|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0483");
	ret1 = fprintf(fppres, "|%+#\'*.*zC|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0483") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+#\'*.*zC|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0484");
	ret1 = fprintf(fppres, "|%+#\'*.*LC|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0484") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+#\'*.*LC|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0485");
	ret1 = fprintf(fppres, "|%+#\'*.*tC|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0485") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+#\'*.*tC|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0486");
	ret1 = fprintf(fppres, "|%0+#\'*.*c|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0486") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+#\'*.*c|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0487");
	ret1 = fprintf(fppres, "|%0+#\'*.*hhc|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0487") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+#\'*.*hhc|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0488");
	ret1 = fprintf(fppres, "|%0+#\'*.*hc|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0488") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+#\'*.*hc|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0489");
	ret1 = fprintf(fppres, "|%0+#\'*.*lc|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0489") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+#\'*.*lc|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0490");
	ret1 = fprintf(fppres, "|%0+#\'*.*llc|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0490") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+#\'*.*llc|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0491");
	ret1 = fprintf(fppres, "|%0+#\'*.*jc|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0491") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+#\'*.*jc|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0492");
	ret1 = fprintf(fppres, "|%0+#\'*.*zc|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0492") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+#\'*.*zc|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0493");
	ret1 = fprintf(fppres, "|%0+#\'*.*Lc|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0493") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+#\'*.*Lc|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0494");
	ret1 = fprintf(fppres, "|%0+#\'*.*tc|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0494") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+#\'*.*tc|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0495");
	ret1 = fprintf(fppres, "|%0+#\'*.*C|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0495") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+#\'*.*C|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0496");
	ret1 = fprintf(fppres, "|%0+#\'*.*hhC|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0496") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+#\'*.*hhC|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0497");
	ret1 = fprintf(fppres, "|%0+#\'*.*hC|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0497") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+#\'*.*hC|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0498");
	ret1 = fprintf(fppres, "|%0+#\'*.*lC|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0498") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+#\'*.*lC|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0499");
	ret1 = fprintf(fppres, "|%0+#\'*.*llC|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0499") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+#\'*.*llC|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0500");
	ret1 = fprintf(fppres, "|%0+#\'*.*jC|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0500") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+#\'*.*jC|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0501");
	ret1 = fprintf(fppres, "|%0+#\'*.*zC|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0501") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+#\'*.*zC|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0502");
	ret1 = fprintf(fppres, "|%0+#\'*.*LC|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0502") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+#\'*.*LC|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0503");
	ret1 = fprintf(fppres, "|%0+#\'*.*tC|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0503") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+#\'*.*tC|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0504");
	ret1 = fprintf(fppres, "|%-#\'*.*c|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0504") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%-#\'*.*c|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0505");
	ret1 = fprintf(fppres, "|%-#\'*.*hhc|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0505") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%-#\'*.*hhc|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0506");
	ret1 = fprintf(fppres, "|%-#\'*.*hc|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0506") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%-#\'*.*hc|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0507");
	ret1 = fprintf(fppres, "|%-#\'*.*lc|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0507") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%-#\'*.*lc|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0508");
	ret1 = fprintf(fppres, "|%-#\'*.*llc|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0508") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%-#\'*.*llc|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0509");
	ret1 = fprintf(fppres, "|%-#\'*.*jc|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0509") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%-#\'*.*jc|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0510");
	ret1 = fprintf(fppres, "|%-#\'*.*zc|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0510") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%-#\'*.*zc|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0511");
	ret1 = fprintf(fppres, "|%-#\'*.*Lc|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0511") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%-#\'*.*Lc|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0512");
	ret1 = fprintf(fppres, "|%-#\'*.*tc|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0512") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%-#\'*.*tc|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0513");
	ret1 = fprintf(fppres, "|%-#\'*.*C|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0513") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%-#\'*.*C|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0514");
	ret1 = fprintf(fppres, "|%-#\'*.*hhC|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0514") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%-#\'*.*hhC|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0515");
	ret1 = fprintf(fppres, "|%-#\'*.*hC|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0515") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%-#\'*.*hC|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0516");
	ret1 = fprintf(fppres, "|%-#\'*.*lC|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0516") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%-#\'*.*lC|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0517");
	ret1 = fprintf(fppres, "|%-#\'*.*llC|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0517") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%-#\'*.*llC|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0518");
	ret1 = fprintf(fppres, "|%-#\'*.*jC|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0518") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%-#\'*.*jC|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0519");
	ret1 = fprintf(fppres, "|%-#\'*.*zC|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0519") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%-#\'*.*zC|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0520");
	ret1 = fprintf(fppres, "|%-#\'*.*LC|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0520") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%-#\'*.*LC|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0521");
	ret1 = fprintf(fppres, "|%-#\'*.*tC|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0521") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%-#\'*.*tC|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0522");
	ret1 = fprintf(fppres, "|%0-#\'*.*c|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0522") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0-#\'*.*c|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0523");
	ret1 = fprintf(fppres, "|%0-#\'*.*hhc|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0523") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0-#\'*.*hhc|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0524");
	ret1 = fprintf(fppres, "|%0-#\'*.*hc|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0524") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0-#\'*.*hc|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0525");
	ret1 = fprintf(fppres, "|%0-#\'*.*lc|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0525") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0-#\'*.*lc|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0526");
	ret1 = fprintf(fppres, "|%0-#\'*.*llc|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0526") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0-#\'*.*llc|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0527");
	ret1 = fprintf(fppres, "|%0-#\'*.*jc|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0527") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0-#\'*.*jc|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0528");
	ret1 = fprintf(fppres, "|%0-#\'*.*zc|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0528") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0-#\'*.*zc|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0529");
	ret1 = fprintf(fppres, "|%0-#\'*.*Lc|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0529") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0-#\'*.*Lc|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0530");
	ret1 = fprintf(fppres, "|%0-#\'*.*tc|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0530") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0-#\'*.*tc|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0531");
	ret1 = fprintf(fppres, "|%0-#\'*.*C|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0531") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0-#\'*.*C|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0532");
	ret1 = fprintf(fppres, "|%0-#\'*.*hhC|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0532") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0-#\'*.*hhC|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0533");
	ret1 = fprintf(fppres, "|%0-#\'*.*hC|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0533") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0-#\'*.*hC|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0534");
	ret1 = fprintf(fppres, "|%0-#\'*.*lC|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0534") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0-#\'*.*lC|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0535");
	ret1 = fprintf(fppres, "|%0-#\'*.*llC|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0535") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0-#\'*.*llC|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0536");
	ret1 = fprintf(fppres, "|%0-#\'*.*jC|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0536") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0-#\'*.*jC|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0537");
	ret1 = fprintf(fppres, "|%0-#\'*.*zC|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0537") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0-#\'*.*zC|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0538");
	ret1 = fprintf(fppres, "|%0-#\'*.*LC|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0538") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0-#\'*.*LC|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0539");
	ret1 = fprintf(fppres, "|%0-#\'*.*tC|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0539") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0-#\'*.*tC|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0540");
	ret1 = fprintf(fppres, "|%+-#\'*.*c|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0540") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+-#\'*.*c|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0541");
	ret1 = fprintf(fppres, "|%+-#\'*.*hhc|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0541") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+-#\'*.*hhc|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0542");
	ret1 = fprintf(fppres, "|%+-#\'*.*hc|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0542") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+-#\'*.*hc|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0543");
	ret1 = fprintf(fppres, "|%+-#\'*.*lc|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0543") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+-#\'*.*lc|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0544");
	ret1 = fprintf(fppres, "|%+-#\'*.*llc|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0544") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+-#\'*.*llc|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0545");
	ret1 = fprintf(fppres, "|%+-#\'*.*jc|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0545") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+-#\'*.*jc|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0546");
	ret1 = fprintf(fppres, "|%+-#\'*.*zc|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0546") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+-#\'*.*zc|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0547");
	ret1 = fprintf(fppres, "|%+-#\'*.*Lc|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0547") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+-#\'*.*Lc|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0548");
	ret1 = fprintf(fppres, "|%+-#\'*.*tc|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0548") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+-#\'*.*tc|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0549");
	ret1 = fprintf(fppres, "|%+-#\'*.*C|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0549") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+-#\'*.*C|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0550");
	ret1 = fprintf(fppres, "|%+-#\'*.*hhC|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0550") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+-#\'*.*hhC|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0551");
	ret1 = fprintf(fppres, "|%+-#\'*.*hC|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0551") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+-#\'*.*hC|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0552");
	ret1 = fprintf(fppres, "|%+-#\'*.*lC|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0552") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+-#\'*.*lC|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0553");
	ret1 = fprintf(fppres, "|%+-#\'*.*llC|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0553") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+-#\'*.*llC|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0554");
	ret1 = fprintf(fppres, "|%+-#\'*.*jC|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0554") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+-#\'*.*jC|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0555");
	ret1 = fprintf(fppres, "|%+-#\'*.*zC|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0555") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+-#\'*.*zC|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0556");
	ret1 = fprintf(fppres, "|%+-#\'*.*LC|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0556") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+-#\'*.*LC|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0557");
	ret1 = fprintf(fppres, "|%+-#\'*.*tC|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0557") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+-#\'*.*tC|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0558");
	ret1 = fprintf(fppres, "|%0+-#\'*.*c|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0558") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+-#\'*.*c|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0559");
	ret1 = fprintf(fppres, "|%0+-#\'*.*hhc|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0559") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+-#\'*.*hhc|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0560");
	ret1 = fprintf(fppres, "|%0+-#\'*.*hc|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0560") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+-#\'*.*hc|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0561");
	ret1 = fprintf(fppres, "|%0+-#\'*.*lc|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0561") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+-#\'*.*lc|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0562");
	ret1 = fprintf(fppres, "|%0+-#\'*.*llc|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0562") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+-#\'*.*llc|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0563");
	ret1 = fprintf(fppres, "|%0+-#\'*.*jc|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0563") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+-#\'*.*jc|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0564");
	ret1 = fprintf(fppres, "|%0+-#\'*.*zc|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0564") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+-#\'*.*zc|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0565");
	ret1 = fprintf(fppres, "|%0+-#\'*.*Lc|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0565") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+-#\'*.*Lc|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0566");
	ret1 = fprintf(fppres, "|%0+-#\'*.*tc|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0566") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+-#\'*.*tc|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0567");
	ret1 = fprintf(fppres, "|%0+-#\'*.*C|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0567") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+-#\'*.*C|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0568");
	ret1 = fprintf(fppres, "|%0+-#\'*.*hhC|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0568") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+-#\'*.*hhC|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0569");
	ret1 = fprintf(fppres, "|%0+-#\'*.*hC|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0569") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+-#\'*.*hC|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0570");
	ret1 = fprintf(fppres, "|%0+-#\'*.*lC|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0570") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+-#\'*.*lC|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0571");
	ret1 = fprintf(fppres, "|%0+-#\'*.*llC|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0571") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+-#\'*.*llC|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0572");
	ret1 = fprintf(fppres, "|%0+-#\'*.*jC|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0572") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+-#\'*.*jC|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0573");
	ret1 = fprintf(fppres, "|%0+-#\'*.*zC|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0573") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+-#\'*.*zC|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0574");
	ret1 = fprintf(fppres, "|%0+-#\'*.*LC|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0574") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+-#\'*.*LC|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0575");
	ret1 = fprintf(fppres, "|%0+-#\'*.*tC|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0575") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+-#\'*.*tC|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "\n");
	ft_printf("\n");
	fclose(fppres);
	fclose(fppret);
	fclose(fpftret);
}