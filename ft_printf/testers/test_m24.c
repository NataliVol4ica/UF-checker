#include <stdio.h>
#include <stdint.h>
#include <locale.h>
#include "libftprintf.h"

int		main(void)
{
	FILE	*printf_, *printf_ret, *ft_printf_ret;
	int		ret1, ret2;

	setlocale(LC_ALL, "en_US.UTF-8");
	printf_ = fopen("../files/test_m24_printf_print", "w");
	printf_ret = fopen("../files/test_m24_printf_ret", "w");
	ft_printf_ret = fopen("../files/test_m24_ft_printf_ret", "w");
	setvbuf(printf_, NULL, _IONBF, 0);
	setvbuf(printf_ret, NULL, _IONBF, 0);
	setvbuf(ft_printf_ret, NULL, _IONBF, 0);

//@
	ft_printf("#0000");
	fprintf(printf_, "#0000");
	ret1 = fprintf(printf_, "|%0hhs|\n", L"");
	ret2 = ft_printf("|%0hhs|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0001");
	fprintf(printf_, "#0001");
	ret1 = fprintf(printf_, "|%0hs|\n", L"");
	ret2 = ft_printf("|%0hs|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0002");
	fprintf(printf_, "#0002");
	ret1 = fprintf(printf_, "|%0ls|\n", L"");
	ret2 = ft_printf("|%0ls|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0003");
	fprintf(printf_, "#0003");
	ret1 = fprintf(printf_, "|%0lls|\n", L"");
	ret2 = ft_printf("|%0lls|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0004");
	fprintf(printf_, "#0004");
	ret1 = fprintf(printf_, "|%0js|\n", L"");
	ret2 = ft_printf("|%0js|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0005");
	fprintf(printf_, "#0005");
	ret1 = fprintf(printf_, "|%0zs|\n", L"");
	ret2 = ft_printf("|%0zs|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0006");
	fprintf(printf_, "#0006");
	ret1 = fprintf(printf_, "|%0hhS|\n", L"");
	ret2 = ft_printf("|%0hhS|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0007");
	fprintf(printf_, "#0007");
	ret1 = fprintf(printf_, "|%0hS|\n", L"");
	ret2 = ft_printf("|%0hS|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0008");
	fprintf(printf_, "#0008");
	ret1 = fprintf(printf_, "|%0lS|\n", L"");
	ret2 = ft_printf("|%0lS|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0009");
	fprintf(printf_, "#0009");
	ret1 = fprintf(printf_, "|%0llS|\n", L"");
	ret2 = ft_printf("|%0llS|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0010");
	fprintf(printf_, "#0010");
	ret1 = fprintf(printf_, "|%0jS|\n", L"");
	ret2 = ft_printf("|%0jS|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0011");
	fprintf(printf_, "#0011");
	ret1 = fprintf(printf_, "|%0zS|\n", L"");
	ret2 = ft_printf("|%0zS|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0012");
	fprintf(printf_, "#0012");
	ret1 = fprintf(printf_, "|% 0hhs|\n", L"");
	ret2 = ft_printf("|% 0hhs|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0013");
	fprintf(printf_, "#0013");
	ret1 = fprintf(printf_, "|% 0hs|\n", L"");
	ret2 = ft_printf("|% 0hs|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0014");
	fprintf(printf_, "#0014");
	ret1 = fprintf(printf_, "|% 0ls|\n", L"");
	ret2 = ft_printf("|% 0ls|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0015");
	fprintf(printf_, "#0015");
	ret1 = fprintf(printf_, "|% 0lls|\n", L"");
	ret2 = ft_printf("|% 0lls|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0016");
	fprintf(printf_, "#0016");
	ret1 = fprintf(printf_, "|% 0js|\n", L"");
	ret2 = ft_printf("|% 0js|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0017");
	fprintf(printf_, "#0017");
	ret1 = fprintf(printf_, "|% 0zs|\n", L"");
	ret2 = ft_printf("|% 0zs|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0018");
	fprintf(printf_, "#0018");
	ret1 = fprintf(printf_, "|% 0hhS|\n", L"");
	ret2 = ft_printf("|% 0hhS|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0019");
	fprintf(printf_, "#0019");
	ret1 = fprintf(printf_, "|% 0hS|\n", L"");
	ret2 = ft_printf("|% 0hS|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0020");
	fprintf(printf_, "#0020");
	ret1 = fprintf(printf_, "|% 0lS|\n", L"");
	ret2 = ft_printf("|% 0lS|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0021");
	fprintf(printf_, "#0021");
	ret1 = fprintf(printf_, "|% 0llS|\n", L"");
	ret2 = ft_printf("|% 0llS|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0022");
	fprintf(printf_, "#0022");
	ret1 = fprintf(printf_, "|% 0jS|\n", L"");
	ret2 = ft_printf("|% 0jS|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0023");
	fprintf(printf_, "#0023");
	ret1 = fprintf(printf_, "|% 0zS|\n", L"");
	ret2 = ft_printf("|% 0zS|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0024");
	fprintf(printf_, "#0024");
	ret1 = fprintf(printf_, "|%00hhs|\n", L"");
	ret2 = ft_printf("|%00hhs|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0025");
	fprintf(printf_, "#0025");
	ret1 = fprintf(printf_, "|%00hs|\n", L"");
	ret2 = ft_printf("|%00hs|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0026");
	fprintf(printf_, "#0026");
	ret1 = fprintf(printf_, "|%00ls|\n", L"");
	ret2 = ft_printf("|%00ls|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0027");
	fprintf(printf_, "#0027");
	ret1 = fprintf(printf_, "|%00lls|\n", L"");
	ret2 = ft_printf("|%00lls|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0028");
	fprintf(printf_, "#0028");
	ret1 = fprintf(printf_, "|%00js|\n", L"");
	ret2 = ft_printf("|%00js|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0029");
	fprintf(printf_, "#0029");
	ret1 = fprintf(printf_, "|%00zs|\n", L"");
	ret2 = ft_printf("|%00zs|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0030");
	fprintf(printf_, "#0030");
	ret1 = fprintf(printf_, "|%00hhS|\n", L"");
	ret2 = ft_printf("|%00hhS|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0031");
	fprintf(printf_, "#0031");
	ret1 = fprintf(printf_, "|%00hS|\n", L"");
	ret2 = ft_printf("|%00hS|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0032");
	fprintf(printf_, "#0032");
	ret1 = fprintf(printf_, "|%00lS|\n", L"");
	ret2 = ft_printf("|%00lS|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0033");
	fprintf(printf_, "#0033");
	ret1 = fprintf(printf_, "|%00llS|\n", L"");
	ret2 = ft_printf("|%00llS|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0034");
	fprintf(printf_, "#0034");
	ret1 = fprintf(printf_, "|%00jS|\n", L"");
	ret2 = ft_printf("|%00jS|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0035");
	fprintf(printf_, "#0035");
	ret1 = fprintf(printf_, "|%00zS|\n", L"");
	ret2 = ft_printf("|%00zS|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0036");
	fprintf(printf_, "#0036");
	ret1 = fprintf(printf_, "|% 00hhs|\n", L"");
	ret2 = ft_printf("|% 00hhs|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0037");
	fprintf(printf_, "#0037");
	ret1 = fprintf(printf_, "|% 00hs|\n", L"");
	ret2 = ft_printf("|% 00hs|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0038");
	fprintf(printf_, "#0038");
	ret1 = fprintf(printf_, "|% 00ls|\n", L"");
	ret2 = ft_printf("|% 00ls|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0039");
	fprintf(printf_, "#0039");
	ret1 = fprintf(printf_, "|% 00lls|\n", L"");
	ret2 = ft_printf("|% 00lls|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0040");
	fprintf(printf_, "#0040");
	ret1 = fprintf(printf_, "|% 00js|\n", L"");
	ret2 = ft_printf("|% 00js|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0041");
	fprintf(printf_, "#0041");
	ret1 = fprintf(printf_, "|% 00zs|\n", L"");
	ret2 = ft_printf("|% 00zs|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0042");
	fprintf(printf_, "#0042");
	ret1 = fprintf(printf_, "|% 00hhS|\n", L"");
	ret2 = ft_printf("|% 00hhS|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0043");
	fprintf(printf_, "#0043");
	ret1 = fprintf(printf_, "|% 00hS|\n", L"");
	ret2 = ft_printf("|% 00hS|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0044");
	fprintf(printf_, "#0044");
	ret1 = fprintf(printf_, "|% 00lS|\n", L"");
	ret2 = ft_printf("|% 00lS|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0045");
	fprintf(printf_, "#0045");
	ret1 = fprintf(printf_, "|% 00llS|\n", L"");
	ret2 = ft_printf("|% 00llS|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0046");
	fprintf(printf_, "#0046");
	ret1 = fprintf(printf_, "|% 00jS|\n", L"");
	ret2 = ft_printf("|% 00jS|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0047");
	fprintf(printf_, "#0047");
	ret1 = fprintf(printf_, "|% 00zS|\n", L"");
	ret2 = ft_printf("|% 00zS|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0048");
	fprintf(printf_, "#0048");
	ret1 = fprintf(printf_, "|%+0hhs|\n", L"");
	ret2 = ft_printf("|%+0hhs|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0049");
	fprintf(printf_, "#0049");
	ret1 = fprintf(printf_, "|%+0hs|\n", L"");
	ret2 = ft_printf("|%+0hs|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0050");
	fprintf(printf_, "#0050");
	ret1 = fprintf(printf_, "|%+0ls|\n", L"");
	ret2 = ft_printf("|%+0ls|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0051");
	fprintf(printf_, "#0051");
	ret1 = fprintf(printf_, "|%+0lls|\n", L"");
	ret2 = ft_printf("|%+0lls|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0052");
	fprintf(printf_, "#0052");
	ret1 = fprintf(printf_, "|%+0js|\n", L"");
	ret2 = ft_printf("|%+0js|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0053");
	fprintf(printf_, "#0053");
	ret1 = fprintf(printf_, "|%+0zs|\n", L"");
	ret2 = ft_printf("|%+0zs|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0054");
	fprintf(printf_, "#0054");
	ret1 = fprintf(printf_, "|%+0hhS|\n", L"");
	ret2 = ft_printf("|%+0hhS|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0055");
	fprintf(printf_, "#0055");
	ret1 = fprintf(printf_, "|%+0hS|\n", L"");
	ret2 = ft_printf("|%+0hS|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0056");
	fprintf(printf_, "#0056");
	ret1 = fprintf(printf_, "|%+0lS|\n", L"");
	ret2 = ft_printf("|%+0lS|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0057");
	fprintf(printf_, "#0057");
	ret1 = fprintf(printf_, "|%+0llS|\n", L"");
	ret2 = ft_printf("|%+0llS|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0058");
	fprintf(printf_, "#0058");
	ret1 = fprintf(printf_, "|%+0jS|\n", L"");
	ret2 = ft_printf("|%+0jS|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0059");
	fprintf(printf_, "#0059");
	ret1 = fprintf(printf_, "|%+0zS|\n", L"");
	ret2 = ft_printf("|%+0zS|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0060");
	fprintf(printf_, "#0060");
	ret1 = fprintf(printf_, "|% +0hhs|\n", L"");
	ret2 = ft_printf("|% +0hhs|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0061");
	fprintf(printf_, "#0061");
	ret1 = fprintf(printf_, "|% +0hs|\n", L"");
	ret2 = ft_printf("|% +0hs|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0062");
	fprintf(printf_, "#0062");
	ret1 = fprintf(printf_, "|% +0ls|\n", L"");
	ret2 = ft_printf("|% +0ls|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0063");
	fprintf(printf_, "#0063");
	ret1 = fprintf(printf_, "|% +0lls|\n", L"");
	ret2 = ft_printf("|% +0lls|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0064");
	fprintf(printf_, "#0064");
	ret1 = fprintf(printf_, "|% +0js|\n", L"");
	ret2 = ft_printf("|% +0js|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0065");
	fprintf(printf_, "#0065");
	ret1 = fprintf(printf_, "|% +0zs|\n", L"");
	ret2 = ft_printf("|% +0zs|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0066");
	fprintf(printf_, "#0066");
	ret1 = fprintf(printf_, "|% +0hhS|\n", L"");
	ret2 = ft_printf("|% +0hhS|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0067");
	fprintf(printf_, "#0067");
	ret1 = fprintf(printf_, "|% +0hS|\n", L"");
	ret2 = ft_printf("|% +0hS|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0068");
	fprintf(printf_, "#0068");
	ret1 = fprintf(printf_, "|% +0lS|\n", L"");
	ret2 = ft_printf("|% +0lS|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0069");
	fprintf(printf_, "#0069");
	ret1 = fprintf(printf_, "|% +0llS|\n", L"");
	ret2 = ft_printf("|% +0llS|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0070");
	fprintf(printf_, "#0070");
	ret1 = fprintf(printf_, "|% +0jS|\n", L"");
	ret2 = ft_printf("|% +0jS|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0071");
	fprintf(printf_, "#0071");
	ret1 = fprintf(printf_, "|% +0zS|\n", L"");
	ret2 = ft_printf("|% +0zS|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0072");
	fprintf(printf_, "#0072");
	ret1 = fprintf(printf_, "|%0+0hhs|\n", L"");
	ret2 = ft_printf("|%0+0hhs|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0073");
	fprintf(printf_, "#0073");
	ret1 = fprintf(printf_, "|%0+0hs|\n", L"");
	ret2 = ft_printf("|%0+0hs|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0074");
	fprintf(printf_, "#0074");
	ret1 = fprintf(printf_, "|%0+0ls|\n", L"");
	ret2 = ft_printf("|%0+0ls|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0075");
	fprintf(printf_, "#0075");
	ret1 = fprintf(printf_, "|%0+0lls|\n", L"");
	ret2 = ft_printf("|%0+0lls|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0076");
	fprintf(printf_, "#0076");
	ret1 = fprintf(printf_, "|%0+0js|\n", L"");
	ret2 = ft_printf("|%0+0js|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0077");
	fprintf(printf_, "#0077");
	ret1 = fprintf(printf_, "|%0+0zs|\n", L"");
	ret2 = ft_printf("|%0+0zs|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0078");
	fprintf(printf_, "#0078");
	ret1 = fprintf(printf_, "|%0+0hhS|\n", L"");
	ret2 = ft_printf("|%0+0hhS|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0079");
	fprintf(printf_, "#0079");
	ret1 = fprintf(printf_, "|%0+0hS|\n", L"");
	ret2 = ft_printf("|%0+0hS|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0080");
	fprintf(printf_, "#0080");
	ret1 = fprintf(printf_, "|%0+0lS|\n", L"");
	ret2 = ft_printf("|%0+0lS|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0081");
	fprintf(printf_, "#0081");
	ret1 = fprintf(printf_, "|%0+0llS|\n", L"");
	ret2 = ft_printf("|%0+0llS|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0082");
	fprintf(printf_, "#0082");
	ret1 = fprintf(printf_, "|%0+0jS|\n", L"");
	ret2 = ft_printf("|%0+0jS|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0083");
	fprintf(printf_, "#0083");
	ret1 = fprintf(printf_, "|%0+0zS|\n", L"");
	ret2 = ft_printf("|%0+0zS|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0084");
	fprintf(printf_, "#0084");
	ret1 = fprintf(printf_, "|% 0+0hhs|\n", L"");
	ret2 = ft_printf("|% 0+0hhs|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0085");
	fprintf(printf_, "#0085");
	ret1 = fprintf(printf_, "|% 0+0hs|\n", L"");
	ret2 = ft_printf("|% 0+0hs|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0086");
	fprintf(printf_, "#0086");
	ret1 = fprintf(printf_, "|% 0+0ls|\n", L"");
	ret2 = ft_printf("|% 0+0ls|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0087");
	fprintf(printf_, "#0087");
	ret1 = fprintf(printf_, "|% 0+0lls|\n", L"");
	ret2 = ft_printf("|% 0+0lls|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0088");
	fprintf(printf_, "#0088");
	ret1 = fprintf(printf_, "|% 0+0js|\n", L"");
	ret2 = ft_printf("|% 0+0js|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0089");
	fprintf(printf_, "#0089");
	ret1 = fprintf(printf_, "|% 0+0zs|\n", L"");
	ret2 = ft_printf("|% 0+0zs|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0090");
	fprintf(printf_, "#0090");
	ret1 = fprintf(printf_, "|% 0+0hhS|\n", L"");
	ret2 = ft_printf("|% 0+0hhS|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0091");
	fprintf(printf_, "#0091");
	ret1 = fprintf(printf_, "|% 0+0hS|\n", L"");
	ret2 = ft_printf("|% 0+0hS|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0092");
	fprintf(printf_, "#0092");
	ret1 = fprintf(printf_, "|% 0+0lS|\n", L"");
	ret2 = ft_printf("|% 0+0lS|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0093");
	fprintf(printf_, "#0093");
	ret1 = fprintf(printf_, "|% 0+0llS|\n", L"");
	ret2 = ft_printf("|% 0+0llS|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0094");
	fprintf(printf_, "#0094");
	ret1 = fprintf(printf_, "|% 0+0jS|\n", L"");
	ret2 = ft_printf("|% 0+0jS|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0095");
	fprintf(printf_, "#0095");
	ret1 = fprintf(printf_, "|% 0+0zS|\n", L"");
	ret2 = ft_printf("|% 0+0zS|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0096");
	fprintf(printf_, "#0096");
	ret1 = fprintf(printf_, "|%-0hhs|\n", L"");
	ret2 = ft_printf("|%-0hhs|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0097");
	fprintf(printf_, "#0097");
	ret1 = fprintf(printf_, "|%-0hs|\n", L"");
	ret2 = ft_printf("|%-0hs|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0098");
	fprintf(printf_, "#0098");
	ret1 = fprintf(printf_, "|%-0ls|\n", L"");
	ret2 = ft_printf("|%-0ls|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0099");
	fprintf(printf_, "#0099");
	ret1 = fprintf(printf_, "|%-0lls|\n", L"");
	ret2 = ft_printf("|%-0lls|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0100");
	fprintf(printf_, "#0100");
	ret1 = fprintf(printf_, "|%-0js|\n", L"");
	ret2 = ft_printf("|%-0js|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0101");
	fprintf(printf_, "#0101");
	ret1 = fprintf(printf_, "|%-0zs|\n", L"");
	ret2 = ft_printf("|%-0zs|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0102");
	fprintf(printf_, "#0102");
	ret1 = fprintf(printf_, "|%-0hhS|\n", L"");
	ret2 = ft_printf("|%-0hhS|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0103");
	fprintf(printf_, "#0103");
	ret1 = fprintf(printf_, "|%-0hS|\n", L"");
	ret2 = ft_printf("|%-0hS|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0104");
	fprintf(printf_, "#0104");
	ret1 = fprintf(printf_, "|%-0lS|\n", L"");
	ret2 = ft_printf("|%-0lS|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0105");
	fprintf(printf_, "#0105");
	ret1 = fprintf(printf_, "|%-0llS|\n", L"");
	ret2 = ft_printf("|%-0llS|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0106");
	fprintf(printf_, "#0106");
	ret1 = fprintf(printf_, "|%-0jS|\n", L"");
	ret2 = ft_printf("|%-0jS|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0107");
	fprintf(printf_, "#0107");
	ret1 = fprintf(printf_, "|%-0zS|\n", L"");
	ret2 = ft_printf("|%-0zS|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0108");
	fprintf(printf_, "#0108");
	ret1 = fprintf(printf_, "|% -0hhs|\n", L"");
	ret2 = ft_printf("|% -0hhs|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0109");
	fprintf(printf_, "#0109");
	ret1 = fprintf(printf_, "|% -0hs|\n", L"");
	ret2 = ft_printf("|% -0hs|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0110");
	fprintf(printf_, "#0110");
	ret1 = fprintf(printf_, "|% -0ls|\n", L"");
	ret2 = ft_printf("|% -0ls|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0111");
	fprintf(printf_, "#0111");
	ret1 = fprintf(printf_, "|% -0lls|\n", L"");
	ret2 = ft_printf("|% -0lls|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0112");
	fprintf(printf_, "#0112");
	ret1 = fprintf(printf_, "|% -0js|\n", L"");
	ret2 = ft_printf("|% -0js|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0113");
	fprintf(printf_, "#0113");
	ret1 = fprintf(printf_, "|% -0zs|\n", L"");
	ret2 = ft_printf("|% -0zs|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0114");
	fprintf(printf_, "#0114");
	ret1 = fprintf(printf_, "|% -0hhS|\n", L"");
	ret2 = ft_printf("|% -0hhS|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0115");
	fprintf(printf_, "#0115");
	ret1 = fprintf(printf_, "|% -0hS|\n", L"");
	ret2 = ft_printf("|% -0hS|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0116");
	fprintf(printf_, "#0116");
	ret1 = fprintf(printf_, "|% -0lS|\n", L"");
	ret2 = ft_printf("|% -0lS|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0117");
	fprintf(printf_, "#0117");
	ret1 = fprintf(printf_, "|% -0llS|\n", L"");
	ret2 = ft_printf("|% -0llS|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0118");
	fprintf(printf_, "#0118");
	ret1 = fprintf(printf_, "|% -0jS|\n", L"");
	ret2 = ft_printf("|% -0jS|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0119");
	fprintf(printf_, "#0119");
	ret1 = fprintf(printf_, "|% -0zS|\n", L"");
	ret2 = ft_printf("|% -0zS|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0120");
	fprintf(printf_, "#0120");
	ret1 = fprintf(printf_, "|%0-0hhs|\n", L"");
	ret2 = ft_printf("|%0-0hhs|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0121");
	fprintf(printf_, "#0121");
	ret1 = fprintf(printf_, "|%0-0hs|\n", L"");
	ret2 = ft_printf("|%0-0hs|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0122");
	fprintf(printf_, "#0122");
	ret1 = fprintf(printf_, "|%0-0ls|\n", L"");
	ret2 = ft_printf("|%0-0ls|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0123");
	fprintf(printf_, "#0123");
	ret1 = fprintf(printf_, "|%0-0lls|\n", L"");
	ret2 = ft_printf("|%0-0lls|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0124");
	fprintf(printf_, "#0124");
	ret1 = fprintf(printf_, "|%0-0js|\n", L"");
	ret2 = ft_printf("|%0-0js|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0125");
	fprintf(printf_, "#0125");
	ret1 = fprintf(printf_, "|%0-0zs|\n", L"");
	ret2 = ft_printf("|%0-0zs|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0126");
	fprintf(printf_, "#0126");
	ret1 = fprintf(printf_, "|%0-0hhS|\n", L"");
	ret2 = ft_printf("|%0-0hhS|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0127");
	fprintf(printf_, "#0127");
	ret1 = fprintf(printf_, "|%0-0hS|\n", L"");
	ret2 = ft_printf("|%0-0hS|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0128");
	fprintf(printf_, "#0128");
	ret1 = fprintf(printf_, "|%0-0lS|\n", L"");
	ret2 = ft_printf("|%0-0lS|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0129");
	fprintf(printf_, "#0129");
	ret1 = fprintf(printf_, "|%0-0llS|\n", L"");
	ret2 = ft_printf("|%0-0llS|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0130");
	fprintf(printf_, "#0130");
	ret1 = fprintf(printf_, "|%0-0jS|\n", L"");
	ret2 = ft_printf("|%0-0jS|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0131");
	fprintf(printf_, "#0131");
	ret1 = fprintf(printf_, "|%0-0zS|\n", L"");
	ret2 = ft_printf("|%0-0zS|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0132");
	fprintf(printf_, "#0132");
	ret1 = fprintf(printf_, "|% 0-0hhs|\n", L"");
	ret2 = ft_printf("|% 0-0hhs|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0133");
	fprintf(printf_, "#0133");
	ret1 = fprintf(printf_, "|% 0-0hs|\n", L"");
	ret2 = ft_printf("|% 0-0hs|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0134");
	fprintf(printf_, "#0134");
	ret1 = fprintf(printf_, "|% 0-0ls|\n", L"");
	ret2 = ft_printf("|% 0-0ls|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0135");
	fprintf(printf_, "#0135");
	ret1 = fprintf(printf_, "|% 0-0lls|\n", L"");
	ret2 = ft_printf("|% 0-0lls|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0136");
	fprintf(printf_, "#0136");
	ret1 = fprintf(printf_, "|% 0-0js|\n", L"");
	ret2 = ft_printf("|% 0-0js|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0137");
	fprintf(printf_, "#0137");
	ret1 = fprintf(printf_, "|% 0-0zs|\n", L"");
	ret2 = ft_printf("|% 0-0zs|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0138");
	fprintf(printf_, "#0138");
	ret1 = fprintf(printf_, "|% 0-0hhS|\n", L"");
	ret2 = ft_printf("|% 0-0hhS|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0139");
	fprintf(printf_, "#0139");
	ret1 = fprintf(printf_, "|% 0-0hS|\n", L"");
	ret2 = ft_printf("|% 0-0hS|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0140");
	fprintf(printf_, "#0140");
	ret1 = fprintf(printf_, "|% 0-0lS|\n", L"");
	ret2 = ft_printf("|% 0-0lS|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0141");
	fprintf(printf_, "#0141");
	ret1 = fprintf(printf_, "|% 0-0llS|\n", L"");
	ret2 = ft_printf("|% 0-0llS|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0142");
	fprintf(printf_, "#0142");
	ret1 = fprintf(printf_, "|% 0-0jS|\n", L"");
	ret2 = ft_printf("|% 0-0jS|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0143");
	fprintf(printf_, "#0143");
	ret1 = fprintf(printf_, "|% 0-0zS|\n", L"");
	ret2 = ft_printf("|% 0-0zS|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0144");
	fprintf(printf_, "#0144");
	ret1 = fprintf(printf_, "|%+-0hhs|\n", L"");
	ret2 = ft_printf("|%+-0hhs|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0145");
	fprintf(printf_, "#0145");
	ret1 = fprintf(printf_, "|%+-0hs|\n", L"");
	ret2 = ft_printf("|%+-0hs|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0146");
	fprintf(printf_, "#0146");
	ret1 = fprintf(printf_, "|%+-0ls|\n", L"");
	ret2 = ft_printf("|%+-0ls|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0147");
	fprintf(printf_, "#0147");
	ret1 = fprintf(printf_, "|%+-0lls|\n", L"");
	ret2 = ft_printf("|%+-0lls|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0148");
	fprintf(printf_, "#0148");
	ret1 = fprintf(printf_, "|%+-0js|\n", L"");
	ret2 = ft_printf("|%+-0js|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0149");
	fprintf(printf_, "#0149");
	ret1 = fprintf(printf_, "|%+-0zs|\n", L"");
	ret2 = ft_printf("|%+-0zs|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0150");
	fprintf(printf_, "#0150");
	ret1 = fprintf(printf_, "|%+-0hhS|\n", L"");
	ret2 = ft_printf("|%+-0hhS|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0151");
	fprintf(printf_, "#0151");
	ret1 = fprintf(printf_, "|%+-0hS|\n", L"");
	ret2 = ft_printf("|%+-0hS|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0152");
	fprintf(printf_, "#0152");
	ret1 = fprintf(printf_, "|%+-0lS|\n", L"");
	ret2 = ft_printf("|%+-0lS|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0153");
	fprintf(printf_, "#0153");
	ret1 = fprintf(printf_, "|%+-0llS|\n", L"");
	ret2 = ft_printf("|%+-0llS|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0154");
	fprintf(printf_, "#0154");
	ret1 = fprintf(printf_, "|%+-0jS|\n", L"");
	ret2 = ft_printf("|%+-0jS|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0155");
	fprintf(printf_, "#0155");
	ret1 = fprintf(printf_, "|%+-0zS|\n", L"");
	ret2 = ft_printf("|%+-0zS|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0156");
	fprintf(printf_, "#0156");
	ret1 = fprintf(printf_, "|% +-0hhs|\n", L"");
	ret2 = ft_printf("|% +-0hhs|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0157");
	fprintf(printf_, "#0157");
	ret1 = fprintf(printf_, "|% +-0hs|\n", L"");
	ret2 = ft_printf("|% +-0hs|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0158");
	fprintf(printf_, "#0158");
	ret1 = fprintf(printf_, "|% +-0ls|\n", L"");
	ret2 = ft_printf("|% +-0ls|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0159");
	fprintf(printf_, "#0159");
	ret1 = fprintf(printf_, "|% +-0lls|\n", L"");
	ret2 = ft_printf("|% +-0lls|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0160");
	fprintf(printf_, "#0160");
	ret1 = fprintf(printf_, "|% +-0js|\n", L"");
	ret2 = ft_printf("|% +-0js|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0161");
	fprintf(printf_, "#0161");
	ret1 = fprintf(printf_, "|% +-0zs|\n", L"");
	ret2 = ft_printf("|% +-0zs|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0162");
	fprintf(printf_, "#0162");
	ret1 = fprintf(printf_, "|% +-0hhS|\n", L"");
	ret2 = ft_printf("|% +-0hhS|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0163");
	fprintf(printf_, "#0163");
	ret1 = fprintf(printf_, "|% +-0hS|\n", L"");
	ret2 = ft_printf("|% +-0hS|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0164");
	fprintf(printf_, "#0164");
	ret1 = fprintf(printf_, "|% +-0lS|\n", L"");
	ret2 = ft_printf("|% +-0lS|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0165");
	fprintf(printf_, "#0165");
	ret1 = fprintf(printf_, "|% +-0llS|\n", L"");
	ret2 = ft_printf("|% +-0llS|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0166");
	fprintf(printf_, "#0166");
	ret1 = fprintf(printf_, "|% +-0jS|\n", L"");
	ret2 = ft_printf("|% +-0jS|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0167");
	fprintf(printf_, "#0167");
	ret1 = fprintf(printf_, "|% +-0zS|\n", L"");
	ret2 = ft_printf("|% +-0zS|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0168");
	fprintf(printf_, "#0168");
	ret1 = fprintf(printf_, "|%0+-0hhs|\n", L"");
	ret2 = ft_printf("|%0+-0hhs|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0169");
	fprintf(printf_, "#0169");
	ret1 = fprintf(printf_, "|%0+-0hs|\n", L"");
	ret2 = ft_printf("|%0+-0hs|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0170");
	fprintf(printf_, "#0170");
	ret1 = fprintf(printf_, "|%0+-0ls|\n", L"");
	ret2 = ft_printf("|%0+-0ls|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0171");
	fprintf(printf_, "#0171");
	ret1 = fprintf(printf_, "|%0+-0lls|\n", L"");
	ret2 = ft_printf("|%0+-0lls|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0172");
	fprintf(printf_, "#0172");
	ret1 = fprintf(printf_, "|%0+-0js|\n", L"");
	ret2 = ft_printf("|%0+-0js|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0173");
	fprintf(printf_, "#0173");
	ret1 = fprintf(printf_, "|%0+-0zs|\n", L"");
	ret2 = ft_printf("|%0+-0zs|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0174");
	fprintf(printf_, "#0174");
	ret1 = fprintf(printf_, "|%0+-0hhS|\n", L"");
	ret2 = ft_printf("|%0+-0hhS|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0175");
	fprintf(printf_, "#0175");
	ret1 = fprintf(printf_, "|%0+-0hS|\n", L"");
	ret2 = ft_printf("|%0+-0hS|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0176");
	fprintf(printf_, "#0176");
	ret1 = fprintf(printf_, "|%0+-0lS|\n", L"");
	ret2 = ft_printf("|%0+-0lS|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0177");
	fprintf(printf_, "#0177");
	ret1 = fprintf(printf_, "|%0+-0llS|\n", L"");
	ret2 = ft_printf("|%0+-0llS|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0178");
	fprintf(printf_, "#0178");
	ret1 = fprintf(printf_, "|%0+-0jS|\n", L"");
	ret2 = ft_printf("|%0+-0jS|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0179");
	fprintf(printf_, "#0179");
	ret1 = fprintf(printf_, "|%0+-0zS|\n", L"");
	ret2 = ft_printf("|%0+-0zS|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0180");
	fprintf(printf_, "#0180");
	ret1 = fprintf(printf_, "|% 0+-0hhs|\n", L"");
	ret2 = ft_printf("|% 0+-0hhs|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0181");
	fprintf(printf_, "#0181");
	ret1 = fprintf(printf_, "|% 0+-0hs|\n", L"");
	ret2 = ft_printf("|% 0+-0hs|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0182");
	fprintf(printf_, "#0182");
	ret1 = fprintf(printf_, "|% 0+-0ls|\n", L"");
	ret2 = ft_printf("|% 0+-0ls|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0183");
	fprintf(printf_, "#0183");
	ret1 = fprintf(printf_, "|% 0+-0lls|\n", L"");
	ret2 = ft_printf("|% 0+-0lls|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0184");
	fprintf(printf_, "#0184");
	ret1 = fprintf(printf_, "|% 0+-0js|\n", L"");
	ret2 = ft_printf("|% 0+-0js|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0185");
	fprintf(printf_, "#0185");
	ret1 = fprintf(printf_, "|% 0+-0zs|\n", L"");
	ret2 = ft_printf("|% 0+-0zs|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0186");
	fprintf(printf_, "#0186");
	ret1 = fprintf(printf_, "|% 0+-0hhS|\n", L"");
	ret2 = ft_printf("|% 0+-0hhS|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0187");
	fprintf(printf_, "#0187");
	ret1 = fprintf(printf_, "|% 0+-0hS|\n", L"");
	ret2 = ft_printf("|% 0+-0hS|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0188");
	fprintf(printf_, "#0188");
	ret1 = fprintf(printf_, "|% 0+-0lS|\n", L"");
	ret2 = ft_printf("|% 0+-0lS|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0189");
	fprintf(printf_, "#0189");
	ret1 = fprintf(printf_, "|% 0+-0llS|\n", L"");
	ret2 = ft_printf("|% 0+-0llS|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0190");
	fprintf(printf_, "#0190");
	ret1 = fprintf(printf_, "|% 0+-0jS|\n", L"");
	ret2 = ft_printf("|% 0+-0jS|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0191");
	fprintf(printf_, "#0191");
	ret1 = fprintf(printf_, "|% 0+-0zS|\n", L"");
	ret2 = ft_printf("|% 0+-0zS|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0192");
	fprintf(printf_, "#0192");
	ret1 = fprintf(printf_, "|%#0hhs|\n", L"");
	ret2 = ft_printf("|%#0hhs|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0193");
	fprintf(printf_, "#0193");
	ret1 = fprintf(printf_, "|%#0hs|\n", L"");
	ret2 = ft_printf("|%#0hs|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0194");
	fprintf(printf_, "#0194");
	ret1 = fprintf(printf_, "|%#0ls|\n", L"");
	ret2 = ft_printf("|%#0ls|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0195");
	fprintf(printf_, "#0195");
	ret1 = fprintf(printf_, "|%#0lls|\n", L"");
	ret2 = ft_printf("|%#0lls|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0196");
	fprintf(printf_, "#0196");
	ret1 = fprintf(printf_, "|%#0js|\n", L"");
	ret2 = ft_printf("|%#0js|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0197");
	fprintf(printf_, "#0197");
	ret1 = fprintf(printf_, "|%#0zs|\n", L"");
	ret2 = ft_printf("|%#0zs|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0198");
	fprintf(printf_, "#0198");
	ret1 = fprintf(printf_, "|%#0hhS|\n", L"");
	ret2 = ft_printf("|%#0hhS|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0199");
	fprintf(printf_, "#0199");
	ret1 = fprintf(printf_, "|%#0hS|\n", L"");
	ret2 = ft_printf("|%#0hS|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0200");
	fprintf(printf_, "#0200");
	ret1 = fprintf(printf_, "|%#0lS|\n", L"");
	ret2 = ft_printf("|%#0lS|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0201");
	fprintf(printf_, "#0201");
	ret1 = fprintf(printf_, "|%#0llS|\n", L"");
	ret2 = ft_printf("|%#0llS|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0202");
	fprintf(printf_, "#0202");
	ret1 = fprintf(printf_, "|%#0jS|\n", L"");
	ret2 = ft_printf("|%#0jS|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0203");
	fprintf(printf_, "#0203");
	ret1 = fprintf(printf_, "|%#0zS|\n", L"");
	ret2 = ft_printf("|%#0zS|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0204");
	fprintf(printf_, "#0204");
	ret1 = fprintf(printf_, "|% #0hhs|\n", L"");
	ret2 = ft_printf("|% #0hhs|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0205");
	fprintf(printf_, "#0205");
	ret1 = fprintf(printf_, "|% #0hs|\n", L"");
	ret2 = ft_printf("|% #0hs|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0206");
	fprintf(printf_, "#0206");
	ret1 = fprintf(printf_, "|% #0ls|\n", L"");
	ret2 = ft_printf("|% #0ls|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0207");
	fprintf(printf_, "#0207");
	ret1 = fprintf(printf_, "|% #0lls|\n", L"");
	ret2 = ft_printf("|% #0lls|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0208");
	fprintf(printf_, "#0208");
	ret1 = fprintf(printf_, "|% #0js|\n", L"");
	ret2 = ft_printf("|% #0js|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0209");
	fprintf(printf_, "#0209");
	ret1 = fprintf(printf_, "|% #0zs|\n", L"");
	ret2 = ft_printf("|% #0zs|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0210");
	fprintf(printf_, "#0210");
	ret1 = fprintf(printf_, "|% #0hhS|\n", L"");
	ret2 = ft_printf("|% #0hhS|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0211");
	fprintf(printf_, "#0211");
	ret1 = fprintf(printf_, "|% #0hS|\n", L"");
	ret2 = ft_printf("|% #0hS|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0212");
	fprintf(printf_, "#0212");
	ret1 = fprintf(printf_, "|% #0lS|\n", L"");
	ret2 = ft_printf("|% #0lS|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0213");
	fprintf(printf_, "#0213");
	ret1 = fprintf(printf_, "|% #0llS|\n", L"");
	ret2 = ft_printf("|% #0llS|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0214");
	fprintf(printf_, "#0214");
	ret1 = fprintf(printf_, "|% #0jS|\n", L"");
	ret2 = ft_printf("|% #0jS|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0215");
	fprintf(printf_, "#0215");
	ret1 = fprintf(printf_, "|% #0zS|\n", L"");
	ret2 = ft_printf("|% #0zS|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0216");
	fprintf(printf_, "#0216");
	ret1 = fprintf(printf_, "|%0#0hhs|\n", L"");
	ret2 = ft_printf("|%0#0hhs|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0217");
	fprintf(printf_, "#0217");
	ret1 = fprintf(printf_, "|%0#0hs|\n", L"");
	ret2 = ft_printf("|%0#0hs|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0218");
	fprintf(printf_, "#0218");
	ret1 = fprintf(printf_, "|%0#0ls|\n", L"");
	ret2 = ft_printf("|%0#0ls|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0219");
	fprintf(printf_, "#0219");
	ret1 = fprintf(printf_, "|%0#0lls|\n", L"");
	ret2 = ft_printf("|%0#0lls|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0220");
	fprintf(printf_, "#0220");
	ret1 = fprintf(printf_, "|%0#0js|\n", L"");
	ret2 = ft_printf("|%0#0js|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0221");
	fprintf(printf_, "#0221");
	ret1 = fprintf(printf_, "|%0#0zs|\n", L"");
	ret2 = ft_printf("|%0#0zs|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0222");
	fprintf(printf_, "#0222");
	ret1 = fprintf(printf_, "|%0#0hhS|\n", L"");
	ret2 = ft_printf("|%0#0hhS|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0223");
	fprintf(printf_, "#0223");
	ret1 = fprintf(printf_, "|%0#0hS|\n", L"");
	ret2 = ft_printf("|%0#0hS|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0224");
	fprintf(printf_, "#0224");
	ret1 = fprintf(printf_, "|%0#0lS|\n", L"");
	ret2 = ft_printf("|%0#0lS|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0225");
	fprintf(printf_, "#0225");
	ret1 = fprintf(printf_, "|%0#0llS|\n", L"");
	ret2 = ft_printf("|%0#0llS|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0226");
	fprintf(printf_, "#0226");
	ret1 = fprintf(printf_, "|%0#0jS|\n", L"");
	ret2 = ft_printf("|%0#0jS|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0227");
	fprintf(printf_, "#0227");
	ret1 = fprintf(printf_, "|%0#0zS|\n", L"");
	ret2 = ft_printf("|%0#0zS|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0228");
	fprintf(printf_, "#0228");
	ret1 = fprintf(printf_, "|% 0#0hhs|\n", L"");
	ret2 = ft_printf("|% 0#0hhs|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0229");
	fprintf(printf_, "#0229");
	ret1 = fprintf(printf_, "|% 0#0hs|\n", L"");
	ret2 = ft_printf("|% 0#0hs|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0230");
	fprintf(printf_, "#0230");
	ret1 = fprintf(printf_, "|% 0#0ls|\n", L"");
	ret2 = ft_printf("|% 0#0ls|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0231");
	fprintf(printf_, "#0231");
	ret1 = fprintf(printf_, "|% 0#0lls|\n", L"");
	ret2 = ft_printf("|% 0#0lls|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0232");
	fprintf(printf_, "#0232");
	ret1 = fprintf(printf_, "|% 0#0js|\n", L"");
	ret2 = ft_printf("|% 0#0js|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0233");
	fprintf(printf_, "#0233");
	ret1 = fprintf(printf_, "|% 0#0zs|\n", L"");
	ret2 = ft_printf("|% 0#0zs|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0234");
	fprintf(printf_, "#0234");
	ret1 = fprintf(printf_, "|% 0#0hhS|\n", L"");
	ret2 = ft_printf("|% 0#0hhS|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0235");
	fprintf(printf_, "#0235");
	ret1 = fprintf(printf_, "|% 0#0hS|\n", L"");
	ret2 = ft_printf("|% 0#0hS|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0236");
	fprintf(printf_, "#0236");
	ret1 = fprintf(printf_, "|% 0#0lS|\n", L"");
	ret2 = ft_printf("|% 0#0lS|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0237");
	fprintf(printf_, "#0237");
	ret1 = fprintf(printf_, "|% 0#0llS|\n", L"");
	ret2 = ft_printf("|% 0#0llS|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0238");
	fprintf(printf_, "#0238");
	ret1 = fprintf(printf_, "|% 0#0jS|\n", L"");
	ret2 = ft_printf("|% 0#0jS|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0239");
	fprintf(printf_, "#0239");
	ret1 = fprintf(printf_, "|% 0#0zS|\n", L"");
	ret2 = ft_printf("|% 0#0zS|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0240");
	fprintf(printf_, "#0240");
	ret1 = fprintf(printf_, "|%+#0hhs|\n", L"");
	ret2 = ft_printf("|%+#0hhs|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0241");
	fprintf(printf_, "#0241");
	ret1 = fprintf(printf_, "|%+#0hs|\n", L"");
	ret2 = ft_printf("|%+#0hs|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0242");
	fprintf(printf_, "#0242");
	ret1 = fprintf(printf_, "|%+#0ls|\n", L"");
	ret2 = ft_printf("|%+#0ls|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0243");
	fprintf(printf_, "#0243");
	ret1 = fprintf(printf_, "|%+#0lls|\n", L"");
	ret2 = ft_printf("|%+#0lls|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0244");
	fprintf(printf_, "#0244");
	ret1 = fprintf(printf_, "|%+#0js|\n", L"");
	ret2 = ft_printf("|%+#0js|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0245");
	fprintf(printf_, "#0245");
	ret1 = fprintf(printf_, "|%+#0zs|\n", L"");
	ret2 = ft_printf("|%+#0zs|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0246");
	fprintf(printf_, "#0246");
	ret1 = fprintf(printf_, "|%+#0hhS|\n", L"");
	ret2 = ft_printf("|%+#0hhS|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0247");
	fprintf(printf_, "#0247");
	ret1 = fprintf(printf_, "|%+#0hS|\n", L"");
	ret2 = ft_printf("|%+#0hS|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0248");
	fprintf(printf_, "#0248");
	ret1 = fprintf(printf_, "|%+#0lS|\n", L"");
	ret2 = ft_printf("|%+#0lS|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0249");
	fprintf(printf_, "#0249");
	ret1 = fprintf(printf_, "|%+#0llS|\n", L"");
	ret2 = ft_printf("|%+#0llS|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0250");
	fprintf(printf_, "#0250");
	ret1 = fprintf(printf_, "|%+#0jS|\n", L"");
	ret2 = ft_printf("|%+#0jS|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0251");
	fprintf(printf_, "#0251");
	ret1 = fprintf(printf_, "|%+#0zS|\n", L"");
	ret2 = ft_printf("|%+#0zS|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0252");
	fprintf(printf_, "#0252");
	ret1 = fprintf(printf_, "|% +#0hhs|\n", L"");
	ret2 = ft_printf("|% +#0hhs|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0253");
	fprintf(printf_, "#0253");
	ret1 = fprintf(printf_, "|% +#0hs|\n", L"");
	ret2 = ft_printf("|% +#0hs|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0254");
	fprintf(printf_, "#0254");
	ret1 = fprintf(printf_, "|% +#0ls|\n", L"");
	ret2 = ft_printf("|% +#0ls|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0255");
	fprintf(printf_, "#0255");
	ret1 = fprintf(printf_, "|% +#0lls|\n", L"");
	ret2 = ft_printf("|% +#0lls|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0256");
	fprintf(printf_, "#0256");
	ret1 = fprintf(printf_, "|% +#0js|\n", L"");
	ret2 = ft_printf("|% +#0js|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0257");
	fprintf(printf_, "#0257");
	ret1 = fprintf(printf_, "|% +#0zs|\n", L"");
	ret2 = ft_printf("|% +#0zs|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0258");
	fprintf(printf_, "#0258");
	ret1 = fprintf(printf_, "|% +#0hhS|\n", L"");
	ret2 = ft_printf("|% +#0hhS|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0259");
	fprintf(printf_, "#0259");
	ret1 = fprintf(printf_, "|% +#0hS|\n", L"");
	ret2 = ft_printf("|% +#0hS|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0260");
	fprintf(printf_, "#0260");
	ret1 = fprintf(printf_, "|% +#0lS|\n", L"");
	ret2 = ft_printf("|% +#0lS|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0261");
	fprintf(printf_, "#0261");
	ret1 = fprintf(printf_, "|% +#0llS|\n", L"");
	ret2 = ft_printf("|% +#0llS|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0262");
	fprintf(printf_, "#0262");
	ret1 = fprintf(printf_, "|% +#0jS|\n", L"");
	ret2 = ft_printf("|% +#0jS|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0263");
	fprintf(printf_, "#0263");
	ret1 = fprintf(printf_, "|% +#0zS|\n", L"");
	ret2 = ft_printf("|% +#0zS|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0264");
	fprintf(printf_, "#0264");
	ret1 = fprintf(printf_, "|%0+#0hhs|\n", L"");
	ret2 = ft_printf("|%0+#0hhs|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0265");
	fprintf(printf_, "#0265");
	ret1 = fprintf(printf_, "|%0+#0hs|\n", L"");
	ret2 = ft_printf("|%0+#0hs|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0266");
	fprintf(printf_, "#0266");
	ret1 = fprintf(printf_, "|%0+#0ls|\n", L"");
	ret2 = ft_printf("|%0+#0ls|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0267");
	fprintf(printf_, "#0267");
	ret1 = fprintf(printf_, "|%0+#0lls|\n", L"");
	ret2 = ft_printf("|%0+#0lls|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0268");
	fprintf(printf_, "#0268");
	ret1 = fprintf(printf_, "|%0+#0js|\n", L"");
	ret2 = ft_printf("|%0+#0js|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0269");
	fprintf(printf_, "#0269");
	ret1 = fprintf(printf_, "|%0+#0zs|\n", L"");
	ret2 = ft_printf("|%0+#0zs|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0270");
	fprintf(printf_, "#0270");
	ret1 = fprintf(printf_, "|%0+#0hhS|\n", L"");
	ret2 = ft_printf("|%0+#0hhS|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0271");
	fprintf(printf_, "#0271");
	ret1 = fprintf(printf_, "|%0+#0hS|\n", L"");
	ret2 = ft_printf("|%0+#0hS|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0272");
	fprintf(printf_, "#0272");
	ret1 = fprintf(printf_, "|%0+#0lS|\n", L"");
	ret2 = ft_printf("|%0+#0lS|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0273");
	fprintf(printf_, "#0273");
	ret1 = fprintf(printf_, "|%0+#0llS|\n", L"");
	ret2 = ft_printf("|%0+#0llS|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0274");
	fprintf(printf_, "#0274");
	ret1 = fprintf(printf_, "|%0+#0jS|\n", L"");
	ret2 = ft_printf("|%0+#0jS|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0275");
	fprintf(printf_, "#0275");
	ret1 = fprintf(printf_, "|%0+#0zS|\n", L"");
	ret2 = ft_printf("|%0+#0zS|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0276");
	fprintf(printf_, "#0276");
	ret1 = fprintf(printf_, "|% 0+#0hhs|\n", L"");
	ret2 = ft_printf("|% 0+#0hhs|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0277");
	fprintf(printf_, "#0277");
	ret1 = fprintf(printf_, "|% 0+#0hs|\n", L"");
	ret2 = ft_printf("|% 0+#0hs|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0278");
	fprintf(printf_, "#0278");
	ret1 = fprintf(printf_, "|% 0+#0ls|\n", L"");
	ret2 = ft_printf("|% 0+#0ls|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0279");
	fprintf(printf_, "#0279");
	ret1 = fprintf(printf_, "|% 0+#0lls|\n", L"");
	ret2 = ft_printf("|% 0+#0lls|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0280");
	fprintf(printf_, "#0280");
	ret1 = fprintf(printf_, "|% 0+#0js|\n", L"");
	ret2 = ft_printf("|% 0+#0js|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0281");
	fprintf(printf_, "#0281");
	ret1 = fprintf(printf_, "|% 0+#0zs|\n", L"");
	ret2 = ft_printf("|% 0+#0zs|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0282");
	fprintf(printf_, "#0282");
	ret1 = fprintf(printf_, "|% 0+#0hhS|\n", L"");
	ret2 = ft_printf("|% 0+#0hhS|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0283");
	fprintf(printf_, "#0283");
	ret1 = fprintf(printf_, "|% 0+#0hS|\n", L"");
	ret2 = ft_printf("|% 0+#0hS|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0284");
	fprintf(printf_, "#0284");
	ret1 = fprintf(printf_, "|% 0+#0lS|\n", L"");
	ret2 = ft_printf("|% 0+#0lS|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0285");
	fprintf(printf_, "#0285");
	ret1 = fprintf(printf_, "|% 0+#0llS|\n", L"");
	ret2 = ft_printf("|% 0+#0llS|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0286");
	fprintf(printf_, "#0286");
	ret1 = fprintf(printf_, "|% 0+#0jS|\n", L"");
	ret2 = ft_printf("|% 0+#0jS|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0287");
	fprintf(printf_, "#0287");
	ret1 = fprintf(printf_, "|% 0+#0zS|\n", L"");
	ret2 = ft_printf("|% 0+#0zS|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0288");
	fprintf(printf_, "#0288");
	ret1 = fprintf(printf_, "|%-#0hhs|\n", L"");
	ret2 = ft_printf("|%-#0hhs|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0289");
	fprintf(printf_, "#0289");
	ret1 = fprintf(printf_, "|%-#0hs|\n", L"");
	ret2 = ft_printf("|%-#0hs|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0290");
	fprintf(printf_, "#0290");
	ret1 = fprintf(printf_, "|%-#0ls|\n", L"");
	ret2 = ft_printf("|%-#0ls|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0291");
	fprintf(printf_, "#0291");
	ret1 = fprintf(printf_, "|%-#0lls|\n", L"");
	ret2 = ft_printf("|%-#0lls|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0292");
	fprintf(printf_, "#0292");
	ret1 = fprintf(printf_, "|%-#0js|\n", L"");
	ret2 = ft_printf("|%-#0js|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0293");
	fprintf(printf_, "#0293");
	ret1 = fprintf(printf_, "|%-#0zs|\n", L"");
	ret2 = ft_printf("|%-#0zs|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0294");
	fprintf(printf_, "#0294");
	ret1 = fprintf(printf_, "|%-#0hhS|\n", L"");
	ret2 = ft_printf("|%-#0hhS|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0295");
	fprintf(printf_, "#0295");
	ret1 = fprintf(printf_, "|%-#0hS|\n", L"");
	ret2 = ft_printf("|%-#0hS|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0296");
	fprintf(printf_, "#0296");
	ret1 = fprintf(printf_, "|%-#0lS|\n", L"");
	ret2 = ft_printf("|%-#0lS|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0297");
	fprintf(printf_, "#0297");
	ret1 = fprintf(printf_, "|%-#0llS|\n", L"");
	ret2 = ft_printf("|%-#0llS|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0298");
	fprintf(printf_, "#0298");
	ret1 = fprintf(printf_, "|%-#0jS|\n", L"");
	ret2 = ft_printf("|%-#0jS|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0299");
	fprintf(printf_, "#0299");
	ret1 = fprintf(printf_, "|%-#0zS|\n", L"");
	ret2 = ft_printf("|%-#0zS|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0300");
	fprintf(printf_, "#0300");
	ret1 = fprintf(printf_, "|% -#0hhs|\n", L"");
	ret2 = ft_printf("|% -#0hhs|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0301");
	fprintf(printf_, "#0301");
	ret1 = fprintf(printf_, "|% -#0hs|\n", L"");
	ret2 = ft_printf("|% -#0hs|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0302");
	fprintf(printf_, "#0302");
	ret1 = fprintf(printf_, "|% -#0ls|\n", L"");
	ret2 = ft_printf("|% -#0ls|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0303");
	fprintf(printf_, "#0303");
	ret1 = fprintf(printf_, "|% -#0lls|\n", L"");
	ret2 = ft_printf("|% -#0lls|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0304");
	fprintf(printf_, "#0304");
	ret1 = fprintf(printf_, "|% -#0js|\n", L"");
	ret2 = ft_printf("|% -#0js|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0305");
	fprintf(printf_, "#0305");
	ret1 = fprintf(printf_, "|% -#0zs|\n", L"");
	ret2 = ft_printf("|% -#0zs|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0306");
	fprintf(printf_, "#0306");
	ret1 = fprintf(printf_, "|% -#0hhS|\n", L"");
	ret2 = ft_printf("|% -#0hhS|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0307");
	fprintf(printf_, "#0307");
	ret1 = fprintf(printf_, "|% -#0hS|\n", L"");
	ret2 = ft_printf("|% -#0hS|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0308");
	fprintf(printf_, "#0308");
	ret1 = fprintf(printf_, "|% -#0lS|\n", L"");
	ret2 = ft_printf("|% -#0lS|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0309");
	fprintf(printf_, "#0309");
	ret1 = fprintf(printf_, "|% -#0llS|\n", L"");
	ret2 = ft_printf("|% -#0llS|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0310");
	fprintf(printf_, "#0310");
	ret1 = fprintf(printf_, "|% -#0jS|\n", L"");
	ret2 = ft_printf("|% -#0jS|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0311");
	fprintf(printf_, "#0311");
	ret1 = fprintf(printf_, "|% -#0zS|\n", L"");
	ret2 = ft_printf("|% -#0zS|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0312");
	fprintf(printf_, "#0312");
	ret1 = fprintf(printf_, "|%0-#0hhs|\n", L"");
	ret2 = ft_printf("|%0-#0hhs|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0313");
	fprintf(printf_, "#0313");
	ret1 = fprintf(printf_, "|%0-#0hs|\n", L"");
	ret2 = ft_printf("|%0-#0hs|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0314");
	fprintf(printf_, "#0314");
	ret1 = fprintf(printf_, "|%0-#0ls|\n", L"");
	ret2 = ft_printf("|%0-#0ls|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0315");
	fprintf(printf_, "#0315");
	ret1 = fprintf(printf_, "|%0-#0lls|\n", L"");
	ret2 = ft_printf("|%0-#0lls|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0316");
	fprintf(printf_, "#0316");
	ret1 = fprintf(printf_, "|%0-#0js|\n", L"");
	ret2 = ft_printf("|%0-#0js|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0317");
	fprintf(printf_, "#0317");
	ret1 = fprintf(printf_, "|%0-#0zs|\n", L"");
	ret2 = ft_printf("|%0-#0zs|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0318");
	fprintf(printf_, "#0318");
	ret1 = fprintf(printf_, "|%0-#0hhS|\n", L"");
	ret2 = ft_printf("|%0-#0hhS|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0319");
	fprintf(printf_, "#0319");
	ret1 = fprintf(printf_, "|%0-#0hS|\n", L"");
	ret2 = ft_printf("|%0-#0hS|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0320");
	fprintf(printf_, "#0320");
	ret1 = fprintf(printf_, "|%0-#0lS|\n", L"");
	ret2 = ft_printf("|%0-#0lS|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0321");
	fprintf(printf_, "#0321");
	ret1 = fprintf(printf_, "|%0-#0llS|\n", L"");
	ret2 = ft_printf("|%0-#0llS|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0322");
	fprintf(printf_, "#0322");
	ret1 = fprintf(printf_, "|%0-#0jS|\n", L"");
	ret2 = ft_printf("|%0-#0jS|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0323");
	fprintf(printf_, "#0323");
	ret1 = fprintf(printf_, "|%0-#0zS|\n", L"");
	ret2 = ft_printf("|%0-#0zS|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0324");
	fprintf(printf_, "#0324");
	ret1 = fprintf(printf_, "|% 0-#0hhs|\n", L"");
	ret2 = ft_printf("|% 0-#0hhs|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0325");
	fprintf(printf_, "#0325");
	ret1 = fprintf(printf_, "|% 0-#0hs|\n", L"");
	ret2 = ft_printf("|% 0-#0hs|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0326");
	fprintf(printf_, "#0326");
	ret1 = fprintf(printf_, "|% 0-#0ls|\n", L"");
	ret2 = ft_printf("|% 0-#0ls|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0327");
	fprintf(printf_, "#0327");
	ret1 = fprintf(printf_, "|% 0-#0lls|\n", L"");
	ret2 = ft_printf("|% 0-#0lls|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0328");
	fprintf(printf_, "#0328");
	ret1 = fprintf(printf_, "|% 0-#0js|\n", L"");
	ret2 = ft_printf("|% 0-#0js|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0329");
	fprintf(printf_, "#0329");
	ret1 = fprintf(printf_, "|% 0-#0zs|\n", L"");
	ret2 = ft_printf("|% 0-#0zs|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0330");
	fprintf(printf_, "#0330");
	ret1 = fprintf(printf_, "|% 0-#0hhS|\n", L"");
	ret2 = ft_printf("|% 0-#0hhS|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0331");
	fprintf(printf_, "#0331");
	ret1 = fprintf(printf_, "|% 0-#0hS|\n", L"");
	ret2 = ft_printf("|% 0-#0hS|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0332");
	fprintf(printf_, "#0332");
	ret1 = fprintf(printf_, "|% 0-#0lS|\n", L"");
	ret2 = ft_printf("|% 0-#0lS|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0333");
	fprintf(printf_, "#0333");
	ret1 = fprintf(printf_, "|% 0-#0llS|\n", L"");
	ret2 = ft_printf("|% 0-#0llS|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0334");
	fprintf(printf_, "#0334");
	ret1 = fprintf(printf_, "|% 0-#0jS|\n", L"");
	ret2 = ft_printf("|% 0-#0jS|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0335");
	fprintf(printf_, "#0335");
	ret1 = fprintf(printf_, "|% 0-#0zS|\n", L"");
	ret2 = ft_printf("|% 0-#0zS|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0336");
	fprintf(printf_, "#0336");
	ret1 = fprintf(printf_, "|%+-#0hhs|\n", L"");
	ret2 = ft_printf("|%+-#0hhs|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0337");
	fprintf(printf_, "#0337");
	ret1 = fprintf(printf_, "|%+-#0hs|\n", L"");
	ret2 = ft_printf("|%+-#0hs|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0338");
	fprintf(printf_, "#0338");
	ret1 = fprintf(printf_, "|%+-#0ls|\n", L"");
	ret2 = ft_printf("|%+-#0ls|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0339");
	fprintf(printf_, "#0339");
	ret1 = fprintf(printf_, "|%+-#0lls|\n", L"");
	ret2 = ft_printf("|%+-#0lls|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0340");
	fprintf(printf_, "#0340");
	ret1 = fprintf(printf_, "|%+-#0js|\n", L"");
	ret2 = ft_printf("|%+-#0js|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0341");
	fprintf(printf_, "#0341");
	ret1 = fprintf(printf_, "|%+-#0zs|\n", L"");
	ret2 = ft_printf("|%+-#0zs|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0342");
	fprintf(printf_, "#0342");
	ret1 = fprintf(printf_, "|%+-#0hhS|\n", L"");
	ret2 = ft_printf("|%+-#0hhS|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0343");
	fprintf(printf_, "#0343");
	ret1 = fprintf(printf_, "|%+-#0hS|\n", L"");
	ret2 = ft_printf("|%+-#0hS|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0344");
	fprintf(printf_, "#0344");
	ret1 = fprintf(printf_, "|%+-#0lS|\n", L"");
	ret2 = ft_printf("|%+-#0lS|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0345");
	fprintf(printf_, "#0345");
	ret1 = fprintf(printf_, "|%+-#0llS|\n", L"");
	ret2 = ft_printf("|%+-#0llS|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0346");
	fprintf(printf_, "#0346");
	ret1 = fprintf(printf_, "|%+-#0jS|\n", L"");
	ret2 = ft_printf("|%+-#0jS|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0347");
	fprintf(printf_, "#0347");
	ret1 = fprintf(printf_, "|%+-#0zS|\n", L"");
	ret2 = ft_printf("|%+-#0zS|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0348");
	fprintf(printf_, "#0348");
	ret1 = fprintf(printf_, "|% +-#0hhs|\n", L"");
	ret2 = ft_printf("|% +-#0hhs|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0349");
	fprintf(printf_, "#0349");
	ret1 = fprintf(printf_, "|% +-#0hs|\n", L"");
	ret2 = ft_printf("|% +-#0hs|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0350");
	fprintf(printf_, "#0350");
	ret1 = fprintf(printf_, "|% +-#0ls|\n", L"");
	ret2 = ft_printf("|% +-#0ls|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0351");
	fprintf(printf_, "#0351");
	ret1 = fprintf(printf_, "|% +-#0lls|\n", L"");
	ret2 = ft_printf("|% +-#0lls|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0352");
	fprintf(printf_, "#0352");
	ret1 = fprintf(printf_, "|% +-#0js|\n", L"");
	ret2 = ft_printf("|% +-#0js|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0353");
	fprintf(printf_, "#0353");
	ret1 = fprintf(printf_, "|% +-#0zs|\n", L"");
	ret2 = ft_printf("|% +-#0zs|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0354");
	fprintf(printf_, "#0354");
	ret1 = fprintf(printf_, "|% +-#0hhS|\n", L"");
	ret2 = ft_printf("|% +-#0hhS|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0355");
	fprintf(printf_, "#0355");
	ret1 = fprintf(printf_, "|% +-#0hS|\n", L"");
	ret2 = ft_printf("|% +-#0hS|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0356");
	fprintf(printf_, "#0356");
	ret1 = fprintf(printf_, "|% +-#0lS|\n", L"");
	ret2 = ft_printf("|% +-#0lS|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0357");
	fprintf(printf_, "#0357");
	ret1 = fprintf(printf_, "|% +-#0llS|\n", L"");
	ret2 = ft_printf("|% +-#0llS|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0358");
	fprintf(printf_, "#0358");
	ret1 = fprintf(printf_, "|% +-#0jS|\n", L"");
	ret2 = ft_printf("|% +-#0jS|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0359");
	fprintf(printf_, "#0359");
	ret1 = fprintf(printf_, "|% +-#0zS|\n", L"");
	ret2 = ft_printf("|% +-#0zS|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0360");
	fprintf(printf_, "#0360");
	ret1 = fprintf(printf_, "|%0+-#0hhs|\n", L"");
	ret2 = ft_printf("|%0+-#0hhs|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0361");
	fprintf(printf_, "#0361");
	ret1 = fprintf(printf_, "|%0+-#0hs|\n", L"");
	ret2 = ft_printf("|%0+-#0hs|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0362");
	fprintf(printf_, "#0362");
	ret1 = fprintf(printf_, "|%0+-#0ls|\n", L"");
	ret2 = ft_printf("|%0+-#0ls|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0363");
	fprintf(printf_, "#0363");
	ret1 = fprintf(printf_, "|%0+-#0lls|\n", L"");
	ret2 = ft_printf("|%0+-#0lls|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0364");
	fprintf(printf_, "#0364");
	ret1 = fprintf(printf_, "|%0+-#0js|\n", L"");
	ret2 = ft_printf("|%0+-#0js|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0365");
	fprintf(printf_, "#0365");
	ret1 = fprintf(printf_, "|%0+-#0zs|\n", L"");
	ret2 = ft_printf("|%0+-#0zs|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0366");
	fprintf(printf_, "#0366");
	ret1 = fprintf(printf_, "|%0+-#0hhS|\n", L"");
	ret2 = ft_printf("|%0+-#0hhS|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0367");
	fprintf(printf_, "#0367");
	ret1 = fprintf(printf_, "|%0+-#0hS|\n", L"");
	ret2 = ft_printf("|%0+-#0hS|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0368");
	fprintf(printf_, "#0368");
	ret1 = fprintf(printf_, "|%0+-#0lS|\n", L"");
	ret2 = ft_printf("|%0+-#0lS|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0369");
	fprintf(printf_, "#0369");
	ret1 = fprintf(printf_, "|%0+-#0llS|\n", L"");
	ret2 = ft_printf("|%0+-#0llS|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0370");
	fprintf(printf_, "#0370");
	ret1 = fprintf(printf_, "|%0+-#0jS|\n", L"");
	ret2 = ft_printf("|%0+-#0jS|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0371");
	fprintf(printf_, "#0371");
	ret1 = fprintf(printf_, "|%0+-#0zS|\n", L"");
	ret2 = ft_printf("|%0+-#0zS|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0372");
	fprintf(printf_, "#0372");
	ret1 = fprintf(printf_, "|% 0+-#0hhs|\n", L"");
	ret2 = ft_printf("|% 0+-#0hhs|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0373");
	fprintf(printf_, "#0373");
	ret1 = fprintf(printf_, "|% 0+-#0hs|\n", L"");
	ret2 = ft_printf("|% 0+-#0hs|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0374");
	fprintf(printf_, "#0374");
	ret1 = fprintf(printf_, "|% 0+-#0ls|\n", L"");
	ret2 = ft_printf("|% 0+-#0ls|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0375");
	fprintf(printf_, "#0375");
	ret1 = fprintf(printf_, "|% 0+-#0lls|\n", L"");
	ret2 = ft_printf("|% 0+-#0lls|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0376");
	fprintf(printf_, "#0376");
	ret1 = fprintf(printf_, "|% 0+-#0js|\n", L"");
	ret2 = ft_printf("|% 0+-#0js|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0377");
	fprintf(printf_, "#0377");
	ret1 = fprintf(printf_, "|% 0+-#0zs|\n", L"");
	ret2 = ft_printf("|% 0+-#0zs|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0378");
	fprintf(printf_, "#0378");
	ret1 = fprintf(printf_, "|% 0+-#0hhS|\n", L"");
	ret2 = ft_printf("|% 0+-#0hhS|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0379");
	fprintf(printf_, "#0379");
	ret1 = fprintf(printf_, "|% 0+-#0hS|\n", L"");
	ret2 = ft_printf("|% 0+-#0hS|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0380");
	fprintf(printf_, "#0380");
	ret1 = fprintf(printf_, "|% 0+-#0lS|\n", L"");
	ret2 = ft_printf("|% 0+-#0lS|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0381");
	fprintf(printf_, "#0381");
	ret1 = fprintf(printf_, "|% 0+-#0llS|\n", L"");
	ret2 = ft_printf("|% 0+-#0llS|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0382");
	fprintf(printf_, "#0382");
	ret1 = fprintf(printf_, "|% 0+-#0jS|\n", L"");
	ret2 = ft_printf("|% 0+-#0jS|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0383");
	fprintf(printf_, "#0383");
	ret1 = fprintf(printf_, "|% 0+-#0zS|\n", L"");
	ret2 = ft_printf("|% 0+-#0zS|\n", L"");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
	fclose(printf_);
	fclose(printf_ret);
	fclose(ft_printf_ret);
	return (0);
}

