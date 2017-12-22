#include <stdio.h>
#include <stdint.h>
#include <locale.h>
#include "libftprintf.h"

int		main(void)
{
	FILE	*printf_, *printf_ret, *ft_printf_ret;
	int		ret1, ret2;

	
	printf_ = fopen("../files/test_m42_printf_print", "w");
	printf_ret = fopen("../files/test_m42_printf_ret", "w");
	ft_printf_ret = fopen("../files/test_m42_ft_printf_ret", "w");
	setvbuf(printf_, NULL, _IONBF, 0);
	setvbuf(printf_ret, NULL, _IONBF, 0);
	setvbuf(ft_printf_ret, NULL, _IONBF, 0);

//@
	ft_printf("#0000");
	fprintf(printf_, "#0000");
	ret1 = fprintf(printf_, "|%5.3hhD|\n");
	ret2 = ft_printf("|%5.3hhD|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0001");
	fprintf(printf_, "#0001");
	ret1 = fprintf(printf_, "|%5.3hD|\n");
	ret2 = ft_printf("|%5.3hD|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0002");
	fprintf(printf_, "#0002");
	ret1 = fprintf(printf_, "|%5.3lD|\n");
	ret2 = ft_printf("|%5.3lD|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0003");
	fprintf(printf_, "#0003");
	ret1 = fprintf(printf_, "|%5.3llD|\n");
	ret2 = ft_printf("|%5.3llD|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0004");
	fprintf(printf_, "#0004");
	ret1 = fprintf(printf_, "|%5.3jD|\n");
	ret2 = ft_printf("|%5.3jD|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0005");
	fprintf(printf_, "#0005");
	ret1 = fprintf(printf_, "|%5.3zD|\n");
	ret2 = ft_printf("|%5.3zD|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0006");
	fprintf(printf_, "#0006");
	ret1 = fprintf(printf_, "|%5.3hhO|\n");
	ret2 = ft_printf("|%5.3hhO|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0007");
	fprintf(printf_, "#0007");
	ret1 = fprintf(printf_, "|%5.3hO|\n");
	ret2 = ft_printf("|%5.3hO|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0008");
	fprintf(printf_, "#0008");
	ret1 = fprintf(printf_, "|%5.3lO|\n");
	ret2 = ft_printf("|%5.3lO|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0009");
	fprintf(printf_, "#0009");
	ret1 = fprintf(printf_, "|%5.3llO|\n");
	ret2 = ft_printf("|%5.3llO|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0010");
	fprintf(printf_, "#0010");
	ret1 = fprintf(printf_, "|%5.3jO|\n");
	ret2 = ft_printf("|%5.3jO|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0011");
	fprintf(printf_, "#0011");
	ret1 = fprintf(printf_, "|%5.3zO|\n");
	ret2 = ft_printf("|%5.3zO|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0012");
	fprintf(printf_, "#0012");
	ret1 = fprintf(printf_, "|%5.3hhU|\n");
	ret2 = ft_printf("|%5.3hhU|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0013");
	fprintf(printf_, "#0013");
	ret1 = fprintf(printf_, "|%5.3hU|\n");
	ret2 = ft_printf("|%5.3hU|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0014");
	fprintf(printf_, "#0014");
	ret1 = fprintf(printf_, "|%5.3lU|\n");
	ret2 = ft_printf("|%5.3lU|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0015");
	fprintf(printf_, "#0015");
	ret1 = fprintf(printf_, "|%5.3llU|\n");
	ret2 = ft_printf("|%5.3llU|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0016");
	fprintf(printf_, "#0016");
	ret1 = fprintf(printf_, "|%5.3jU|\n");
	ret2 = ft_printf("|%5.3jU|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0017");
	fprintf(printf_, "#0017");
	ret1 = fprintf(printf_, "|%5.3zU|\n");
	ret2 = ft_printf("|%5.3zU|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0018");
	fprintf(printf_, "#0018");
	ret1 = fprintf(printf_, "|% 5.3hhD|\n");
	ret2 = ft_printf("|% 5.3hhD|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0019");
	fprintf(printf_, "#0019");
	ret1 = fprintf(printf_, "|% 5.3hD|\n");
	ret2 = ft_printf("|% 5.3hD|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0020");
	fprintf(printf_, "#0020");
	ret1 = fprintf(printf_, "|% 5.3lD|\n");
	ret2 = ft_printf("|% 5.3lD|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0021");
	fprintf(printf_, "#0021");
	ret1 = fprintf(printf_, "|% 5.3llD|\n");
	ret2 = ft_printf("|% 5.3llD|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0022");
	fprintf(printf_, "#0022");
	ret1 = fprintf(printf_, "|% 5.3jD|\n");
	ret2 = ft_printf("|% 5.3jD|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0023");
	fprintf(printf_, "#0023");
	ret1 = fprintf(printf_, "|% 5.3zD|\n");
	ret2 = ft_printf("|% 5.3zD|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0024");
	fprintf(printf_, "#0024");
	ret1 = fprintf(printf_, "|% 5.3hhO|\n");
	ret2 = ft_printf("|% 5.3hhO|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0025");
	fprintf(printf_, "#0025");
	ret1 = fprintf(printf_, "|% 5.3hO|\n");
	ret2 = ft_printf("|% 5.3hO|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0026");
	fprintf(printf_, "#0026");
	ret1 = fprintf(printf_, "|% 5.3lO|\n");
	ret2 = ft_printf("|% 5.3lO|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0027");
	fprintf(printf_, "#0027");
	ret1 = fprintf(printf_, "|% 5.3llO|\n");
	ret2 = ft_printf("|% 5.3llO|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0028");
	fprintf(printf_, "#0028");
	ret1 = fprintf(printf_, "|% 5.3jO|\n");
	ret2 = ft_printf("|% 5.3jO|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0029");
	fprintf(printf_, "#0029");
	ret1 = fprintf(printf_, "|% 5.3zO|\n");
	ret2 = ft_printf("|% 5.3zO|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0030");
	fprintf(printf_, "#0030");
	ret1 = fprintf(printf_, "|% 5.3hhU|\n");
	ret2 = ft_printf("|% 5.3hhU|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0031");
	fprintf(printf_, "#0031");
	ret1 = fprintf(printf_, "|% 5.3hU|\n");
	ret2 = ft_printf("|% 5.3hU|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0032");
	fprintf(printf_, "#0032");
	ret1 = fprintf(printf_, "|% 5.3lU|\n");
	ret2 = ft_printf("|% 5.3lU|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0033");
	fprintf(printf_, "#0033");
	ret1 = fprintf(printf_, "|% 5.3llU|\n");
	ret2 = ft_printf("|% 5.3llU|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0034");
	fprintf(printf_, "#0034");
	ret1 = fprintf(printf_, "|% 5.3jU|\n");
	ret2 = ft_printf("|% 5.3jU|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0035");
	fprintf(printf_, "#0035");
	ret1 = fprintf(printf_, "|% 5.3zU|\n");
	ret2 = ft_printf("|% 5.3zU|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0036");
	fprintf(printf_, "#0036");
	ret1 = fprintf(printf_, "|%05.3hhD|\n");
	ret2 = ft_printf("|%05.3hhD|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0037");
	fprintf(printf_, "#0037");
	ret1 = fprintf(printf_, "|%05.3hD|\n");
	ret2 = ft_printf("|%05.3hD|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0038");
	fprintf(printf_, "#0038");
	ret1 = fprintf(printf_, "|%05.3lD|\n");
	ret2 = ft_printf("|%05.3lD|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0039");
	fprintf(printf_, "#0039");
	ret1 = fprintf(printf_, "|%05.3llD|\n");
	ret2 = ft_printf("|%05.3llD|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0040");
	fprintf(printf_, "#0040");
	ret1 = fprintf(printf_, "|%05.3jD|\n");
	ret2 = ft_printf("|%05.3jD|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0041");
	fprintf(printf_, "#0041");
	ret1 = fprintf(printf_, "|%05.3zD|\n");
	ret2 = ft_printf("|%05.3zD|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0042");
	fprintf(printf_, "#0042");
	ret1 = fprintf(printf_, "|%05.3hhO|\n");
	ret2 = ft_printf("|%05.3hhO|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0043");
	fprintf(printf_, "#0043");
	ret1 = fprintf(printf_, "|%05.3hO|\n");
	ret2 = ft_printf("|%05.3hO|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0044");
	fprintf(printf_, "#0044");
	ret1 = fprintf(printf_, "|%05.3lO|\n");
	ret2 = ft_printf("|%05.3lO|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0045");
	fprintf(printf_, "#0045");
	ret1 = fprintf(printf_, "|%05.3llO|\n");
	ret2 = ft_printf("|%05.3llO|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0046");
	fprintf(printf_, "#0046");
	ret1 = fprintf(printf_, "|%05.3jO|\n");
	ret2 = ft_printf("|%05.3jO|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0047");
	fprintf(printf_, "#0047");
	ret1 = fprintf(printf_, "|%05.3zO|\n");
	ret2 = ft_printf("|%05.3zO|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0048");
	fprintf(printf_, "#0048");
	ret1 = fprintf(printf_, "|%05.3hhU|\n");
	ret2 = ft_printf("|%05.3hhU|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0049");
	fprintf(printf_, "#0049");
	ret1 = fprintf(printf_, "|%05.3hU|\n");
	ret2 = ft_printf("|%05.3hU|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0050");
	fprintf(printf_, "#0050");
	ret1 = fprintf(printf_, "|%05.3lU|\n");
	ret2 = ft_printf("|%05.3lU|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0051");
	fprintf(printf_, "#0051");
	ret1 = fprintf(printf_, "|%05.3llU|\n");
	ret2 = ft_printf("|%05.3llU|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0052");
	fprintf(printf_, "#0052");
	ret1 = fprintf(printf_, "|%05.3jU|\n");
	ret2 = ft_printf("|%05.3jU|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0053");
	fprintf(printf_, "#0053");
	ret1 = fprintf(printf_, "|%05.3zU|\n");
	ret2 = ft_printf("|%05.3zU|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0054");
	fprintf(printf_, "#0054");
	ret1 = fprintf(printf_, "|% 05.3hhD|\n");
	ret2 = ft_printf("|% 05.3hhD|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0055");
	fprintf(printf_, "#0055");
	ret1 = fprintf(printf_, "|% 05.3hD|\n");
	ret2 = ft_printf("|% 05.3hD|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0056");
	fprintf(printf_, "#0056");
	ret1 = fprintf(printf_, "|% 05.3lD|\n");
	ret2 = ft_printf("|% 05.3lD|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0057");
	fprintf(printf_, "#0057");
	ret1 = fprintf(printf_, "|% 05.3llD|\n");
	ret2 = ft_printf("|% 05.3llD|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0058");
	fprintf(printf_, "#0058");
	ret1 = fprintf(printf_, "|% 05.3jD|\n");
	ret2 = ft_printf("|% 05.3jD|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0059");
	fprintf(printf_, "#0059");
	ret1 = fprintf(printf_, "|% 05.3zD|\n");
	ret2 = ft_printf("|% 05.3zD|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0060");
	fprintf(printf_, "#0060");
	ret1 = fprintf(printf_, "|% 05.3hhO|\n");
	ret2 = ft_printf("|% 05.3hhO|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0061");
	fprintf(printf_, "#0061");
	ret1 = fprintf(printf_, "|% 05.3hO|\n");
	ret2 = ft_printf("|% 05.3hO|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0062");
	fprintf(printf_, "#0062");
	ret1 = fprintf(printf_, "|% 05.3lO|\n");
	ret2 = ft_printf("|% 05.3lO|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0063");
	fprintf(printf_, "#0063");
	ret1 = fprintf(printf_, "|% 05.3llO|\n");
	ret2 = ft_printf("|% 05.3llO|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0064");
	fprintf(printf_, "#0064");
	ret1 = fprintf(printf_, "|% 05.3jO|\n");
	ret2 = ft_printf("|% 05.3jO|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0065");
	fprintf(printf_, "#0065");
	ret1 = fprintf(printf_, "|% 05.3zO|\n");
	ret2 = ft_printf("|% 05.3zO|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0066");
	fprintf(printf_, "#0066");
	ret1 = fprintf(printf_, "|% 05.3hhU|\n");
	ret2 = ft_printf("|% 05.3hhU|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0067");
	fprintf(printf_, "#0067");
	ret1 = fprintf(printf_, "|% 05.3hU|\n");
	ret2 = ft_printf("|% 05.3hU|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0068");
	fprintf(printf_, "#0068");
	ret1 = fprintf(printf_, "|% 05.3lU|\n");
	ret2 = ft_printf("|% 05.3lU|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0069");
	fprintf(printf_, "#0069");
	ret1 = fprintf(printf_, "|% 05.3llU|\n");
	ret2 = ft_printf("|% 05.3llU|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0070");
	fprintf(printf_, "#0070");
	ret1 = fprintf(printf_, "|% 05.3jU|\n");
	ret2 = ft_printf("|% 05.3jU|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0071");
	fprintf(printf_, "#0071");
	ret1 = fprintf(printf_, "|% 05.3zU|\n");
	ret2 = ft_printf("|% 05.3zU|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0072");
	fprintf(printf_, "#0072");
	ret1 = fprintf(printf_, "|%+5.3hhD|\n");
	ret2 = ft_printf("|%+5.3hhD|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0073");
	fprintf(printf_, "#0073");
	ret1 = fprintf(printf_, "|%+5.3hD|\n");
	ret2 = ft_printf("|%+5.3hD|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0074");
	fprintf(printf_, "#0074");
	ret1 = fprintf(printf_, "|%+5.3lD|\n");
	ret2 = ft_printf("|%+5.3lD|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0075");
	fprintf(printf_, "#0075");
	ret1 = fprintf(printf_, "|%+5.3llD|\n");
	ret2 = ft_printf("|%+5.3llD|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0076");
	fprintf(printf_, "#0076");
	ret1 = fprintf(printf_, "|%+5.3jD|\n");
	ret2 = ft_printf("|%+5.3jD|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0077");
	fprintf(printf_, "#0077");
	ret1 = fprintf(printf_, "|%+5.3zD|\n");
	ret2 = ft_printf("|%+5.3zD|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0078");
	fprintf(printf_, "#0078");
	ret1 = fprintf(printf_, "|%+5.3hhO|\n");
	ret2 = ft_printf("|%+5.3hhO|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0079");
	fprintf(printf_, "#0079");
	ret1 = fprintf(printf_, "|%+5.3hO|\n");
	ret2 = ft_printf("|%+5.3hO|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0080");
	fprintf(printf_, "#0080");
	ret1 = fprintf(printf_, "|%+5.3lO|\n");
	ret2 = ft_printf("|%+5.3lO|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0081");
	fprintf(printf_, "#0081");
	ret1 = fprintf(printf_, "|%+5.3llO|\n");
	ret2 = ft_printf("|%+5.3llO|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0082");
	fprintf(printf_, "#0082");
	ret1 = fprintf(printf_, "|%+5.3jO|\n");
	ret2 = ft_printf("|%+5.3jO|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0083");
	fprintf(printf_, "#0083");
	ret1 = fprintf(printf_, "|%+5.3zO|\n");
	ret2 = ft_printf("|%+5.3zO|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0084");
	fprintf(printf_, "#0084");
	ret1 = fprintf(printf_, "|%+5.3hhU|\n");
	ret2 = ft_printf("|%+5.3hhU|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0085");
	fprintf(printf_, "#0085");
	ret1 = fprintf(printf_, "|%+5.3hU|\n");
	ret2 = ft_printf("|%+5.3hU|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0086");
	fprintf(printf_, "#0086");
	ret1 = fprintf(printf_, "|%+5.3lU|\n");
	ret2 = ft_printf("|%+5.3lU|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0087");
	fprintf(printf_, "#0087");
	ret1 = fprintf(printf_, "|%+5.3llU|\n");
	ret2 = ft_printf("|%+5.3llU|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0088");
	fprintf(printf_, "#0088");
	ret1 = fprintf(printf_, "|%+5.3jU|\n");
	ret2 = ft_printf("|%+5.3jU|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0089");
	fprintf(printf_, "#0089");
	ret1 = fprintf(printf_, "|%+5.3zU|\n");
	ret2 = ft_printf("|%+5.3zU|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0090");
	fprintf(printf_, "#0090");
	ret1 = fprintf(printf_, "|% +5.3hhD|\n");
	ret2 = ft_printf("|% +5.3hhD|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0091");
	fprintf(printf_, "#0091");
	ret1 = fprintf(printf_, "|% +5.3hD|\n");
	ret2 = ft_printf("|% +5.3hD|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0092");
	fprintf(printf_, "#0092");
	ret1 = fprintf(printf_, "|% +5.3lD|\n");
	ret2 = ft_printf("|% +5.3lD|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0093");
	fprintf(printf_, "#0093");
	ret1 = fprintf(printf_, "|% +5.3llD|\n");
	ret2 = ft_printf("|% +5.3llD|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0094");
	fprintf(printf_, "#0094");
	ret1 = fprintf(printf_, "|% +5.3jD|\n");
	ret2 = ft_printf("|% +5.3jD|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0095");
	fprintf(printf_, "#0095");
	ret1 = fprintf(printf_, "|% +5.3zD|\n");
	ret2 = ft_printf("|% +5.3zD|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0096");
	fprintf(printf_, "#0096");
	ret1 = fprintf(printf_, "|% +5.3hhO|\n");
	ret2 = ft_printf("|% +5.3hhO|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0097");
	fprintf(printf_, "#0097");
	ret1 = fprintf(printf_, "|% +5.3hO|\n");
	ret2 = ft_printf("|% +5.3hO|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0098");
	fprintf(printf_, "#0098");
	ret1 = fprintf(printf_, "|% +5.3lO|\n");
	ret2 = ft_printf("|% +5.3lO|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0099");
	fprintf(printf_, "#0099");
	ret1 = fprintf(printf_, "|% +5.3llO|\n");
	ret2 = ft_printf("|% +5.3llO|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0100");
	fprintf(printf_, "#0100");
	ret1 = fprintf(printf_, "|% +5.3jO|\n");
	ret2 = ft_printf("|% +5.3jO|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0101");
	fprintf(printf_, "#0101");
	ret1 = fprintf(printf_, "|% +5.3zO|\n");
	ret2 = ft_printf("|% +5.3zO|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0102");
	fprintf(printf_, "#0102");
	ret1 = fprintf(printf_, "|% +5.3hhU|\n");
	ret2 = ft_printf("|% +5.3hhU|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0103");
	fprintf(printf_, "#0103");
	ret1 = fprintf(printf_, "|% +5.3hU|\n");
	ret2 = ft_printf("|% +5.3hU|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0104");
	fprintf(printf_, "#0104");
	ret1 = fprintf(printf_, "|% +5.3lU|\n");
	ret2 = ft_printf("|% +5.3lU|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0105");
	fprintf(printf_, "#0105");
	ret1 = fprintf(printf_, "|% +5.3llU|\n");
	ret2 = ft_printf("|% +5.3llU|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0106");
	fprintf(printf_, "#0106");
	ret1 = fprintf(printf_, "|% +5.3jU|\n");
	ret2 = ft_printf("|% +5.3jU|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0107");
	fprintf(printf_, "#0107");
	ret1 = fprintf(printf_, "|% +5.3zU|\n");
	ret2 = ft_printf("|% +5.3zU|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0108");
	fprintf(printf_, "#0108");
	ret1 = fprintf(printf_, "|%0+5.3hhD|\n");
	ret2 = ft_printf("|%0+5.3hhD|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0109");
	fprintf(printf_, "#0109");
	ret1 = fprintf(printf_, "|%0+5.3hD|\n");
	ret2 = ft_printf("|%0+5.3hD|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0110");
	fprintf(printf_, "#0110");
	ret1 = fprintf(printf_, "|%0+5.3lD|\n");
	ret2 = ft_printf("|%0+5.3lD|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0111");
	fprintf(printf_, "#0111");
	ret1 = fprintf(printf_, "|%0+5.3llD|\n");
	ret2 = ft_printf("|%0+5.3llD|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0112");
	fprintf(printf_, "#0112");
	ret1 = fprintf(printf_, "|%0+5.3jD|\n");
	ret2 = ft_printf("|%0+5.3jD|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0113");
	fprintf(printf_, "#0113");
	ret1 = fprintf(printf_, "|%0+5.3zD|\n");
	ret2 = ft_printf("|%0+5.3zD|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0114");
	fprintf(printf_, "#0114");
	ret1 = fprintf(printf_, "|%0+5.3hhO|\n");
	ret2 = ft_printf("|%0+5.3hhO|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0115");
	fprintf(printf_, "#0115");
	ret1 = fprintf(printf_, "|%0+5.3hO|\n");
	ret2 = ft_printf("|%0+5.3hO|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0116");
	fprintf(printf_, "#0116");
	ret1 = fprintf(printf_, "|%0+5.3lO|\n");
	ret2 = ft_printf("|%0+5.3lO|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0117");
	fprintf(printf_, "#0117");
	ret1 = fprintf(printf_, "|%0+5.3llO|\n");
	ret2 = ft_printf("|%0+5.3llO|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0118");
	fprintf(printf_, "#0118");
	ret1 = fprintf(printf_, "|%0+5.3jO|\n");
	ret2 = ft_printf("|%0+5.3jO|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0119");
	fprintf(printf_, "#0119");
	ret1 = fprintf(printf_, "|%0+5.3zO|\n");
	ret2 = ft_printf("|%0+5.3zO|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0120");
	fprintf(printf_, "#0120");
	ret1 = fprintf(printf_, "|%0+5.3hhU|\n");
	ret2 = ft_printf("|%0+5.3hhU|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0121");
	fprintf(printf_, "#0121");
	ret1 = fprintf(printf_, "|%0+5.3hU|\n");
	ret2 = ft_printf("|%0+5.3hU|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0122");
	fprintf(printf_, "#0122");
	ret1 = fprintf(printf_, "|%0+5.3lU|\n");
	ret2 = ft_printf("|%0+5.3lU|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0123");
	fprintf(printf_, "#0123");
	ret1 = fprintf(printf_, "|%0+5.3llU|\n");
	ret2 = ft_printf("|%0+5.3llU|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0124");
	fprintf(printf_, "#0124");
	ret1 = fprintf(printf_, "|%0+5.3jU|\n");
	ret2 = ft_printf("|%0+5.3jU|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0125");
	fprintf(printf_, "#0125");
	ret1 = fprintf(printf_, "|%0+5.3zU|\n");
	ret2 = ft_printf("|%0+5.3zU|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0126");
	fprintf(printf_, "#0126");
	ret1 = fprintf(printf_, "|% 0+5.3hhD|\n");
	ret2 = ft_printf("|% 0+5.3hhD|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0127");
	fprintf(printf_, "#0127");
	ret1 = fprintf(printf_, "|% 0+5.3hD|\n");
	ret2 = ft_printf("|% 0+5.3hD|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0128");
	fprintf(printf_, "#0128");
	ret1 = fprintf(printf_, "|% 0+5.3lD|\n");
	ret2 = ft_printf("|% 0+5.3lD|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0129");
	fprintf(printf_, "#0129");
	ret1 = fprintf(printf_, "|% 0+5.3llD|\n");
	ret2 = ft_printf("|% 0+5.3llD|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0130");
	fprintf(printf_, "#0130");
	ret1 = fprintf(printf_, "|% 0+5.3jD|\n");
	ret2 = ft_printf("|% 0+5.3jD|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0131");
	fprintf(printf_, "#0131");
	ret1 = fprintf(printf_, "|% 0+5.3zD|\n");
	ret2 = ft_printf("|% 0+5.3zD|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0132");
	fprintf(printf_, "#0132");
	ret1 = fprintf(printf_, "|% 0+5.3hhO|\n");
	ret2 = ft_printf("|% 0+5.3hhO|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0133");
	fprintf(printf_, "#0133");
	ret1 = fprintf(printf_, "|% 0+5.3hO|\n");
	ret2 = ft_printf("|% 0+5.3hO|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0134");
	fprintf(printf_, "#0134");
	ret1 = fprintf(printf_, "|% 0+5.3lO|\n");
	ret2 = ft_printf("|% 0+5.3lO|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0135");
	fprintf(printf_, "#0135");
	ret1 = fprintf(printf_, "|% 0+5.3llO|\n");
	ret2 = ft_printf("|% 0+5.3llO|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0136");
	fprintf(printf_, "#0136");
	ret1 = fprintf(printf_, "|% 0+5.3jO|\n");
	ret2 = ft_printf("|% 0+5.3jO|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0137");
	fprintf(printf_, "#0137");
	ret1 = fprintf(printf_, "|% 0+5.3zO|\n");
	ret2 = ft_printf("|% 0+5.3zO|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0138");
	fprintf(printf_, "#0138");
	ret1 = fprintf(printf_, "|% 0+5.3hhU|\n");
	ret2 = ft_printf("|% 0+5.3hhU|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0139");
	fprintf(printf_, "#0139");
	ret1 = fprintf(printf_, "|% 0+5.3hU|\n");
	ret2 = ft_printf("|% 0+5.3hU|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0140");
	fprintf(printf_, "#0140");
	ret1 = fprintf(printf_, "|% 0+5.3lU|\n");
	ret2 = ft_printf("|% 0+5.3lU|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0141");
	fprintf(printf_, "#0141");
	ret1 = fprintf(printf_, "|% 0+5.3llU|\n");
	ret2 = ft_printf("|% 0+5.3llU|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0142");
	fprintf(printf_, "#0142");
	ret1 = fprintf(printf_, "|% 0+5.3jU|\n");
	ret2 = ft_printf("|% 0+5.3jU|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0143");
	fprintf(printf_, "#0143");
	ret1 = fprintf(printf_, "|% 0+5.3zU|\n");
	ret2 = ft_printf("|% 0+5.3zU|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0144");
	fprintf(printf_, "#0144");
	ret1 = fprintf(printf_, "|%-5.3hhD|\n");
	ret2 = ft_printf("|%-5.3hhD|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0145");
	fprintf(printf_, "#0145");
	ret1 = fprintf(printf_, "|%-5.3hD|\n");
	ret2 = ft_printf("|%-5.3hD|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0146");
	fprintf(printf_, "#0146");
	ret1 = fprintf(printf_, "|%-5.3lD|\n");
	ret2 = ft_printf("|%-5.3lD|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0147");
	fprintf(printf_, "#0147");
	ret1 = fprintf(printf_, "|%-5.3llD|\n");
	ret2 = ft_printf("|%-5.3llD|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0148");
	fprintf(printf_, "#0148");
	ret1 = fprintf(printf_, "|%-5.3jD|\n");
	ret2 = ft_printf("|%-5.3jD|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0149");
	fprintf(printf_, "#0149");
	ret1 = fprintf(printf_, "|%-5.3zD|\n");
	ret2 = ft_printf("|%-5.3zD|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0150");
	fprintf(printf_, "#0150");
	ret1 = fprintf(printf_, "|%-5.3hhO|\n");
	ret2 = ft_printf("|%-5.3hhO|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0151");
	fprintf(printf_, "#0151");
	ret1 = fprintf(printf_, "|%-5.3hO|\n");
	ret2 = ft_printf("|%-5.3hO|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0152");
	fprintf(printf_, "#0152");
	ret1 = fprintf(printf_, "|%-5.3lO|\n");
	ret2 = ft_printf("|%-5.3lO|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0153");
	fprintf(printf_, "#0153");
	ret1 = fprintf(printf_, "|%-5.3llO|\n");
	ret2 = ft_printf("|%-5.3llO|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0154");
	fprintf(printf_, "#0154");
	ret1 = fprintf(printf_, "|%-5.3jO|\n");
	ret2 = ft_printf("|%-5.3jO|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0155");
	fprintf(printf_, "#0155");
	ret1 = fprintf(printf_, "|%-5.3zO|\n");
	ret2 = ft_printf("|%-5.3zO|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0156");
	fprintf(printf_, "#0156");
	ret1 = fprintf(printf_, "|%-5.3hhU|\n");
	ret2 = ft_printf("|%-5.3hhU|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0157");
	fprintf(printf_, "#0157");
	ret1 = fprintf(printf_, "|%-5.3hU|\n");
	ret2 = ft_printf("|%-5.3hU|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0158");
	fprintf(printf_, "#0158");
	ret1 = fprintf(printf_, "|%-5.3lU|\n");
	ret2 = ft_printf("|%-5.3lU|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0159");
	fprintf(printf_, "#0159");
	ret1 = fprintf(printf_, "|%-5.3llU|\n");
	ret2 = ft_printf("|%-5.3llU|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0160");
	fprintf(printf_, "#0160");
	ret1 = fprintf(printf_, "|%-5.3jU|\n");
	ret2 = ft_printf("|%-5.3jU|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0161");
	fprintf(printf_, "#0161");
	ret1 = fprintf(printf_, "|%-5.3zU|\n");
	ret2 = ft_printf("|%-5.3zU|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0162");
	fprintf(printf_, "#0162");
	ret1 = fprintf(printf_, "|% -5.3hhD|\n");
	ret2 = ft_printf("|% -5.3hhD|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0163");
	fprintf(printf_, "#0163");
	ret1 = fprintf(printf_, "|% -5.3hD|\n");
	ret2 = ft_printf("|% -5.3hD|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0164");
	fprintf(printf_, "#0164");
	ret1 = fprintf(printf_, "|% -5.3lD|\n");
	ret2 = ft_printf("|% -5.3lD|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0165");
	fprintf(printf_, "#0165");
	ret1 = fprintf(printf_, "|% -5.3llD|\n");
	ret2 = ft_printf("|% -5.3llD|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0166");
	fprintf(printf_, "#0166");
	ret1 = fprintf(printf_, "|% -5.3jD|\n");
	ret2 = ft_printf("|% -5.3jD|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0167");
	fprintf(printf_, "#0167");
	ret1 = fprintf(printf_, "|% -5.3zD|\n");
	ret2 = ft_printf("|% -5.3zD|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0168");
	fprintf(printf_, "#0168");
	ret1 = fprintf(printf_, "|% -5.3hhO|\n");
	ret2 = ft_printf("|% -5.3hhO|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0169");
	fprintf(printf_, "#0169");
	ret1 = fprintf(printf_, "|% -5.3hO|\n");
	ret2 = ft_printf("|% -5.3hO|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0170");
	fprintf(printf_, "#0170");
	ret1 = fprintf(printf_, "|% -5.3lO|\n");
	ret2 = ft_printf("|% -5.3lO|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0171");
	fprintf(printf_, "#0171");
	ret1 = fprintf(printf_, "|% -5.3llO|\n");
	ret2 = ft_printf("|% -5.3llO|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0172");
	fprintf(printf_, "#0172");
	ret1 = fprintf(printf_, "|% -5.3jO|\n");
	ret2 = ft_printf("|% -5.3jO|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0173");
	fprintf(printf_, "#0173");
	ret1 = fprintf(printf_, "|% -5.3zO|\n");
	ret2 = ft_printf("|% -5.3zO|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0174");
	fprintf(printf_, "#0174");
	ret1 = fprintf(printf_, "|% -5.3hhU|\n");
	ret2 = ft_printf("|% -5.3hhU|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0175");
	fprintf(printf_, "#0175");
	ret1 = fprintf(printf_, "|% -5.3hU|\n");
	ret2 = ft_printf("|% -5.3hU|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0176");
	fprintf(printf_, "#0176");
	ret1 = fprintf(printf_, "|% -5.3lU|\n");
	ret2 = ft_printf("|% -5.3lU|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0177");
	fprintf(printf_, "#0177");
	ret1 = fprintf(printf_, "|% -5.3llU|\n");
	ret2 = ft_printf("|% -5.3llU|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0178");
	fprintf(printf_, "#0178");
	ret1 = fprintf(printf_, "|% -5.3jU|\n");
	ret2 = ft_printf("|% -5.3jU|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0179");
	fprintf(printf_, "#0179");
	ret1 = fprintf(printf_, "|% -5.3zU|\n");
	ret2 = ft_printf("|% -5.3zU|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0180");
	fprintf(printf_, "#0180");
	ret1 = fprintf(printf_, "|%0-5.3hhD|\n");
	ret2 = ft_printf("|%0-5.3hhD|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0181");
	fprintf(printf_, "#0181");
	ret1 = fprintf(printf_, "|%0-5.3hD|\n");
	ret2 = ft_printf("|%0-5.3hD|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0182");
	fprintf(printf_, "#0182");
	ret1 = fprintf(printf_, "|%0-5.3lD|\n");
	ret2 = ft_printf("|%0-5.3lD|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0183");
	fprintf(printf_, "#0183");
	ret1 = fprintf(printf_, "|%0-5.3llD|\n");
	ret2 = ft_printf("|%0-5.3llD|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0184");
	fprintf(printf_, "#0184");
	ret1 = fprintf(printf_, "|%0-5.3jD|\n");
	ret2 = ft_printf("|%0-5.3jD|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0185");
	fprintf(printf_, "#0185");
	ret1 = fprintf(printf_, "|%0-5.3zD|\n");
	ret2 = ft_printf("|%0-5.3zD|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0186");
	fprintf(printf_, "#0186");
	ret1 = fprintf(printf_, "|%0-5.3hhO|\n");
	ret2 = ft_printf("|%0-5.3hhO|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0187");
	fprintf(printf_, "#0187");
	ret1 = fprintf(printf_, "|%0-5.3hO|\n");
	ret2 = ft_printf("|%0-5.3hO|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0188");
	fprintf(printf_, "#0188");
	ret1 = fprintf(printf_, "|%0-5.3lO|\n");
	ret2 = ft_printf("|%0-5.3lO|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0189");
	fprintf(printf_, "#0189");
	ret1 = fprintf(printf_, "|%0-5.3llO|\n");
	ret2 = ft_printf("|%0-5.3llO|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0190");
	fprintf(printf_, "#0190");
	ret1 = fprintf(printf_, "|%0-5.3jO|\n");
	ret2 = ft_printf("|%0-5.3jO|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0191");
	fprintf(printf_, "#0191");
	ret1 = fprintf(printf_, "|%0-5.3zO|\n");
	ret2 = ft_printf("|%0-5.3zO|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0192");
	fprintf(printf_, "#0192");
	ret1 = fprintf(printf_, "|%0-5.3hhU|\n");
	ret2 = ft_printf("|%0-5.3hhU|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0193");
	fprintf(printf_, "#0193");
	ret1 = fprintf(printf_, "|%0-5.3hU|\n");
	ret2 = ft_printf("|%0-5.3hU|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0194");
	fprintf(printf_, "#0194");
	ret1 = fprintf(printf_, "|%0-5.3lU|\n");
	ret2 = ft_printf("|%0-5.3lU|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0195");
	fprintf(printf_, "#0195");
	ret1 = fprintf(printf_, "|%0-5.3llU|\n");
	ret2 = ft_printf("|%0-5.3llU|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0196");
	fprintf(printf_, "#0196");
	ret1 = fprintf(printf_, "|%0-5.3jU|\n");
	ret2 = ft_printf("|%0-5.3jU|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0197");
	fprintf(printf_, "#0197");
	ret1 = fprintf(printf_, "|%0-5.3zU|\n");
	ret2 = ft_printf("|%0-5.3zU|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0198");
	fprintf(printf_, "#0198");
	ret1 = fprintf(printf_, "|% 0-5.3hhD|\n");
	ret2 = ft_printf("|% 0-5.3hhD|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0199");
	fprintf(printf_, "#0199");
	ret1 = fprintf(printf_, "|% 0-5.3hD|\n");
	ret2 = ft_printf("|% 0-5.3hD|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0200");
	fprintf(printf_, "#0200");
	ret1 = fprintf(printf_, "|% 0-5.3lD|\n");
	ret2 = ft_printf("|% 0-5.3lD|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0201");
	fprintf(printf_, "#0201");
	ret1 = fprintf(printf_, "|% 0-5.3llD|\n");
	ret2 = ft_printf("|% 0-5.3llD|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0202");
	fprintf(printf_, "#0202");
	ret1 = fprintf(printf_, "|% 0-5.3jD|\n");
	ret2 = ft_printf("|% 0-5.3jD|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0203");
	fprintf(printf_, "#0203");
	ret1 = fprintf(printf_, "|% 0-5.3zD|\n");
	ret2 = ft_printf("|% 0-5.3zD|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0204");
	fprintf(printf_, "#0204");
	ret1 = fprintf(printf_, "|% 0-5.3hhO|\n");
	ret2 = ft_printf("|% 0-5.3hhO|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0205");
	fprintf(printf_, "#0205");
	ret1 = fprintf(printf_, "|% 0-5.3hO|\n");
	ret2 = ft_printf("|% 0-5.3hO|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0206");
	fprintf(printf_, "#0206");
	ret1 = fprintf(printf_, "|% 0-5.3lO|\n");
	ret2 = ft_printf("|% 0-5.3lO|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0207");
	fprintf(printf_, "#0207");
	ret1 = fprintf(printf_, "|% 0-5.3llO|\n");
	ret2 = ft_printf("|% 0-5.3llO|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0208");
	fprintf(printf_, "#0208");
	ret1 = fprintf(printf_, "|% 0-5.3jO|\n");
	ret2 = ft_printf("|% 0-5.3jO|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0209");
	fprintf(printf_, "#0209");
	ret1 = fprintf(printf_, "|% 0-5.3zO|\n");
	ret2 = ft_printf("|% 0-5.3zO|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0210");
	fprintf(printf_, "#0210");
	ret1 = fprintf(printf_, "|% 0-5.3hhU|\n");
	ret2 = ft_printf("|% 0-5.3hhU|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0211");
	fprintf(printf_, "#0211");
	ret1 = fprintf(printf_, "|% 0-5.3hU|\n");
	ret2 = ft_printf("|% 0-5.3hU|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0212");
	fprintf(printf_, "#0212");
	ret1 = fprintf(printf_, "|% 0-5.3lU|\n");
	ret2 = ft_printf("|% 0-5.3lU|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0213");
	fprintf(printf_, "#0213");
	ret1 = fprintf(printf_, "|% 0-5.3llU|\n");
	ret2 = ft_printf("|% 0-5.3llU|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0214");
	fprintf(printf_, "#0214");
	ret1 = fprintf(printf_, "|% 0-5.3jU|\n");
	ret2 = ft_printf("|% 0-5.3jU|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0215");
	fprintf(printf_, "#0215");
	ret1 = fprintf(printf_, "|% 0-5.3zU|\n");
	ret2 = ft_printf("|% 0-5.3zU|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0216");
	fprintf(printf_, "#0216");
	ret1 = fprintf(printf_, "|%+-5.3hhD|\n");
	ret2 = ft_printf("|%+-5.3hhD|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0217");
	fprintf(printf_, "#0217");
	ret1 = fprintf(printf_, "|%+-5.3hD|\n");
	ret2 = ft_printf("|%+-5.3hD|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0218");
	fprintf(printf_, "#0218");
	ret1 = fprintf(printf_, "|%+-5.3lD|\n");
	ret2 = ft_printf("|%+-5.3lD|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0219");
	fprintf(printf_, "#0219");
	ret1 = fprintf(printf_, "|%+-5.3llD|\n");
	ret2 = ft_printf("|%+-5.3llD|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0220");
	fprintf(printf_, "#0220");
	ret1 = fprintf(printf_, "|%+-5.3jD|\n");
	ret2 = ft_printf("|%+-5.3jD|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0221");
	fprintf(printf_, "#0221");
	ret1 = fprintf(printf_, "|%+-5.3zD|\n");
	ret2 = ft_printf("|%+-5.3zD|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0222");
	fprintf(printf_, "#0222");
	ret1 = fprintf(printf_, "|%+-5.3hhO|\n");
	ret2 = ft_printf("|%+-5.3hhO|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0223");
	fprintf(printf_, "#0223");
	ret1 = fprintf(printf_, "|%+-5.3hO|\n");
	ret2 = ft_printf("|%+-5.3hO|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0224");
	fprintf(printf_, "#0224");
	ret1 = fprintf(printf_, "|%+-5.3lO|\n");
	ret2 = ft_printf("|%+-5.3lO|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0225");
	fprintf(printf_, "#0225");
	ret1 = fprintf(printf_, "|%+-5.3llO|\n");
	ret2 = ft_printf("|%+-5.3llO|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0226");
	fprintf(printf_, "#0226");
	ret1 = fprintf(printf_, "|%+-5.3jO|\n");
	ret2 = ft_printf("|%+-5.3jO|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0227");
	fprintf(printf_, "#0227");
	ret1 = fprintf(printf_, "|%+-5.3zO|\n");
	ret2 = ft_printf("|%+-5.3zO|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0228");
	fprintf(printf_, "#0228");
	ret1 = fprintf(printf_, "|%+-5.3hhU|\n");
	ret2 = ft_printf("|%+-5.3hhU|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0229");
	fprintf(printf_, "#0229");
	ret1 = fprintf(printf_, "|%+-5.3hU|\n");
	ret2 = ft_printf("|%+-5.3hU|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0230");
	fprintf(printf_, "#0230");
	ret1 = fprintf(printf_, "|%+-5.3lU|\n");
	ret2 = ft_printf("|%+-5.3lU|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0231");
	fprintf(printf_, "#0231");
	ret1 = fprintf(printf_, "|%+-5.3llU|\n");
	ret2 = ft_printf("|%+-5.3llU|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0232");
	fprintf(printf_, "#0232");
	ret1 = fprintf(printf_, "|%+-5.3jU|\n");
	ret2 = ft_printf("|%+-5.3jU|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0233");
	fprintf(printf_, "#0233");
	ret1 = fprintf(printf_, "|%+-5.3zU|\n");
	ret2 = ft_printf("|%+-5.3zU|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0234");
	fprintf(printf_, "#0234");
	ret1 = fprintf(printf_, "|% +-5.3hhD|\n");
	ret2 = ft_printf("|% +-5.3hhD|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0235");
	fprintf(printf_, "#0235");
	ret1 = fprintf(printf_, "|% +-5.3hD|\n");
	ret2 = ft_printf("|% +-5.3hD|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0236");
	fprintf(printf_, "#0236");
	ret1 = fprintf(printf_, "|% +-5.3lD|\n");
	ret2 = ft_printf("|% +-5.3lD|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0237");
	fprintf(printf_, "#0237");
	ret1 = fprintf(printf_, "|% +-5.3llD|\n");
	ret2 = ft_printf("|% +-5.3llD|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0238");
	fprintf(printf_, "#0238");
	ret1 = fprintf(printf_, "|% +-5.3jD|\n");
	ret2 = ft_printf("|% +-5.3jD|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0239");
	fprintf(printf_, "#0239");
	ret1 = fprintf(printf_, "|% +-5.3zD|\n");
	ret2 = ft_printf("|% +-5.3zD|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0240");
	fprintf(printf_, "#0240");
	ret1 = fprintf(printf_, "|% +-5.3hhO|\n");
	ret2 = ft_printf("|% +-5.3hhO|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0241");
	fprintf(printf_, "#0241");
	ret1 = fprintf(printf_, "|% +-5.3hO|\n");
	ret2 = ft_printf("|% +-5.3hO|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0242");
	fprintf(printf_, "#0242");
	ret1 = fprintf(printf_, "|% +-5.3lO|\n");
	ret2 = ft_printf("|% +-5.3lO|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0243");
	fprintf(printf_, "#0243");
	ret1 = fprintf(printf_, "|% +-5.3llO|\n");
	ret2 = ft_printf("|% +-5.3llO|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0244");
	fprintf(printf_, "#0244");
	ret1 = fprintf(printf_, "|% +-5.3jO|\n");
	ret2 = ft_printf("|% +-5.3jO|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0245");
	fprintf(printf_, "#0245");
	ret1 = fprintf(printf_, "|% +-5.3zO|\n");
	ret2 = ft_printf("|% +-5.3zO|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0246");
	fprintf(printf_, "#0246");
	ret1 = fprintf(printf_, "|% +-5.3hhU|\n");
	ret2 = ft_printf("|% +-5.3hhU|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0247");
	fprintf(printf_, "#0247");
	ret1 = fprintf(printf_, "|% +-5.3hU|\n");
	ret2 = ft_printf("|% +-5.3hU|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0248");
	fprintf(printf_, "#0248");
	ret1 = fprintf(printf_, "|% +-5.3lU|\n");
	ret2 = ft_printf("|% +-5.3lU|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0249");
	fprintf(printf_, "#0249");
	ret1 = fprintf(printf_, "|% +-5.3llU|\n");
	ret2 = ft_printf("|% +-5.3llU|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0250");
	fprintf(printf_, "#0250");
	ret1 = fprintf(printf_, "|% +-5.3jU|\n");
	ret2 = ft_printf("|% +-5.3jU|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0251");
	fprintf(printf_, "#0251");
	ret1 = fprintf(printf_, "|% +-5.3zU|\n");
	ret2 = ft_printf("|% +-5.3zU|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0252");
	fprintf(printf_, "#0252");
	ret1 = fprintf(printf_, "|%0+-5.3hhD|\n");
	ret2 = ft_printf("|%0+-5.3hhD|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0253");
	fprintf(printf_, "#0253");
	ret1 = fprintf(printf_, "|%0+-5.3hD|\n");
	ret2 = ft_printf("|%0+-5.3hD|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0254");
	fprintf(printf_, "#0254");
	ret1 = fprintf(printf_, "|%0+-5.3lD|\n");
	ret2 = ft_printf("|%0+-5.3lD|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0255");
	fprintf(printf_, "#0255");
	ret1 = fprintf(printf_, "|%0+-5.3llD|\n");
	ret2 = ft_printf("|%0+-5.3llD|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0256");
	fprintf(printf_, "#0256");
	ret1 = fprintf(printf_, "|%0+-5.3jD|\n");
	ret2 = ft_printf("|%0+-5.3jD|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0257");
	fprintf(printf_, "#0257");
	ret1 = fprintf(printf_, "|%0+-5.3zD|\n");
	ret2 = ft_printf("|%0+-5.3zD|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0258");
	fprintf(printf_, "#0258");
	ret1 = fprintf(printf_, "|%0+-5.3hhO|\n");
	ret2 = ft_printf("|%0+-5.3hhO|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0259");
	fprintf(printf_, "#0259");
	ret1 = fprintf(printf_, "|%0+-5.3hO|\n");
	ret2 = ft_printf("|%0+-5.3hO|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0260");
	fprintf(printf_, "#0260");
	ret1 = fprintf(printf_, "|%0+-5.3lO|\n");
	ret2 = ft_printf("|%0+-5.3lO|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0261");
	fprintf(printf_, "#0261");
	ret1 = fprintf(printf_, "|%0+-5.3llO|\n");
	ret2 = ft_printf("|%0+-5.3llO|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0262");
	fprintf(printf_, "#0262");
	ret1 = fprintf(printf_, "|%0+-5.3jO|\n");
	ret2 = ft_printf("|%0+-5.3jO|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0263");
	fprintf(printf_, "#0263");
	ret1 = fprintf(printf_, "|%0+-5.3zO|\n");
	ret2 = ft_printf("|%0+-5.3zO|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0264");
	fprintf(printf_, "#0264");
	ret1 = fprintf(printf_, "|%0+-5.3hhU|\n");
	ret2 = ft_printf("|%0+-5.3hhU|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0265");
	fprintf(printf_, "#0265");
	ret1 = fprintf(printf_, "|%0+-5.3hU|\n");
	ret2 = ft_printf("|%0+-5.3hU|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0266");
	fprintf(printf_, "#0266");
	ret1 = fprintf(printf_, "|%0+-5.3lU|\n");
	ret2 = ft_printf("|%0+-5.3lU|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0267");
	fprintf(printf_, "#0267");
	ret1 = fprintf(printf_, "|%0+-5.3llU|\n");
	ret2 = ft_printf("|%0+-5.3llU|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0268");
	fprintf(printf_, "#0268");
	ret1 = fprintf(printf_, "|%0+-5.3jU|\n");
	ret2 = ft_printf("|%0+-5.3jU|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0269");
	fprintf(printf_, "#0269");
	ret1 = fprintf(printf_, "|%0+-5.3zU|\n");
	ret2 = ft_printf("|%0+-5.3zU|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0270");
	fprintf(printf_, "#0270");
	ret1 = fprintf(printf_, "|% 0+-5.3hhD|\n");
	ret2 = ft_printf("|% 0+-5.3hhD|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0271");
	fprintf(printf_, "#0271");
	ret1 = fprintf(printf_, "|% 0+-5.3hD|\n");
	ret2 = ft_printf("|% 0+-5.3hD|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0272");
	fprintf(printf_, "#0272");
	ret1 = fprintf(printf_, "|% 0+-5.3lD|\n");
	ret2 = ft_printf("|% 0+-5.3lD|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0273");
	fprintf(printf_, "#0273");
	ret1 = fprintf(printf_, "|% 0+-5.3llD|\n");
	ret2 = ft_printf("|% 0+-5.3llD|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0274");
	fprintf(printf_, "#0274");
	ret1 = fprintf(printf_, "|% 0+-5.3jD|\n");
	ret2 = ft_printf("|% 0+-5.3jD|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0275");
	fprintf(printf_, "#0275");
	ret1 = fprintf(printf_, "|% 0+-5.3zD|\n");
	ret2 = ft_printf("|% 0+-5.3zD|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0276");
	fprintf(printf_, "#0276");
	ret1 = fprintf(printf_, "|% 0+-5.3hhO|\n");
	ret2 = ft_printf("|% 0+-5.3hhO|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0277");
	fprintf(printf_, "#0277");
	ret1 = fprintf(printf_, "|% 0+-5.3hO|\n");
	ret2 = ft_printf("|% 0+-5.3hO|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0278");
	fprintf(printf_, "#0278");
	ret1 = fprintf(printf_, "|% 0+-5.3lO|\n");
	ret2 = ft_printf("|% 0+-5.3lO|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0279");
	fprintf(printf_, "#0279");
	ret1 = fprintf(printf_, "|% 0+-5.3llO|\n");
	ret2 = ft_printf("|% 0+-5.3llO|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0280");
	fprintf(printf_, "#0280");
	ret1 = fprintf(printf_, "|% 0+-5.3jO|\n");
	ret2 = ft_printf("|% 0+-5.3jO|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0281");
	fprintf(printf_, "#0281");
	ret1 = fprintf(printf_, "|% 0+-5.3zO|\n");
	ret2 = ft_printf("|% 0+-5.3zO|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0282");
	fprintf(printf_, "#0282");
	ret1 = fprintf(printf_, "|% 0+-5.3hhU|\n");
	ret2 = ft_printf("|% 0+-5.3hhU|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0283");
	fprintf(printf_, "#0283");
	ret1 = fprintf(printf_, "|% 0+-5.3hU|\n");
	ret2 = ft_printf("|% 0+-5.3hU|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0284");
	fprintf(printf_, "#0284");
	ret1 = fprintf(printf_, "|% 0+-5.3lU|\n");
	ret2 = ft_printf("|% 0+-5.3lU|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0285");
	fprintf(printf_, "#0285");
	ret1 = fprintf(printf_, "|% 0+-5.3llU|\n");
	ret2 = ft_printf("|% 0+-5.3llU|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0286");
	fprintf(printf_, "#0286");
	ret1 = fprintf(printf_, "|% 0+-5.3jU|\n");
	ret2 = ft_printf("|% 0+-5.3jU|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0287");
	fprintf(printf_, "#0287");
	ret1 = fprintf(printf_, "|% 0+-5.3zU|\n");
	ret2 = ft_printf("|% 0+-5.3zU|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0288");
	fprintf(printf_, "#0288");
	ret1 = fprintf(printf_, "|%#5.3hhD|\n");
	ret2 = ft_printf("|%#5.3hhD|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0289");
	fprintf(printf_, "#0289");
	ret1 = fprintf(printf_, "|%#5.3hD|\n");
	ret2 = ft_printf("|%#5.3hD|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0290");
	fprintf(printf_, "#0290");
	ret1 = fprintf(printf_, "|%#5.3lD|\n");
	ret2 = ft_printf("|%#5.3lD|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0291");
	fprintf(printf_, "#0291");
	ret1 = fprintf(printf_, "|%#5.3llD|\n");
	ret2 = ft_printf("|%#5.3llD|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0292");
	fprintf(printf_, "#0292");
	ret1 = fprintf(printf_, "|%#5.3jD|\n");
	ret2 = ft_printf("|%#5.3jD|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0293");
	fprintf(printf_, "#0293");
	ret1 = fprintf(printf_, "|%#5.3zD|\n");
	ret2 = ft_printf("|%#5.3zD|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0294");
	fprintf(printf_, "#0294");
	ret1 = fprintf(printf_, "|%#5.3hhO|\n");
	ret2 = ft_printf("|%#5.3hhO|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0295");
	fprintf(printf_, "#0295");
	ret1 = fprintf(printf_, "|%#5.3hO|\n");
	ret2 = ft_printf("|%#5.3hO|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0296");
	fprintf(printf_, "#0296");
	ret1 = fprintf(printf_, "|%#5.3lO|\n");
	ret2 = ft_printf("|%#5.3lO|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0297");
	fprintf(printf_, "#0297");
	ret1 = fprintf(printf_, "|%#5.3llO|\n");
	ret2 = ft_printf("|%#5.3llO|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0298");
	fprintf(printf_, "#0298");
	ret1 = fprintf(printf_, "|%#5.3jO|\n");
	ret2 = ft_printf("|%#5.3jO|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0299");
	fprintf(printf_, "#0299");
	ret1 = fprintf(printf_, "|%#5.3zO|\n");
	ret2 = ft_printf("|%#5.3zO|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0300");
	fprintf(printf_, "#0300");
	ret1 = fprintf(printf_, "|%#5.3hhU|\n");
	ret2 = ft_printf("|%#5.3hhU|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0301");
	fprintf(printf_, "#0301");
	ret1 = fprintf(printf_, "|%#5.3hU|\n");
	ret2 = ft_printf("|%#5.3hU|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0302");
	fprintf(printf_, "#0302");
	ret1 = fprintf(printf_, "|%#5.3lU|\n");
	ret2 = ft_printf("|%#5.3lU|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0303");
	fprintf(printf_, "#0303");
	ret1 = fprintf(printf_, "|%#5.3llU|\n");
	ret2 = ft_printf("|%#5.3llU|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0304");
	fprintf(printf_, "#0304");
	ret1 = fprintf(printf_, "|%#5.3jU|\n");
	ret2 = ft_printf("|%#5.3jU|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0305");
	fprintf(printf_, "#0305");
	ret1 = fprintf(printf_, "|%#5.3zU|\n");
	ret2 = ft_printf("|%#5.3zU|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0306");
	fprintf(printf_, "#0306");
	ret1 = fprintf(printf_, "|% #5.3hhD|\n");
	ret2 = ft_printf("|% #5.3hhD|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0307");
	fprintf(printf_, "#0307");
	ret1 = fprintf(printf_, "|% #5.3hD|\n");
	ret2 = ft_printf("|% #5.3hD|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0308");
	fprintf(printf_, "#0308");
	ret1 = fprintf(printf_, "|% #5.3lD|\n");
	ret2 = ft_printf("|% #5.3lD|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0309");
	fprintf(printf_, "#0309");
	ret1 = fprintf(printf_, "|% #5.3llD|\n");
	ret2 = ft_printf("|% #5.3llD|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0310");
	fprintf(printf_, "#0310");
	ret1 = fprintf(printf_, "|% #5.3jD|\n");
	ret2 = ft_printf("|% #5.3jD|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0311");
	fprintf(printf_, "#0311");
	ret1 = fprintf(printf_, "|% #5.3zD|\n");
	ret2 = ft_printf("|% #5.3zD|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0312");
	fprintf(printf_, "#0312");
	ret1 = fprintf(printf_, "|% #5.3hhO|\n");
	ret2 = ft_printf("|% #5.3hhO|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0313");
	fprintf(printf_, "#0313");
	ret1 = fprintf(printf_, "|% #5.3hO|\n");
	ret2 = ft_printf("|% #5.3hO|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0314");
	fprintf(printf_, "#0314");
	ret1 = fprintf(printf_, "|% #5.3lO|\n");
	ret2 = ft_printf("|% #5.3lO|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0315");
	fprintf(printf_, "#0315");
	ret1 = fprintf(printf_, "|% #5.3llO|\n");
	ret2 = ft_printf("|% #5.3llO|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0316");
	fprintf(printf_, "#0316");
	ret1 = fprintf(printf_, "|% #5.3jO|\n");
	ret2 = ft_printf("|% #5.3jO|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0317");
	fprintf(printf_, "#0317");
	ret1 = fprintf(printf_, "|% #5.3zO|\n");
	ret2 = ft_printf("|% #5.3zO|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0318");
	fprintf(printf_, "#0318");
	ret1 = fprintf(printf_, "|% #5.3hhU|\n");
	ret2 = ft_printf("|% #5.3hhU|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0319");
	fprintf(printf_, "#0319");
	ret1 = fprintf(printf_, "|% #5.3hU|\n");
	ret2 = ft_printf("|% #5.3hU|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0320");
	fprintf(printf_, "#0320");
	ret1 = fprintf(printf_, "|% #5.3lU|\n");
	ret2 = ft_printf("|% #5.3lU|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0321");
	fprintf(printf_, "#0321");
	ret1 = fprintf(printf_, "|% #5.3llU|\n");
	ret2 = ft_printf("|% #5.3llU|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0322");
	fprintf(printf_, "#0322");
	ret1 = fprintf(printf_, "|% #5.3jU|\n");
	ret2 = ft_printf("|% #5.3jU|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0323");
	fprintf(printf_, "#0323");
	ret1 = fprintf(printf_, "|% #5.3zU|\n");
	ret2 = ft_printf("|% #5.3zU|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0324");
	fprintf(printf_, "#0324");
	ret1 = fprintf(printf_, "|%0#5.3hhD|\n");
	ret2 = ft_printf("|%0#5.3hhD|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0325");
	fprintf(printf_, "#0325");
	ret1 = fprintf(printf_, "|%0#5.3hD|\n");
	ret2 = ft_printf("|%0#5.3hD|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0326");
	fprintf(printf_, "#0326");
	ret1 = fprintf(printf_, "|%0#5.3lD|\n");
	ret2 = ft_printf("|%0#5.3lD|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0327");
	fprintf(printf_, "#0327");
	ret1 = fprintf(printf_, "|%0#5.3llD|\n");
	ret2 = ft_printf("|%0#5.3llD|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0328");
	fprintf(printf_, "#0328");
	ret1 = fprintf(printf_, "|%0#5.3jD|\n");
	ret2 = ft_printf("|%0#5.3jD|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0329");
	fprintf(printf_, "#0329");
	ret1 = fprintf(printf_, "|%0#5.3zD|\n");
	ret2 = ft_printf("|%0#5.3zD|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0330");
	fprintf(printf_, "#0330");
	ret1 = fprintf(printf_, "|%0#5.3hhO|\n");
	ret2 = ft_printf("|%0#5.3hhO|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0331");
	fprintf(printf_, "#0331");
	ret1 = fprintf(printf_, "|%0#5.3hO|\n");
	ret2 = ft_printf("|%0#5.3hO|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0332");
	fprintf(printf_, "#0332");
	ret1 = fprintf(printf_, "|%0#5.3lO|\n");
	ret2 = ft_printf("|%0#5.3lO|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0333");
	fprintf(printf_, "#0333");
	ret1 = fprintf(printf_, "|%0#5.3llO|\n");
	ret2 = ft_printf("|%0#5.3llO|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0334");
	fprintf(printf_, "#0334");
	ret1 = fprintf(printf_, "|%0#5.3jO|\n");
	ret2 = ft_printf("|%0#5.3jO|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0335");
	fprintf(printf_, "#0335");
	ret1 = fprintf(printf_, "|%0#5.3zO|\n");
	ret2 = ft_printf("|%0#5.3zO|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0336");
	fprintf(printf_, "#0336");
	ret1 = fprintf(printf_, "|%0#5.3hhU|\n");
	ret2 = ft_printf("|%0#5.3hhU|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0337");
	fprintf(printf_, "#0337");
	ret1 = fprintf(printf_, "|%0#5.3hU|\n");
	ret2 = ft_printf("|%0#5.3hU|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0338");
	fprintf(printf_, "#0338");
	ret1 = fprintf(printf_, "|%0#5.3lU|\n");
	ret2 = ft_printf("|%0#5.3lU|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0339");
	fprintf(printf_, "#0339");
	ret1 = fprintf(printf_, "|%0#5.3llU|\n");
	ret2 = ft_printf("|%0#5.3llU|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0340");
	fprintf(printf_, "#0340");
	ret1 = fprintf(printf_, "|%0#5.3jU|\n");
	ret2 = ft_printf("|%0#5.3jU|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0341");
	fprintf(printf_, "#0341");
	ret1 = fprintf(printf_, "|%0#5.3zU|\n");
	ret2 = ft_printf("|%0#5.3zU|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0342");
	fprintf(printf_, "#0342");
	ret1 = fprintf(printf_, "|% 0#5.3hhD|\n");
	ret2 = ft_printf("|% 0#5.3hhD|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0343");
	fprintf(printf_, "#0343");
	ret1 = fprintf(printf_, "|% 0#5.3hD|\n");
	ret2 = ft_printf("|% 0#5.3hD|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0344");
	fprintf(printf_, "#0344");
	ret1 = fprintf(printf_, "|% 0#5.3lD|\n");
	ret2 = ft_printf("|% 0#5.3lD|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0345");
	fprintf(printf_, "#0345");
	ret1 = fprintf(printf_, "|% 0#5.3llD|\n");
	ret2 = ft_printf("|% 0#5.3llD|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0346");
	fprintf(printf_, "#0346");
	ret1 = fprintf(printf_, "|% 0#5.3jD|\n");
	ret2 = ft_printf("|% 0#5.3jD|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0347");
	fprintf(printf_, "#0347");
	ret1 = fprintf(printf_, "|% 0#5.3zD|\n");
	ret2 = ft_printf("|% 0#5.3zD|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0348");
	fprintf(printf_, "#0348");
	ret1 = fprintf(printf_, "|% 0#5.3hhO|\n");
	ret2 = ft_printf("|% 0#5.3hhO|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0349");
	fprintf(printf_, "#0349");
	ret1 = fprintf(printf_, "|% 0#5.3hO|\n");
	ret2 = ft_printf("|% 0#5.3hO|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0350");
	fprintf(printf_, "#0350");
	ret1 = fprintf(printf_, "|% 0#5.3lO|\n");
	ret2 = ft_printf("|% 0#5.3lO|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0351");
	fprintf(printf_, "#0351");
	ret1 = fprintf(printf_, "|% 0#5.3llO|\n");
	ret2 = ft_printf("|% 0#5.3llO|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0352");
	fprintf(printf_, "#0352");
	ret1 = fprintf(printf_, "|% 0#5.3jO|\n");
	ret2 = ft_printf("|% 0#5.3jO|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0353");
	fprintf(printf_, "#0353");
	ret1 = fprintf(printf_, "|% 0#5.3zO|\n");
	ret2 = ft_printf("|% 0#5.3zO|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0354");
	fprintf(printf_, "#0354");
	ret1 = fprintf(printf_, "|% 0#5.3hhU|\n");
	ret2 = ft_printf("|% 0#5.3hhU|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0355");
	fprintf(printf_, "#0355");
	ret1 = fprintf(printf_, "|% 0#5.3hU|\n");
	ret2 = ft_printf("|% 0#5.3hU|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0356");
	fprintf(printf_, "#0356");
	ret1 = fprintf(printf_, "|% 0#5.3lU|\n");
	ret2 = ft_printf("|% 0#5.3lU|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0357");
	fprintf(printf_, "#0357");
	ret1 = fprintf(printf_, "|% 0#5.3llU|\n");
	ret2 = ft_printf("|% 0#5.3llU|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0358");
	fprintf(printf_, "#0358");
	ret1 = fprintf(printf_, "|% 0#5.3jU|\n");
	ret2 = ft_printf("|% 0#5.3jU|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0359");
	fprintf(printf_, "#0359");
	ret1 = fprintf(printf_, "|% 0#5.3zU|\n");
	ret2 = ft_printf("|% 0#5.3zU|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0360");
	fprintf(printf_, "#0360");
	ret1 = fprintf(printf_, "|%+#5.3hhD|\n");
	ret2 = ft_printf("|%+#5.3hhD|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0361");
	fprintf(printf_, "#0361");
	ret1 = fprintf(printf_, "|%+#5.3hD|\n");
	ret2 = ft_printf("|%+#5.3hD|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0362");
	fprintf(printf_, "#0362");
	ret1 = fprintf(printf_, "|%+#5.3lD|\n");
	ret2 = ft_printf("|%+#5.3lD|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0363");
	fprintf(printf_, "#0363");
	ret1 = fprintf(printf_, "|%+#5.3llD|\n");
	ret2 = ft_printf("|%+#5.3llD|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0364");
	fprintf(printf_, "#0364");
	ret1 = fprintf(printf_, "|%+#5.3jD|\n");
	ret2 = ft_printf("|%+#5.3jD|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0365");
	fprintf(printf_, "#0365");
	ret1 = fprintf(printf_, "|%+#5.3zD|\n");
	ret2 = ft_printf("|%+#5.3zD|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0366");
	fprintf(printf_, "#0366");
	ret1 = fprintf(printf_, "|%+#5.3hhO|\n");
	ret2 = ft_printf("|%+#5.3hhO|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0367");
	fprintf(printf_, "#0367");
	ret1 = fprintf(printf_, "|%+#5.3hO|\n");
	ret2 = ft_printf("|%+#5.3hO|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0368");
	fprintf(printf_, "#0368");
	ret1 = fprintf(printf_, "|%+#5.3lO|\n");
	ret2 = ft_printf("|%+#5.3lO|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0369");
	fprintf(printf_, "#0369");
	ret1 = fprintf(printf_, "|%+#5.3llO|\n");
	ret2 = ft_printf("|%+#5.3llO|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0370");
	fprintf(printf_, "#0370");
	ret1 = fprintf(printf_, "|%+#5.3jO|\n");
	ret2 = ft_printf("|%+#5.3jO|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0371");
	fprintf(printf_, "#0371");
	ret1 = fprintf(printf_, "|%+#5.3zO|\n");
	ret2 = ft_printf("|%+#5.3zO|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0372");
	fprintf(printf_, "#0372");
	ret1 = fprintf(printf_, "|%+#5.3hhU|\n");
	ret2 = ft_printf("|%+#5.3hhU|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0373");
	fprintf(printf_, "#0373");
	ret1 = fprintf(printf_, "|%+#5.3hU|\n");
	ret2 = ft_printf("|%+#5.3hU|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0374");
	fprintf(printf_, "#0374");
	ret1 = fprintf(printf_, "|%+#5.3lU|\n");
	ret2 = ft_printf("|%+#5.3lU|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0375");
	fprintf(printf_, "#0375");
	ret1 = fprintf(printf_, "|%+#5.3llU|\n");
	ret2 = ft_printf("|%+#5.3llU|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0376");
	fprintf(printf_, "#0376");
	ret1 = fprintf(printf_, "|%+#5.3jU|\n");
	ret2 = ft_printf("|%+#5.3jU|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0377");
	fprintf(printf_, "#0377");
	ret1 = fprintf(printf_, "|%+#5.3zU|\n");
	ret2 = ft_printf("|%+#5.3zU|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0378");
	fprintf(printf_, "#0378");
	ret1 = fprintf(printf_, "|% +#5.3hhD|\n");
	ret2 = ft_printf("|% +#5.3hhD|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0379");
	fprintf(printf_, "#0379");
	ret1 = fprintf(printf_, "|% +#5.3hD|\n");
	ret2 = ft_printf("|% +#5.3hD|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0380");
	fprintf(printf_, "#0380");
	ret1 = fprintf(printf_, "|% +#5.3lD|\n");
	ret2 = ft_printf("|% +#5.3lD|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0381");
	fprintf(printf_, "#0381");
	ret1 = fprintf(printf_, "|% +#5.3llD|\n");
	ret2 = ft_printf("|% +#5.3llD|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0382");
	fprintf(printf_, "#0382");
	ret1 = fprintf(printf_, "|% +#5.3jD|\n");
	ret2 = ft_printf("|% +#5.3jD|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0383");
	fprintf(printf_, "#0383");
	ret1 = fprintf(printf_, "|% +#5.3zD|\n");
	ret2 = ft_printf("|% +#5.3zD|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0384");
	fprintf(printf_, "#0384");
	ret1 = fprintf(printf_, "|% +#5.3hhO|\n");
	ret2 = ft_printf("|% +#5.3hhO|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0385");
	fprintf(printf_, "#0385");
	ret1 = fprintf(printf_, "|% +#5.3hO|\n");
	ret2 = ft_printf("|% +#5.3hO|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0386");
	fprintf(printf_, "#0386");
	ret1 = fprintf(printf_, "|% +#5.3lO|\n");
	ret2 = ft_printf("|% +#5.3lO|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0387");
	fprintf(printf_, "#0387");
	ret1 = fprintf(printf_, "|% +#5.3llO|\n");
	ret2 = ft_printf("|% +#5.3llO|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0388");
	fprintf(printf_, "#0388");
	ret1 = fprintf(printf_, "|% +#5.3jO|\n");
	ret2 = ft_printf("|% +#5.3jO|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0389");
	fprintf(printf_, "#0389");
	ret1 = fprintf(printf_, "|% +#5.3zO|\n");
	ret2 = ft_printf("|% +#5.3zO|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0390");
	fprintf(printf_, "#0390");
	ret1 = fprintf(printf_, "|% +#5.3hhU|\n");
	ret2 = ft_printf("|% +#5.3hhU|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0391");
	fprintf(printf_, "#0391");
	ret1 = fprintf(printf_, "|% +#5.3hU|\n");
	ret2 = ft_printf("|% +#5.3hU|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0392");
	fprintf(printf_, "#0392");
	ret1 = fprintf(printf_, "|% +#5.3lU|\n");
	ret2 = ft_printf("|% +#5.3lU|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0393");
	fprintf(printf_, "#0393");
	ret1 = fprintf(printf_, "|% +#5.3llU|\n");
	ret2 = ft_printf("|% +#5.3llU|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0394");
	fprintf(printf_, "#0394");
	ret1 = fprintf(printf_, "|% +#5.3jU|\n");
	ret2 = ft_printf("|% +#5.3jU|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0395");
	fprintf(printf_, "#0395");
	ret1 = fprintf(printf_, "|% +#5.3zU|\n");
	ret2 = ft_printf("|% +#5.3zU|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0396");
	fprintf(printf_, "#0396");
	ret1 = fprintf(printf_, "|%0+#5.3hhD|\n");
	ret2 = ft_printf("|%0+#5.3hhD|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0397");
	fprintf(printf_, "#0397");
	ret1 = fprintf(printf_, "|%0+#5.3hD|\n");
	ret2 = ft_printf("|%0+#5.3hD|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0398");
	fprintf(printf_, "#0398");
	ret1 = fprintf(printf_, "|%0+#5.3lD|\n");
	ret2 = ft_printf("|%0+#5.3lD|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0399");
	fprintf(printf_, "#0399");
	ret1 = fprintf(printf_, "|%0+#5.3llD|\n");
	ret2 = ft_printf("|%0+#5.3llD|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0400");
	fprintf(printf_, "#0400");
	ret1 = fprintf(printf_, "|%0+#5.3jD|\n");
	ret2 = ft_printf("|%0+#5.3jD|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0401");
	fprintf(printf_, "#0401");
	ret1 = fprintf(printf_, "|%0+#5.3zD|\n");
	ret2 = ft_printf("|%0+#5.3zD|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0402");
	fprintf(printf_, "#0402");
	ret1 = fprintf(printf_, "|%0+#5.3hhO|\n");
	ret2 = ft_printf("|%0+#5.3hhO|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0403");
	fprintf(printf_, "#0403");
	ret1 = fprintf(printf_, "|%0+#5.3hO|\n");
	ret2 = ft_printf("|%0+#5.3hO|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0404");
	fprintf(printf_, "#0404");
	ret1 = fprintf(printf_, "|%0+#5.3lO|\n");
	ret2 = ft_printf("|%0+#5.3lO|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0405");
	fprintf(printf_, "#0405");
	ret1 = fprintf(printf_, "|%0+#5.3llO|\n");
	ret2 = ft_printf("|%0+#5.3llO|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0406");
	fprintf(printf_, "#0406");
	ret1 = fprintf(printf_, "|%0+#5.3jO|\n");
	ret2 = ft_printf("|%0+#5.3jO|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0407");
	fprintf(printf_, "#0407");
	ret1 = fprintf(printf_, "|%0+#5.3zO|\n");
	ret2 = ft_printf("|%0+#5.3zO|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0408");
	fprintf(printf_, "#0408");
	ret1 = fprintf(printf_, "|%0+#5.3hhU|\n");
	ret2 = ft_printf("|%0+#5.3hhU|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0409");
	fprintf(printf_, "#0409");
	ret1 = fprintf(printf_, "|%0+#5.3hU|\n");
	ret2 = ft_printf("|%0+#5.3hU|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0410");
	fprintf(printf_, "#0410");
	ret1 = fprintf(printf_, "|%0+#5.3lU|\n");
	ret2 = ft_printf("|%0+#5.3lU|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0411");
	fprintf(printf_, "#0411");
	ret1 = fprintf(printf_, "|%0+#5.3llU|\n");
	ret2 = ft_printf("|%0+#5.3llU|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0412");
	fprintf(printf_, "#0412");
	ret1 = fprintf(printf_, "|%0+#5.3jU|\n");
	ret2 = ft_printf("|%0+#5.3jU|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0413");
	fprintf(printf_, "#0413");
	ret1 = fprintf(printf_, "|%0+#5.3zU|\n");
	ret2 = ft_printf("|%0+#5.3zU|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0414");
	fprintf(printf_, "#0414");
	ret1 = fprintf(printf_, "|% 0+#5.3hhD|\n");
	ret2 = ft_printf("|% 0+#5.3hhD|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0415");
	fprintf(printf_, "#0415");
	ret1 = fprintf(printf_, "|% 0+#5.3hD|\n");
	ret2 = ft_printf("|% 0+#5.3hD|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0416");
	fprintf(printf_, "#0416");
	ret1 = fprintf(printf_, "|% 0+#5.3lD|\n");
	ret2 = ft_printf("|% 0+#5.3lD|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0417");
	fprintf(printf_, "#0417");
	ret1 = fprintf(printf_, "|% 0+#5.3llD|\n");
	ret2 = ft_printf("|% 0+#5.3llD|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0418");
	fprintf(printf_, "#0418");
	ret1 = fprintf(printf_, "|% 0+#5.3jD|\n");
	ret2 = ft_printf("|% 0+#5.3jD|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0419");
	fprintf(printf_, "#0419");
	ret1 = fprintf(printf_, "|% 0+#5.3zD|\n");
	ret2 = ft_printf("|% 0+#5.3zD|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0420");
	fprintf(printf_, "#0420");
	ret1 = fprintf(printf_, "|% 0+#5.3hhO|\n");
	ret2 = ft_printf("|% 0+#5.3hhO|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0421");
	fprintf(printf_, "#0421");
	ret1 = fprintf(printf_, "|% 0+#5.3hO|\n");
	ret2 = ft_printf("|% 0+#5.3hO|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0422");
	fprintf(printf_, "#0422");
	ret1 = fprintf(printf_, "|% 0+#5.3lO|\n");
	ret2 = ft_printf("|% 0+#5.3lO|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0423");
	fprintf(printf_, "#0423");
	ret1 = fprintf(printf_, "|% 0+#5.3llO|\n");
	ret2 = ft_printf("|% 0+#5.3llO|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0424");
	fprintf(printf_, "#0424");
	ret1 = fprintf(printf_, "|% 0+#5.3jO|\n");
	ret2 = ft_printf("|% 0+#5.3jO|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0425");
	fprintf(printf_, "#0425");
	ret1 = fprintf(printf_, "|% 0+#5.3zO|\n");
	ret2 = ft_printf("|% 0+#5.3zO|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0426");
	fprintf(printf_, "#0426");
	ret1 = fprintf(printf_, "|% 0+#5.3hhU|\n");
	ret2 = ft_printf("|% 0+#5.3hhU|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0427");
	fprintf(printf_, "#0427");
	ret1 = fprintf(printf_, "|% 0+#5.3hU|\n");
	ret2 = ft_printf("|% 0+#5.3hU|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0428");
	fprintf(printf_, "#0428");
	ret1 = fprintf(printf_, "|% 0+#5.3lU|\n");
	ret2 = ft_printf("|% 0+#5.3lU|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0429");
	fprintf(printf_, "#0429");
	ret1 = fprintf(printf_, "|% 0+#5.3llU|\n");
	ret2 = ft_printf("|% 0+#5.3llU|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0430");
	fprintf(printf_, "#0430");
	ret1 = fprintf(printf_, "|% 0+#5.3jU|\n");
	ret2 = ft_printf("|% 0+#5.3jU|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0431");
	fprintf(printf_, "#0431");
	ret1 = fprintf(printf_, "|% 0+#5.3zU|\n");
	ret2 = ft_printf("|% 0+#5.3zU|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0432");
	fprintf(printf_, "#0432");
	ret1 = fprintf(printf_, "|%-#5.3hhD|\n");
	ret2 = ft_printf("|%-#5.3hhD|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0433");
	fprintf(printf_, "#0433");
	ret1 = fprintf(printf_, "|%-#5.3hD|\n");
	ret2 = ft_printf("|%-#5.3hD|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0434");
	fprintf(printf_, "#0434");
	ret1 = fprintf(printf_, "|%-#5.3lD|\n");
	ret2 = ft_printf("|%-#5.3lD|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0435");
	fprintf(printf_, "#0435");
	ret1 = fprintf(printf_, "|%-#5.3llD|\n");
	ret2 = ft_printf("|%-#5.3llD|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0436");
	fprintf(printf_, "#0436");
	ret1 = fprintf(printf_, "|%-#5.3jD|\n");
	ret2 = ft_printf("|%-#5.3jD|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0437");
	fprintf(printf_, "#0437");
	ret1 = fprintf(printf_, "|%-#5.3zD|\n");
	ret2 = ft_printf("|%-#5.3zD|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0438");
	fprintf(printf_, "#0438");
	ret1 = fprintf(printf_, "|%-#5.3hhO|\n");
	ret2 = ft_printf("|%-#5.3hhO|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0439");
	fprintf(printf_, "#0439");
	ret1 = fprintf(printf_, "|%-#5.3hO|\n");
	ret2 = ft_printf("|%-#5.3hO|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0440");
	fprintf(printf_, "#0440");
	ret1 = fprintf(printf_, "|%-#5.3lO|\n");
	ret2 = ft_printf("|%-#5.3lO|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0441");
	fprintf(printf_, "#0441");
	ret1 = fprintf(printf_, "|%-#5.3llO|\n");
	ret2 = ft_printf("|%-#5.3llO|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0442");
	fprintf(printf_, "#0442");
	ret1 = fprintf(printf_, "|%-#5.3jO|\n");
	ret2 = ft_printf("|%-#5.3jO|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0443");
	fprintf(printf_, "#0443");
	ret1 = fprintf(printf_, "|%-#5.3zO|\n");
	ret2 = ft_printf("|%-#5.3zO|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0444");
	fprintf(printf_, "#0444");
	ret1 = fprintf(printf_, "|%-#5.3hhU|\n");
	ret2 = ft_printf("|%-#5.3hhU|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0445");
	fprintf(printf_, "#0445");
	ret1 = fprintf(printf_, "|%-#5.3hU|\n");
	ret2 = ft_printf("|%-#5.3hU|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0446");
	fprintf(printf_, "#0446");
	ret1 = fprintf(printf_, "|%-#5.3lU|\n");
	ret2 = ft_printf("|%-#5.3lU|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0447");
	fprintf(printf_, "#0447");
	ret1 = fprintf(printf_, "|%-#5.3llU|\n");
	ret2 = ft_printf("|%-#5.3llU|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0448");
	fprintf(printf_, "#0448");
	ret1 = fprintf(printf_, "|%-#5.3jU|\n");
	ret2 = ft_printf("|%-#5.3jU|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0449");
	fprintf(printf_, "#0449");
	ret1 = fprintf(printf_, "|%-#5.3zU|\n");
	ret2 = ft_printf("|%-#5.3zU|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0450");
	fprintf(printf_, "#0450");
	ret1 = fprintf(printf_, "|% -#5.3hhD|\n");
	ret2 = ft_printf("|% -#5.3hhD|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0451");
	fprintf(printf_, "#0451");
	ret1 = fprintf(printf_, "|% -#5.3hD|\n");
	ret2 = ft_printf("|% -#5.3hD|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0452");
	fprintf(printf_, "#0452");
	ret1 = fprintf(printf_, "|% -#5.3lD|\n");
	ret2 = ft_printf("|% -#5.3lD|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0453");
	fprintf(printf_, "#0453");
	ret1 = fprintf(printf_, "|% -#5.3llD|\n");
	ret2 = ft_printf("|% -#5.3llD|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0454");
	fprintf(printf_, "#0454");
	ret1 = fprintf(printf_, "|% -#5.3jD|\n");
	ret2 = ft_printf("|% -#5.3jD|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0455");
	fprintf(printf_, "#0455");
	ret1 = fprintf(printf_, "|% -#5.3zD|\n");
	ret2 = ft_printf("|% -#5.3zD|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0456");
	fprintf(printf_, "#0456");
	ret1 = fprintf(printf_, "|% -#5.3hhO|\n");
	ret2 = ft_printf("|% -#5.3hhO|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0457");
	fprintf(printf_, "#0457");
	ret1 = fprintf(printf_, "|% -#5.3hO|\n");
	ret2 = ft_printf("|% -#5.3hO|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0458");
	fprintf(printf_, "#0458");
	ret1 = fprintf(printf_, "|% -#5.3lO|\n");
	ret2 = ft_printf("|% -#5.3lO|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0459");
	fprintf(printf_, "#0459");
	ret1 = fprintf(printf_, "|% -#5.3llO|\n");
	ret2 = ft_printf("|% -#5.3llO|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0460");
	fprintf(printf_, "#0460");
	ret1 = fprintf(printf_, "|% -#5.3jO|\n");
	ret2 = ft_printf("|% -#5.3jO|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0461");
	fprintf(printf_, "#0461");
	ret1 = fprintf(printf_, "|% -#5.3zO|\n");
	ret2 = ft_printf("|% -#5.3zO|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0462");
	fprintf(printf_, "#0462");
	ret1 = fprintf(printf_, "|% -#5.3hhU|\n");
	ret2 = ft_printf("|% -#5.3hhU|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0463");
	fprintf(printf_, "#0463");
	ret1 = fprintf(printf_, "|% -#5.3hU|\n");
	ret2 = ft_printf("|% -#5.3hU|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0464");
	fprintf(printf_, "#0464");
	ret1 = fprintf(printf_, "|% -#5.3lU|\n");
	ret2 = ft_printf("|% -#5.3lU|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0465");
	fprintf(printf_, "#0465");
	ret1 = fprintf(printf_, "|% -#5.3llU|\n");
	ret2 = ft_printf("|% -#5.3llU|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0466");
	fprintf(printf_, "#0466");
	ret1 = fprintf(printf_, "|% -#5.3jU|\n");
	ret2 = ft_printf("|% -#5.3jU|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0467");
	fprintf(printf_, "#0467");
	ret1 = fprintf(printf_, "|% -#5.3zU|\n");
	ret2 = ft_printf("|% -#5.3zU|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0468");
	fprintf(printf_, "#0468");
	ret1 = fprintf(printf_, "|%0-#5.3hhD|\n");
	ret2 = ft_printf("|%0-#5.3hhD|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0469");
	fprintf(printf_, "#0469");
	ret1 = fprintf(printf_, "|%0-#5.3hD|\n");
	ret2 = ft_printf("|%0-#5.3hD|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0470");
	fprintf(printf_, "#0470");
	ret1 = fprintf(printf_, "|%0-#5.3lD|\n");
	ret2 = ft_printf("|%0-#5.3lD|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0471");
	fprintf(printf_, "#0471");
	ret1 = fprintf(printf_, "|%0-#5.3llD|\n");
	ret2 = ft_printf("|%0-#5.3llD|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0472");
	fprintf(printf_, "#0472");
	ret1 = fprintf(printf_, "|%0-#5.3jD|\n");
	ret2 = ft_printf("|%0-#5.3jD|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0473");
	fprintf(printf_, "#0473");
	ret1 = fprintf(printf_, "|%0-#5.3zD|\n");
	ret2 = ft_printf("|%0-#5.3zD|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0474");
	fprintf(printf_, "#0474");
	ret1 = fprintf(printf_, "|%0-#5.3hhO|\n");
	ret2 = ft_printf("|%0-#5.3hhO|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0475");
	fprintf(printf_, "#0475");
	ret1 = fprintf(printf_, "|%0-#5.3hO|\n");
	ret2 = ft_printf("|%0-#5.3hO|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0476");
	fprintf(printf_, "#0476");
	ret1 = fprintf(printf_, "|%0-#5.3lO|\n");
	ret2 = ft_printf("|%0-#5.3lO|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0477");
	fprintf(printf_, "#0477");
	ret1 = fprintf(printf_, "|%0-#5.3llO|\n");
	ret2 = ft_printf("|%0-#5.3llO|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0478");
	fprintf(printf_, "#0478");
	ret1 = fprintf(printf_, "|%0-#5.3jO|\n");
	ret2 = ft_printf("|%0-#5.3jO|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0479");
	fprintf(printf_, "#0479");
	ret1 = fprintf(printf_, "|%0-#5.3zO|\n");
	ret2 = ft_printf("|%0-#5.3zO|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0480");
	fprintf(printf_, "#0480");
	ret1 = fprintf(printf_, "|%0-#5.3hhU|\n");
	ret2 = ft_printf("|%0-#5.3hhU|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0481");
	fprintf(printf_, "#0481");
	ret1 = fprintf(printf_, "|%0-#5.3hU|\n");
	ret2 = ft_printf("|%0-#5.3hU|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0482");
	fprintf(printf_, "#0482");
	ret1 = fprintf(printf_, "|%0-#5.3lU|\n");
	ret2 = ft_printf("|%0-#5.3lU|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0483");
	fprintf(printf_, "#0483");
	ret1 = fprintf(printf_, "|%0-#5.3llU|\n");
	ret2 = ft_printf("|%0-#5.3llU|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0484");
	fprintf(printf_, "#0484");
	ret1 = fprintf(printf_, "|%0-#5.3jU|\n");
	ret2 = ft_printf("|%0-#5.3jU|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0485");
	fprintf(printf_, "#0485");
	ret1 = fprintf(printf_, "|%0-#5.3zU|\n");
	ret2 = ft_printf("|%0-#5.3zU|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0486");
	fprintf(printf_, "#0486");
	ret1 = fprintf(printf_, "|% 0-#5.3hhD|\n");
	ret2 = ft_printf("|% 0-#5.3hhD|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0487");
	fprintf(printf_, "#0487");
	ret1 = fprintf(printf_, "|% 0-#5.3hD|\n");
	ret2 = ft_printf("|% 0-#5.3hD|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0488");
	fprintf(printf_, "#0488");
	ret1 = fprintf(printf_, "|% 0-#5.3lD|\n");
	ret2 = ft_printf("|% 0-#5.3lD|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0489");
	fprintf(printf_, "#0489");
	ret1 = fprintf(printf_, "|% 0-#5.3llD|\n");
	ret2 = ft_printf("|% 0-#5.3llD|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0490");
	fprintf(printf_, "#0490");
	ret1 = fprintf(printf_, "|% 0-#5.3jD|\n");
	ret2 = ft_printf("|% 0-#5.3jD|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0491");
	fprintf(printf_, "#0491");
	ret1 = fprintf(printf_, "|% 0-#5.3zD|\n");
	ret2 = ft_printf("|% 0-#5.3zD|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0492");
	fprintf(printf_, "#0492");
	ret1 = fprintf(printf_, "|% 0-#5.3hhO|\n");
	ret2 = ft_printf("|% 0-#5.3hhO|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0493");
	fprintf(printf_, "#0493");
	ret1 = fprintf(printf_, "|% 0-#5.3hO|\n");
	ret2 = ft_printf("|% 0-#5.3hO|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0494");
	fprintf(printf_, "#0494");
	ret1 = fprintf(printf_, "|% 0-#5.3lO|\n");
	ret2 = ft_printf("|% 0-#5.3lO|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0495");
	fprintf(printf_, "#0495");
	ret1 = fprintf(printf_, "|% 0-#5.3llO|\n");
	ret2 = ft_printf("|% 0-#5.3llO|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0496");
	fprintf(printf_, "#0496");
	ret1 = fprintf(printf_, "|% 0-#5.3jO|\n");
	ret2 = ft_printf("|% 0-#5.3jO|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0497");
	fprintf(printf_, "#0497");
	ret1 = fprintf(printf_, "|% 0-#5.3zO|\n");
	ret2 = ft_printf("|% 0-#5.3zO|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0498");
	fprintf(printf_, "#0498");
	ret1 = fprintf(printf_, "|% 0-#5.3hhU|\n");
	ret2 = ft_printf("|% 0-#5.3hhU|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0499");
	fprintf(printf_, "#0499");
	ret1 = fprintf(printf_, "|% 0-#5.3hU|\n");
	ret2 = ft_printf("|% 0-#5.3hU|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0500");
	fprintf(printf_, "#0500");
	ret1 = fprintf(printf_, "|% 0-#5.3lU|\n");
	ret2 = ft_printf("|% 0-#5.3lU|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0501");
	fprintf(printf_, "#0501");
	ret1 = fprintf(printf_, "|% 0-#5.3llU|\n");
	ret2 = ft_printf("|% 0-#5.3llU|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0502");
	fprintf(printf_, "#0502");
	ret1 = fprintf(printf_, "|% 0-#5.3jU|\n");
	ret2 = ft_printf("|% 0-#5.3jU|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0503");
	fprintf(printf_, "#0503");
	ret1 = fprintf(printf_, "|% 0-#5.3zU|\n");
	ret2 = ft_printf("|% 0-#5.3zU|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0504");
	fprintf(printf_, "#0504");
	ret1 = fprintf(printf_, "|%+-#5.3hhD|\n");
	ret2 = ft_printf("|%+-#5.3hhD|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0505");
	fprintf(printf_, "#0505");
	ret1 = fprintf(printf_, "|%+-#5.3hD|\n");
	ret2 = ft_printf("|%+-#5.3hD|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0506");
	fprintf(printf_, "#0506");
	ret1 = fprintf(printf_, "|%+-#5.3lD|\n");
	ret2 = ft_printf("|%+-#5.3lD|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0507");
	fprintf(printf_, "#0507");
	ret1 = fprintf(printf_, "|%+-#5.3llD|\n");
	ret2 = ft_printf("|%+-#5.3llD|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0508");
	fprintf(printf_, "#0508");
	ret1 = fprintf(printf_, "|%+-#5.3jD|\n");
	ret2 = ft_printf("|%+-#5.3jD|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0509");
	fprintf(printf_, "#0509");
	ret1 = fprintf(printf_, "|%+-#5.3zD|\n");
	ret2 = ft_printf("|%+-#5.3zD|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0510");
	fprintf(printf_, "#0510");
	ret1 = fprintf(printf_, "|%+-#5.3hhO|\n");
	ret2 = ft_printf("|%+-#5.3hhO|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0511");
	fprintf(printf_, "#0511");
	ret1 = fprintf(printf_, "|%+-#5.3hO|\n");
	ret2 = ft_printf("|%+-#5.3hO|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0512");
	fprintf(printf_, "#0512");
	ret1 = fprintf(printf_, "|%+-#5.3lO|\n");
	ret2 = ft_printf("|%+-#5.3lO|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0513");
	fprintf(printf_, "#0513");
	ret1 = fprintf(printf_, "|%+-#5.3llO|\n");
	ret2 = ft_printf("|%+-#5.3llO|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0514");
	fprintf(printf_, "#0514");
	ret1 = fprintf(printf_, "|%+-#5.3jO|\n");
	ret2 = ft_printf("|%+-#5.3jO|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0515");
	fprintf(printf_, "#0515");
	ret1 = fprintf(printf_, "|%+-#5.3zO|\n");
	ret2 = ft_printf("|%+-#5.3zO|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0516");
	fprintf(printf_, "#0516");
	ret1 = fprintf(printf_, "|%+-#5.3hhU|\n");
	ret2 = ft_printf("|%+-#5.3hhU|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0517");
	fprintf(printf_, "#0517");
	ret1 = fprintf(printf_, "|%+-#5.3hU|\n");
	ret2 = ft_printf("|%+-#5.3hU|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0518");
	fprintf(printf_, "#0518");
	ret1 = fprintf(printf_, "|%+-#5.3lU|\n");
	ret2 = ft_printf("|%+-#5.3lU|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0519");
	fprintf(printf_, "#0519");
	ret1 = fprintf(printf_, "|%+-#5.3llU|\n");
	ret2 = ft_printf("|%+-#5.3llU|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0520");
	fprintf(printf_, "#0520");
	ret1 = fprintf(printf_, "|%+-#5.3jU|\n");
	ret2 = ft_printf("|%+-#5.3jU|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0521");
	fprintf(printf_, "#0521");
	ret1 = fprintf(printf_, "|%+-#5.3zU|\n");
	ret2 = ft_printf("|%+-#5.3zU|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0522");
	fprintf(printf_, "#0522");
	ret1 = fprintf(printf_, "|% +-#5.3hhD|\n");
	ret2 = ft_printf("|% +-#5.3hhD|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0523");
	fprintf(printf_, "#0523");
	ret1 = fprintf(printf_, "|% +-#5.3hD|\n");
	ret2 = ft_printf("|% +-#5.3hD|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0524");
	fprintf(printf_, "#0524");
	ret1 = fprintf(printf_, "|% +-#5.3lD|\n");
	ret2 = ft_printf("|% +-#5.3lD|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0525");
	fprintf(printf_, "#0525");
	ret1 = fprintf(printf_, "|% +-#5.3llD|\n");
	ret2 = ft_printf("|% +-#5.3llD|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0526");
	fprintf(printf_, "#0526");
	ret1 = fprintf(printf_, "|% +-#5.3jD|\n");
	ret2 = ft_printf("|% +-#5.3jD|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0527");
	fprintf(printf_, "#0527");
	ret1 = fprintf(printf_, "|% +-#5.3zD|\n");
	ret2 = ft_printf("|% +-#5.3zD|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0528");
	fprintf(printf_, "#0528");
	ret1 = fprintf(printf_, "|% +-#5.3hhO|\n");
	ret2 = ft_printf("|% +-#5.3hhO|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0529");
	fprintf(printf_, "#0529");
	ret1 = fprintf(printf_, "|% +-#5.3hO|\n");
	ret2 = ft_printf("|% +-#5.3hO|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0530");
	fprintf(printf_, "#0530");
	ret1 = fprintf(printf_, "|% +-#5.3lO|\n");
	ret2 = ft_printf("|% +-#5.3lO|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0531");
	fprintf(printf_, "#0531");
	ret1 = fprintf(printf_, "|% +-#5.3llO|\n");
	ret2 = ft_printf("|% +-#5.3llO|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0532");
	fprintf(printf_, "#0532");
	ret1 = fprintf(printf_, "|% +-#5.3jO|\n");
	ret2 = ft_printf("|% +-#5.3jO|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0533");
	fprintf(printf_, "#0533");
	ret1 = fprintf(printf_, "|% +-#5.3zO|\n");
	ret2 = ft_printf("|% +-#5.3zO|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0534");
	fprintf(printf_, "#0534");
	ret1 = fprintf(printf_, "|% +-#5.3hhU|\n");
	ret2 = ft_printf("|% +-#5.3hhU|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0535");
	fprintf(printf_, "#0535");
	ret1 = fprintf(printf_, "|% +-#5.3hU|\n");
	ret2 = ft_printf("|% +-#5.3hU|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0536");
	fprintf(printf_, "#0536");
	ret1 = fprintf(printf_, "|% +-#5.3lU|\n");
	ret2 = ft_printf("|% +-#5.3lU|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0537");
	fprintf(printf_, "#0537");
	ret1 = fprintf(printf_, "|% +-#5.3llU|\n");
	ret2 = ft_printf("|% +-#5.3llU|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0538");
	fprintf(printf_, "#0538");
	ret1 = fprintf(printf_, "|% +-#5.3jU|\n");
	ret2 = ft_printf("|% +-#5.3jU|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0539");
	fprintf(printf_, "#0539");
	ret1 = fprintf(printf_, "|% +-#5.3zU|\n");
	ret2 = ft_printf("|% +-#5.3zU|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0540");
	fprintf(printf_, "#0540");
	ret1 = fprintf(printf_, "|%0+-#5.3hhD|\n");
	ret2 = ft_printf("|%0+-#5.3hhD|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0541");
	fprintf(printf_, "#0541");
	ret1 = fprintf(printf_, "|%0+-#5.3hD|\n");
	ret2 = ft_printf("|%0+-#5.3hD|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0542");
	fprintf(printf_, "#0542");
	ret1 = fprintf(printf_, "|%0+-#5.3lD|\n");
	ret2 = ft_printf("|%0+-#5.3lD|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0543");
	fprintf(printf_, "#0543");
	ret1 = fprintf(printf_, "|%0+-#5.3llD|\n");
	ret2 = ft_printf("|%0+-#5.3llD|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0544");
	fprintf(printf_, "#0544");
	ret1 = fprintf(printf_, "|%0+-#5.3jD|\n");
	ret2 = ft_printf("|%0+-#5.3jD|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0545");
	fprintf(printf_, "#0545");
	ret1 = fprintf(printf_, "|%0+-#5.3zD|\n");
	ret2 = ft_printf("|%0+-#5.3zD|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0546");
	fprintf(printf_, "#0546");
	ret1 = fprintf(printf_, "|%0+-#5.3hhO|\n");
	ret2 = ft_printf("|%0+-#5.3hhO|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0547");
	fprintf(printf_, "#0547");
	ret1 = fprintf(printf_, "|%0+-#5.3hO|\n");
	ret2 = ft_printf("|%0+-#5.3hO|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0548");
	fprintf(printf_, "#0548");
	ret1 = fprintf(printf_, "|%0+-#5.3lO|\n");
	ret2 = ft_printf("|%0+-#5.3lO|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0549");
	fprintf(printf_, "#0549");
	ret1 = fprintf(printf_, "|%0+-#5.3llO|\n");
	ret2 = ft_printf("|%0+-#5.3llO|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0550");
	fprintf(printf_, "#0550");
	ret1 = fprintf(printf_, "|%0+-#5.3jO|\n");
	ret2 = ft_printf("|%0+-#5.3jO|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0551");
	fprintf(printf_, "#0551");
	ret1 = fprintf(printf_, "|%0+-#5.3zO|\n");
	ret2 = ft_printf("|%0+-#5.3zO|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0552");
	fprintf(printf_, "#0552");
	ret1 = fprintf(printf_, "|%0+-#5.3hhU|\n");
	ret2 = ft_printf("|%0+-#5.3hhU|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0553");
	fprintf(printf_, "#0553");
	ret1 = fprintf(printf_, "|%0+-#5.3hU|\n");
	ret2 = ft_printf("|%0+-#5.3hU|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0554");
	fprintf(printf_, "#0554");
	ret1 = fprintf(printf_, "|%0+-#5.3lU|\n");
	ret2 = ft_printf("|%0+-#5.3lU|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0555");
	fprintf(printf_, "#0555");
	ret1 = fprintf(printf_, "|%0+-#5.3llU|\n");
	ret2 = ft_printf("|%0+-#5.3llU|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0556");
	fprintf(printf_, "#0556");
	ret1 = fprintf(printf_, "|%0+-#5.3jU|\n");
	ret2 = ft_printf("|%0+-#5.3jU|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0557");
	fprintf(printf_, "#0557");
	ret1 = fprintf(printf_, "|%0+-#5.3zU|\n");
	ret2 = ft_printf("|%0+-#5.3zU|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0558");
	fprintf(printf_, "#0558");
	ret1 = fprintf(printf_, "|% 0+-#5.3hhD|\n");
	ret2 = ft_printf("|% 0+-#5.3hhD|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0559");
	fprintf(printf_, "#0559");
	ret1 = fprintf(printf_, "|% 0+-#5.3hD|\n");
	ret2 = ft_printf("|% 0+-#5.3hD|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0560");
	fprintf(printf_, "#0560");
	ret1 = fprintf(printf_, "|% 0+-#5.3lD|\n");
	ret2 = ft_printf("|% 0+-#5.3lD|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0561");
	fprintf(printf_, "#0561");
	ret1 = fprintf(printf_, "|% 0+-#5.3llD|\n");
	ret2 = ft_printf("|% 0+-#5.3llD|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0562");
	fprintf(printf_, "#0562");
	ret1 = fprintf(printf_, "|% 0+-#5.3jD|\n");
	ret2 = ft_printf("|% 0+-#5.3jD|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0563");
	fprintf(printf_, "#0563");
	ret1 = fprintf(printf_, "|% 0+-#5.3zD|\n");
	ret2 = ft_printf("|% 0+-#5.3zD|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0564");
	fprintf(printf_, "#0564");
	ret1 = fprintf(printf_, "|% 0+-#5.3hhO|\n");
	ret2 = ft_printf("|% 0+-#5.3hhO|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0565");
	fprintf(printf_, "#0565");
	ret1 = fprintf(printf_, "|% 0+-#5.3hO|\n");
	ret2 = ft_printf("|% 0+-#5.3hO|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0566");
	fprintf(printf_, "#0566");
	ret1 = fprintf(printf_, "|% 0+-#5.3lO|\n");
	ret2 = ft_printf("|% 0+-#5.3lO|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0567");
	fprintf(printf_, "#0567");
	ret1 = fprintf(printf_, "|% 0+-#5.3llO|\n");
	ret2 = ft_printf("|% 0+-#5.3llO|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0568");
	fprintf(printf_, "#0568");
	ret1 = fprintf(printf_, "|% 0+-#5.3jO|\n");
	ret2 = ft_printf("|% 0+-#5.3jO|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0569");
	fprintf(printf_, "#0569");
	ret1 = fprintf(printf_, "|% 0+-#5.3zO|\n");
	ret2 = ft_printf("|% 0+-#5.3zO|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0570");
	fprintf(printf_, "#0570");
	ret1 = fprintf(printf_, "|% 0+-#5.3hhU|\n");
	ret2 = ft_printf("|% 0+-#5.3hhU|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0571");
	fprintf(printf_, "#0571");
	ret1 = fprintf(printf_, "|% 0+-#5.3hU|\n");
	ret2 = ft_printf("|% 0+-#5.3hU|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0572");
	fprintf(printf_, "#0572");
	ret1 = fprintf(printf_, "|% 0+-#5.3lU|\n");
	ret2 = ft_printf("|% 0+-#5.3lU|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0573");
	fprintf(printf_, "#0573");
	ret1 = fprintf(printf_, "|% 0+-#5.3llU|\n");
	ret2 = ft_printf("|% 0+-#5.3llU|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0574");
	fprintf(printf_, "#0574");
	ret1 = fprintf(printf_, "|% 0+-#5.3jU|\n");
	ret2 = ft_printf("|% 0+-#5.3jU|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0575");
	fprintf(printf_, "#0575");
	ret1 = fprintf(printf_, "|% 0+-#5.3zU|\n");
	ret2 = ft_printf("|% 0+-#5.3zU|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
	fclose(printf_);
	fclose(printf_ret);
	fclose(ft_printf_ret);
	return (0);
}

