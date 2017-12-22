#include <stdio.h>
#include <stdint.h>
#include <locale.h>
#include "libftprintf.h"

int		main(void)
{
	FILE	*printf_, *printf_ret, *ft_printf_ret;
	int		ret1, ret2;

	
	printf_ = fopen("../files/test_m13_printf_print", "w");
	printf_ret = fopen("../files/test_m13_printf_ret", "w");
	ft_printf_ret = fopen("../files/test_m13_ft_printf_ret", "w");
	setvbuf(printf_, NULL, _IONBF, 0);
	setvbuf(printf_ret, NULL, _IONBF, 0);
	setvbuf(ft_printf_ret, NULL, _IONBF, 0);

//@
	ft_printf("#0000");
	fprintf(printf_, "#0000");
	ret1 = fprintf(printf_, "|%.12hhd|\n", 2147483648);
	ret2 = ft_printf("|%.12hhd|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0001");
	fprintf(printf_, "#0001");
	ret1 = fprintf(printf_, "|%.12hd|\n", 2147483648);
	ret2 = ft_printf("|%.12hd|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0002");
	fprintf(printf_, "#0002");
	ret1 = fprintf(printf_, "|%.12ld|\n", 2147483648);
	ret2 = ft_printf("|%.12ld|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0003");
	fprintf(printf_, "#0003");
	ret1 = fprintf(printf_, "|%.12lld|\n", 2147483648);
	ret2 = ft_printf("|%.12lld|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0004");
	fprintf(printf_, "#0004");
	ret1 = fprintf(printf_, "|%.12jd|\n", 2147483648);
	ret2 = ft_printf("|%.12jd|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0005");
	fprintf(printf_, "#0005");
	ret1 = fprintf(printf_, "|%.12zd|\n", 2147483648);
	ret2 = ft_printf("|%.12zd|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0006");
	fprintf(printf_, "#0006");
	ret1 = fprintf(printf_, "|%.12hhi|\n", 2147483648);
	ret2 = ft_printf("|%.12hhi|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0007");
	fprintf(printf_, "#0007");
	ret1 = fprintf(printf_, "|%.12hi|\n", 2147483648);
	ret2 = ft_printf("|%.12hi|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0008");
	fprintf(printf_, "#0008");
	ret1 = fprintf(printf_, "|%.12li|\n", 2147483648);
	ret2 = ft_printf("|%.12li|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0009");
	fprintf(printf_, "#0009");
	ret1 = fprintf(printf_, "|%.12lli|\n", 2147483648);
	ret2 = ft_printf("|%.12lli|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0010");
	fprintf(printf_, "#0010");
	ret1 = fprintf(printf_, "|%.12ji|\n", 2147483648);
	ret2 = ft_printf("|%.12ji|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0011");
	fprintf(printf_, "#0011");
	ret1 = fprintf(printf_, "|%.12zi|\n", 2147483648);
	ret2 = ft_printf("|%.12zi|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0012");
	fprintf(printf_, "#0012");
	ret1 = fprintf(printf_, "|%.12hho|\n", 2147483648);
	ret2 = ft_printf("|%.12hho|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0013");
	fprintf(printf_, "#0013");
	ret1 = fprintf(printf_, "|%.12ho|\n", 2147483648);
	ret2 = ft_printf("|%.12ho|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0014");
	fprintf(printf_, "#0014");
	ret1 = fprintf(printf_, "|%.12lo|\n", 2147483648);
	ret2 = ft_printf("|%.12lo|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0015");
	fprintf(printf_, "#0015");
	ret1 = fprintf(printf_, "|%.12llo|\n", 2147483648);
	ret2 = ft_printf("|%.12llo|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0016");
	fprintf(printf_, "#0016");
	ret1 = fprintf(printf_, "|%.12jo|\n", 2147483648);
	ret2 = ft_printf("|%.12jo|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0017");
	fprintf(printf_, "#0017");
	ret1 = fprintf(printf_, "|%.12zo|\n", 2147483648);
	ret2 = ft_printf("|%.12zo|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0018");
	fprintf(printf_, "#0018");
	ret1 = fprintf(printf_, "|%.12hhu|\n", 2147483648);
	ret2 = ft_printf("|%.12hhu|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0019");
	fprintf(printf_, "#0019");
	ret1 = fprintf(printf_, "|%.12hu|\n", 2147483648);
	ret2 = ft_printf("|%.12hu|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0020");
	fprintf(printf_, "#0020");
	ret1 = fprintf(printf_, "|%.12lu|\n", 2147483648);
	ret2 = ft_printf("|%.12lu|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0021");
	fprintf(printf_, "#0021");
	ret1 = fprintf(printf_, "|%.12llu|\n", 2147483648);
	ret2 = ft_printf("|%.12llu|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0022");
	fprintf(printf_, "#0022");
	ret1 = fprintf(printf_, "|%.12ju|\n", 2147483648);
	ret2 = ft_printf("|%.12ju|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0023");
	fprintf(printf_, "#0023");
	ret1 = fprintf(printf_, "|%.12zu|\n", 2147483648);
	ret2 = ft_printf("|%.12zu|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0024");
	fprintf(printf_, "#0024");
	ret1 = fprintf(printf_, "|%.12hhx|\n", 2147483648);
	ret2 = ft_printf("|%.12hhx|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0025");
	fprintf(printf_, "#0025");
	ret1 = fprintf(printf_, "|%.12hx|\n", 2147483648);
	ret2 = ft_printf("|%.12hx|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0026");
	fprintf(printf_, "#0026");
	ret1 = fprintf(printf_, "|%.12lx|\n", 2147483648);
	ret2 = ft_printf("|%.12lx|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0027");
	fprintf(printf_, "#0027");
	ret1 = fprintf(printf_, "|%.12llx|\n", 2147483648);
	ret2 = ft_printf("|%.12llx|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0028");
	fprintf(printf_, "#0028");
	ret1 = fprintf(printf_, "|%.12jx|\n", 2147483648);
	ret2 = ft_printf("|%.12jx|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0029");
	fprintf(printf_, "#0029");
	ret1 = fprintf(printf_, "|%.12zx|\n", 2147483648);
	ret2 = ft_printf("|%.12zx|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0030");
	fprintf(printf_, "#0030");
	ret1 = fprintf(printf_, "|%.12hhX|\n", 2147483648);
	ret2 = ft_printf("|%.12hhX|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0031");
	fprintf(printf_, "#0031");
	ret1 = fprintf(printf_, "|%.12hX|\n", 2147483648);
	ret2 = ft_printf("|%.12hX|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0032");
	fprintf(printf_, "#0032");
	ret1 = fprintf(printf_, "|%.12lX|\n", 2147483648);
	ret2 = ft_printf("|%.12lX|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0033");
	fprintf(printf_, "#0033");
	ret1 = fprintf(printf_, "|%.12llX|\n", 2147483648);
	ret2 = ft_printf("|%.12llX|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0034");
	fprintf(printf_, "#0034");
	ret1 = fprintf(printf_, "|%.12jX|\n", 2147483648);
	ret2 = ft_printf("|%.12jX|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0035");
	fprintf(printf_, "#0035");
	ret1 = fprintf(printf_, "|%.12zX|\n", 2147483648);
	ret2 = ft_printf("|%.12zX|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0036");
	fprintf(printf_, "#0036");
	ret1 = fprintf(printf_, "|% .12hhd|\n", 2147483648);
	ret2 = ft_printf("|% .12hhd|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0037");
	fprintf(printf_, "#0037");
	ret1 = fprintf(printf_, "|% .12hd|\n", 2147483648);
	ret2 = ft_printf("|% .12hd|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0038");
	fprintf(printf_, "#0038");
	ret1 = fprintf(printf_, "|% .12ld|\n", 2147483648);
	ret2 = ft_printf("|% .12ld|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0039");
	fprintf(printf_, "#0039");
	ret1 = fprintf(printf_, "|% .12lld|\n", 2147483648);
	ret2 = ft_printf("|% .12lld|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0040");
	fprintf(printf_, "#0040");
	ret1 = fprintf(printf_, "|% .12jd|\n", 2147483648);
	ret2 = ft_printf("|% .12jd|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0041");
	fprintf(printf_, "#0041");
	ret1 = fprintf(printf_, "|% .12zd|\n", 2147483648);
	ret2 = ft_printf("|% .12zd|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0042");
	fprintf(printf_, "#0042");
	ret1 = fprintf(printf_, "|% .12hhi|\n", 2147483648);
	ret2 = ft_printf("|% .12hhi|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0043");
	fprintf(printf_, "#0043");
	ret1 = fprintf(printf_, "|% .12hi|\n", 2147483648);
	ret2 = ft_printf("|% .12hi|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0044");
	fprintf(printf_, "#0044");
	ret1 = fprintf(printf_, "|% .12li|\n", 2147483648);
	ret2 = ft_printf("|% .12li|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0045");
	fprintf(printf_, "#0045");
	ret1 = fprintf(printf_, "|% .12lli|\n", 2147483648);
	ret2 = ft_printf("|% .12lli|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0046");
	fprintf(printf_, "#0046");
	ret1 = fprintf(printf_, "|% .12ji|\n", 2147483648);
	ret2 = ft_printf("|% .12ji|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0047");
	fprintf(printf_, "#0047");
	ret1 = fprintf(printf_, "|% .12zi|\n", 2147483648);
	ret2 = ft_printf("|% .12zi|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0048");
	fprintf(printf_, "#0048");
	ret1 = fprintf(printf_, "|% .12hho|\n", 2147483648);
	ret2 = ft_printf("|% .12hho|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0049");
	fprintf(printf_, "#0049");
	ret1 = fprintf(printf_, "|% .12ho|\n", 2147483648);
	ret2 = ft_printf("|% .12ho|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0050");
	fprintf(printf_, "#0050");
	ret1 = fprintf(printf_, "|% .12lo|\n", 2147483648);
	ret2 = ft_printf("|% .12lo|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0051");
	fprintf(printf_, "#0051");
	ret1 = fprintf(printf_, "|% .12llo|\n", 2147483648);
	ret2 = ft_printf("|% .12llo|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0052");
	fprintf(printf_, "#0052");
	ret1 = fprintf(printf_, "|% .12jo|\n", 2147483648);
	ret2 = ft_printf("|% .12jo|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0053");
	fprintf(printf_, "#0053");
	ret1 = fprintf(printf_, "|% .12zo|\n", 2147483648);
	ret2 = ft_printf("|% .12zo|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0054");
	fprintf(printf_, "#0054");
	ret1 = fprintf(printf_, "|% .12hhu|\n", 2147483648);
	ret2 = ft_printf("|% .12hhu|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0055");
	fprintf(printf_, "#0055");
	ret1 = fprintf(printf_, "|% .12hu|\n", 2147483648);
	ret2 = ft_printf("|% .12hu|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0056");
	fprintf(printf_, "#0056");
	ret1 = fprintf(printf_, "|% .12lu|\n", 2147483648);
	ret2 = ft_printf("|% .12lu|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0057");
	fprintf(printf_, "#0057");
	ret1 = fprintf(printf_, "|% .12llu|\n", 2147483648);
	ret2 = ft_printf("|% .12llu|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0058");
	fprintf(printf_, "#0058");
	ret1 = fprintf(printf_, "|% .12ju|\n", 2147483648);
	ret2 = ft_printf("|% .12ju|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0059");
	fprintf(printf_, "#0059");
	ret1 = fprintf(printf_, "|% .12zu|\n", 2147483648);
	ret2 = ft_printf("|% .12zu|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0060");
	fprintf(printf_, "#0060");
	ret1 = fprintf(printf_, "|% .12hhx|\n", 2147483648);
	ret2 = ft_printf("|% .12hhx|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0061");
	fprintf(printf_, "#0061");
	ret1 = fprintf(printf_, "|% .12hx|\n", 2147483648);
	ret2 = ft_printf("|% .12hx|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0062");
	fprintf(printf_, "#0062");
	ret1 = fprintf(printf_, "|% .12lx|\n", 2147483648);
	ret2 = ft_printf("|% .12lx|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0063");
	fprintf(printf_, "#0063");
	ret1 = fprintf(printf_, "|% .12llx|\n", 2147483648);
	ret2 = ft_printf("|% .12llx|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0064");
	fprintf(printf_, "#0064");
	ret1 = fprintf(printf_, "|% .12jx|\n", 2147483648);
	ret2 = ft_printf("|% .12jx|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0065");
	fprintf(printf_, "#0065");
	ret1 = fprintf(printf_, "|% .12zx|\n", 2147483648);
	ret2 = ft_printf("|% .12zx|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0066");
	fprintf(printf_, "#0066");
	ret1 = fprintf(printf_, "|% .12hhX|\n", 2147483648);
	ret2 = ft_printf("|% .12hhX|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0067");
	fprintf(printf_, "#0067");
	ret1 = fprintf(printf_, "|% .12hX|\n", 2147483648);
	ret2 = ft_printf("|% .12hX|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0068");
	fprintf(printf_, "#0068");
	ret1 = fprintf(printf_, "|% .12lX|\n", 2147483648);
	ret2 = ft_printf("|% .12lX|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0069");
	fprintf(printf_, "#0069");
	ret1 = fprintf(printf_, "|% .12llX|\n", 2147483648);
	ret2 = ft_printf("|% .12llX|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0070");
	fprintf(printf_, "#0070");
	ret1 = fprintf(printf_, "|% .12jX|\n", 2147483648);
	ret2 = ft_printf("|% .12jX|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0071");
	fprintf(printf_, "#0071");
	ret1 = fprintf(printf_, "|% .12zX|\n", 2147483648);
	ret2 = ft_printf("|% .12zX|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0072");
	fprintf(printf_, "#0072");
	ret1 = fprintf(printf_, "|%0.12hhd|\n", 2147483648);
	ret2 = ft_printf("|%0.12hhd|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0073");
	fprintf(printf_, "#0073");
	ret1 = fprintf(printf_, "|%0.12hd|\n", 2147483648);
	ret2 = ft_printf("|%0.12hd|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0074");
	fprintf(printf_, "#0074");
	ret1 = fprintf(printf_, "|%0.12ld|\n", 2147483648);
	ret2 = ft_printf("|%0.12ld|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0075");
	fprintf(printf_, "#0075");
	ret1 = fprintf(printf_, "|%0.12lld|\n", 2147483648);
	ret2 = ft_printf("|%0.12lld|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0076");
	fprintf(printf_, "#0076");
	ret1 = fprintf(printf_, "|%0.12jd|\n", 2147483648);
	ret2 = ft_printf("|%0.12jd|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0077");
	fprintf(printf_, "#0077");
	ret1 = fprintf(printf_, "|%0.12zd|\n", 2147483648);
	ret2 = ft_printf("|%0.12zd|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0078");
	fprintf(printf_, "#0078");
	ret1 = fprintf(printf_, "|%0.12hhi|\n", 2147483648);
	ret2 = ft_printf("|%0.12hhi|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0079");
	fprintf(printf_, "#0079");
	ret1 = fprintf(printf_, "|%0.12hi|\n", 2147483648);
	ret2 = ft_printf("|%0.12hi|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0080");
	fprintf(printf_, "#0080");
	ret1 = fprintf(printf_, "|%0.12li|\n", 2147483648);
	ret2 = ft_printf("|%0.12li|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0081");
	fprintf(printf_, "#0081");
	ret1 = fprintf(printf_, "|%0.12lli|\n", 2147483648);
	ret2 = ft_printf("|%0.12lli|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0082");
	fprintf(printf_, "#0082");
	ret1 = fprintf(printf_, "|%0.12ji|\n", 2147483648);
	ret2 = ft_printf("|%0.12ji|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0083");
	fprintf(printf_, "#0083");
	ret1 = fprintf(printf_, "|%0.12zi|\n", 2147483648);
	ret2 = ft_printf("|%0.12zi|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0084");
	fprintf(printf_, "#0084");
	ret1 = fprintf(printf_, "|%0.12hho|\n", 2147483648);
	ret2 = ft_printf("|%0.12hho|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0085");
	fprintf(printf_, "#0085");
	ret1 = fprintf(printf_, "|%0.12ho|\n", 2147483648);
	ret2 = ft_printf("|%0.12ho|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0086");
	fprintf(printf_, "#0086");
	ret1 = fprintf(printf_, "|%0.12lo|\n", 2147483648);
	ret2 = ft_printf("|%0.12lo|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0087");
	fprintf(printf_, "#0087");
	ret1 = fprintf(printf_, "|%0.12llo|\n", 2147483648);
	ret2 = ft_printf("|%0.12llo|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0088");
	fprintf(printf_, "#0088");
	ret1 = fprintf(printf_, "|%0.12jo|\n", 2147483648);
	ret2 = ft_printf("|%0.12jo|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0089");
	fprintf(printf_, "#0089");
	ret1 = fprintf(printf_, "|%0.12zo|\n", 2147483648);
	ret2 = ft_printf("|%0.12zo|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0090");
	fprintf(printf_, "#0090");
	ret1 = fprintf(printf_, "|%0.12hhu|\n", 2147483648);
	ret2 = ft_printf("|%0.12hhu|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0091");
	fprintf(printf_, "#0091");
	ret1 = fprintf(printf_, "|%0.12hu|\n", 2147483648);
	ret2 = ft_printf("|%0.12hu|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0092");
	fprintf(printf_, "#0092");
	ret1 = fprintf(printf_, "|%0.12lu|\n", 2147483648);
	ret2 = ft_printf("|%0.12lu|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0093");
	fprintf(printf_, "#0093");
	ret1 = fprintf(printf_, "|%0.12llu|\n", 2147483648);
	ret2 = ft_printf("|%0.12llu|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0094");
	fprintf(printf_, "#0094");
	ret1 = fprintf(printf_, "|%0.12ju|\n", 2147483648);
	ret2 = ft_printf("|%0.12ju|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0095");
	fprintf(printf_, "#0095");
	ret1 = fprintf(printf_, "|%0.12zu|\n", 2147483648);
	ret2 = ft_printf("|%0.12zu|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0096");
	fprintf(printf_, "#0096");
	ret1 = fprintf(printf_, "|%0.12hhx|\n", 2147483648);
	ret2 = ft_printf("|%0.12hhx|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0097");
	fprintf(printf_, "#0097");
	ret1 = fprintf(printf_, "|%0.12hx|\n", 2147483648);
	ret2 = ft_printf("|%0.12hx|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0098");
	fprintf(printf_, "#0098");
	ret1 = fprintf(printf_, "|%0.12lx|\n", 2147483648);
	ret2 = ft_printf("|%0.12lx|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0099");
	fprintf(printf_, "#0099");
	ret1 = fprintf(printf_, "|%0.12llx|\n", 2147483648);
	ret2 = ft_printf("|%0.12llx|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0100");
	fprintf(printf_, "#0100");
	ret1 = fprintf(printf_, "|%0.12jx|\n", 2147483648);
	ret2 = ft_printf("|%0.12jx|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0101");
	fprintf(printf_, "#0101");
	ret1 = fprintf(printf_, "|%0.12zx|\n", 2147483648);
	ret2 = ft_printf("|%0.12zx|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0102");
	fprintf(printf_, "#0102");
	ret1 = fprintf(printf_, "|%0.12hhX|\n", 2147483648);
	ret2 = ft_printf("|%0.12hhX|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0103");
	fprintf(printf_, "#0103");
	ret1 = fprintf(printf_, "|%0.12hX|\n", 2147483648);
	ret2 = ft_printf("|%0.12hX|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0104");
	fprintf(printf_, "#0104");
	ret1 = fprintf(printf_, "|%0.12lX|\n", 2147483648);
	ret2 = ft_printf("|%0.12lX|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0105");
	fprintf(printf_, "#0105");
	ret1 = fprintf(printf_, "|%0.12llX|\n", 2147483648);
	ret2 = ft_printf("|%0.12llX|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0106");
	fprintf(printf_, "#0106");
	ret1 = fprintf(printf_, "|%0.12jX|\n", 2147483648);
	ret2 = ft_printf("|%0.12jX|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0107");
	fprintf(printf_, "#0107");
	ret1 = fprintf(printf_, "|%0.12zX|\n", 2147483648);
	ret2 = ft_printf("|%0.12zX|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0108");
	fprintf(printf_, "#0108");
	ret1 = fprintf(printf_, "|% 0.12hhd|\n", 2147483648);
	ret2 = ft_printf("|% 0.12hhd|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0109");
	fprintf(printf_, "#0109");
	ret1 = fprintf(printf_, "|% 0.12hd|\n", 2147483648);
	ret2 = ft_printf("|% 0.12hd|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0110");
	fprintf(printf_, "#0110");
	ret1 = fprintf(printf_, "|% 0.12ld|\n", 2147483648);
	ret2 = ft_printf("|% 0.12ld|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0111");
	fprintf(printf_, "#0111");
	ret1 = fprintf(printf_, "|% 0.12lld|\n", 2147483648);
	ret2 = ft_printf("|% 0.12lld|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0112");
	fprintf(printf_, "#0112");
	ret1 = fprintf(printf_, "|% 0.12jd|\n", 2147483648);
	ret2 = ft_printf("|% 0.12jd|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0113");
	fprintf(printf_, "#0113");
	ret1 = fprintf(printf_, "|% 0.12zd|\n", 2147483648);
	ret2 = ft_printf("|% 0.12zd|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0114");
	fprintf(printf_, "#0114");
	ret1 = fprintf(printf_, "|% 0.12hhi|\n", 2147483648);
	ret2 = ft_printf("|% 0.12hhi|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0115");
	fprintf(printf_, "#0115");
	ret1 = fprintf(printf_, "|% 0.12hi|\n", 2147483648);
	ret2 = ft_printf("|% 0.12hi|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0116");
	fprintf(printf_, "#0116");
	ret1 = fprintf(printf_, "|% 0.12li|\n", 2147483648);
	ret2 = ft_printf("|% 0.12li|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0117");
	fprintf(printf_, "#0117");
	ret1 = fprintf(printf_, "|% 0.12lli|\n", 2147483648);
	ret2 = ft_printf("|% 0.12lli|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0118");
	fprintf(printf_, "#0118");
	ret1 = fprintf(printf_, "|% 0.12ji|\n", 2147483648);
	ret2 = ft_printf("|% 0.12ji|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0119");
	fprintf(printf_, "#0119");
	ret1 = fprintf(printf_, "|% 0.12zi|\n", 2147483648);
	ret2 = ft_printf("|% 0.12zi|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0120");
	fprintf(printf_, "#0120");
	ret1 = fprintf(printf_, "|% 0.12hho|\n", 2147483648);
	ret2 = ft_printf("|% 0.12hho|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0121");
	fprintf(printf_, "#0121");
	ret1 = fprintf(printf_, "|% 0.12ho|\n", 2147483648);
	ret2 = ft_printf("|% 0.12ho|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0122");
	fprintf(printf_, "#0122");
	ret1 = fprintf(printf_, "|% 0.12lo|\n", 2147483648);
	ret2 = ft_printf("|% 0.12lo|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0123");
	fprintf(printf_, "#0123");
	ret1 = fprintf(printf_, "|% 0.12llo|\n", 2147483648);
	ret2 = ft_printf("|% 0.12llo|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0124");
	fprintf(printf_, "#0124");
	ret1 = fprintf(printf_, "|% 0.12jo|\n", 2147483648);
	ret2 = ft_printf("|% 0.12jo|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0125");
	fprintf(printf_, "#0125");
	ret1 = fprintf(printf_, "|% 0.12zo|\n", 2147483648);
	ret2 = ft_printf("|% 0.12zo|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0126");
	fprintf(printf_, "#0126");
	ret1 = fprintf(printf_, "|% 0.12hhu|\n", 2147483648);
	ret2 = ft_printf("|% 0.12hhu|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0127");
	fprintf(printf_, "#0127");
	ret1 = fprintf(printf_, "|% 0.12hu|\n", 2147483648);
	ret2 = ft_printf("|% 0.12hu|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0128");
	fprintf(printf_, "#0128");
	ret1 = fprintf(printf_, "|% 0.12lu|\n", 2147483648);
	ret2 = ft_printf("|% 0.12lu|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0129");
	fprintf(printf_, "#0129");
	ret1 = fprintf(printf_, "|% 0.12llu|\n", 2147483648);
	ret2 = ft_printf("|% 0.12llu|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0130");
	fprintf(printf_, "#0130");
	ret1 = fprintf(printf_, "|% 0.12ju|\n", 2147483648);
	ret2 = ft_printf("|% 0.12ju|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0131");
	fprintf(printf_, "#0131");
	ret1 = fprintf(printf_, "|% 0.12zu|\n", 2147483648);
	ret2 = ft_printf("|% 0.12zu|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0132");
	fprintf(printf_, "#0132");
	ret1 = fprintf(printf_, "|% 0.12hhx|\n", 2147483648);
	ret2 = ft_printf("|% 0.12hhx|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0133");
	fprintf(printf_, "#0133");
	ret1 = fprintf(printf_, "|% 0.12hx|\n", 2147483648);
	ret2 = ft_printf("|% 0.12hx|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0134");
	fprintf(printf_, "#0134");
	ret1 = fprintf(printf_, "|% 0.12lx|\n", 2147483648);
	ret2 = ft_printf("|% 0.12lx|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0135");
	fprintf(printf_, "#0135");
	ret1 = fprintf(printf_, "|% 0.12llx|\n", 2147483648);
	ret2 = ft_printf("|% 0.12llx|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0136");
	fprintf(printf_, "#0136");
	ret1 = fprintf(printf_, "|% 0.12jx|\n", 2147483648);
	ret2 = ft_printf("|% 0.12jx|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0137");
	fprintf(printf_, "#0137");
	ret1 = fprintf(printf_, "|% 0.12zx|\n", 2147483648);
	ret2 = ft_printf("|% 0.12zx|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0138");
	fprintf(printf_, "#0138");
	ret1 = fprintf(printf_, "|% 0.12hhX|\n", 2147483648);
	ret2 = ft_printf("|% 0.12hhX|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0139");
	fprintf(printf_, "#0139");
	ret1 = fprintf(printf_, "|% 0.12hX|\n", 2147483648);
	ret2 = ft_printf("|% 0.12hX|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0140");
	fprintf(printf_, "#0140");
	ret1 = fprintf(printf_, "|% 0.12lX|\n", 2147483648);
	ret2 = ft_printf("|% 0.12lX|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0141");
	fprintf(printf_, "#0141");
	ret1 = fprintf(printf_, "|% 0.12llX|\n", 2147483648);
	ret2 = ft_printf("|% 0.12llX|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0142");
	fprintf(printf_, "#0142");
	ret1 = fprintf(printf_, "|% 0.12jX|\n", 2147483648);
	ret2 = ft_printf("|% 0.12jX|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0143");
	fprintf(printf_, "#0143");
	ret1 = fprintf(printf_, "|% 0.12zX|\n", 2147483648);
	ret2 = ft_printf("|% 0.12zX|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0144");
	fprintf(printf_, "#0144");
	ret1 = fprintf(printf_, "|%+.12hhd|\n", 2147483648);
	ret2 = ft_printf("|%+.12hhd|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0145");
	fprintf(printf_, "#0145");
	ret1 = fprintf(printf_, "|%+.12hd|\n", 2147483648);
	ret2 = ft_printf("|%+.12hd|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0146");
	fprintf(printf_, "#0146");
	ret1 = fprintf(printf_, "|%+.12ld|\n", 2147483648);
	ret2 = ft_printf("|%+.12ld|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0147");
	fprintf(printf_, "#0147");
	ret1 = fprintf(printf_, "|%+.12lld|\n", 2147483648);
	ret2 = ft_printf("|%+.12lld|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0148");
	fprintf(printf_, "#0148");
	ret1 = fprintf(printf_, "|%+.12jd|\n", 2147483648);
	ret2 = ft_printf("|%+.12jd|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0149");
	fprintf(printf_, "#0149");
	ret1 = fprintf(printf_, "|%+.12zd|\n", 2147483648);
	ret2 = ft_printf("|%+.12zd|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0150");
	fprintf(printf_, "#0150");
	ret1 = fprintf(printf_, "|%+.12hhi|\n", 2147483648);
	ret2 = ft_printf("|%+.12hhi|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0151");
	fprintf(printf_, "#0151");
	ret1 = fprintf(printf_, "|%+.12hi|\n", 2147483648);
	ret2 = ft_printf("|%+.12hi|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0152");
	fprintf(printf_, "#0152");
	ret1 = fprintf(printf_, "|%+.12li|\n", 2147483648);
	ret2 = ft_printf("|%+.12li|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0153");
	fprintf(printf_, "#0153");
	ret1 = fprintf(printf_, "|%+.12lli|\n", 2147483648);
	ret2 = ft_printf("|%+.12lli|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0154");
	fprintf(printf_, "#0154");
	ret1 = fprintf(printf_, "|%+.12ji|\n", 2147483648);
	ret2 = ft_printf("|%+.12ji|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0155");
	fprintf(printf_, "#0155");
	ret1 = fprintf(printf_, "|%+.12zi|\n", 2147483648);
	ret2 = ft_printf("|%+.12zi|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0156");
	fprintf(printf_, "#0156");
	ret1 = fprintf(printf_, "|%+.12hho|\n", 2147483648);
	ret2 = ft_printf("|%+.12hho|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0157");
	fprintf(printf_, "#0157");
	ret1 = fprintf(printf_, "|%+.12ho|\n", 2147483648);
	ret2 = ft_printf("|%+.12ho|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0158");
	fprintf(printf_, "#0158");
	ret1 = fprintf(printf_, "|%+.12lo|\n", 2147483648);
	ret2 = ft_printf("|%+.12lo|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0159");
	fprintf(printf_, "#0159");
	ret1 = fprintf(printf_, "|%+.12llo|\n", 2147483648);
	ret2 = ft_printf("|%+.12llo|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0160");
	fprintf(printf_, "#0160");
	ret1 = fprintf(printf_, "|%+.12jo|\n", 2147483648);
	ret2 = ft_printf("|%+.12jo|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0161");
	fprintf(printf_, "#0161");
	ret1 = fprintf(printf_, "|%+.12zo|\n", 2147483648);
	ret2 = ft_printf("|%+.12zo|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0162");
	fprintf(printf_, "#0162");
	ret1 = fprintf(printf_, "|%+.12hhu|\n", 2147483648);
	ret2 = ft_printf("|%+.12hhu|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0163");
	fprintf(printf_, "#0163");
	ret1 = fprintf(printf_, "|%+.12hu|\n", 2147483648);
	ret2 = ft_printf("|%+.12hu|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0164");
	fprintf(printf_, "#0164");
	ret1 = fprintf(printf_, "|%+.12lu|\n", 2147483648);
	ret2 = ft_printf("|%+.12lu|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0165");
	fprintf(printf_, "#0165");
	ret1 = fprintf(printf_, "|%+.12llu|\n", 2147483648);
	ret2 = ft_printf("|%+.12llu|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0166");
	fprintf(printf_, "#0166");
	ret1 = fprintf(printf_, "|%+.12ju|\n", 2147483648);
	ret2 = ft_printf("|%+.12ju|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0167");
	fprintf(printf_, "#0167");
	ret1 = fprintf(printf_, "|%+.12zu|\n", 2147483648);
	ret2 = ft_printf("|%+.12zu|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0168");
	fprintf(printf_, "#0168");
	ret1 = fprintf(printf_, "|%+.12hhx|\n", 2147483648);
	ret2 = ft_printf("|%+.12hhx|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0169");
	fprintf(printf_, "#0169");
	ret1 = fprintf(printf_, "|%+.12hx|\n", 2147483648);
	ret2 = ft_printf("|%+.12hx|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0170");
	fprintf(printf_, "#0170");
	ret1 = fprintf(printf_, "|%+.12lx|\n", 2147483648);
	ret2 = ft_printf("|%+.12lx|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0171");
	fprintf(printf_, "#0171");
	ret1 = fprintf(printf_, "|%+.12llx|\n", 2147483648);
	ret2 = ft_printf("|%+.12llx|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0172");
	fprintf(printf_, "#0172");
	ret1 = fprintf(printf_, "|%+.12jx|\n", 2147483648);
	ret2 = ft_printf("|%+.12jx|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0173");
	fprintf(printf_, "#0173");
	ret1 = fprintf(printf_, "|%+.12zx|\n", 2147483648);
	ret2 = ft_printf("|%+.12zx|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0174");
	fprintf(printf_, "#0174");
	ret1 = fprintf(printf_, "|%+.12hhX|\n", 2147483648);
	ret2 = ft_printf("|%+.12hhX|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0175");
	fprintf(printf_, "#0175");
	ret1 = fprintf(printf_, "|%+.12hX|\n", 2147483648);
	ret2 = ft_printf("|%+.12hX|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0176");
	fprintf(printf_, "#0176");
	ret1 = fprintf(printf_, "|%+.12lX|\n", 2147483648);
	ret2 = ft_printf("|%+.12lX|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0177");
	fprintf(printf_, "#0177");
	ret1 = fprintf(printf_, "|%+.12llX|\n", 2147483648);
	ret2 = ft_printf("|%+.12llX|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0178");
	fprintf(printf_, "#0178");
	ret1 = fprintf(printf_, "|%+.12jX|\n", 2147483648);
	ret2 = ft_printf("|%+.12jX|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0179");
	fprintf(printf_, "#0179");
	ret1 = fprintf(printf_, "|%+.12zX|\n", 2147483648);
	ret2 = ft_printf("|%+.12zX|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0180");
	fprintf(printf_, "#0180");
	ret1 = fprintf(printf_, "|% +.12hhd|\n", 2147483648);
	ret2 = ft_printf("|% +.12hhd|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0181");
	fprintf(printf_, "#0181");
	ret1 = fprintf(printf_, "|% +.12hd|\n", 2147483648);
	ret2 = ft_printf("|% +.12hd|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0182");
	fprintf(printf_, "#0182");
	ret1 = fprintf(printf_, "|% +.12ld|\n", 2147483648);
	ret2 = ft_printf("|% +.12ld|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0183");
	fprintf(printf_, "#0183");
	ret1 = fprintf(printf_, "|% +.12lld|\n", 2147483648);
	ret2 = ft_printf("|% +.12lld|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0184");
	fprintf(printf_, "#0184");
	ret1 = fprintf(printf_, "|% +.12jd|\n", 2147483648);
	ret2 = ft_printf("|% +.12jd|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0185");
	fprintf(printf_, "#0185");
	ret1 = fprintf(printf_, "|% +.12zd|\n", 2147483648);
	ret2 = ft_printf("|% +.12zd|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0186");
	fprintf(printf_, "#0186");
	ret1 = fprintf(printf_, "|% +.12hhi|\n", 2147483648);
	ret2 = ft_printf("|% +.12hhi|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0187");
	fprintf(printf_, "#0187");
	ret1 = fprintf(printf_, "|% +.12hi|\n", 2147483648);
	ret2 = ft_printf("|% +.12hi|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0188");
	fprintf(printf_, "#0188");
	ret1 = fprintf(printf_, "|% +.12li|\n", 2147483648);
	ret2 = ft_printf("|% +.12li|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0189");
	fprintf(printf_, "#0189");
	ret1 = fprintf(printf_, "|% +.12lli|\n", 2147483648);
	ret2 = ft_printf("|% +.12lli|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0190");
	fprintf(printf_, "#0190");
	ret1 = fprintf(printf_, "|% +.12ji|\n", 2147483648);
	ret2 = ft_printf("|% +.12ji|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0191");
	fprintf(printf_, "#0191");
	ret1 = fprintf(printf_, "|% +.12zi|\n", 2147483648);
	ret2 = ft_printf("|% +.12zi|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0192");
	fprintf(printf_, "#0192");
	ret1 = fprintf(printf_, "|% +.12hho|\n", 2147483648);
	ret2 = ft_printf("|% +.12hho|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0193");
	fprintf(printf_, "#0193");
	ret1 = fprintf(printf_, "|% +.12ho|\n", 2147483648);
	ret2 = ft_printf("|% +.12ho|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0194");
	fprintf(printf_, "#0194");
	ret1 = fprintf(printf_, "|% +.12lo|\n", 2147483648);
	ret2 = ft_printf("|% +.12lo|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0195");
	fprintf(printf_, "#0195");
	ret1 = fprintf(printf_, "|% +.12llo|\n", 2147483648);
	ret2 = ft_printf("|% +.12llo|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0196");
	fprintf(printf_, "#0196");
	ret1 = fprintf(printf_, "|% +.12jo|\n", 2147483648);
	ret2 = ft_printf("|% +.12jo|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0197");
	fprintf(printf_, "#0197");
	ret1 = fprintf(printf_, "|% +.12zo|\n", 2147483648);
	ret2 = ft_printf("|% +.12zo|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0198");
	fprintf(printf_, "#0198");
	ret1 = fprintf(printf_, "|% +.12hhu|\n", 2147483648);
	ret2 = ft_printf("|% +.12hhu|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0199");
	fprintf(printf_, "#0199");
	ret1 = fprintf(printf_, "|% +.12hu|\n", 2147483648);
	ret2 = ft_printf("|% +.12hu|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0200");
	fprintf(printf_, "#0200");
	ret1 = fprintf(printf_, "|% +.12lu|\n", 2147483648);
	ret2 = ft_printf("|% +.12lu|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0201");
	fprintf(printf_, "#0201");
	ret1 = fprintf(printf_, "|% +.12llu|\n", 2147483648);
	ret2 = ft_printf("|% +.12llu|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0202");
	fprintf(printf_, "#0202");
	ret1 = fprintf(printf_, "|% +.12ju|\n", 2147483648);
	ret2 = ft_printf("|% +.12ju|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0203");
	fprintf(printf_, "#0203");
	ret1 = fprintf(printf_, "|% +.12zu|\n", 2147483648);
	ret2 = ft_printf("|% +.12zu|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0204");
	fprintf(printf_, "#0204");
	ret1 = fprintf(printf_, "|% +.12hhx|\n", 2147483648);
	ret2 = ft_printf("|% +.12hhx|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0205");
	fprintf(printf_, "#0205");
	ret1 = fprintf(printf_, "|% +.12hx|\n", 2147483648);
	ret2 = ft_printf("|% +.12hx|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0206");
	fprintf(printf_, "#0206");
	ret1 = fprintf(printf_, "|% +.12lx|\n", 2147483648);
	ret2 = ft_printf("|% +.12lx|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0207");
	fprintf(printf_, "#0207");
	ret1 = fprintf(printf_, "|% +.12llx|\n", 2147483648);
	ret2 = ft_printf("|% +.12llx|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0208");
	fprintf(printf_, "#0208");
	ret1 = fprintf(printf_, "|% +.12jx|\n", 2147483648);
	ret2 = ft_printf("|% +.12jx|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0209");
	fprintf(printf_, "#0209");
	ret1 = fprintf(printf_, "|% +.12zx|\n", 2147483648);
	ret2 = ft_printf("|% +.12zx|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0210");
	fprintf(printf_, "#0210");
	ret1 = fprintf(printf_, "|% +.12hhX|\n", 2147483648);
	ret2 = ft_printf("|% +.12hhX|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0211");
	fprintf(printf_, "#0211");
	ret1 = fprintf(printf_, "|% +.12hX|\n", 2147483648);
	ret2 = ft_printf("|% +.12hX|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0212");
	fprintf(printf_, "#0212");
	ret1 = fprintf(printf_, "|% +.12lX|\n", 2147483648);
	ret2 = ft_printf("|% +.12lX|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0213");
	fprintf(printf_, "#0213");
	ret1 = fprintf(printf_, "|% +.12llX|\n", 2147483648);
	ret2 = ft_printf("|% +.12llX|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0214");
	fprintf(printf_, "#0214");
	ret1 = fprintf(printf_, "|% +.12jX|\n", 2147483648);
	ret2 = ft_printf("|% +.12jX|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0215");
	fprintf(printf_, "#0215");
	ret1 = fprintf(printf_, "|% +.12zX|\n", 2147483648);
	ret2 = ft_printf("|% +.12zX|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0216");
	fprintf(printf_, "#0216");
	ret1 = fprintf(printf_, "|%0+.12hhd|\n", 2147483648);
	ret2 = ft_printf("|%0+.12hhd|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0217");
	fprintf(printf_, "#0217");
	ret1 = fprintf(printf_, "|%0+.12hd|\n", 2147483648);
	ret2 = ft_printf("|%0+.12hd|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0218");
	fprintf(printf_, "#0218");
	ret1 = fprintf(printf_, "|%0+.12ld|\n", 2147483648);
	ret2 = ft_printf("|%0+.12ld|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0219");
	fprintf(printf_, "#0219");
	ret1 = fprintf(printf_, "|%0+.12lld|\n", 2147483648);
	ret2 = ft_printf("|%0+.12lld|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0220");
	fprintf(printf_, "#0220");
	ret1 = fprintf(printf_, "|%0+.12jd|\n", 2147483648);
	ret2 = ft_printf("|%0+.12jd|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0221");
	fprintf(printf_, "#0221");
	ret1 = fprintf(printf_, "|%0+.12zd|\n", 2147483648);
	ret2 = ft_printf("|%0+.12zd|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0222");
	fprintf(printf_, "#0222");
	ret1 = fprintf(printf_, "|%0+.12hhi|\n", 2147483648);
	ret2 = ft_printf("|%0+.12hhi|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0223");
	fprintf(printf_, "#0223");
	ret1 = fprintf(printf_, "|%0+.12hi|\n", 2147483648);
	ret2 = ft_printf("|%0+.12hi|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0224");
	fprintf(printf_, "#0224");
	ret1 = fprintf(printf_, "|%0+.12li|\n", 2147483648);
	ret2 = ft_printf("|%0+.12li|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0225");
	fprintf(printf_, "#0225");
	ret1 = fprintf(printf_, "|%0+.12lli|\n", 2147483648);
	ret2 = ft_printf("|%0+.12lli|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0226");
	fprintf(printf_, "#0226");
	ret1 = fprintf(printf_, "|%0+.12ji|\n", 2147483648);
	ret2 = ft_printf("|%0+.12ji|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0227");
	fprintf(printf_, "#0227");
	ret1 = fprintf(printf_, "|%0+.12zi|\n", 2147483648);
	ret2 = ft_printf("|%0+.12zi|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0228");
	fprintf(printf_, "#0228");
	ret1 = fprintf(printf_, "|%0+.12hho|\n", 2147483648);
	ret2 = ft_printf("|%0+.12hho|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0229");
	fprintf(printf_, "#0229");
	ret1 = fprintf(printf_, "|%0+.12ho|\n", 2147483648);
	ret2 = ft_printf("|%0+.12ho|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0230");
	fprintf(printf_, "#0230");
	ret1 = fprintf(printf_, "|%0+.12lo|\n", 2147483648);
	ret2 = ft_printf("|%0+.12lo|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0231");
	fprintf(printf_, "#0231");
	ret1 = fprintf(printf_, "|%0+.12llo|\n", 2147483648);
	ret2 = ft_printf("|%0+.12llo|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0232");
	fprintf(printf_, "#0232");
	ret1 = fprintf(printf_, "|%0+.12jo|\n", 2147483648);
	ret2 = ft_printf("|%0+.12jo|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0233");
	fprintf(printf_, "#0233");
	ret1 = fprintf(printf_, "|%0+.12zo|\n", 2147483648);
	ret2 = ft_printf("|%0+.12zo|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0234");
	fprintf(printf_, "#0234");
	ret1 = fprintf(printf_, "|%0+.12hhu|\n", 2147483648);
	ret2 = ft_printf("|%0+.12hhu|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0235");
	fprintf(printf_, "#0235");
	ret1 = fprintf(printf_, "|%0+.12hu|\n", 2147483648);
	ret2 = ft_printf("|%0+.12hu|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0236");
	fprintf(printf_, "#0236");
	ret1 = fprintf(printf_, "|%0+.12lu|\n", 2147483648);
	ret2 = ft_printf("|%0+.12lu|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0237");
	fprintf(printf_, "#0237");
	ret1 = fprintf(printf_, "|%0+.12llu|\n", 2147483648);
	ret2 = ft_printf("|%0+.12llu|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0238");
	fprintf(printf_, "#0238");
	ret1 = fprintf(printf_, "|%0+.12ju|\n", 2147483648);
	ret2 = ft_printf("|%0+.12ju|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0239");
	fprintf(printf_, "#0239");
	ret1 = fprintf(printf_, "|%0+.12zu|\n", 2147483648);
	ret2 = ft_printf("|%0+.12zu|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0240");
	fprintf(printf_, "#0240");
	ret1 = fprintf(printf_, "|%0+.12hhx|\n", 2147483648);
	ret2 = ft_printf("|%0+.12hhx|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0241");
	fprintf(printf_, "#0241");
	ret1 = fprintf(printf_, "|%0+.12hx|\n", 2147483648);
	ret2 = ft_printf("|%0+.12hx|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0242");
	fprintf(printf_, "#0242");
	ret1 = fprintf(printf_, "|%0+.12lx|\n", 2147483648);
	ret2 = ft_printf("|%0+.12lx|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0243");
	fprintf(printf_, "#0243");
	ret1 = fprintf(printf_, "|%0+.12llx|\n", 2147483648);
	ret2 = ft_printf("|%0+.12llx|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0244");
	fprintf(printf_, "#0244");
	ret1 = fprintf(printf_, "|%0+.12jx|\n", 2147483648);
	ret2 = ft_printf("|%0+.12jx|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0245");
	fprintf(printf_, "#0245");
	ret1 = fprintf(printf_, "|%0+.12zx|\n", 2147483648);
	ret2 = ft_printf("|%0+.12zx|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0246");
	fprintf(printf_, "#0246");
	ret1 = fprintf(printf_, "|%0+.12hhX|\n", 2147483648);
	ret2 = ft_printf("|%0+.12hhX|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0247");
	fprintf(printf_, "#0247");
	ret1 = fprintf(printf_, "|%0+.12hX|\n", 2147483648);
	ret2 = ft_printf("|%0+.12hX|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0248");
	fprintf(printf_, "#0248");
	ret1 = fprintf(printf_, "|%0+.12lX|\n", 2147483648);
	ret2 = ft_printf("|%0+.12lX|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0249");
	fprintf(printf_, "#0249");
	ret1 = fprintf(printf_, "|%0+.12llX|\n", 2147483648);
	ret2 = ft_printf("|%0+.12llX|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0250");
	fprintf(printf_, "#0250");
	ret1 = fprintf(printf_, "|%0+.12jX|\n", 2147483648);
	ret2 = ft_printf("|%0+.12jX|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0251");
	fprintf(printf_, "#0251");
	ret1 = fprintf(printf_, "|%0+.12zX|\n", 2147483648);
	ret2 = ft_printf("|%0+.12zX|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0252");
	fprintf(printf_, "#0252");
	ret1 = fprintf(printf_, "|% 0+.12hhd|\n", 2147483648);
	ret2 = ft_printf("|% 0+.12hhd|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0253");
	fprintf(printf_, "#0253");
	ret1 = fprintf(printf_, "|% 0+.12hd|\n", 2147483648);
	ret2 = ft_printf("|% 0+.12hd|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0254");
	fprintf(printf_, "#0254");
	ret1 = fprintf(printf_, "|% 0+.12ld|\n", 2147483648);
	ret2 = ft_printf("|% 0+.12ld|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0255");
	fprintf(printf_, "#0255");
	ret1 = fprintf(printf_, "|% 0+.12lld|\n", 2147483648);
	ret2 = ft_printf("|% 0+.12lld|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0256");
	fprintf(printf_, "#0256");
	ret1 = fprintf(printf_, "|% 0+.12jd|\n", 2147483648);
	ret2 = ft_printf("|% 0+.12jd|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0257");
	fprintf(printf_, "#0257");
	ret1 = fprintf(printf_, "|% 0+.12zd|\n", 2147483648);
	ret2 = ft_printf("|% 0+.12zd|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0258");
	fprintf(printf_, "#0258");
	ret1 = fprintf(printf_, "|% 0+.12hhi|\n", 2147483648);
	ret2 = ft_printf("|% 0+.12hhi|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0259");
	fprintf(printf_, "#0259");
	ret1 = fprintf(printf_, "|% 0+.12hi|\n", 2147483648);
	ret2 = ft_printf("|% 0+.12hi|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0260");
	fprintf(printf_, "#0260");
	ret1 = fprintf(printf_, "|% 0+.12li|\n", 2147483648);
	ret2 = ft_printf("|% 0+.12li|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0261");
	fprintf(printf_, "#0261");
	ret1 = fprintf(printf_, "|% 0+.12lli|\n", 2147483648);
	ret2 = ft_printf("|% 0+.12lli|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0262");
	fprintf(printf_, "#0262");
	ret1 = fprintf(printf_, "|% 0+.12ji|\n", 2147483648);
	ret2 = ft_printf("|% 0+.12ji|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0263");
	fprintf(printf_, "#0263");
	ret1 = fprintf(printf_, "|% 0+.12zi|\n", 2147483648);
	ret2 = ft_printf("|% 0+.12zi|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0264");
	fprintf(printf_, "#0264");
	ret1 = fprintf(printf_, "|% 0+.12hho|\n", 2147483648);
	ret2 = ft_printf("|% 0+.12hho|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0265");
	fprintf(printf_, "#0265");
	ret1 = fprintf(printf_, "|% 0+.12ho|\n", 2147483648);
	ret2 = ft_printf("|% 0+.12ho|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0266");
	fprintf(printf_, "#0266");
	ret1 = fprintf(printf_, "|% 0+.12lo|\n", 2147483648);
	ret2 = ft_printf("|% 0+.12lo|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0267");
	fprintf(printf_, "#0267");
	ret1 = fprintf(printf_, "|% 0+.12llo|\n", 2147483648);
	ret2 = ft_printf("|% 0+.12llo|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0268");
	fprintf(printf_, "#0268");
	ret1 = fprintf(printf_, "|% 0+.12jo|\n", 2147483648);
	ret2 = ft_printf("|% 0+.12jo|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0269");
	fprintf(printf_, "#0269");
	ret1 = fprintf(printf_, "|% 0+.12zo|\n", 2147483648);
	ret2 = ft_printf("|% 0+.12zo|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0270");
	fprintf(printf_, "#0270");
	ret1 = fprintf(printf_, "|% 0+.12hhu|\n", 2147483648);
	ret2 = ft_printf("|% 0+.12hhu|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0271");
	fprintf(printf_, "#0271");
	ret1 = fprintf(printf_, "|% 0+.12hu|\n", 2147483648);
	ret2 = ft_printf("|% 0+.12hu|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0272");
	fprintf(printf_, "#0272");
	ret1 = fprintf(printf_, "|% 0+.12lu|\n", 2147483648);
	ret2 = ft_printf("|% 0+.12lu|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0273");
	fprintf(printf_, "#0273");
	ret1 = fprintf(printf_, "|% 0+.12llu|\n", 2147483648);
	ret2 = ft_printf("|% 0+.12llu|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0274");
	fprintf(printf_, "#0274");
	ret1 = fprintf(printf_, "|% 0+.12ju|\n", 2147483648);
	ret2 = ft_printf("|% 0+.12ju|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0275");
	fprintf(printf_, "#0275");
	ret1 = fprintf(printf_, "|% 0+.12zu|\n", 2147483648);
	ret2 = ft_printf("|% 0+.12zu|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0276");
	fprintf(printf_, "#0276");
	ret1 = fprintf(printf_, "|% 0+.12hhx|\n", 2147483648);
	ret2 = ft_printf("|% 0+.12hhx|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0277");
	fprintf(printf_, "#0277");
	ret1 = fprintf(printf_, "|% 0+.12hx|\n", 2147483648);
	ret2 = ft_printf("|% 0+.12hx|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0278");
	fprintf(printf_, "#0278");
	ret1 = fprintf(printf_, "|% 0+.12lx|\n", 2147483648);
	ret2 = ft_printf("|% 0+.12lx|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0279");
	fprintf(printf_, "#0279");
	ret1 = fprintf(printf_, "|% 0+.12llx|\n", 2147483648);
	ret2 = ft_printf("|% 0+.12llx|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0280");
	fprintf(printf_, "#0280");
	ret1 = fprintf(printf_, "|% 0+.12jx|\n", 2147483648);
	ret2 = ft_printf("|% 0+.12jx|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0281");
	fprintf(printf_, "#0281");
	ret1 = fprintf(printf_, "|% 0+.12zx|\n", 2147483648);
	ret2 = ft_printf("|% 0+.12zx|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0282");
	fprintf(printf_, "#0282");
	ret1 = fprintf(printf_, "|% 0+.12hhX|\n", 2147483648);
	ret2 = ft_printf("|% 0+.12hhX|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0283");
	fprintf(printf_, "#0283");
	ret1 = fprintf(printf_, "|% 0+.12hX|\n", 2147483648);
	ret2 = ft_printf("|% 0+.12hX|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0284");
	fprintf(printf_, "#0284");
	ret1 = fprintf(printf_, "|% 0+.12lX|\n", 2147483648);
	ret2 = ft_printf("|% 0+.12lX|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0285");
	fprintf(printf_, "#0285");
	ret1 = fprintf(printf_, "|% 0+.12llX|\n", 2147483648);
	ret2 = ft_printf("|% 0+.12llX|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0286");
	fprintf(printf_, "#0286");
	ret1 = fprintf(printf_, "|% 0+.12jX|\n", 2147483648);
	ret2 = ft_printf("|% 0+.12jX|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0287");
	fprintf(printf_, "#0287");
	ret1 = fprintf(printf_, "|% 0+.12zX|\n", 2147483648);
	ret2 = ft_printf("|% 0+.12zX|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0288");
	fprintf(printf_, "#0288");
	ret1 = fprintf(printf_, "|%-.12hhd|\n", 2147483648);
	ret2 = ft_printf("|%-.12hhd|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0289");
	fprintf(printf_, "#0289");
	ret1 = fprintf(printf_, "|%-.12hd|\n", 2147483648);
	ret2 = ft_printf("|%-.12hd|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0290");
	fprintf(printf_, "#0290");
	ret1 = fprintf(printf_, "|%-.12ld|\n", 2147483648);
	ret2 = ft_printf("|%-.12ld|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0291");
	fprintf(printf_, "#0291");
	ret1 = fprintf(printf_, "|%-.12lld|\n", 2147483648);
	ret2 = ft_printf("|%-.12lld|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0292");
	fprintf(printf_, "#0292");
	ret1 = fprintf(printf_, "|%-.12jd|\n", 2147483648);
	ret2 = ft_printf("|%-.12jd|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0293");
	fprintf(printf_, "#0293");
	ret1 = fprintf(printf_, "|%-.12zd|\n", 2147483648);
	ret2 = ft_printf("|%-.12zd|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0294");
	fprintf(printf_, "#0294");
	ret1 = fprintf(printf_, "|%-.12hhi|\n", 2147483648);
	ret2 = ft_printf("|%-.12hhi|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0295");
	fprintf(printf_, "#0295");
	ret1 = fprintf(printf_, "|%-.12hi|\n", 2147483648);
	ret2 = ft_printf("|%-.12hi|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0296");
	fprintf(printf_, "#0296");
	ret1 = fprintf(printf_, "|%-.12li|\n", 2147483648);
	ret2 = ft_printf("|%-.12li|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0297");
	fprintf(printf_, "#0297");
	ret1 = fprintf(printf_, "|%-.12lli|\n", 2147483648);
	ret2 = ft_printf("|%-.12lli|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0298");
	fprintf(printf_, "#0298");
	ret1 = fprintf(printf_, "|%-.12ji|\n", 2147483648);
	ret2 = ft_printf("|%-.12ji|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0299");
	fprintf(printf_, "#0299");
	ret1 = fprintf(printf_, "|%-.12zi|\n", 2147483648);
	ret2 = ft_printf("|%-.12zi|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0300");
	fprintf(printf_, "#0300");
	ret1 = fprintf(printf_, "|%-.12hho|\n", 2147483648);
	ret2 = ft_printf("|%-.12hho|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0301");
	fprintf(printf_, "#0301");
	ret1 = fprintf(printf_, "|%-.12ho|\n", 2147483648);
	ret2 = ft_printf("|%-.12ho|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0302");
	fprintf(printf_, "#0302");
	ret1 = fprintf(printf_, "|%-.12lo|\n", 2147483648);
	ret2 = ft_printf("|%-.12lo|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0303");
	fprintf(printf_, "#0303");
	ret1 = fprintf(printf_, "|%-.12llo|\n", 2147483648);
	ret2 = ft_printf("|%-.12llo|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0304");
	fprintf(printf_, "#0304");
	ret1 = fprintf(printf_, "|%-.12jo|\n", 2147483648);
	ret2 = ft_printf("|%-.12jo|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0305");
	fprintf(printf_, "#0305");
	ret1 = fprintf(printf_, "|%-.12zo|\n", 2147483648);
	ret2 = ft_printf("|%-.12zo|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0306");
	fprintf(printf_, "#0306");
	ret1 = fprintf(printf_, "|%-.12hhu|\n", 2147483648);
	ret2 = ft_printf("|%-.12hhu|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0307");
	fprintf(printf_, "#0307");
	ret1 = fprintf(printf_, "|%-.12hu|\n", 2147483648);
	ret2 = ft_printf("|%-.12hu|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0308");
	fprintf(printf_, "#0308");
	ret1 = fprintf(printf_, "|%-.12lu|\n", 2147483648);
	ret2 = ft_printf("|%-.12lu|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0309");
	fprintf(printf_, "#0309");
	ret1 = fprintf(printf_, "|%-.12llu|\n", 2147483648);
	ret2 = ft_printf("|%-.12llu|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0310");
	fprintf(printf_, "#0310");
	ret1 = fprintf(printf_, "|%-.12ju|\n", 2147483648);
	ret2 = ft_printf("|%-.12ju|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0311");
	fprintf(printf_, "#0311");
	ret1 = fprintf(printf_, "|%-.12zu|\n", 2147483648);
	ret2 = ft_printf("|%-.12zu|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0312");
	fprintf(printf_, "#0312");
	ret1 = fprintf(printf_, "|%-.12hhx|\n", 2147483648);
	ret2 = ft_printf("|%-.12hhx|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0313");
	fprintf(printf_, "#0313");
	ret1 = fprintf(printf_, "|%-.12hx|\n", 2147483648);
	ret2 = ft_printf("|%-.12hx|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0314");
	fprintf(printf_, "#0314");
	ret1 = fprintf(printf_, "|%-.12lx|\n", 2147483648);
	ret2 = ft_printf("|%-.12lx|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0315");
	fprintf(printf_, "#0315");
	ret1 = fprintf(printf_, "|%-.12llx|\n", 2147483648);
	ret2 = ft_printf("|%-.12llx|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0316");
	fprintf(printf_, "#0316");
	ret1 = fprintf(printf_, "|%-.12jx|\n", 2147483648);
	ret2 = ft_printf("|%-.12jx|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0317");
	fprintf(printf_, "#0317");
	ret1 = fprintf(printf_, "|%-.12zx|\n", 2147483648);
	ret2 = ft_printf("|%-.12zx|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0318");
	fprintf(printf_, "#0318");
	ret1 = fprintf(printf_, "|%-.12hhX|\n", 2147483648);
	ret2 = ft_printf("|%-.12hhX|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0319");
	fprintf(printf_, "#0319");
	ret1 = fprintf(printf_, "|%-.12hX|\n", 2147483648);
	ret2 = ft_printf("|%-.12hX|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0320");
	fprintf(printf_, "#0320");
	ret1 = fprintf(printf_, "|%-.12lX|\n", 2147483648);
	ret2 = ft_printf("|%-.12lX|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0321");
	fprintf(printf_, "#0321");
	ret1 = fprintf(printf_, "|%-.12llX|\n", 2147483648);
	ret2 = ft_printf("|%-.12llX|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0322");
	fprintf(printf_, "#0322");
	ret1 = fprintf(printf_, "|%-.12jX|\n", 2147483648);
	ret2 = ft_printf("|%-.12jX|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0323");
	fprintf(printf_, "#0323");
	ret1 = fprintf(printf_, "|%-.12zX|\n", 2147483648);
	ret2 = ft_printf("|%-.12zX|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0324");
	fprintf(printf_, "#0324");
	ret1 = fprintf(printf_, "|% -.12hhd|\n", 2147483648);
	ret2 = ft_printf("|% -.12hhd|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0325");
	fprintf(printf_, "#0325");
	ret1 = fprintf(printf_, "|% -.12hd|\n", 2147483648);
	ret2 = ft_printf("|% -.12hd|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0326");
	fprintf(printf_, "#0326");
	ret1 = fprintf(printf_, "|% -.12ld|\n", 2147483648);
	ret2 = ft_printf("|% -.12ld|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0327");
	fprintf(printf_, "#0327");
	ret1 = fprintf(printf_, "|% -.12lld|\n", 2147483648);
	ret2 = ft_printf("|% -.12lld|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0328");
	fprintf(printf_, "#0328");
	ret1 = fprintf(printf_, "|% -.12jd|\n", 2147483648);
	ret2 = ft_printf("|% -.12jd|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0329");
	fprintf(printf_, "#0329");
	ret1 = fprintf(printf_, "|% -.12zd|\n", 2147483648);
	ret2 = ft_printf("|% -.12zd|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0330");
	fprintf(printf_, "#0330");
	ret1 = fprintf(printf_, "|% -.12hhi|\n", 2147483648);
	ret2 = ft_printf("|% -.12hhi|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0331");
	fprintf(printf_, "#0331");
	ret1 = fprintf(printf_, "|% -.12hi|\n", 2147483648);
	ret2 = ft_printf("|% -.12hi|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0332");
	fprintf(printf_, "#0332");
	ret1 = fprintf(printf_, "|% -.12li|\n", 2147483648);
	ret2 = ft_printf("|% -.12li|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0333");
	fprintf(printf_, "#0333");
	ret1 = fprintf(printf_, "|% -.12lli|\n", 2147483648);
	ret2 = ft_printf("|% -.12lli|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0334");
	fprintf(printf_, "#0334");
	ret1 = fprintf(printf_, "|% -.12ji|\n", 2147483648);
	ret2 = ft_printf("|% -.12ji|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0335");
	fprintf(printf_, "#0335");
	ret1 = fprintf(printf_, "|% -.12zi|\n", 2147483648);
	ret2 = ft_printf("|% -.12zi|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0336");
	fprintf(printf_, "#0336");
	ret1 = fprintf(printf_, "|% -.12hho|\n", 2147483648);
	ret2 = ft_printf("|% -.12hho|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0337");
	fprintf(printf_, "#0337");
	ret1 = fprintf(printf_, "|% -.12ho|\n", 2147483648);
	ret2 = ft_printf("|% -.12ho|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0338");
	fprintf(printf_, "#0338");
	ret1 = fprintf(printf_, "|% -.12lo|\n", 2147483648);
	ret2 = ft_printf("|% -.12lo|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0339");
	fprintf(printf_, "#0339");
	ret1 = fprintf(printf_, "|% -.12llo|\n", 2147483648);
	ret2 = ft_printf("|% -.12llo|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0340");
	fprintf(printf_, "#0340");
	ret1 = fprintf(printf_, "|% -.12jo|\n", 2147483648);
	ret2 = ft_printf("|% -.12jo|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0341");
	fprintf(printf_, "#0341");
	ret1 = fprintf(printf_, "|% -.12zo|\n", 2147483648);
	ret2 = ft_printf("|% -.12zo|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0342");
	fprintf(printf_, "#0342");
	ret1 = fprintf(printf_, "|% -.12hhu|\n", 2147483648);
	ret2 = ft_printf("|% -.12hhu|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0343");
	fprintf(printf_, "#0343");
	ret1 = fprintf(printf_, "|% -.12hu|\n", 2147483648);
	ret2 = ft_printf("|% -.12hu|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0344");
	fprintf(printf_, "#0344");
	ret1 = fprintf(printf_, "|% -.12lu|\n", 2147483648);
	ret2 = ft_printf("|% -.12lu|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0345");
	fprintf(printf_, "#0345");
	ret1 = fprintf(printf_, "|% -.12llu|\n", 2147483648);
	ret2 = ft_printf("|% -.12llu|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0346");
	fprintf(printf_, "#0346");
	ret1 = fprintf(printf_, "|% -.12ju|\n", 2147483648);
	ret2 = ft_printf("|% -.12ju|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0347");
	fprintf(printf_, "#0347");
	ret1 = fprintf(printf_, "|% -.12zu|\n", 2147483648);
	ret2 = ft_printf("|% -.12zu|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0348");
	fprintf(printf_, "#0348");
	ret1 = fprintf(printf_, "|% -.12hhx|\n", 2147483648);
	ret2 = ft_printf("|% -.12hhx|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0349");
	fprintf(printf_, "#0349");
	ret1 = fprintf(printf_, "|% -.12hx|\n", 2147483648);
	ret2 = ft_printf("|% -.12hx|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0350");
	fprintf(printf_, "#0350");
	ret1 = fprintf(printf_, "|% -.12lx|\n", 2147483648);
	ret2 = ft_printf("|% -.12lx|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0351");
	fprintf(printf_, "#0351");
	ret1 = fprintf(printf_, "|% -.12llx|\n", 2147483648);
	ret2 = ft_printf("|% -.12llx|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0352");
	fprintf(printf_, "#0352");
	ret1 = fprintf(printf_, "|% -.12jx|\n", 2147483648);
	ret2 = ft_printf("|% -.12jx|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0353");
	fprintf(printf_, "#0353");
	ret1 = fprintf(printf_, "|% -.12zx|\n", 2147483648);
	ret2 = ft_printf("|% -.12zx|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0354");
	fprintf(printf_, "#0354");
	ret1 = fprintf(printf_, "|% -.12hhX|\n", 2147483648);
	ret2 = ft_printf("|% -.12hhX|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0355");
	fprintf(printf_, "#0355");
	ret1 = fprintf(printf_, "|% -.12hX|\n", 2147483648);
	ret2 = ft_printf("|% -.12hX|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0356");
	fprintf(printf_, "#0356");
	ret1 = fprintf(printf_, "|% -.12lX|\n", 2147483648);
	ret2 = ft_printf("|% -.12lX|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0357");
	fprintf(printf_, "#0357");
	ret1 = fprintf(printf_, "|% -.12llX|\n", 2147483648);
	ret2 = ft_printf("|% -.12llX|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0358");
	fprintf(printf_, "#0358");
	ret1 = fprintf(printf_, "|% -.12jX|\n", 2147483648);
	ret2 = ft_printf("|% -.12jX|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0359");
	fprintf(printf_, "#0359");
	ret1 = fprintf(printf_, "|% -.12zX|\n", 2147483648);
	ret2 = ft_printf("|% -.12zX|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0360");
	fprintf(printf_, "#0360");
	ret1 = fprintf(printf_, "|%0-.12hhd|\n", 2147483648);
	ret2 = ft_printf("|%0-.12hhd|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0361");
	fprintf(printf_, "#0361");
	ret1 = fprintf(printf_, "|%0-.12hd|\n", 2147483648);
	ret2 = ft_printf("|%0-.12hd|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0362");
	fprintf(printf_, "#0362");
	ret1 = fprintf(printf_, "|%0-.12ld|\n", 2147483648);
	ret2 = ft_printf("|%0-.12ld|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0363");
	fprintf(printf_, "#0363");
	ret1 = fprintf(printf_, "|%0-.12lld|\n", 2147483648);
	ret2 = ft_printf("|%0-.12lld|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0364");
	fprintf(printf_, "#0364");
	ret1 = fprintf(printf_, "|%0-.12jd|\n", 2147483648);
	ret2 = ft_printf("|%0-.12jd|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0365");
	fprintf(printf_, "#0365");
	ret1 = fprintf(printf_, "|%0-.12zd|\n", 2147483648);
	ret2 = ft_printf("|%0-.12zd|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0366");
	fprintf(printf_, "#0366");
	ret1 = fprintf(printf_, "|%0-.12hhi|\n", 2147483648);
	ret2 = ft_printf("|%0-.12hhi|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0367");
	fprintf(printf_, "#0367");
	ret1 = fprintf(printf_, "|%0-.12hi|\n", 2147483648);
	ret2 = ft_printf("|%0-.12hi|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0368");
	fprintf(printf_, "#0368");
	ret1 = fprintf(printf_, "|%0-.12li|\n", 2147483648);
	ret2 = ft_printf("|%0-.12li|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0369");
	fprintf(printf_, "#0369");
	ret1 = fprintf(printf_, "|%0-.12lli|\n", 2147483648);
	ret2 = ft_printf("|%0-.12lli|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0370");
	fprintf(printf_, "#0370");
	ret1 = fprintf(printf_, "|%0-.12ji|\n", 2147483648);
	ret2 = ft_printf("|%0-.12ji|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0371");
	fprintf(printf_, "#0371");
	ret1 = fprintf(printf_, "|%0-.12zi|\n", 2147483648);
	ret2 = ft_printf("|%0-.12zi|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0372");
	fprintf(printf_, "#0372");
	ret1 = fprintf(printf_, "|%0-.12hho|\n", 2147483648);
	ret2 = ft_printf("|%0-.12hho|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0373");
	fprintf(printf_, "#0373");
	ret1 = fprintf(printf_, "|%0-.12ho|\n", 2147483648);
	ret2 = ft_printf("|%0-.12ho|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0374");
	fprintf(printf_, "#0374");
	ret1 = fprintf(printf_, "|%0-.12lo|\n", 2147483648);
	ret2 = ft_printf("|%0-.12lo|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0375");
	fprintf(printf_, "#0375");
	ret1 = fprintf(printf_, "|%0-.12llo|\n", 2147483648);
	ret2 = ft_printf("|%0-.12llo|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0376");
	fprintf(printf_, "#0376");
	ret1 = fprintf(printf_, "|%0-.12jo|\n", 2147483648);
	ret2 = ft_printf("|%0-.12jo|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0377");
	fprintf(printf_, "#0377");
	ret1 = fprintf(printf_, "|%0-.12zo|\n", 2147483648);
	ret2 = ft_printf("|%0-.12zo|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0378");
	fprintf(printf_, "#0378");
	ret1 = fprintf(printf_, "|%0-.12hhu|\n", 2147483648);
	ret2 = ft_printf("|%0-.12hhu|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0379");
	fprintf(printf_, "#0379");
	ret1 = fprintf(printf_, "|%0-.12hu|\n", 2147483648);
	ret2 = ft_printf("|%0-.12hu|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0380");
	fprintf(printf_, "#0380");
	ret1 = fprintf(printf_, "|%0-.12lu|\n", 2147483648);
	ret2 = ft_printf("|%0-.12lu|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0381");
	fprintf(printf_, "#0381");
	ret1 = fprintf(printf_, "|%0-.12llu|\n", 2147483648);
	ret2 = ft_printf("|%0-.12llu|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0382");
	fprintf(printf_, "#0382");
	ret1 = fprintf(printf_, "|%0-.12ju|\n", 2147483648);
	ret2 = ft_printf("|%0-.12ju|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0383");
	fprintf(printf_, "#0383");
	ret1 = fprintf(printf_, "|%0-.12zu|\n", 2147483648);
	ret2 = ft_printf("|%0-.12zu|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0384");
	fprintf(printf_, "#0384");
	ret1 = fprintf(printf_, "|%0-.12hhx|\n", 2147483648);
	ret2 = ft_printf("|%0-.12hhx|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0385");
	fprintf(printf_, "#0385");
	ret1 = fprintf(printf_, "|%0-.12hx|\n", 2147483648);
	ret2 = ft_printf("|%0-.12hx|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0386");
	fprintf(printf_, "#0386");
	ret1 = fprintf(printf_, "|%0-.12lx|\n", 2147483648);
	ret2 = ft_printf("|%0-.12lx|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0387");
	fprintf(printf_, "#0387");
	ret1 = fprintf(printf_, "|%0-.12llx|\n", 2147483648);
	ret2 = ft_printf("|%0-.12llx|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0388");
	fprintf(printf_, "#0388");
	ret1 = fprintf(printf_, "|%0-.12jx|\n", 2147483648);
	ret2 = ft_printf("|%0-.12jx|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0389");
	fprintf(printf_, "#0389");
	ret1 = fprintf(printf_, "|%0-.12zx|\n", 2147483648);
	ret2 = ft_printf("|%0-.12zx|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0390");
	fprintf(printf_, "#0390");
	ret1 = fprintf(printf_, "|%0-.12hhX|\n", 2147483648);
	ret2 = ft_printf("|%0-.12hhX|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0391");
	fprintf(printf_, "#0391");
	ret1 = fprintf(printf_, "|%0-.12hX|\n", 2147483648);
	ret2 = ft_printf("|%0-.12hX|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0392");
	fprintf(printf_, "#0392");
	ret1 = fprintf(printf_, "|%0-.12lX|\n", 2147483648);
	ret2 = ft_printf("|%0-.12lX|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0393");
	fprintf(printf_, "#0393");
	ret1 = fprintf(printf_, "|%0-.12llX|\n", 2147483648);
	ret2 = ft_printf("|%0-.12llX|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0394");
	fprintf(printf_, "#0394");
	ret1 = fprintf(printf_, "|%0-.12jX|\n", 2147483648);
	ret2 = ft_printf("|%0-.12jX|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0395");
	fprintf(printf_, "#0395");
	ret1 = fprintf(printf_, "|%0-.12zX|\n", 2147483648);
	ret2 = ft_printf("|%0-.12zX|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0396");
	fprintf(printf_, "#0396");
	ret1 = fprintf(printf_, "|% 0-.12hhd|\n", 2147483648);
	ret2 = ft_printf("|% 0-.12hhd|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0397");
	fprintf(printf_, "#0397");
	ret1 = fprintf(printf_, "|% 0-.12hd|\n", 2147483648);
	ret2 = ft_printf("|% 0-.12hd|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0398");
	fprintf(printf_, "#0398");
	ret1 = fprintf(printf_, "|% 0-.12ld|\n", 2147483648);
	ret2 = ft_printf("|% 0-.12ld|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0399");
	fprintf(printf_, "#0399");
	ret1 = fprintf(printf_, "|% 0-.12lld|\n", 2147483648);
	ret2 = ft_printf("|% 0-.12lld|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0400");
	fprintf(printf_, "#0400");
	ret1 = fprintf(printf_, "|% 0-.12jd|\n", 2147483648);
	ret2 = ft_printf("|% 0-.12jd|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0401");
	fprintf(printf_, "#0401");
	ret1 = fprintf(printf_, "|% 0-.12zd|\n", 2147483648);
	ret2 = ft_printf("|% 0-.12zd|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0402");
	fprintf(printf_, "#0402");
	ret1 = fprintf(printf_, "|% 0-.12hhi|\n", 2147483648);
	ret2 = ft_printf("|% 0-.12hhi|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0403");
	fprintf(printf_, "#0403");
	ret1 = fprintf(printf_, "|% 0-.12hi|\n", 2147483648);
	ret2 = ft_printf("|% 0-.12hi|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0404");
	fprintf(printf_, "#0404");
	ret1 = fprintf(printf_, "|% 0-.12li|\n", 2147483648);
	ret2 = ft_printf("|% 0-.12li|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0405");
	fprintf(printf_, "#0405");
	ret1 = fprintf(printf_, "|% 0-.12lli|\n", 2147483648);
	ret2 = ft_printf("|% 0-.12lli|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0406");
	fprintf(printf_, "#0406");
	ret1 = fprintf(printf_, "|% 0-.12ji|\n", 2147483648);
	ret2 = ft_printf("|% 0-.12ji|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0407");
	fprintf(printf_, "#0407");
	ret1 = fprintf(printf_, "|% 0-.12zi|\n", 2147483648);
	ret2 = ft_printf("|% 0-.12zi|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0408");
	fprintf(printf_, "#0408");
	ret1 = fprintf(printf_, "|% 0-.12hho|\n", 2147483648);
	ret2 = ft_printf("|% 0-.12hho|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0409");
	fprintf(printf_, "#0409");
	ret1 = fprintf(printf_, "|% 0-.12ho|\n", 2147483648);
	ret2 = ft_printf("|% 0-.12ho|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0410");
	fprintf(printf_, "#0410");
	ret1 = fprintf(printf_, "|% 0-.12lo|\n", 2147483648);
	ret2 = ft_printf("|% 0-.12lo|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0411");
	fprintf(printf_, "#0411");
	ret1 = fprintf(printf_, "|% 0-.12llo|\n", 2147483648);
	ret2 = ft_printf("|% 0-.12llo|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0412");
	fprintf(printf_, "#0412");
	ret1 = fprintf(printf_, "|% 0-.12jo|\n", 2147483648);
	ret2 = ft_printf("|% 0-.12jo|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0413");
	fprintf(printf_, "#0413");
	ret1 = fprintf(printf_, "|% 0-.12zo|\n", 2147483648);
	ret2 = ft_printf("|% 0-.12zo|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0414");
	fprintf(printf_, "#0414");
	ret1 = fprintf(printf_, "|% 0-.12hhu|\n", 2147483648);
	ret2 = ft_printf("|% 0-.12hhu|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0415");
	fprintf(printf_, "#0415");
	ret1 = fprintf(printf_, "|% 0-.12hu|\n", 2147483648);
	ret2 = ft_printf("|% 0-.12hu|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0416");
	fprintf(printf_, "#0416");
	ret1 = fprintf(printf_, "|% 0-.12lu|\n", 2147483648);
	ret2 = ft_printf("|% 0-.12lu|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0417");
	fprintf(printf_, "#0417");
	ret1 = fprintf(printf_, "|% 0-.12llu|\n", 2147483648);
	ret2 = ft_printf("|% 0-.12llu|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0418");
	fprintf(printf_, "#0418");
	ret1 = fprintf(printf_, "|% 0-.12ju|\n", 2147483648);
	ret2 = ft_printf("|% 0-.12ju|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0419");
	fprintf(printf_, "#0419");
	ret1 = fprintf(printf_, "|% 0-.12zu|\n", 2147483648);
	ret2 = ft_printf("|% 0-.12zu|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0420");
	fprintf(printf_, "#0420");
	ret1 = fprintf(printf_, "|% 0-.12hhx|\n", 2147483648);
	ret2 = ft_printf("|% 0-.12hhx|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0421");
	fprintf(printf_, "#0421");
	ret1 = fprintf(printf_, "|% 0-.12hx|\n", 2147483648);
	ret2 = ft_printf("|% 0-.12hx|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0422");
	fprintf(printf_, "#0422");
	ret1 = fprintf(printf_, "|% 0-.12lx|\n", 2147483648);
	ret2 = ft_printf("|% 0-.12lx|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0423");
	fprintf(printf_, "#0423");
	ret1 = fprintf(printf_, "|% 0-.12llx|\n", 2147483648);
	ret2 = ft_printf("|% 0-.12llx|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0424");
	fprintf(printf_, "#0424");
	ret1 = fprintf(printf_, "|% 0-.12jx|\n", 2147483648);
	ret2 = ft_printf("|% 0-.12jx|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0425");
	fprintf(printf_, "#0425");
	ret1 = fprintf(printf_, "|% 0-.12zx|\n", 2147483648);
	ret2 = ft_printf("|% 0-.12zx|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0426");
	fprintf(printf_, "#0426");
	ret1 = fprintf(printf_, "|% 0-.12hhX|\n", 2147483648);
	ret2 = ft_printf("|% 0-.12hhX|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0427");
	fprintf(printf_, "#0427");
	ret1 = fprintf(printf_, "|% 0-.12hX|\n", 2147483648);
	ret2 = ft_printf("|% 0-.12hX|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0428");
	fprintf(printf_, "#0428");
	ret1 = fprintf(printf_, "|% 0-.12lX|\n", 2147483648);
	ret2 = ft_printf("|% 0-.12lX|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0429");
	fprintf(printf_, "#0429");
	ret1 = fprintf(printf_, "|% 0-.12llX|\n", 2147483648);
	ret2 = ft_printf("|% 0-.12llX|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0430");
	fprintf(printf_, "#0430");
	ret1 = fprintf(printf_, "|% 0-.12jX|\n", 2147483648);
	ret2 = ft_printf("|% 0-.12jX|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0431");
	fprintf(printf_, "#0431");
	ret1 = fprintf(printf_, "|% 0-.12zX|\n", 2147483648);
	ret2 = ft_printf("|% 0-.12zX|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0432");
	fprintf(printf_, "#0432");
	ret1 = fprintf(printf_, "|%+-.12hhd|\n", 2147483648);
	ret2 = ft_printf("|%+-.12hhd|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0433");
	fprintf(printf_, "#0433");
	ret1 = fprintf(printf_, "|%+-.12hd|\n", 2147483648);
	ret2 = ft_printf("|%+-.12hd|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0434");
	fprintf(printf_, "#0434");
	ret1 = fprintf(printf_, "|%+-.12ld|\n", 2147483648);
	ret2 = ft_printf("|%+-.12ld|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0435");
	fprintf(printf_, "#0435");
	ret1 = fprintf(printf_, "|%+-.12lld|\n", 2147483648);
	ret2 = ft_printf("|%+-.12lld|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0436");
	fprintf(printf_, "#0436");
	ret1 = fprintf(printf_, "|%+-.12jd|\n", 2147483648);
	ret2 = ft_printf("|%+-.12jd|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0437");
	fprintf(printf_, "#0437");
	ret1 = fprintf(printf_, "|%+-.12zd|\n", 2147483648);
	ret2 = ft_printf("|%+-.12zd|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0438");
	fprintf(printf_, "#0438");
	ret1 = fprintf(printf_, "|%+-.12hhi|\n", 2147483648);
	ret2 = ft_printf("|%+-.12hhi|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0439");
	fprintf(printf_, "#0439");
	ret1 = fprintf(printf_, "|%+-.12hi|\n", 2147483648);
	ret2 = ft_printf("|%+-.12hi|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0440");
	fprintf(printf_, "#0440");
	ret1 = fprintf(printf_, "|%+-.12li|\n", 2147483648);
	ret2 = ft_printf("|%+-.12li|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0441");
	fprintf(printf_, "#0441");
	ret1 = fprintf(printf_, "|%+-.12lli|\n", 2147483648);
	ret2 = ft_printf("|%+-.12lli|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0442");
	fprintf(printf_, "#0442");
	ret1 = fprintf(printf_, "|%+-.12ji|\n", 2147483648);
	ret2 = ft_printf("|%+-.12ji|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0443");
	fprintf(printf_, "#0443");
	ret1 = fprintf(printf_, "|%+-.12zi|\n", 2147483648);
	ret2 = ft_printf("|%+-.12zi|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0444");
	fprintf(printf_, "#0444");
	ret1 = fprintf(printf_, "|%+-.12hho|\n", 2147483648);
	ret2 = ft_printf("|%+-.12hho|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0445");
	fprintf(printf_, "#0445");
	ret1 = fprintf(printf_, "|%+-.12ho|\n", 2147483648);
	ret2 = ft_printf("|%+-.12ho|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0446");
	fprintf(printf_, "#0446");
	ret1 = fprintf(printf_, "|%+-.12lo|\n", 2147483648);
	ret2 = ft_printf("|%+-.12lo|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0447");
	fprintf(printf_, "#0447");
	ret1 = fprintf(printf_, "|%+-.12llo|\n", 2147483648);
	ret2 = ft_printf("|%+-.12llo|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0448");
	fprintf(printf_, "#0448");
	ret1 = fprintf(printf_, "|%+-.12jo|\n", 2147483648);
	ret2 = ft_printf("|%+-.12jo|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0449");
	fprintf(printf_, "#0449");
	ret1 = fprintf(printf_, "|%+-.12zo|\n", 2147483648);
	ret2 = ft_printf("|%+-.12zo|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0450");
	fprintf(printf_, "#0450");
	ret1 = fprintf(printf_, "|%+-.12hhu|\n", 2147483648);
	ret2 = ft_printf("|%+-.12hhu|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0451");
	fprintf(printf_, "#0451");
	ret1 = fprintf(printf_, "|%+-.12hu|\n", 2147483648);
	ret2 = ft_printf("|%+-.12hu|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0452");
	fprintf(printf_, "#0452");
	ret1 = fprintf(printf_, "|%+-.12lu|\n", 2147483648);
	ret2 = ft_printf("|%+-.12lu|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0453");
	fprintf(printf_, "#0453");
	ret1 = fprintf(printf_, "|%+-.12llu|\n", 2147483648);
	ret2 = ft_printf("|%+-.12llu|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0454");
	fprintf(printf_, "#0454");
	ret1 = fprintf(printf_, "|%+-.12ju|\n", 2147483648);
	ret2 = ft_printf("|%+-.12ju|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0455");
	fprintf(printf_, "#0455");
	ret1 = fprintf(printf_, "|%+-.12zu|\n", 2147483648);
	ret2 = ft_printf("|%+-.12zu|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0456");
	fprintf(printf_, "#0456");
	ret1 = fprintf(printf_, "|%+-.12hhx|\n", 2147483648);
	ret2 = ft_printf("|%+-.12hhx|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0457");
	fprintf(printf_, "#0457");
	ret1 = fprintf(printf_, "|%+-.12hx|\n", 2147483648);
	ret2 = ft_printf("|%+-.12hx|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0458");
	fprintf(printf_, "#0458");
	ret1 = fprintf(printf_, "|%+-.12lx|\n", 2147483648);
	ret2 = ft_printf("|%+-.12lx|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0459");
	fprintf(printf_, "#0459");
	ret1 = fprintf(printf_, "|%+-.12llx|\n", 2147483648);
	ret2 = ft_printf("|%+-.12llx|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0460");
	fprintf(printf_, "#0460");
	ret1 = fprintf(printf_, "|%+-.12jx|\n", 2147483648);
	ret2 = ft_printf("|%+-.12jx|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0461");
	fprintf(printf_, "#0461");
	ret1 = fprintf(printf_, "|%+-.12zx|\n", 2147483648);
	ret2 = ft_printf("|%+-.12zx|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0462");
	fprintf(printf_, "#0462");
	ret1 = fprintf(printf_, "|%+-.12hhX|\n", 2147483648);
	ret2 = ft_printf("|%+-.12hhX|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0463");
	fprintf(printf_, "#0463");
	ret1 = fprintf(printf_, "|%+-.12hX|\n", 2147483648);
	ret2 = ft_printf("|%+-.12hX|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0464");
	fprintf(printf_, "#0464");
	ret1 = fprintf(printf_, "|%+-.12lX|\n", 2147483648);
	ret2 = ft_printf("|%+-.12lX|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0465");
	fprintf(printf_, "#0465");
	ret1 = fprintf(printf_, "|%+-.12llX|\n", 2147483648);
	ret2 = ft_printf("|%+-.12llX|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0466");
	fprintf(printf_, "#0466");
	ret1 = fprintf(printf_, "|%+-.12jX|\n", 2147483648);
	ret2 = ft_printf("|%+-.12jX|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0467");
	fprintf(printf_, "#0467");
	ret1 = fprintf(printf_, "|%+-.12zX|\n", 2147483648);
	ret2 = ft_printf("|%+-.12zX|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0468");
	fprintf(printf_, "#0468");
	ret1 = fprintf(printf_, "|% +-.12hhd|\n", 2147483648);
	ret2 = ft_printf("|% +-.12hhd|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0469");
	fprintf(printf_, "#0469");
	ret1 = fprintf(printf_, "|% +-.12hd|\n", 2147483648);
	ret2 = ft_printf("|% +-.12hd|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0470");
	fprintf(printf_, "#0470");
	ret1 = fprintf(printf_, "|% +-.12ld|\n", 2147483648);
	ret2 = ft_printf("|% +-.12ld|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0471");
	fprintf(printf_, "#0471");
	ret1 = fprintf(printf_, "|% +-.12lld|\n", 2147483648);
	ret2 = ft_printf("|% +-.12lld|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0472");
	fprintf(printf_, "#0472");
	ret1 = fprintf(printf_, "|% +-.12jd|\n", 2147483648);
	ret2 = ft_printf("|% +-.12jd|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0473");
	fprintf(printf_, "#0473");
	ret1 = fprintf(printf_, "|% +-.12zd|\n", 2147483648);
	ret2 = ft_printf("|% +-.12zd|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0474");
	fprintf(printf_, "#0474");
	ret1 = fprintf(printf_, "|% +-.12hhi|\n", 2147483648);
	ret2 = ft_printf("|% +-.12hhi|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0475");
	fprintf(printf_, "#0475");
	ret1 = fprintf(printf_, "|% +-.12hi|\n", 2147483648);
	ret2 = ft_printf("|% +-.12hi|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0476");
	fprintf(printf_, "#0476");
	ret1 = fprintf(printf_, "|% +-.12li|\n", 2147483648);
	ret2 = ft_printf("|% +-.12li|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0477");
	fprintf(printf_, "#0477");
	ret1 = fprintf(printf_, "|% +-.12lli|\n", 2147483648);
	ret2 = ft_printf("|% +-.12lli|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0478");
	fprintf(printf_, "#0478");
	ret1 = fprintf(printf_, "|% +-.12ji|\n", 2147483648);
	ret2 = ft_printf("|% +-.12ji|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0479");
	fprintf(printf_, "#0479");
	ret1 = fprintf(printf_, "|% +-.12zi|\n", 2147483648);
	ret2 = ft_printf("|% +-.12zi|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0480");
	fprintf(printf_, "#0480");
	ret1 = fprintf(printf_, "|% +-.12hho|\n", 2147483648);
	ret2 = ft_printf("|% +-.12hho|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0481");
	fprintf(printf_, "#0481");
	ret1 = fprintf(printf_, "|% +-.12ho|\n", 2147483648);
	ret2 = ft_printf("|% +-.12ho|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0482");
	fprintf(printf_, "#0482");
	ret1 = fprintf(printf_, "|% +-.12lo|\n", 2147483648);
	ret2 = ft_printf("|% +-.12lo|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0483");
	fprintf(printf_, "#0483");
	ret1 = fprintf(printf_, "|% +-.12llo|\n", 2147483648);
	ret2 = ft_printf("|% +-.12llo|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0484");
	fprintf(printf_, "#0484");
	ret1 = fprintf(printf_, "|% +-.12jo|\n", 2147483648);
	ret2 = ft_printf("|% +-.12jo|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0485");
	fprintf(printf_, "#0485");
	ret1 = fprintf(printf_, "|% +-.12zo|\n", 2147483648);
	ret2 = ft_printf("|% +-.12zo|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0486");
	fprintf(printf_, "#0486");
	ret1 = fprintf(printf_, "|% +-.12hhu|\n", 2147483648);
	ret2 = ft_printf("|% +-.12hhu|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0487");
	fprintf(printf_, "#0487");
	ret1 = fprintf(printf_, "|% +-.12hu|\n", 2147483648);
	ret2 = ft_printf("|% +-.12hu|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0488");
	fprintf(printf_, "#0488");
	ret1 = fprintf(printf_, "|% +-.12lu|\n", 2147483648);
	ret2 = ft_printf("|% +-.12lu|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0489");
	fprintf(printf_, "#0489");
	ret1 = fprintf(printf_, "|% +-.12llu|\n", 2147483648);
	ret2 = ft_printf("|% +-.12llu|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0490");
	fprintf(printf_, "#0490");
	ret1 = fprintf(printf_, "|% +-.12ju|\n", 2147483648);
	ret2 = ft_printf("|% +-.12ju|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0491");
	fprintf(printf_, "#0491");
	ret1 = fprintf(printf_, "|% +-.12zu|\n", 2147483648);
	ret2 = ft_printf("|% +-.12zu|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0492");
	fprintf(printf_, "#0492");
	ret1 = fprintf(printf_, "|% +-.12hhx|\n", 2147483648);
	ret2 = ft_printf("|% +-.12hhx|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0493");
	fprintf(printf_, "#0493");
	ret1 = fprintf(printf_, "|% +-.12hx|\n", 2147483648);
	ret2 = ft_printf("|% +-.12hx|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0494");
	fprintf(printf_, "#0494");
	ret1 = fprintf(printf_, "|% +-.12lx|\n", 2147483648);
	ret2 = ft_printf("|% +-.12lx|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0495");
	fprintf(printf_, "#0495");
	ret1 = fprintf(printf_, "|% +-.12llx|\n", 2147483648);
	ret2 = ft_printf("|% +-.12llx|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0496");
	fprintf(printf_, "#0496");
	ret1 = fprintf(printf_, "|% +-.12jx|\n", 2147483648);
	ret2 = ft_printf("|% +-.12jx|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0497");
	fprintf(printf_, "#0497");
	ret1 = fprintf(printf_, "|% +-.12zx|\n", 2147483648);
	ret2 = ft_printf("|% +-.12zx|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0498");
	fprintf(printf_, "#0498");
	ret1 = fprintf(printf_, "|% +-.12hhX|\n", 2147483648);
	ret2 = ft_printf("|% +-.12hhX|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0499");
	fprintf(printf_, "#0499");
	ret1 = fprintf(printf_, "|% +-.12hX|\n", 2147483648);
	ret2 = ft_printf("|% +-.12hX|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0500");
	fprintf(printf_, "#0500");
	ret1 = fprintf(printf_, "|% +-.12lX|\n", 2147483648);
	ret2 = ft_printf("|% +-.12lX|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0501");
	fprintf(printf_, "#0501");
	ret1 = fprintf(printf_, "|% +-.12llX|\n", 2147483648);
	ret2 = ft_printf("|% +-.12llX|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0502");
	fprintf(printf_, "#0502");
	ret1 = fprintf(printf_, "|% +-.12jX|\n", 2147483648);
	ret2 = ft_printf("|% +-.12jX|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0503");
	fprintf(printf_, "#0503");
	ret1 = fprintf(printf_, "|% +-.12zX|\n", 2147483648);
	ret2 = ft_printf("|% +-.12zX|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0504");
	fprintf(printf_, "#0504");
	ret1 = fprintf(printf_, "|%0+-.12hhd|\n", 2147483648);
	ret2 = ft_printf("|%0+-.12hhd|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0505");
	fprintf(printf_, "#0505");
	ret1 = fprintf(printf_, "|%0+-.12hd|\n", 2147483648);
	ret2 = ft_printf("|%0+-.12hd|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0506");
	fprintf(printf_, "#0506");
	ret1 = fprintf(printf_, "|%0+-.12ld|\n", 2147483648);
	ret2 = ft_printf("|%0+-.12ld|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0507");
	fprintf(printf_, "#0507");
	ret1 = fprintf(printf_, "|%0+-.12lld|\n", 2147483648);
	ret2 = ft_printf("|%0+-.12lld|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0508");
	fprintf(printf_, "#0508");
	ret1 = fprintf(printf_, "|%0+-.12jd|\n", 2147483648);
	ret2 = ft_printf("|%0+-.12jd|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0509");
	fprintf(printf_, "#0509");
	ret1 = fprintf(printf_, "|%0+-.12zd|\n", 2147483648);
	ret2 = ft_printf("|%0+-.12zd|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0510");
	fprintf(printf_, "#0510");
	ret1 = fprintf(printf_, "|%0+-.12hhi|\n", 2147483648);
	ret2 = ft_printf("|%0+-.12hhi|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0511");
	fprintf(printf_, "#0511");
	ret1 = fprintf(printf_, "|%0+-.12hi|\n", 2147483648);
	ret2 = ft_printf("|%0+-.12hi|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0512");
	fprintf(printf_, "#0512");
	ret1 = fprintf(printf_, "|%0+-.12li|\n", 2147483648);
	ret2 = ft_printf("|%0+-.12li|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0513");
	fprintf(printf_, "#0513");
	ret1 = fprintf(printf_, "|%0+-.12lli|\n", 2147483648);
	ret2 = ft_printf("|%0+-.12lli|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0514");
	fprintf(printf_, "#0514");
	ret1 = fprintf(printf_, "|%0+-.12ji|\n", 2147483648);
	ret2 = ft_printf("|%0+-.12ji|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0515");
	fprintf(printf_, "#0515");
	ret1 = fprintf(printf_, "|%0+-.12zi|\n", 2147483648);
	ret2 = ft_printf("|%0+-.12zi|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0516");
	fprintf(printf_, "#0516");
	ret1 = fprintf(printf_, "|%0+-.12hho|\n", 2147483648);
	ret2 = ft_printf("|%0+-.12hho|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0517");
	fprintf(printf_, "#0517");
	ret1 = fprintf(printf_, "|%0+-.12ho|\n", 2147483648);
	ret2 = ft_printf("|%0+-.12ho|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0518");
	fprintf(printf_, "#0518");
	ret1 = fprintf(printf_, "|%0+-.12lo|\n", 2147483648);
	ret2 = ft_printf("|%0+-.12lo|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0519");
	fprintf(printf_, "#0519");
	ret1 = fprintf(printf_, "|%0+-.12llo|\n", 2147483648);
	ret2 = ft_printf("|%0+-.12llo|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0520");
	fprintf(printf_, "#0520");
	ret1 = fprintf(printf_, "|%0+-.12jo|\n", 2147483648);
	ret2 = ft_printf("|%0+-.12jo|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0521");
	fprintf(printf_, "#0521");
	ret1 = fprintf(printf_, "|%0+-.12zo|\n", 2147483648);
	ret2 = ft_printf("|%0+-.12zo|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0522");
	fprintf(printf_, "#0522");
	ret1 = fprintf(printf_, "|%0+-.12hhu|\n", 2147483648);
	ret2 = ft_printf("|%0+-.12hhu|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0523");
	fprintf(printf_, "#0523");
	ret1 = fprintf(printf_, "|%0+-.12hu|\n", 2147483648);
	ret2 = ft_printf("|%0+-.12hu|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0524");
	fprintf(printf_, "#0524");
	ret1 = fprintf(printf_, "|%0+-.12lu|\n", 2147483648);
	ret2 = ft_printf("|%0+-.12lu|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0525");
	fprintf(printf_, "#0525");
	ret1 = fprintf(printf_, "|%0+-.12llu|\n", 2147483648);
	ret2 = ft_printf("|%0+-.12llu|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0526");
	fprintf(printf_, "#0526");
	ret1 = fprintf(printf_, "|%0+-.12ju|\n", 2147483648);
	ret2 = ft_printf("|%0+-.12ju|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0527");
	fprintf(printf_, "#0527");
	ret1 = fprintf(printf_, "|%0+-.12zu|\n", 2147483648);
	ret2 = ft_printf("|%0+-.12zu|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0528");
	fprintf(printf_, "#0528");
	ret1 = fprintf(printf_, "|%0+-.12hhx|\n", 2147483648);
	ret2 = ft_printf("|%0+-.12hhx|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0529");
	fprintf(printf_, "#0529");
	ret1 = fprintf(printf_, "|%0+-.12hx|\n", 2147483648);
	ret2 = ft_printf("|%0+-.12hx|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0530");
	fprintf(printf_, "#0530");
	ret1 = fprintf(printf_, "|%0+-.12lx|\n", 2147483648);
	ret2 = ft_printf("|%0+-.12lx|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0531");
	fprintf(printf_, "#0531");
	ret1 = fprintf(printf_, "|%0+-.12llx|\n", 2147483648);
	ret2 = ft_printf("|%0+-.12llx|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0532");
	fprintf(printf_, "#0532");
	ret1 = fprintf(printf_, "|%0+-.12jx|\n", 2147483648);
	ret2 = ft_printf("|%0+-.12jx|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0533");
	fprintf(printf_, "#0533");
	ret1 = fprintf(printf_, "|%0+-.12zx|\n", 2147483648);
	ret2 = ft_printf("|%0+-.12zx|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0534");
	fprintf(printf_, "#0534");
	ret1 = fprintf(printf_, "|%0+-.12hhX|\n", 2147483648);
	ret2 = ft_printf("|%0+-.12hhX|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0535");
	fprintf(printf_, "#0535");
	ret1 = fprintf(printf_, "|%0+-.12hX|\n", 2147483648);
	ret2 = ft_printf("|%0+-.12hX|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0536");
	fprintf(printf_, "#0536");
	ret1 = fprintf(printf_, "|%0+-.12lX|\n", 2147483648);
	ret2 = ft_printf("|%0+-.12lX|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0537");
	fprintf(printf_, "#0537");
	ret1 = fprintf(printf_, "|%0+-.12llX|\n", 2147483648);
	ret2 = ft_printf("|%0+-.12llX|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0538");
	fprintf(printf_, "#0538");
	ret1 = fprintf(printf_, "|%0+-.12jX|\n", 2147483648);
	ret2 = ft_printf("|%0+-.12jX|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0539");
	fprintf(printf_, "#0539");
	ret1 = fprintf(printf_, "|%0+-.12zX|\n", 2147483648);
	ret2 = ft_printf("|%0+-.12zX|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0540");
	fprintf(printf_, "#0540");
	ret1 = fprintf(printf_, "|% 0+-.12hhd|\n", 2147483648);
	ret2 = ft_printf("|% 0+-.12hhd|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0541");
	fprintf(printf_, "#0541");
	ret1 = fprintf(printf_, "|% 0+-.12hd|\n", 2147483648);
	ret2 = ft_printf("|% 0+-.12hd|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0542");
	fprintf(printf_, "#0542");
	ret1 = fprintf(printf_, "|% 0+-.12ld|\n", 2147483648);
	ret2 = ft_printf("|% 0+-.12ld|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0543");
	fprintf(printf_, "#0543");
	ret1 = fprintf(printf_, "|% 0+-.12lld|\n", 2147483648);
	ret2 = ft_printf("|% 0+-.12lld|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0544");
	fprintf(printf_, "#0544");
	ret1 = fprintf(printf_, "|% 0+-.12jd|\n", 2147483648);
	ret2 = ft_printf("|% 0+-.12jd|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0545");
	fprintf(printf_, "#0545");
	ret1 = fprintf(printf_, "|% 0+-.12zd|\n", 2147483648);
	ret2 = ft_printf("|% 0+-.12zd|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0546");
	fprintf(printf_, "#0546");
	ret1 = fprintf(printf_, "|% 0+-.12hhi|\n", 2147483648);
	ret2 = ft_printf("|% 0+-.12hhi|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0547");
	fprintf(printf_, "#0547");
	ret1 = fprintf(printf_, "|% 0+-.12hi|\n", 2147483648);
	ret2 = ft_printf("|% 0+-.12hi|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0548");
	fprintf(printf_, "#0548");
	ret1 = fprintf(printf_, "|% 0+-.12li|\n", 2147483648);
	ret2 = ft_printf("|% 0+-.12li|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0549");
	fprintf(printf_, "#0549");
	ret1 = fprintf(printf_, "|% 0+-.12lli|\n", 2147483648);
	ret2 = ft_printf("|% 0+-.12lli|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0550");
	fprintf(printf_, "#0550");
	ret1 = fprintf(printf_, "|% 0+-.12ji|\n", 2147483648);
	ret2 = ft_printf("|% 0+-.12ji|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0551");
	fprintf(printf_, "#0551");
	ret1 = fprintf(printf_, "|% 0+-.12zi|\n", 2147483648);
	ret2 = ft_printf("|% 0+-.12zi|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0552");
	fprintf(printf_, "#0552");
	ret1 = fprintf(printf_, "|% 0+-.12hho|\n", 2147483648);
	ret2 = ft_printf("|% 0+-.12hho|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0553");
	fprintf(printf_, "#0553");
	ret1 = fprintf(printf_, "|% 0+-.12ho|\n", 2147483648);
	ret2 = ft_printf("|% 0+-.12ho|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0554");
	fprintf(printf_, "#0554");
	ret1 = fprintf(printf_, "|% 0+-.12lo|\n", 2147483648);
	ret2 = ft_printf("|% 0+-.12lo|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0555");
	fprintf(printf_, "#0555");
	ret1 = fprintf(printf_, "|% 0+-.12llo|\n", 2147483648);
	ret2 = ft_printf("|% 0+-.12llo|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0556");
	fprintf(printf_, "#0556");
	ret1 = fprintf(printf_, "|% 0+-.12jo|\n", 2147483648);
	ret2 = ft_printf("|% 0+-.12jo|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0557");
	fprintf(printf_, "#0557");
	ret1 = fprintf(printf_, "|% 0+-.12zo|\n", 2147483648);
	ret2 = ft_printf("|% 0+-.12zo|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0558");
	fprintf(printf_, "#0558");
	ret1 = fprintf(printf_, "|% 0+-.12hhu|\n", 2147483648);
	ret2 = ft_printf("|% 0+-.12hhu|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0559");
	fprintf(printf_, "#0559");
	ret1 = fprintf(printf_, "|% 0+-.12hu|\n", 2147483648);
	ret2 = ft_printf("|% 0+-.12hu|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0560");
	fprintf(printf_, "#0560");
	ret1 = fprintf(printf_, "|% 0+-.12lu|\n", 2147483648);
	ret2 = ft_printf("|% 0+-.12lu|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0561");
	fprintf(printf_, "#0561");
	ret1 = fprintf(printf_, "|% 0+-.12llu|\n", 2147483648);
	ret2 = ft_printf("|% 0+-.12llu|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0562");
	fprintf(printf_, "#0562");
	ret1 = fprintf(printf_, "|% 0+-.12ju|\n", 2147483648);
	ret2 = ft_printf("|% 0+-.12ju|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0563");
	fprintf(printf_, "#0563");
	ret1 = fprintf(printf_, "|% 0+-.12zu|\n", 2147483648);
	ret2 = ft_printf("|% 0+-.12zu|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0564");
	fprintf(printf_, "#0564");
	ret1 = fprintf(printf_, "|% 0+-.12hhx|\n", 2147483648);
	ret2 = ft_printf("|% 0+-.12hhx|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0565");
	fprintf(printf_, "#0565");
	ret1 = fprintf(printf_, "|% 0+-.12hx|\n", 2147483648);
	ret2 = ft_printf("|% 0+-.12hx|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0566");
	fprintf(printf_, "#0566");
	ret1 = fprintf(printf_, "|% 0+-.12lx|\n", 2147483648);
	ret2 = ft_printf("|% 0+-.12lx|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0567");
	fprintf(printf_, "#0567");
	ret1 = fprintf(printf_, "|% 0+-.12llx|\n", 2147483648);
	ret2 = ft_printf("|% 0+-.12llx|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0568");
	fprintf(printf_, "#0568");
	ret1 = fprintf(printf_, "|% 0+-.12jx|\n", 2147483648);
	ret2 = ft_printf("|% 0+-.12jx|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0569");
	fprintf(printf_, "#0569");
	ret1 = fprintf(printf_, "|% 0+-.12zx|\n", 2147483648);
	ret2 = ft_printf("|% 0+-.12zx|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0570");
	fprintf(printf_, "#0570");
	ret1 = fprintf(printf_, "|% 0+-.12hhX|\n", 2147483648);
	ret2 = ft_printf("|% 0+-.12hhX|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0571");
	fprintf(printf_, "#0571");
	ret1 = fprintf(printf_, "|% 0+-.12hX|\n", 2147483648);
	ret2 = ft_printf("|% 0+-.12hX|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0572");
	fprintf(printf_, "#0572");
	ret1 = fprintf(printf_, "|% 0+-.12lX|\n", 2147483648);
	ret2 = ft_printf("|% 0+-.12lX|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0573");
	fprintf(printf_, "#0573");
	ret1 = fprintf(printf_, "|% 0+-.12llX|\n", 2147483648);
	ret2 = ft_printf("|% 0+-.12llX|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0574");
	fprintf(printf_, "#0574");
	ret1 = fprintf(printf_, "|% 0+-.12jX|\n", 2147483648);
	ret2 = ft_printf("|% 0+-.12jX|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0575");
	fprintf(printf_, "#0575");
	ret1 = fprintf(printf_, "|% 0+-.12zX|\n", 2147483648);
	ret2 = ft_printf("|% 0+-.12zX|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0576");
	fprintf(printf_, "#0576");
	ret1 = fprintf(printf_, "|%#.12hhd|\n", 2147483648);
	ret2 = ft_printf("|%#.12hhd|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0577");
	fprintf(printf_, "#0577");
	ret1 = fprintf(printf_, "|%#.12hd|\n", 2147483648);
	ret2 = ft_printf("|%#.12hd|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0578");
	fprintf(printf_, "#0578");
	ret1 = fprintf(printf_, "|%#.12ld|\n", 2147483648);
	ret2 = ft_printf("|%#.12ld|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0579");
	fprintf(printf_, "#0579");
	ret1 = fprintf(printf_, "|%#.12lld|\n", 2147483648);
	ret2 = ft_printf("|%#.12lld|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0580");
	fprintf(printf_, "#0580");
	ret1 = fprintf(printf_, "|%#.12jd|\n", 2147483648);
	ret2 = ft_printf("|%#.12jd|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0581");
	fprintf(printf_, "#0581");
	ret1 = fprintf(printf_, "|%#.12zd|\n", 2147483648);
	ret2 = ft_printf("|%#.12zd|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0582");
	fprintf(printf_, "#0582");
	ret1 = fprintf(printf_, "|%#.12hhi|\n", 2147483648);
	ret2 = ft_printf("|%#.12hhi|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0583");
	fprintf(printf_, "#0583");
	ret1 = fprintf(printf_, "|%#.12hi|\n", 2147483648);
	ret2 = ft_printf("|%#.12hi|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0584");
	fprintf(printf_, "#0584");
	ret1 = fprintf(printf_, "|%#.12li|\n", 2147483648);
	ret2 = ft_printf("|%#.12li|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0585");
	fprintf(printf_, "#0585");
	ret1 = fprintf(printf_, "|%#.12lli|\n", 2147483648);
	ret2 = ft_printf("|%#.12lli|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0586");
	fprintf(printf_, "#0586");
	ret1 = fprintf(printf_, "|%#.12ji|\n", 2147483648);
	ret2 = ft_printf("|%#.12ji|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0587");
	fprintf(printf_, "#0587");
	ret1 = fprintf(printf_, "|%#.12zi|\n", 2147483648);
	ret2 = ft_printf("|%#.12zi|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0588");
	fprintf(printf_, "#0588");
	ret1 = fprintf(printf_, "|%#.12hho|\n", 2147483648);
	ret2 = ft_printf("|%#.12hho|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0589");
	fprintf(printf_, "#0589");
	ret1 = fprintf(printf_, "|%#.12ho|\n", 2147483648);
	ret2 = ft_printf("|%#.12ho|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0590");
	fprintf(printf_, "#0590");
	ret1 = fprintf(printf_, "|%#.12lo|\n", 2147483648);
	ret2 = ft_printf("|%#.12lo|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0591");
	fprintf(printf_, "#0591");
	ret1 = fprintf(printf_, "|%#.12llo|\n", 2147483648);
	ret2 = ft_printf("|%#.12llo|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0592");
	fprintf(printf_, "#0592");
	ret1 = fprintf(printf_, "|%#.12jo|\n", 2147483648);
	ret2 = ft_printf("|%#.12jo|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0593");
	fprintf(printf_, "#0593");
	ret1 = fprintf(printf_, "|%#.12zo|\n", 2147483648);
	ret2 = ft_printf("|%#.12zo|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0594");
	fprintf(printf_, "#0594");
	ret1 = fprintf(printf_, "|%#.12hhu|\n", 2147483648);
	ret2 = ft_printf("|%#.12hhu|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0595");
	fprintf(printf_, "#0595");
	ret1 = fprintf(printf_, "|%#.12hu|\n", 2147483648);
	ret2 = ft_printf("|%#.12hu|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0596");
	fprintf(printf_, "#0596");
	ret1 = fprintf(printf_, "|%#.12lu|\n", 2147483648);
	ret2 = ft_printf("|%#.12lu|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0597");
	fprintf(printf_, "#0597");
	ret1 = fprintf(printf_, "|%#.12llu|\n", 2147483648);
	ret2 = ft_printf("|%#.12llu|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0598");
	fprintf(printf_, "#0598");
	ret1 = fprintf(printf_, "|%#.12ju|\n", 2147483648);
	ret2 = ft_printf("|%#.12ju|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0599");
	fprintf(printf_, "#0599");
	ret1 = fprintf(printf_, "|%#.12zu|\n", 2147483648);
	ret2 = ft_printf("|%#.12zu|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0600");
	fprintf(printf_, "#0600");
	ret1 = fprintf(printf_, "|%#.12hhx|\n", 2147483648);
	ret2 = ft_printf("|%#.12hhx|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0601");
	fprintf(printf_, "#0601");
	ret1 = fprintf(printf_, "|%#.12hx|\n", 2147483648);
	ret2 = ft_printf("|%#.12hx|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0602");
	fprintf(printf_, "#0602");
	ret1 = fprintf(printf_, "|%#.12lx|\n", 2147483648);
	ret2 = ft_printf("|%#.12lx|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0603");
	fprintf(printf_, "#0603");
	ret1 = fprintf(printf_, "|%#.12llx|\n", 2147483648);
	ret2 = ft_printf("|%#.12llx|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0604");
	fprintf(printf_, "#0604");
	ret1 = fprintf(printf_, "|%#.12jx|\n", 2147483648);
	ret2 = ft_printf("|%#.12jx|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0605");
	fprintf(printf_, "#0605");
	ret1 = fprintf(printf_, "|%#.12zx|\n", 2147483648);
	ret2 = ft_printf("|%#.12zx|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0606");
	fprintf(printf_, "#0606");
	ret1 = fprintf(printf_, "|%#.12hhX|\n", 2147483648);
	ret2 = ft_printf("|%#.12hhX|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0607");
	fprintf(printf_, "#0607");
	ret1 = fprintf(printf_, "|%#.12hX|\n", 2147483648);
	ret2 = ft_printf("|%#.12hX|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0608");
	fprintf(printf_, "#0608");
	ret1 = fprintf(printf_, "|%#.12lX|\n", 2147483648);
	ret2 = ft_printf("|%#.12lX|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0609");
	fprintf(printf_, "#0609");
	ret1 = fprintf(printf_, "|%#.12llX|\n", 2147483648);
	ret2 = ft_printf("|%#.12llX|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0610");
	fprintf(printf_, "#0610");
	ret1 = fprintf(printf_, "|%#.12jX|\n", 2147483648);
	ret2 = ft_printf("|%#.12jX|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0611");
	fprintf(printf_, "#0611");
	ret1 = fprintf(printf_, "|%#.12zX|\n", 2147483648);
	ret2 = ft_printf("|%#.12zX|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0612");
	fprintf(printf_, "#0612");
	ret1 = fprintf(printf_, "|% #.12hhd|\n", 2147483648);
	ret2 = ft_printf("|% #.12hhd|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0613");
	fprintf(printf_, "#0613");
	ret1 = fprintf(printf_, "|% #.12hd|\n", 2147483648);
	ret2 = ft_printf("|% #.12hd|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0614");
	fprintf(printf_, "#0614");
	ret1 = fprintf(printf_, "|% #.12ld|\n", 2147483648);
	ret2 = ft_printf("|% #.12ld|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0615");
	fprintf(printf_, "#0615");
	ret1 = fprintf(printf_, "|% #.12lld|\n", 2147483648);
	ret2 = ft_printf("|% #.12lld|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0616");
	fprintf(printf_, "#0616");
	ret1 = fprintf(printf_, "|% #.12jd|\n", 2147483648);
	ret2 = ft_printf("|% #.12jd|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0617");
	fprintf(printf_, "#0617");
	ret1 = fprintf(printf_, "|% #.12zd|\n", 2147483648);
	ret2 = ft_printf("|% #.12zd|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0618");
	fprintf(printf_, "#0618");
	ret1 = fprintf(printf_, "|% #.12hhi|\n", 2147483648);
	ret2 = ft_printf("|% #.12hhi|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0619");
	fprintf(printf_, "#0619");
	ret1 = fprintf(printf_, "|% #.12hi|\n", 2147483648);
	ret2 = ft_printf("|% #.12hi|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0620");
	fprintf(printf_, "#0620");
	ret1 = fprintf(printf_, "|% #.12li|\n", 2147483648);
	ret2 = ft_printf("|% #.12li|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0621");
	fprintf(printf_, "#0621");
	ret1 = fprintf(printf_, "|% #.12lli|\n", 2147483648);
	ret2 = ft_printf("|% #.12lli|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0622");
	fprintf(printf_, "#0622");
	ret1 = fprintf(printf_, "|% #.12ji|\n", 2147483648);
	ret2 = ft_printf("|% #.12ji|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0623");
	fprintf(printf_, "#0623");
	ret1 = fprintf(printf_, "|% #.12zi|\n", 2147483648);
	ret2 = ft_printf("|% #.12zi|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0624");
	fprintf(printf_, "#0624");
	ret1 = fprintf(printf_, "|% #.12hho|\n", 2147483648);
	ret2 = ft_printf("|% #.12hho|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0625");
	fprintf(printf_, "#0625");
	ret1 = fprintf(printf_, "|% #.12ho|\n", 2147483648);
	ret2 = ft_printf("|% #.12ho|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0626");
	fprintf(printf_, "#0626");
	ret1 = fprintf(printf_, "|% #.12lo|\n", 2147483648);
	ret2 = ft_printf("|% #.12lo|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0627");
	fprintf(printf_, "#0627");
	ret1 = fprintf(printf_, "|% #.12llo|\n", 2147483648);
	ret2 = ft_printf("|% #.12llo|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0628");
	fprintf(printf_, "#0628");
	ret1 = fprintf(printf_, "|% #.12jo|\n", 2147483648);
	ret2 = ft_printf("|% #.12jo|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0629");
	fprintf(printf_, "#0629");
	ret1 = fprintf(printf_, "|% #.12zo|\n", 2147483648);
	ret2 = ft_printf("|% #.12zo|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0630");
	fprintf(printf_, "#0630");
	ret1 = fprintf(printf_, "|% #.12hhu|\n", 2147483648);
	ret2 = ft_printf("|% #.12hhu|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0631");
	fprintf(printf_, "#0631");
	ret1 = fprintf(printf_, "|% #.12hu|\n", 2147483648);
	ret2 = ft_printf("|% #.12hu|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0632");
	fprintf(printf_, "#0632");
	ret1 = fprintf(printf_, "|% #.12lu|\n", 2147483648);
	ret2 = ft_printf("|% #.12lu|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0633");
	fprintf(printf_, "#0633");
	ret1 = fprintf(printf_, "|% #.12llu|\n", 2147483648);
	ret2 = ft_printf("|% #.12llu|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0634");
	fprintf(printf_, "#0634");
	ret1 = fprintf(printf_, "|% #.12ju|\n", 2147483648);
	ret2 = ft_printf("|% #.12ju|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0635");
	fprintf(printf_, "#0635");
	ret1 = fprintf(printf_, "|% #.12zu|\n", 2147483648);
	ret2 = ft_printf("|% #.12zu|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0636");
	fprintf(printf_, "#0636");
	ret1 = fprintf(printf_, "|% #.12hhx|\n", 2147483648);
	ret2 = ft_printf("|% #.12hhx|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0637");
	fprintf(printf_, "#0637");
	ret1 = fprintf(printf_, "|% #.12hx|\n", 2147483648);
	ret2 = ft_printf("|% #.12hx|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0638");
	fprintf(printf_, "#0638");
	ret1 = fprintf(printf_, "|% #.12lx|\n", 2147483648);
	ret2 = ft_printf("|% #.12lx|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0639");
	fprintf(printf_, "#0639");
	ret1 = fprintf(printf_, "|% #.12llx|\n", 2147483648);
	ret2 = ft_printf("|% #.12llx|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0640");
	fprintf(printf_, "#0640");
	ret1 = fprintf(printf_, "|% #.12jx|\n", 2147483648);
	ret2 = ft_printf("|% #.12jx|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0641");
	fprintf(printf_, "#0641");
	ret1 = fprintf(printf_, "|% #.12zx|\n", 2147483648);
	ret2 = ft_printf("|% #.12zx|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0642");
	fprintf(printf_, "#0642");
	ret1 = fprintf(printf_, "|% #.12hhX|\n", 2147483648);
	ret2 = ft_printf("|% #.12hhX|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0643");
	fprintf(printf_, "#0643");
	ret1 = fprintf(printf_, "|% #.12hX|\n", 2147483648);
	ret2 = ft_printf("|% #.12hX|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0644");
	fprintf(printf_, "#0644");
	ret1 = fprintf(printf_, "|% #.12lX|\n", 2147483648);
	ret2 = ft_printf("|% #.12lX|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0645");
	fprintf(printf_, "#0645");
	ret1 = fprintf(printf_, "|% #.12llX|\n", 2147483648);
	ret2 = ft_printf("|% #.12llX|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0646");
	fprintf(printf_, "#0646");
	ret1 = fprintf(printf_, "|% #.12jX|\n", 2147483648);
	ret2 = ft_printf("|% #.12jX|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0647");
	fprintf(printf_, "#0647");
	ret1 = fprintf(printf_, "|% #.12zX|\n", 2147483648);
	ret2 = ft_printf("|% #.12zX|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0648");
	fprintf(printf_, "#0648");
	ret1 = fprintf(printf_, "|%0#.12hhd|\n", 2147483648);
	ret2 = ft_printf("|%0#.12hhd|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0649");
	fprintf(printf_, "#0649");
	ret1 = fprintf(printf_, "|%0#.12hd|\n", 2147483648);
	ret2 = ft_printf("|%0#.12hd|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0650");
	fprintf(printf_, "#0650");
	ret1 = fprintf(printf_, "|%0#.12ld|\n", 2147483648);
	ret2 = ft_printf("|%0#.12ld|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0651");
	fprintf(printf_, "#0651");
	ret1 = fprintf(printf_, "|%0#.12lld|\n", 2147483648);
	ret2 = ft_printf("|%0#.12lld|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0652");
	fprintf(printf_, "#0652");
	ret1 = fprintf(printf_, "|%0#.12jd|\n", 2147483648);
	ret2 = ft_printf("|%0#.12jd|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0653");
	fprintf(printf_, "#0653");
	ret1 = fprintf(printf_, "|%0#.12zd|\n", 2147483648);
	ret2 = ft_printf("|%0#.12zd|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0654");
	fprintf(printf_, "#0654");
	ret1 = fprintf(printf_, "|%0#.12hhi|\n", 2147483648);
	ret2 = ft_printf("|%0#.12hhi|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0655");
	fprintf(printf_, "#0655");
	ret1 = fprintf(printf_, "|%0#.12hi|\n", 2147483648);
	ret2 = ft_printf("|%0#.12hi|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0656");
	fprintf(printf_, "#0656");
	ret1 = fprintf(printf_, "|%0#.12li|\n", 2147483648);
	ret2 = ft_printf("|%0#.12li|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0657");
	fprintf(printf_, "#0657");
	ret1 = fprintf(printf_, "|%0#.12lli|\n", 2147483648);
	ret2 = ft_printf("|%0#.12lli|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0658");
	fprintf(printf_, "#0658");
	ret1 = fprintf(printf_, "|%0#.12ji|\n", 2147483648);
	ret2 = ft_printf("|%0#.12ji|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0659");
	fprintf(printf_, "#0659");
	ret1 = fprintf(printf_, "|%0#.12zi|\n", 2147483648);
	ret2 = ft_printf("|%0#.12zi|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0660");
	fprintf(printf_, "#0660");
	ret1 = fprintf(printf_, "|%0#.12hho|\n", 2147483648);
	ret2 = ft_printf("|%0#.12hho|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0661");
	fprintf(printf_, "#0661");
	ret1 = fprintf(printf_, "|%0#.12ho|\n", 2147483648);
	ret2 = ft_printf("|%0#.12ho|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0662");
	fprintf(printf_, "#0662");
	ret1 = fprintf(printf_, "|%0#.12lo|\n", 2147483648);
	ret2 = ft_printf("|%0#.12lo|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0663");
	fprintf(printf_, "#0663");
	ret1 = fprintf(printf_, "|%0#.12llo|\n", 2147483648);
	ret2 = ft_printf("|%0#.12llo|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0664");
	fprintf(printf_, "#0664");
	ret1 = fprintf(printf_, "|%0#.12jo|\n", 2147483648);
	ret2 = ft_printf("|%0#.12jo|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0665");
	fprintf(printf_, "#0665");
	ret1 = fprintf(printf_, "|%0#.12zo|\n", 2147483648);
	ret2 = ft_printf("|%0#.12zo|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0666");
	fprintf(printf_, "#0666");
	ret1 = fprintf(printf_, "|%0#.12hhu|\n", 2147483648);
	ret2 = ft_printf("|%0#.12hhu|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0667");
	fprintf(printf_, "#0667");
	ret1 = fprintf(printf_, "|%0#.12hu|\n", 2147483648);
	ret2 = ft_printf("|%0#.12hu|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0668");
	fprintf(printf_, "#0668");
	ret1 = fprintf(printf_, "|%0#.12lu|\n", 2147483648);
	ret2 = ft_printf("|%0#.12lu|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0669");
	fprintf(printf_, "#0669");
	ret1 = fprintf(printf_, "|%0#.12llu|\n", 2147483648);
	ret2 = ft_printf("|%0#.12llu|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0670");
	fprintf(printf_, "#0670");
	ret1 = fprintf(printf_, "|%0#.12ju|\n", 2147483648);
	ret2 = ft_printf("|%0#.12ju|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0671");
	fprintf(printf_, "#0671");
	ret1 = fprintf(printf_, "|%0#.12zu|\n", 2147483648);
	ret2 = ft_printf("|%0#.12zu|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0672");
	fprintf(printf_, "#0672");
	ret1 = fprintf(printf_, "|%0#.12hhx|\n", 2147483648);
	ret2 = ft_printf("|%0#.12hhx|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0673");
	fprintf(printf_, "#0673");
	ret1 = fprintf(printf_, "|%0#.12hx|\n", 2147483648);
	ret2 = ft_printf("|%0#.12hx|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0674");
	fprintf(printf_, "#0674");
	ret1 = fprintf(printf_, "|%0#.12lx|\n", 2147483648);
	ret2 = ft_printf("|%0#.12lx|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0675");
	fprintf(printf_, "#0675");
	ret1 = fprintf(printf_, "|%0#.12llx|\n", 2147483648);
	ret2 = ft_printf("|%0#.12llx|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0676");
	fprintf(printf_, "#0676");
	ret1 = fprintf(printf_, "|%0#.12jx|\n", 2147483648);
	ret2 = ft_printf("|%0#.12jx|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0677");
	fprintf(printf_, "#0677");
	ret1 = fprintf(printf_, "|%0#.12zx|\n", 2147483648);
	ret2 = ft_printf("|%0#.12zx|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0678");
	fprintf(printf_, "#0678");
	ret1 = fprintf(printf_, "|%0#.12hhX|\n", 2147483648);
	ret2 = ft_printf("|%0#.12hhX|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0679");
	fprintf(printf_, "#0679");
	ret1 = fprintf(printf_, "|%0#.12hX|\n", 2147483648);
	ret2 = ft_printf("|%0#.12hX|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0680");
	fprintf(printf_, "#0680");
	ret1 = fprintf(printf_, "|%0#.12lX|\n", 2147483648);
	ret2 = ft_printf("|%0#.12lX|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0681");
	fprintf(printf_, "#0681");
	ret1 = fprintf(printf_, "|%0#.12llX|\n", 2147483648);
	ret2 = ft_printf("|%0#.12llX|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0682");
	fprintf(printf_, "#0682");
	ret1 = fprintf(printf_, "|%0#.12jX|\n", 2147483648);
	ret2 = ft_printf("|%0#.12jX|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0683");
	fprintf(printf_, "#0683");
	ret1 = fprintf(printf_, "|%0#.12zX|\n", 2147483648);
	ret2 = ft_printf("|%0#.12zX|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0684");
	fprintf(printf_, "#0684");
	ret1 = fprintf(printf_, "|% 0#.12hhd|\n", 2147483648);
	ret2 = ft_printf("|% 0#.12hhd|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0685");
	fprintf(printf_, "#0685");
	ret1 = fprintf(printf_, "|% 0#.12hd|\n", 2147483648);
	ret2 = ft_printf("|% 0#.12hd|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0686");
	fprintf(printf_, "#0686");
	ret1 = fprintf(printf_, "|% 0#.12ld|\n", 2147483648);
	ret2 = ft_printf("|% 0#.12ld|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0687");
	fprintf(printf_, "#0687");
	ret1 = fprintf(printf_, "|% 0#.12lld|\n", 2147483648);
	ret2 = ft_printf("|% 0#.12lld|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0688");
	fprintf(printf_, "#0688");
	ret1 = fprintf(printf_, "|% 0#.12jd|\n", 2147483648);
	ret2 = ft_printf("|% 0#.12jd|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0689");
	fprintf(printf_, "#0689");
	ret1 = fprintf(printf_, "|% 0#.12zd|\n", 2147483648);
	ret2 = ft_printf("|% 0#.12zd|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0690");
	fprintf(printf_, "#0690");
	ret1 = fprintf(printf_, "|% 0#.12hhi|\n", 2147483648);
	ret2 = ft_printf("|% 0#.12hhi|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0691");
	fprintf(printf_, "#0691");
	ret1 = fprintf(printf_, "|% 0#.12hi|\n", 2147483648);
	ret2 = ft_printf("|% 0#.12hi|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0692");
	fprintf(printf_, "#0692");
	ret1 = fprintf(printf_, "|% 0#.12li|\n", 2147483648);
	ret2 = ft_printf("|% 0#.12li|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0693");
	fprintf(printf_, "#0693");
	ret1 = fprintf(printf_, "|% 0#.12lli|\n", 2147483648);
	ret2 = ft_printf("|% 0#.12lli|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0694");
	fprintf(printf_, "#0694");
	ret1 = fprintf(printf_, "|% 0#.12ji|\n", 2147483648);
	ret2 = ft_printf("|% 0#.12ji|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0695");
	fprintf(printf_, "#0695");
	ret1 = fprintf(printf_, "|% 0#.12zi|\n", 2147483648);
	ret2 = ft_printf("|% 0#.12zi|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0696");
	fprintf(printf_, "#0696");
	ret1 = fprintf(printf_, "|% 0#.12hho|\n", 2147483648);
	ret2 = ft_printf("|% 0#.12hho|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0697");
	fprintf(printf_, "#0697");
	ret1 = fprintf(printf_, "|% 0#.12ho|\n", 2147483648);
	ret2 = ft_printf("|% 0#.12ho|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0698");
	fprintf(printf_, "#0698");
	ret1 = fprintf(printf_, "|% 0#.12lo|\n", 2147483648);
	ret2 = ft_printf("|% 0#.12lo|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0699");
	fprintf(printf_, "#0699");
	ret1 = fprintf(printf_, "|% 0#.12llo|\n", 2147483648);
	ret2 = ft_printf("|% 0#.12llo|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0700");
	fprintf(printf_, "#0700");
	ret1 = fprintf(printf_, "|% 0#.12jo|\n", 2147483648);
	ret2 = ft_printf("|% 0#.12jo|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0701");
	fprintf(printf_, "#0701");
	ret1 = fprintf(printf_, "|% 0#.12zo|\n", 2147483648);
	ret2 = ft_printf("|% 0#.12zo|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0702");
	fprintf(printf_, "#0702");
	ret1 = fprintf(printf_, "|% 0#.12hhu|\n", 2147483648);
	ret2 = ft_printf("|% 0#.12hhu|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0703");
	fprintf(printf_, "#0703");
	ret1 = fprintf(printf_, "|% 0#.12hu|\n", 2147483648);
	ret2 = ft_printf("|% 0#.12hu|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0704");
	fprintf(printf_, "#0704");
	ret1 = fprintf(printf_, "|% 0#.12lu|\n", 2147483648);
	ret2 = ft_printf("|% 0#.12lu|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0705");
	fprintf(printf_, "#0705");
	ret1 = fprintf(printf_, "|% 0#.12llu|\n", 2147483648);
	ret2 = ft_printf("|% 0#.12llu|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0706");
	fprintf(printf_, "#0706");
	ret1 = fprintf(printf_, "|% 0#.12ju|\n", 2147483648);
	ret2 = ft_printf("|% 0#.12ju|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0707");
	fprintf(printf_, "#0707");
	ret1 = fprintf(printf_, "|% 0#.12zu|\n", 2147483648);
	ret2 = ft_printf("|% 0#.12zu|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0708");
	fprintf(printf_, "#0708");
	ret1 = fprintf(printf_, "|% 0#.12hhx|\n", 2147483648);
	ret2 = ft_printf("|% 0#.12hhx|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0709");
	fprintf(printf_, "#0709");
	ret1 = fprintf(printf_, "|% 0#.12hx|\n", 2147483648);
	ret2 = ft_printf("|% 0#.12hx|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0710");
	fprintf(printf_, "#0710");
	ret1 = fprintf(printf_, "|% 0#.12lx|\n", 2147483648);
	ret2 = ft_printf("|% 0#.12lx|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0711");
	fprintf(printf_, "#0711");
	ret1 = fprintf(printf_, "|% 0#.12llx|\n", 2147483648);
	ret2 = ft_printf("|% 0#.12llx|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0712");
	fprintf(printf_, "#0712");
	ret1 = fprintf(printf_, "|% 0#.12jx|\n", 2147483648);
	ret2 = ft_printf("|% 0#.12jx|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0713");
	fprintf(printf_, "#0713");
	ret1 = fprintf(printf_, "|% 0#.12zx|\n", 2147483648);
	ret2 = ft_printf("|% 0#.12zx|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0714");
	fprintf(printf_, "#0714");
	ret1 = fprintf(printf_, "|% 0#.12hhX|\n", 2147483648);
	ret2 = ft_printf("|% 0#.12hhX|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0715");
	fprintf(printf_, "#0715");
	ret1 = fprintf(printf_, "|% 0#.12hX|\n", 2147483648);
	ret2 = ft_printf("|% 0#.12hX|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0716");
	fprintf(printf_, "#0716");
	ret1 = fprintf(printf_, "|% 0#.12lX|\n", 2147483648);
	ret2 = ft_printf("|% 0#.12lX|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0717");
	fprintf(printf_, "#0717");
	ret1 = fprintf(printf_, "|% 0#.12llX|\n", 2147483648);
	ret2 = ft_printf("|% 0#.12llX|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0718");
	fprintf(printf_, "#0718");
	ret1 = fprintf(printf_, "|% 0#.12jX|\n", 2147483648);
	ret2 = ft_printf("|% 0#.12jX|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0719");
	fprintf(printf_, "#0719");
	ret1 = fprintf(printf_, "|% 0#.12zX|\n", 2147483648);
	ret2 = ft_printf("|% 0#.12zX|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0720");
	fprintf(printf_, "#0720");
	ret1 = fprintf(printf_, "|%+#.12hhd|\n", 2147483648);
	ret2 = ft_printf("|%+#.12hhd|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0721");
	fprintf(printf_, "#0721");
	ret1 = fprintf(printf_, "|%+#.12hd|\n", 2147483648);
	ret2 = ft_printf("|%+#.12hd|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0722");
	fprintf(printf_, "#0722");
	ret1 = fprintf(printf_, "|%+#.12ld|\n", 2147483648);
	ret2 = ft_printf("|%+#.12ld|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0723");
	fprintf(printf_, "#0723");
	ret1 = fprintf(printf_, "|%+#.12lld|\n", 2147483648);
	ret2 = ft_printf("|%+#.12lld|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0724");
	fprintf(printf_, "#0724");
	ret1 = fprintf(printf_, "|%+#.12jd|\n", 2147483648);
	ret2 = ft_printf("|%+#.12jd|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0725");
	fprintf(printf_, "#0725");
	ret1 = fprintf(printf_, "|%+#.12zd|\n", 2147483648);
	ret2 = ft_printf("|%+#.12zd|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0726");
	fprintf(printf_, "#0726");
	ret1 = fprintf(printf_, "|%+#.12hhi|\n", 2147483648);
	ret2 = ft_printf("|%+#.12hhi|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0727");
	fprintf(printf_, "#0727");
	ret1 = fprintf(printf_, "|%+#.12hi|\n", 2147483648);
	ret2 = ft_printf("|%+#.12hi|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0728");
	fprintf(printf_, "#0728");
	ret1 = fprintf(printf_, "|%+#.12li|\n", 2147483648);
	ret2 = ft_printf("|%+#.12li|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0729");
	fprintf(printf_, "#0729");
	ret1 = fprintf(printf_, "|%+#.12lli|\n", 2147483648);
	ret2 = ft_printf("|%+#.12lli|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0730");
	fprintf(printf_, "#0730");
	ret1 = fprintf(printf_, "|%+#.12ji|\n", 2147483648);
	ret2 = ft_printf("|%+#.12ji|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0731");
	fprintf(printf_, "#0731");
	ret1 = fprintf(printf_, "|%+#.12zi|\n", 2147483648);
	ret2 = ft_printf("|%+#.12zi|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0732");
	fprintf(printf_, "#0732");
	ret1 = fprintf(printf_, "|%+#.12hho|\n", 2147483648);
	ret2 = ft_printf("|%+#.12hho|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0733");
	fprintf(printf_, "#0733");
	ret1 = fprintf(printf_, "|%+#.12ho|\n", 2147483648);
	ret2 = ft_printf("|%+#.12ho|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0734");
	fprintf(printf_, "#0734");
	ret1 = fprintf(printf_, "|%+#.12lo|\n", 2147483648);
	ret2 = ft_printf("|%+#.12lo|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0735");
	fprintf(printf_, "#0735");
	ret1 = fprintf(printf_, "|%+#.12llo|\n", 2147483648);
	ret2 = ft_printf("|%+#.12llo|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0736");
	fprintf(printf_, "#0736");
	ret1 = fprintf(printf_, "|%+#.12jo|\n", 2147483648);
	ret2 = ft_printf("|%+#.12jo|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0737");
	fprintf(printf_, "#0737");
	ret1 = fprintf(printf_, "|%+#.12zo|\n", 2147483648);
	ret2 = ft_printf("|%+#.12zo|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0738");
	fprintf(printf_, "#0738");
	ret1 = fprintf(printf_, "|%+#.12hhu|\n", 2147483648);
	ret2 = ft_printf("|%+#.12hhu|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0739");
	fprintf(printf_, "#0739");
	ret1 = fprintf(printf_, "|%+#.12hu|\n", 2147483648);
	ret2 = ft_printf("|%+#.12hu|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0740");
	fprintf(printf_, "#0740");
	ret1 = fprintf(printf_, "|%+#.12lu|\n", 2147483648);
	ret2 = ft_printf("|%+#.12lu|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0741");
	fprintf(printf_, "#0741");
	ret1 = fprintf(printf_, "|%+#.12llu|\n", 2147483648);
	ret2 = ft_printf("|%+#.12llu|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0742");
	fprintf(printf_, "#0742");
	ret1 = fprintf(printf_, "|%+#.12ju|\n", 2147483648);
	ret2 = ft_printf("|%+#.12ju|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0743");
	fprintf(printf_, "#0743");
	ret1 = fprintf(printf_, "|%+#.12zu|\n", 2147483648);
	ret2 = ft_printf("|%+#.12zu|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0744");
	fprintf(printf_, "#0744");
	ret1 = fprintf(printf_, "|%+#.12hhx|\n", 2147483648);
	ret2 = ft_printf("|%+#.12hhx|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0745");
	fprintf(printf_, "#0745");
	ret1 = fprintf(printf_, "|%+#.12hx|\n", 2147483648);
	ret2 = ft_printf("|%+#.12hx|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0746");
	fprintf(printf_, "#0746");
	ret1 = fprintf(printf_, "|%+#.12lx|\n", 2147483648);
	ret2 = ft_printf("|%+#.12lx|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0747");
	fprintf(printf_, "#0747");
	ret1 = fprintf(printf_, "|%+#.12llx|\n", 2147483648);
	ret2 = ft_printf("|%+#.12llx|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0748");
	fprintf(printf_, "#0748");
	ret1 = fprintf(printf_, "|%+#.12jx|\n", 2147483648);
	ret2 = ft_printf("|%+#.12jx|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0749");
	fprintf(printf_, "#0749");
	ret1 = fprintf(printf_, "|%+#.12zx|\n", 2147483648);
	ret2 = ft_printf("|%+#.12zx|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0750");
	fprintf(printf_, "#0750");
	ret1 = fprintf(printf_, "|%+#.12hhX|\n", 2147483648);
	ret2 = ft_printf("|%+#.12hhX|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0751");
	fprintf(printf_, "#0751");
	ret1 = fprintf(printf_, "|%+#.12hX|\n", 2147483648);
	ret2 = ft_printf("|%+#.12hX|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0752");
	fprintf(printf_, "#0752");
	ret1 = fprintf(printf_, "|%+#.12lX|\n", 2147483648);
	ret2 = ft_printf("|%+#.12lX|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0753");
	fprintf(printf_, "#0753");
	ret1 = fprintf(printf_, "|%+#.12llX|\n", 2147483648);
	ret2 = ft_printf("|%+#.12llX|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0754");
	fprintf(printf_, "#0754");
	ret1 = fprintf(printf_, "|%+#.12jX|\n", 2147483648);
	ret2 = ft_printf("|%+#.12jX|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0755");
	fprintf(printf_, "#0755");
	ret1 = fprintf(printf_, "|%+#.12zX|\n", 2147483648);
	ret2 = ft_printf("|%+#.12zX|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0756");
	fprintf(printf_, "#0756");
	ret1 = fprintf(printf_, "|% +#.12hhd|\n", 2147483648);
	ret2 = ft_printf("|% +#.12hhd|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0757");
	fprintf(printf_, "#0757");
	ret1 = fprintf(printf_, "|% +#.12hd|\n", 2147483648);
	ret2 = ft_printf("|% +#.12hd|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0758");
	fprintf(printf_, "#0758");
	ret1 = fprintf(printf_, "|% +#.12ld|\n", 2147483648);
	ret2 = ft_printf("|% +#.12ld|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0759");
	fprintf(printf_, "#0759");
	ret1 = fprintf(printf_, "|% +#.12lld|\n", 2147483648);
	ret2 = ft_printf("|% +#.12lld|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0760");
	fprintf(printf_, "#0760");
	ret1 = fprintf(printf_, "|% +#.12jd|\n", 2147483648);
	ret2 = ft_printf("|% +#.12jd|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0761");
	fprintf(printf_, "#0761");
	ret1 = fprintf(printf_, "|% +#.12zd|\n", 2147483648);
	ret2 = ft_printf("|% +#.12zd|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0762");
	fprintf(printf_, "#0762");
	ret1 = fprintf(printf_, "|% +#.12hhi|\n", 2147483648);
	ret2 = ft_printf("|% +#.12hhi|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0763");
	fprintf(printf_, "#0763");
	ret1 = fprintf(printf_, "|% +#.12hi|\n", 2147483648);
	ret2 = ft_printf("|% +#.12hi|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0764");
	fprintf(printf_, "#0764");
	ret1 = fprintf(printf_, "|% +#.12li|\n", 2147483648);
	ret2 = ft_printf("|% +#.12li|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0765");
	fprintf(printf_, "#0765");
	ret1 = fprintf(printf_, "|% +#.12lli|\n", 2147483648);
	ret2 = ft_printf("|% +#.12lli|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0766");
	fprintf(printf_, "#0766");
	ret1 = fprintf(printf_, "|% +#.12ji|\n", 2147483648);
	ret2 = ft_printf("|% +#.12ji|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0767");
	fprintf(printf_, "#0767");
	ret1 = fprintf(printf_, "|% +#.12zi|\n", 2147483648);
	ret2 = ft_printf("|% +#.12zi|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0768");
	fprintf(printf_, "#0768");
	ret1 = fprintf(printf_, "|% +#.12hho|\n", 2147483648);
	ret2 = ft_printf("|% +#.12hho|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0769");
	fprintf(printf_, "#0769");
	ret1 = fprintf(printf_, "|% +#.12ho|\n", 2147483648);
	ret2 = ft_printf("|% +#.12ho|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0770");
	fprintf(printf_, "#0770");
	ret1 = fprintf(printf_, "|% +#.12lo|\n", 2147483648);
	ret2 = ft_printf("|% +#.12lo|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0771");
	fprintf(printf_, "#0771");
	ret1 = fprintf(printf_, "|% +#.12llo|\n", 2147483648);
	ret2 = ft_printf("|% +#.12llo|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0772");
	fprintf(printf_, "#0772");
	ret1 = fprintf(printf_, "|% +#.12jo|\n", 2147483648);
	ret2 = ft_printf("|% +#.12jo|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0773");
	fprintf(printf_, "#0773");
	ret1 = fprintf(printf_, "|% +#.12zo|\n", 2147483648);
	ret2 = ft_printf("|% +#.12zo|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0774");
	fprintf(printf_, "#0774");
	ret1 = fprintf(printf_, "|% +#.12hhu|\n", 2147483648);
	ret2 = ft_printf("|% +#.12hhu|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0775");
	fprintf(printf_, "#0775");
	ret1 = fprintf(printf_, "|% +#.12hu|\n", 2147483648);
	ret2 = ft_printf("|% +#.12hu|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0776");
	fprintf(printf_, "#0776");
	ret1 = fprintf(printf_, "|% +#.12lu|\n", 2147483648);
	ret2 = ft_printf("|% +#.12lu|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0777");
	fprintf(printf_, "#0777");
	ret1 = fprintf(printf_, "|% +#.12llu|\n", 2147483648);
	ret2 = ft_printf("|% +#.12llu|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0778");
	fprintf(printf_, "#0778");
	ret1 = fprintf(printf_, "|% +#.12ju|\n", 2147483648);
	ret2 = ft_printf("|% +#.12ju|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0779");
	fprintf(printf_, "#0779");
	ret1 = fprintf(printf_, "|% +#.12zu|\n", 2147483648);
	ret2 = ft_printf("|% +#.12zu|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0780");
	fprintf(printf_, "#0780");
	ret1 = fprintf(printf_, "|% +#.12hhx|\n", 2147483648);
	ret2 = ft_printf("|% +#.12hhx|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0781");
	fprintf(printf_, "#0781");
	ret1 = fprintf(printf_, "|% +#.12hx|\n", 2147483648);
	ret2 = ft_printf("|% +#.12hx|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0782");
	fprintf(printf_, "#0782");
	ret1 = fprintf(printf_, "|% +#.12lx|\n", 2147483648);
	ret2 = ft_printf("|% +#.12lx|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0783");
	fprintf(printf_, "#0783");
	ret1 = fprintf(printf_, "|% +#.12llx|\n", 2147483648);
	ret2 = ft_printf("|% +#.12llx|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0784");
	fprintf(printf_, "#0784");
	ret1 = fprintf(printf_, "|% +#.12jx|\n", 2147483648);
	ret2 = ft_printf("|% +#.12jx|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0785");
	fprintf(printf_, "#0785");
	ret1 = fprintf(printf_, "|% +#.12zx|\n", 2147483648);
	ret2 = ft_printf("|% +#.12zx|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0786");
	fprintf(printf_, "#0786");
	ret1 = fprintf(printf_, "|% +#.12hhX|\n", 2147483648);
	ret2 = ft_printf("|% +#.12hhX|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0787");
	fprintf(printf_, "#0787");
	ret1 = fprintf(printf_, "|% +#.12hX|\n", 2147483648);
	ret2 = ft_printf("|% +#.12hX|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0788");
	fprintf(printf_, "#0788");
	ret1 = fprintf(printf_, "|% +#.12lX|\n", 2147483648);
	ret2 = ft_printf("|% +#.12lX|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0789");
	fprintf(printf_, "#0789");
	ret1 = fprintf(printf_, "|% +#.12llX|\n", 2147483648);
	ret2 = ft_printf("|% +#.12llX|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0790");
	fprintf(printf_, "#0790");
	ret1 = fprintf(printf_, "|% +#.12jX|\n", 2147483648);
	ret2 = ft_printf("|% +#.12jX|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0791");
	fprintf(printf_, "#0791");
	ret1 = fprintf(printf_, "|% +#.12zX|\n", 2147483648);
	ret2 = ft_printf("|% +#.12zX|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0792");
	fprintf(printf_, "#0792");
	ret1 = fprintf(printf_, "|%0+#.12hhd|\n", 2147483648);
	ret2 = ft_printf("|%0+#.12hhd|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0793");
	fprintf(printf_, "#0793");
	ret1 = fprintf(printf_, "|%0+#.12hd|\n", 2147483648);
	ret2 = ft_printf("|%0+#.12hd|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0794");
	fprintf(printf_, "#0794");
	ret1 = fprintf(printf_, "|%0+#.12ld|\n", 2147483648);
	ret2 = ft_printf("|%0+#.12ld|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0795");
	fprintf(printf_, "#0795");
	ret1 = fprintf(printf_, "|%0+#.12lld|\n", 2147483648);
	ret2 = ft_printf("|%0+#.12lld|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0796");
	fprintf(printf_, "#0796");
	ret1 = fprintf(printf_, "|%0+#.12jd|\n", 2147483648);
	ret2 = ft_printf("|%0+#.12jd|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0797");
	fprintf(printf_, "#0797");
	ret1 = fprintf(printf_, "|%0+#.12zd|\n", 2147483648);
	ret2 = ft_printf("|%0+#.12zd|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0798");
	fprintf(printf_, "#0798");
	ret1 = fprintf(printf_, "|%0+#.12hhi|\n", 2147483648);
	ret2 = ft_printf("|%0+#.12hhi|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0799");
	fprintf(printf_, "#0799");
	ret1 = fprintf(printf_, "|%0+#.12hi|\n", 2147483648);
	ret2 = ft_printf("|%0+#.12hi|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0800");
	fprintf(printf_, "#0800");
	ret1 = fprintf(printf_, "|%0+#.12li|\n", 2147483648);
	ret2 = ft_printf("|%0+#.12li|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0801");
	fprintf(printf_, "#0801");
	ret1 = fprintf(printf_, "|%0+#.12lli|\n", 2147483648);
	ret2 = ft_printf("|%0+#.12lli|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0802");
	fprintf(printf_, "#0802");
	ret1 = fprintf(printf_, "|%0+#.12ji|\n", 2147483648);
	ret2 = ft_printf("|%0+#.12ji|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0803");
	fprintf(printf_, "#0803");
	ret1 = fprintf(printf_, "|%0+#.12zi|\n", 2147483648);
	ret2 = ft_printf("|%0+#.12zi|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0804");
	fprintf(printf_, "#0804");
	ret1 = fprintf(printf_, "|%0+#.12hho|\n", 2147483648);
	ret2 = ft_printf("|%0+#.12hho|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0805");
	fprintf(printf_, "#0805");
	ret1 = fprintf(printf_, "|%0+#.12ho|\n", 2147483648);
	ret2 = ft_printf("|%0+#.12ho|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0806");
	fprintf(printf_, "#0806");
	ret1 = fprintf(printf_, "|%0+#.12lo|\n", 2147483648);
	ret2 = ft_printf("|%0+#.12lo|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0807");
	fprintf(printf_, "#0807");
	ret1 = fprintf(printf_, "|%0+#.12llo|\n", 2147483648);
	ret2 = ft_printf("|%0+#.12llo|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0808");
	fprintf(printf_, "#0808");
	ret1 = fprintf(printf_, "|%0+#.12jo|\n", 2147483648);
	ret2 = ft_printf("|%0+#.12jo|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0809");
	fprintf(printf_, "#0809");
	ret1 = fprintf(printf_, "|%0+#.12zo|\n", 2147483648);
	ret2 = ft_printf("|%0+#.12zo|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0810");
	fprintf(printf_, "#0810");
	ret1 = fprintf(printf_, "|%0+#.12hhu|\n", 2147483648);
	ret2 = ft_printf("|%0+#.12hhu|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0811");
	fprintf(printf_, "#0811");
	ret1 = fprintf(printf_, "|%0+#.12hu|\n", 2147483648);
	ret2 = ft_printf("|%0+#.12hu|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0812");
	fprintf(printf_, "#0812");
	ret1 = fprintf(printf_, "|%0+#.12lu|\n", 2147483648);
	ret2 = ft_printf("|%0+#.12lu|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0813");
	fprintf(printf_, "#0813");
	ret1 = fprintf(printf_, "|%0+#.12llu|\n", 2147483648);
	ret2 = ft_printf("|%0+#.12llu|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0814");
	fprintf(printf_, "#0814");
	ret1 = fprintf(printf_, "|%0+#.12ju|\n", 2147483648);
	ret2 = ft_printf("|%0+#.12ju|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0815");
	fprintf(printf_, "#0815");
	ret1 = fprintf(printf_, "|%0+#.12zu|\n", 2147483648);
	ret2 = ft_printf("|%0+#.12zu|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0816");
	fprintf(printf_, "#0816");
	ret1 = fprintf(printf_, "|%0+#.12hhx|\n", 2147483648);
	ret2 = ft_printf("|%0+#.12hhx|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0817");
	fprintf(printf_, "#0817");
	ret1 = fprintf(printf_, "|%0+#.12hx|\n", 2147483648);
	ret2 = ft_printf("|%0+#.12hx|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0818");
	fprintf(printf_, "#0818");
	ret1 = fprintf(printf_, "|%0+#.12lx|\n", 2147483648);
	ret2 = ft_printf("|%0+#.12lx|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0819");
	fprintf(printf_, "#0819");
	ret1 = fprintf(printf_, "|%0+#.12llx|\n", 2147483648);
	ret2 = ft_printf("|%0+#.12llx|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0820");
	fprintf(printf_, "#0820");
	ret1 = fprintf(printf_, "|%0+#.12jx|\n", 2147483648);
	ret2 = ft_printf("|%0+#.12jx|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0821");
	fprintf(printf_, "#0821");
	ret1 = fprintf(printf_, "|%0+#.12zx|\n", 2147483648);
	ret2 = ft_printf("|%0+#.12zx|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0822");
	fprintf(printf_, "#0822");
	ret1 = fprintf(printf_, "|%0+#.12hhX|\n", 2147483648);
	ret2 = ft_printf("|%0+#.12hhX|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0823");
	fprintf(printf_, "#0823");
	ret1 = fprintf(printf_, "|%0+#.12hX|\n", 2147483648);
	ret2 = ft_printf("|%0+#.12hX|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0824");
	fprintf(printf_, "#0824");
	ret1 = fprintf(printf_, "|%0+#.12lX|\n", 2147483648);
	ret2 = ft_printf("|%0+#.12lX|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0825");
	fprintf(printf_, "#0825");
	ret1 = fprintf(printf_, "|%0+#.12llX|\n", 2147483648);
	ret2 = ft_printf("|%0+#.12llX|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0826");
	fprintf(printf_, "#0826");
	ret1 = fprintf(printf_, "|%0+#.12jX|\n", 2147483648);
	ret2 = ft_printf("|%0+#.12jX|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0827");
	fprintf(printf_, "#0827");
	ret1 = fprintf(printf_, "|%0+#.12zX|\n", 2147483648);
	ret2 = ft_printf("|%0+#.12zX|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0828");
	fprintf(printf_, "#0828");
	ret1 = fprintf(printf_, "|% 0+#.12hhd|\n", 2147483648);
	ret2 = ft_printf("|% 0+#.12hhd|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0829");
	fprintf(printf_, "#0829");
	ret1 = fprintf(printf_, "|% 0+#.12hd|\n", 2147483648);
	ret2 = ft_printf("|% 0+#.12hd|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0830");
	fprintf(printf_, "#0830");
	ret1 = fprintf(printf_, "|% 0+#.12ld|\n", 2147483648);
	ret2 = ft_printf("|% 0+#.12ld|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0831");
	fprintf(printf_, "#0831");
	ret1 = fprintf(printf_, "|% 0+#.12lld|\n", 2147483648);
	ret2 = ft_printf("|% 0+#.12lld|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0832");
	fprintf(printf_, "#0832");
	ret1 = fprintf(printf_, "|% 0+#.12jd|\n", 2147483648);
	ret2 = ft_printf("|% 0+#.12jd|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0833");
	fprintf(printf_, "#0833");
	ret1 = fprintf(printf_, "|% 0+#.12zd|\n", 2147483648);
	ret2 = ft_printf("|% 0+#.12zd|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0834");
	fprintf(printf_, "#0834");
	ret1 = fprintf(printf_, "|% 0+#.12hhi|\n", 2147483648);
	ret2 = ft_printf("|% 0+#.12hhi|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0835");
	fprintf(printf_, "#0835");
	ret1 = fprintf(printf_, "|% 0+#.12hi|\n", 2147483648);
	ret2 = ft_printf("|% 0+#.12hi|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0836");
	fprintf(printf_, "#0836");
	ret1 = fprintf(printf_, "|% 0+#.12li|\n", 2147483648);
	ret2 = ft_printf("|% 0+#.12li|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0837");
	fprintf(printf_, "#0837");
	ret1 = fprintf(printf_, "|% 0+#.12lli|\n", 2147483648);
	ret2 = ft_printf("|% 0+#.12lli|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0838");
	fprintf(printf_, "#0838");
	ret1 = fprintf(printf_, "|% 0+#.12ji|\n", 2147483648);
	ret2 = ft_printf("|% 0+#.12ji|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0839");
	fprintf(printf_, "#0839");
	ret1 = fprintf(printf_, "|% 0+#.12zi|\n", 2147483648);
	ret2 = ft_printf("|% 0+#.12zi|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0840");
	fprintf(printf_, "#0840");
	ret1 = fprintf(printf_, "|% 0+#.12hho|\n", 2147483648);
	ret2 = ft_printf("|% 0+#.12hho|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0841");
	fprintf(printf_, "#0841");
	ret1 = fprintf(printf_, "|% 0+#.12ho|\n", 2147483648);
	ret2 = ft_printf("|% 0+#.12ho|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0842");
	fprintf(printf_, "#0842");
	ret1 = fprintf(printf_, "|% 0+#.12lo|\n", 2147483648);
	ret2 = ft_printf("|% 0+#.12lo|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0843");
	fprintf(printf_, "#0843");
	ret1 = fprintf(printf_, "|% 0+#.12llo|\n", 2147483648);
	ret2 = ft_printf("|% 0+#.12llo|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0844");
	fprintf(printf_, "#0844");
	ret1 = fprintf(printf_, "|% 0+#.12jo|\n", 2147483648);
	ret2 = ft_printf("|% 0+#.12jo|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0845");
	fprintf(printf_, "#0845");
	ret1 = fprintf(printf_, "|% 0+#.12zo|\n", 2147483648);
	ret2 = ft_printf("|% 0+#.12zo|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0846");
	fprintf(printf_, "#0846");
	ret1 = fprintf(printf_, "|% 0+#.12hhu|\n", 2147483648);
	ret2 = ft_printf("|% 0+#.12hhu|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0847");
	fprintf(printf_, "#0847");
	ret1 = fprintf(printf_, "|% 0+#.12hu|\n", 2147483648);
	ret2 = ft_printf("|% 0+#.12hu|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0848");
	fprintf(printf_, "#0848");
	ret1 = fprintf(printf_, "|% 0+#.12lu|\n", 2147483648);
	ret2 = ft_printf("|% 0+#.12lu|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0849");
	fprintf(printf_, "#0849");
	ret1 = fprintf(printf_, "|% 0+#.12llu|\n", 2147483648);
	ret2 = ft_printf("|% 0+#.12llu|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0850");
	fprintf(printf_, "#0850");
	ret1 = fprintf(printf_, "|% 0+#.12ju|\n", 2147483648);
	ret2 = ft_printf("|% 0+#.12ju|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0851");
	fprintf(printf_, "#0851");
	ret1 = fprintf(printf_, "|% 0+#.12zu|\n", 2147483648);
	ret2 = ft_printf("|% 0+#.12zu|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0852");
	fprintf(printf_, "#0852");
	ret1 = fprintf(printf_, "|% 0+#.12hhx|\n", 2147483648);
	ret2 = ft_printf("|% 0+#.12hhx|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0853");
	fprintf(printf_, "#0853");
	ret1 = fprintf(printf_, "|% 0+#.12hx|\n", 2147483648);
	ret2 = ft_printf("|% 0+#.12hx|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0854");
	fprintf(printf_, "#0854");
	ret1 = fprintf(printf_, "|% 0+#.12lx|\n", 2147483648);
	ret2 = ft_printf("|% 0+#.12lx|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0855");
	fprintf(printf_, "#0855");
	ret1 = fprintf(printf_, "|% 0+#.12llx|\n", 2147483648);
	ret2 = ft_printf("|% 0+#.12llx|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0856");
	fprintf(printf_, "#0856");
	ret1 = fprintf(printf_, "|% 0+#.12jx|\n", 2147483648);
	ret2 = ft_printf("|% 0+#.12jx|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0857");
	fprintf(printf_, "#0857");
	ret1 = fprintf(printf_, "|% 0+#.12zx|\n", 2147483648);
	ret2 = ft_printf("|% 0+#.12zx|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0858");
	fprintf(printf_, "#0858");
	ret1 = fprintf(printf_, "|% 0+#.12hhX|\n", 2147483648);
	ret2 = ft_printf("|% 0+#.12hhX|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0859");
	fprintf(printf_, "#0859");
	ret1 = fprintf(printf_, "|% 0+#.12hX|\n", 2147483648);
	ret2 = ft_printf("|% 0+#.12hX|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0860");
	fprintf(printf_, "#0860");
	ret1 = fprintf(printf_, "|% 0+#.12lX|\n", 2147483648);
	ret2 = ft_printf("|% 0+#.12lX|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0861");
	fprintf(printf_, "#0861");
	ret1 = fprintf(printf_, "|% 0+#.12llX|\n", 2147483648);
	ret2 = ft_printf("|% 0+#.12llX|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0862");
	fprintf(printf_, "#0862");
	ret1 = fprintf(printf_, "|% 0+#.12jX|\n", 2147483648);
	ret2 = ft_printf("|% 0+#.12jX|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0863");
	fprintf(printf_, "#0863");
	ret1 = fprintf(printf_, "|% 0+#.12zX|\n", 2147483648);
	ret2 = ft_printf("|% 0+#.12zX|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0864");
	fprintf(printf_, "#0864");
	ret1 = fprintf(printf_, "|%-#.12hhd|\n", 2147483648);
	ret2 = ft_printf("|%-#.12hhd|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0865");
	fprintf(printf_, "#0865");
	ret1 = fprintf(printf_, "|%-#.12hd|\n", 2147483648);
	ret2 = ft_printf("|%-#.12hd|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0866");
	fprintf(printf_, "#0866");
	ret1 = fprintf(printf_, "|%-#.12ld|\n", 2147483648);
	ret2 = ft_printf("|%-#.12ld|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0867");
	fprintf(printf_, "#0867");
	ret1 = fprintf(printf_, "|%-#.12lld|\n", 2147483648);
	ret2 = ft_printf("|%-#.12lld|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0868");
	fprintf(printf_, "#0868");
	ret1 = fprintf(printf_, "|%-#.12jd|\n", 2147483648);
	ret2 = ft_printf("|%-#.12jd|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0869");
	fprintf(printf_, "#0869");
	ret1 = fprintf(printf_, "|%-#.12zd|\n", 2147483648);
	ret2 = ft_printf("|%-#.12zd|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0870");
	fprintf(printf_, "#0870");
	ret1 = fprintf(printf_, "|%-#.12hhi|\n", 2147483648);
	ret2 = ft_printf("|%-#.12hhi|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0871");
	fprintf(printf_, "#0871");
	ret1 = fprintf(printf_, "|%-#.12hi|\n", 2147483648);
	ret2 = ft_printf("|%-#.12hi|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0872");
	fprintf(printf_, "#0872");
	ret1 = fprintf(printf_, "|%-#.12li|\n", 2147483648);
	ret2 = ft_printf("|%-#.12li|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0873");
	fprintf(printf_, "#0873");
	ret1 = fprintf(printf_, "|%-#.12lli|\n", 2147483648);
	ret2 = ft_printf("|%-#.12lli|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0874");
	fprintf(printf_, "#0874");
	ret1 = fprintf(printf_, "|%-#.12ji|\n", 2147483648);
	ret2 = ft_printf("|%-#.12ji|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0875");
	fprintf(printf_, "#0875");
	ret1 = fprintf(printf_, "|%-#.12zi|\n", 2147483648);
	ret2 = ft_printf("|%-#.12zi|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0876");
	fprintf(printf_, "#0876");
	ret1 = fprintf(printf_, "|%-#.12hho|\n", 2147483648);
	ret2 = ft_printf("|%-#.12hho|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0877");
	fprintf(printf_, "#0877");
	ret1 = fprintf(printf_, "|%-#.12ho|\n", 2147483648);
	ret2 = ft_printf("|%-#.12ho|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0878");
	fprintf(printf_, "#0878");
	ret1 = fprintf(printf_, "|%-#.12lo|\n", 2147483648);
	ret2 = ft_printf("|%-#.12lo|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0879");
	fprintf(printf_, "#0879");
	ret1 = fprintf(printf_, "|%-#.12llo|\n", 2147483648);
	ret2 = ft_printf("|%-#.12llo|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0880");
	fprintf(printf_, "#0880");
	ret1 = fprintf(printf_, "|%-#.12jo|\n", 2147483648);
	ret2 = ft_printf("|%-#.12jo|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0881");
	fprintf(printf_, "#0881");
	ret1 = fprintf(printf_, "|%-#.12zo|\n", 2147483648);
	ret2 = ft_printf("|%-#.12zo|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0882");
	fprintf(printf_, "#0882");
	ret1 = fprintf(printf_, "|%-#.12hhu|\n", 2147483648);
	ret2 = ft_printf("|%-#.12hhu|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0883");
	fprintf(printf_, "#0883");
	ret1 = fprintf(printf_, "|%-#.12hu|\n", 2147483648);
	ret2 = ft_printf("|%-#.12hu|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0884");
	fprintf(printf_, "#0884");
	ret1 = fprintf(printf_, "|%-#.12lu|\n", 2147483648);
	ret2 = ft_printf("|%-#.12lu|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0885");
	fprintf(printf_, "#0885");
	ret1 = fprintf(printf_, "|%-#.12llu|\n", 2147483648);
	ret2 = ft_printf("|%-#.12llu|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0886");
	fprintf(printf_, "#0886");
	ret1 = fprintf(printf_, "|%-#.12ju|\n", 2147483648);
	ret2 = ft_printf("|%-#.12ju|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0887");
	fprintf(printf_, "#0887");
	ret1 = fprintf(printf_, "|%-#.12zu|\n", 2147483648);
	ret2 = ft_printf("|%-#.12zu|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0888");
	fprintf(printf_, "#0888");
	ret1 = fprintf(printf_, "|%-#.12hhx|\n", 2147483648);
	ret2 = ft_printf("|%-#.12hhx|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0889");
	fprintf(printf_, "#0889");
	ret1 = fprintf(printf_, "|%-#.12hx|\n", 2147483648);
	ret2 = ft_printf("|%-#.12hx|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0890");
	fprintf(printf_, "#0890");
	ret1 = fprintf(printf_, "|%-#.12lx|\n", 2147483648);
	ret2 = ft_printf("|%-#.12lx|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0891");
	fprintf(printf_, "#0891");
	ret1 = fprintf(printf_, "|%-#.12llx|\n", 2147483648);
	ret2 = ft_printf("|%-#.12llx|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0892");
	fprintf(printf_, "#0892");
	ret1 = fprintf(printf_, "|%-#.12jx|\n", 2147483648);
	ret2 = ft_printf("|%-#.12jx|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0893");
	fprintf(printf_, "#0893");
	ret1 = fprintf(printf_, "|%-#.12zx|\n", 2147483648);
	ret2 = ft_printf("|%-#.12zx|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0894");
	fprintf(printf_, "#0894");
	ret1 = fprintf(printf_, "|%-#.12hhX|\n", 2147483648);
	ret2 = ft_printf("|%-#.12hhX|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0895");
	fprintf(printf_, "#0895");
	ret1 = fprintf(printf_, "|%-#.12hX|\n", 2147483648);
	ret2 = ft_printf("|%-#.12hX|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0896");
	fprintf(printf_, "#0896");
	ret1 = fprintf(printf_, "|%-#.12lX|\n", 2147483648);
	ret2 = ft_printf("|%-#.12lX|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0897");
	fprintf(printf_, "#0897");
	ret1 = fprintf(printf_, "|%-#.12llX|\n", 2147483648);
	ret2 = ft_printf("|%-#.12llX|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0898");
	fprintf(printf_, "#0898");
	ret1 = fprintf(printf_, "|%-#.12jX|\n", 2147483648);
	ret2 = ft_printf("|%-#.12jX|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0899");
	fprintf(printf_, "#0899");
	ret1 = fprintf(printf_, "|%-#.12zX|\n", 2147483648);
	ret2 = ft_printf("|%-#.12zX|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0900");
	fprintf(printf_, "#0900");
	ret1 = fprintf(printf_, "|% -#.12hhd|\n", 2147483648);
	ret2 = ft_printf("|% -#.12hhd|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0901");
	fprintf(printf_, "#0901");
	ret1 = fprintf(printf_, "|% -#.12hd|\n", 2147483648);
	ret2 = ft_printf("|% -#.12hd|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0902");
	fprintf(printf_, "#0902");
	ret1 = fprintf(printf_, "|% -#.12ld|\n", 2147483648);
	ret2 = ft_printf("|% -#.12ld|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0903");
	fprintf(printf_, "#0903");
	ret1 = fprintf(printf_, "|% -#.12lld|\n", 2147483648);
	ret2 = ft_printf("|% -#.12lld|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0904");
	fprintf(printf_, "#0904");
	ret1 = fprintf(printf_, "|% -#.12jd|\n", 2147483648);
	ret2 = ft_printf("|% -#.12jd|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0905");
	fprintf(printf_, "#0905");
	ret1 = fprintf(printf_, "|% -#.12zd|\n", 2147483648);
	ret2 = ft_printf("|% -#.12zd|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0906");
	fprintf(printf_, "#0906");
	ret1 = fprintf(printf_, "|% -#.12hhi|\n", 2147483648);
	ret2 = ft_printf("|% -#.12hhi|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0907");
	fprintf(printf_, "#0907");
	ret1 = fprintf(printf_, "|% -#.12hi|\n", 2147483648);
	ret2 = ft_printf("|% -#.12hi|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0908");
	fprintf(printf_, "#0908");
	ret1 = fprintf(printf_, "|% -#.12li|\n", 2147483648);
	ret2 = ft_printf("|% -#.12li|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0909");
	fprintf(printf_, "#0909");
	ret1 = fprintf(printf_, "|% -#.12lli|\n", 2147483648);
	ret2 = ft_printf("|% -#.12lli|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0910");
	fprintf(printf_, "#0910");
	ret1 = fprintf(printf_, "|% -#.12ji|\n", 2147483648);
	ret2 = ft_printf("|% -#.12ji|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0911");
	fprintf(printf_, "#0911");
	ret1 = fprintf(printf_, "|% -#.12zi|\n", 2147483648);
	ret2 = ft_printf("|% -#.12zi|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0912");
	fprintf(printf_, "#0912");
	ret1 = fprintf(printf_, "|% -#.12hho|\n", 2147483648);
	ret2 = ft_printf("|% -#.12hho|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0913");
	fprintf(printf_, "#0913");
	ret1 = fprintf(printf_, "|% -#.12ho|\n", 2147483648);
	ret2 = ft_printf("|% -#.12ho|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0914");
	fprintf(printf_, "#0914");
	ret1 = fprintf(printf_, "|% -#.12lo|\n", 2147483648);
	ret2 = ft_printf("|% -#.12lo|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0915");
	fprintf(printf_, "#0915");
	ret1 = fprintf(printf_, "|% -#.12llo|\n", 2147483648);
	ret2 = ft_printf("|% -#.12llo|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0916");
	fprintf(printf_, "#0916");
	ret1 = fprintf(printf_, "|% -#.12jo|\n", 2147483648);
	ret2 = ft_printf("|% -#.12jo|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0917");
	fprintf(printf_, "#0917");
	ret1 = fprintf(printf_, "|% -#.12zo|\n", 2147483648);
	ret2 = ft_printf("|% -#.12zo|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0918");
	fprintf(printf_, "#0918");
	ret1 = fprintf(printf_, "|% -#.12hhu|\n", 2147483648);
	ret2 = ft_printf("|% -#.12hhu|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0919");
	fprintf(printf_, "#0919");
	ret1 = fprintf(printf_, "|% -#.12hu|\n", 2147483648);
	ret2 = ft_printf("|% -#.12hu|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0920");
	fprintf(printf_, "#0920");
	ret1 = fprintf(printf_, "|% -#.12lu|\n", 2147483648);
	ret2 = ft_printf("|% -#.12lu|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0921");
	fprintf(printf_, "#0921");
	ret1 = fprintf(printf_, "|% -#.12llu|\n", 2147483648);
	ret2 = ft_printf("|% -#.12llu|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0922");
	fprintf(printf_, "#0922");
	ret1 = fprintf(printf_, "|% -#.12ju|\n", 2147483648);
	ret2 = ft_printf("|% -#.12ju|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0923");
	fprintf(printf_, "#0923");
	ret1 = fprintf(printf_, "|% -#.12zu|\n", 2147483648);
	ret2 = ft_printf("|% -#.12zu|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0924");
	fprintf(printf_, "#0924");
	ret1 = fprintf(printf_, "|% -#.12hhx|\n", 2147483648);
	ret2 = ft_printf("|% -#.12hhx|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0925");
	fprintf(printf_, "#0925");
	ret1 = fprintf(printf_, "|% -#.12hx|\n", 2147483648);
	ret2 = ft_printf("|% -#.12hx|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0926");
	fprintf(printf_, "#0926");
	ret1 = fprintf(printf_, "|% -#.12lx|\n", 2147483648);
	ret2 = ft_printf("|% -#.12lx|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0927");
	fprintf(printf_, "#0927");
	ret1 = fprintf(printf_, "|% -#.12llx|\n", 2147483648);
	ret2 = ft_printf("|% -#.12llx|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0928");
	fprintf(printf_, "#0928");
	ret1 = fprintf(printf_, "|% -#.12jx|\n", 2147483648);
	ret2 = ft_printf("|% -#.12jx|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0929");
	fprintf(printf_, "#0929");
	ret1 = fprintf(printf_, "|% -#.12zx|\n", 2147483648);
	ret2 = ft_printf("|% -#.12zx|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0930");
	fprintf(printf_, "#0930");
	ret1 = fprintf(printf_, "|% -#.12hhX|\n", 2147483648);
	ret2 = ft_printf("|% -#.12hhX|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0931");
	fprintf(printf_, "#0931");
	ret1 = fprintf(printf_, "|% -#.12hX|\n", 2147483648);
	ret2 = ft_printf("|% -#.12hX|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0932");
	fprintf(printf_, "#0932");
	ret1 = fprintf(printf_, "|% -#.12lX|\n", 2147483648);
	ret2 = ft_printf("|% -#.12lX|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0933");
	fprintf(printf_, "#0933");
	ret1 = fprintf(printf_, "|% -#.12llX|\n", 2147483648);
	ret2 = ft_printf("|% -#.12llX|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0934");
	fprintf(printf_, "#0934");
	ret1 = fprintf(printf_, "|% -#.12jX|\n", 2147483648);
	ret2 = ft_printf("|% -#.12jX|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0935");
	fprintf(printf_, "#0935");
	ret1 = fprintf(printf_, "|% -#.12zX|\n", 2147483648);
	ret2 = ft_printf("|% -#.12zX|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0936");
	fprintf(printf_, "#0936");
	ret1 = fprintf(printf_, "|%0-#.12hhd|\n", 2147483648);
	ret2 = ft_printf("|%0-#.12hhd|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0937");
	fprintf(printf_, "#0937");
	ret1 = fprintf(printf_, "|%0-#.12hd|\n", 2147483648);
	ret2 = ft_printf("|%0-#.12hd|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0938");
	fprintf(printf_, "#0938");
	ret1 = fprintf(printf_, "|%0-#.12ld|\n", 2147483648);
	ret2 = ft_printf("|%0-#.12ld|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0939");
	fprintf(printf_, "#0939");
	ret1 = fprintf(printf_, "|%0-#.12lld|\n", 2147483648);
	ret2 = ft_printf("|%0-#.12lld|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0940");
	fprintf(printf_, "#0940");
	ret1 = fprintf(printf_, "|%0-#.12jd|\n", 2147483648);
	ret2 = ft_printf("|%0-#.12jd|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0941");
	fprintf(printf_, "#0941");
	ret1 = fprintf(printf_, "|%0-#.12zd|\n", 2147483648);
	ret2 = ft_printf("|%0-#.12zd|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0942");
	fprintf(printf_, "#0942");
	ret1 = fprintf(printf_, "|%0-#.12hhi|\n", 2147483648);
	ret2 = ft_printf("|%0-#.12hhi|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0943");
	fprintf(printf_, "#0943");
	ret1 = fprintf(printf_, "|%0-#.12hi|\n", 2147483648);
	ret2 = ft_printf("|%0-#.12hi|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0944");
	fprintf(printf_, "#0944");
	ret1 = fprintf(printf_, "|%0-#.12li|\n", 2147483648);
	ret2 = ft_printf("|%0-#.12li|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0945");
	fprintf(printf_, "#0945");
	ret1 = fprintf(printf_, "|%0-#.12lli|\n", 2147483648);
	ret2 = ft_printf("|%0-#.12lli|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0946");
	fprintf(printf_, "#0946");
	ret1 = fprintf(printf_, "|%0-#.12ji|\n", 2147483648);
	ret2 = ft_printf("|%0-#.12ji|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0947");
	fprintf(printf_, "#0947");
	ret1 = fprintf(printf_, "|%0-#.12zi|\n", 2147483648);
	ret2 = ft_printf("|%0-#.12zi|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0948");
	fprintf(printf_, "#0948");
	ret1 = fprintf(printf_, "|%0-#.12hho|\n", 2147483648);
	ret2 = ft_printf("|%0-#.12hho|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0949");
	fprintf(printf_, "#0949");
	ret1 = fprintf(printf_, "|%0-#.12ho|\n", 2147483648);
	ret2 = ft_printf("|%0-#.12ho|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0950");
	fprintf(printf_, "#0950");
	ret1 = fprintf(printf_, "|%0-#.12lo|\n", 2147483648);
	ret2 = ft_printf("|%0-#.12lo|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0951");
	fprintf(printf_, "#0951");
	ret1 = fprintf(printf_, "|%0-#.12llo|\n", 2147483648);
	ret2 = ft_printf("|%0-#.12llo|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0952");
	fprintf(printf_, "#0952");
	ret1 = fprintf(printf_, "|%0-#.12jo|\n", 2147483648);
	ret2 = ft_printf("|%0-#.12jo|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0953");
	fprintf(printf_, "#0953");
	ret1 = fprintf(printf_, "|%0-#.12zo|\n", 2147483648);
	ret2 = ft_printf("|%0-#.12zo|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0954");
	fprintf(printf_, "#0954");
	ret1 = fprintf(printf_, "|%0-#.12hhu|\n", 2147483648);
	ret2 = ft_printf("|%0-#.12hhu|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0955");
	fprintf(printf_, "#0955");
	ret1 = fprintf(printf_, "|%0-#.12hu|\n", 2147483648);
	ret2 = ft_printf("|%0-#.12hu|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0956");
	fprintf(printf_, "#0956");
	ret1 = fprintf(printf_, "|%0-#.12lu|\n", 2147483648);
	ret2 = ft_printf("|%0-#.12lu|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0957");
	fprintf(printf_, "#0957");
	ret1 = fprintf(printf_, "|%0-#.12llu|\n", 2147483648);
	ret2 = ft_printf("|%0-#.12llu|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0958");
	fprintf(printf_, "#0958");
	ret1 = fprintf(printf_, "|%0-#.12ju|\n", 2147483648);
	ret2 = ft_printf("|%0-#.12ju|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0959");
	fprintf(printf_, "#0959");
	ret1 = fprintf(printf_, "|%0-#.12zu|\n", 2147483648);
	ret2 = ft_printf("|%0-#.12zu|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0960");
	fprintf(printf_, "#0960");
	ret1 = fprintf(printf_, "|%0-#.12hhx|\n", 2147483648);
	ret2 = ft_printf("|%0-#.12hhx|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0961");
	fprintf(printf_, "#0961");
	ret1 = fprintf(printf_, "|%0-#.12hx|\n", 2147483648);
	ret2 = ft_printf("|%0-#.12hx|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0962");
	fprintf(printf_, "#0962");
	ret1 = fprintf(printf_, "|%0-#.12lx|\n", 2147483648);
	ret2 = ft_printf("|%0-#.12lx|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0963");
	fprintf(printf_, "#0963");
	ret1 = fprintf(printf_, "|%0-#.12llx|\n", 2147483648);
	ret2 = ft_printf("|%0-#.12llx|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0964");
	fprintf(printf_, "#0964");
	ret1 = fprintf(printf_, "|%0-#.12jx|\n", 2147483648);
	ret2 = ft_printf("|%0-#.12jx|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0965");
	fprintf(printf_, "#0965");
	ret1 = fprintf(printf_, "|%0-#.12zx|\n", 2147483648);
	ret2 = ft_printf("|%0-#.12zx|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0966");
	fprintf(printf_, "#0966");
	ret1 = fprintf(printf_, "|%0-#.12hhX|\n", 2147483648);
	ret2 = ft_printf("|%0-#.12hhX|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0967");
	fprintf(printf_, "#0967");
	ret1 = fprintf(printf_, "|%0-#.12hX|\n", 2147483648);
	ret2 = ft_printf("|%0-#.12hX|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0968");
	fprintf(printf_, "#0968");
	ret1 = fprintf(printf_, "|%0-#.12lX|\n", 2147483648);
	ret2 = ft_printf("|%0-#.12lX|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0969");
	fprintf(printf_, "#0969");
	ret1 = fprintf(printf_, "|%0-#.12llX|\n", 2147483648);
	ret2 = ft_printf("|%0-#.12llX|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0970");
	fprintf(printf_, "#0970");
	ret1 = fprintf(printf_, "|%0-#.12jX|\n", 2147483648);
	ret2 = ft_printf("|%0-#.12jX|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0971");
	fprintf(printf_, "#0971");
	ret1 = fprintf(printf_, "|%0-#.12zX|\n", 2147483648);
	ret2 = ft_printf("|%0-#.12zX|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0972");
	fprintf(printf_, "#0972");
	ret1 = fprintf(printf_, "|% 0-#.12hhd|\n", 2147483648);
	ret2 = ft_printf("|% 0-#.12hhd|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0973");
	fprintf(printf_, "#0973");
	ret1 = fprintf(printf_, "|% 0-#.12hd|\n", 2147483648);
	ret2 = ft_printf("|% 0-#.12hd|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0974");
	fprintf(printf_, "#0974");
	ret1 = fprintf(printf_, "|% 0-#.12ld|\n", 2147483648);
	ret2 = ft_printf("|% 0-#.12ld|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0975");
	fprintf(printf_, "#0975");
	ret1 = fprintf(printf_, "|% 0-#.12lld|\n", 2147483648);
	ret2 = ft_printf("|% 0-#.12lld|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0976");
	fprintf(printf_, "#0976");
	ret1 = fprintf(printf_, "|% 0-#.12jd|\n", 2147483648);
	ret2 = ft_printf("|% 0-#.12jd|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0977");
	fprintf(printf_, "#0977");
	ret1 = fprintf(printf_, "|% 0-#.12zd|\n", 2147483648);
	ret2 = ft_printf("|% 0-#.12zd|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0978");
	fprintf(printf_, "#0978");
	ret1 = fprintf(printf_, "|% 0-#.12hhi|\n", 2147483648);
	ret2 = ft_printf("|% 0-#.12hhi|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0979");
	fprintf(printf_, "#0979");
	ret1 = fprintf(printf_, "|% 0-#.12hi|\n", 2147483648);
	ret2 = ft_printf("|% 0-#.12hi|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0980");
	fprintf(printf_, "#0980");
	ret1 = fprintf(printf_, "|% 0-#.12li|\n", 2147483648);
	ret2 = ft_printf("|% 0-#.12li|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0981");
	fprintf(printf_, "#0981");
	ret1 = fprintf(printf_, "|% 0-#.12lli|\n", 2147483648);
	ret2 = ft_printf("|% 0-#.12lli|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0982");
	fprintf(printf_, "#0982");
	ret1 = fprintf(printf_, "|% 0-#.12ji|\n", 2147483648);
	ret2 = ft_printf("|% 0-#.12ji|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0983");
	fprintf(printf_, "#0983");
	ret1 = fprintf(printf_, "|% 0-#.12zi|\n", 2147483648);
	ret2 = ft_printf("|% 0-#.12zi|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0984");
	fprintf(printf_, "#0984");
	ret1 = fprintf(printf_, "|% 0-#.12hho|\n", 2147483648);
	ret2 = ft_printf("|% 0-#.12hho|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0985");
	fprintf(printf_, "#0985");
	ret1 = fprintf(printf_, "|% 0-#.12ho|\n", 2147483648);
	ret2 = ft_printf("|% 0-#.12ho|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0986");
	fprintf(printf_, "#0986");
	ret1 = fprintf(printf_, "|% 0-#.12lo|\n", 2147483648);
	ret2 = ft_printf("|% 0-#.12lo|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0987");
	fprintf(printf_, "#0987");
	ret1 = fprintf(printf_, "|% 0-#.12llo|\n", 2147483648);
	ret2 = ft_printf("|% 0-#.12llo|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0988");
	fprintf(printf_, "#0988");
	ret1 = fprintf(printf_, "|% 0-#.12jo|\n", 2147483648);
	ret2 = ft_printf("|% 0-#.12jo|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0989");
	fprintf(printf_, "#0989");
	ret1 = fprintf(printf_, "|% 0-#.12zo|\n", 2147483648);
	ret2 = ft_printf("|% 0-#.12zo|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0990");
	fprintf(printf_, "#0990");
	ret1 = fprintf(printf_, "|% 0-#.12hhu|\n", 2147483648);
	ret2 = ft_printf("|% 0-#.12hhu|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0991");
	fprintf(printf_, "#0991");
	ret1 = fprintf(printf_, "|% 0-#.12hu|\n", 2147483648);
	ret2 = ft_printf("|% 0-#.12hu|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0992");
	fprintf(printf_, "#0992");
	ret1 = fprintf(printf_, "|% 0-#.12lu|\n", 2147483648);
	ret2 = ft_printf("|% 0-#.12lu|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0993");
	fprintf(printf_, "#0993");
	ret1 = fprintf(printf_, "|% 0-#.12llu|\n", 2147483648);
	ret2 = ft_printf("|% 0-#.12llu|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0994");
	fprintf(printf_, "#0994");
	ret1 = fprintf(printf_, "|% 0-#.12ju|\n", 2147483648);
	ret2 = ft_printf("|% 0-#.12ju|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0995");
	fprintf(printf_, "#0995");
	ret1 = fprintf(printf_, "|% 0-#.12zu|\n", 2147483648);
	ret2 = ft_printf("|% 0-#.12zu|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0996");
	fprintf(printf_, "#0996");
	ret1 = fprintf(printf_, "|% 0-#.12hhx|\n", 2147483648);
	ret2 = ft_printf("|% 0-#.12hhx|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0997");
	fprintf(printf_, "#0997");
	ret1 = fprintf(printf_, "|% 0-#.12hx|\n", 2147483648);
	ret2 = ft_printf("|% 0-#.12hx|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0998");
	fprintf(printf_, "#0998");
	ret1 = fprintf(printf_, "|% 0-#.12lx|\n", 2147483648);
	ret2 = ft_printf("|% 0-#.12lx|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#0999");
	fprintf(printf_, "#0999");
	ret1 = fprintf(printf_, "|% 0-#.12llx|\n", 2147483648);
	ret2 = ft_printf("|% 0-#.12llx|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#1000");
	fprintf(printf_, "#1000");
	ret1 = fprintf(printf_, "|% 0-#.12jx|\n", 2147483648);
	ret2 = ft_printf("|% 0-#.12jx|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#1001");
	fprintf(printf_, "#1001");
	ret1 = fprintf(printf_, "|% 0-#.12zx|\n", 2147483648);
	ret2 = ft_printf("|% 0-#.12zx|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#1002");
	fprintf(printf_, "#1002");
	ret1 = fprintf(printf_, "|% 0-#.12hhX|\n", 2147483648);
	ret2 = ft_printf("|% 0-#.12hhX|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#1003");
	fprintf(printf_, "#1003");
	ret1 = fprintf(printf_, "|% 0-#.12hX|\n", 2147483648);
	ret2 = ft_printf("|% 0-#.12hX|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#1004");
	fprintf(printf_, "#1004");
	ret1 = fprintf(printf_, "|% 0-#.12lX|\n", 2147483648);
	ret2 = ft_printf("|% 0-#.12lX|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#1005");
	fprintf(printf_, "#1005");
	ret1 = fprintf(printf_, "|% 0-#.12llX|\n", 2147483648);
	ret2 = ft_printf("|% 0-#.12llX|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#1006");
	fprintf(printf_, "#1006");
	ret1 = fprintf(printf_, "|% 0-#.12jX|\n", 2147483648);
	ret2 = ft_printf("|% 0-#.12jX|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#1007");
	fprintf(printf_, "#1007");
	ret1 = fprintf(printf_, "|% 0-#.12zX|\n", 2147483648);
	ret2 = ft_printf("|% 0-#.12zX|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#1008");
	fprintf(printf_, "#1008");
	ret1 = fprintf(printf_, "|%+-#.12hhd|\n", 2147483648);
	ret2 = ft_printf("|%+-#.12hhd|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#1009");
	fprintf(printf_, "#1009");
	ret1 = fprintf(printf_, "|%+-#.12hd|\n", 2147483648);
	ret2 = ft_printf("|%+-#.12hd|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#1010");
	fprintf(printf_, "#1010");
	ret1 = fprintf(printf_, "|%+-#.12ld|\n", 2147483648);
	ret2 = ft_printf("|%+-#.12ld|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#1011");
	fprintf(printf_, "#1011");
	ret1 = fprintf(printf_, "|%+-#.12lld|\n", 2147483648);
	ret2 = ft_printf("|%+-#.12lld|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#1012");
	fprintf(printf_, "#1012");
	ret1 = fprintf(printf_, "|%+-#.12jd|\n", 2147483648);
	ret2 = ft_printf("|%+-#.12jd|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#1013");
	fprintf(printf_, "#1013");
	ret1 = fprintf(printf_, "|%+-#.12zd|\n", 2147483648);
	ret2 = ft_printf("|%+-#.12zd|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#1014");
	fprintf(printf_, "#1014");
	ret1 = fprintf(printf_, "|%+-#.12hhi|\n", 2147483648);
	ret2 = ft_printf("|%+-#.12hhi|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#1015");
	fprintf(printf_, "#1015");
	ret1 = fprintf(printf_, "|%+-#.12hi|\n", 2147483648);
	ret2 = ft_printf("|%+-#.12hi|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#1016");
	fprintf(printf_, "#1016");
	ret1 = fprintf(printf_, "|%+-#.12li|\n", 2147483648);
	ret2 = ft_printf("|%+-#.12li|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#1017");
	fprintf(printf_, "#1017");
	ret1 = fprintf(printf_, "|%+-#.12lli|\n", 2147483648);
	ret2 = ft_printf("|%+-#.12lli|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#1018");
	fprintf(printf_, "#1018");
	ret1 = fprintf(printf_, "|%+-#.12ji|\n", 2147483648);
	ret2 = ft_printf("|%+-#.12ji|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#1019");
	fprintf(printf_, "#1019");
	ret1 = fprintf(printf_, "|%+-#.12zi|\n", 2147483648);
	ret2 = ft_printf("|%+-#.12zi|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#1020");
	fprintf(printf_, "#1020");
	ret1 = fprintf(printf_, "|%+-#.12hho|\n", 2147483648);
	ret2 = ft_printf("|%+-#.12hho|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#1021");
	fprintf(printf_, "#1021");
	ret1 = fprintf(printf_, "|%+-#.12ho|\n", 2147483648);
	ret2 = ft_printf("|%+-#.12ho|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#1022");
	fprintf(printf_, "#1022");
	ret1 = fprintf(printf_, "|%+-#.12lo|\n", 2147483648);
	ret2 = ft_printf("|%+-#.12lo|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#1023");
	fprintf(printf_, "#1023");
	ret1 = fprintf(printf_, "|%+-#.12llo|\n", 2147483648);
	ret2 = ft_printf("|%+-#.12llo|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#1024");
	fprintf(printf_, "#1024");
	ret1 = fprintf(printf_, "|%+-#.12jo|\n", 2147483648);
	ret2 = ft_printf("|%+-#.12jo|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#1025");
	fprintf(printf_, "#1025");
	ret1 = fprintf(printf_, "|%+-#.12zo|\n", 2147483648);
	ret2 = ft_printf("|%+-#.12zo|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#1026");
	fprintf(printf_, "#1026");
	ret1 = fprintf(printf_, "|%+-#.12hhu|\n", 2147483648);
	ret2 = ft_printf("|%+-#.12hhu|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#1027");
	fprintf(printf_, "#1027");
	ret1 = fprintf(printf_, "|%+-#.12hu|\n", 2147483648);
	ret2 = ft_printf("|%+-#.12hu|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#1028");
	fprintf(printf_, "#1028");
	ret1 = fprintf(printf_, "|%+-#.12lu|\n", 2147483648);
	ret2 = ft_printf("|%+-#.12lu|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#1029");
	fprintf(printf_, "#1029");
	ret1 = fprintf(printf_, "|%+-#.12llu|\n", 2147483648);
	ret2 = ft_printf("|%+-#.12llu|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#1030");
	fprintf(printf_, "#1030");
	ret1 = fprintf(printf_, "|%+-#.12ju|\n", 2147483648);
	ret2 = ft_printf("|%+-#.12ju|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#1031");
	fprintf(printf_, "#1031");
	ret1 = fprintf(printf_, "|%+-#.12zu|\n", 2147483648);
	ret2 = ft_printf("|%+-#.12zu|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#1032");
	fprintf(printf_, "#1032");
	ret1 = fprintf(printf_, "|%+-#.12hhx|\n", 2147483648);
	ret2 = ft_printf("|%+-#.12hhx|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#1033");
	fprintf(printf_, "#1033");
	ret1 = fprintf(printf_, "|%+-#.12hx|\n", 2147483648);
	ret2 = ft_printf("|%+-#.12hx|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#1034");
	fprintf(printf_, "#1034");
	ret1 = fprintf(printf_, "|%+-#.12lx|\n", 2147483648);
	ret2 = ft_printf("|%+-#.12lx|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#1035");
	fprintf(printf_, "#1035");
	ret1 = fprintf(printf_, "|%+-#.12llx|\n", 2147483648);
	ret2 = ft_printf("|%+-#.12llx|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#1036");
	fprintf(printf_, "#1036");
	ret1 = fprintf(printf_, "|%+-#.12jx|\n", 2147483648);
	ret2 = ft_printf("|%+-#.12jx|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#1037");
	fprintf(printf_, "#1037");
	ret1 = fprintf(printf_, "|%+-#.12zx|\n", 2147483648);
	ret2 = ft_printf("|%+-#.12zx|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#1038");
	fprintf(printf_, "#1038");
	ret1 = fprintf(printf_, "|%+-#.12hhX|\n", 2147483648);
	ret2 = ft_printf("|%+-#.12hhX|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#1039");
	fprintf(printf_, "#1039");
	ret1 = fprintf(printf_, "|%+-#.12hX|\n", 2147483648);
	ret2 = ft_printf("|%+-#.12hX|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#1040");
	fprintf(printf_, "#1040");
	ret1 = fprintf(printf_, "|%+-#.12lX|\n", 2147483648);
	ret2 = ft_printf("|%+-#.12lX|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#1041");
	fprintf(printf_, "#1041");
	ret1 = fprintf(printf_, "|%+-#.12llX|\n", 2147483648);
	ret2 = ft_printf("|%+-#.12llX|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#1042");
	fprintf(printf_, "#1042");
	ret1 = fprintf(printf_, "|%+-#.12jX|\n", 2147483648);
	ret2 = ft_printf("|%+-#.12jX|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#1043");
	fprintf(printf_, "#1043");
	ret1 = fprintf(printf_, "|%+-#.12zX|\n", 2147483648);
	ret2 = ft_printf("|%+-#.12zX|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#1044");
	fprintf(printf_, "#1044");
	ret1 = fprintf(printf_, "|% +-#.12hhd|\n", 2147483648);
	ret2 = ft_printf("|% +-#.12hhd|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#1045");
	fprintf(printf_, "#1045");
	ret1 = fprintf(printf_, "|% +-#.12hd|\n", 2147483648);
	ret2 = ft_printf("|% +-#.12hd|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#1046");
	fprintf(printf_, "#1046");
	ret1 = fprintf(printf_, "|% +-#.12ld|\n", 2147483648);
	ret2 = ft_printf("|% +-#.12ld|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#1047");
	fprintf(printf_, "#1047");
	ret1 = fprintf(printf_, "|% +-#.12lld|\n", 2147483648);
	ret2 = ft_printf("|% +-#.12lld|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#1048");
	fprintf(printf_, "#1048");
	ret1 = fprintf(printf_, "|% +-#.12jd|\n", 2147483648);
	ret2 = ft_printf("|% +-#.12jd|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#1049");
	fprintf(printf_, "#1049");
	ret1 = fprintf(printf_, "|% +-#.12zd|\n", 2147483648);
	ret2 = ft_printf("|% +-#.12zd|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#1050");
	fprintf(printf_, "#1050");
	ret1 = fprintf(printf_, "|% +-#.12hhi|\n", 2147483648);
	ret2 = ft_printf("|% +-#.12hhi|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#1051");
	fprintf(printf_, "#1051");
	ret1 = fprintf(printf_, "|% +-#.12hi|\n", 2147483648);
	ret2 = ft_printf("|% +-#.12hi|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#1052");
	fprintf(printf_, "#1052");
	ret1 = fprintf(printf_, "|% +-#.12li|\n", 2147483648);
	ret2 = ft_printf("|% +-#.12li|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#1053");
	fprintf(printf_, "#1053");
	ret1 = fprintf(printf_, "|% +-#.12lli|\n", 2147483648);
	ret2 = ft_printf("|% +-#.12lli|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#1054");
	fprintf(printf_, "#1054");
	ret1 = fprintf(printf_, "|% +-#.12ji|\n", 2147483648);
	ret2 = ft_printf("|% +-#.12ji|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#1055");
	fprintf(printf_, "#1055");
	ret1 = fprintf(printf_, "|% +-#.12zi|\n", 2147483648);
	ret2 = ft_printf("|% +-#.12zi|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#1056");
	fprintf(printf_, "#1056");
	ret1 = fprintf(printf_, "|% +-#.12hho|\n", 2147483648);
	ret2 = ft_printf("|% +-#.12hho|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#1057");
	fprintf(printf_, "#1057");
	ret1 = fprintf(printf_, "|% +-#.12ho|\n", 2147483648);
	ret2 = ft_printf("|% +-#.12ho|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#1058");
	fprintf(printf_, "#1058");
	ret1 = fprintf(printf_, "|% +-#.12lo|\n", 2147483648);
	ret2 = ft_printf("|% +-#.12lo|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#1059");
	fprintf(printf_, "#1059");
	ret1 = fprintf(printf_, "|% +-#.12llo|\n", 2147483648);
	ret2 = ft_printf("|% +-#.12llo|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#1060");
	fprintf(printf_, "#1060");
	ret1 = fprintf(printf_, "|% +-#.12jo|\n", 2147483648);
	ret2 = ft_printf("|% +-#.12jo|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#1061");
	fprintf(printf_, "#1061");
	ret1 = fprintf(printf_, "|% +-#.12zo|\n", 2147483648);
	ret2 = ft_printf("|% +-#.12zo|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#1062");
	fprintf(printf_, "#1062");
	ret1 = fprintf(printf_, "|% +-#.12hhu|\n", 2147483648);
	ret2 = ft_printf("|% +-#.12hhu|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#1063");
	fprintf(printf_, "#1063");
	ret1 = fprintf(printf_, "|% +-#.12hu|\n", 2147483648);
	ret2 = ft_printf("|% +-#.12hu|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#1064");
	fprintf(printf_, "#1064");
	ret1 = fprintf(printf_, "|% +-#.12lu|\n", 2147483648);
	ret2 = ft_printf("|% +-#.12lu|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#1065");
	fprintf(printf_, "#1065");
	ret1 = fprintf(printf_, "|% +-#.12llu|\n", 2147483648);
	ret2 = ft_printf("|% +-#.12llu|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#1066");
	fprintf(printf_, "#1066");
	ret1 = fprintf(printf_, "|% +-#.12ju|\n", 2147483648);
	ret2 = ft_printf("|% +-#.12ju|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#1067");
	fprintf(printf_, "#1067");
	ret1 = fprintf(printf_, "|% +-#.12zu|\n", 2147483648);
	ret2 = ft_printf("|% +-#.12zu|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#1068");
	fprintf(printf_, "#1068");
	ret1 = fprintf(printf_, "|% +-#.12hhx|\n", 2147483648);
	ret2 = ft_printf("|% +-#.12hhx|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#1069");
	fprintf(printf_, "#1069");
	ret1 = fprintf(printf_, "|% +-#.12hx|\n", 2147483648);
	ret2 = ft_printf("|% +-#.12hx|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#1070");
	fprintf(printf_, "#1070");
	ret1 = fprintf(printf_, "|% +-#.12lx|\n", 2147483648);
	ret2 = ft_printf("|% +-#.12lx|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#1071");
	fprintf(printf_, "#1071");
	ret1 = fprintf(printf_, "|% +-#.12llx|\n", 2147483648);
	ret2 = ft_printf("|% +-#.12llx|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#1072");
	fprintf(printf_, "#1072");
	ret1 = fprintf(printf_, "|% +-#.12jx|\n", 2147483648);
	ret2 = ft_printf("|% +-#.12jx|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#1073");
	fprintf(printf_, "#1073");
	ret1 = fprintf(printf_, "|% +-#.12zx|\n", 2147483648);
	ret2 = ft_printf("|% +-#.12zx|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#1074");
	fprintf(printf_, "#1074");
	ret1 = fprintf(printf_, "|% +-#.12hhX|\n", 2147483648);
	ret2 = ft_printf("|% +-#.12hhX|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#1075");
	fprintf(printf_, "#1075");
	ret1 = fprintf(printf_, "|% +-#.12hX|\n", 2147483648);
	ret2 = ft_printf("|% +-#.12hX|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#1076");
	fprintf(printf_, "#1076");
	ret1 = fprintf(printf_, "|% +-#.12lX|\n", 2147483648);
	ret2 = ft_printf("|% +-#.12lX|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#1077");
	fprintf(printf_, "#1077");
	ret1 = fprintf(printf_, "|% +-#.12llX|\n", 2147483648);
	ret2 = ft_printf("|% +-#.12llX|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#1078");
	fprintf(printf_, "#1078");
	ret1 = fprintf(printf_, "|% +-#.12jX|\n", 2147483648);
	ret2 = ft_printf("|% +-#.12jX|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#1079");
	fprintf(printf_, "#1079");
	ret1 = fprintf(printf_, "|% +-#.12zX|\n", 2147483648);
	ret2 = ft_printf("|% +-#.12zX|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#1080");
	fprintf(printf_, "#1080");
	ret1 = fprintf(printf_, "|%0+-#.12hhd|\n", 2147483648);
	ret2 = ft_printf("|%0+-#.12hhd|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#1081");
	fprintf(printf_, "#1081");
	ret1 = fprintf(printf_, "|%0+-#.12hd|\n", 2147483648);
	ret2 = ft_printf("|%0+-#.12hd|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#1082");
	fprintf(printf_, "#1082");
	ret1 = fprintf(printf_, "|%0+-#.12ld|\n", 2147483648);
	ret2 = ft_printf("|%0+-#.12ld|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#1083");
	fprintf(printf_, "#1083");
	ret1 = fprintf(printf_, "|%0+-#.12lld|\n", 2147483648);
	ret2 = ft_printf("|%0+-#.12lld|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#1084");
	fprintf(printf_, "#1084");
	ret1 = fprintf(printf_, "|%0+-#.12jd|\n", 2147483648);
	ret2 = ft_printf("|%0+-#.12jd|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#1085");
	fprintf(printf_, "#1085");
	ret1 = fprintf(printf_, "|%0+-#.12zd|\n", 2147483648);
	ret2 = ft_printf("|%0+-#.12zd|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#1086");
	fprintf(printf_, "#1086");
	ret1 = fprintf(printf_, "|%0+-#.12hhi|\n", 2147483648);
	ret2 = ft_printf("|%0+-#.12hhi|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#1087");
	fprintf(printf_, "#1087");
	ret1 = fprintf(printf_, "|%0+-#.12hi|\n", 2147483648);
	ret2 = ft_printf("|%0+-#.12hi|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#1088");
	fprintf(printf_, "#1088");
	ret1 = fprintf(printf_, "|%0+-#.12li|\n", 2147483648);
	ret2 = ft_printf("|%0+-#.12li|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#1089");
	fprintf(printf_, "#1089");
	ret1 = fprintf(printf_, "|%0+-#.12lli|\n", 2147483648);
	ret2 = ft_printf("|%0+-#.12lli|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#1090");
	fprintf(printf_, "#1090");
	ret1 = fprintf(printf_, "|%0+-#.12ji|\n", 2147483648);
	ret2 = ft_printf("|%0+-#.12ji|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#1091");
	fprintf(printf_, "#1091");
	ret1 = fprintf(printf_, "|%0+-#.12zi|\n", 2147483648);
	ret2 = ft_printf("|%0+-#.12zi|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#1092");
	fprintf(printf_, "#1092");
	ret1 = fprintf(printf_, "|%0+-#.12hho|\n", 2147483648);
	ret2 = ft_printf("|%0+-#.12hho|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#1093");
	fprintf(printf_, "#1093");
	ret1 = fprintf(printf_, "|%0+-#.12ho|\n", 2147483648);
	ret2 = ft_printf("|%0+-#.12ho|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#1094");
	fprintf(printf_, "#1094");
	ret1 = fprintf(printf_, "|%0+-#.12lo|\n", 2147483648);
	ret2 = ft_printf("|%0+-#.12lo|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#1095");
	fprintf(printf_, "#1095");
	ret1 = fprintf(printf_, "|%0+-#.12llo|\n", 2147483648);
	ret2 = ft_printf("|%0+-#.12llo|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#1096");
	fprintf(printf_, "#1096");
	ret1 = fprintf(printf_, "|%0+-#.12jo|\n", 2147483648);
	ret2 = ft_printf("|%0+-#.12jo|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#1097");
	fprintf(printf_, "#1097");
	ret1 = fprintf(printf_, "|%0+-#.12zo|\n", 2147483648);
	ret2 = ft_printf("|%0+-#.12zo|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#1098");
	fprintf(printf_, "#1098");
	ret1 = fprintf(printf_, "|%0+-#.12hhu|\n", 2147483648);
	ret2 = ft_printf("|%0+-#.12hhu|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#1099");
	fprintf(printf_, "#1099");
	ret1 = fprintf(printf_, "|%0+-#.12hu|\n", 2147483648);
	ret2 = ft_printf("|%0+-#.12hu|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#1100");
	fprintf(printf_, "#1100");
	ret1 = fprintf(printf_, "|%0+-#.12lu|\n", 2147483648);
	ret2 = ft_printf("|%0+-#.12lu|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#1101");
	fprintf(printf_, "#1101");
	ret1 = fprintf(printf_, "|%0+-#.12llu|\n", 2147483648);
	ret2 = ft_printf("|%0+-#.12llu|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#1102");
	fprintf(printf_, "#1102");
	ret1 = fprintf(printf_, "|%0+-#.12ju|\n", 2147483648);
	ret2 = ft_printf("|%0+-#.12ju|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#1103");
	fprintf(printf_, "#1103");
	ret1 = fprintf(printf_, "|%0+-#.12zu|\n", 2147483648);
	ret2 = ft_printf("|%0+-#.12zu|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#1104");
	fprintf(printf_, "#1104");
	ret1 = fprintf(printf_, "|%0+-#.12hhx|\n", 2147483648);
	ret2 = ft_printf("|%0+-#.12hhx|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#1105");
	fprintf(printf_, "#1105");
	ret1 = fprintf(printf_, "|%0+-#.12hx|\n", 2147483648);
	ret2 = ft_printf("|%0+-#.12hx|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#1106");
	fprintf(printf_, "#1106");
	ret1 = fprintf(printf_, "|%0+-#.12lx|\n", 2147483648);
	ret2 = ft_printf("|%0+-#.12lx|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#1107");
	fprintf(printf_, "#1107");
	ret1 = fprintf(printf_, "|%0+-#.12llx|\n", 2147483648);
	ret2 = ft_printf("|%0+-#.12llx|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#1108");
	fprintf(printf_, "#1108");
	ret1 = fprintf(printf_, "|%0+-#.12jx|\n", 2147483648);
	ret2 = ft_printf("|%0+-#.12jx|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#1109");
	fprintf(printf_, "#1109");
	ret1 = fprintf(printf_, "|%0+-#.12zx|\n", 2147483648);
	ret2 = ft_printf("|%0+-#.12zx|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#1110");
	fprintf(printf_, "#1110");
	ret1 = fprintf(printf_, "|%0+-#.12hhX|\n", 2147483648);
	ret2 = ft_printf("|%0+-#.12hhX|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#1111");
	fprintf(printf_, "#1111");
	ret1 = fprintf(printf_, "|%0+-#.12hX|\n", 2147483648);
	ret2 = ft_printf("|%0+-#.12hX|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#1112");
	fprintf(printf_, "#1112");
	ret1 = fprintf(printf_, "|%0+-#.12lX|\n", 2147483648);
	ret2 = ft_printf("|%0+-#.12lX|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#1113");
	fprintf(printf_, "#1113");
	ret1 = fprintf(printf_, "|%0+-#.12llX|\n", 2147483648);
	ret2 = ft_printf("|%0+-#.12llX|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#1114");
	fprintf(printf_, "#1114");
	ret1 = fprintf(printf_, "|%0+-#.12jX|\n", 2147483648);
	ret2 = ft_printf("|%0+-#.12jX|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#1115");
	fprintf(printf_, "#1115");
	ret1 = fprintf(printf_, "|%0+-#.12zX|\n", 2147483648);
	ret2 = ft_printf("|%0+-#.12zX|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#1116");
	fprintf(printf_, "#1116");
	ret1 = fprintf(printf_, "|% 0+-#.12hhd|\n", 2147483648);
	ret2 = ft_printf("|% 0+-#.12hhd|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#1117");
	fprintf(printf_, "#1117");
	ret1 = fprintf(printf_, "|% 0+-#.12hd|\n", 2147483648);
	ret2 = ft_printf("|% 0+-#.12hd|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#1118");
	fprintf(printf_, "#1118");
	ret1 = fprintf(printf_, "|% 0+-#.12ld|\n", 2147483648);
	ret2 = ft_printf("|% 0+-#.12ld|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#1119");
	fprintf(printf_, "#1119");
	ret1 = fprintf(printf_, "|% 0+-#.12lld|\n", 2147483648);
	ret2 = ft_printf("|% 0+-#.12lld|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#1120");
	fprintf(printf_, "#1120");
	ret1 = fprintf(printf_, "|% 0+-#.12jd|\n", 2147483648);
	ret2 = ft_printf("|% 0+-#.12jd|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#1121");
	fprintf(printf_, "#1121");
	ret1 = fprintf(printf_, "|% 0+-#.12zd|\n", 2147483648);
	ret2 = ft_printf("|% 0+-#.12zd|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#1122");
	fprintf(printf_, "#1122");
	ret1 = fprintf(printf_, "|% 0+-#.12hhi|\n", 2147483648);
	ret2 = ft_printf("|% 0+-#.12hhi|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#1123");
	fprintf(printf_, "#1123");
	ret1 = fprintf(printf_, "|% 0+-#.12hi|\n", 2147483648);
	ret2 = ft_printf("|% 0+-#.12hi|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#1124");
	fprintf(printf_, "#1124");
	ret1 = fprintf(printf_, "|% 0+-#.12li|\n", 2147483648);
	ret2 = ft_printf("|% 0+-#.12li|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#1125");
	fprintf(printf_, "#1125");
	ret1 = fprintf(printf_, "|% 0+-#.12lli|\n", 2147483648);
	ret2 = ft_printf("|% 0+-#.12lli|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#1126");
	fprintf(printf_, "#1126");
	ret1 = fprintf(printf_, "|% 0+-#.12ji|\n", 2147483648);
	ret2 = ft_printf("|% 0+-#.12ji|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#1127");
	fprintf(printf_, "#1127");
	ret1 = fprintf(printf_, "|% 0+-#.12zi|\n", 2147483648);
	ret2 = ft_printf("|% 0+-#.12zi|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#1128");
	fprintf(printf_, "#1128");
	ret1 = fprintf(printf_, "|% 0+-#.12hho|\n", 2147483648);
	ret2 = ft_printf("|% 0+-#.12hho|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#1129");
	fprintf(printf_, "#1129");
	ret1 = fprintf(printf_, "|% 0+-#.12ho|\n", 2147483648);
	ret2 = ft_printf("|% 0+-#.12ho|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#1130");
	fprintf(printf_, "#1130");
	ret1 = fprintf(printf_, "|% 0+-#.12lo|\n", 2147483648);
	ret2 = ft_printf("|% 0+-#.12lo|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#1131");
	fprintf(printf_, "#1131");
	ret1 = fprintf(printf_, "|% 0+-#.12llo|\n", 2147483648);
	ret2 = ft_printf("|% 0+-#.12llo|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#1132");
	fprintf(printf_, "#1132");
	ret1 = fprintf(printf_, "|% 0+-#.12jo|\n", 2147483648);
	ret2 = ft_printf("|% 0+-#.12jo|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#1133");
	fprintf(printf_, "#1133");
	ret1 = fprintf(printf_, "|% 0+-#.12zo|\n", 2147483648);
	ret2 = ft_printf("|% 0+-#.12zo|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#1134");
	fprintf(printf_, "#1134");
	ret1 = fprintf(printf_, "|% 0+-#.12hhu|\n", 2147483648);
	ret2 = ft_printf("|% 0+-#.12hhu|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#1135");
	fprintf(printf_, "#1135");
	ret1 = fprintf(printf_, "|% 0+-#.12hu|\n", 2147483648);
	ret2 = ft_printf("|% 0+-#.12hu|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#1136");
	fprintf(printf_, "#1136");
	ret1 = fprintf(printf_, "|% 0+-#.12lu|\n", 2147483648);
	ret2 = ft_printf("|% 0+-#.12lu|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#1137");
	fprintf(printf_, "#1137");
	ret1 = fprintf(printf_, "|% 0+-#.12llu|\n", 2147483648);
	ret2 = ft_printf("|% 0+-#.12llu|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#1138");
	fprintf(printf_, "#1138");
	ret1 = fprintf(printf_, "|% 0+-#.12ju|\n", 2147483648);
	ret2 = ft_printf("|% 0+-#.12ju|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#1139");
	fprintf(printf_, "#1139");
	ret1 = fprintf(printf_, "|% 0+-#.12zu|\n", 2147483648);
	ret2 = ft_printf("|% 0+-#.12zu|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#1140");
	fprintf(printf_, "#1140");
	ret1 = fprintf(printf_, "|% 0+-#.12hhx|\n", 2147483648);
	ret2 = ft_printf("|% 0+-#.12hhx|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#1141");
	fprintf(printf_, "#1141");
	ret1 = fprintf(printf_, "|% 0+-#.12hx|\n", 2147483648);
	ret2 = ft_printf("|% 0+-#.12hx|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#1142");
	fprintf(printf_, "#1142");
	ret1 = fprintf(printf_, "|% 0+-#.12lx|\n", 2147483648);
	ret2 = ft_printf("|% 0+-#.12lx|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#1143");
	fprintf(printf_, "#1143");
	ret1 = fprintf(printf_, "|% 0+-#.12llx|\n", 2147483648);
	ret2 = ft_printf("|% 0+-#.12llx|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#1144");
	fprintf(printf_, "#1144");
	ret1 = fprintf(printf_, "|% 0+-#.12jx|\n", 2147483648);
	ret2 = ft_printf("|% 0+-#.12jx|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#1145");
	fprintf(printf_, "#1145");
	ret1 = fprintf(printf_, "|% 0+-#.12zx|\n", 2147483648);
	ret2 = ft_printf("|% 0+-#.12zx|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#1146");
	fprintf(printf_, "#1146");
	ret1 = fprintf(printf_, "|% 0+-#.12hhX|\n", 2147483648);
	ret2 = ft_printf("|% 0+-#.12hhX|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#1147");
	fprintf(printf_, "#1147");
	ret1 = fprintf(printf_, "|% 0+-#.12hX|\n", 2147483648);
	ret2 = ft_printf("|% 0+-#.12hX|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#1148");
	fprintf(printf_, "#1148");
	ret1 = fprintf(printf_, "|% 0+-#.12lX|\n", 2147483648);
	ret2 = ft_printf("|% 0+-#.12lX|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#1149");
	fprintf(printf_, "#1149");
	ret1 = fprintf(printf_, "|% 0+-#.12llX|\n", 2147483648);
	ret2 = ft_printf("|% 0+-#.12llX|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#1150");
	fprintf(printf_, "#1150");
	ret1 = fprintf(printf_, "|% 0+-#.12jX|\n", 2147483648);
	ret2 = ft_printf("|% 0+-#.12jX|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
//@
	ft_printf("#1151");
	fprintf(printf_, "#1151");
	ret1 = fprintf(printf_, "|% 0+-#.12zX|\n", 2147483648);
	ret2 = ft_printf("|% 0+-#.12zX|\n", 2147483648);
	fprintf(printf_ret, "%d", ret1);
	fprintf(ft_printf_ret, "%d", ret2);
	fclose(printf_);
	fclose(printf_ret);
	fclose(ft_printf_ret);
	return (0);
}

