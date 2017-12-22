#include <stdio.h>
#include <stdint.h>
#include <locale.h>
#include "libftprintf.h"

int		main(void)
{
	FILE	*printf_, *printf_ret, *ft_printf_ret;
	int		ret1, ret2;

	
	printf_ = fopen("../files/test_m03_printf_print", "w");
	printf_ret = fopen("../files/test_m03_printf_ret", "w");
	ft_printf_ret = fopen("../files/test_m03_ft_printf_ret", "w");
	setvbuf(printf_, NULL, _IONBF, 0);
	setvbuf(printf_ret, NULL, _IONBF, 0);
	setvbuf(ft_printf_ret, NULL, _IONBF, 0);

//@
	ft_printf("#0000");
	fprintf(printf_, "#0000");
	ret1 = fprintf(printf_, "|%6.5hh%|\n");
	ret2 = ft_printf("|%6.5hh%|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0001");
	fprintf(printf_, "#0001");
	ret1 = fprintf(printf_, "|%6.5h%|\n");
	ret2 = ft_printf("|%6.5h%|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0002");
	fprintf(printf_, "#0002");
	ret1 = fprintf(printf_, "|%6.5l%|\n");
	ret2 = ft_printf("|%6.5l%|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0003");
	fprintf(printf_, "#0003");
	ret1 = fprintf(printf_, "|%6.5ll%|\n");
	ret2 = ft_printf("|%6.5ll%|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0004");
	fprintf(printf_, "#0004");
	ret1 = fprintf(printf_, "|%6.5j%|\n");
	ret2 = ft_printf("|%6.5j%|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0005");
	fprintf(printf_, "#0005");
	ret1 = fprintf(printf_, "|%6.5z%|\n");
	ret2 = ft_printf("|%6.5z%|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0006");
	fprintf(printf_, "#0006");
	ret1 = fprintf(printf_, "|% 6.5hh%|\n");
	ret2 = ft_printf("|% 6.5hh%|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0007");
	fprintf(printf_, "#0007");
	ret1 = fprintf(printf_, "|% 6.5h%|\n");
	ret2 = ft_printf("|% 6.5h%|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0008");
	fprintf(printf_, "#0008");
	ret1 = fprintf(printf_, "|% 6.5l%|\n");
	ret2 = ft_printf("|% 6.5l%|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0009");
	fprintf(printf_, "#0009");
	ret1 = fprintf(printf_, "|% 6.5ll%|\n");
	ret2 = ft_printf("|% 6.5ll%|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0010");
	fprintf(printf_, "#0010");
	ret1 = fprintf(printf_, "|% 6.5j%|\n");
	ret2 = ft_printf("|% 6.5j%|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0011");
	fprintf(printf_, "#0011");
	ret1 = fprintf(printf_, "|% 6.5z%|\n");
	ret2 = ft_printf("|% 6.5z%|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0012");
	fprintf(printf_, "#0012");
	ret1 = fprintf(printf_, "|%06.5hh%|\n");
	ret2 = ft_printf("|%06.5hh%|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0013");
	fprintf(printf_, "#0013");
	ret1 = fprintf(printf_, "|%06.5h%|\n");
	ret2 = ft_printf("|%06.5h%|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0014");
	fprintf(printf_, "#0014");
	ret1 = fprintf(printf_, "|%06.5l%|\n");
	ret2 = ft_printf("|%06.5l%|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0015");
	fprintf(printf_, "#0015");
	ret1 = fprintf(printf_, "|%06.5ll%|\n");
	ret2 = ft_printf("|%06.5ll%|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0016");
	fprintf(printf_, "#0016");
	ret1 = fprintf(printf_, "|%06.5j%|\n");
	ret2 = ft_printf("|%06.5j%|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0017");
	fprintf(printf_, "#0017");
	ret1 = fprintf(printf_, "|%06.5z%|\n");
	ret2 = ft_printf("|%06.5z%|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0018");
	fprintf(printf_, "#0018");
	ret1 = fprintf(printf_, "|% 06.5hh%|\n");
	ret2 = ft_printf("|% 06.5hh%|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0019");
	fprintf(printf_, "#0019");
	ret1 = fprintf(printf_, "|% 06.5h%|\n");
	ret2 = ft_printf("|% 06.5h%|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0020");
	fprintf(printf_, "#0020");
	ret1 = fprintf(printf_, "|% 06.5l%|\n");
	ret2 = ft_printf("|% 06.5l%|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0021");
	fprintf(printf_, "#0021");
	ret1 = fprintf(printf_, "|% 06.5ll%|\n");
	ret2 = ft_printf("|% 06.5ll%|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0022");
	fprintf(printf_, "#0022");
	ret1 = fprintf(printf_, "|% 06.5j%|\n");
	ret2 = ft_printf("|% 06.5j%|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0023");
	fprintf(printf_, "#0023");
	ret1 = fprintf(printf_, "|% 06.5z%|\n");
	ret2 = ft_printf("|% 06.5z%|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0024");
	fprintf(printf_, "#0024");
	ret1 = fprintf(printf_, "|%+6.5hh%|\n");
	ret2 = ft_printf("|%+6.5hh%|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0025");
	fprintf(printf_, "#0025");
	ret1 = fprintf(printf_, "|%+6.5h%|\n");
	ret2 = ft_printf("|%+6.5h%|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0026");
	fprintf(printf_, "#0026");
	ret1 = fprintf(printf_, "|%+6.5l%|\n");
	ret2 = ft_printf("|%+6.5l%|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0027");
	fprintf(printf_, "#0027");
	ret1 = fprintf(printf_, "|%+6.5ll%|\n");
	ret2 = ft_printf("|%+6.5ll%|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0028");
	fprintf(printf_, "#0028");
	ret1 = fprintf(printf_, "|%+6.5j%|\n");
	ret2 = ft_printf("|%+6.5j%|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0029");
	fprintf(printf_, "#0029");
	ret1 = fprintf(printf_, "|%+6.5z%|\n");
	ret2 = ft_printf("|%+6.5z%|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0030");
	fprintf(printf_, "#0030");
	ret1 = fprintf(printf_, "|% +6.5hh%|\n");
	ret2 = ft_printf("|% +6.5hh%|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0031");
	fprintf(printf_, "#0031");
	ret1 = fprintf(printf_, "|% +6.5h%|\n");
	ret2 = ft_printf("|% +6.5h%|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0032");
	fprintf(printf_, "#0032");
	ret1 = fprintf(printf_, "|% +6.5l%|\n");
	ret2 = ft_printf("|% +6.5l%|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0033");
	fprintf(printf_, "#0033");
	ret1 = fprintf(printf_, "|% +6.5ll%|\n");
	ret2 = ft_printf("|% +6.5ll%|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0034");
	fprintf(printf_, "#0034");
	ret1 = fprintf(printf_, "|% +6.5j%|\n");
	ret2 = ft_printf("|% +6.5j%|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0035");
	fprintf(printf_, "#0035");
	ret1 = fprintf(printf_, "|% +6.5z%|\n");
	ret2 = ft_printf("|% +6.5z%|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0036");
	fprintf(printf_, "#0036");
	ret1 = fprintf(printf_, "|%0+6.5hh%|\n");
	ret2 = ft_printf("|%0+6.5hh%|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0037");
	fprintf(printf_, "#0037");
	ret1 = fprintf(printf_, "|%0+6.5h%|\n");
	ret2 = ft_printf("|%0+6.5h%|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0038");
	fprintf(printf_, "#0038");
	ret1 = fprintf(printf_, "|%0+6.5l%|\n");
	ret2 = ft_printf("|%0+6.5l%|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0039");
	fprintf(printf_, "#0039");
	ret1 = fprintf(printf_, "|%0+6.5ll%|\n");
	ret2 = ft_printf("|%0+6.5ll%|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0040");
	fprintf(printf_, "#0040");
	ret1 = fprintf(printf_, "|%0+6.5j%|\n");
	ret2 = ft_printf("|%0+6.5j%|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0041");
	fprintf(printf_, "#0041");
	ret1 = fprintf(printf_, "|%0+6.5z%|\n");
	ret2 = ft_printf("|%0+6.5z%|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0042");
	fprintf(printf_, "#0042");
	ret1 = fprintf(printf_, "|% 0+6.5hh%|\n");
	ret2 = ft_printf("|% 0+6.5hh%|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0043");
	fprintf(printf_, "#0043");
	ret1 = fprintf(printf_, "|% 0+6.5h%|\n");
	ret2 = ft_printf("|% 0+6.5h%|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0044");
	fprintf(printf_, "#0044");
	ret1 = fprintf(printf_, "|% 0+6.5l%|\n");
	ret2 = ft_printf("|% 0+6.5l%|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0045");
	fprintf(printf_, "#0045");
	ret1 = fprintf(printf_, "|% 0+6.5ll%|\n");
	ret2 = ft_printf("|% 0+6.5ll%|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0046");
	fprintf(printf_, "#0046");
	ret1 = fprintf(printf_, "|% 0+6.5j%|\n");
	ret2 = ft_printf("|% 0+6.5j%|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0047");
	fprintf(printf_, "#0047");
	ret1 = fprintf(printf_, "|% 0+6.5z%|\n");
	ret2 = ft_printf("|% 0+6.5z%|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0048");
	fprintf(printf_, "#0048");
	ret1 = fprintf(printf_, "|%-6.5hh%|\n");
	ret2 = ft_printf("|%-6.5hh%|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0049");
	fprintf(printf_, "#0049");
	ret1 = fprintf(printf_, "|%-6.5h%|\n");
	ret2 = ft_printf("|%-6.5h%|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0050");
	fprintf(printf_, "#0050");
	ret1 = fprintf(printf_, "|%-6.5l%|\n");
	ret2 = ft_printf("|%-6.5l%|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0051");
	fprintf(printf_, "#0051");
	ret1 = fprintf(printf_, "|%-6.5ll%|\n");
	ret2 = ft_printf("|%-6.5ll%|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0052");
	fprintf(printf_, "#0052");
	ret1 = fprintf(printf_, "|%-6.5j%|\n");
	ret2 = ft_printf("|%-6.5j%|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0053");
	fprintf(printf_, "#0053");
	ret1 = fprintf(printf_, "|%-6.5z%|\n");
	ret2 = ft_printf("|%-6.5z%|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0054");
	fprintf(printf_, "#0054");
	ret1 = fprintf(printf_, "|% -6.5hh%|\n");
	ret2 = ft_printf("|% -6.5hh%|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0055");
	fprintf(printf_, "#0055");
	ret1 = fprintf(printf_, "|% -6.5h%|\n");
	ret2 = ft_printf("|% -6.5h%|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0056");
	fprintf(printf_, "#0056");
	ret1 = fprintf(printf_, "|% -6.5l%|\n");
	ret2 = ft_printf("|% -6.5l%|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0057");
	fprintf(printf_, "#0057");
	ret1 = fprintf(printf_, "|% -6.5ll%|\n");
	ret2 = ft_printf("|% -6.5ll%|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0058");
	fprintf(printf_, "#0058");
	ret1 = fprintf(printf_, "|% -6.5j%|\n");
	ret2 = ft_printf("|% -6.5j%|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0059");
	fprintf(printf_, "#0059");
	ret1 = fprintf(printf_, "|% -6.5z%|\n");
	ret2 = ft_printf("|% -6.5z%|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0060");
	fprintf(printf_, "#0060");
	ret1 = fprintf(printf_, "|%0-6.5hh%|\n");
	ret2 = ft_printf("|%0-6.5hh%|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0061");
	fprintf(printf_, "#0061");
	ret1 = fprintf(printf_, "|%0-6.5h%|\n");
	ret2 = ft_printf("|%0-6.5h%|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0062");
	fprintf(printf_, "#0062");
	ret1 = fprintf(printf_, "|%0-6.5l%|\n");
	ret2 = ft_printf("|%0-6.5l%|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0063");
	fprintf(printf_, "#0063");
	ret1 = fprintf(printf_, "|%0-6.5ll%|\n");
	ret2 = ft_printf("|%0-6.5ll%|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0064");
	fprintf(printf_, "#0064");
	ret1 = fprintf(printf_, "|%0-6.5j%|\n");
	ret2 = ft_printf("|%0-6.5j%|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0065");
	fprintf(printf_, "#0065");
	ret1 = fprintf(printf_, "|%0-6.5z%|\n");
	ret2 = ft_printf("|%0-6.5z%|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0066");
	fprintf(printf_, "#0066");
	ret1 = fprintf(printf_, "|% 0-6.5hh%|\n");
	ret2 = ft_printf("|% 0-6.5hh%|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0067");
	fprintf(printf_, "#0067");
	ret1 = fprintf(printf_, "|% 0-6.5h%|\n");
	ret2 = ft_printf("|% 0-6.5h%|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0068");
	fprintf(printf_, "#0068");
	ret1 = fprintf(printf_, "|% 0-6.5l%|\n");
	ret2 = ft_printf("|% 0-6.5l%|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0069");
	fprintf(printf_, "#0069");
	ret1 = fprintf(printf_, "|% 0-6.5ll%|\n");
	ret2 = ft_printf("|% 0-6.5ll%|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0070");
	fprintf(printf_, "#0070");
	ret1 = fprintf(printf_, "|% 0-6.5j%|\n");
	ret2 = ft_printf("|% 0-6.5j%|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0071");
	fprintf(printf_, "#0071");
	ret1 = fprintf(printf_, "|% 0-6.5z%|\n");
	ret2 = ft_printf("|% 0-6.5z%|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0072");
	fprintf(printf_, "#0072");
	ret1 = fprintf(printf_, "|%+-6.5hh%|\n");
	ret2 = ft_printf("|%+-6.5hh%|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0073");
	fprintf(printf_, "#0073");
	ret1 = fprintf(printf_, "|%+-6.5h%|\n");
	ret2 = ft_printf("|%+-6.5h%|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0074");
	fprintf(printf_, "#0074");
	ret1 = fprintf(printf_, "|%+-6.5l%|\n");
	ret2 = ft_printf("|%+-6.5l%|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0075");
	fprintf(printf_, "#0075");
	ret1 = fprintf(printf_, "|%+-6.5ll%|\n");
	ret2 = ft_printf("|%+-6.5ll%|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0076");
	fprintf(printf_, "#0076");
	ret1 = fprintf(printf_, "|%+-6.5j%|\n");
	ret2 = ft_printf("|%+-6.5j%|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0077");
	fprintf(printf_, "#0077");
	ret1 = fprintf(printf_, "|%+-6.5z%|\n");
	ret2 = ft_printf("|%+-6.5z%|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0078");
	fprintf(printf_, "#0078");
	ret1 = fprintf(printf_, "|% +-6.5hh%|\n");
	ret2 = ft_printf("|% +-6.5hh%|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0079");
	fprintf(printf_, "#0079");
	ret1 = fprintf(printf_, "|% +-6.5h%|\n");
	ret2 = ft_printf("|% +-6.5h%|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0080");
	fprintf(printf_, "#0080");
	ret1 = fprintf(printf_, "|% +-6.5l%|\n");
	ret2 = ft_printf("|% +-6.5l%|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0081");
	fprintf(printf_, "#0081");
	ret1 = fprintf(printf_, "|% +-6.5ll%|\n");
	ret2 = ft_printf("|% +-6.5ll%|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0082");
	fprintf(printf_, "#0082");
	ret1 = fprintf(printf_, "|% +-6.5j%|\n");
	ret2 = ft_printf("|% +-6.5j%|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0083");
	fprintf(printf_, "#0083");
	ret1 = fprintf(printf_, "|% +-6.5z%|\n");
	ret2 = ft_printf("|% +-6.5z%|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0084");
	fprintf(printf_, "#0084");
	ret1 = fprintf(printf_, "|%0+-6.5hh%|\n");
	ret2 = ft_printf("|%0+-6.5hh%|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0085");
	fprintf(printf_, "#0085");
	ret1 = fprintf(printf_, "|%0+-6.5h%|\n");
	ret2 = ft_printf("|%0+-6.5h%|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0086");
	fprintf(printf_, "#0086");
	ret1 = fprintf(printf_, "|%0+-6.5l%|\n");
	ret2 = ft_printf("|%0+-6.5l%|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0087");
	fprintf(printf_, "#0087");
	ret1 = fprintf(printf_, "|%0+-6.5ll%|\n");
	ret2 = ft_printf("|%0+-6.5ll%|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0088");
	fprintf(printf_, "#0088");
	ret1 = fprintf(printf_, "|%0+-6.5j%|\n");
	ret2 = ft_printf("|%0+-6.5j%|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0089");
	fprintf(printf_, "#0089");
	ret1 = fprintf(printf_, "|%0+-6.5z%|\n");
	ret2 = ft_printf("|%0+-6.5z%|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0090");
	fprintf(printf_, "#0090");
	ret1 = fprintf(printf_, "|% 0+-6.5hh%|\n");
	ret2 = ft_printf("|% 0+-6.5hh%|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0091");
	fprintf(printf_, "#0091");
	ret1 = fprintf(printf_, "|% 0+-6.5h%|\n");
	ret2 = ft_printf("|% 0+-6.5h%|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0092");
	fprintf(printf_, "#0092");
	ret1 = fprintf(printf_, "|% 0+-6.5l%|\n");
	ret2 = ft_printf("|% 0+-6.5l%|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0093");
	fprintf(printf_, "#0093");
	ret1 = fprintf(printf_, "|% 0+-6.5ll%|\n");
	ret2 = ft_printf("|% 0+-6.5ll%|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0094");
	fprintf(printf_, "#0094");
	ret1 = fprintf(printf_, "|% 0+-6.5j%|\n");
	ret2 = ft_printf("|% 0+-6.5j%|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0095");
	fprintf(printf_, "#0095");
	ret1 = fprintf(printf_, "|% 0+-6.5z%|\n");
	ret2 = ft_printf("|% 0+-6.5z%|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0096");
	fprintf(printf_, "#0096");
	ret1 = fprintf(printf_, "|%#6.5hh%|\n");
	ret2 = ft_printf("|%#6.5hh%|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0097");
	fprintf(printf_, "#0097");
	ret1 = fprintf(printf_, "|%#6.5h%|\n");
	ret2 = ft_printf("|%#6.5h%|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0098");
	fprintf(printf_, "#0098");
	ret1 = fprintf(printf_, "|%#6.5l%|\n");
	ret2 = ft_printf("|%#6.5l%|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0099");
	fprintf(printf_, "#0099");
	ret1 = fprintf(printf_, "|%#6.5ll%|\n");
	ret2 = ft_printf("|%#6.5ll%|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0100");
	fprintf(printf_, "#0100");
	ret1 = fprintf(printf_, "|%#6.5j%|\n");
	ret2 = ft_printf("|%#6.5j%|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0101");
	fprintf(printf_, "#0101");
	ret1 = fprintf(printf_, "|%#6.5z%|\n");
	ret2 = ft_printf("|%#6.5z%|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0102");
	fprintf(printf_, "#0102");
	ret1 = fprintf(printf_, "|% #6.5hh%|\n");
	ret2 = ft_printf("|% #6.5hh%|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0103");
	fprintf(printf_, "#0103");
	ret1 = fprintf(printf_, "|% #6.5h%|\n");
	ret2 = ft_printf("|% #6.5h%|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0104");
	fprintf(printf_, "#0104");
	ret1 = fprintf(printf_, "|% #6.5l%|\n");
	ret2 = ft_printf("|% #6.5l%|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0105");
	fprintf(printf_, "#0105");
	ret1 = fprintf(printf_, "|% #6.5ll%|\n");
	ret2 = ft_printf("|% #6.5ll%|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0106");
	fprintf(printf_, "#0106");
	ret1 = fprintf(printf_, "|% #6.5j%|\n");
	ret2 = ft_printf("|% #6.5j%|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0107");
	fprintf(printf_, "#0107");
	ret1 = fprintf(printf_, "|% #6.5z%|\n");
	ret2 = ft_printf("|% #6.5z%|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0108");
	fprintf(printf_, "#0108");
	ret1 = fprintf(printf_, "|%0#6.5hh%|\n");
	ret2 = ft_printf("|%0#6.5hh%|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0109");
	fprintf(printf_, "#0109");
	ret1 = fprintf(printf_, "|%0#6.5h%|\n");
	ret2 = ft_printf("|%0#6.5h%|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0110");
	fprintf(printf_, "#0110");
	ret1 = fprintf(printf_, "|%0#6.5l%|\n");
	ret2 = ft_printf("|%0#6.5l%|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0111");
	fprintf(printf_, "#0111");
	ret1 = fprintf(printf_, "|%0#6.5ll%|\n");
	ret2 = ft_printf("|%0#6.5ll%|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0112");
	fprintf(printf_, "#0112");
	ret1 = fprintf(printf_, "|%0#6.5j%|\n");
	ret2 = ft_printf("|%0#6.5j%|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0113");
	fprintf(printf_, "#0113");
	ret1 = fprintf(printf_, "|%0#6.5z%|\n");
	ret2 = ft_printf("|%0#6.5z%|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0114");
	fprintf(printf_, "#0114");
	ret1 = fprintf(printf_, "|% 0#6.5hh%|\n");
	ret2 = ft_printf("|% 0#6.5hh%|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0115");
	fprintf(printf_, "#0115");
	ret1 = fprintf(printf_, "|% 0#6.5h%|\n");
	ret2 = ft_printf("|% 0#6.5h%|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0116");
	fprintf(printf_, "#0116");
	ret1 = fprintf(printf_, "|% 0#6.5l%|\n");
	ret2 = ft_printf("|% 0#6.5l%|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0117");
	fprintf(printf_, "#0117");
	ret1 = fprintf(printf_, "|% 0#6.5ll%|\n");
	ret2 = ft_printf("|% 0#6.5ll%|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0118");
	fprintf(printf_, "#0118");
	ret1 = fprintf(printf_, "|% 0#6.5j%|\n");
	ret2 = ft_printf("|% 0#6.5j%|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0119");
	fprintf(printf_, "#0119");
	ret1 = fprintf(printf_, "|% 0#6.5z%|\n");
	ret2 = ft_printf("|% 0#6.5z%|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0120");
	fprintf(printf_, "#0120");
	ret1 = fprintf(printf_, "|%+#6.5hh%|\n");
	ret2 = ft_printf("|%+#6.5hh%|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0121");
	fprintf(printf_, "#0121");
	ret1 = fprintf(printf_, "|%+#6.5h%|\n");
	ret2 = ft_printf("|%+#6.5h%|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0122");
	fprintf(printf_, "#0122");
	ret1 = fprintf(printf_, "|%+#6.5l%|\n");
	ret2 = ft_printf("|%+#6.5l%|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0123");
	fprintf(printf_, "#0123");
	ret1 = fprintf(printf_, "|%+#6.5ll%|\n");
	ret2 = ft_printf("|%+#6.5ll%|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0124");
	fprintf(printf_, "#0124");
	ret1 = fprintf(printf_, "|%+#6.5j%|\n");
	ret2 = ft_printf("|%+#6.5j%|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0125");
	fprintf(printf_, "#0125");
	ret1 = fprintf(printf_, "|%+#6.5z%|\n");
	ret2 = ft_printf("|%+#6.5z%|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0126");
	fprintf(printf_, "#0126");
	ret1 = fprintf(printf_, "|% +#6.5hh%|\n");
	ret2 = ft_printf("|% +#6.5hh%|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0127");
	fprintf(printf_, "#0127");
	ret1 = fprintf(printf_, "|% +#6.5h%|\n");
	ret2 = ft_printf("|% +#6.5h%|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0128");
	fprintf(printf_, "#0128");
	ret1 = fprintf(printf_, "|% +#6.5l%|\n");
	ret2 = ft_printf("|% +#6.5l%|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0129");
	fprintf(printf_, "#0129");
	ret1 = fprintf(printf_, "|% +#6.5ll%|\n");
	ret2 = ft_printf("|% +#6.5ll%|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0130");
	fprintf(printf_, "#0130");
	ret1 = fprintf(printf_, "|% +#6.5j%|\n");
	ret2 = ft_printf("|% +#6.5j%|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0131");
	fprintf(printf_, "#0131");
	ret1 = fprintf(printf_, "|% +#6.5z%|\n");
	ret2 = ft_printf("|% +#6.5z%|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0132");
	fprintf(printf_, "#0132");
	ret1 = fprintf(printf_, "|%0+#6.5hh%|\n");
	ret2 = ft_printf("|%0+#6.5hh%|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0133");
	fprintf(printf_, "#0133");
	ret1 = fprintf(printf_, "|%0+#6.5h%|\n");
	ret2 = ft_printf("|%0+#6.5h%|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0134");
	fprintf(printf_, "#0134");
	ret1 = fprintf(printf_, "|%0+#6.5l%|\n");
	ret2 = ft_printf("|%0+#6.5l%|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0135");
	fprintf(printf_, "#0135");
	ret1 = fprintf(printf_, "|%0+#6.5ll%|\n");
	ret2 = ft_printf("|%0+#6.5ll%|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0136");
	fprintf(printf_, "#0136");
	ret1 = fprintf(printf_, "|%0+#6.5j%|\n");
	ret2 = ft_printf("|%0+#6.5j%|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0137");
	fprintf(printf_, "#0137");
	ret1 = fprintf(printf_, "|%0+#6.5z%|\n");
	ret2 = ft_printf("|%0+#6.5z%|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0138");
	fprintf(printf_, "#0138");
	ret1 = fprintf(printf_, "|% 0+#6.5hh%|\n");
	ret2 = ft_printf("|% 0+#6.5hh%|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0139");
	fprintf(printf_, "#0139");
	ret1 = fprintf(printf_, "|% 0+#6.5h%|\n");
	ret2 = ft_printf("|% 0+#6.5h%|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0140");
	fprintf(printf_, "#0140");
	ret1 = fprintf(printf_, "|% 0+#6.5l%|\n");
	ret2 = ft_printf("|% 0+#6.5l%|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0141");
	fprintf(printf_, "#0141");
	ret1 = fprintf(printf_, "|% 0+#6.5ll%|\n");
	ret2 = ft_printf("|% 0+#6.5ll%|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0142");
	fprintf(printf_, "#0142");
	ret1 = fprintf(printf_, "|% 0+#6.5j%|\n");
	ret2 = ft_printf("|% 0+#6.5j%|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0143");
	fprintf(printf_, "#0143");
	ret1 = fprintf(printf_, "|% 0+#6.5z%|\n");
	ret2 = ft_printf("|% 0+#6.5z%|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0144");
	fprintf(printf_, "#0144");
	ret1 = fprintf(printf_, "|%-#6.5hh%|\n");
	ret2 = ft_printf("|%-#6.5hh%|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0145");
	fprintf(printf_, "#0145");
	ret1 = fprintf(printf_, "|%-#6.5h%|\n");
	ret2 = ft_printf("|%-#6.5h%|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0146");
	fprintf(printf_, "#0146");
	ret1 = fprintf(printf_, "|%-#6.5l%|\n");
	ret2 = ft_printf("|%-#6.5l%|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0147");
	fprintf(printf_, "#0147");
	ret1 = fprintf(printf_, "|%-#6.5ll%|\n");
	ret2 = ft_printf("|%-#6.5ll%|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0148");
	fprintf(printf_, "#0148");
	ret1 = fprintf(printf_, "|%-#6.5j%|\n");
	ret2 = ft_printf("|%-#6.5j%|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0149");
	fprintf(printf_, "#0149");
	ret1 = fprintf(printf_, "|%-#6.5z%|\n");
	ret2 = ft_printf("|%-#6.5z%|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0150");
	fprintf(printf_, "#0150");
	ret1 = fprintf(printf_, "|% -#6.5hh%|\n");
	ret2 = ft_printf("|% -#6.5hh%|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0151");
	fprintf(printf_, "#0151");
	ret1 = fprintf(printf_, "|% -#6.5h%|\n");
	ret2 = ft_printf("|% -#6.5h%|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0152");
	fprintf(printf_, "#0152");
	ret1 = fprintf(printf_, "|% -#6.5l%|\n");
	ret2 = ft_printf("|% -#6.5l%|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0153");
	fprintf(printf_, "#0153");
	ret1 = fprintf(printf_, "|% -#6.5ll%|\n");
	ret2 = ft_printf("|% -#6.5ll%|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0154");
	fprintf(printf_, "#0154");
	ret1 = fprintf(printf_, "|% -#6.5j%|\n");
	ret2 = ft_printf("|% -#6.5j%|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0155");
	fprintf(printf_, "#0155");
	ret1 = fprintf(printf_, "|% -#6.5z%|\n");
	ret2 = ft_printf("|% -#6.5z%|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0156");
	fprintf(printf_, "#0156");
	ret1 = fprintf(printf_, "|%0-#6.5hh%|\n");
	ret2 = ft_printf("|%0-#6.5hh%|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0157");
	fprintf(printf_, "#0157");
	ret1 = fprintf(printf_, "|%0-#6.5h%|\n");
	ret2 = ft_printf("|%0-#6.5h%|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0158");
	fprintf(printf_, "#0158");
	ret1 = fprintf(printf_, "|%0-#6.5l%|\n");
	ret2 = ft_printf("|%0-#6.5l%|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0159");
	fprintf(printf_, "#0159");
	ret1 = fprintf(printf_, "|%0-#6.5ll%|\n");
	ret2 = ft_printf("|%0-#6.5ll%|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0160");
	fprintf(printf_, "#0160");
	ret1 = fprintf(printf_, "|%0-#6.5j%|\n");
	ret2 = ft_printf("|%0-#6.5j%|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0161");
	fprintf(printf_, "#0161");
	ret1 = fprintf(printf_, "|%0-#6.5z%|\n");
	ret2 = ft_printf("|%0-#6.5z%|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0162");
	fprintf(printf_, "#0162");
	ret1 = fprintf(printf_, "|% 0-#6.5hh%|\n");
	ret2 = ft_printf("|% 0-#6.5hh%|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0163");
	fprintf(printf_, "#0163");
	ret1 = fprintf(printf_, "|% 0-#6.5h%|\n");
	ret2 = ft_printf("|% 0-#6.5h%|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0164");
	fprintf(printf_, "#0164");
	ret1 = fprintf(printf_, "|% 0-#6.5l%|\n");
	ret2 = ft_printf("|% 0-#6.5l%|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0165");
	fprintf(printf_, "#0165");
	ret1 = fprintf(printf_, "|% 0-#6.5ll%|\n");
	ret2 = ft_printf("|% 0-#6.5ll%|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0166");
	fprintf(printf_, "#0166");
	ret1 = fprintf(printf_, "|% 0-#6.5j%|\n");
	ret2 = ft_printf("|% 0-#6.5j%|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0167");
	fprintf(printf_, "#0167");
	ret1 = fprintf(printf_, "|% 0-#6.5z%|\n");
	ret2 = ft_printf("|% 0-#6.5z%|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0168");
	fprintf(printf_, "#0168");
	ret1 = fprintf(printf_, "|%+-#6.5hh%|\n");
	ret2 = ft_printf("|%+-#6.5hh%|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0169");
	fprintf(printf_, "#0169");
	ret1 = fprintf(printf_, "|%+-#6.5h%|\n");
	ret2 = ft_printf("|%+-#6.5h%|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0170");
	fprintf(printf_, "#0170");
	ret1 = fprintf(printf_, "|%+-#6.5l%|\n");
	ret2 = ft_printf("|%+-#6.5l%|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0171");
	fprintf(printf_, "#0171");
	ret1 = fprintf(printf_, "|%+-#6.5ll%|\n");
	ret2 = ft_printf("|%+-#6.5ll%|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0172");
	fprintf(printf_, "#0172");
	ret1 = fprintf(printf_, "|%+-#6.5j%|\n");
	ret2 = ft_printf("|%+-#6.5j%|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0173");
	fprintf(printf_, "#0173");
	ret1 = fprintf(printf_, "|%+-#6.5z%|\n");
	ret2 = ft_printf("|%+-#6.5z%|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0174");
	fprintf(printf_, "#0174");
	ret1 = fprintf(printf_, "|% +-#6.5hh%|\n");
	ret2 = ft_printf("|% +-#6.5hh%|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0175");
	fprintf(printf_, "#0175");
	ret1 = fprintf(printf_, "|% +-#6.5h%|\n");
	ret2 = ft_printf("|% +-#6.5h%|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0176");
	fprintf(printf_, "#0176");
	ret1 = fprintf(printf_, "|% +-#6.5l%|\n");
	ret2 = ft_printf("|% +-#6.5l%|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0177");
	fprintf(printf_, "#0177");
	ret1 = fprintf(printf_, "|% +-#6.5ll%|\n");
	ret2 = ft_printf("|% +-#6.5ll%|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0178");
	fprintf(printf_, "#0178");
	ret1 = fprintf(printf_, "|% +-#6.5j%|\n");
	ret2 = ft_printf("|% +-#6.5j%|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0179");
	fprintf(printf_, "#0179");
	ret1 = fprintf(printf_, "|% +-#6.5z%|\n");
	ret2 = ft_printf("|% +-#6.5z%|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0180");
	fprintf(printf_, "#0180");
	ret1 = fprintf(printf_, "|%0+-#6.5hh%|\n");
	ret2 = ft_printf("|%0+-#6.5hh%|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0181");
	fprintf(printf_, "#0181");
	ret1 = fprintf(printf_, "|%0+-#6.5h%|\n");
	ret2 = ft_printf("|%0+-#6.5h%|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0182");
	fprintf(printf_, "#0182");
	ret1 = fprintf(printf_, "|%0+-#6.5l%|\n");
	ret2 = ft_printf("|%0+-#6.5l%|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0183");
	fprintf(printf_, "#0183");
	ret1 = fprintf(printf_, "|%0+-#6.5ll%|\n");
	ret2 = ft_printf("|%0+-#6.5ll%|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0184");
	fprintf(printf_, "#0184");
	ret1 = fprintf(printf_, "|%0+-#6.5j%|\n");
	ret2 = ft_printf("|%0+-#6.5j%|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0185");
	fprintf(printf_, "#0185");
	ret1 = fprintf(printf_, "|%0+-#6.5z%|\n");
	ret2 = ft_printf("|%0+-#6.5z%|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0186");
	fprintf(printf_, "#0186");
	ret1 = fprintf(printf_, "|% 0+-#6.5hh%|\n");
	ret2 = ft_printf("|% 0+-#6.5hh%|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0187");
	fprintf(printf_, "#0187");
	ret1 = fprintf(printf_, "|% 0+-#6.5h%|\n");
	ret2 = ft_printf("|% 0+-#6.5h%|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0188");
	fprintf(printf_, "#0188");
	ret1 = fprintf(printf_, "|% 0+-#6.5l%|\n");
	ret2 = ft_printf("|% 0+-#6.5l%|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0189");
	fprintf(printf_, "#0189");
	ret1 = fprintf(printf_, "|% 0+-#6.5ll%|\n");
	ret2 = ft_printf("|% 0+-#6.5ll%|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0190");
	fprintf(printf_, "#0190");
	ret1 = fprintf(printf_, "|% 0+-#6.5j%|\n");
	ret2 = ft_printf("|% 0+-#6.5j%|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0191");
	fprintf(printf_, "#0191");
	ret1 = fprintf(printf_, "|% 0+-#6.5z%|\n");
	ret2 = ft_printf("|% 0+-#6.5z%|\n");
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
	fclose(printf_);
	fclose(printf_ret);
	fclose(ft_printf_ret);
	return (0);
}

