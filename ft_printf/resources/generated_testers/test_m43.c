#include "../tools/test_headers.h"
#include "libftprintf.h"

int		main(void)
{
	FILE	*printf_, *printf_ret, *ft_printf_ret;
	int		ret1, ret2;

	printf_ = fopen("../testing_results/test_m43_printf_print", "w");
	printf_ret = fopen("../testing_results/test_m43_printf_ret", "w");
	ft_printf_ret = fopen("../testing_results/test_m43_ft_printf_ret", "w");
	setvbuf(printf_, NULL, _IONBF, 0);
	setvbuf(printf_ret, NULL, _IONBF, 0);
	setvbuf(ft_printf_ret, NULL, _IONBF, 0);

	
//@
	ft_printf("\n#0000");
	fprintf(printf_, "\n#0000");
	ret1 = fprintf(printf_, "|%5.3D|", -25);
	ret2 = ft_printf("|%5.3D|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0001");
	fprintf(printf_, "\n#0001");
	ret1 = fprintf(printf_, "|%5.3hhD|", -25);
	ret2 = ft_printf("|%5.3hhD|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0002");
	fprintf(printf_, "\n#0002");
	ret1 = fprintf(printf_, "|%5.3hD|", -25);
	ret2 = ft_printf("|%5.3hD|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0003");
	fprintf(printf_, "\n#0003");
	ret1 = fprintf(printf_, "|%5.3lD|", -25);
	ret2 = ft_printf("|%5.3lD|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0004");
	fprintf(printf_, "\n#0004");
	ret1 = fprintf(printf_, "|%5.3llD|", -25);
	ret2 = ft_printf("|%5.3llD|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0005");
	fprintf(printf_, "\n#0005");
	ret1 = fprintf(printf_, "|%5.3jD|", -25);
	ret2 = ft_printf("|%5.3jD|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0006");
	fprintf(printf_, "\n#0006");
	ret1 = fprintf(printf_, "|%5.3zD|", -25);
	ret2 = ft_printf("|%5.3zD|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0007");
	fprintf(printf_, "\n#0007");
	ret1 = fprintf(printf_, "|%5.3O|", -25);
	ret2 = ft_printf("|%5.3O|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0008");
	fprintf(printf_, "\n#0008");
	ret1 = fprintf(printf_, "|%5.3hhO|", -25);
	ret2 = ft_printf("|%5.3hhO|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0009");
	fprintf(printf_, "\n#0009");
	ret1 = fprintf(printf_, "|%5.3hO|", -25);
	ret2 = ft_printf("|%5.3hO|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0010");
	fprintf(printf_, "\n#0010");
	ret1 = fprintf(printf_, "|%5.3lO|", -25);
	ret2 = ft_printf("|%5.3lO|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0011");
	fprintf(printf_, "\n#0011");
	ret1 = fprintf(printf_, "|%5.3llO|", -25);
	ret2 = ft_printf("|%5.3llO|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0012");
	fprintf(printf_, "\n#0012");
	ret1 = fprintf(printf_, "|%5.3jO|", -25);
	ret2 = ft_printf("|%5.3jO|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0013");
	fprintf(printf_, "\n#0013");
	ret1 = fprintf(printf_, "|%5.3zO|", -25);
	ret2 = ft_printf("|%5.3zO|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0014");
	fprintf(printf_, "\n#0014");
	ret1 = fprintf(printf_, "|%5.3U|", -25);
	ret2 = ft_printf("|%5.3U|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0015");
	fprintf(printf_, "\n#0015");
	ret1 = fprintf(printf_, "|%5.3hhU|", -25);
	ret2 = ft_printf("|%5.3hhU|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0016");
	fprintf(printf_, "\n#0016");
	ret1 = fprintf(printf_, "|%5.3hU|", -25);
	ret2 = ft_printf("|%5.3hU|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0017");
	fprintf(printf_, "\n#0017");
	ret1 = fprintf(printf_, "|%5.3lU|", -25);
	ret2 = ft_printf("|%5.3lU|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0018");
	fprintf(printf_, "\n#0018");
	ret1 = fprintf(printf_, "|%5.3llU|", -25);
	ret2 = ft_printf("|%5.3llU|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0019");
	fprintf(printf_, "\n#0019");
	ret1 = fprintf(printf_, "|%5.3jU|", -25);
	ret2 = ft_printf("|%5.3jU|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0020");
	fprintf(printf_, "\n#0020");
	ret1 = fprintf(printf_, "|%5.3zU|", -25);
	ret2 = ft_printf("|%5.3zU|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0021");
	fprintf(printf_, "\n#0021");
	ret1 = fprintf(printf_, "|% 5.3D|", -25);
	ret2 = ft_printf("|% 5.3D|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0022");
	fprintf(printf_, "\n#0022");
	ret1 = fprintf(printf_, "|% 5.3hhD|", -25);
	ret2 = ft_printf("|% 5.3hhD|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0023");
	fprintf(printf_, "\n#0023");
	ret1 = fprintf(printf_, "|% 5.3hD|", -25);
	ret2 = ft_printf("|% 5.3hD|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0024");
	fprintf(printf_, "\n#0024");
	ret1 = fprintf(printf_, "|% 5.3lD|", -25);
	ret2 = ft_printf("|% 5.3lD|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0025");
	fprintf(printf_, "\n#0025");
	ret1 = fprintf(printf_, "|% 5.3llD|", -25);
	ret2 = ft_printf("|% 5.3llD|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0026");
	fprintf(printf_, "\n#0026");
	ret1 = fprintf(printf_, "|% 5.3jD|", -25);
	ret2 = ft_printf("|% 5.3jD|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0027");
	fprintf(printf_, "\n#0027");
	ret1 = fprintf(printf_, "|% 5.3zD|", -25);
	ret2 = ft_printf("|% 5.3zD|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0028");
	fprintf(printf_, "\n#0028");
	ret1 = fprintf(printf_, "|% 5.3O|", -25);
	ret2 = ft_printf("|% 5.3O|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0029");
	fprintf(printf_, "\n#0029");
	ret1 = fprintf(printf_, "|% 5.3hhO|", -25);
	ret2 = ft_printf("|% 5.3hhO|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0030");
	fprintf(printf_, "\n#0030");
	ret1 = fprintf(printf_, "|% 5.3hO|", -25);
	ret2 = ft_printf("|% 5.3hO|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0031");
	fprintf(printf_, "\n#0031");
	ret1 = fprintf(printf_, "|% 5.3lO|", -25);
	ret2 = ft_printf("|% 5.3lO|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0032");
	fprintf(printf_, "\n#0032");
	ret1 = fprintf(printf_, "|% 5.3llO|", -25);
	ret2 = ft_printf("|% 5.3llO|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0033");
	fprintf(printf_, "\n#0033");
	ret1 = fprintf(printf_, "|% 5.3jO|", -25);
	ret2 = ft_printf("|% 5.3jO|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0034");
	fprintf(printf_, "\n#0034");
	ret1 = fprintf(printf_, "|% 5.3zO|", -25);
	ret2 = ft_printf("|% 5.3zO|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0035");
	fprintf(printf_, "\n#0035");
	ret1 = fprintf(printf_, "|% 5.3U|", -25);
	ret2 = ft_printf("|% 5.3U|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0036");
	fprintf(printf_, "\n#0036");
	ret1 = fprintf(printf_, "|% 5.3hhU|", -25);
	ret2 = ft_printf("|% 5.3hhU|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0037");
	fprintf(printf_, "\n#0037");
	ret1 = fprintf(printf_, "|% 5.3hU|", -25);
	ret2 = ft_printf("|% 5.3hU|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0038");
	fprintf(printf_, "\n#0038");
	ret1 = fprintf(printf_, "|% 5.3lU|", -25);
	ret2 = ft_printf("|% 5.3lU|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0039");
	fprintf(printf_, "\n#0039");
	ret1 = fprintf(printf_, "|% 5.3llU|", -25);
	ret2 = ft_printf("|% 5.3llU|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0040");
	fprintf(printf_, "\n#0040");
	ret1 = fprintf(printf_, "|% 5.3jU|", -25);
	ret2 = ft_printf("|% 5.3jU|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0041");
	fprintf(printf_, "\n#0041");
	ret1 = fprintf(printf_, "|% 5.3zU|", -25);
	ret2 = ft_printf("|% 5.3zU|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0042");
	fprintf(printf_, "\n#0042");
	ret1 = fprintf(printf_, "|%05.3D|", -25);
	ret2 = ft_printf("|%05.3D|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0043");
	fprintf(printf_, "\n#0043");
	ret1 = fprintf(printf_, "|%05.3hhD|", -25);
	ret2 = ft_printf("|%05.3hhD|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0044");
	fprintf(printf_, "\n#0044");
	ret1 = fprintf(printf_, "|%05.3hD|", -25);
	ret2 = ft_printf("|%05.3hD|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0045");
	fprintf(printf_, "\n#0045");
	ret1 = fprintf(printf_, "|%05.3lD|", -25);
	ret2 = ft_printf("|%05.3lD|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0046");
	fprintf(printf_, "\n#0046");
	ret1 = fprintf(printf_, "|%05.3llD|", -25);
	ret2 = ft_printf("|%05.3llD|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0047");
	fprintf(printf_, "\n#0047");
	ret1 = fprintf(printf_, "|%05.3jD|", -25);
	ret2 = ft_printf("|%05.3jD|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0048");
	fprintf(printf_, "\n#0048");
	ret1 = fprintf(printf_, "|%05.3zD|", -25);
	ret2 = ft_printf("|%05.3zD|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0049");
	fprintf(printf_, "\n#0049");
	ret1 = fprintf(printf_, "|%05.3O|", -25);
	ret2 = ft_printf("|%05.3O|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0050");
	fprintf(printf_, "\n#0050");
	ret1 = fprintf(printf_, "|%05.3hhO|", -25);
	ret2 = ft_printf("|%05.3hhO|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0051");
	fprintf(printf_, "\n#0051");
	ret1 = fprintf(printf_, "|%05.3hO|", -25);
	ret2 = ft_printf("|%05.3hO|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0052");
	fprintf(printf_, "\n#0052");
	ret1 = fprintf(printf_, "|%05.3lO|", -25);
	ret2 = ft_printf("|%05.3lO|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0053");
	fprintf(printf_, "\n#0053");
	ret1 = fprintf(printf_, "|%05.3llO|", -25);
	ret2 = ft_printf("|%05.3llO|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0054");
	fprintf(printf_, "\n#0054");
	ret1 = fprintf(printf_, "|%05.3jO|", -25);
	ret2 = ft_printf("|%05.3jO|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0055");
	fprintf(printf_, "\n#0055");
	ret1 = fprintf(printf_, "|%05.3zO|", -25);
	ret2 = ft_printf("|%05.3zO|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0056");
	fprintf(printf_, "\n#0056");
	ret1 = fprintf(printf_, "|%05.3U|", -25);
	ret2 = ft_printf("|%05.3U|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0057");
	fprintf(printf_, "\n#0057");
	ret1 = fprintf(printf_, "|%05.3hhU|", -25);
	ret2 = ft_printf("|%05.3hhU|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0058");
	fprintf(printf_, "\n#0058");
	ret1 = fprintf(printf_, "|%05.3hU|", -25);
	ret2 = ft_printf("|%05.3hU|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0059");
	fprintf(printf_, "\n#0059");
	ret1 = fprintf(printf_, "|%05.3lU|", -25);
	ret2 = ft_printf("|%05.3lU|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0060");
	fprintf(printf_, "\n#0060");
	ret1 = fprintf(printf_, "|%05.3llU|", -25);
	ret2 = ft_printf("|%05.3llU|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0061");
	fprintf(printf_, "\n#0061");
	ret1 = fprintf(printf_, "|%05.3jU|", -25);
	ret2 = ft_printf("|%05.3jU|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0062");
	fprintf(printf_, "\n#0062");
	ret1 = fprintf(printf_, "|%05.3zU|", -25);
	ret2 = ft_printf("|%05.3zU|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0063");
	fprintf(printf_, "\n#0063");
	ret1 = fprintf(printf_, "|% 05.3D|", -25);
	ret2 = ft_printf("|% 05.3D|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0064");
	fprintf(printf_, "\n#0064");
	ret1 = fprintf(printf_, "|% 05.3hhD|", -25);
	ret2 = ft_printf("|% 05.3hhD|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0065");
	fprintf(printf_, "\n#0065");
	ret1 = fprintf(printf_, "|% 05.3hD|", -25);
	ret2 = ft_printf("|% 05.3hD|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0066");
	fprintf(printf_, "\n#0066");
	ret1 = fprintf(printf_, "|% 05.3lD|", -25);
	ret2 = ft_printf("|% 05.3lD|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0067");
	fprintf(printf_, "\n#0067");
	ret1 = fprintf(printf_, "|% 05.3llD|", -25);
	ret2 = ft_printf("|% 05.3llD|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0068");
	fprintf(printf_, "\n#0068");
	ret1 = fprintf(printf_, "|% 05.3jD|", -25);
	ret2 = ft_printf("|% 05.3jD|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0069");
	fprintf(printf_, "\n#0069");
	ret1 = fprintf(printf_, "|% 05.3zD|", -25);
	ret2 = ft_printf("|% 05.3zD|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0070");
	fprintf(printf_, "\n#0070");
	ret1 = fprintf(printf_, "|% 05.3O|", -25);
	ret2 = ft_printf("|% 05.3O|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0071");
	fprintf(printf_, "\n#0071");
	ret1 = fprintf(printf_, "|% 05.3hhO|", -25);
	ret2 = ft_printf("|% 05.3hhO|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0072");
	fprintf(printf_, "\n#0072");
	ret1 = fprintf(printf_, "|% 05.3hO|", -25);
	ret2 = ft_printf("|% 05.3hO|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0073");
	fprintf(printf_, "\n#0073");
	ret1 = fprintf(printf_, "|% 05.3lO|", -25);
	ret2 = ft_printf("|% 05.3lO|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0074");
	fprintf(printf_, "\n#0074");
	ret1 = fprintf(printf_, "|% 05.3llO|", -25);
	ret2 = ft_printf("|% 05.3llO|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0075");
	fprintf(printf_, "\n#0075");
	ret1 = fprintf(printf_, "|% 05.3jO|", -25);
	ret2 = ft_printf("|% 05.3jO|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0076");
	fprintf(printf_, "\n#0076");
	ret1 = fprintf(printf_, "|% 05.3zO|", -25);
	ret2 = ft_printf("|% 05.3zO|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0077");
	fprintf(printf_, "\n#0077");
	ret1 = fprintf(printf_, "|% 05.3U|", -25);
	ret2 = ft_printf("|% 05.3U|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0078");
	fprintf(printf_, "\n#0078");
	ret1 = fprintf(printf_, "|% 05.3hhU|", -25);
	ret2 = ft_printf("|% 05.3hhU|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0079");
	fprintf(printf_, "\n#0079");
	ret1 = fprintf(printf_, "|% 05.3hU|", -25);
	ret2 = ft_printf("|% 05.3hU|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0080");
	fprintf(printf_, "\n#0080");
	ret1 = fprintf(printf_, "|% 05.3lU|", -25);
	ret2 = ft_printf("|% 05.3lU|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0081");
	fprintf(printf_, "\n#0081");
	ret1 = fprintf(printf_, "|% 05.3llU|", -25);
	ret2 = ft_printf("|% 05.3llU|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0082");
	fprintf(printf_, "\n#0082");
	ret1 = fprintf(printf_, "|% 05.3jU|", -25);
	ret2 = ft_printf("|% 05.3jU|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0083");
	fprintf(printf_, "\n#0083");
	ret1 = fprintf(printf_, "|% 05.3zU|", -25);
	ret2 = ft_printf("|% 05.3zU|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0084");
	fprintf(printf_, "\n#0084");
	ret1 = fprintf(printf_, "|%+5.3D|", -25);
	ret2 = ft_printf("|%+5.3D|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0085");
	fprintf(printf_, "\n#0085");
	ret1 = fprintf(printf_, "|%+5.3hhD|", -25);
	ret2 = ft_printf("|%+5.3hhD|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0086");
	fprintf(printf_, "\n#0086");
	ret1 = fprintf(printf_, "|%+5.3hD|", -25);
	ret2 = ft_printf("|%+5.3hD|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0087");
	fprintf(printf_, "\n#0087");
	ret1 = fprintf(printf_, "|%+5.3lD|", -25);
	ret2 = ft_printf("|%+5.3lD|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0088");
	fprintf(printf_, "\n#0088");
	ret1 = fprintf(printf_, "|%+5.3llD|", -25);
	ret2 = ft_printf("|%+5.3llD|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0089");
	fprintf(printf_, "\n#0089");
	ret1 = fprintf(printf_, "|%+5.3jD|", -25);
	ret2 = ft_printf("|%+5.3jD|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0090");
	fprintf(printf_, "\n#0090");
	ret1 = fprintf(printf_, "|%+5.3zD|", -25);
	ret2 = ft_printf("|%+5.3zD|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0091");
	fprintf(printf_, "\n#0091");
	ret1 = fprintf(printf_, "|%+5.3O|", -25);
	ret2 = ft_printf("|%+5.3O|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0092");
	fprintf(printf_, "\n#0092");
	ret1 = fprintf(printf_, "|%+5.3hhO|", -25);
	ret2 = ft_printf("|%+5.3hhO|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0093");
	fprintf(printf_, "\n#0093");
	ret1 = fprintf(printf_, "|%+5.3hO|", -25);
	ret2 = ft_printf("|%+5.3hO|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0094");
	fprintf(printf_, "\n#0094");
	ret1 = fprintf(printf_, "|%+5.3lO|", -25);
	ret2 = ft_printf("|%+5.3lO|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0095");
	fprintf(printf_, "\n#0095");
	ret1 = fprintf(printf_, "|%+5.3llO|", -25);
	ret2 = ft_printf("|%+5.3llO|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0096");
	fprintf(printf_, "\n#0096");
	ret1 = fprintf(printf_, "|%+5.3jO|", -25);
	ret2 = ft_printf("|%+5.3jO|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0097");
	fprintf(printf_, "\n#0097");
	ret1 = fprintf(printf_, "|%+5.3zO|", -25);
	ret2 = ft_printf("|%+5.3zO|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0098");
	fprintf(printf_, "\n#0098");
	ret1 = fprintf(printf_, "|%+5.3U|", -25);
	ret2 = ft_printf("|%+5.3U|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0099");
	fprintf(printf_, "\n#0099");
	ret1 = fprintf(printf_, "|%+5.3hhU|", -25);
	ret2 = ft_printf("|%+5.3hhU|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0100");
	fprintf(printf_, "\n#0100");
	ret1 = fprintf(printf_, "|%+5.3hU|", -25);
	ret2 = ft_printf("|%+5.3hU|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0101");
	fprintf(printf_, "\n#0101");
	ret1 = fprintf(printf_, "|%+5.3lU|", -25);
	ret2 = ft_printf("|%+5.3lU|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0102");
	fprintf(printf_, "\n#0102");
	ret1 = fprintf(printf_, "|%+5.3llU|", -25);
	ret2 = ft_printf("|%+5.3llU|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0103");
	fprintf(printf_, "\n#0103");
	ret1 = fprintf(printf_, "|%+5.3jU|", -25);
	ret2 = ft_printf("|%+5.3jU|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0104");
	fprintf(printf_, "\n#0104");
	ret1 = fprintf(printf_, "|%+5.3zU|", -25);
	ret2 = ft_printf("|%+5.3zU|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0105");
	fprintf(printf_, "\n#0105");
	ret1 = fprintf(printf_, "|% +5.3D|", -25);
	ret2 = ft_printf("|% +5.3D|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0106");
	fprintf(printf_, "\n#0106");
	ret1 = fprintf(printf_, "|% +5.3hhD|", -25);
	ret2 = ft_printf("|% +5.3hhD|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0107");
	fprintf(printf_, "\n#0107");
	ret1 = fprintf(printf_, "|% +5.3hD|", -25);
	ret2 = ft_printf("|% +5.3hD|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0108");
	fprintf(printf_, "\n#0108");
	ret1 = fprintf(printf_, "|% +5.3lD|", -25);
	ret2 = ft_printf("|% +5.3lD|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0109");
	fprintf(printf_, "\n#0109");
	ret1 = fprintf(printf_, "|% +5.3llD|", -25);
	ret2 = ft_printf("|% +5.3llD|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0110");
	fprintf(printf_, "\n#0110");
	ret1 = fprintf(printf_, "|% +5.3jD|", -25);
	ret2 = ft_printf("|% +5.3jD|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0111");
	fprintf(printf_, "\n#0111");
	ret1 = fprintf(printf_, "|% +5.3zD|", -25);
	ret2 = ft_printf("|% +5.3zD|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0112");
	fprintf(printf_, "\n#0112");
	ret1 = fprintf(printf_, "|% +5.3O|", -25);
	ret2 = ft_printf("|% +5.3O|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0113");
	fprintf(printf_, "\n#0113");
	ret1 = fprintf(printf_, "|% +5.3hhO|", -25);
	ret2 = ft_printf("|% +5.3hhO|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0114");
	fprintf(printf_, "\n#0114");
	ret1 = fprintf(printf_, "|% +5.3hO|", -25);
	ret2 = ft_printf("|% +5.3hO|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0115");
	fprintf(printf_, "\n#0115");
	ret1 = fprintf(printf_, "|% +5.3lO|", -25);
	ret2 = ft_printf("|% +5.3lO|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0116");
	fprintf(printf_, "\n#0116");
	ret1 = fprintf(printf_, "|% +5.3llO|", -25);
	ret2 = ft_printf("|% +5.3llO|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0117");
	fprintf(printf_, "\n#0117");
	ret1 = fprintf(printf_, "|% +5.3jO|", -25);
	ret2 = ft_printf("|% +5.3jO|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0118");
	fprintf(printf_, "\n#0118");
	ret1 = fprintf(printf_, "|% +5.3zO|", -25);
	ret2 = ft_printf("|% +5.3zO|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0119");
	fprintf(printf_, "\n#0119");
	ret1 = fprintf(printf_, "|% +5.3U|", -25);
	ret2 = ft_printf("|% +5.3U|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0120");
	fprintf(printf_, "\n#0120");
	ret1 = fprintf(printf_, "|% +5.3hhU|", -25);
	ret2 = ft_printf("|% +5.3hhU|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0121");
	fprintf(printf_, "\n#0121");
	ret1 = fprintf(printf_, "|% +5.3hU|", -25);
	ret2 = ft_printf("|% +5.3hU|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0122");
	fprintf(printf_, "\n#0122");
	ret1 = fprintf(printf_, "|% +5.3lU|", -25);
	ret2 = ft_printf("|% +5.3lU|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0123");
	fprintf(printf_, "\n#0123");
	ret1 = fprintf(printf_, "|% +5.3llU|", -25);
	ret2 = ft_printf("|% +5.3llU|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0124");
	fprintf(printf_, "\n#0124");
	ret1 = fprintf(printf_, "|% +5.3jU|", -25);
	ret2 = ft_printf("|% +5.3jU|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0125");
	fprintf(printf_, "\n#0125");
	ret1 = fprintf(printf_, "|% +5.3zU|", -25);
	ret2 = ft_printf("|% +5.3zU|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0126");
	fprintf(printf_, "\n#0126");
	ret1 = fprintf(printf_, "|%0+5.3D|", -25);
	ret2 = ft_printf("|%0+5.3D|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0127");
	fprintf(printf_, "\n#0127");
	ret1 = fprintf(printf_, "|%0+5.3hhD|", -25);
	ret2 = ft_printf("|%0+5.3hhD|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0128");
	fprintf(printf_, "\n#0128");
	ret1 = fprintf(printf_, "|%0+5.3hD|", -25);
	ret2 = ft_printf("|%0+5.3hD|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0129");
	fprintf(printf_, "\n#0129");
	ret1 = fprintf(printf_, "|%0+5.3lD|", -25);
	ret2 = ft_printf("|%0+5.3lD|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0130");
	fprintf(printf_, "\n#0130");
	ret1 = fprintf(printf_, "|%0+5.3llD|", -25);
	ret2 = ft_printf("|%0+5.3llD|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0131");
	fprintf(printf_, "\n#0131");
	ret1 = fprintf(printf_, "|%0+5.3jD|", -25);
	ret2 = ft_printf("|%0+5.3jD|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0132");
	fprintf(printf_, "\n#0132");
	ret1 = fprintf(printf_, "|%0+5.3zD|", -25);
	ret2 = ft_printf("|%0+5.3zD|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0133");
	fprintf(printf_, "\n#0133");
	ret1 = fprintf(printf_, "|%0+5.3O|", -25);
	ret2 = ft_printf("|%0+5.3O|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0134");
	fprintf(printf_, "\n#0134");
	ret1 = fprintf(printf_, "|%0+5.3hhO|", -25);
	ret2 = ft_printf("|%0+5.3hhO|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0135");
	fprintf(printf_, "\n#0135");
	ret1 = fprintf(printf_, "|%0+5.3hO|", -25);
	ret2 = ft_printf("|%0+5.3hO|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0136");
	fprintf(printf_, "\n#0136");
	ret1 = fprintf(printf_, "|%0+5.3lO|", -25);
	ret2 = ft_printf("|%0+5.3lO|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0137");
	fprintf(printf_, "\n#0137");
	ret1 = fprintf(printf_, "|%0+5.3llO|", -25);
	ret2 = ft_printf("|%0+5.3llO|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0138");
	fprintf(printf_, "\n#0138");
	ret1 = fprintf(printf_, "|%0+5.3jO|", -25);
	ret2 = ft_printf("|%0+5.3jO|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0139");
	fprintf(printf_, "\n#0139");
	ret1 = fprintf(printf_, "|%0+5.3zO|", -25);
	ret2 = ft_printf("|%0+5.3zO|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0140");
	fprintf(printf_, "\n#0140");
	ret1 = fprintf(printf_, "|%0+5.3U|", -25);
	ret2 = ft_printf("|%0+5.3U|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0141");
	fprintf(printf_, "\n#0141");
	ret1 = fprintf(printf_, "|%0+5.3hhU|", -25);
	ret2 = ft_printf("|%0+5.3hhU|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0142");
	fprintf(printf_, "\n#0142");
	ret1 = fprintf(printf_, "|%0+5.3hU|", -25);
	ret2 = ft_printf("|%0+5.3hU|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0143");
	fprintf(printf_, "\n#0143");
	ret1 = fprintf(printf_, "|%0+5.3lU|", -25);
	ret2 = ft_printf("|%0+5.3lU|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0144");
	fprintf(printf_, "\n#0144");
	ret1 = fprintf(printf_, "|%0+5.3llU|", -25);
	ret2 = ft_printf("|%0+5.3llU|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0145");
	fprintf(printf_, "\n#0145");
	ret1 = fprintf(printf_, "|%0+5.3jU|", -25);
	ret2 = ft_printf("|%0+5.3jU|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0146");
	fprintf(printf_, "\n#0146");
	ret1 = fprintf(printf_, "|%0+5.3zU|", -25);
	ret2 = ft_printf("|%0+5.3zU|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0147");
	fprintf(printf_, "\n#0147");
	ret1 = fprintf(printf_, "|% 0+5.3D|", -25);
	ret2 = ft_printf("|% 0+5.3D|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0148");
	fprintf(printf_, "\n#0148");
	ret1 = fprintf(printf_, "|% 0+5.3hhD|", -25);
	ret2 = ft_printf("|% 0+5.3hhD|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0149");
	fprintf(printf_, "\n#0149");
	ret1 = fprintf(printf_, "|% 0+5.3hD|", -25);
	ret2 = ft_printf("|% 0+5.3hD|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0150");
	fprintf(printf_, "\n#0150");
	ret1 = fprintf(printf_, "|% 0+5.3lD|", -25);
	ret2 = ft_printf("|% 0+5.3lD|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0151");
	fprintf(printf_, "\n#0151");
	ret1 = fprintf(printf_, "|% 0+5.3llD|", -25);
	ret2 = ft_printf("|% 0+5.3llD|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0152");
	fprintf(printf_, "\n#0152");
	ret1 = fprintf(printf_, "|% 0+5.3jD|", -25);
	ret2 = ft_printf("|% 0+5.3jD|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0153");
	fprintf(printf_, "\n#0153");
	ret1 = fprintf(printf_, "|% 0+5.3zD|", -25);
	ret2 = ft_printf("|% 0+5.3zD|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0154");
	fprintf(printf_, "\n#0154");
	ret1 = fprintf(printf_, "|% 0+5.3O|", -25);
	ret2 = ft_printf("|% 0+5.3O|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0155");
	fprintf(printf_, "\n#0155");
	ret1 = fprintf(printf_, "|% 0+5.3hhO|", -25);
	ret2 = ft_printf("|% 0+5.3hhO|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0156");
	fprintf(printf_, "\n#0156");
	ret1 = fprintf(printf_, "|% 0+5.3hO|", -25);
	ret2 = ft_printf("|% 0+5.3hO|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0157");
	fprintf(printf_, "\n#0157");
	ret1 = fprintf(printf_, "|% 0+5.3lO|", -25);
	ret2 = ft_printf("|% 0+5.3lO|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0158");
	fprintf(printf_, "\n#0158");
	ret1 = fprintf(printf_, "|% 0+5.3llO|", -25);
	ret2 = ft_printf("|% 0+5.3llO|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0159");
	fprintf(printf_, "\n#0159");
	ret1 = fprintf(printf_, "|% 0+5.3jO|", -25);
	ret2 = ft_printf("|% 0+5.3jO|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0160");
	fprintf(printf_, "\n#0160");
	ret1 = fprintf(printf_, "|% 0+5.3zO|", -25);
	ret2 = ft_printf("|% 0+5.3zO|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0161");
	fprintf(printf_, "\n#0161");
	ret1 = fprintf(printf_, "|% 0+5.3U|", -25);
	ret2 = ft_printf("|% 0+5.3U|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0162");
	fprintf(printf_, "\n#0162");
	ret1 = fprintf(printf_, "|% 0+5.3hhU|", -25);
	ret2 = ft_printf("|% 0+5.3hhU|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0163");
	fprintf(printf_, "\n#0163");
	ret1 = fprintf(printf_, "|% 0+5.3hU|", -25);
	ret2 = ft_printf("|% 0+5.3hU|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0164");
	fprintf(printf_, "\n#0164");
	ret1 = fprintf(printf_, "|% 0+5.3lU|", -25);
	ret2 = ft_printf("|% 0+5.3lU|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0165");
	fprintf(printf_, "\n#0165");
	ret1 = fprintf(printf_, "|% 0+5.3llU|", -25);
	ret2 = ft_printf("|% 0+5.3llU|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0166");
	fprintf(printf_, "\n#0166");
	ret1 = fprintf(printf_, "|% 0+5.3jU|", -25);
	ret2 = ft_printf("|% 0+5.3jU|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0167");
	fprintf(printf_, "\n#0167");
	ret1 = fprintf(printf_, "|% 0+5.3zU|", -25);
	ret2 = ft_printf("|% 0+5.3zU|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0168");
	fprintf(printf_, "\n#0168");
	ret1 = fprintf(printf_, "|%-5.3D|", -25);
	ret2 = ft_printf("|%-5.3D|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0169");
	fprintf(printf_, "\n#0169");
	ret1 = fprintf(printf_, "|%-5.3hhD|", -25);
	ret2 = ft_printf("|%-5.3hhD|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0170");
	fprintf(printf_, "\n#0170");
	ret1 = fprintf(printf_, "|%-5.3hD|", -25);
	ret2 = ft_printf("|%-5.3hD|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0171");
	fprintf(printf_, "\n#0171");
	ret1 = fprintf(printf_, "|%-5.3lD|", -25);
	ret2 = ft_printf("|%-5.3lD|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0172");
	fprintf(printf_, "\n#0172");
	ret1 = fprintf(printf_, "|%-5.3llD|", -25);
	ret2 = ft_printf("|%-5.3llD|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0173");
	fprintf(printf_, "\n#0173");
	ret1 = fprintf(printf_, "|%-5.3jD|", -25);
	ret2 = ft_printf("|%-5.3jD|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0174");
	fprintf(printf_, "\n#0174");
	ret1 = fprintf(printf_, "|%-5.3zD|", -25);
	ret2 = ft_printf("|%-5.3zD|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0175");
	fprintf(printf_, "\n#0175");
	ret1 = fprintf(printf_, "|%-5.3O|", -25);
	ret2 = ft_printf("|%-5.3O|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0176");
	fprintf(printf_, "\n#0176");
	ret1 = fprintf(printf_, "|%-5.3hhO|", -25);
	ret2 = ft_printf("|%-5.3hhO|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0177");
	fprintf(printf_, "\n#0177");
	ret1 = fprintf(printf_, "|%-5.3hO|", -25);
	ret2 = ft_printf("|%-5.3hO|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0178");
	fprintf(printf_, "\n#0178");
	ret1 = fprintf(printf_, "|%-5.3lO|", -25);
	ret2 = ft_printf("|%-5.3lO|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0179");
	fprintf(printf_, "\n#0179");
	ret1 = fprintf(printf_, "|%-5.3llO|", -25);
	ret2 = ft_printf("|%-5.3llO|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0180");
	fprintf(printf_, "\n#0180");
	ret1 = fprintf(printf_, "|%-5.3jO|", -25);
	ret2 = ft_printf("|%-5.3jO|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0181");
	fprintf(printf_, "\n#0181");
	ret1 = fprintf(printf_, "|%-5.3zO|", -25);
	ret2 = ft_printf("|%-5.3zO|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0182");
	fprintf(printf_, "\n#0182");
	ret1 = fprintf(printf_, "|%-5.3U|", -25);
	ret2 = ft_printf("|%-5.3U|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0183");
	fprintf(printf_, "\n#0183");
	ret1 = fprintf(printf_, "|%-5.3hhU|", -25);
	ret2 = ft_printf("|%-5.3hhU|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0184");
	fprintf(printf_, "\n#0184");
	ret1 = fprintf(printf_, "|%-5.3hU|", -25);
	ret2 = ft_printf("|%-5.3hU|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0185");
	fprintf(printf_, "\n#0185");
	ret1 = fprintf(printf_, "|%-5.3lU|", -25);
	ret2 = ft_printf("|%-5.3lU|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0186");
	fprintf(printf_, "\n#0186");
	ret1 = fprintf(printf_, "|%-5.3llU|", -25);
	ret2 = ft_printf("|%-5.3llU|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0187");
	fprintf(printf_, "\n#0187");
	ret1 = fprintf(printf_, "|%-5.3jU|", -25);
	ret2 = ft_printf("|%-5.3jU|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0188");
	fprintf(printf_, "\n#0188");
	ret1 = fprintf(printf_, "|%-5.3zU|", -25);
	ret2 = ft_printf("|%-5.3zU|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0189");
	fprintf(printf_, "\n#0189");
	ret1 = fprintf(printf_, "|% -5.3D|", -25);
	ret2 = ft_printf("|% -5.3D|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0190");
	fprintf(printf_, "\n#0190");
	ret1 = fprintf(printf_, "|% -5.3hhD|", -25);
	ret2 = ft_printf("|% -5.3hhD|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0191");
	fprintf(printf_, "\n#0191");
	ret1 = fprintf(printf_, "|% -5.3hD|", -25);
	ret2 = ft_printf("|% -5.3hD|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0192");
	fprintf(printf_, "\n#0192");
	ret1 = fprintf(printf_, "|% -5.3lD|", -25);
	ret2 = ft_printf("|% -5.3lD|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0193");
	fprintf(printf_, "\n#0193");
	ret1 = fprintf(printf_, "|% -5.3llD|", -25);
	ret2 = ft_printf("|% -5.3llD|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0194");
	fprintf(printf_, "\n#0194");
	ret1 = fprintf(printf_, "|% -5.3jD|", -25);
	ret2 = ft_printf("|% -5.3jD|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0195");
	fprintf(printf_, "\n#0195");
	ret1 = fprintf(printf_, "|% -5.3zD|", -25);
	ret2 = ft_printf("|% -5.3zD|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0196");
	fprintf(printf_, "\n#0196");
	ret1 = fprintf(printf_, "|% -5.3O|", -25);
	ret2 = ft_printf("|% -5.3O|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0197");
	fprintf(printf_, "\n#0197");
	ret1 = fprintf(printf_, "|% -5.3hhO|", -25);
	ret2 = ft_printf("|% -5.3hhO|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0198");
	fprintf(printf_, "\n#0198");
	ret1 = fprintf(printf_, "|% -5.3hO|", -25);
	ret2 = ft_printf("|% -5.3hO|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0199");
	fprintf(printf_, "\n#0199");
	ret1 = fprintf(printf_, "|% -5.3lO|", -25);
	ret2 = ft_printf("|% -5.3lO|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0200");
	fprintf(printf_, "\n#0200");
	ret1 = fprintf(printf_, "|% -5.3llO|", -25);
	ret2 = ft_printf("|% -5.3llO|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0201");
	fprintf(printf_, "\n#0201");
	ret1 = fprintf(printf_, "|% -5.3jO|", -25);
	ret2 = ft_printf("|% -5.3jO|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0202");
	fprintf(printf_, "\n#0202");
	ret1 = fprintf(printf_, "|% -5.3zO|", -25);
	ret2 = ft_printf("|% -5.3zO|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0203");
	fprintf(printf_, "\n#0203");
	ret1 = fprintf(printf_, "|% -5.3U|", -25);
	ret2 = ft_printf("|% -5.3U|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0204");
	fprintf(printf_, "\n#0204");
	ret1 = fprintf(printf_, "|% -5.3hhU|", -25);
	ret2 = ft_printf("|% -5.3hhU|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0205");
	fprintf(printf_, "\n#0205");
	ret1 = fprintf(printf_, "|% -5.3hU|", -25);
	ret2 = ft_printf("|% -5.3hU|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0206");
	fprintf(printf_, "\n#0206");
	ret1 = fprintf(printf_, "|% -5.3lU|", -25);
	ret2 = ft_printf("|% -5.3lU|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0207");
	fprintf(printf_, "\n#0207");
	ret1 = fprintf(printf_, "|% -5.3llU|", -25);
	ret2 = ft_printf("|% -5.3llU|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0208");
	fprintf(printf_, "\n#0208");
	ret1 = fprintf(printf_, "|% -5.3jU|", -25);
	ret2 = ft_printf("|% -5.3jU|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0209");
	fprintf(printf_, "\n#0209");
	ret1 = fprintf(printf_, "|% -5.3zU|", -25);
	ret2 = ft_printf("|% -5.3zU|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0210");
	fprintf(printf_, "\n#0210");
	ret1 = fprintf(printf_, "|%0-5.3D|", -25);
	ret2 = ft_printf("|%0-5.3D|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0211");
	fprintf(printf_, "\n#0211");
	ret1 = fprintf(printf_, "|%0-5.3hhD|", -25);
	ret2 = ft_printf("|%0-5.3hhD|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0212");
	fprintf(printf_, "\n#0212");
	ret1 = fprintf(printf_, "|%0-5.3hD|", -25);
	ret2 = ft_printf("|%0-5.3hD|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0213");
	fprintf(printf_, "\n#0213");
	ret1 = fprintf(printf_, "|%0-5.3lD|", -25);
	ret2 = ft_printf("|%0-5.3lD|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0214");
	fprintf(printf_, "\n#0214");
	ret1 = fprintf(printf_, "|%0-5.3llD|", -25);
	ret2 = ft_printf("|%0-5.3llD|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0215");
	fprintf(printf_, "\n#0215");
	ret1 = fprintf(printf_, "|%0-5.3jD|", -25);
	ret2 = ft_printf("|%0-5.3jD|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0216");
	fprintf(printf_, "\n#0216");
	ret1 = fprintf(printf_, "|%0-5.3zD|", -25);
	ret2 = ft_printf("|%0-5.3zD|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0217");
	fprintf(printf_, "\n#0217");
	ret1 = fprintf(printf_, "|%0-5.3O|", -25);
	ret2 = ft_printf("|%0-5.3O|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0218");
	fprintf(printf_, "\n#0218");
	ret1 = fprintf(printf_, "|%0-5.3hhO|", -25);
	ret2 = ft_printf("|%0-5.3hhO|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0219");
	fprintf(printf_, "\n#0219");
	ret1 = fprintf(printf_, "|%0-5.3hO|", -25);
	ret2 = ft_printf("|%0-5.3hO|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0220");
	fprintf(printf_, "\n#0220");
	ret1 = fprintf(printf_, "|%0-5.3lO|", -25);
	ret2 = ft_printf("|%0-5.3lO|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0221");
	fprintf(printf_, "\n#0221");
	ret1 = fprintf(printf_, "|%0-5.3llO|", -25);
	ret2 = ft_printf("|%0-5.3llO|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0222");
	fprintf(printf_, "\n#0222");
	ret1 = fprintf(printf_, "|%0-5.3jO|", -25);
	ret2 = ft_printf("|%0-5.3jO|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0223");
	fprintf(printf_, "\n#0223");
	ret1 = fprintf(printf_, "|%0-5.3zO|", -25);
	ret2 = ft_printf("|%0-5.3zO|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0224");
	fprintf(printf_, "\n#0224");
	ret1 = fprintf(printf_, "|%0-5.3U|", -25);
	ret2 = ft_printf("|%0-5.3U|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0225");
	fprintf(printf_, "\n#0225");
	ret1 = fprintf(printf_, "|%0-5.3hhU|", -25);
	ret2 = ft_printf("|%0-5.3hhU|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0226");
	fprintf(printf_, "\n#0226");
	ret1 = fprintf(printf_, "|%0-5.3hU|", -25);
	ret2 = ft_printf("|%0-5.3hU|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0227");
	fprintf(printf_, "\n#0227");
	ret1 = fprintf(printf_, "|%0-5.3lU|", -25);
	ret2 = ft_printf("|%0-5.3lU|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0228");
	fprintf(printf_, "\n#0228");
	ret1 = fprintf(printf_, "|%0-5.3llU|", -25);
	ret2 = ft_printf("|%0-5.3llU|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0229");
	fprintf(printf_, "\n#0229");
	ret1 = fprintf(printf_, "|%0-5.3jU|", -25);
	ret2 = ft_printf("|%0-5.3jU|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0230");
	fprintf(printf_, "\n#0230");
	ret1 = fprintf(printf_, "|%0-5.3zU|", -25);
	ret2 = ft_printf("|%0-5.3zU|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0231");
	fprintf(printf_, "\n#0231");
	ret1 = fprintf(printf_, "|% 0-5.3D|", -25);
	ret2 = ft_printf("|% 0-5.3D|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0232");
	fprintf(printf_, "\n#0232");
	ret1 = fprintf(printf_, "|% 0-5.3hhD|", -25);
	ret2 = ft_printf("|% 0-5.3hhD|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0233");
	fprintf(printf_, "\n#0233");
	ret1 = fprintf(printf_, "|% 0-5.3hD|", -25);
	ret2 = ft_printf("|% 0-5.3hD|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0234");
	fprintf(printf_, "\n#0234");
	ret1 = fprintf(printf_, "|% 0-5.3lD|", -25);
	ret2 = ft_printf("|% 0-5.3lD|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0235");
	fprintf(printf_, "\n#0235");
	ret1 = fprintf(printf_, "|% 0-5.3llD|", -25);
	ret2 = ft_printf("|% 0-5.3llD|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0236");
	fprintf(printf_, "\n#0236");
	ret1 = fprintf(printf_, "|% 0-5.3jD|", -25);
	ret2 = ft_printf("|% 0-5.3jD|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0237");
	fprintf(printf_, "\n#0237");
	ret1 = fprintf(printf_, "|% 0-5.3zD|", -25);
	ret2 = ft_printf("|% 0-5.3zD|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0238");
	fprintf(printf_, "\n#0238");
	ret1 = fprintf(printf_, "|% 0-5.3O|", -25);
	ret2 = ft_printf("|% 0-5.3O|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0239");
	fprintf(printf_, "\n#0239");
	ret1 = fprintf(printf_, "|% 0-5.3hhO|", -25);
	ret2 = ft_printf("|% 0-5.3hhO|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0240");
	fprintf(printf_, "\n#0240");
	ret1 = fprintf(printf_, "|% 0-5.3hO|", -25);
	ret2 = ft_printf("|% 0-5.3hO|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0241");
	fprintf(printf_, "\n#0241");
	ret1 = fprintf(printf_, "|% 0-5.3lO|", -25);
	ret2 = ft_printf("|% 0-5.3lO|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0242");
	fprintf(printf_, "\n#0242");
	ret1 = fprintf(printf_, "|% 0-5.3llO|", -25);
	ret2 = ft_printf("|% 0-5.3llO|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0243");
	fprintf(printf_, "\n#0243");
	ret1 = fprintf(printf_, "|% 0-5.3jO|", -25);
	ret2 = ft_printf("|% 0-5.3jO|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0244");
	fprintf(printf_, "\n#0244");
	ret1 = fprintf(printf_, "|% 0-5.3zO|", -25);
	ret2 = ft_printf("|% 0-5.3zO|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0245");
	fprintf(printf_, "\n#0245");
	ret1 = fprintf(printf_, "|% 0-5.3U|", -25);
	ret2 = ft_printf("|% 0-5.3U|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0246");
	fprintf(printf_, "\n#0246");
	ret1 = fprintf(printf_, "|% 0-5.3hhU|", -25);
	ret2 = ft_printf("|% 0-5.3hhU|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0247");
	fprintf(printf_, "\n#0247");
	ret1 = fprintf(printf_, "|% 0-5.3hU|", -25);
	ret2 = ft_printf("|% 0-5.3hU|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0248");
	fprintf(printf_, "\n#0248");
	ret1 = fprintf(printf_, "|% 0-5.3lU|", -25);
	ret2 = ft_printf("|% 0-5.3lU|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0249");
	fprintf(printf_, "\n#0249");
	ret1 = fprintf(printf_, "|% 0-5.3llU|", -25);
	ret2 = ft_printf("|% 0-5.3llU|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0250");
	fprintf(printf_, "\n#0250");
	ret1 = fprintf(printf_, "|% 0-5.3jU|", -25);
	ret2 = ft_printf("|% 0-5.3jU|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0251");
	fprintf(printf_, "\n#0251");
	ret1 = fprintf(printf_, "|% 0-5.3zU|", -25);
	ret2 = ft_printf("|% 0-5.3zU|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0252");
	fprintf(printf_, "\n#0252");
	ret1 = fprintf(printf_, "|%+-5.3D|", -25);
	ret2 = ft_printf("|%+-5.3D|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0253");
	fprintf(printf_, "\n#0253");
	ret1 = fprintf(printf_, "|%+-5.3hhD|", -25);
	ret2 = ft_printf("|%+-5.3hhD|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0254");
	fprintf(printf_, "\n#0254");
	ret1 = fprintf(printf_, "|%+-5.3hD|", -25);
	ret2 = ft_printf("|%+-5.3hD|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0255");
	fprintf(printf_, "\n#0255");
	ret1 = fprintf(printf_, "|%+-5.3lD|", -25);
	ret2 = ft_printf("|%+-5.3lD|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0256");
	fprintf(printf_, "\n#0256");
	ret1 = fprintf(printf_, "|%+-5.3llD|", -25);
	ret2 = ft_printf("|%+-5.3llD|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0257");
	fprintf(printf_, "\n#0257");
	ret1 = fprintf(printf_, "|%+-5.3jD|", -25);
	ret2 = ft_printf("|%+-5.3jD|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0258");
	fprintf(printf_, "\n#0258");
	ret1 = fprintf(printf_, "|%+-5.3zD|", -25);
	ret2 = ft_printf("|%+-5.3zD|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0259");
	fprintf(printf_, "\n#0259");
	ret1 = fprintf(printf_, "|%+-5.3O|", -25);
	ret2 = ft_printf("|%+-5.3O|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0260");
	fprintf(printf_, "\n#0260");
	ret1 = fprintf(printf_, "|%+-5.3hhO|", -25);
	ret2 = ft_printf("|%+-5.3hhO|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0261");
	fprintf(printf_, "\n#0261");
	ret1 = fprintf(printf_, "|%+-5.3hO|", -25);
	ret2 = ft_printf("|%+-5.3hO|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0262");
	fprintf(printf_, "\n#0262");
	ret1 = fprintf(printf_, "|%+-5.3lO|", -25);
	ret2 = ft_printf("|%+-5.3lO|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0263");
	fprintf(printf_, "\n#0263");
	ret1 = fprintf(printf_, "|%+-5.3llO|", -25);
	ret2 = ft_printf("|%+-5.3llO|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0264");
	fprintf(printf_, "\n#0264");
	ret1 = fprintf(printf_, "|%+-5.3jO|", -25);
	ret2 = ft_printf("|%+-5.3jO|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0265");
	fprintf(printf_, "\n#0265");
	ret1 = fprintf(printf_, "|%+-5.3zO|", -25);
	ret2 = ft_printf("|%+-5.3zO|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0266");
	fprintf(printf_, "\n#0266");
	ret1 = fprintf(printf_, "|%+-5.3U|", -25);
	ret2 = ft_printf("|%+-5.3U|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0267");
	fprintf(printf_, "\n#0267");
	ret1 = fprintf(printf_, "|%+-5.3hhU|", -25);
	ret2 = ft_printf("|%+-5.3hhU|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0268");
	fprintf(printf_, "\n#0268");
	ret1 = fprintf(printf_, "|%+-5.3hU|", -25);
	ret2 = ft_printf("|%+-5.3hU|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0269");
	fprintf(printf_, "\n#0269");
	ret1 = fprintf(printf_, "|%+-5.3lU|", -25);
	ret2 = ft_printf("|%+-5.3lU|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0270");
	fprintf(printf_, "\n#0270");
	ret1 = fprintf(printf_, "|%+-5.3llU|", -25);
	ret2 = ft_printf("|%+-5.3llU|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0271");
	fprintf(printf_, "\n#0271");
	ret1 = fprintf(printf_, "|%+-5.3jU|", -25);
	ret2 = ft_printf("|%+-5.3jU|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0272");
	fprintf(printf_, "\n#0272");
	ret1 = fprintf(printf_, "|%+-5.3zU|", -25);
	ret2 = ft_printf("|%+-5.3zU|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0273");
	fprintf(printf_, "\n#0273");
	ret1 = fprintf(printf_, "|% +-5.3D|", -25);
	ret2 = ft_printf("|% +-5.3D|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0274");
	fprintf(printf_, "\n#0274");
	ret1 = fprintf(printf_, "|% +-5.3hhD|", -25);
	ret2 = ft_printf("|% +-5.3hhD|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0275");
	fprintf(printf_, "\n#0275");
	ret1 = fprintf(printf_, "|% +-5.3hD|", -25);
	ret2 = ft_printf("|% +-5.3hD|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0276");
	fprintf(printf_, "\n#0276");
	ret1 = fprintf(printf_, "|% +-5.3lD|", -25);
	ret2 = ft_printf("|% +-5.3lD|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0277");
	fprintf(printf_, "\n#0277");
	ret1 = fprintf(printf_, "|% +-5.3llD|", -25);
	ret2 = ft_printf("|% +-5.3llD|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0278");
	fprintf(printf_, "\n#0278");
	ret1 = fprintf(printf_, "|% +-5.3jD|", -25);
	ret2 = ft_printf("|% +-5.3jD|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0279");
	fprintf(printf_, "\n#0279");
	ret1 = fprintf(printf_, "|% +-5.3zD|", -25);
	ret2 = ft_printf("|% +-5.3zD|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0280");
	fprintf(printf_, "\n#0280");
	ret1 = fprintf(printf_, "|% +-5.3O|", -25);
	ret2 = ft_printf("|% +-5.3O|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0281");
	fprintf(printf_, "\n#0281");
	ret1 = fprintf(printf_, "|% +-5.3hhO|", -25);
	ret2 = ft_printf("|% +-5.3hhO|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0282");
	fprintf(printf_, "\n#0282");
	ret1 = fprintf(printf_, "|% +-5.3hO|", -25);
	ret2 = ft_printf("|% +-5.3hO|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0283");
	fprintf(printf_, "\n#0283");
	ret1 = fprintf(printf_, "|% +-5.3lO|", -25);
	ret2 = ft_printf("|% +-5.3lO|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0284");
	fprintf(printf_, "\n#0284");
	ret1 = fprintf(printf_, "|% +-5.3llO|", -25);
	ret2 = ft_printf("|% +-5.3llO|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0285");
	fprintf(printf_, "\n#0285");
	ret1 = fprintf(printf_, "|% +-5.3jO|", -25);
	ret2 = ft_printf("|% +-5.3jO|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0286");
	fprintf(printf_, "\n#0286");
	ret1 = fprintf(printf_, "|% +-5.3zO|", -25);
	ret2 = ft_printf("|% +-5.3zO|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0287");
	fprintf(printf_, "\n#0287");
	ret1 = fprintf(printf_, "|% +-5.3U|", -25);
	ret2 = ft_printf("|% +-5.3U|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0288");
	fprintf(printf_, "\n#0288");
	ret1 = fprintf(printf_, "|% +-5.3hhU|", -25);
	ret2 = ft_printf("|% +-5.3hhU|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0289");
	fprintf(printf_, "\n#0289");
	ret1 = fprintf(printf_, "|% +-5.3hU|", -25);
	ret2 = ft_printf("|% +-5.3hU|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0290");
	fprintf(printf_, "\n#0290");
	ret1 = fprintf(printf_, "|% +-5.3lU|", -25);
	ret2 = ft_printf("|% +-5.3lU|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0291");
	fprintf(printf_, "\n#0291");
	ret1 = fprintf(printf_, "|% +-5.3llU|", -25);
	ret2 = ft_printf("|% +-5.3llU|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0292");
	fprintf(printf_, "\n#0292");
	ret1 = fprintf(printf_, "|% +-5.3jU|", -25);
	ret2 = ft_printf("|% +-5.3jU|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0293");
	fprintf(printf_, "\n#0293");
	ret1 = fprintf(printf_, "|% +-5.3zU|", -25);
	ret2 = ft_printf("|% +-5.3zU|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0294");
	fprintf(printf_, "\n#0294");
	ret1 = fprintf(printf_, "|%0+-5.3D|", -25);
	ret2 = ft_printf("|%0+-5.3D|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0295");
	fprintf(printf_, "\n#0295");
	ret1 = fprintf(printf_, "|%0+-5.3hhD|", -25);
	ret2 = ft_printf("|%0+-5.3hhD|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0296");
	fprintf(printf_, "\n#0296");
	ret1 = fprintf(printf_, "|%0+-5.3hD|", -25);
	ret2 = ft_printf("|%0+-5.3hD|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0297");
	fprintf(printf_, "\n#0297");
	ret1 = fprintf(printf_, "|%0+-5.3lD|", -25);
	ret2 = ft_printf("|%0+-5.3lD|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0298");
	fprintf(printf_, "\n#0298");
	ret1 = fprintf(printf_, "|%0+-5.3llD|", -25);
	ret2 = ft_printf("|%0+-5.3llD|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0299");
	fprintf(printf_, "\n#0299");
	ret1 = fprintf(printf_, "|%0+-5.3jD|", -25);
	ret2 = ft_printf("|%0+-5.3jD|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0300");
	fprintf(printf_, "\n#0300");
	ret1 = fprintf(printf_, "|%0+-5.3zD|", -25);
	ret2 = ft_printf("|%0+-5.3zD|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0301");
	fprintf(printf_, "\n#0301");
	ret1 = fprintf(printf_, "|%0+-5.3O|", -25);
	ret2 = ft_printf("|%0+-5.3O|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0302");
	fprintf(printf_, "\n#0302");
	ret1 = fprintf(printf_, "|%0+-5.3hhO|", -25);
	ret2 = ft_printf("|%0+-5.3hhO|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0303");
	fprintf(printf_, "\n#0303");
	ret1 = fprintf(printf_, "|%0+-5.3hO|", -25);
	ret2 = ft_printf("|%0+-5.3hO|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0304");
	fprintf(printf_, "\n#0304");
	ret1 = fprintf(printf_, "|%0+-5.3lO|", -25);
	ret2 = ft_printf("|%0+-5.3lO|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0305");
	fprintf(printf_, "\n#0305");
	ret1 = fprintf(printf_, "|%0+-5.3llO|", -25);
	ret2 = ft_printf("|%0+-5.3llO|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0306");
	fprintf(printf_, "\n#0306");
	ret1 = fprintf(printf_, "|%0+-5.3jO|", -25);
	ret2 = ft_printf("|%0+-5.3jO|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0307");
	fprintf(printf_, "\n#0307");
	ret1 = fprintf(printf_, "|%0+-5.3zO|", -25);
	ret2 = ft_printf("|%0+-5.3zO|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0308");
	fprintf(printf_, "\n#0308");
	ret1 = fprintf(printf_, "|%0+-5.3U|", -25);
	ret2 = ft_printf("|%0+-5.3U|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0309");
	fprintf(printf_, "\n#0309");
	ret1 = fprintf(printf_, "|%0+-5.3hhU|", -25);
	ret2 = ft_printf("|%0+-5.3hhU|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0310");
	fprintf(printf_, "\n#0310");
	ret1 = fprintf(printf_, "|%0+-5.3hU|", -25);
	ret2 = ft_printf("|%0+-5.3hU|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0311");
	fprintf(printf_, "\n#0311");
	ret1 = fprintf(printf_, "|%0+-5.3lU|", -25);
	ret2 = ft_printf("|%0+-5.3lU|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0312");
	fprintf(printf_, "\n#0312");
	ret1 = fprintf(printf_, "|%0+-5.3llU|", -25);
	ret2 = ft_printf("|%0+-5.3llU|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0313");
	fprintf(printf_, "\n#0313");
	ret1 = fprintf(printf_, "|%0+-5.3jU|", -25);
	ret2 = ft_printf("|%0+-5.3jU|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0314");
	fprintf(printf_, "\n#0314");
	ret1 = fprintf(printf_, "|%0+-5.3zU|", -25);
	ret2 = ft_printf("|%0+-5.3zU|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0315");
	fprintf(printf_, "\n#0315");
	ret1 = fprintf(printf_, "|% 0+-5.3D|", -25);
	ret2 = ft_printf("|% 0+-5.3D|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0316");
	fprintf(printf_, "\n#0316");
	ret1 = fprintf(printf_, "|% 0+-5.3hhD|", -25);
	ret2 = ft_printf("|% 0+-5.3hhD|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0317");
	fprintf(printf_, "\n#0317");
	ret1 = fprintf(printf_, "|% 0+-5.3hD|", -25);
	ret2 = ft_printf("|% 0+-5.3hD|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0318");
	fprintf(printf_, "\n#0318");
	ret1 = fprintf(printf_, "|% 0+-5.3lD|", -25);
	ret2 = ft_printf("|% 0+-5.3lD|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0319");
	fprintf(printf_, "\n#0319");
	ret1 = fprintf(printf_, "|% 0+-5.3llD|", -25);
	ret2 = ft_printf("|% 0+-5.3llD|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0320");
	fprintf(printf_, "\n#0320");
	ret1 = fprintf(printf_, "|% 0+-5.3jD|", -25);
	ret2 = ft_printf("|% 0+-5.3jD|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0321");
	fprintf(printf_, "\n#0321");
	ret1 = fprintf(printf_, "|% 0+-5.3zD|", -25);
	ret2 = ft_printf("|% 0+-5.3zD|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0322");
	fprintf(printf_, "\n#0322");
	ret1 = fprintf(printf_, "|% 0+-5.3O|", -25);
	ret2 = ft_printf("|% 0+-5.3O|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0323");
	fprintf(printf_, "\n#0323");
	ret1 = fprintf(printf_, "|% 0+-5.3hhO|", -25);
	ret2 = ft_printf("|% 0+-5.3hhO|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0324");
	fprintf(printf_, "\n#0324");
	ret1 = fprintf(printf_, "|% 0+-5.3hO|", -25);
	ret2 = ft_printf("|% 0+-5.3hO|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0325");
	fprintf(printf_, "\n#0325");
	ret1 = fprintf(printf_, "|% 0+-5.3lO|", -25);
	ret2 = ft_printf("|% 0+-5.3lO|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0326");
	fprintf(printf_, "\n#0326");
	ret1 = fprintf(printf_, "|% 0+-5.3llO|", -25);
	ret2 = ft_printf("|% 0+-5.3llO|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0327");
	fprintf(printf_, "\n#0327");
	ret1 = fprintf(printf_, "|% 0+-5.3jO|", -25);
	ret2 = ft_printf("|% 0+-5.3jO|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0328");
	fprintf(printf_, "\n#0328");
	ret1 = fprintf(printf_, "|% 0+-5.3zO|", -25);
	ret2 = ft_printf("|% 0+-5.3zO|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0329");
	fprintf(printf_, "\n#0329");
	ret1 = fprintf(printf_, "|% 0+-5.3U|", -25);
	ret2 = ft_printf("|% 0+-5.3U|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0330");
	fprintf(printf_, "\n#0330");
	ret1 = fprintf(printf_, "|% 0+-5.3hhU|", -25);
	ret2 = ft_printf("|% 0+-5.3hhU|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0331");
	fprintf(printf_, "\n#0331");
	ret1 = fprintf(printf_, "|% 0+-5.3hU|", -25);
	ret2 = ft_printf("|% 0+-5.3hU|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0332");
	fprintf(printf_, "\n#0332");
	ret1 = fprintf(printf_, "|% 0+-5.3lU|", -25);
	ret2 = ft_printf("|% 0+-5.3lU|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0333");
	fprintf(printf_, "\n#0333");
	ret1 = fprintf(printf_, "|% 0+-5.3llU|", -25);
	ret2 = ft_printf("|% 0+-5.3llU|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0334");
	fprintf(printf_, "\n#0334");
	ret1 = fprintf(printf_, "|% 0+-5.3jU|", -25);
	ret2 = ft_printf("|% 0+-5.3jU|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0335");
	fprintf(printf_, "\n#0335");
	ret1 = fprintf(printf_, "|% 0+-5.3zU|", -25);
	ret2 = ft_printf("|% 0+-5.3zU|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0336");
	fprintf(printf_, "\n#0336");
	ret1 = fprintf(printf_, "|%#5.3D|", -25);
	ret2 = ft_printf("|%#5.3D|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0337");
	fprintf(printf_, "\n#0337");
	ret1 = fprintf(printf_, "|%#5.3hhD|", -25);
	ret2 = ft_printf("|%#5.3hhD|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0338");
	fprintf(printf_, "\n#0338");
	ret1 = fprintf(printf_, "|%#5.3hD|", -25);
	ret2 = ft_printf("|%#5.3hD|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0339");
	fprintf(printf_, "\n#0339");
	ret1 = fprintf(printf_, "|%#5.3lD|", -25);
	ret2 = ft_printf("|%#5.3lD|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0340");
	fprintf(printf_, "\n#0340");
	ret1 = fprintf(printf_, "|%#5.3llD|", -25);
	ret2 = ft_printf("|%#5.3llD|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0341");
	fprintf(printf_, "\n#0341");
	ret1 = fprintf(printf_, "|%#5.3jD|", -25);
	ret2 = ft_printf("|%#5.3jD|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0342");
	fprintf(printf_, "\n#0342");
	ret1 = fprintf(printf_, "|%#5.3zD|", -25);
	ret2 = ft_printf("|%#5.3zD|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0343");
	fprintf(printf_, "\n#0343");
	ret1 = fprintf(printf_, "|%#5.3O|", -25);
	ret2 = ft_printf("|%#5.3O|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0344");
	fprintf(printf_, "\n#0344");
	ret1 = fprintf(printf_, "|%#5.3hhO|", -25);
	ret2 = ft_printf("|%#5.3hhO|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0345");
	fprintf(printf_, "\n#0345");
	ret1 = fprintf(printf_, "|%#5.3hO|", -25);
	ret2 = ft_printf("|%#5.3hO|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0346");
	fprintf(printf_, "\n#0346");
	ret1 = fprintf(printf_, "|%#5.3lO|", -25);
	ret2 = ft_printf("|%#5.3lO|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0347");
	fprintf(printf_, "\n#0347");
	ret1 = fprintf(printf_, "|%#5.3llO|", -25);
	ret2 = ft_printf("|%#5.3llO|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0348");
	fprintf(printf_, "\n#0348");
	ret1 = fprintf(printf_, "|%#5.3jO|", -25);
	ret2 = ft_printf("|%#5.3jO|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0349");
	fprintf(printf_, "\n#0349");
	ret1 = fprintf(printf_, "|%#5.3zO|", -25);
	ret2 = ft_printf("|%#5.3zO|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0350");
	fprintf(printf_, "\n#0350");
	ret1 = fprintf(printf_, "|%#5.3U|", -25);
	ret2 = ft_printf("|%#5.3U|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0351");
	fprintf(printf_, "\n#0351");
	ret1 = fprintf(printf_, "|%#5.3hhU|", -25);
	ret2 = ft_printf("|%#5.3hhU|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0352");
	fprintf(printf_, "\n#0352");
	ret1 = fprintf(printf_, "|%#5.3hU|", -25);
	ret2 = ft_printf("|%#5.3hU|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0353");
	fprintf(printf_, "\n#0353");
	ret1 = fprintf(printf_, "|%#5.3lU|", -25);
	ret2 = ft_printf("|%#5.3lU|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0354");
	fprintf(printf_, "\n#0354");
	ret1 = fprintf(printf_, "|%#5.3llU|", -25);
	ret2 = ft_printf("|%#5.3llU|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0355");
	fprintf(printf_, "\n#0355");
	ret1 = fprintf(printf_, "|%#5.3jU|", -25);
	ret2 = ft_printf("|%#5.3jU|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0356");
	fprintf(printf_, "\n#0356");
	ret1 = fprintf(printf_, "|%#5.3zU|", -25);
	ret2 = ft_printf("|%#5.3zU|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0357");
	fprintf(printf_, "\n#0357");
	ret1 = fprintf(printf_, "|% #5.3D|", -25);
	ret2 = ft_printf("|% #5.3D|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0358");
	fprintf(printf_, "\n#0358");
	ret1 = fprintf(printf_, "|% #5.3hhD|", -25);
	ret2 = ft_printf("|% #5.3hhD|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0359");
	fprintf(printf_, "\n#0359");
	ret1 = fprintf(printf_, "|% #5.3hD|", -25);
	ret2 = ft_printf("|% #5.3hD|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0360");
	fprintf(printf_, "\n#0360");
	ret1 = fprintf(printf_, "|% #5.3lD|", -25);
	ret2 = ft_printf("|% #5.3lD|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0361");
	fprintf(printf_, "\n#0361");
	ret1 = fprintf(printf_, "|% #5.3llD|", -25);
	ret2 = ft_printf("|% #5.3llD|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0362");
	fprintf(printf_, "\n#0362");
	ret1 = fprintf(printf_, "|% #5.3jD|", -25);
	ret2 = ft_printf("|% #5.3jD|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0363");
	fprintf(printf_, "\n#0363");
	ret1 = fprintf(printf_, "|% #5.3zD|", -25);
	ret2 = ft_printf("|% #5.3zD|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0364");
	fprintf(printf_, "\n#0364");
	ret1 = fprintf(printf_, "|% #5.3O|", -25);
	ret2 = ft_printf("|% #5.3O|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0365");
	fprintf(printf_, "\n#0365");
	ret1 = fprintf(printf_, "|% #5.3hhO|", -25);
	ret2 = ft_printf("|% #5.3hhO|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0366");
	fprintf(printf_, "\n#0366");
	ret1 = fprintf(printf_, "|% #5.3hO|", -25);
	ret2 = ft_printf("|% #5.3hO|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0367");
	fprintf(printf_, "\n#0367");
	ret1 = fprintf(printf_, "|% #5.3lO|", -25);
	ret2 = ft_printf("|% #5.3lO|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0368");
	fprintf(printf_, "\n#0368");
	ret1 = fprintf(printf_, "|% #5.3llO|", -25);
	ret2 = ft_printf("|% #5.3llO|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0369");
	fprintf(printf_, "\n#0369");
	ret1 = fprintf(printf_, "|% #5.3jO|", -25);
	ret2 = ft_printf("|% #5.3jO|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0370");
	fprintf(printf_, "\n#0370");
	ret1 = fprintf(printf_, "|% #5.3zO|", -25);
	ret2 = ft_printf("|% #5.3zO|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0371");
	fprintf(printf_, "\n#0371");
	ret1 = fprintf(printf_, "|% #5.3U|", -25);
	ret2 = ft_printf("|% #5.3U|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0372");
	fprintf(printf_, "\n#0372");
	ret1 = fprintf(printf_, "|% #5.3hhU|", -25);
	ret2 = ft_printf("|% #5.3hhU|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0373");
	fprintf(printf_, "\n#0373");
	ret1 = fprintf(printf_, "|% #5.3hU|", -25);
	ret2 = ft_printf("|% #5.3hU|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0374");
	fprintf(printf_, "\n#0374");
	ret1 = fprintf(printf_, "|% #5.3lU|", -25);
	ret2 = ft_printf("|% #5.3lU|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0375");
	fprintf(printf_, "\n#0375");
	ret1 = fprintf(printf_, "|% #5.3llU|", -25);
	ret2 = ft_printf("|% #5.3llU|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0376");
	fprintf(printf_, "\n#0376");
	ret1 = fprintf(printf_, "|% #5.3jU|", -25);
	ret2 = ft_printf("|% #5.3jU|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0377");
	fprintf(printf_, "\n#0377");
	ret1 = fprintf(printf_, "|% #5.3zU|", -25);
	ret2 = ft_printf("|% #5.3zU|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0378");
	fprintf(printf_, "\n#0378");
	ret1 = fprintf(printf_, "|%0#5.3D|", -25);
	ret2 = ft_printf("|%0#5.3D|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0379");
	fprintf(printf_, "\n#0379");
	ret1 = fprintf(printf_, "|%0#5.3hhD|", -25);
	ret2 = ft_printf("|%0#5.3hhD|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0380");
	fprintf(printf_, "\n#0380");
	ret1 = fprintf(printf_, "|%0#5.3hD|", -25);
	ret2 = ft_printf("|%0#5.3hD|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0381");
	fprintf(printf_, "\n#0381");
	ret1 = fprintf(printf_, "|%0#5.3lD|", -25);
	ret2 = ft_printf("|%0#5.3lD|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0382");
	fprintf(printf_, "\n#0382");
	ret1 = fprintf(printf_, "|%0#5.3llD|", -25);
	ret2 = ft_printf("|%0#5.3llD|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0383");
	fprintf(printf_, "\n#0383");
	ret1 = fprintf(printf_, "|%0#5.3jD|", -25);
	ret2 = ft_printf("|%0#5.3jD|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0384");
	fprintf(printf_, "\n#0384");
	ret1 = fprintf(printf_, "|%0#5.3zD|", -25);
	ret2 = ft_printf("|%0#5.3zD|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0385");
	fprintf(printf_, "\n#0385");
	ret1 = fprintf(printf_, "|%0#5.3O|", -25);
	ret2 = ft_printf("|%0#5.3O|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0386");
	fprintf(printf_, "\n#0386");
	ret1 = fprintf(printf_, "|%0#5.3hhO|", -25);
	ret2 = ft_printf("|%0#5.3hhO|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0387");
	fprintf(printf_, "\n#0387");
	ret1 = fprintf(printf_, "|%0#5.3hO|", -25);
	ret2 = ft_printf("|%0#5.3hO|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0388");
	fprintf(printf_, "\n#0388");
	ret1 = fprintf(printf_, "|%0#5.3lO|", -25);
	ret2 = ft_printf("|%0#5.3lO|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0389");
	fprintf(printf_, "\n#0389");
	ret1 = fprintf(printf_, "|%0#5.3llO|", -25);
	ret2 = ft_printf("|%0#5.3llO|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0390");
	fprintf(printf_, "\n#0390");
	ret1 = fprintf(printf_, "|%0#5.3jO|", -25);
	ret2 = ft_printf("|%0#5.3jO|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0391");
	fprintf(printf_, "\n#0391");
	ret1 = fprintf(printf_, "|%0#5.3zO|", -25);
	ret2 = ft_printf("|%0#5.3zO|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0392");
	fprintf(printf_, "\n#0392");
	ret1 = fprintf(printf_, "|%0#5.3U|", -25);
	ret2 = ft_printf("|%0#5.3U|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0393");
	fprintf(printf_, "\n#0393");
	ret1 = fprintf(printf_, "|%0#5.3hhU|", -25);
	ret2 = ft_printf("|%0#5.3hhU|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0394");
	fprintf(printf_, "\n#0394");
	ret1 = fprintf(printf_, "|%0#5.3hU|", -25);
	ret2 = ft_printf("|%0#5.3hU|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0395");
	fprintf(printf_, "\n#0395");
	ret1 = fprintf(printf_, "|%0#5.3lU|", -25);
	ret2 = ft_printf("|%0#5.3lU|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0396");
	fprintf(printf_, "\n#0396");
	ret1 = fprintf(printf_, "|%0#5.3llU|", -25);
	ret2 = ft_printf("|%0#5.3llU|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0397");
	fprintf(printf_, "\n#0397");
	ret1 = fprintf(printf_, "|%0#5.3jU|", -25);
	ret2 = ft_printf("|%0#5.3jU|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0398");
	fprintf(printf_, "\n#0398");
	ret1 = fprintf(printf_, "|%0#5.3zU|", -25);
	ret2 = ft_printf("|%0#5.3zU|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0399");
	fprintf(printf_, "\n#0399");
	ret1 = fprintf(printf_, "|% 0#5.3D|", -25);
	ret2 = ft_printf("|% 0#5.3D|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0400");
	fprintf(printf_, "\n#0400");
	ret1 = fprintf(printf_, "|% 0#5.3hhD|", -25);
	ret2 = ft_printf("|% 0#5.3hhD|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0401");
	fprintf(printf_, "\n#0401");
	ret1 = fprintf(printf_, "|% 0#5.3hD|", -25);
	ret2 = ft_printf("|% 0#5.3hD|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0402");
	fprintf(printf_, "\n#0402");
	ret1 = fprintf(printf_, "|% 0#5.3lD|", -25);
	ret2 = ft_printf("|% 0#5.3lD|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0403");
	fprintf(printf_, "\n#0403");
	ret1 = fprintf(printf_, "|% 0#5.3llD|", -25);
	ret2 = ft_printf("|% 0#5.3llD|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0404");
	fprintf(printf_, "\n#0404");
	ret1 = fprintf(printf_, "|% 0#5.3jD|", -25);
	ret2 = ft_printf("|% 0#5.3jD|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0405");
	fprintf(printf_, "\n#0405");
	ret1 = fprintf(printf_, "|% 0#5.3zD|", -25);
	ret2 = ft_printf("|% 0#5.3zD|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0406");
	fprintf(printf_, "\n#0406");
	ret1 = fprintf(printf_, "|% 0#5.3O|", -25);
	ret2 = ft_printf("|% 0#5.3O|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0407");
	fprintf(printf_, "\n#0407");
	ret1 = fprintf(printf_, "|% 0#5.3hhO|", -25);
	ret2 = ft_printf("|% 0#5.3hhO|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0408");
	fprintf(printf_, "\n#0408");
	ret1 = fprintf(printf_, "|% 0#5.3hO|", -25);
	ret2 = ft_printf("|% 0#5.3hO|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0409");
	fprintf(printf_, "\n#0409");
	ret1 = fprintf(printf_, "|% 0#5.3lO|", -25);
	ret2 = ft_printf("|% 0#5.3lO|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0410");
	fprintf(printf_, "\n#0410");
	ret1 = fprintf(printf_, "|% 0#5.3llO|", -25);
	ret2 = ft_printf("|% 0#5.3llO|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0411");
	fprintf(printf_, "\n#0411");
	ret1 = fprintf(printf_, "|% 0#5.3jO|", -25);
	ret2 = ft_printf("|% 0#5.3jO|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0412");
	fprintf(printf_, "\n#0412");
	ret1 = fprintf(printf_, "|% 0#5.3zO|", -25);
	ret2 = ft_printf("|% 0#5.3zO|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0413");
	fprintf(printf_, "\n#0413");
	ret1 = fprintf(printf_, "|% 0#5.3U|", -25);
	ret2 = ft_printf("|% 0#5.3U|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0414");
	fprintf(printf_, "\n#0414");
	ret1 = fprintf(printf_, "|% 0#5.3hhU|", -25);
	ret2 = ft_printf("|% 0#5.3hhU|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0415");
	fprintf(printf_, "\n#0415");
	ret1 = fprintf(printf_, "|% 0#5.3hU|", -25);
	ret2 = ft_printf("|% 0#5.3hU|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0416");
	fprintf(printf_, "\n#0416");
	ret1 = fprintf(printf_, "|% 0#5.3lU|", -25);
	ret2 = ft_printf("|% 0#5.3lU|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0417");
	fprintf(printf_, "\n#0417");
	ret1 = fprintf(printf_, "|% 0#5.3llU|", -25);
	ret2 = ft_printf("|% 0#5.3llU|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0418");
	fprintf(printf_, "\n#0418");
	ret1 = fprintf(printf_, "|% 0#5.3jU|", -25);
	ret2 = ft_printf("|% 0#5.3jU|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0419");
	fprintf(printf_, "\n#0419");
	ret1 = fprintf(printf_, "|% 0#5.3zU|", -25);
	ret2 = ft_printf("|% 0#5.3zU|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0420");
	fprintf(printf_, "\n#0420");
	ret1 = fprintf(printf_, "|%+#5.3D|", -25);
	ret2 = ft_printf("|%+#5.3D|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0421");
	fprintf(printf_, "\n#0421");
	ret1 = fprintf(printf_, "|%+#5.3hhD|", -25);
	ret2 = ft_printf("|%+#5.3hhD|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0422");
	fprintf(printf_, "\n#0422");
	ret1 = fprintf(printf_, "|%+#5.3hD|", -25);
	ret2 = ft_printf("|%+#5.3hD|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0423");
	fprintf(printf_, "\n#0423");
	ret1 = fprintf(printf_, "|%+#5.3lD|", -25);
	ret2 = ft_printf("|%+#5.3lD|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0424");
	fprintf(printf_, "\n#0424");
	ret1 = fprintf(printf_, "|%+#5.3llD|", -25);
	ret2 = ft_printf("|%+#5.3llD|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0425");
	fprintf(printf_, "\n#0425");
	ret1 = fprintf(printf_, "|%+#5.3jD|", -25);
	ret2 = ft_printf("|%+#5.3jD|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0426");
	fprintf(printf_, "\n#0426");
	ret1 = fprintf(printf_, "|%+#5.3zD|", -25);
	ret2 = ft_printf("|%+#5.3zD|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0427");
	fprintf(printf_, "\n#0427");
	ret1 = fprintf(printf_, "|%+#5.3O|", -25);
	ret2 = ft_printf("|%+#5.3O|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0428");
	fprintf(printf_, "\n#0428");
	ret1 = fprintf(printf_, "|%+#5.3hhO|", -25);
	ret2 = ft_printf("|%+#5.3hhO|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0429");
	fprintf(printf_, "\n#0429");
	ret1 = fprintf(printf_, "|%+#5.3hO|", -25);
	ret2 = ft_printf("|%+#5.3hO|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0430");
	fprintf(printf_, "\n#0430");
	ret1 = fprintf(printf_, "|%+#5.3lO|", -25);
	ret2 = ft_printf("|%+#5.3lO|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0431");
	fprintf(printf_, "\n#0431");
	ret1 = fprintf(printf_, "|%+#5.3llO|", -25);
	ret2 = ft_printf("|%+#5.3llO|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0432");
	fprintf(printf_, "\n#0432");
	ret1 = fprintf(printf_, "|%+#5.3jO|", -25);
	ret2 = ft_printf("|%+#5.3jO|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0433");
	fprintf(printf_, "\n#0433");
	ret1 = fprintf(printf_, "|%+#5.3zO|", -25);
	ret2 = ft_printf("|%+#5.3zO|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0434");
	fprintf(printf_, "\n#0434");
	ret1 = fprintf(printf_, "|%+#5.3U|", -25);
	ret2 = ft_printf("|%+#5.3U|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0435");
	fprintf(printf_, "\n#0435");
	ret1 = fprintf(printf_, "|%+#5.3hhU|", -25);
	ret2 = ft_printf("|%+#5.3hhU|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0436");
	fprintf(printf_, "\n#0436");
	ret1 = fprintf(printf_, "|%+#5.3hU|", -25);
	ret2 = ft_printf("|%+#5.3hU|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0437");
	fprintf(printf_, "\n#0437");
	ret1 = fprintf(printf_, "|%+#5.3lU|", -25);
	ret2 = ft_printf("|%+#5.3lU|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0438");
	fprintf(printf_, "\n#0438");
	ret1 = fprintf(printf_, "|%+#5.3llU|", -25);
	ret2 = ft_printf("|%+#5.3llU|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0439");
	fprintf(printf_, "\n#0439");
	ret1 = fprintf(printf_, "|%+#5.3jU|", -25);
	ret2 = ft_printf("|%+#5.3jU|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0440");
	fprintf(printf_, "\n#0440");
	ret1 = fprintf(printf_, "|%+#5.3zU|", -25);
	ret2 = ft_printf("|%+#5.3zU|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0441");
	fprintf(printf_, "\n#0441");
	ret1 = fprintf(printf_, "|% +#5.3D|", -25);
	ret2 = ft_printf("|% +#5.3D|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0442");
	fprintf(printf_, "\n#0442");
	ret1 = fprintf(printf_, "|% +#5.3hhD|", -25);
	ret2 = ft_printf("|% +#5.3hhD|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0443");
	fprintf(printf_, "\n#0443");
	ret1 = fprintf(printf_, "|% +#5.3hD|", -25);
	ret2 = ft_printf("|% +#5.3hD|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0444");
	fprintf(printf_, "\n#0444");
	ret1 = fprintf(printf_, "|% +#5.3lD|", -25);
	ret2 = ft_printf("|% +#5.3lD|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0445");
	fprintf(printf_, "\n#0445");
	ret1 = fprintf(printf_, "|% +#5.3llD|", -25);
	ret2 = ft_printf("|% +#5.3llD|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0446");
	fprintf(printf_, "\n#0446");
	ret1 = fprintf(printf_, "|% +#5.3jD|", -25);
	ret2 = ft_printf("|% +#5.3jD|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0447");
	fprintf(printf_, "\n#0447");
	ret1 = fprintf(printf_, "|% +#5.3zD|", -25);
	ret2 = ft_printf("|% +#5.3zD|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0448");
	fprintf(printf_, "\n#0448");
	ret1 = fprintf(printf_, "|% +#5.3O|", -25);
	ret2 = ft_printf("|% +#5.3O|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0449");
	fprintf(printf_, "\n#0449");
	ret1 = fprintf(printf_, "|% +#5.3hhO|", -25);
	ret2 = ft_printf("|% +#5.3hhO|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0450");
	fprintf(printf_, "\n#0450");
	ret1 = fprintf(printf_, "|% +#5.3hO|", -25);
	ret2 = ft_printf("|% +#5.3hO|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0451");
	fprintf(printf_, "\n#0451");
	ret1 = fprintf(printf_, "|% +#5.3lO|", -25);
	ret2 = ft_printf("|% +#5.3lO|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0452");
	fprintf(printf_, "\n#0452");
	ret1 = fprintf(printf_, "|% +#5.3llO|", -25);
	ret2 = ft_printf("|% +#5.3llO|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0453");
	fprintf(printf_, "\n#0453");
	ret1 = fprintf(printf_, "|% +#5.3jO|", -25);
	ret2 = ft_printf("|% +#5.3jO|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0454");
	fprintf(printf_, "\n#0454");
	ret1 = fprintf(printf_, "|% +#5.3zO|", -25);
	ret2 = ft_printf("|% +#5.3zO|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0455");
	fprintf(printf_, "\n#0455");
	ret1 = fprintf(printf_, "|% +#5.3U|", -25);
	ret2 = ft_printf("|% +#5.3U|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0456");
	fprintf(printf_, "\n#0456");
	ret1 = fprintf(printf_, "|% +#5.3hhU|", -25);
	ret2 = ft_printf("|% +#5.3hhU|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0457");
	fprintf(printf_, "\n#0457");
	ret1 = fprintf(printf_, "|% +#5.3hU|", -25);
	ret2 = ft_printf("|% +#5.3hU|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0458");
	fprintf(printf_, "\n#0458");
	ret1 = fprintf(printf_, "|% +#5.3lU|", -25);
	ret2 = ft_printf("|% +#5.3lU|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0459");
	fprintf(printf_, "\n#0459");
	ret1 = fprintf(printf_, "|% +#5.3llU|", -25);
	ret2 = ft_printf("|% +#5.3llU|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0460");
	fprintf(printf_, "\n#0460");
	ret1 = fprintf(printf_, "|% +#5.3jU|", -25);
	ret2 = ft_printf("|% +#5.3jU|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0461");
	fprintf(printf_, "\n#0461");
	ret1 = fprintf(printf_, "|% +#5.3zU|", -25);
	ret2 = ft_printf("|% +#5.3zU|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0462");
	fprintf(printf_, "\n#0462");
	ret1 = fprintf(printf_, "|%0+#5.3D|", -25);
	ret2 = ft_printf("|%0+#5.3D|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0463");
	fprintf(printf_, "\n#0463");
	ret1 = fprintf(printf_, "|%0+#5.3hhD|", -25);
	ret2 = ft_printf("|%0+#5.3hhD|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0464");
	fprintf(printf_, "\n#0464");
	ret1 = fprintf(printf_, "|%0+#5.3hD|", -25);
	ret2 = ft_printf("|%0+#5.3hD|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0465");
	fprintf(printf_, "\n#0465");
	ret1 = fprintf(printf_, "|%0+#5.3lD|", -25);
	ret2 = ft_printf("|%0+#5.3lD|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0466");
	fprintf(printf_, "\n#0466");
	ret1 = fprintf(printf_, "|%0+#5.3llD|", -25);
	ret2 = ft_printf("|%0+#5.3llD|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0467");
	fprintf(printf_, "\n#0467");
	ret1 = fprintf(printf_, "|%0+#5.3jD|", -25);
	ret2 = ft_printf("|%0+#5.3jD|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0468");
	fprintf(printf_, "\n#0468");
	ret1 = fprintf(printf_, "|%0+#5.3zD|", -25);
	ret2 = ft_printf("|%0+#5.3zD|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0469");
	fprintf(printf_, "\n#0469");
	ret1 = fprintf(printf_, "|%0+#5.3O|", -25);
	ret2 = ft_printf("|%0+#5.3O|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0470");
	fprintf(printf_, "\n#0470");
	ret1 = fprintf(printf_, "|%0+#5.3hhO|", -25);
	ret2 = ft_printf("|%0+#5.3hhO|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0471");
	fprintf(printf_, "\n#0471");
	ret1 = fprintf(printf_, "|%0+#5.3hO|", -25);
	ret2 = ft_printf("|%0+#5.3hO|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0472");
	fprintf(printf_, "\n#0472");
	ret1 = fprintf(printf_, "|%0+#5.3lO|", -25);
	ret2 = ft_printf("|%0+#5.3lO|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0473");
	fprintf(printf_, "\n#0473");
	ret1 = fprintf(printf_, "|%0+#5.3llO|", -25);
	ret2 = ft_printf("|%0+#5.3llO|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0474");
	fprintf(printf_, "\n#0474");
	ret1 = fprintf(printf_, "|%0+#5.3jO|", -25);
	ret2 = ft_printf("|%0+#5.3jO|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0475");
	fprintf(printf_, "\n#0475");
	ret1 = fprintf(printf_, "|%0+#5.3zO|", -25);
	ret2 = ft_printf("|%0+#5.3zO|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0476");
	fprintf(printf_, "\n#0476");
	ret1 = fprintf(printf_, "|%0+#5.3U|", -25);
	ret2 = ft_printf("|%0+#5.3U|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0477");
	fprintf(printf_, "\n#0477");
	ret1 = fprintf(printf_, "|%0+#5.3hhU|", -25);
	ret2 = ft_printf("|%0+#5.3hhU|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0478");
	fprintf(printf_, "\n#0478");
	ret1 = fprintf(printf_, "|%0+#5.3hU|", -25);
	ret2 = ft_printf("|%0+#5.3hU|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0479");
	fprintf(printf_, "\n#0479");
	ret1 = fprintf(printf_, "|%0+#5.3lU|", -25);
	ret2 = ft_printf("|%0+#5.3lU|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0480");
	fprintf(printf_, "\n#0480");
	ret1 = fprintf(printf_, "|%0+#5.3llU|", -25);
	ret2 = ft_printf("|%0+#5.3llU|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0481");
	fprintf(printf_, "\n#0481");
	ret1 = fprintf(printf_, "|%0+#5.3jU|", -25);
	ret2 = ft_printf("|%0+#5.3jU|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0482");
	fprintf(printf_, "\n#0482");
	ret1 = fprintf(printf_, "|%0+#5.3zU|", -25);
	ret2 = ft_printf("|%0+#5.3zU|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0483");
	fprintf(printf_, "\n#0483");
	ret1 = fprintf(printf_, "|% 0+#5.3D|", -25);
	ret2 = ft_printf("|% 0+#5.3D|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0484");
	fprintf(printf_, "\n#0484");
	ret1 = fprintf(printf_, "|% 0+#5.3hhD|", -25);
	ret2 = ft_printf("|% 0+#5.3hhD|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0485");
	fprintf(printf_, "\n#0485");
	ret1 = fprintf(printf_, "|% 0+#5.3hD|", -25);
	ret2 = ft_printf("|% 0+#5.3hD|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0486");
	fprintf(printf_, "\n#0486");
	ret1 = fprintf(printf_, "|% 0+#5.3lD|", -25);
	ret2 = ft_printf("|% 0+#5.3lD|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0487");
	fprintf(printf_, "\n#0487");
	ret1 = fprintf(printf_, "|% 0+#5.3llD|", -25);
	ret2 = ft_printf("|% 0+#5.3llD|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0488");
	fprintf(printf_, "\n#0488");
	ret1 = fprintf(printf_, "|% 0+#5.3jD|", -25);
	ret2 = ft_printf("|% 0+#5.3jD|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0489");
	fprintf(printf_, "\n#0489");
	ret1 = fprintf(printf_, "|% 0+#5.3zD|", -25);
	ret2 = ft_printf("|% 0+#5.3zD|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0490");
	fprintf(printf_, "\n#0490");
	ret1 = fprintf(printf_, "|% 0+#5.3O|", -25);
	ret2 = ft_printf("|% 0+#5.3O|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0491");
	fprintf(printf_, "\n#0491");
	ret1 = fprintf(printf_, "|% 0+#5.3hhO|", -25);
	ret2 = ft_printf("|% 0+#5.3hhO|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0492");
	fprintf(printf_, "\n#0492");
	ret1 = fprintf(printf_, "|% 0+#5.3hO|", -25);
	ret2 = ft_printf("|% 0+#5.3hO|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0493");
	fprintf(printf_, "\n#0493");
	ret1 = fprintf(printf_, "|% 0+#5.3lO|", -25);
	ret2 = ft_printf("|% 0+#5.3lO|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0494");
	fprintf(printf_, "\n#0494");
	ret1 = fprintf(printf_, "|% 0+#5.3llO|", -25);
	ret2 = ft_printf("|% 0+#5.3llO|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0495");
	fprintf(printf_, "\n#0495");
	ret1 = fprintf(printf_, "|% 0+#5.3jO|", -25);
	ret2 = ft_printf("|% 0+#5.3jO|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0496");
	fprintf(printf_, "\n#0496");
	ret1 = fprintf(printf_, "|% 0+#5.3zO|", -25);
	ret2 = ft_printf("|% 0+#5.3zO|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0497");
	fprintf(printf_, "\n#0497");
	ret1 = fprintf(printf_, "|% 0+#5.3U|", -25);
	ret2 = ft_printf("|% 0+#5.3U|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0498");
	fprintf(printf_, "\n#0498");
	ret1 = fprintf(printf_, "|% 0+#5.3hhU|", -25);
	ret2 = ft_printf("|% 0+#5.3hhU|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0499");
	fprintf(printf_, "\n#0499");
	ret1 = fprintf(printf_, "|% 0+#5.3hU|", -25);
	ret2 = ft_printf("|% 0+#5.3hU|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0500");
	fprintf(printf_, "\n#0500");
	ret1 = fprintf(printf_, "|% 0+#5.3lU|", -25);
	ret2 = ft_printf("|% 0+#5.3lU|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0501");
	fprintf(printf_, "\n#0501");
	ret1 = fprintf(printf_, "|% 0+#5.3llU|", -25);
	ret2 = ft_printf("|% 0+#5.3llU|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0502");
	fprintf(printf_, "\n#0502");
	ret1 = fprintf(printf_, "|% 0+#5.3jU|", -25);
	ret2 = ft_printf("|% 0+#5.3jU|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0503");
	fprintf(printf_, "\n#0503");
	ret1 = fprintf(printf_, "|% 0+#5.3zU|", -25);
	ret2 = ft_printf("|% 0+#5.3zU|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0504");
	fprintf(printf_, "\n#0504");
	ret1 = fprintf(printf_, "|%-#5.3D|", -25);
	ret2 = ft_printf("|%-#5.3D|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0505");
	fprintf(printf_, "\n#0505");
	ret1 = fprintf(printf_, "|%-#5.3hhD|", -25);
	ret2 = ft_printf("|%-#5.3hhD|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0506");
	fprintf(printf_, "\n#0506");
	ret1 = fprintf(printf_, "|%-#5.3hD|", -25);
	ret2 = ft_printf("|%-#5.3hD|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0507");
	fprintf(printf_, "\n#0507");
	ret1 = fprintf(printf_, "|%-#5.3lD|", -25);
	ret2 = ft_printf("|%-#5.3lD|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0508");
	fprintf(printf_, "\n#0508");
	ret1 = fprintf(printf_, "|%-#5.3llD|", -25);
	ret2 = ft_printf("|%-#5.3llD|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0509");
	fprintf(printf_, "\n#0509");
	ret1 = fprintf(printf_, "|%-#5.3jD|", -25);
	ret2 = ft_printf("|%-#5.3jD|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0510");
	fprintf(printf_, "\n#0510");
	ret1 = fprintf(printf_, "|%-#5.3zD|", -25);
	ret2 = ft_printf("|%-#5.3zD|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0511");
	fprintf(printf_, "\n#0511");
	ret1 = fprintf(printf_, "|%-#5.3O|", -25);
	ret2 = ft_printf("|%-#5.3O|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0512");
	fprintf(printf_, "\n#0512");
	ret1 = fprintf(printf_, "|%-#5.3hhO|", -25);
	ret2 = ft_printf("|%-#5.3hhO|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0513");
	fprintf(printf_, "\n#0513");
	ret1 = fprintf(printf_, "|%-#5.3hO|", -25);
	ret2 = ft_printf("|%-#5.3hO|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0514");
	fprintf(printf_, "\n#0514");
	ret1 = fprintf(printf_, "|%-#5.3lO|", -25);
	ret2 = ft_printf("|%-#5.3lO|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0515");
	fprintf(printf_, "\n#0515");
	ret1 = fprintf(printf_, "|%-#5.3llO|", -25);
	ret2 = ft_printf("|%-#5.3llO|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0516");
	fprintf(printf_, "\n#0516");
	ret1 = fprintf(printf_, "|%-#5.3jO|", -25);
	ret2 = ft_printf("|%-#5.3jO|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0517");
	fprintf(printf_, "\n#0517");
	ret1 = fprintf(printf_, "|%-#5.3zO|", -25);
	ret2 = ft_printf("|%-#5.3zO|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0518");
	fprintf(printf_, "\n#0518");
	ret1 = fprintf(printf_, "|%-#5.3U|", -25);
	ret2 = ft_printf("|%-#5.3U|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0519");
	fprintf(printf_, "\n#0519");
	ret1 = fprintf(printf_, "|%-#5.3hhU|", -25);
	ret2 = ft_printf("|%-#5.3hhU|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0520");
	fprintf(printf_, "\n#0520");
	ret1 = fprintf(printf_, "|%-#5.3hU|", -25);
	ret2 = ft_printf("|%-#5.3hU|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0521");
	fprintf(printf_, "\n#0521");
	ret1 = fprintf(printf_, "|%-#5.3lU|", -25);
	ret2 = ft_printf("|%-#5.3lU|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0522");
	fprintf(printf_, "\n#0522");
	ret1 = fprintf(printf_, "|%-#5.3llU|", -25);
	ret2 = ft_printf("|%-#5.3llU|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0523");
	fprintf(printf_, "\n#0523");
	ret1 = fprintf(printf_, "|%-#5.3jU|", -25);
	ret2 = ft_printf("|%-#5.3jU|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0524");
	fprintf(printf_, "\n#0524");
	ret1 = fprintf(printf_, "|%-#5.3zU|", -25);
	ret2 = ft_printf("|%-#5.3zU|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0525");
	fprintf(printf_, "\n#0525");
	ret1 = fprintf(printf_, "|% -#5.3D|", -25);
	ret2 = ft_printf("|% -#5.3D|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0526");
	fprintf(printf_, "\n#0526");
	ret1 = fprintf(printf_, "|% -#5.3hhD|", -25);
	ret2 = ft_printf("|% -#5.3hhD|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0527");
	fprintf(printf_, "\n#0527");
	ret1 = fprintf(printf_, "|% -#5.3hD|", -25);
	ret2 = ft_printf("|% -#5.3hD|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0528");
	fprintf(printf_, "\n#0528");
	ret1 = fprintf(printf_, "|% -#5.3lD|", -25);
	ret2 = ft_printf("|% -#5.3lD|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0529");
	fprintf(printf_, "\n#0529");
	ret1 = fprintf(printf_, "|% -#5.3llD|", -25);
	ret2 = ft_printf("|% -#5.3llD|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0530");
	fprintf(printf_, "\n#0530");
	ret1 = fprintf(printf_, "|% -#5.3jD|", -25);
	ret2 = ft_printf("|% -#5.3jD|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0531");
	fprintf(printf_, "\n#0531");
	ret1 = fprintf(printf_, "|% -#5.3zD|", -25);
	ret2 = ft_printf("|% -#5.3zD|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0532");
	fprintf(printf_, "\n#0532");
	ret1 = fprintf(printf_, "|% -#5.3O|", -25);
	ret2 = ft_printf("|% -#5.3O|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0533");
	fprintf(printf_, "\n#0533");
	ret1 = fprintf(printf_, "|% -#5.3hhO|", -25);
	ret2 = ft_printf("|% -#5.3hhO|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0534");
	fprintf(printf_, "\n#0534");
	ret1 = fprintf(printf_, "|% -#5.3hO|", -25);
	ret2 = ft_printf("|% -#5.3hO|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0535");
	fprintf(printf_, "\n#0535");
	ret1 = fprintf(printf_, "|% -#5.3lO|", -25);
	ret2 = ft_printf("|% -#5.3lO|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0536");
	fprintf(printf_, "\n#0536");
	ret1 = fprintf(printf_, "|% -#5.3llO|", -25);
	ret2 = ft_printf("|% -#5.3llO|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0537");
	fprintf(printf_, "\n#0537");
	ret1 = fprintf(printf_, "|% -#5.3jO|", -25);
	ret2 = ft_printf("|% -#5.3jO|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0538");
	fprintf(printf_, "\n#0538");
	ret1 = fprintf(printf_, "|% -#5.3zO|", -25);
	ret2 = ft_printf("|% -#5.3zO|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0539");
	fprintf(printf_, "\n#0539");
	ret1 = fprintf(printf_, "|% -#5.3U|", -25);
	ret2 = ft_printf("|% -#5.3U|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0540");
	fprintf(printf_, "\n#0540");
	ret1 = fprintf(printf_, "|% -#5.3hhU|", -25);
	ret2 = ft_printf("|% -#5.3hhU|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0541");
	fprintf(printf_, "\n#0541");
	ret1 = fprintf(printf_, "|% -#5.3hU|", -25);
	ret2 = ft_printf("|% -#5.3hU|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0542");
	fprintf(printf_, "\n#0542");
	ret1 = fprintf(printf_, "|% -#5.3lU|", -25);
	ret2 = ft_printf("|% -#5.3lU|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0543");
	fprintf(printf_, "\n#0543");
	ret1 = fprintf(printf_, "|% -#5.3llU|", -25);
	ret2 = ft_printf("|% -#5.3llU|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0544");
	fprintf(printf_, "\n#0544");
	ret1 = fprintf(printf_, "|% -#5.3jU|", -25);
	ret2 = ft_printf("|% -#5.3jU|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0545");
	fprintf(printf_, "\n#0545");
	ret1 = fprintf(printf_, "|% -#5.3zU|", -25);
	ret2 = ft_printf("|% -#5.3zU|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0546");
	fprintf(printf_, "\n#0546");
	ret1 = fprintf(printf_, "|%0-#5.3D|", -25);
	ret2 = ft_printf("|%0-#5.3D|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0547");
	fprintf(printf_, "\n#0547");
	ret1 = fprintf(printf_, "|%0-#5.3hhD|", -25);
	ret2 = ft_printf("|%0-#5.3hhD|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0548");
	fprintf(printf_, "\n#0548");
	ret1 = fprintf(printf_, "|%0-#5.3hD|", -25);
	ret2 = ft_printf("|%0-#5.3hD|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0549");
	fprintf(printf_, "\n#0549");
	ret1 = fprintf(printf_, "|%0-#5.3lD|", -25);
	ret2 = ft_printf("|%0-#5.3lD|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0550");
	fprintf(printf_, "\n#0550");
	ret1 = fprintf(printf_, "|%0-#5.3llD|", -25);
	ret2 = ft_printf("|%0-#5.3llD|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0551");
	fprintf(printf_, "\n#0551");
	ret1 = fprintf(printf_, "|%0-#5.3jD|", -25);
	ret2 = ft_printf("|%0-#5.3jD|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0552");
	fprintf(printf_, "\n#0552");
	ret1 = fprintf(printf_, "|%0-#5.3zD|", -25);
	ret2 = ft_printf("|%0-#5.3zD|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0553");
	fprintf(printf_, "\n#0553");
	ret1 = fprintf(printf_, "|%0-#5.3O|", -25);
	ret2 = ft_printf("|%0-#5.3O|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0554");
	fprintf(printf_, "\n#0554");
	ret1 = fprintf(printf_, "|%0-#5.3hhO|", -25);
	ret2 = ft_printf("|%0-#5.3hhO|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0555");
	fprintf(printf_, "\n#0555");
	ret1 = fprintf(printf_, "|%0-#5.3hO|", -25);
	ret2 = ft_printf("|%0-#5.3hO|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0556");
	fprintf(printf_, "\n#0556");
	ret1 = fprintf(printf_, "|%0-#5.3lO|", -25);
	ret2 = ft_printf("|%0-#5.3lO|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0557");
	fprintf(printf_, "\n#0557");
	ret1 = fprintf(printf_, "|%0-#5.3llO|", -25);
	ret2 = ft_printf("|%0-#5.3llO|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0558");
	fprintf(printf_, "\n#0558");
	ret1 = fprintf(printf_, "|%0-#5.3jO|", -25);
	ret2 = ft_printf("|%0-#5.3jO|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0559");
	fprintf(printf_, "\n#0559");
	ret1 = fprintf(printf_, "|%0-#5.3zO|", -25);
	ret2 = ft_printf("|%0-#5.3zO|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0560");
	fprintf(printf_, "\n#0560");
	ret1 = fprintf(printf_, "|%0-#5.3U|", -25);
	ret2 = ft_printf("|%0-#5.3U|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0561");
	fprintf(printf_, "\n#0561");
	ret1 = fprintf(printf_, "|%0-#5.3hhU|", -25);
	ret2 = ft_printf("|%0-#5.3hhU|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0562");
	fprintf(printf_, "\n#0562");
	ret1 = fprintf(printf_, "|%0-#5.3hU|", -25);
	ret2 = ft_printf("|%0-#5.3hU|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0563");
	fprintf(printf_, "\n#0563");
	ret1 = fprintf(printf_, "|%0-#5.3lU|", -25);
	ret2 = ft_printf("|%0-#5.3lU|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0564");
	fprintf(printf_, "\n#0564");
	ret1 = fprintf(printf_, "|%0-#5.3llU|", -25);
	ret2 = ft_printf("|%0-#5.3llU|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0565");
	fprintf(printf_, "\n#0565");
	ret1 = fprintf(printf_, "|%0-#5.3jU|", -25);
	ret2 = ft_printf("|%0-#5.3jU|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0566");
	fprintf(printf_, "\n#0566");
	ret1 = fprintf(printf_, "|%0-#5.3zU|", -25);
	ret2 = ft_printf("|%0-#5.3zU|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0567");
	fprintf(printf_, "\n#0567");
	ret1 = fprintf(printf_, "|% 0-#5.3D|", -25);
	ret2 = ft_printf("|% 0-#5.3D|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0568");
	fprintf(printf_, "\n#0568");
	ret1 = fprintf(printf_, "|% 0-#5.3hhD|", -25);
	ret2 = ft_printf("|% 0-#5.3hhD|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0569");
	fprintf(printf_, "\n#0569");
	ret1 = fprintf(printf_, "|% 0-#5.3hD|", -25);
	ret2 = ft_printf("|% 0-#5.3hD|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0570");
	fprintf(printf_, "\n#0570");
	ret1 = fprintf(printf_, "|% 0-#5.3lD|", -25);
	ret2 = ft_printf("|% 0-#5.3lD|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0571");
	fprintf(printf_, "\n#0571");
	ret1 = fprintf(printf_, "|% 0-#5.3llD|", -25);
	ret2 = ft_printf("|% 0-#5.3llD|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0572");
	fprintf(printf_, "\n#0572");
	ret1 = fprintf(printf_, "|% 0-#5.3jD|", -25);
	ret2 = ft_printf("|% 0-#5.3jD|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0573");
	fprintf(printf_, "\n#0573");
	ret1 = fprintf(printf_, "|% 0-#5.3zD|", -25);
	ret2 = ft_printf("|% 0-#5.3zD|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0574");
	fprintf(printf_, "\n#0574");
	ret1 = fprintf(printf_, "|% 0-#5.3O|", -25);
	ret2 = ft_printf("|% 0-#5.3O|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0575");
	fprintf(printf_, "\n#0575");
	ret1 = fprintf(printf_, "|% 0-#5.3hhO|", -25);
	ret2 = ft_printf("|% 0-#5.3hhO|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0576");
	fprintf(printf_, "\n#0576");
	ret1 = fprintf(printf_, "|% 0-#5.3hO|", -25);
	ret2 = ft_printf("|% 0-#5.3hO|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0577");
	fprintf(printf_, "\n#0577");
	ret1 = fprintf(printf_, "|% 0-#5.3lO|", -25);
	ret2 = ft_printf("|% 0-#5.3lO|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0578");
	fprintf(printf_, "\n#0578");
	ret1 = fprintf(printf_, "|% 0-#5.3llO|", -25);
	ret2 = ft_printf("|% 0-#5.3llO|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0579");
	fprintf(printf_, "\n#0579");
	ret1 = fprintf(printf_, "|% 0-#5.3jO|", -25);
	ret2 = ft_printf("|% 0-#5.3jO|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0580");
	fprintf(printf_, "\n#0580");
	ret1 = fprintf(printf_, "|% 0-#5.3zO|", -25);
	ret2 = ft_printf("|% 0-#5.3zO|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0581");
	fprintf(printf_, "\n#0581");
	ret1 = fprintf(printf_, "|% 0-#5.3U|", -25);
	ret2 = ft_printf("|% 0-#5.3U|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0582");
	fprintf(printf_, "\n#0582");
	ret1 = fprintf(printf_, "|% 0-#5.3hhU|", -25);
	ret2 = ft_printf("|% 0-#5.3hhU|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0583");
	fprintf(printf_, "\n#0583");
	ret1 = fprintf(printf_, "|% 0-#5.3hU|", -25);
	ret2 = ft_printf("|% 0-#5.3hU|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0584");
	fprintf(printf_, "\n#0584");
	ret1 = fprintf(printf_, "|% 0-#5.3lU|", -25);
	ret2 = ft_printf("|% 0-#5.3lU|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0585");
	fprintf(printf_, "\n#0585");
	ret1 = fprintf(printf_, "|% 0-#5.3llU|", -25);
	ret2 = ft_printf("|% 0-#5.3llU|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0586");
	fprintf(printf_, "\n#0586");
	ret1 = fprintf(printf_, "|% 0-#5.3jU|", -25);
	ret2 = ft_printf("|% 0-#5.3jU|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0587");
	fprintf(printf_, "\n#0587");
	ret1 = fprintf(printf_, "|% 0-#5.3zU|", -25);
	ret2 = ft_printf("|% 0-#5.3zU|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0588");
	fprintf(printf_, "\n#0588");
	ret1 = fprintf(printf_, "|%+-#5.3D|", -25);
	ret2 = ft_printf("|%+-#5.3D|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0589");
	fprintf(printf_, "\n#0589");
	ret1 = fprintf(printf_, "|%+-#5.3hhD|", -25);
	ret2 = ft_printf("|%+-#5.3hhD|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0590");
	fprintf(printf_, "\n#0590");
	ret1 = fprintf(printf_, "|%+-#5.3hD|", -25);
	ret2 = ft_printf("|%+-#5.3hD|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0591");
	fprintf(printf_, "\n#0591");
	ret1 = fprintf(printf_, "|%+-#5.3lD|", -25);
	ret2 = ft_printf("|%+-#5.3lD|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0592");
	fprintf(printf_, "\n#0592");
	ret1 = fprintf(printf_, "|%+-#5.3llD|", -25);
	ret2 = ft_printf("|%+-#5.3llD|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0593");
	fprintf(printf_, "\n#0593");
	ret1 = fprintf(printf_, "|%+-#5.3jD|", -25);
	ret2 = ft_printf("|%+-#5.3jD|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0594");
	fprintf(printf_, "\n#0594");
	ret1 = fprintf(printf_, "|%+-#5.3zD|", -25);
	ret2 = ft_printf("|%+-#5.3zD|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0595");
	fprintf(printf_, "\n#0595");
	ret1 = fprintf(printf_, "|%+-#5.3O|", -25);
	ret2 = ft_printf("|%+-#5.3O|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0596");
	fprintf(printf_, "\n#0596");
	ret1 = fprintf(printf_, "|%+-#5.3hhO|", -25);
	ret2 = ft_printf("|%+-#5.3hhO|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0597");
	fprintf(printf_, "\n#0597");
	ret1 = fprintf(printf_, "|%+-#5.3hO|", -25);
	ret2 = ft_printf("|%+-#5.3hO|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0598");
	fprintf(printf_, "\n#0598");
	ret1 = fprintf(printf_, "|%+-#5.3lO|", -25);
	ret2 = ft_printf("|%+-#5.3lO|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0599");
	fprintf(printf_, "\n#0599");
	ret1 = fprintf(printf_, "|%+-#5.3llO|", -25);
	ret2 = ft_printf("|%+-#5.3llO|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0600");
	fprintf(printf_, "\n#0600");
	ret1 = fprintf(printf_, "|%+-#5.3jO|", -25);
	ret2 = ft_printf("|%+-#5.3jO|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0601");
	fprintf(printf_, "\n#0601");
	ret1 = fprintf(printf_, "|%+-#5.3zO|", -25);
	ret2 = ft_printf("|%+-#5.3zO|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0602");
	fprintf(printf_, "\n#0602");
	ret1 = fprintf(printf_, "|%+-#5.3U|", -25);
	ret2 = ft_printf("|%+-#5.3U|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0603");
	fprintf(printf_, "\n#0603");
	ret1 = fprintf(printf_, "|%+-#5.3hhU|", -25);
	ret2 = ft_printf("|%+-#5.3hhU|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0604");
	fprintf(printf_, "\n#0604");
	ret1 = fprintf(printf_, "|%+-#5.3hU|", -25);
	ret2 = ft_printf("|%+-#5.3hU|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0605");
	fprintf(printf_, "\n#0605");
	ret1 = fprintf(printf_, "|%+-#5.3lU|", -25);
	ret2 = ft_printf("|%+-#5.3lU|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0606");
	fprintf(printf_, "\n#0606");
	ret1 = fprintf(printf_, "|%+-#5.3llU|", -25);
	ret2 = ft_printf("|%+-#5.3llU|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0607");
	fprintf(printf_, "\n#0607");
	ret1 = fprintf(printf_, "|%+-#5.3jU|", -25);
	ret2 = ft_printf("|%+-#5.3jU|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0608");
	fprintf(printf_, "\n#0608");
	ret1 = fprintf(printf_, "|%+-#5.3zU|", -25);
	ret2 = ft_printf("|%+-#5.3zU|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0609");
	fprintf(printf_, "\n#0609");
	ret1 = fprintf(printf_, "|% +-#5.3D|", -25);
	ret2 = ft_printf("|% +-#5.3D|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0610");
	fprintf(printf_, "\n#0610");
	ret1 = fprintf(printf_, "|% +-#5.3hhD|", -25);
	ret2 = ft_printf("|% +-#5.3hhD|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0611");
	fprintf(printf_, "\n#0611");
	ret1 = fprintf(printf_, "|% +-#5.3hD|", -25);
	ret2 = ft_printf("|% +-#5.3hD|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0612");
	fprintf(printf_, "\n#0612");
	ret1 = fprintf(printf_, "|% +-#5.3lD|", -25);
	ret2 = ft_printf("|% +-#5.3lD|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0613");
	fprintf(printf_, "\n#0613");
	ret1 = fprintf(printf_, "|% +-#5.3llD|", -25);
	ret2 = ft_printf("|% +-#5.3llD|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0614");
	fprintf(printf_, "\n#0614");
	ret1 = fprintf(printf_, "|% +-#5.3jD|", -25);
	ret2 = ft_printf("|% +-#5.3jD|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0615");
	fprintf(printf_, "\n#0615");
	ret1 = fprintf(printf_, "|% +-#5.3zD|", -25);
	ret2 = ft_printf("|% +-#5.3zD|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0616");
	fprintf(printf_, "\n#0616");
	ret1 = fprintf(printf_, "|% +-#5.3O|", -25);
	ret2 = ft_printf("|% +-#5.3O|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0617");
	fprintf(printf_, "\n#0617");
	ret1 = fprintf(printf_, "|% +-#5.3hhO|", -25);
	ret2 = ft_printf("|% +-#5.3hhO|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0618");
	fprintf(printf_, "\n#0618");
	ret1 = fprintf(printf_, "|% +-#5.3hO|", -25);
	ret2 = ft_printf("|% +-#5.3hO|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0619");
	fprintf(printf_, "\n#0619");
	ret1 = fprintf(printf_, "|% +-#5.3lO|", -25);
	ret2 = ft_printf("|% +-#5.3lO|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0620");
	fprintf(printf_, "\n#0620");
	ret1 = fprintf(printf_, "|% +-#5.3llO|", -25);
	ret2 = ft_printf("|% +-#5.3llO|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0621");
	fprintf(printf_, "\n#0621");
	ret1 = fprintf(printf_, "|% +-#5.3jO|", -25);
	ret2 = ft_printf("|% +-#5.3jO|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0622");
	fprintf(printf_, "\n#0622");
	ret1 = fprintf(printf_, "|% +-#5.3zO|", -25);
	ret2 = ft_printf("|% +-#5.3zO|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0623");
	fprintf(printf_, "\n#0623");
	ret1 = fprintf(printf_, "|% +-#5.3U|", -25);
	ret2 = ft_printf("|% +-#5.3U|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0624");
	fprintf(printf_, "\n#0624");
	ret1 = fprintf(printf_, "|% +-#5.3hhU|", -25);
	ret2 = ft_printf("|% +-#5.3hhU|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0625");
	fprintf(printf_, "\n#0625");
	ret1 = fprintf(printf_, "|% +-#5.3hU|", -25);
	ret2 = ft_printf("|% +-#5.3hU|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0626");
	fprintf(printf_, "\n#0626");
	ret1 = fprintf(printf_, "|% +-#5.3lU|", -25);
	ret2 = ft_printf("|% +-#5.3lU|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0627");
	fprintf(printf_, "\n#0627");
	ret1 = fprintf(printf_, "|% +-#5.3llU|", -25);
	ret2 = ft_printf("|% +-#5.3llU|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0628");
	fprintf(printf_, "\n#0628");
	ret1 = fprintf(printf_, "|% +-#5.3jU|", -25);
	ret2 = ft_printf("|% +-#5.3jU|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0629");
	fprintf(printf_, "\n#0629");
	ret1 = fprintf(printf_, "|% +-#5.3zU|", -25);
	ret2 = ft_printf("|% +-#5.3zU|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0630");
	fprintf(printf_, "\n#0630");
	ret1 = fprintf(printf_, "|%0+-#5.3D|", -25);
	ret2 = ft_printf("|%0+-#5.3D|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0631");
	fprintf(printf_, "\n#0631");
	ret1 = fprintf(printf_, "|%0+-#5.3hhD|", -25);
	ret2 = ft_printf("|%0+-#5.3hhD|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0632");
	fprintf(printf_, "\n#0632");
	ret1 = fprintf(printf_, "|%0+-#5.3hD|", -25);
	ret2 = ft_printf("|%0+-#5.3hD|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0633");
	fprintf(printf_, "\n#0633");
	ret1 = fprintf(printf_, "|%0+-#5.3lD|", -25);
	ret2 = ft_printf("|%0+-#5.3lD|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0634");
	fprintf(printf_, "\n#0634");
	ret1 = fprintf(printf_, "|%0+-#5.3llD|", -25);
	ret2 = ft_printf("|%0+-#5.3llD|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0635");
	fprintf(printf_, "\n#0635");
	ret1 = fprintf(printf_, "|%0+-#5.3jD|", -25);
	ret2 = ft_printf("|%0+-#5.3jD|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0636");
	fprintf(printf_, "\n#0636");
	ret1 = fprintf(printf_, "|%0+-#5.3zD|", -25);
	ret2 = ft_printf("|%0+-#5.3zD|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0637");
	fprintf(printf_, "\n#0637");
	ret1 = fprintf(printf_, "|%0+-#5.3O|", -25);
	ret2 = ft_printf("|%0+-#5.3O|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0638");
	fprintf(printf_, "\n#0638");
	ret1 = fprintf(printf_, "|%0+-#5.3hhO|", -25);
	ret2 = ft_printf("|%0+-#5.3hhO|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0639");
	fprintf(printf_, "\n#0639");
	ret1 = fprintf(printf_, "|%0+-#5.3hO|", -25);
	ret2 = ft_printf("|%0+-#5.3hO|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0640");
	fprintf(printf_, "\n#0640");
	ret1 = fprintf(printf_, "|%0+-#5.3lO|", -25);
	ret2 = ft_printf("|%0+-#5.3lO|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0641");
	fprintf(printf_, "\n#0641");
	ret1 = fprintf(printf_, "|%0+-#5.3llO|", -25);
	ret2 = ft_printf("|%0+-#5.3llO|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0642");
	fprintf(printf_, "\n#0642");
	ret1 = fprintf(printf_, "|%0+-#5.3jO|", -25);
	ret2 = ft_printf("|%0+-#5.3jO|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0643");
	fprintf(printf_, "\n#0643");
	ret1 = fprintf(printf_, "|%0+-#5.3zO|", -25);
	ret2 = ft_printf("|%0+-#5.3zO|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0644");
	fprintf(printf_, "\n#0644");
	ret1 = fprintf(printf_, "|%0+-#5.3U|", -25);
	ret2 = ft_printf("|%0+-#5.3U|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0645");
	fprintf(printf_, "\n#0645");
	ret1 = fprintf(printf_, "|%0+-#5.3hhU|", -25);
	ret2 = ft_printf("|%0+-#5.3hhU|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0646");
	fprintf(printf_, "\n#0646");
	ret1 = fprintf(printf_, "|%0+-#5.3hU|", -25);
	ret2 = ft_printf("|%0+-#5.3hU|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0647");
	fprintf(printf_, "\n#0647");
	ret1 = fprintf(printf_, "|%0+-#5.3lU|", -25);
	ret2 = ft_printf("|%0+-#5.3lU|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0648");
	fprintf(printf_, "\n#0648");
	ret1 = fprintf(printf_, "|%0+-#5.3llU|", -25);
	ret2 = ft_printf("|%0+-#5.3llU|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0649");
	fprintf(printf_, "\n#0649");
	ret1 = fprintf(printf_, "|%0+-#5.3jU|", -25);
	ret2 = ft_printf("|%0+-#5.3jU|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0650");
	fprintf(printf_, "\n#0650");
	ret1 = fprintf(printf_, "|%0+-#5.3zU|", -25);
	ret2 = ft_printf("|%0+-#5.3zU|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0651");
	fprintf(printf_, "\n#0651");
	ret1 = fprintf(printf_, "|% 0+-#5.3D|", -25);
	ret2 = ft_printf("|% 0+-#5.3D|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0652");
	fprintf(printf_, "\n#0652");
	ret1 = fprintf(printf_, "|% 0+-#5.3hhD|", -25);
	ret2 = ft_printf("|% 0+-#5.3hhD|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0653");
	fprintf(printf_, "\n#0653");
	ret1 = fprintf(printf_, "|% 0+-#5.3hD|", -25);
	ret2 = ft_printf("|% 0+-#5.3hD|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0654");
	fprintf(printf_, "\n#0654");
	ret1 = fprintf(printf_, "|% 0+-#5.3lD|", -25);
	ret2 = ft_printf("|% 0+-#5.3lD|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0655");
	fprintf(printf_, "\n#0655");
	ret1 = fprintf(printf_, "|% 0+-#5.3llD|", -25);
	ret2 = ft_printf("|% 0+-#5.3llD|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0656");
	fprintf(printf_, "\n#0656");
	ret1 = fprintf(printf_, "|% 0+-#5.3jD|", -25);
	ret2 = ft_printf("|% 0+-#5.3jD|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0657");
	fprintf(printf_, "\n#0657");
	ret1 = fprintf(printf_, "|% 0+-#5.3zD|", -25);
	ret2 = ft_printf("|% 0+-#5.3zD|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0658");
	fprintf(printf_, "\n#0658");
	ret1 = fprintf(printf_, "|% 0+-#5.3O|", -25);
	ret2 = ft_printf("|% 0+-#5.3O|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0659");
	fprintf(printf_, "\n#0659");
	ret1 = fprintf(printf_, "|% 0+-#5.3hhO|", -25);
	ret2 = ft_printf("|% 0+-#5.3hhO|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0660");
	fprintf(printf_, "\n#0660");
	ret1 = fprintf(printf_, "|% 0+-#5.3hO|", -25);
	ret2 = ft_printf("|% 0+-#5.3hO|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0661");
	fprintf(printf_, "\n#0661");
	ret1 = fprintf(printf_, "|% 0+-#5.3lO|", -25);
	ret2 = ft_printf("|% 0+-#5.3lO|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0662");
	fprintf(printf_, "\n#0662");
	ret1 = fprintf(printf_, "|% 0+-#5.3llO|", -25);
	ret2 = ft_printf("|% 0+-#5.3llO|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0663");
	fprintf(printf_, "\n#0663");
	ret1 = fprintf(printf_, "|% 0+-#5.3jO|", -25);
	ret2 = ft_printf("|% 0+-#5.3jO|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0664");
	fprintf(printf_, "\n#0664");
	ret1 = fprintf(printf_, "|% 0+-#5.3zO|", -25);
	ret2 = ft_printf("|% 0+-#5.3zO|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0665");
	fprintf(printf_, "\n#0665");
	ret1 = fprintf(printf_, "|% 0+-#5.3U|", -25);
	ret2 = ft_printf("|% 0+-#5.3U|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0666");
	fprintf(printf_, "\n#0666");
	ret1 = fprintf(printf_, "|% 0+-#5.3hhU|", -25);
	ret2 = ft_printf("|% 0+-#5.3hhU|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0667");
	fprintf(printf_, "\n#0667");
	ret1 = fprintf(printf_, "|% 0+-#5.3hU|", -25);
	ret2 = ft_printf("|% 0+-#5.3hU|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0668");
	fprintf(printf_, "\n#0668");
	ret1 = fprintf(printf_, "|% 0+-#5.3lU|", -25);
	ret2 = ft_printf("|% 0+-#5.3lU|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0669");
	fprintf(printf_, "\n#0669");
	ret1 = fprintf(printf_, "|% 0+-#5.3llU|", -25);
	ret2 = ft_printf("|% 0+-#5.3llU|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0670");
	fprintf(printf_, "\n#0670");
	ret1 = fprintf(printf_, "|% 0+-#5.3jU|", -25);
	ret2 = ft_printf("|% 0+-#5.3jU|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0671");
	fprintf(printf_, "\n#0671");
	ret1 = fprintf(printf_, "|% 0+-#5.3zU|", -25);
	ret2 = ft_printf("|% 0+-#5.3zU|", -25);
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m43_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
	fclose(printf_);
	fclose(printf_ret);
	fclose(ft_printf_ret);
	return (0);
}

