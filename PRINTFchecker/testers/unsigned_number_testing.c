#include <stdio.h>
#include <stdint.h>
#include "libftprintf.h"

void		unsigned_number_testing(int width, int precision, uintmax_t number)
{
	int		ret1;
	int		ret2;

	printf("Test #0000\n");
	ret1 = printf("|%*.*o|\n", width, precision, number);
	ret2 = ft_printf("|%*.*o|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0001\n");
	ret1 = printf("|%*.*hho|\n", width, precision, number);
	ret2 = ft_printf("|%*.*hho|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0002\n");
	ret1 = printf("|%*.*ho|\n", width, precision, number);
	ret2 = ft_printf("|%*.*ho|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0003\n");
	ret1 = printf("|%*.*lo|\n", width, precision, number);
	ret2 = ft_printf("|%*.*lo|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0004\n");
	ret1 = printf("|%*.*llo|\n", width, precision, number);
	ret2 = ft_printf("|%*.*llo|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0005\n");
	ret1 = printf("|%*.*jo|\n", width, precision, number);
	ret2 = ft_printf("|%*.*jo|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0006\n");
	ret1 = printf("|%*.*zo|\n", width, precision, number);
	ret2 = ft_printf("|%*.*zo|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0007\n");
	ret1 = printf("|%*.*o|\n", width, precision, number);
	ret2 = ft_printf("|%*.*o|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0008\n");
	ret1 = printf("|%*.*u|\n", width, precision, number);
	ret2 = ft_printf("|%*.*u|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0009\n");
	ret1 = printf("|%*.*hhu|\n", width, precision, number);
	ret2 = ft_printf("|%*.*hhu|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0010\n");
	ret1 = printf("|%*.*hu|\n", width, precision, number);
	ret2 = ft_printf("|%*.*hu|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0011\n");
	ret1 = printf("|%*.*lu|\n", width, precision, number);
	ret2 = ft_printf("|%*.*lu|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0012\n");
	ret1 = printf("|%*.*llu|\n", width, precision, number);
	ret2 = ft_printf("|%*.*llu|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0013\n");
	ret1 = printf("|%*.*ju|\n", width, precision, number);
	ret2 = ft_printf("|%*.*ju|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0014\n");
	ret1 = printf("|%*.*zu|\n", width, precision, number);
	ret2 = ft_printf("|%*.*zu|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0015\n");
	ret1 = printf("|%*.*u|\n", width, precision, number);
	ret2 = ft_printf("|%*.*u|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0016\n");
	ret1 = printf("|%*.*x|\n", width, precision, number);
	ret2 = ft_printf("|%*.*x|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0017\n");
	ret1 = printf("|%*.*hhx|\n", width, precision, number);
	ret2 = ft_printf("|%*.*hhx|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0018\n");
	ret1 = printf("|%*.*hx|\n", width, precision, number);
	ret2 = ft_printf("|%*.*hx|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0019\n");
	ret1 = printf("|%*.*lx|\n", width, precision, number);
	ret2 = ft_printf("|%*.*lx|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0020\n");
	ret1 = printf("|%*.*llx|\n", width, precision, number);
	ret2 = ft_printf("|%*.*llx|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0021\n");
	ret1 = printf("|%*.*jx|\n", width, precision, number);
	ret2 = ft_printf("|%*.*jx|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0022\n");
	ret1 = printf("|%*.*zx|\n", width, precision, number);
	ret2 = ft_printf("|%*.*zx|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0023\n");
	ret1 = printf("|%*.*x|\n", width, precision, number);
	ret2 = ft_printf("|%*.*x|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0024\n");
	ret1 = printf("|%*.*X|\n", width, precision, number);
	ret2 = ft_printf("|%*.*X|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0025\n");
	ret1 = printf("|%*.*hhX|\n", width, precision, number);
	ret2 = ft_printf("|%*.*hhX|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0026\n");
	ret1 = printf("|%*.*hX|\n", width, precision, number);
	ret2 = ft_printf("|%*.*hX|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0027\n");
	ret1 = printf("|%*.*lX|\n", width, precision, number);
	ret2 = ft_printf("|%*.*lX|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0028\n");
	ret1 = printf("|%*.*llX|\n", width, precision, number);
	ret2 = ft_printf("|%*.*llX|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0029\n");
	ret1 = printf("|%*.*jX|\n", width, precision, number);
	ret2 = ft_printf("|%*.*jX|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0030\n");
	ret1 = printf("|%*.*zX|\n", width, precision, number);
	ret2 = ft_printf("|%*.*zX|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0031\n");
	ret1 = printf("|%*.*X|\n", width, precision, number);
	ret2 = ft_printf("|%*.*X|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0032\n");
	ret1 = printf("|% *.*o|\n", width, precision, number);
	ret2 = ft_printf("|% *.*o|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0033\n");
	ret1 = printf("|% *.*hho|\n", width, precision, number);
	ret2 = ft_printf("|% *.*hho|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0034\n");
	ret1 = printf("|% *.*ho|\n", width, precision, number);
	ret2 = ft_printf("|% *.*ho|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0035\n");
	ret1 = printf("|% *.*lo|\n", width, precision, number);
	ret2 = ft_printf("|% *.*lo|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0036\n");
	ret1 = printf("|% *.*llo|\n", width, precision, number);
	ret2 = ft_printf("|% *.*llo|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0037\n");
	ret1 = printf("|% *.*jo|\n", width, precision, number);
	ret2 = ft_printf("|% *.*jo|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0038\n");
	ret1 = printf("|% *.*zo|\n", width, precision, number);
	ret2 = ft_printf("|% *.*zo|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0039\n");
	ret1 = printf("|% *.*o|\n", width, precision, number);
	ret2 = ft_printf("|% *.*o|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0040\n");
	ret1 = printf("|% *.*u|\n", width, precision, number);
	ret2 = ft_printf("|% *.*u|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0041\n");
	ret1 = printf("|% *.*hhu|\n", width, precision, number);
	ret2 = ft_printf("|% *.*hhu|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0042\n");
	ret1 = printf("|% *.*hu|\n", width, precision, number);
	ret2 = ft_printf("|% *.*hu|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0043\n");
	ret1 = printf("|% *.*lu|\n", width, precision, number);
	ret2 = ft_printf("|% *.*lu|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0044\n");
	ret1 = printf("|% *.*llu|\n", width, precision, number);
	ret2 = ft_printf("|% *.*llu|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0045\n");
	ret1 = printf("|% *.*ju|\n", width, precision, number);
	ret2 = ft_printf("|% *.*ju|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0046\n");
	ret1 = printf("|% *.*zu|\n", width, precision, number);
	ret2 = ft_printf("|% *.*zu|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0047\n");
	ret1 = printf("|% *.*u|\n", width, precision, number);
	ret2 = ft_printf("|% *.*u|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0048\n");
	ret1 = printf("|% *.*x|\n", width, precision, number);
	ret2 = ft_printf("|% *.*x|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0049\n");
	ret1 = printf("|% *.*hhx|\n", width, precision, number);
	ret2 = ft_printf("|% *.*hhx|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0050\n");
	ret1 = printf("|% *.*hx|\n", width, precision, number);
	ret2 = ft_printf("|% *.*hx|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0051\n");
	ret1 = printf("|% *.*lx|\n", width, precision, number);
	ret2 = ft_printf("|% *.*lx|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0052\n");
	ret1 = printf("|% *.*llx|\n", width, precision, number);
	ret2 = ft_printf("|% *.*llx|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0053\n");
	ret1 = printf("|% *.*jx|\n", width, precision, number);
	ret2 = ft_printf("|% *.*jx|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0054\n");
	ret1 = printf("|% *.*zx|\n", width, precision, number);
	ret2 = ft_printf("|% *.*zx|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0055\n");
	ret1 = printf("|% *.*x|\n", width, precision, number);
	ret2 = ft_printf("|% *.*x|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0056\n");
	ret1 = printf("|% *.*X|\n", width, precision, number);
	ret2 = ft_printf("|% *.*X|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0057\n");
	ret1 = printf("|% *.*hhX|\n", width, precision, number);
	ret2 = ft_printf("|% *.*hhX|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0058\n");
	ret1 = printf("|% *.*hX|\n", width, precision, number);
	ret2 = ft_printf("|% *.*hX|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0059\n");
	ret1 = printf("|% *.*lX|\n", width, precision, number);
	ret2 = ft_printf("|% *.*lX|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0060\n");
	ret1 = printf("|% *.*llX|\n", width, precision, number);
	ret2 = ft_printf("|% *.*llX|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0061\n");
	ret1 = printf("|% *.*jX|\n", width, precision, number);
	ret2 = ft_printf("|% *.*jX|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0062\n");
	ret1 = printf("|% *.*zX|\n", width, precision, number);
	ret2 = ft_printf("|% *.*zX|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0063\n");
	ret1 = printf("|% *.*X|\n", width, precision, number);
	ret2 = ft_printf("|% *.*X|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0064\n");
	ret1 = printf("|%0*.*o|\n", width, precision, number);
	ret2 = ft_printf("|%0*.*o|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0065\n");
	ret1 = printf("|%0*.*hho|\n", width, precision, number);
	ret2 = ft_printf("|%0*.*hho|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0066\n");
	ret1 = printf("|%0*.*ho|\n", width, precision, number);
	ret2 = ft_printf("|%0*.*ho|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0067\n");
	ret1 = printf("|%0*.*lo|\n", width, precision, number);
	ret2 = ft_printf("|%0*.*lo|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0068\n");
	ret1 = printf("|%0*.*llo|\n", width, precision, number);
	ret2 = ft_printf("|%0*.*llo|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0069\n");
	ret1 = printf("|%0*.*jo|\n", width, precision, number);
	ret2 = ft_printf("|%0*.*jo|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0070\n");
	ret1 = printf("|%0*.*zo|\n", width, precision, number);
	ret2 = ft_printf("|%0*.*zo|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0071\n");
	ret1 = printf("|%0*.*o|\n", width, precision, number);
	ret2 = ft_printf("|%0*.*o|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0072\n");
	ret1 = printf("|%0*.*u|\n", width, precision, number);
	ret2 = ft_printf("|%0*.*u|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0073\n");
	ret1 = printf("|%0*.*hhu|\n", width, precision, number);
	ret2 = ft_printf("|%0*.*hhu|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0074\n");
	ret1 = printf("|%0*.*hu|\n", width, precision, number);
	ret2 = ft_printf("|%0*.*hu|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0075\n");
	ret1 = printf("|%0*.*lu|\n", width, precision, number);
	ret2 = ft_printf("|%0*.*lu|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0076\n");
	ret1 = printf("|%0*.*llu|\n", width, precision, number);
	ret2 = ft_printf("|%0*.*llu|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0077\n");
	ret1 = printf("|%0*.*ju|\n", width, precision, number);
	ret2 = ft_printf("|%0*.*ju|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0078\n");
	ret1 = printf("|%0*.*zu|\n", width, precision, number);
	ret2 = ft_printf("|%0*.*zu|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0079\n");
	ret1 = printf("|%0*.*u|\n", width, precision, number);
	ret2 = ft_printf("|%0*.*u|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0080\n");
	ret1 = printf("|%0*.*x|\n", width, precision, number);
	ret2 = ft_printf("|%0*.*x|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0081\n");
	ret1 = printf("|%0*.*hhx|\n", width, precision, number);
	ret2 = ft_printf("|%0*.*hhx|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0082\n");
	ret1 = printf("|%0*.*hx|\n", width, precision, number);
	ret2 = ft_printf("|%0*.*hx|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0083\n");
	ret1 = printf("|%0*.*lx|\n", width, precision, number);
	ret2 = ft_printf("|%0*.*lx|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0084\n");
	ret1 = printf("|%0*.*llx|\n", width, precision, number);
	ret2 = ft_printf("|%0*.*llx|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0085\n");
	ret1 = printf("|%0*.*jx|\n", width, precision, number);
	ret2 = ft_printf("|%0*.*jx|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0086\n");
	ret1 = printf("|%0*.*zx|\n", width, precision, number);
	ret2 = ft_printf("|%0*.*zx|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0087\n");
	ret1 = printf("|%0*.*x|\n", width, precision, number);
	ret2 = ft_printf("|%0*.*x|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0088\n");
	ret1 = printf("|%0*.*X|\n", width, precision, number);
	ret2 = ft_printf("|%0*.*X|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0089\n");
	ret1 = printf("|%0*.*hhX|\n", width, precision, number);
	ret2 = ft_printf("|%0*.*hhX|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0090\n");
	ret1 = printf("|%0*.*hX|\n", width, precision, number);
	ret2 = ft_printf("|%0*.*hX|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0091\n");
	ret1 = printf("|%0*.*lX|\n", width, precision, number);
	ret2 = ft_printf("|%0*.*lX|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0092\n");
	ret1 = printf("|%0*.*llX|\n", width, precision, number);
	ret2 = ft_printf("|%0*.*llX|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0093\n");
	ret1 = printf("|%0*.*jX|\n", width, precision, number);
	ret2 = ft_printf("|%0*.*jX|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0094\n");
	ret1 = printf("|%0*.*zX|\n", width, precision, number);
	ret2 = ft_printf("|%0*.*zX|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0095\n");
	ret1 = printf("|%0*.*X|\n", width, precision, number);
	ret2 = ft_printf("|%0*.*X|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0096\n");
	ret1 = printf("|% 0*.*o|\n", width, precision, number);
	ret2 = ft_printf("|% 0*.*o|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0097\n");
	ret1 = printf("|% 0*.*hho|\n", width, precision, number);
	ret2 = ft_printf("|% 0*.*hho|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0098\n");
	ret1 = printf("|% 0*.*ho|\n", width, precision, number);
	ret2 = ft_printf("|% 0*.*ho|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0099\n");
	ret1 = printf("|% 0*.*lo|\n", width, precision, number);
	ret2 = ft_printf("|% 0*.*lo|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0100\n");
	ret1 = printf("|% 0*.*llo|\n", width, precision, number);
	ret2 = ft_printf("|% 0*.*llo|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0101\n");
	ret1 = printf("|% 0*.*jo|\n", width, precision, number);
	ret2 = ft_printf("|% 0*.*jo|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0102\n");
	ret1 = printf("|% 0*.*zo|\n", width, precision, number);
	ret2 = ft_printf("|% 0*.*zo|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0103\n");
	ret1 = printf("|% 0*.*o|\n", width, precision, number);
	ret2 = ft_printf("|% 0*.*o|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0104\n");
	ret1 = printf("|% 0*.*u|\n", width, precision, number);
	ret2 = ft_printf("|% 0*.*u|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0105\n");
	ret1 = printf("|% 0*.*hhu|\n", width, precision, number);
	ret2 = ft_printf("|% 0*.*hhu|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0106\n");
	ret1 = printf("|% 0*.*hu|\n", width, precision, number);
	ret2 = ft_printf("|% 0*.*hu|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0107\n");
	ret1 = printf("|% 0*.*lu|\n", width, precision, number);
	ret2 = ft_printf("|% 0*.*lu|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0108\n");
	ret1 = printf("|% 0*.*llu|\n", width, precision, number);
	ret2 = ft_printf("|% 0*.*llu|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0109\n");
	ret1 = printf("|% 0*.*ju|\n", width, precision, number);
	ret2 = ft_printf("|% 0*.*ju|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0110\n");
	ret1 = printf("|% 0*.*zu|\n", width, precision, number);
	ret2 = ft_printf("|% 0*.*zu|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0111\n");
	ret1 = printf("|% 0*.*u|\n", width, precision, number);
	ret2 = ft_printf("|% 0*.*u|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0112\n");
	ret1 = printf("|% 0*.*x|\n", width, precision, number);
	ret2 = ft_printf("|% 0*.*x|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0113\n");
	ret1 = printf("|% 0*.*hhx|\n", width, precision, number);
	ret2 = ft_printf("|% 0*.*hhx|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0114\n");
	ret1 = printf("|% 0*.*hx|\n", width, precision, number);
	ret2 = ft_printf("|% 0*.*hx|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0115\n");
	ret1 = printf("|% 0*.*lx|\n", width, precision, number);
	ret2 = ft_printf("|% 0*.*lx|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0116\n");
	ret1 = printf("|% 0*.*llx|\n", width, precision, number);
	ret2 = ft_printf("|% 0*.*llx|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0117\n");
	ret1 = printf("|% 0*.*jx|\n", width, precision, number);
	ret2 = ft_printf("|% 0*.*jx|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0118\n");
	ret1 = printf("|% 0*.*zx|\n", width, precision, number);
	ret2 = ft_printf("|% 0*.*zx|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0119\n");
	ret1 = printf("|% 0*.*x|\n", width, precision, number);
	ret2 = ft_printf("|% 0*.*x|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0120\n");
	ret1 = printf("|% 0*.*X|\n", width, precision, number);
	ret2 = ft_printf("|% 0*.*X|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0121\n");
	ret1 = printf("|% 0*.*hhX|\n", width, precision, number);
	ret2 = ft_printf("|% 0*.*hhX|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0122\n");
	ret1 = printf("|% 0*.*hX|\n", width, precision, number);
	ret2 = ft_printf("|% 0*.*hX|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0123\n");
	ret1 = printf("|% 0*.*lX|\n", width, precision, number);
	ret2 = ft_printf("|% 0*.*lX|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0124\n");
	ret1 = printf("|% 0*.*llX|\n", width, precision, number);
	ret2 = ft_printf("|% 0*.*llX|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0125\n");
	ret1 = printf("|% 0*.*jX|\n", width, precision, number);
	ret2 = ft_printf("|% 0*.*jX|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0126\n");
	ret1 = printf("|% 0*.*zX|\n", width, precision, number);
	ret2 = ft_printf("|% 0*.*zX|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0127\n");
	ret1 = printf("|% 0*.*X|\n", width, precision, number);
	ret2 = ft_printf("|% 0*.*X|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0128\n");
	ret1 = printf("|%+*.*o|\n", width, precision, number);
	ret2 = ft_printf("|%+*.*o|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0129\n");
	ret1 = printf("|%+*.*hho|\n", width, precision, number);
	ret2 = ft_printf("|%+*.*hho|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0130\n");
	ret1 = printf("|%+*.*ho|\n", width, precision, number);
	ret2 = ft_printf("|%+*.*ho|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0131\n");
	ret1 = printf("|%+*.*lo|\n", width, precision, number);
	ret2 = ft_printf("|%+*.*lo|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0132\n");
	ret1 = printf("|%+*.*llo|\n", width, precision, number);
	ret2 = ft_printf("|%+*.*llo|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0133\n");
	ret1 = printf("|%+*.*jo|\n", width, precision, number);
	ret2 = ft_printf("|%+*.*jo|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0134\n");
	ret1 = printf("|%+*.*zo|\n", width, precision, number);
	ret2 = ft_printf("|%+*.*zo|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0135\n");
	ret1 = printf("|%+*.*o|\n", width, precision, number);
	ret2 = ft_printf("|%+*.*o|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0136\n");
	ret1 = printf("|%+*.*u|\n", width, precision, number);
	ret2 = ft_printf("|%+*.*u|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0137\n");
	ret1 = printf("|%+*.*hhu|\n", width, precision, number);
	ret2 = ft_printf("|%+*.*hhu|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0138\n");
	ret1 = printf("|%+*.*hu|\n", width, precision, number);
	ret2 = ft_printf("|%+*.*hu|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0139\n");
	ret1 = printf("|%+*.*lu|\n", width, precision, number);
	ret2 = ft_printf("|%+*.*lu|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0140\n");
	ret1 = printf("|%+*.*llu|\n", width, precision, number);
	ret2 = ft_printf("|%+*.*llu|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0141\n");
	ret1 = printf("|%+*.*ju|\n", width, precision, number);
	ret2 = ft_printf("|%+*.*ju|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0142\n");
	ret1 = printf("|%+*.*zu|\n", width, precision, number);
	ret2 = ft_printf("|%+*.*zu|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0143\n");
	ret1 = printf("|%+*.*u|\n", width, precision, number);
	ret2 = ft_printf("|%+*.*u|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0144\n");
	ret1 = printf("|%+*.*x|\n", width, precision, number);
	ret2 = ft_printf("|%+*.*x|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0145\n");
	ret1 = printf("|%+*.*hhx|\n", width, precision, number);
	ret2 = ft_printf("|%+*.*hhx|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0146\n");
	ret1 = printf("|%+*.*hx|\n", width, precision, number);
	ret2 = ft_printf("|%+*.*hx|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0147\n");
	ret1 = printf("|%+*.*lx|\n", width, precision, number);
	ret2 = ft_printf("|%+*.*lx|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0148\n");
	ret1 = printf("|%+*.*llx|\n", width, precision, number);
	ret2 = ft_printf("|%+*.*llx|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0149\n");
	ret1 = printf("|%+*.*jx|\n", width, precision, number);
	ret2 = ft_printf("|%+*.*jx|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0150\n");
	ret1 = printf("|%+*.*zx|\n", width, precision, number);
	ret2 = ft_printf("|%+*.*zx|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0151\n");
	ret1 = printf("|%+*.*x|\n", width, precision, number);
	ret2 = ft_printf("|%+*.*x|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0152\n");
	ret1 = printf("|%+*.*X|\n", width, precision, number);
	ret2 = ft_printf("|%+*.*X|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0153\n");
	ret1 = printf("|%+*.*hhX|\n", width, precision, number);
	ret2 = ft_printf("|%+*.*hhX|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0154\n");
	ret1 = printf("|%+*.*hX|\n", width, precision, number);
	ret2 = ft_printf("|%+*.*hX|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0155\n");
	ret1 = printf("|%+*.*lX|\n", width, precision, number);
	ret2 = ft_printf("|%+*.*lX|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0156\n");
	ret1 = printf("|%+*.*llX|\n", width, precision, number);
	ret2 = ft_printf("|%+*.*llX|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0157\n");
	ret1 = printf("|%+*.*jX|\n", width, precision, number);
	ret2 = ft_printf("|%+*.*jX|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0158\n");
	ret1 = printf("|%+*.*zX|\n", width, precision, number);
	ret2 = ft_printf("|%+*.*zX|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0159\n");
	ret1 = printf("|%+*.*X|\n", width, precision, number);
	ret2 = ft_printf("|%+*.*X|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0160\n");
	ret1 = printf("|% +*.*o|\n", width, precision, number);
	ret2 = ft_printf("|% +*.*o|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0161\n");
	ret1 = printf("|% +*.*hho|\n", width, precision, number);
	ret2 = ft_printf("|% +*.*hho|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0162\n");
	ret1 = printf("|% +*.*ho|\n", width, precision, number);
	ret2 = ft_printf("|% +*.*ho|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0163\n");
	ret1 = printf("|% +*.*lo|\n", width, precision, number);
	ret2 = ft_printf("|% +*.*lo|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0164\n");
	ret1 = printf("|% +*.*llo|\n", width, precision, number);
	ret2 = ft_printf("|% +*.*llo|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0165\n");
	ret1 = printf("|% +*.*jo|\n", width, precision, number);
	ret2 = ft_printf("|% +*.*jo|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0166\n");
	ret1 = printf("|% +*.*zo|\n", width, precision, number);
	ret2 = ft_printf("|% +*.*zo|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0167\n");
	ret1 = printf("|% +*.*o|\n", width, precision, number);
	ret2 = ft_printf("|% +*.*o|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0168\n");
	ret1 = printf("|% +*.*u|\n", width, precision, number);
	ret2 = ft_printf("|% +*.*u|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0169\n");
	ret1 = printf("|% +*.*hhu|\n", width, precision, number);
	ret2 = ft_printf("|% +*.*hhu|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0170\n");
	ret1 = printf("|% +*.*hu|\n", width, precision, number);
	ret2 = ft_printf("|% +*.*hu|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0171\n");
	ret1 = printf("|% +*.*lu|\n", width, precision, number);
	ret2 = ft_printf("|% +*.*lu|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0172\n");
	ret1 = printf("|% +*.*llu|\n", width, precision, number);
	ret2 = ft_printf("|% +*.*llu|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0173\n");
	ret1 = printf("|% +*.*ju|\n", width, precision, number);
	ret2 = ft_printf("|% +*.*ju|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0174\n");
	ret1 = printf("|% +*.*zu|\n", width, precision, number);
	ret2 = ft_printf("|% +*.*zu|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0175\n");
	ret1 = printf("|% +*.*u|\n", width, precision, number);
	ret2 = ft_printf("|% +*.*u|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0176\n");
	ret1 = printf("|% +*.*x|\n", width, precision, number);
	ret2 = ft_printf("|% +*.*x|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0177\n");
	ret1 = printf("|% +*.*hhx|\n", width, precision, number);
	ret2 = ft_printf("|% +*.*hhx|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0178\n");
	ret1 = printf("|% +*.*hx|\n", width, precision, number);
	ret2 = ft_printf("|% +*.*hx|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0179\n");
	ret1 = printf("|% +*.*lx|\n", width, precision, number);
	ret2 = ft_printf("|% +*.*lx|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0180\n");
	ret1 = printf("|% +*.*llx|\n", width, precision, number);
	ret2 = ft_printf("|% +*.*llx|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0181\n");
	ret1 = printf("|% +*.*jx|\n", width, precision, number);
	ret2 = ft_printf("|% +*.*jx|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0182\n");
	ret1 = printf("|% +*.*zx|\n", width, precision, number);
	ret2 = ft_printf("|% +*.*zx|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0183\n");
	ret1 = printf("|% +*.*x|\n", width, precision, number);
	ret2 = ft_printf("|% +*.*x|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0184\n");
	ret1 = printf("|% +*.*X|\n", width, precision, number);
	ret2 = ft_printf("|% +*.*X|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0185\n");
	ret1 = printf("|% +*.*hhX|\n", width, precision, number);
	ret2 = ft_printf("|% +*.*hhX|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0186\n");
	ret1 = printf("|% +*.*hX|\n", width, precision, number);
	ret2 = ft_printf("|% +*.*hX|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0187\n");
	ret1 = printf("|% +*.*lX|\n", width, precision, number);
	ret2 = ft_printf("|% +*.*lX|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0188\n");
	ret1 = printf("|% +*.*llX|\n", width, precision, number);
	ret2 = ft_printf("|% +*.*llX|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0189\n");
	ret1 = printf("|% +*.*jX|\n", width, precision, number);
	ret2 = ft_printf("|% +*.*jX|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0190\n");
	ret1 = printf("|% +*.*zX|\n", width, precision, number);
	ret2 = ft_printf("|% +*.*zX|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0191\n");
	ret1 = printf("|% +*.*X|\n", width, precision, number);
	ret2 = ft_printf("|% +*.*X|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0192\n");
	ret1 = printf("|%0+*.*o|\n", width, precision, number);
	ret2 = ft_printf("|%0+*.*o|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0193\n");
	ret1 = printf("|%0+*.*hho|\n", width, precision, number);
	ret2 = ft_printf("|%0+*.*hho|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0194\n");
	ret1 = printf("|%0+*.*ho|\n", width, precision, number);
	ret2 = ft_printf("|%0+*.*ho|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0195\n");
	ret1 = printf("|%0+*.*lo|\n", width, precision, number);
	ret2 = ft_printf("|%0+*.*lo|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0196\n");
	ret1 = printf("|%0+*.*llo|\n", width, precision, number);
	ret2 = ft_printf("|%0+*.*llo|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0197\n");
	ret1 = printf("|%0+*.*jo|\n", width, precision, number);
	ret2 = ft_printf("|%0+*.*jo|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0198\n");
	ret1 = printf("|%0+*.*zo|\n", width, precision, number);
	ret2 = ft_printf("|%0+*.*zo|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0199\n");
	ret1 = printf("|%0+*.*o|\n", width, precision, number);
	ret2 = ft_printf("|%0+*.*o|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0200\n");
	ret1 = printf("|%0+*.*u|\n", width, precision, number);
	ret2 = ft_printf("|%0+*.*u|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0201\n");
	ret1 = printf("|%0+*.*hhu|\n", width, precision, number);
	ret2 = ft_printf("|%0+*.*hhu|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0202\n");
	ret1 = printf("|%0+*.*hu|\n", width, precision, number);
	ret2 = ft_printf("|%0+*.*hu|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0203\n");
	ret1 = printf("|%0+*.*lu|\n", width, precision, number);
	ret2 = ft_printf("|%0+*.*lu|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0204\n");
	ret1 = printf("|%0+*.*llu|\n", width, precision, number);
	ret2 = ft_printf("|%0+*.*llu|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0205\n");
	ret1 = printf("|%0+*.*ju|\n", width, precision, number);
	ret2 = ft_printf("|%0+*.*ju|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0206\n");
	ret1 = printf("|%0+*.*zu|\n", width, precision, number);
	ret2 = ft_printf("|%0+*.*zu|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0207\n");
	ret1 = printf("|%0+*.*u|\n", width, precision, number);
	ret2 = ft_printf("|%0+*.*u|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0208\n");
	ret1 = printf("|%0+*.*x|\n", width, precision, number);
	ret2 = ft_printf("|%0+*.*x|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0209\n");
	ret1 = printf("|%0+*.*hhx|\n", width, precision, number);
	ret2 = ft_printf("|%0+*.*hhx|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0210\n");
	ret1 = printf("|%0+*.*hx|\n", width, precision, number);
	ret2 = ft_printf("|%0+*.*hx|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0211\n");
	ret1 = printf("|%0+*.*lx|\n", width, precision, number);
	ret2 = ft_printf("|%0+*.*lx|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0212\n");
	ret1 = printf("|%0+*.*llx|\n", width, precision, number);
	ret2 = ft_printf("|%0+*.*llx|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0213\n");
	ret1 = printf("|%0+*.*jx|\n", width, precision, number);
	ret2 = ft_printf("|%0+*.*jx|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0214\n");
	ret1 = printf("|%0+*.*zx|\n", width, precision, number);
	ret2 = ft_printf("|%0+*.*zx|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0215\n");
	ret1 = printf("|%0+*.*x|\n", width, precision, number);
	ret2 = ft_printf("|%0+*.*x|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0216\n");
	ret1 = printf("|%0+*.*X|\n", width, precision, number);
	ret2 = ft_printf("|%0+*.*X|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0217\n");
	ret1 = printf("|%0+*.*hhX|\n", width, precision, number);
	ret2 = ft_printf("|%0+*.*hhX|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0218\n");
	ret1 = printf("|%0+*.*hX|\n", width, precision, number);
	ret2 = ft_printf("|%0+*.*hX|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0219\n");
	ret1 = printf("|%0+*.*lX|\n", width, precision, number);
	ret2 = ft_printf("|%0+*.*lX|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0220\n");
	ret1 = printf("|%0+*.*llX|\n", width, precision, number);
	ret2 = ft_printf("|%0+*.*llX|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0221\n");
	ret1 = printf("|%0+*.*jX|\n", width, precision, number);
	ret2 = ft_printf("|%0+*.*jX|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0222\n");
	ret1 = printf("|%0+*.*zX|\n", width, precision, number);
	ret2 = ft_printf("|%0+*.*zX|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0223\n");
	ret1 = printf("|%0+*.*X|\n", width, precision, number);
	ret2 = ft_printf("|%0+*.*X|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0224\n");
	ret1 = printf("|% 0+*.*o|\n", width, precision, number);
	ret2 = ft_printf("|% 0+*.*o|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0225\n");
	ret1 = printf("|% 0+*.*hho|\n", width, precision, number);
	ret2 = ft_printf("|% 0+*.*hho|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0226\n");
	ret1 = printf("|% 0+*.*ho|\n", width, precision, number);
	ret2 = ft_printf("|% 0+*.*ho|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0227\n");
	ret1 = printf("|% 0+*.*lo|\n", width, precision, number);
	ret2 = ft_printf("|% 0+*.*lo|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0228\n");
	ret1 = printf("|% 0+*.*llo|\n", width, precision, number);
	ret2 = ft_printf("|% 0+*.*llo|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0229\n");
	ret1 = printf("|% 0+*.*jo|\n", width, precision, number);
	ret2 = ft_printf("|% 0+*.*jo|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0230\n");
	ret1 = printf("|% 0+*.*zo|\n", width, precision, number);
	ret2 = ft_printf("|% 0+*.*zo|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0231\n");
	ret1 = printf("|% 0+*.*o|\n", width, precision, number);
	ret2 = ft_printf("|% 0+*.*o|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0232\n");
	ret1 = printf("|% 0+*.*u|\n", width, precision, number);
	ret2 = ft_printf("|% 0+*.*u|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0233\n");
	ret1 = printf("|% 0+*.*hhu|\n", width, precision, number);
	ret2 = ft_printf("|% 0+*.*hhu|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0234\n");
	ret1 = printf("|% 0+*.*hu|\n", width, precision, number);
	ret2 = ft_printf("|% 0+*.*hu|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0235\n");
	ret1 = printf("|% 0+*.*lu|\n", width, precision, number);
	ret2 = ft_printf("|% 0+*.*lu|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0236\n");
	ret1 = printf("|% 0+*.*llu|\n", width, precision, number);
	ret2 = ft_printf("|% 0+*.*llu|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0237\n");
	ret1 = printf("|% 0+*.*ju|\n", width, precision, number);
	ret2 = ft_printf("|% 0+*.*ju|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0238\n");
	ret1 = printf("|% 0+*.*zu|\n", width, precision, number);
	ret2 = ft_printf("|% 0+*.*zu|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0239\n");
	ret1 = printf("|% 0+*.*u|\n", width, precision, number);
	ret2 = ft_printf("|% 0+*.*u|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0240\n");
	ret1 = printf("|% 0+*.*x|\n", width, precision, number);
	ret2 = ft_printf("|% 0+*.*x|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0241\n");
	ret1 = printf("|% 0+*.*hhx|\n", width, precision, number);
	ret2 = ft_printf("|% 0+*.*hhx|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0242\n");
	ret1 = printf("|% 0+*.*hx|\n", width, precision, number);
	ret2 = ft_printf("|% 0+*.*hx|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0243\n");
	ret1 = printf("|% 0+*.*lx|\n", width, precision, number);
	ret2 = ft_printf("|% 0+*.*lx|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0244\n");
	ret1 = printf("|% 0+*.*llx|\n", width, precision, number);
	ret2 = ft_printf("|% 0+*.*llx|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0245\n");
	ret1 = printf("|% 0+*.*jx|\n", width, precision, number);
	ret2 = ft_printf("|% 0+*.*jx|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0246\n");
	ret1 = printf("|% 0+*.*zx|\n", width, precision, number);
	ret2 = ft_printf("|% 0+*.*zx|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0247\n");
	ret1 = printf("|% 0+*.*x|\n", width, precision, number);
	ret2 = ft_printf("|% 0+*.*x|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0248\n");
	ret1 = printf("|% 0+*.*X|\n", width, precision, number);
	ret2 = ft_printf("|% 0+*.*X|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0249\n");
	ret1 = printf("|% 0+*.*hhX|\n", width, precision, number);
	ret2 = ft_printf("|% 0+*.*hhX|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0250\n");
	ret1 = printf("|% 0+*.*hX|\n", width, precision, number);
	ret2 = ft_printf("|% 0+*.*hX|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0251\n");
	ret1 = printf("|% 0+*.*lX|\n", width, precision, number);
	ret2 = ft_printf("|% 0+*.*lX|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0252\n");
	ret1 = printf("|% 0+*.*llX|\n", width, precision, number);
	ret2 = ft_printf("|% 0+*.*llX|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0253\n");
	ret1 = printf("|% 0+*.*jX|\n", width, precision, number);
	ret2 = ft_printf("|% 0+*.*jX|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0254\n");
	ret1 = printf("|% 0+*.*zX|\n", width, precision, number);
	ret2 = ft_printf("|% 0+*.*zX|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0255\n");
	ret1 = printf("|% 0+*.*X|\n", width, precision, number);
	ret2 = ft_printf("|% 0+*.*X|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0256\n");
	ret1 = printf("|%-*.*o|\n", width, precision, number);
	ret2 = ft_printf("|%-*.*o|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0257\n");
	ret1 = printf("|%-*.*hho|\n", width, precision, number);
	ret2 = ft_printf("|%-*.*hho|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0258\n");
	ret1 = printf("|%-*.*ho|\n", width, precision, number);
	ret2 = ft_printf("|%-*.*ho|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0259\n");
	ret1 = printf("|%-*.*lo|\n", width, precision, number);
	ret2 = ft_printf("|%-*.*lo|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0260\n");
	ret1 = printf("|%-*.*llo|\n", width, precision, number);
	ret2 = ft_printf("|%-*.*llo|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0261\n");
	ret1 = printf("|%-*.*jo|\n", width, precision, number);
	ret2 = ft_printf("|%-*.*jo|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0262\n");
	ret1 = printf("|%-*.*zo|\n", width, precision, number);
	ret2 = ft_printf("|%-*.*zo|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0263\n");
	ret1 = printf("|%-*.*o|\n", width, precision, number);
	ret2 = ft_printf("|%-*.*o|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0264\n");
	ret1 = printf("|%-*.*u|\n", width, precision, number);
	ret2 = ft_printf("|%-*.*u|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0265\n");
	ret1 = printf("|%-*.*hhu|\n", width, precision, number);
	ret2 = ft_printf("|%-*.*hhu|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0266\n");
	ret1 = printf("|%-*.*hu|\n", width, precision, number);
	ret2 = ft_printf("|%-*.*hu|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0267\n");
	ret1 = printf("|%-*.*lu|\n", width, precision, number);
	ret2 = ft_printf("|%-*.*lu|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0268\n");
	ret1 = printf("|%-*.*llu|\n", width, precision, number);
	ret2 = ft_printf("|%-*.*llu|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0269\n");
	ret1 = printf("|%-*.*ju|\n", width, precision, number);
	ret2 = ft_printf("|%-*.*ju|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0270\n");
	ret1 = printf("|%-*.*zu|\n", width, precision, number);
	ret2 = ft_printf("|%-*.*zu|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0271\n");
	ret1 = printf("|%-*.*u|\n", width, precision, number);
	ret2 = ft_printf("|%-*.*u|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0272\n");
	ret1 = printf("|%-*.*x|\n", width, precision, number);
	ret2 = ft_printf("|%-*.*x|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0273\n");
	ret1 = printf("|%-*.*hhx|\n", width, precision, number);
	ret2 = ft_printf("|%-*.*hhx|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0274\n");
	ret1 = printf("|%-*.*hx|\n", width, precision, number);
	ret2 = ft_printf("|%-*.*hx|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0275\n");
	ret1 = printf("|%-*.*lx|\n", width, precision, number);
	ret2 = ft_printf("|%-*.*lx|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0276\n");
	ret1 = printf("|%-*.*llx|\n", width, precision, number);
	ret2 = ft_printf("|%-*.*llx|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0277\n");
	ret1 = printf("|%-*.*jx|\n", width, precision, number);
	ret2 = ft_printf("|%-*.*jx|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0278\n");
	ret1 = printf("|%-*.*zx|\n", width, precision, number);
	ret2 = ft_printf("|%-*.*zx|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0279\n");
	ret1 = printf("|%-*.*x|\n", width, precision, number);
	ret2 = ft_printf("|%-*.*x|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0280\n");
	ret1 = printf("|%-*.*X|\n", width, precision, number);
	ret2 = ft_printf("|%-*.*X|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0281\n");
	ret1 = printf("|%-*.*hhX|\n", width, precision, number);
	ret2 = ft_printf("|%-*.*hhX|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0282\n");
	ret1 = printf("|%-*.*hX|\n", width, precision, number);
	ret2 = ft_printf("|%-*.*hX|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0283\n");
	ret1 = printf("|%-*.*lX|\n", width, precision, number);
	ret2 = ft_printf("|%-*.*lX|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0284\n");
	ret1 = printf("|%-*.*llX|\n", width, precision, number);
	ret2 = ft_printf("|%-*.*llX|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0285\n");
	ret1 = printf("|%-*.*jX|\n", width, precision, number);
	ret2 = ft_printf("|%-*.*jX|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0286\n");
	ret1 = printf("|%-*.*zX|\n", width, precision, number);
	ret2 = ft_printf("|%-*.*zX|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0287\n");
	ret1 = printf("|%-*.*X|\n", width, precision, number);
	ret2 = ft_printf("|%-*.*X|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0288\n");
	ret1 = printf("|% -*.*o|\n", width, precision, number);
	ret2 = ft_printf("|% -*.*o|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0289\n");
	ret1 = printf("|% -*.*hho|\n", width, precision, number);
	ret2 = ft_printf("|% -*.*hho|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0290\n");
	ret1 = printf("|% -*.*ho|\n", width, precision, number);
	ret2 = ft_printf("|% -*.*ho|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0291\n");
	ret1 = printf("|% -*.*lo|\n", width, precision, number);
	ret2 = ft_printf("|% -*.*lo|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0292\n");
	ret1 = printf("|% -*.*llo|\n", width, precision, number);
	ret2 = ft_printf("|% -*.*llo|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0293\n");
	ret1 = printf("|% -*.*jo|\n", width, precision, number);
	ret2 = ft_printf("|% -*.*jo|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0294\n");
	ret1 = printf("|% -*.*zo|\n", width, precision, number);
	ret2 = ft_printf("|% -*.*zo|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0295\n");
	ret1 = printf("|% -*.*o|\n", width, precision, number);
	ret2 = ft_printf("|% -*.*o|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0296\n");
	ret1 = printf("|% -*.*u|\n", width, precision, number);
	ret2 = ft_printf("|% -*.*u|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0297\n");
	ret1 = printf("|% -*.*hhu|\n", width, precision, number);
	ret2 = ft_printf("|% -*.*hhu|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0298\n");
	ret1 = printf("|% -*.*hu|\n", width, precision, number);
	ret2 = ft_printf("|% -*.*hu|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0299\n");
	ret1 = printf("|% -*.*lu|\n", width, precision, number);
	ret2 = ft_printf("|% -*.*lu|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0300\n");
	ret1 = printf("|% -*.*llu|\n", width, precision, number);
	ret2 = ft_printf("|% -*.*llu|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0301\n");
	ret1 = printf("|% -*.*ju|\n", width, precision, number);
	ret2 = ft_printf("|% -*.*ju|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0302\n");
	ret1 = printf("|% -*.*zu|\n", width, precision, number);
	ret2 = ft_printf("|% -*.*zu|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0303\n");
	ret1 = printf("|% -*.*u|\n", width, precision, number);
	ret2 = ft_printf("|% -*.*u|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0304\n");
	ret1 = printf("|% -*.*x|\n", width, precision, number);
	ret2 = ft_printf("|% -*.*x|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0305\n");
	ret1 = printf("|% -*.*hhx|\n", width, precision, number);
	ret2 = ft_printf("|% -*.*hhx|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0306\n");
	ret1 = printf("|% -*.*hx|\n", width, precision, number);
	ret2 = ft_printf("|% -*.*hx|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0307\n");
	ret1 = printf("|% -*.*lx|\n", width, precision, number);
	ret2 = ft_printf("|% -*.*lx|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0308\n");
	ret1 = printf("|% -*.*llx|\n", width, precision, number);
	ret2 = ft_printf("|% -*.*llx|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0309\n");
	ret1 = printf("|% -*.*jx|\n", width, precision, number);
	ret2 = ft_printf("|% -*.*jx|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0310\n");
	ret1 = printf("|% -*.*zx|\n", width, precision, number);
	ret2 = ft_printf("|% -*.*zx|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0311\n");
	ret1 = printf("|% -*.*x|\n", width, precision, number);
	ret2 = ft_printf("|% -*.*x|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0312\n");
	ret1 = printf("|% -*.*X|\n", width, precision, number);
	ret2 = ft_printf("|% -*.*X|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0313\n");
	ret1 = printf("|% -*.*hhX|\n", width, precision, number);
	ret2 = ft_printf("|% -*.*hhX|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0314\n");
	ret1 = printf("|% -*.*hX|\n", width, precision, number);
	ret2 = ft_printf("|% -*.*hX|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0315\n");
	ret1 = printf("|% -*.*lX|\n", width, precision, number);
	ret2 = ft_printf("|% -*.*lX|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0316\n");
	ret1 = printf("|% -*.*llX|\n", width, precision, number);
	ret2 = ft_printf("|% -*.*llX|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0317\n");
	ret1 = printf("|% -*.*jX|\n", width, precision, number);
	ret2 = ft_printf("|% -*.*jX|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0318\n");
	ret1 = printf("|% -*.*zX|\n", width, precision, number);
	ret2 = ft_printf("|% -*.*zX|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0319\n");
	ret1 = printf("|% -*.*X|\n", width, precision, number);
	ret2 = ft_printf("|% -*.*X|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0320\n");
	ret1 = printf("|%0-*.*o|\n", width, precision, number);
	ret2 = ft_printf("|%0-*.*o|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0321\n");
	ret1 = printf("|%0-*.*hho|\n", width, precision, number);
	ret2 = ft_printf("|%0-*.*hho|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0322\n");
	ret1 = printf("|%0-*.*ho|\n", width, precision, number);
	ret2 = ft_printf("|%0-*.*ho|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0323\n");
	ret1 = printf("|%0-*.*lo|\n", width, precision, number);
	ret2 = ft_printf("|%0-*.*lo|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0324\n");
	ret1 = printf("|%0-*.*llo|\n", width, precision, number);
	ret2 = ft_printf("|%0-*.*llo|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0325\n");
	ret1 = printf("|%0-*.*jo|\n", width, precision, number);
	ret2 = ft_printf("|%0-*.*jo|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0326\n");
	ret1 = printf("|%0-*.*zo|\n", width, precision, number);
	ret2 = ft_printf("|%0-*.*zo|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0327\n");
	ret1 = printf("|%0-*.*o|\n", width, precision, number);
	ret2 = ft_printf("|%0-*.*o|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0328\n");
	ret1 = printf("|%0-*.*u|\n", width, precision, number);
	ret2 = ft_printf("|%0-*.*u|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0329\n");
	ret1 = printf("|%0-*.*hhu|\n", width, precision, number);
	ret2 = ft_printf("|%0-*.*hhu|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0330\n");
	ret1 = printf("|%0-*.*hu|\n", width, precision, number);
	ret2 = ft_printf("|%0-*.*hu|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0331\n");
	ret1 = printf("|%0-*.*lu|\n", width, precision, number);
	ret2 = ft_printf("|%0-*.*lu|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0332\n");
	ret1 = printf("|%0-*.*llu|\n", width, precision, number);
	ret2 = ft_printf("|%0-*.*llu|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0333\n");
	ret1 = printf("|%0-*.*ju|\n", width, precision, number);
	ret2 = ft_printf("|%0-*.*ju|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0334\n");
	ret1 = printf("|%0-*.*zu|\n", width, precision, number);
	ret2 = ft_printf("|%0-*.*zu|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0335\n");
	ret1 = printf("|%0-*.*u|\n", width, precision, number);
	ret2 = ft_printf("|%0-*.*u|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0336\n");
	ret1 = printf("|%0-*.*x|\n", width, precision, number);
	ret2 = ft_printf("|%0-*.*x|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0337\n");
	ret1 = printf("|%0-*.*hhx|\n", width, precision, number);
	ret2 = ft_printf("|%0-*.*hhx|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0338\n");
	ret1 = printf("|%0-*.*hx|\n", width, precision, number);
	ret2 = ft_printf("|%0-*.*hx|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0339\n");
	ret1 = printf("|%0-*.*lx|\n", width, precision, number);
	ret2 = ft_printf("|%0-*.*lx|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0340\n");
	ret1 = printf("|%0-*.*llx|\n", width, precision, number);
	ret2 = ft_printf("|%0-*.*llx|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0341\n");
	ret1 = printf("|%0-*.*jx|\n", width, precision, number);
	ret2 = ft_printf("|%0-*.*jx|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0342\n");
	ret1 = printf("|%0-*.*zx|\n", width, precision, number);
	ret2 = ft_printf("|%0-*.*zx|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0343\n");
	ret1 = printf("|%0-*.*x|\n", width, precision, number);
	ret2 = ft_printf("|%0-*.*x|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0344\n");
	ret1 = printf("|%0-*.*X|\n", width, precision, number);
	ret2 = ft_printf("|%0-*.*X|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0345\n");
	ret1 = printf("|%0-*.*hhX|\n", width, precision, number);
	ret2 = ft_printf("|%0-*.*hhX|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0346\n");
	ret1 = printf("|%0-*.*hX|\n", width, precision, number);
	ret2 = ft_printf("|%0-*.*hX|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0347\n");
	ret1 = printf("|%0-*.*lX|\n", width, precision, number);
	ret2 = ft_printf("|%0-*.*lX|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0348\n");
	ret1 = printf("|%0-*.*llX|\n", width, precision, number);
	ret2 = ft_printf("|%0-*.*llX|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0349\n");
	ret1 = printf("|%0-*.*jX|\n", width, precision, number);
	ret2 = ft_printf("|%0-*.*jX|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0350\n");
	ret1 = printf("|%0-*.*zX|\n", width, precision, number);
	ret2 = ft_printf("|%0-*.*zX|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0351\n");
	ret1 = printf("|%0-*.*X|\n", width, precision, number);
	ret2 = ft_printf("|%0-*.*X|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0352\n");
	ret1 = printf("|% 0-*.*o|\n", width, precision, number);
	ret2 = ft_printf("|% 0-*.*o|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0353\n");
	ret1 = printf("|% 0-*.*hho|\n", width, precision, number);
	ret2 = ft_printf("|% 0-*.*hho|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0354\n");
	ret1 = printf("|% 0-*.*ho|\n", width, precision, number);
	ret2 = ft_printf("|% 0-*.*ho|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0355\n");
	ret1 = printf("|% 0-*.*lo|\n", width, precision, number);
	ret2 = ft_printf("|% 0-*.*lo|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0356\n");
	ret1 = printf("|% 0-*.*llo|\n", width, precision, number);
	ret2 = ft_printf("|% 0-*.*llo|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0357\n");
	ret1 = printf("|% 0-*.*jo|\n", width, precision, number);
	ret2 = ft_printf("|% 0-*.*jo|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0358\n");
	ret1 = printf("|% 0-*.*zo|\n", width, precision, number);
	ret2 = ft_printf("|% 0-*.*zo|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0359\n");
	ret1 = printf("|% 0-*.*o|\n", width, precision, number);
	ret2 = ft_printf("|% 0-*.*o|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0360\n");
	ret1 = printf("|% 0-*.*u|\n", width, precision, number);
	ret2 = ft_printf("|% 0-*.*u|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0361\n");
	ret1 = printf("|% 0-*.*hhu|\n", width, precision, number);
	ret2 = ft_printf("|% 0-*.*hhu|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0362\n");
	ret1 = printf("|% 0-*.*hu|\n", width, precision, number);
	ret2 = ft_printf("|% 0-*.*hu|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0363\n");
	ret1 = printf("|% 0-*.*lu|\n", width, precision, number);
	ret2 = ft_printf("|% 0-*.*lu|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0364\n");
	ret1 = printf("|% 0-*.*llu|\n", width, precision, number);
	ret2 = ft_printf("|% 0-*.*llu|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0365\n");
	ret1 = printf("|% 0-*.*ju|\n", width, precision, number);
	ret2 = ft_printf("|% 0-*.*ju|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0366\n");
	ret1 = printf("|% 0-*.*zu|\n", width, precision, number);
	ret2 = ft_printf("|% 0-*.*zu|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0367\n");
	ret1 = printf("|% 0-*.*u|\n", width, precision, number);
	ret2 = ft_printf("|% 0-*.*u|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0368\n");
	ret1 = printf("|% 0-*.*x|\n", width, precision, number);
	ret2 = ft_printf("|% 0-*.*x|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0369\n");
	ret1 = printf("|% 0-*.*hhx|\n", width, precision, number);
	ret2 = ft_printf("|% 0-*.*hhx|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0370\n");
	ret1 = printf("|% 0-*.*hx|\n", width, precision, number);
	ret2 = ft_printf("|% 0-*.*hx|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0371\n");
	ret1 = printf("|% 0-*.*lx|\n", width, precision, number);
	ret2 = ft_printf("|% 0-*.*lx|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0372\n");
	ret1 = printf("|% 0-*.*llx|\n", width, precision, number);
	ret2 = ft_printf("|% 0-*.*llx|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0373\n");
	ret1 = printf("|% 0-*.*jx|\n", width, precision, number);
	ret2 = ft_printf("|% 0-*.*jx|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0374\n");
	ret1 = printf("|% 0-*.*zx|\n", width, precision, number);
	ret2 = ft_printf("|% 0-*.*zx|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0375\n");
	ret1 = printf("|% 0-*.*x|\n", width, precision, number);
	ret2 = ft_printf("|% 0-*.*x|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0376\n");
	ret1 = printf("|% 0-*.*X|\n", width, precision, number);
	ret2 = ft_printf("|% 0-*.*X|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0377\n");
	ret1 = printf("|% 0-*.*hhX|\n", width, precision, number);
	ret2 = ft_printf("|% 0-*.*hhX|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0378\n");
	ret1 = printf("|% 0-*.*hX|\n", width, precision, number);
	ret2 = ft_printf("|% 0-*.*hX|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0379\n");
	ret1 = printf("|% 0-*.*lX|\n", width, precision, number);
	ret2 = ft_printf("|% 0-*.*lX|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0380\n");
	ret1 = printf("|% 0-*.*llX|\n", width, precision, number);
	ret2 = ft_printf("|% 0-*.*llX|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0381\n");
	ret1 = printf("|% 0-*.*jX|\n", width, precision, number);
	ret2 = ft_printf("|% 0-*.*jX|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0382\n");
	ret1 = printf("|% 0-*.*zX|\n", width, precision, number);
	ret2 = ft_printf("|% 0-*.*zX|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0383\n");
	ret1 = printf("|% 0-*.*X|\n", width, precision, number);
	ret2 = ft_printf("|% 0-*.*X|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0384\n");
	ret1 = printf("|%+-*.*o|\n", width, precision, number);
	ret2 = ft_printf("|%+-*.*o|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0385\n");
	ret1 = printf("|%+-*.*hho|\n", width, precision, number);
	ret2 = ft_printf("|%+-*.*hho|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0386\n");
	ret1 = printf("|%+-*.*ho|\n", width, precision, number);
	ret2 = ft_printf("|%+-*.*ho|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0387\n");
	ret1 = printf("|%+-*.*lo|\n", width, precision, number);
	ret2 = ft_printf("|%+-*.*lo|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0388\n");
	ret1 = printf("|%+-*.*llo|\n", width, precision, number);
	ret2 = ft_printf("|%+-*.*llo|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0389\n");
	ret1 = printf("|%+-*.*jo|\n", width, precision, number);
	ret2 = ft_printf("|%+-*.*jo|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0390\n");
	ret1 = printf("|%+-*.*zo|\n", width, precision, number);
	ret2 = ft_printf("|%+-*.*zo|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0391\n");
	ret1 = printf("|%+-*.*o|\n", width, precision, number);
	ret2 = ft_printf("|%+-*.*o|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0392\n");
	ret1 = printf("|%+-*.*u|\n", width, precision, number);
	ret2 = ft_printf("|%+-*.*u|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0393\n");
	ret1 = printf("|%+-*.*hhu|\n", width, precision, number);
	ret2 = ft_printf("|%+-*.*hhu|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0394\n");
	ret1 = printf("|%+-*.*hu|\n", width, precision, number);
	ret2 = ft_printf("|%+-*.*hu|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0395\n");
	ret1 = printf("|%+-*.*lu|\n", width, precision, number);
	ret2 = ft_printf("|%+-*.*lu|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0396\n");
	ret1 = printf("|%+-*.*llu|\n", width, precision, number);
	ret2 = ft_printf("|%+-*.*llu|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0397\n");
	ret1 = printf("|%+-*.*ju|\n", width, precision, number);
	ret2 = ft_printf("|%+-*.*ju|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0398\n");
	ret1 = printf("|%+-*.*zu|\n", width, precision, number);
	ret2 = ft_printf("|%+-*.*zu|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0399\n");
	ret1 = printf("|%+-*.*u|\n", width, precision, number);
	ret2 = ft_printf("|%+-*.*u|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0400\n");
	ret1 = printf("|%+-*.*x|\n", width, precision, number);
	ret2 = ft_printf("|%+-*.*x|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0401\n");
	ret1 = printf("|%+-*.*hhx|\n", width, precision, number);
	ret2 = ft_printf("|%+-*.*hhx|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0402\n");
	ret1 = printf("|%+-*.*hx|\n", width, precision, number);
	ret2 = ft_printf("|%+-*.*hx|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0403\n");
	ret1 = printf("|%+-*.*lx|\n", width, precision, number);
	ret2 = ft_printf("|%+-*.*lx|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0404\n");
	ret1 = printf("|%+-*.*llx|\n", width, precision, number);
	ret2 = ft_printf("|%+-*.*llx|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0405\n");
	ret1 = printf("|%+-*.*jx|\n", width, precision, number);
	ret2 = ft_printf("|%+-*.*jx|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0406\n");
	ret1 = printf("|%+-*.*zx|\n", width, precision, number);
	ret2 = ft_printf("|%+-*.*zx|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0407\n");
	ret1 = printf("|%+-*.*x|\n", width, precision, number);
	ret2 = ft_printf("|%+-*.*x|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0408\n");
	ret1 = printf("|%+-*.*X|\n", width, precision, number);
	ret2 = ft_printf("|%+-*.*X|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0409\n");
	ret1 = printf("|%+-*.*hhX|\n", width, precision, number);
	ret2 = ft_printf("|%+-*.*hhX|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0410\n");
	ret1 = printf("|%+-*.*hX|\n", width, precision, number);
	ret2 = ft_printf("|%+-*.*hX|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0411\n");
	ret1 = printf("|%+-*.*lX|\n", width, precision, number);
	ret2 = ft_printf("|%+-*.*lX|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0412\n");
	ret1 = printf("|%+-*.*llX|\n", width, precision, number);
	ret2 = ft_printf("|%+-*.*llX|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0413\n");
	ret1 = printf("|%+-*.*jX|\n", width, precision, number);
	ret2 = ft_printf("|%+-*.*jX|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0414\n");
	ret1 = printf("|%+-*.*zX|\n", width, precision, number);
	ret2 = ft_printf("|%+-*.*zX|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0415\n");
	ret1 = printf("|%+-*.*X|\n", width, precision, number);
	ret2 = ft_printf("|%+-*.*X|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0416\n");
	ret1 = printf("|% +-*.*o|\n", width, precision, number);
	ret2 = ft_printf("|% +-*.*o|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0417\n");
	ret1 = printf("|% +-*.*hho|\n", width, precision, number);
	ret2 = ft_printf("|% +-*.*hho|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0418\n");
	ret1 = printf("|% +-*.*ho|\n", width, precision, number);
	ret2 = ft_printf("|% +-*.*ho|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0419\n");
	ret1 = printf("|% +-*.*lo|\n", width, precision, number);
	ret2 = ft_printf("|% +-*.*lo|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0420\n");
	ret1 = printf("|% +-*.*llo|\n", width, precision, number);
	ret2 = ft_printf("|% +-*.*llo|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0421\n");
	ret1 = printf("|% +-*.*jo|\n", width, precision, number);
	ret2 = ft_printf("|% +-*.*jo|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0422\n");
	ret1 = printf("|% +-*.*zo|\n", width, precision, number);
	ret2 = ft_printf("|% +-*.*zo|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0423\n");
	ret1 = printf("|% +-*.*o|\n", width, precision, number);
	ret2 = ft_printf("|% +-*.*o|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0424\n");
	ret1 = printf("|% +-*.*u|\n", width, precision, number);
	ret2 = ft_printf("|% +-*.*u|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0425\n");
	ret1 = printf("|% +-*.*hhu|\n", width, precision, number);
	ret2 = ft_printf("|% +-*.*hhu|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0426\n");
	ret1 = printf("|% +-*.*hu|\n", width, precision, number);
	ret2 = ft_printf("|% +-*.*hu|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0427\n");
	ret1 = printf("|% +-*.*lu|\n", width, precision, number);
	ret2 = ft_printf("|% +-*.*lu|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0428\n");
	ret1 = printf("|% +-*.*llu|\n", width, precision, number);
	ret2 = ft_printf("|% +-*.*llu|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0429\n");
	ret1 = printf("|% +-*.*ju|\n", width, precision, number);
	ret2 = ft_printf("|% +-*.*ju|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0430\n");
	ret1 = printf("|% +-*.*zu|\n", width, precision, number);
	ret2 = ft_printf("|% +-*.*zu|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0431\n");
	ret1 = printf("|% +-*.*u|\n", width, precision, number);
	ret2 = ft_printf("|% +-*.*u|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0432\n");
	ret1 = printf("|% +-*.*x|\n", width, precision, number);
	ret2 = ft_printf("|% +-*.*x|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0433\n");
	ret1 = printf("|% +-*.*hhx|\n", width, precision, number);
	ret2 = ft_printf("|% +-*.*hhx|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0434\n");
	ret1 = printf("|% +-*.*hx|\n", width, precision, number);
	ret2 = ft_printf("|% +-*.*hx|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0435\n");
	ret1 = printf("|% +-*.*lx|\n", width, precision, number);
	ret2 = ft_printf("|% +-*.*lx|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0436\n");
	ret1 = printf("|% +-*.*llx|\n", width, precision, number);
	ret2 = ft_printf("|% +-*.*llx|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0437\n");
	ret1 = printf("|% +-*.*jx|\n", width, precision, number);
	ret2 = ft_printf("|% +-*.*jx|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0438\n");
	ret1 = printf("|% +-*.*zx|\n", width, precision, number);
	ret2 = ft_printf("|% +-*.*zx|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0439\n");
	ret1 = printf("|% +-*.*x|\n", width, precision, number);
	ret2 = ft_printf("|% +-*.*x|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0440\n");
	ret1 = printf("|% +-*.*X|\n", width, precision, number);
	ret2 = ft_printf("|% +-*.*X|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0441\n");
	ret1 = printf("|% +-*.*hhX|\n", width, precision, number);
	ret2 = ft_printf("|% +-*.*hhX|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0442\n");
	ret1 = printf("|% +-*.*hX|\n", width, precision, number);
	ret2 = ft_printf("|% +-*.*hX|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0443\n");
	ret1 = printf("|% +-*.*lX|\n", width, precision, number);
	ret2 = ft_printf("|% +-*.*lX|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0444\n");
	ret1 = printf("|% +-*.*llX|\n", width, precision, number);
	ret2 = ft_printf("|% +-*.*llX|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0445\n");
	ret1 = printf("|% +-*.*jX|\n", width, precision, number);
	ret2 = ft_printf("|% +-*.*jX|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0446\n");
	ret1 = printf("|% +-*.*zX|\n", width, precision, number);
	ret2 = ft_printf("|% +-*.*zX|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0447\n");
	ret1 = printf("|% +-*.*X|\n", width, precision, number);
	ret2 = ft_printf("|% +-*.*X|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0448\n");
	ret1 = printf("|%0+-*.*o|\n", width, precision, number);
	ret2 = ft_printf("|%0+-*.*o|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0449\n");
	ret1 = printf("|%0+-*.*hho|\n", width, precision, number);
	ret2 = ft_printf("|%0+-*.*hho|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0450\n");
	ret1 = printf("|%0+-*.*ho|\n", width, precision, number);
	ret2 = ft_printf("|%0+-*.*ho|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0451\n");
	ret1 = printf("|%0+-*.*lo|\n", width, precision, number);
	ret2 = ft_printf("|%0+-*.*lo|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0452\n");
	ret1 = printf("|%0+-*.*llo|\n", width, precision, number);
	ret2 = ft_printf("|%0+-*.*llo|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0453\n");
	ret1 = printf("|%0+-*.*jo|\n", width, precision, number);
	ret2 = ft_printf("|%0+-*.*jo|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0454\n");
	ret1 = printf("|%0+-*.*zo|\n", width, precision, number);
	ret2 = ft_printf("|%0+-*.*zo|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0455\n");
	ret1 = printf("|%0+-*.*o|\n", width, precision, number);
	ret2 = ft_printf("|%0+-*.*o|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0456\n");
	ret1 = printf("|%0+-*.*u|\n", width, precision, number);
	ret2 = ft_printf("|%0+-*.*u|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0457\n");
	ret1 = printf("|%0+-*.*hhu|\n", width, precision, number);
	ret2 = ft_printf("|%0+-*.*hhu|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0458\n");
	ret1 = printf("|%0+-*.*hu|\n", width, precision, number);
	ret2 = ft_printf("|%0+-*.*hu|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0459\n");
	ret1 = printf("|%0+-*.*lu|\n", width, precision, number);
	ret2 = ft_printf("|%0+-*.*lu|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0460\n");
	ret1 = printf("|%0+-*.*llu|\n", width, precision, number);
	ret2 = ft_printf("|%0+-*.*llu|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0461\n");
	ret1 = printf("|%0+-*.*ju|\n", width, precision, number);
	ret2 = ft_printf("|%0+-*.*ju|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0462\n");
	ret1 = printf("|%0+-*.*zu|\n", width, precision, number);
	ret2 = ft_printf("|%0+-*.*zu|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0463\n");
	ret1 = printf("|%0+-*.*u|\n", width, precision, number);
	ret2 = ft_printf("|%0+-*.*u|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0464\n");
	ret1 = printf("|%0+-*.*x|\n", width, precision, number);
	ret2 = ft_printf("|%0+-*.*x|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0465\n");
	ret1 = printf("|%0+-*.*hhx|\n", width, precision, number);
	ret2 = ft_printf("|%0+-*.*hhx|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0466\n");
	ret1 = printf("|%0+-*.*hx|\n", width, precision, number);
	ret2 = ft_printf("|%0+-*.*hx|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0467\n");
	ret1 = printf("|%0+-*.*lx|\n", width, precision, number);
	ret2 = ft_printf("|%0+-*.*lx|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0468\n");
	ret1 = printf("|%0+-*.*llx|\n", width, precision, number);
	ret2 = ft_printf("|%0+-*.*llx|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0469\n");
	ret1 = printf("|%0+-*.*jx|\n", width, precision, number);
	ret2 = ft_printf("|%0+-*.*jx|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0470\n");
	ret1 = printf("|%0+-*.*zx|\n", width, precision, number);
	ret2 = ft_printf("|%0+-*.*zx|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0471\n");
	ret1 = printf("|%0+-*.*x|\n", width, precision, number);
	ret2 = ft_printf("|%0+-*.*x|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0472\n");
	ret1 = printf("|%0+-*.*X|\n", width, precision, number);
	ret2 = ft_printf("|%0+-*.*X|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0473\n");
	ret1 = printf("|%0+-*.*hhX|\n", width, precision, number);
	ret2 = ft_printf("|%0+-*.*hhX|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0474\n");
	ret1 = printf("|%0+-*.*hX|\n", width, precision, number);
	ret2 = ft_printf("|%0+-*.*hX|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0475\n");
	ret1 = printf("|%0+-*.*lX|\n", width, precision, number);
	ret2 = ft_printf("|%0+-*.*lX|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0476\n");
	ret1 = printf("|%0+-*.*llX|\n", width, precision, number);
	ret2 = ft_printf("|%0+-*.*llX|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0477\n");
	ret1 = printf("|%0+-*.*jX|\n", width, precision, number);
	ret2 = ft_printf("|%0+-*.*jX|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0478\n");
	ret1 = printf("|%0+-*.*zX|\n", width, precision, number);
	ret2 = ft_printf("|%0+-*.*zX|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0479\n");
	ret1 = printf("|%0+-*.*X|\n", width, precision, number);
	ret2 = ft_printf("|%0+-*.*X|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0480\n");
	ret1 = printf("|% 0+-*.*o|\n", width, precision, number);
	ret2 = ft_printf("|% 0+-*.*o|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0481\n");
	ret1 = printf("|% 0+-*.*hho|\n", width, precision, number);
	ret2 = ft_printf("|% 0+-*.*hho|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0482\n");
	ret1 = printf("|% 0+-*.*ho|\n", width, precision, number);
	ret2 = ft_printf("|% 0+-*.*ho|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0483\n");
	ret1 = printf("|% 0+-*.*lo|\n", width, precision, number);
	ret2 = ft_printf("|% 0+-*.*lo|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0484\n");
	ret1 = printf("|% 0+-*.*llo|\n", width, precision, number);
	ret2 = ft_printf("|% 0+-*.*llo|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0485\n");
	ret1 = printf("|% 0+-*.*jo|\n", width, precision, number);
	ret2 = ft_printf("|% 0+-*.*jo|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0486\n");
	ret1 = printf("|% 0+-*.*zo|\n", width, precision, number);
	ret2 = ft_printf("|% 0+-*.*zo|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0487\n");
	ret1 = printf("|% 0+-*.*o|\n", width, precision, number);
	ret2 = ft_printf("|% 0+-*.*o|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0488\n");
	ret1 = printf("|% 0+-*.*u|\n", width, precision, number);
	ret2 = ft_printf("|% 0+-*.*u|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0489\n");
	ret1 = printf("|% 0+-*.*hhu|\n", width, precision, number);
	ret2 = ft_printf("|% 0+-*.*hhu|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0490\n");
	ret1 = printf("|% 0+-*.*hu|\n", width, precision, number);
	ret2 = ft_printf("|% 0+-*.*hu|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0491\n");
	ret1 = printf("|% 0+-*.*lu|\n", width, precision, number);
	ret2 = ft_printf("|% 0+-*.*lu|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0492\n");
	ret1 = printf("|% 0+-*.*llu|\n", width, precision, number);
	ret2 = ft_printf("|% 0+-*.*llu|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0493\n");
	ret1 = printf("|% 0+-*.*ju|\n", width, precision, number);
	ret2 = ft_printf("|% 0+-*.*ju|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0494\n");
	ret1 = printf("|% 0+-*.*zu|\n", width, precision, number);
	ret2 = ft_printf("|% 0+-*.*zu|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0495\n");
	ret1 = printf("|% 0+-*.*u|\n", width, precision, number);
	ret2 = ft_printf("|% 0+-*.*u|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0496\n");
	ret1 = printf("|% 0+-*.*x|\n", width, precision, number);
	ret2 = ft_printf("|% 0+-*.*x|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0497\n");
	ret1 = printf("|% 0+-*.*hhx|\n", width, precision, number);
	ret2 = ft_printf("|% 0+-*.*hhx|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0498\n");
	ret1 = printf("|% 0+-*.*hx|\n", width, precision, number);
	ret2 = ft_printf("|% 0+-*.*hx|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0499\n");
	ret1 = printf("|% 0+-*.*lx|\n", width, precision, number);
	ret2 = ft_printf("|% 0+-*.*lx|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0500\n");
	ret1 = printf("|% 0+-*.*llx|\n", width, precision, number);
	ret2 = ft_printf("|% 0+-*.*llx|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0501\n");
	ret1 = printf("|% 0+-*.*jx|\n", width, precision, number);
	ret2 = ft_printf("|% 0+-*.*jx|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0502\n");
	ret1 = printf("|% 0+-*.*zx|\n", width, precision, number);
	ret2 = ft_printf("|% 0+-*.*zx|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0503\n");
	ret1 = printf("|% 0+-*.*x|\n", width, precision, number);
	ret2 = ft_printf("|% 0+-*.*x|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0504\n");
	ret1 = printf("|% 0+-*.*X|\n", width, precision, number);
	ret2 = ft_printf("|% 0+-*.*X|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0505\n");
	ret1 = printf("|% 0+-*.*hhX|\n", width, precision, number);
	ret2 = ft_printf("|% 0+-*.*hhX|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0506\n");
	ret1 = printf("|% 0+-*.*hX|\n", width, precision, number);
	ret2 = ft_printf("|% 0+-*.*hX|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0507\n");
	ret1 = printf("|% 0+-*.*lX|\n", width, precision, number);
	ret2 = ft_printf("|% 0+-*.*lX|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0508\n");
	ret1 = printf("|% 0+-*.*llX|\n", width, precision, number);
	ret2 = ft_printf("|% 0+-*.*llX|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0509\n");
	ret1 = printf("|% 0+-*.*jX|\n", width, precision, number);
	ret2 = ft_printf("|% 0+-*.*jX|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0510\n");
	ret1 = printf("|% 0+-*.*zX|\n", width, precision, number);
	ret2 = ft_printf("|% 0+-*.*zX|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0511\n");
	ret1 = printf("|% 0+-*.*X|\n", width, precision, number);
	ret2 = ft_printf("|% 0+-*.*X|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0512\n");
	ret1 = printf("|%#*.*o|\n", width, precision, number);
	ret2 = ft_printf("|%#*.*o|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0513\n");
	ret1 = printf("|%#*.*hho|\n", width, precision, number);
	ret2 = ft_printf("|%#*.*hho|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0514\n");
	ret1 = printf("|%#*.*ho|\n", width, precision, number);
	ret2 = ft_printf("|%#*.*ho|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0515\n");
	ret1 = printf("|%#*.*lo|\n", width, precision, number);
	ret2 = ft_printf("|%#*.*lo|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0516\n");
	ret1 = printf("|%#*.*llo|\n", width, precision, number);
	ret2 = ft_printf("|%#*.*llo|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0517\n");
	ret1 = printf("|%#*.*jo|\n", width, precision, number);
	ret2 = ft_printf("|%#*.*jo|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0518\n");
	ret1 = printf("|%#*.*zo|\n", width, precision, number);
	ret2 = ft_printf("|%#*.*zo|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0519\n");
	ret1 = printf("|%#*.*o|\n", width, precision, number);
	ret2 = ft_printf("|%#*.*o|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0520\n");
	ret1 = printf("|%#*.*u|\n", width, precision, number);
	ret2 = ft_printf("|%#*.*u|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0521\n");
	ret1 = printf("|%#*.*hhu|\n", width, precision, number);
	ret2 = ft_printf("|%#*.*hhu|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0522\n");
	ret1 = printf("|%#*.*hu|\n", width, precision, number);
	ret2 = ft_printf("|%#*.*hu|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0523\n");
	ret1 = printf("|%#*.*lu|\n", width, precision, number);
	ret2 = ft_printf("|%#*.*lu|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0524\n");
	ret1 = printf("|%#*.*llu|\n", width, precision, number);
	ret2 = ft_printf("|%#*.*llu|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0525\n");
	ret1 = printf("|%#*.*ju|\n", width, precision, number);
	ret2 = ft_printf("|%#*.*ju|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0526\n");
	ret1 = printf("|%#*.*zu|\n", width, precision, number);
	ret2 = ft_printf("|%#*.*zu|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0527\n");
	ret1 = printf("|%#*.*u|\n", width, precision, number);
	ret2 = ft_printf("|%#*.*u|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0528\n");
	ret1 = printf("|%#*.*x|\n", width, precision, number);
	ret2 = ft_printf("|%#*.*x|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0529\n");
	ret1 = printf("|%#*.*hhx|\n", width, precision, number);
	ret2 = ft_printf("|%#*.*hhx|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0530\n");
	ret1 = printf("|%#*.*hx|\n", width, precision, number);
	ret2 = ft_printf("|%#*.*hx|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0531\n");
	ret1 = printf("|%#*.*lx|\n", width, precision, number);
	ret2 = ft_printf("|%#*.*lx|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0532\n");
	ret1 = printf("|%#*.*llx|\n", width, precision, number);
	ret2 = ft_printf("|%#*.*llx|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0533\n");
	ret1 = printf("|%#*.*jx|\n", width, precision, number);
	ret2 = ft_printf("|%#*.*jx|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0534\n");
	ret1 = printf("|%#*.*zx|\n", width, precision, number);
	ret2 = ft_printf("|%#*.*zx|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0535\n");
	ret1 = printf("|%#*.*x|\n", width, precision, number);
	ret2 = ft_printf("|%#*.*x|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0536\n");
	ret1 = printf("|%#*.*X|\n", width, precision, number);
	ret2 = ft_printf("|%#*.*X|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0537\n");
	ret1 = printf("|%#*.*hhX|\n", width, precision, number);
	ret2 = ft_printf("|%#*.*hhX|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0538\n");
	ret1 = printf("|%#*.*hX|\n", width, precision, number);
	ret2 = ft_printf("|%#*.*hX|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0539\n");
	ret1 = printf("|%#*.*lX|\n", width, precision, number);
	ret2 = ft_printf("|%#*.*lX|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0540\n");
	ret1 = printf("|%#*.*llX|\n", width, precision, number);
	ret2 = ft_printf("|%#*.*llX|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0541\n");
	ret1 = printf("|%#*.*jX|\n", width, precision, number);
	ret2 = ft_printf("|%#*.*jX|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0542\n");
	ret1 = printf("|%#*.*zX|\n", width, precision, number);
	ret2 = ft_printf("|%#*.*zX|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0543\n");
	ret1 = printf("|%#*.*X|\n", width, precision, number);
	ret2 = ft_printf("|%#*.*X|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0544\n");
	ret1 = printf("|% #*.*o|\n", width, precision, number);
	ret2 = ft_printf("|% #*.*o|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0545\n");
	ret1 = printf("|% #*.*hho|\n", width, precision, number);
	ret2 = ft_printf("|% #*.*hho|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0546\n");
	ret1 = printf("|% #*.*ho|\n", width, precision, number);
	ret2 = ft_printf("|% #*.*ho|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0547\n");
	ret1 = printf("|% #*.*lo|\n", width, precision, number);
	ret2 = ft_printf("|% #*.*lo|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0548\n");
	ret1 = printf("|% #*.*llo|\n", width, precision, number);
	ret2 = ft_printf("|% #*.*llo|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0549\n");
	ret1 = printf("|% #*.*jo|\n", width, precision, number);
	ret2 = ft_printf("|% #*.*jo|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0550\n");
	ret1 = printf("|% #*.*zo|\n", width, precision, number);
	ret2 = ft_printf("|% #*.*zo|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0551\n");
	ret1 = printf("|% #*.*o|\n", width, precision, number);
	ret2 = ft_printf("|% #*.*o|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0552\n");
	ret1 = printf("|% #*.*u|\n", width, precision, number);
	ret2 = ft_printf("|% #*.*u|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0553\n");
	ret1 = printf("|% #*.*hhu|\n", width, precision, number);
	ret2 = ft_printf("|% #*.*hhu|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0554\n");
	ret1 = printf("|% #*.*hu|\n", width, precision, number);
	ret2 = ft_printf("|% #*.*hu|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0555\n");
	ret1 = printf("|% #*.*lu|\n", width, precision, number);
	ret2 = ft_printf("|% #*.*lu|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0556\n");
	ret1 = printf("|% #*.*llu|\n", width, precision, number);
	ret2 = ft_printf("|% #*.*llu|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0557\n");
	ret1 = printf("|% #*.*ju|\n", width, precision, number);
	ret2 = ft_printf("|% #*.*ju|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0558\n");
	ret1 = printf("|% #*.*zu|\n", width, precision, number);
	ret2 = ft_printf("|% #*.*zu|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0559\n");
	ret1 = printf("|% #*.*u|\n", width, precision, number);
	ret2 = ft_printf("|% #*.*u|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0560\n");
	ret1 = printf("|% #*.*x|\n", width, precision, number);
	ret2 = ft_printf("|% #*.*x|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0561\n");
	ret1 = printf("|% #*.*hhx|\n", width, precision, number);
	ret2 = ft_printf("|% #*.*hhx|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0562\n");
	ret1 = printf("|% #*.*hx|\n", width, precision, number);
	ret2 = ft_printf("|% #*.*hx|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0563\n");
	ret1 = printf("|% #*.*lx|\n", width, precision, number);
	ret2 = ft_printf("|% #*.*lx|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0564\n");
	ret1 = printf("|% #*.*llx|\n", width, precision, number);
	ret2 = ft_printf("|% #*.*llx|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0565\n");
	ret1 = printf("|% #*.*jx|\n", width, precision, number);
	ret2 = ft_printf("|% #*.*jx|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0566\n");
	ret1 = printf("|% #*.*zx|\n", width, precision, number);
	ret2 = ft_printf("|% #*.*zx|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0567\n");
	ret1 = printf("|% #*.*x|\n", width, precision, number);
	ret2 = ft_printf("|% #*.*x|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0568\n");
	ret1 = printf("|% #*.*X|\n", width, precision, number);
	ret2 = ft_printf("|% #*.*X|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0569\n");
	ret1 = printf("|% #*.*hhX|\n", width, precision, number);
	ret2 = ft_printf("|% #*.*hhX|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0570\n");
	ret1 = printf("|% #*.*hX|\n", width, precision, number);
	ret2 = ft_printf("|% #*.*hX|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0571\n");
	ret1 = printf("|% #*.*lX|\n", width, precision, number);
	ret2 = ft_printf("|% #*.*lX|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0572\n");
	ret1 = printf("|% #*.*llX|\n", width, precision, number);
	ret2 = ft_printf("|% #*.*llX|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0573\n");
	ret1 = printf("|% #*.*jX|\n", width, precision, number);
	ret2 = ft_printf("|% #*.*jX|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0574\n");
	ret1 = printf("|% #*.*zX|\n", width, precision, number);
	ret2 = ft_printf("|% #*.*zX|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0575\n");
	ret1 = printf("|% #*.*X|\n", width, precision, number);
	ret2 = ft_printf("|% #*.*X|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0576\n");
	ret1 = printf("|%0#*.*o|\n", width, precision, number);
	ret2 = ft_printf("|%0#*.*o|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0577\n");
	ret1 = printf("|%0#*.*hho|\n", width, precision, number);
	ret2 = ft_printf("|%0#*.*hho|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0578\n");
	ret1 = printf("|%0#*.*ho|\n", width, precision, number);
	ret2 = ft_printf("|%0#*.*ho|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0579\n");
	ret1 = printf("|%0#*.*lo|\n", width, precision, number);
	ret2 = ft_printf("|%0#*.*lo|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0580\n");
	ret1 = printf("|%0#*.*llo|\n", width, precision, number);
	ret2 = ft_printf("|%0#*.*llo|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0581\n");
	ret1 = printf("|%0#*.*jo|\n", width, precision, number);
	ret2 = ft_printf("|%0#*.*jo|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0582\n");
	ret1 = printf("|%0#*.*zo|\n", width, precision, number);
	ret2 = ft_printf("|%0#*.*zo|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0583\n");
	ret1 = printf("|%0#*.*o|\n", width, precision, number);
	ret2 = ft_printf("|%0#*.*o|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0584\n");
	ret1 = printf("|%0#*.*u|\n", width, precision, number);
	ret2 = ft_printf("|%0#*.*u|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0585\n");
	ret1 = printf("|%0#*.*hhu|\n", width, precision, number);
	ret2 = ft_printf("|%0#*.*hhu|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0586\n");
	ret1 = printf("|%0#*.*hu|\n", width, precision, number);
	ret2 = ft_printf("|%0#*.*hu|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0587\n");
	ret1 = printf("|%0#*.*lu|\n", width, precision, number);
	ret2 = ft_printf("|%0#*.*lu|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0588\n");
	ret1 = printf("|%0#*.*llu|\n", width, precision, number);
	ret2 = ft_printf("|%0#*.*llu|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0589\n");
	ret1 = printf("|%0#*.*ju|\n", width, precision, number);
	ret2 = ft_printf("|%0#*.*ju|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0590\n");
	ret1 = printf("|%0#*.*zu|\n", width, precision, number);
	ret2 = ft_printf("|%0#*.*zu|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0591\n");
	ret1 = printf("|%0#*.*u|\n", width, precision, number);
	ret2 = ft_printf("|%0#*.*u|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0592\n");
	ret1 = printf("|%0#*.*x|\n", width, precision, number);
	ret2 = ft_printf("|%0#*.*x|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0593\n");
	ret1 = printf("|%0#*.*hhx|\n", width, precision, number);
	ret2 = ft_printf("|%0#*.*hhx|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0594\n");
	ret1 = printf("|%0#*.*hx|\n", width, precision, number);
	ret2 = ft_printf("|%0#*.*hx|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0595\n");
	ret1 = printf("|%0#*.*lx|\n", width, precision, number);
	ret2 = ft_printf("|%0#*.*lx|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0596\n");
	ret1 = printf("|%0#*.*llx|\n", width, precision, number);
	ret2 = ft_printf("|%0#*.*llx|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0597\n");
	ret1 = printf("|%0#*.*jx|\n", width, precision, number);
	ret2 = ft_printf("|%0#*.*jx|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0598\n");
	ret1 = printf("|%0#*.*zx|\n", width, precision, number);
	ret2 = ft_printf("|%0#*.*zx|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0599\n");
	ret1 = printf("|%0#*.*x|\n", width, precision, number);
	ret2 = ft_printf("|%0#*.*x|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0600\n");
	ret1 = printf("|%0#*.*X|\n", width, precision, number);
	ret2 = ft_printf("|%0#*.*X|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0601\n");
	ret1 = printf("|%0#*.*hhX|\n", width, precision, number);
	ret2 = ft_printf("|%0#*.*hhX|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0602\n");
	ret1 = printf("|%0#*.*hX|\n", width, precision, number);
	ret2 = ft_printf("|%0#*.*hX|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0603\n");
	ret1 = printf("|%0#*.*lX|\n", width, precision, number);
	ret2 = ft_printf("|%0#*.*lX|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0604\n");
	ret1 = printf("|%0#*.*llX|\n", width, precision, number);
	ret2 = ft_printf("|%0#*.*llX|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0605\n");
	ret1 = printf("|%0#*.*jX|\n", width, precision, number);
	ret2 = ft_printf("|%0#*.*jX|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0606\n");
	ret1 = printf("|%0#*.*zX|\n", width, precision, number);
	ret2 = ft_printf("|%0#*.*zX|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0607\n");
	ret1 = printf("|%0#*.*X|\n", width, precision, number);
	ret2 = ft_printf("|%0#*.*X|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0608\n");
	ret1 = printf("|% 0#*.*o|\n", width, precision, number);
	ret2 = ft_printf("|% 0#*.*o|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0609\n");
	ret1 = printf("|% 0#*.*hho|\n", width, precision, number);
	ret2 = ft_printf("|% 0#*.*hho|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0610\n");
	ret1 = printf("|% 0#*.*ho|\n", width, precision, number);
	ret2 = ft_printf("|% 0#*.*ho|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0611\n");
	ret1 = printf("|% 0#*.*lo|\n", width, precision, number);
	ret2 = ft_printf("|% 0#*.*lo|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0612\n");
	ret1 = printf("|% 0#*.*llo|\n", width, precision, number);
	ret2 = ft_printf("|% 0#*.*llo|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0613\n");
	ret1 = printf("|% 0#*.*jo|\n", width, precision, number);
	ret2 = ft_printf("|% 0#*.*jo|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0614\n");
	ret1 = printf("|% 0#*.*zo|\n", width, precision, number);
	ret2 = ft_printf("|% 0#*.*zo|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0615\n");
	ret1 = printf("|% 0#*.*o|\n", width, precision, number);
	ret2 = ft_printf("|% 0#*.*o|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0616\n");
	ret1 = printf("|% 0#*.*u|\n", width, precision, number);
	ret2 = ft_printf("|% 0#*.*u|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0617\n");
	ret1 = printf("|% 0#*.*hhu|\n", width, precision, number);
	ret2 = ft_printf("|% 0#*.*hhu|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0618\n");
	ret1 = printf("|% 0#*.*hu|\n", width, precision, number);
	ret2 = ft_printf("|% 0#*.*hu|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0619\n");
	ret1 = printf("|% 0#*.*lu|\n", width, precision, number);
	ret2 = ft_printf("|% 0#*.*lu|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0620\n");
	ret1 = printf("|% 0#*.*llu|\n", width, precision, number);
	ret2 = ft_printf("|% 0#*.*llu|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0621\n");
	ret1 = printf("|% 0#*.*ju|\n", width, precision, number);
	ret2 = ft_printf("|% 0#*.*ju|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0622\n");
	ret1 = printf("|% 0#*.*zu|\n", width, precision, number);
	ret2 = ft_printf("|% 0#*.*zu|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0623\n");
	ret1 = printf("|% 0#*.*u|\n", width, precision, number);
	ret2 = ft_printf("|% 0#*.*u|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0624\n");
	ret1 = printf("|% 0#*.*x|\n", width, precision, number);
	ret2 = ft_printf("|% 0#*.*x|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0625\n");
	ret1 = printf("|% 0#*.*hhx|\n", width, precision, number);
	ret2 = ft_printf("|% 0#*.*hhx|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0626\n");
	ret1 = printf("|% 0#*.*hx|\n", width, precision, number);
	ret2 = ft_printf("|% 0#*.*hx|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0627\n");
	ret1 = printf("|% 0#*.*lx|\n", width, precision, number);
	ret2 = ft_printf("|% 0#*.*lx|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0628\n");
	ret1 = printf("|% 0#*.*llx|\n", width, precision, number);
	ret2 = ft_printf("|% 0#*.*llx|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0629\n");
	ret1 = printf("|% 0#*.*jx|\n", width, precision, number);
	ret2 = ft_printf("|% 0#*.*jx|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0630\n");
	ret1 = printf("|% 0#*.*zx|\n", width, precision, number);
	ret2 = ft_printf("|% 0#*.*zx|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0631\n");
	ret1 = printf("|% 0#*.*x|\n", width, precision, number);
	ret2 = ft_printf("|% 0#*.*x|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0632\n");
	ret1 = printf("|% 0#*.*X|\n", width, precision, number);
	ret2 = ft_printf("|% 0#*.*X|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0633\n");
	ret1 = printf("|% 0#*.*hhX|\n", width, precision, number);
	ret2 = ft_printf("|% 0#*.*hhX|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0634\n");
	ret1 = printf("|% 0#*.*hX|\n", width, precision, number);
	ret2 = ft_printf("|% 0#*.*hX|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0635\n");
	ret1 = printf("|% 0#*.*lX|\n", width, precision, number);
	ret2 = ft_printf("|% 0#*.*lX|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0636\n");
	ret1 = printf("|% 0#*.*llX|\n", width, precision, number);
	ret2 = ft_printf("|% 0#*.*llX|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0637\n");
	ret1 = printf("|% 0#*.*jX|\n", width, precision, number);
	ret2 = ft_printf("|% 0#*.*jX|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0638\n");
	ret1 = printf("|% 0#*.*zX|\n", width, precision, number);
	ret2 = ft_printf("|% 0#*.*zX|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0639\n");
	ret1 = printf("|% 0#*.*X|\n", width, precision, number);
	ret2 = ft_printf("|% 0#*.*X|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0640\n");
	ret1 = printf("|%+#*.*o|\n", width, precision, number);
	ret2 = ft_printf("|%+#*.*o|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0641\n");
	ret1 = printf("|%+#*.*hho|\n", width, precision, number);
	ret2 = ft_printf("|%+#*.*hho|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0642\n");
	ret1 = printf("|%+#*.*ho|\n", width, precision, number);
	ret2 = ft_printf("|%+#*.*ho|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0643\n");
	ret1 = printf("|%+#*.*lo|\n", width, precision, number);
	ret2 = ft_printf("|%+#*.*lo|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0644\n");
	ret1 = printf("|%+#*.*llo|\n", width, precision, number);
	ret2 = ft_printf("|%+#*.*llo|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0645\n");
	ret1 = printf("|%+#*.*jo|\n", width, precision, number);
	ret2 = ft_printf("|%+#*.*jo|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0646\n");
	ret1 = printf("|%+#*.*zo|\n", width, precision, number);
	ret2 = ft_printf("|%+#*.*zo|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0647\n");
	ret1 = printf("|%+#*.*o|\n", width, precision, number);
	ret2 = ft_printf("|%+#*.*o|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0648\n");
	ret1 = printf("|%+#*.*u|\n", width, precision, number);
	ret2 = ft_printf("|%+#*.*u|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0649\n");
	ret1 = printf("|%+#*.*hhu|\n", width, precision, number);
	ret2 = ft_printf("|%+#*.*hhu|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0650\n");
	ret1 = printf("|%+#*.*hu|\n", width, precision, number);
	ret2 = ft_printf("|%+#*.*hu|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0651\n");
	ret1 = printf("|%+#*.*lu|\n", width, precision, number);
	ret2 = ft_printf("|%+#*.*lu|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0652\n");
	ret1 = printf("|%+#*.*llu|\n", width, precision, number);
	ret2 = ft_printf("|%+#*.*llu|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0653\n");
	ret1 = printf("|%+#*.*ju|\n", width, precision, number);
	ret2 = ft_printf("|%+#*.*ju|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0654\n");
	ret1 = printf("|%+#*.*zu|\n", width, precision, number);
	ret2 = ft_printf("|%+#*.*zu|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0655\n");
	ret1 = printf("|%+#*.*u|\n", width, precision, number);
	ret2 = ft_printf("|%+#*.*u|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0656\n");
	ret1 = printf("|%+#*.*x|\n", width, precision, number);
	ret2 = ft_printf("|%+#*.*x|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0657\n");
	ret1 = printf("|%+#*.*hhx|\n", width, precision, number);
	ret2 = ft_printf("|%+#*.*hhx|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0658\n");
	ret1 = printf("|%+#*.*hx|\n", width, precision, number);
	ret2 = ft_printf("|%+#*.*hx|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0659\n");
	ret1 = printf("|%+#*.*lx|\n", width, precision, number);
	ret2 = ft_printf("|%+#*.*lx|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0660\n");
	ret1 = printf("|%+#*.*llx|\n", width, precision, number);
	ret2 = ft_printf("|%+#*.*llx|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0661\n");
	ret1 = printf("|%+#*.*jx|\n", width, precision, number);
	ret2 = ft_printf("|%+#*.*jx|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0662\n");
	ret1 = printf("|%+#*.*zx|\n", width, precision, number);
	ret2 = ft_printf("|%+#*.*zx|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0663\n");
	ret1 = printf("|%+#*.*x|\n", width, precision, number);
	ret2 = ft_printf("|%+#*.*x|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0664\n");
	ret1 = printf("|%+#*.*X|\n", width, precision, number);
	ret2 = ft_printf("|%+#*.*X|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0665\n");
	ret1 = printf("|%+#*.*hhX|\n", width, precision, number);
	ret2 = ft_printf("|%+#*.*hhX|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0666\n");
	ret1 = printf("|%+#*.*hX|\n", width, precision, number);
	ret2 = ft_printf("|%+#*.*hX|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0667\n");
	ret1 = printf("|%+#*.*lX|\n", width, precision, number);
	ret2 = ft_printf("|%+#*.*lX|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0668\n");
	ret1 = printf("|%+#*.*llX|\n", width, precision, number);
	ret2 = ft_printf("|%+#*.*llX|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0669\n");
	ret1 = printf("|%+#*.*jX|\n", width, precision, number);
	ret2 = ft_printf("|%+#*.*jX|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0670\n");
	ret1 = printf("|%+#*.*zX|\n", width, precision, number);
	ret2 = ft_printf("|%+#*.*zX|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0671\n");
	ret1 = printf("|%+#*.*X|\n", width, precision, number);
	ret2 = ft_printf("|%+#*.*X|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0672\n");
	ret1 = printf("|% +#*.*o|\n", width, precision, number);
	ret2 = ft_printf("|% +#*.*o|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0673\n");
	ret1 = printf("|% +#*.*hho|\n", width, precision, number);
	ret2 = ft_printf("|% +#*.*hho|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0674\n");
	ret1 = printf("|% +#*.*ho|\n", width, precision, number);
	ret2 = ft_printf("|% +#*.*ho|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0675\n");
	ret1 = printf("|% +#*.*lo|\n", width, precision, number);
	ret2 = ft_printf("|% +#*.*lo|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0676\n");
	ret1 = printf("|% +#*.*llo|\n", width, precision, number);
	ret2 = ft_printf("|% +#*.*llo|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0677\n");
	ret1 = printf("|% +#*.*jo|\n", width, precision, number);
	ret2 = ft_printf("|% +#*.*jo|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0678\n");
	ret1 = printf("|% +#*.*zo|\n", width, precision, number);
	ret2 = ft_printf("|% +#*.*zo|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0679\n");
	ret1 = printf("|% +#*.*o|\n", width, precision, number);
	ret2 = ft_printf("|% +#*.*o|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0680\n");
	ret1 = printf("|% +#*.*u|\n", width, precision, number);
	ret2 = ft_printf("|% +#*.*u|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0681\n");
	ret1 = printf("|% +#*.*hhu|\n", width, precision, number);
	ret2 = ft_printf("|% +#*.*hhu|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0682\n");
	ret1 = printf("|% +#*.*hu|\n", width, precision, number);
	ret2 = ft_printf("|% +#*.*hu|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0683\n");
	ret1 = printf("|% +#*.*lu|\n", width, precision, number);
	ret2 = ft_printf("|% +#*.*lu|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0684\n");
	ret1 = printf("|% +#*.*llu|\n", width, precision, number);
	ret2 = ft_printf("|% +#*.*llu|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0685\n");
	ret1 = printf("|% +#*.*ju|\n", width, precision, number);
	ret2 = ft_printf("|% +#*.*ju|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0686\n");
	ret1 = printf("|% +#*.*zu|\n", width, precision, number);
	ret2 = ft_printf("|% +#*.*zu|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0687\n");
	ret1 = printf("|% +#*.*u|\n", width, precision, number);
	ret2 = ft_printf("|% +#*.*u|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0688\n");
	ret1 = printf("|% +#*.*x|\n", width, precision, number);
	ret2 = ft_printf("|% +#*.*x|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0689\n");
	ret1 = printf("|% +#*.*hhx|\n", width, precision, number);
	ret2 = ft_printf("|% +#*.*hhx|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0690\n");
	ret1 = printf("|% +#*.*hx|\n", width, precision, number);
	ret2 = ft_printf("|% +#*.*hx|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0691\n");
	ret1 = printf("|% +#*.*lx|\n", width, precision, number);
	ret2 = ft_printf("|% +#*.*lx|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0692\n");
	ret1 = printf("|% +#*.*llx|\n", width, precision, number);
	ret2 = ft_printf("|% +#*.*llx|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0693\n");
	ret1 = printf("|% +#*.*jx|\n", width, precision, number);
	ret2 = ft_printf("|% +#*.*jx|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0694\n");
	ret1 = printf("|% +#*.*zx|\n", width, precision, number);
	ret2 = ft_printf("|% +#*.*zx|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0695\n");
	ret1 = printf("|% +#*.*x|\n", width, precision, number);
	ret2 = ft_printf("|% +#*.*x|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0696\n");
	ret1 = printf("|% +#*.*X|\n", width, precision, number);
	ret2 = ft_printf("|% +#*.*X|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0697\n");
	ret1 = printf("|% +#*.*hhX|\n", width, precision, number);
	ret2 = ft_printf("|% +#*.*hhX|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0698\n");
	ret1 = printf("|% +#*.*hX|\n", width, precision, number);
	ret2 = ft_printf("|% +#*.*hX|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0699\n");
	ret1 = printf("|% +#*.*lX|\n", width, precision, number);
	ret2 = ft_printf("|% +#*.*lX|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0700\n");
	ret1 = printf("|% +#*.*llX|\n", width, precision, number);
	ret2 = ft_printf("|% +#*.*llX|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0701\n");
	ret1 = printf("|% +#*.*jX|\n", width, precision, number);
	ret2 = ft_printf("|% +#*.*jX|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0702\n");
	ret1 = printf("|% +#*.*zX|\n", width, precision, number);
	ret2 = ft_printf("|% +#*.*zX|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0703\n");
	ret1 = printf("|% +#*.*X|\n", width, precision, number);
	ret2 = ft_printf("|% +#*.*X|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0704\n");
	ret1 = printf("|%0+#*.*o|\n", width, precision, number);
	ret2 = ft_printf("|%0+#*.*o|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0705\n");
	ret1 = printf("|%0+#*.*hho|\n", width, precision, number);
	ret2 = ft_printf("|%0+#*.*hho|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0706\n");
	ret1 = printf("|%0+#*.*ho|\n", width, precision, number);
	ret2 = ft_printf("|%0+#*.*ho|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0707\n");
	ret1 = printf("|%0+#*.*lo|\n", width, precision, number);
	ret2 = ft_printf("|%0+#*.*lo|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0708\n");
	ret1 = printf("|%0+#*.*llo|\n", width, precision, number);
	ret2 = ft_printf("|%0+#*.*llo|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0709\n");
	ret1 = printf("|%0+#*.*jo|\n", width, precision, number);
	ret2 = ft_printf("|%0+#*.*jo|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0710\n");
	ret1 = printf("|%0+#*.*zo|\n", width, precision, number);
	ret2 = ft_printf("|%0+#*.*zo|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0711\n");
	ret1 = printf("|%0+#*.*o|\n", width, precision, number);
	ret2 = ft_printf("|%0+#*.*o|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0712\n");
	ret1 = printf("|%0+#*.*u|\n", width, precision, number);
	ret2 = ft_printf("|%0+#*.*u|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0713\n");
	ret1 = printf("|%0+#*.*hhu|\n", width, precision, number);
	ret2 = ft_printf("|%0+#*.*hhu|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0714\n");
	ret1 = printf("|%0+#*.*hu|\n", width, precision, number);
	ret2 = ft_printf("|%0+#*.*hu|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0715\n");
	ret1 = printf("|%0+#*.*lu|\n", width, precision, number);
	ret2 = ft_printf("|%0+#*.*lu|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0716\n");
	ret1 = printf("|%0+#*.*llu|\n", width, precision, number);
	ret2 = ft_printf("|%0+#*.*llu|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0717\n");
	ret1 = printf("|%0+#*.*ju|\n", width, precision, number);
	ret2 = ft_printf("|%0+#*.*ju|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0718\n");
	ret1 = printf("|%0+#*.*zu|\n", width, precision, number);
	ret2 = ft_printf("|%0+#*.*zu|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0719\n");
	ret1 = printf("|%0+#*.*u|\n", width, precision, number);
	ret2 = ft_printf("|%0+#*.*u|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0720\n");
	ret1 = printf("|%0+#*.*x|\n", width, precision, number);
	ret2 = ft_printf("|%0+#*.*x|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0721\n");
	ret1 = printf("|%0+#*.*hhx|\n", width, precision, number);
	ret2 = ft_printf("|%0+#*.*hhx|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0722\n");
	ret1 = printf("|%0+#*.*hx|\n", width, precision, number);
	ret2 = ft_printf("|%0+#*.*hx|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0723\n");
	ret1 = printf("|%0+#*.*lx|\n", width, precision, number);
	ret2 = ft_printf("|%0+#*.*lx|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0724\n");
	ret1 = printf("|%0+#*.*llx|\n", width, precision, number);
	ret2 = ft_printf("|%0+#*.*llx|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0725\n");
	ret1 = printf("|%0+#*.*jx|\n", width, precision, number);
	ret2 = ft_printf("|%0+#*.*jx|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0726\n");
	ret1 = printf("|%0+#*.*zx|\n", width, precision, number);
	ret2 = ft_printf("|%0+#*.*zx|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0727\n");
	ret1 = printf("|%0+#*.*x|\n", width, precision, number);
	ret2 = ft_printf("|%0+#*.*x|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0728\n");
	ret1 = printf("|%0+#*.*X|\n", width, precision, number);
	ret2 = ft_printf("|%0+#*.*X|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0729\n");
	ret1 = printf("|%0+#*.*hhX|\n", width, precision, number);
	ret2 = ft_printf("|%0+#*.*hhX|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0730\n");
	ret1 = printf("|%0+#*.*hX|\n", width, precision, number);
	ret2 = ft_printf("|%0+#*.*hX|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0731\n");
	ret1 = printf("|%0+#*.*lX|\n", width, precision, number);
	ret2 = ft_printf("|%0+#*.*lX|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0732\n");
	ret1 = printf("|%0+#*.*llX|\n", width, precision, number);
	ret2 = ft_printf("|%0+#*.*llX|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0733\n");
	ret1 = printf("|%0+#*.*jX|\n", width, precision, number);
	ret2 = ft_printf("|%0+#*.*jX|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0734\n");
	ret1 = printf("|%0+#*.*zX|\n", width, precision, number);
	ret2 = ft_printf("|%0+#*.*zX|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0735\n");
	ret1 = printf("|%0+#*.*X|\n", width, precision, number);
	ret2 = ft_printf("|%0+#*.*X|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0736\n");
	ret1 = printf("|% 0+#*.*o|\n", width, precision, number);
	ret2 = ft_printf("|% 0+#*.*o|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0737\n");
	ret1 = printf("|% 0+#*.*hho|\n", width, precision, number);
	ret2 = ft_printf("|% 0+#*.*hho|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0738\n");
	ret1 = printf("|% 0+#*.*ho|\n", width, precision, number);
	ret2 = ft_printf("|% 0+#*.*ho|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0739\n");
	ret1 = printf("|% 0+#*.*lo|\n", width, precision, number);
	ret2 = ft_printf("|% 0+#*.*lo|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0740\n");
	ret1 = printf("|% 0+#*.*llo|\n", width, precision, number);
	ret2 = ft_printf("|% 0+#*.*llo|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0741\n");
	ret1 = printf("|% 0+#*.*jo|\n", width, precision, number);
	ret2 = ft_printf("|% 0+#*.*jo|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0742\n");
	ret1 = printf("|% 0+#*.*zo|\n", width, precision, number);
	ret2 = ft_printf("|% 0+#*.*zo|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0743\n");
	ret1 = printf("|% 0+#*.*o|\n", width, precision, number);
	ret2 = ft_printf("|% 0+#*.*o|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0744\n");
	ret1 = printf("|% 0+#*.*u|\n", width, precision, number);
	ret2 = ft_printf("|% 0+#*.*u|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0745\n");
	ret1 = printf("|% 0+#*.*hhu|\n", width, precision, number);
	ret2 = ft_printf("|% 0+#*.*hhu|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0746\n");
	ret1 = printf("|% 0+#*.*hu|\n", width, precision, number);
	ret2 = ft_printf("|% 0+#*.*hu|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0747\n");
	ret1 = printf("|% 0+#*.*lu|\n", width, precision, number);
	ret2 = ft_printf("|% 0+#*.*lu|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0748\n");
	ret1 = printf("|% 0+#*.*llu|\n", width, precision, number);
	ret2 = ft_printf("|% 0+#*.*llu|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0749\n");
	ret1 = printf("|% 0+#*.*ju|\n", width, precision, number);
	ret2 = ft_printf("|% 0+#*.*ju|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0750\n");
	ret1 = printf("|% 0+#*.*zu|\n", width, precision, number);
	ret2 = ft_printf("|% 0+#*.*zu|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0751\n");
	ret1 = printf("|% 0+#*.*u|\n", width, precision, number);
	ret2 = ft_printf("|% 0+#*.*u|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0752\n");
	ret1 = printf("|% 0+#*.*x|\n", width, precision, number);
	ret2 = ft_printf("|% 0+#*.*x|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0753\n");
	ret1 = printf("|% 0+#*.*hhx|\n", width, precision, number);
	ret2 = ft_printf("|% 0+#*.*hhx|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0754\n");
	ret1 = printf("|% 0+#*.*hx|\n", width, precision, number);
	ret2 = ft_printf("|% 0+#*.*hx|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0755\n");
	ret1 = printf("|% 0+#*.*lx|\n", width, precision, number);
	ret2 = ft_printf("|% 0+#*.*lx|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0756\n");
	ret1 = printf("|% 0+#*.*llx|\n", width, precision, number);
	ret2 = ft_printf("|% 0+#*.*llx|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0757\n");
	ret1 = printf("|% 0+#*.*jx|\n", width, precision, number);
	ret2 = ft_printf("|% 0+#*.*jx|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0758\n");
	ret1 = printf("|% 0+#*.*zx|\n", width, precision, number);
	ret2 = ft_printf("|% 0+#*.*zx|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0759\n");
	ret1 = printf("|% 0+#*.*x|\n", width, precision, number);
	ret2 = ft_printf("|% 0+#*.*x|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0760\n");
	ret1 = printf("|% 0+#*.*X|\n", width, precision, number);
	ret2 = ft_printf("|% 0+#*.*X|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0761\n");
	ret1 = printf("|% 0+#*.*hhX|\n", width, precision, number);
	ret2 = ft_printf("|% 0+#*.*hhX|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0762\n");
	ret1 = printf("|% 0+#*.*hX|\n", width, precision, number);
	ret2 = ft_printf("|% 0+#*.*hX|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0763\n");
	ret1 = printf("|% 0+#*.*lX|\n", width, precision, number);
	ret2 = ft_printf("|% 0+#*.*lX|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0764\n");
	ret1 = printf("|% 0+#*.*llX|\n", width, precision, number);
	ret2 = ft_printf("|% 0+#*.*llX|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0765\n");
	ret1 = printf("|% 0+#*.*jX|\n", width, precision, number);
	ret2 = ft_printf("|% 0+#*.*jX|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0766\n");
	ret1 = printf("|% 0+#*.*zX|\n", width, precision, number);
	ret2 = ft_printf("|% 0+#*.*zX|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0767\n");
	ret1 = printf("|% 0+#*.*X|\n", width, precision, number);
	ret2 = ft_printf("|% 0+#*.*X|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0768\n");
	ret1 = printf("|%-#*.*o|\n", width, precision, number);
	ret2 = ft_printf("|%-#*.*o|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0769\n");
	ret1 = printf("|%-#*.*hho|\n", width, precision, number);
	ret2 = ft_printf("|%-#*.*hho|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0770\n");
	ret1 = printf("|%-#*.*ho|\n", width, precision, number);
	ret2 = ft_printf("|%-#*.*ho|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0771\n");
	ret1 = printf("|%-#*.*lo|\n", width, precision, number);
	ret2 = ft_printf("|%-#*.*lo|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0772\n");
	ret1 = printf("|%-#*.*llo|\n", width, precision, number);
	ret2 = ft_printf("|%-#*.*llo|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0773\n");
	ret1 = printf("|%-#*.*jo|\n", width, precision, number);
	ret2 = ft_printf("|%-#*.*jo|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0774\n");
	ret1 = printf("|%-#*.*zo|\n", width, precision, number);
	ret2 = ft_printf("|%-#*.*zo|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0775\n");
	ret1 = printf("|%-#*.*o|\n", width, precision, number);
	ret2 = ft_printf("|%-#*.*o|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0776\n");
	ret1 = printf("|%-#*.*u|\n", width, precision, number);
	ret2 = ft_printf("|%-#*.*u|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0777\n");
	ret1 = printf("|%-#*.*hhu|\n", width, precision, number);
	ret2 = ft_printf("|%-#*.*hhu|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0778\n");
	ret1 = printf("|%-#*.*hu|\n", width, precision, number);
	ret2 = ft_printf("|%-#*.*hu|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0779\n");
	ret1 = printf("|%-#*.*lu|\n", width, precision, number);
	ret2 = ft_printf("|%-#*.*lu|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0780\n");
	ret1 = printf("|%-#*.*llu|\n", width, precision, number);
	ret2 = ft_printf("|%-#*.*llu|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0781\n");
	ret1 = printf("|%-#*.*ju|\n", width, precision, number);
	ret2 = ft_printf("|%-#*.*ju|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0782\n");
	ret1 = printf("|%-#*.*zu|\n", width, precision, number);
	ret2 = ft_printf("|%-#*.*zu|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0783\n");
	ret1 = printf("|%-#*.*u|\n", width, precision, number);
	ret2 = ft_printf("|%-#*.*u|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0784\n");
	ret1 = printf("|%-#*.*x|\n", width, precision, number);
	ret2 = ft_printf("|%-#*.*x|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0785\n");
	ret1 = printf("|%-#*.*hhx|\n", width, precision, number);
	ret2 = ft_printf("|%-#*.*hhx|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0786\n");
	ret1 = printf("|%-#*.*hx|\n", width, precision, number);
	ret2 = ft_printf("|%-#*.*hx|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0787\n");
	ret1 = printf("|%-#*.*lx|\n", width, precision, number);
	ret2 = ft_printf("|%-#*.*lx|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0788\n");
	ret1 = printf("|%-#*.*llx|\n", width, precision, number);
	ret2 = ft_printf("|%-#*.*llx|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0789\n");
	ret1 = printf("|%-#*.*jx|\n", width, precision, number);
	ret2 = ft_printf("|%-#*.*jx|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0790\n");
	ret1 = printf("|%-#*.*zx|\n", width, precision, number);
	ret2 = ft_printf("|%-#*.*zx|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0791\n");
	ret1 = printf("|%-#*.*x|\n", width, precision, number);
	ret2 = ft_printf("|%-#*.*x|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0792\n");
	ret1 = printf("|%-#*.*X|\n", width, precision, number);
	ret2 = ft_printf("|%-#*.*X|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0793\n");
	ret1 = printf("|%-#*.*hhX|\n", width, precision, number);
	ret2 = ft_printf("|%-#*.*hhX|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0794\n");
	ret1 = printf("|%-#*.*hX|\n", width, precision, number);
	ret2 = ft_printf("|%-#*.*hX|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0795\n");
	ret1 = printf("|%-#*.*lX|\n", width, precision, number);
	ret2 = ft_printf("|%-#*.*lX|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0796\n");
	ret1 = printf("|%-#*.*llX|\n", width, precision, number);
	ret2 = ft_printf("|%-#*.*llX|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0797\n");
	ret1 = printf("|%-#*.*jX|\n", width, precision, number);
	ret2 = ft_printf("|%-#*.*jX|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0798\n");
	ret1 = printf("|%-#*.*zX|\n", width, precision, number);
	ret2 = ft_printf("|%-#*.*zX|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0799\n");
	ret1 = printf("|%-#*.*X|\n", width, precision, number);
	ret2 = ft_printf("|%-#*.*X|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0800\n");
	ret1 = printf("|% -#*.*o|\n", width, precision, number);
	ret2 = ft_printf("|% -#*.*o|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0801\n");
	ret1 = printf("|% -#*.*hho|\n", width, precision, number);
	ret2 = ft_printf("|% -#*.*hho|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0802\n");
	ret1 = printf("|% -#*.*ho|\n", width, precision, number);
	ret2 = ft_printf("|% -#*.*ho|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0803\n");
	ret1 = printf("|% -#*.*lo|\n", width, precision, number);
	ret2 = ft_printf("|% -#*.*lo|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0804\n");
	ret1 = printf("|% -#*.*llo|\n", width, precision, number);
	ret2 = ft_printf("|% -#*.*llo|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0805\n");
	ret1 = printf("|% -#*.*jo|\n", width, precision, number);
	ret2 = ft_printf("|% -#*.*jo|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0806\n");
	ret1 = printf("|% -#*.*zo|\n", width, precision, number);
	ret2 = ft_printf("|% -#*.*zo|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0807\n");
	ret1 = printf("|% -#*.*o|\n", width, precision, number);
	ret2 = ft_printf("|% -#*.*o|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0808\n");
	ret1 = printf("|% -#*.*u|\n", width, precision, number);
	ret2 = ft_printf("|% -#*.*u|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0809\n");
	ret1 = printf("|% -#*.*hhu|\n", width, precision, number);
	ret2 = ft_printf("|% -#*.*hhu|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0810\n");
	ret1 = printf("|% -#*.*hu|\n", width, precision, number);
	ret2 = ft_printf("|% -#*.*hu|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0811\n");
	ret1 = printf("|% -#*.*lu|\n", width, precision, number);
	ret2 = ft_printf("|% -#*.*lu|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0812\n");
	ret1 = printf("|% -#*.*llu|\n", width, precision, number);
	ret2 = ft_printf("|% -#*.*llu|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0813\n");
	ret1 = printf("|% -#*.*ju|\n", width, precision, number);
	ret2 = ft_printf("|% -#*.*ju|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0814\n");
	ret1 = printf("|% -#*.*zu|\n", width, precision, number);
	ret2 = ft_printf("|% -#*.*zu|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0815\n");
	ret1 = printf("|% -#*.*u|\n", width, precision, number);
	ret2 = ft_printf("|% -#*.*u|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0816\n");
	ret1 = printf("|% -#*.*x|\n", width, precision, number);
	ret2 = ft_printf("|% -#*.*x|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0817\n");
	ret1 = printf("|% -#*.*hhx|\n", width, precision, number);
	ret2 = ft_printf("|% -#*.*hhx|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0818\n");
	ret1 = printf("|% -#*.*hx|\n", width, precision, number);
	ret2 = ft_printf("|% -#*.*hx|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0819\n");
	ret1 = printf("|% -#*.*lx|\n", width, precision, number);
	ret2 = ft_printf("|% -#*.*lx|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0820\n");
	ret1 = printf("|% -#*.*llx|\n", width, precision, number);
	ret2 = ft_printf("|% -#*.*llx|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0821\n");
	ret1 = printf("|% -#*.*jx|\n", width, precision, number);
	ret2 = ft_printf("|% -#*.*jx|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0822\n");
	ret1 = printf("|% -#*.*zx|\n", width, precision, number);
	ret2 = ft_printf("|% -#*.*zx|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0823\n");
	ret1 = printf("|% -#*.*x|\n", width, precision, number);
	ret2 = ft_printf("|% -#*.*x|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0824\n");
	ret1 = printf("|% -#*.*X|\n", width, precision, number);
	ret2 = ft_printf("|% -#*.*X|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0825\n");
	ret1 = printf("|% -#*.*hhX|\n", width, precision, number);
	ret2 = ft_printf("|% -#*.*hhX|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0826\n");
	ret1 = printf("|% -#*.*hX|\n", width, precision, number);
	ret2 = ft_printf("|% -#*.*hX|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0827\n");
	ret1 = printf("|% -#*.*lX|\n", width, precision, number);
	ret2 = ft_printf("|% -#*.*lX|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0828\n");
	ret1 = printf("|% -#*.*llX|\n", width, precision, number);
	ret2 = ft_printf("|% -#*.*llX|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0829\n");
	ret1 = printf("|% -#*.*jX|\n", width, precision, number);
	ret2 = ft_printf("|% -#*.*jX|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0830\n");
	ret1 = printf("|% -#*.*zX|\n", width, precision, number);
	ret2 = ft_printf("|% -#*.*zX|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0831\n");
	ret1 = printf("|% -#*.*X|\n", width, precision, number);
	ret2 = ft_printf("|% -#*.*X|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0832\n");
	ret1 = printf("|%0-#*.*o|\n", width, precision, number);
	ret2 = ft_printf("|%0-#*.*o|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0833\n");
	ret1 = printf("|%0-#*.*hho|\n", width, precision, number);
	ret2 = ft_printf("|%0-#*.*hho|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0834\n");
	ret1 = printf("|%0-#*.*ho|\n", width, precision, number);
	ret2 = ft_printf("|%0-#*.*ho|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0835\n");
	ret1 = printf("|%0-#*.*lo|\n", width, precision, number);
	ret2 = ft_printf("|%0-#*.*lo|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0836\n");
	ret1 = printf("|%0-#*.*llo|\n", width, precision, number);
	ret2 = ft_printf("|%0-#*.*llo|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0837\n");
	ret1 = printf("|%0-#*.*jo|\n", width, precision, number);
	ret2 = ft_printf("|%0-#*.*jo|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0838\n");
	ret1 = printf("|%0-#*.*zo|\n", width, precision, number);
	ret2 = ft_printf("|%0-#*.*zo|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0839\n");
	ret1 = printf("|%0-#*.*o|\n", width, precision, number);
	ret2 = ft_printf("|%0-#*.*o|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0840\n");
	ret1 = printf("|%0-#*.*u|\n", width, precision, number);
	ret2 = ft_printf("|%0-#*.*u|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0841\n");
	ret1 = printf("|%0-#*.*hhu|\n", width, precision, number);
	ret2 = ft_printf("|%0-#*.*hhu|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0842\n");
	ret1 = printf("|%0-#*.*hu|\n", width, precision, number);
	ret2 = ft_printf("|%0-#*.*hu|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0843\n");
	ret1 = printf("|%0-#*.*lu|\n", width, precision, number);
	ret2 = ft_printf("|%0-#*.*lu|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0844\n");
	ret1 = printf("|%0-#*.*llu|\n", width, precision, number);
	ret2 = ft_printf("|%0-#*.*llu|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0845\n");
	ret1 = printf("|%0-#*.*ju|\n", width, precision, number);
	ret2 = ft_printf("|%0-#*.*ju|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0846\n");
	ret1 = printf("|%0-#*.*zu|\n", width, precision, number);
	ret2 = ft_printf("|%0-#*.*zu|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0847\n");
	ret1 = printf("|%0-#*.*u|\n", width, precision, number);
	ret2 = ft_printf("|%0-#*.*u|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0848\n");
	ret1 = printf("|%0-#*.*x|\n", width, precision, number);
	ret2 = ft_printf("|%0-#*.*x|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0849\n");
	ret1 = printf("|%0-#*.*hhx|\n", width, precision, number);
	ret2 = ft_printf("|%0-#*.*hhx|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0850\n");
	ret1 = printf("|%0-#*.*hx|\n", width, precision, number);
	ret2 = ft_printf("|%0-#*.*hx|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0851\n");
	ret1 = printf("|%0-#*.*lx|\n", width, precision, number);
	ret2 = ft_printf("|%0-#*.*lx|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0852\n");
	ret1 = printf("|%0-#*.*llx|\n", width, precision, number);
	ret2 = ft_printf("|%0-#*.*llx|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0853\n");
	ret1 = printf("|%0-#*.*jx|\n", width, precision, number);
	ret2 = ft_printf("|%0-#*.*jx|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0854\n");
	ret1 = printf("|%0-#*.*zx|\n", width, precision, number);
	ret2 = ft_printf("|%0-#*.*zx|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0855\n");
	ret1 = printf("|%0-#*.*x|\n", width, precision, number);
	ret2 = ft_printf("|%0-#*.*x|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0856\n");
	ret1 = printf("|%0-#*.*X|\n", width, precision, number);
	ret2 = ft_printf("|%0-#*.*X|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0857\n");
	ret1 = printf("|%0-#*.*hhX|\n", width, precision, number);
	ret2 = ft_printf("|%0-#*.*hhX|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0858\n");
	ret1 = printf("|%0-#*.*hX|\n", width, precision, number);
	ret2 = ft_printf("|%0-#*.*hX|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0859\n");
	ret1 = printf("|%0-#*.*lX|\n", width, precision, number);
	ret2 = ft_printf("|%0-#*.*lX|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0860\n");
	ret1 = printf("|%0-#*.*llX|\n", width, precision, number);
	ret2 = ft_printf("|%0-#*.*llX|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0861\n");
	ret1 = printf("|%0-#*.*jX|\n", width, precision, number);
	ret2 = ft_printf("|%0-#*.*jX|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0862\n");
	ret1 = printf("|%0-#*.*zX|\n", width, precision, number);
	ret2 = ft_printf("|%0-#*.*zX|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0863\n");
	ret1 = printf("|%0-#*.*X|\n", width, precision, number);
	ret2 = ft_printf("|%0-#*.*X|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0864\n");
	ret1 = printf("|% 0-#*.*o|\n", width, precision, number);
	ret2 = ft_printf("|% 0-#*.*o|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0865\n");
	ret1 = printf("|% 0-#*.*hho|\n", width, precision, number);
	ret2 = ft_printf("|% 0-#*.*hho|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0866\n");
	ret1 = printf("|% 0-#*.*ho|\n", width, precision, number);
	ret2 = ft_printf("|% 0-#*.*ho|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0867\n");
	ret1 = printf("|% 0-#*.*lo|\n", width, precision, number);
	ret2 = ft_printf("|% 0-#*.*lo|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0868\n");
	ret1 = printf("|% 0-#*.*llo|\n", width, precision, number);
	ret2 = ft_printf("|% 0-#*.*llo|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0869\n");
	ret1 = printf("|% 0-#*.*jo|\n", width, precision, number);
	ret2 = ft_printf("|% 0-#*.*jo|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0870\n");
	ret1 = printf("|% 0-#*.*zo|\n", width, precision, number);
	ret2 = ft_printf("|% 0-#*.*zo|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0871\n");
	ret1 = printf("|% 0-#*.*o|\n", width, precision, number);
	ret2 = ft_printf("|% 0-#*.*o|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0872\n");
	ret1 = printf("|% 0-#*.*u|\n", width, precision, number);
	ret2 = ft_printf("|% 0-#*.*u|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0873\n");
	ret1 = printf("|% 0-#*.*hhu|\n", width, precision, number);
	ret2 = ft_printf("|% 0-#*.*hhu|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0874\n");
	ret1 = printf("|% 0-#*.*hu|\n", width, precision, number);
	ret2 = ft_printf("|% 0-#*.*hu|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0875\n");
	ret1 = printf("|% 0-#*.*lu|\n", width, precision, number);
	ret2 = ft_printf("|% 0-#*.*lu|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0876\n");
	ret1 = printf("|% 0-#*.*llu|\n", width, precision, number);
	ret2 = ft_printf("|% 0-#*.*llu|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0877\n");
	ret1 = printf("|% 0-#*.*ju|\n", width, precision, number);
	ret2 = ft_printf("|% 0-#*.*ju|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0878\n");
	ret1 = printf("|% 0-#*.*zu|\n", width, precision, number);
	ret2 = ft_printf("|% 0-#*.*zu|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0879\n");
	ret1 = printf("|% 0-#*.*u|\n", width, precision, number);
	ret2 = ft_printf("|% 0-#*.*u|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0880\n");
	ret1 = printf("|% 0-#*.*x|\n", width, precision, number);
	ret2 = ft_printf("|% 0-#*.*x|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0881\n");
	ret1 = printf("|% 0-#*.*hhx|\n", width, precision, number);
	ret2 = ft_printf("|% 0-#*.*hhx|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0882\n");
	ret1 = printf("|% 0-#*.*hx|\n", width, precision, number);
	ret2 = ft_printf("|% 0-#*.*hx|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0883\n");
	ret1 = printf("|% 0-#*.*lx|\n", width, precision, number);
	ret2 = ft_printf("|% 0-#*.*lx|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0884\n");
	ret1 = printf("|% 0-#*.*llx|\n", width, precision, number);
	ret2 = ft_printf("|% 0-#*.*llx|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0885\n");
	ret1 = printf("|% 0-#*.*jx|\n", width, precision, number);
	ret2 = ft_printf("|% 0-#*.*jx|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0886\n");
	ret1 = printf("|% 0-#*.*zx|\n", width, precision, number);
	ret2 = ft_printf("|% 0-#*.*zx|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0887\n");
	ret1 = printf("|% 0-#*.*x|\n", width, precision, number);
	ret2 = ft_printf("|% 0-#*.*x|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0888\n");
	ret1 = printf("|% 0-#*.*X|\n", width, precision, number);
	ret2 = ft_printf("|% 0-#*.*X|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0889\n");
	ret1 = printf("|% 0-#*.*hhX|\n", width, precision, number);
	ret2 = ft_printf("|% 0-#*.*hhX|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0890\n");
	ret1 = printf("|% 0-#*.*hX|\n", width, precision, number);
	ret2 = ft_printf("|% 0-#*.*hX|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0891\n");
	ret1 = printf("|% 0-#*.*lX|\n", width, precision, number);
	ret2 = ft_printf("|% 0-#*.*lX|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0892\n");
	ret1 = printf("|% 0-#*.*llX|\n", width, precision, number);
	ret2 = ft_printf("|% 0-#*.*llX|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0893\n");
	ret1 = printf("|% 0-#*.*jX|\n", width, precision, number);
	ret2 = ft_printf("|% 0-#*.*jX|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0894\n");
	ret1 = printf("|% 0-#*.*zX|\n", width, precision, number);
	ret2 = ft_printf("|% 0-#*.*zX|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0895\n");
	ret1 = printf("|% 0-#*.*X|\n", width, precision, number);
	ret2 = ft_printf("|% 0-#*.*X|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0896\n");
	ret1 = printf("|%+-#*.*o|\n", width, precision, number);
	ret2 = ft_printf("|%+-#*.*o|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0897\n");
	ret1 = printf("|%+-#*.*hho|\n", width, precision, number);
	ret2 = ft_printf("|%+-#*.*hho|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0898\n");
	ret1 = printf("|%+-#*.*ho|\n", width, precision, number);
	ret2 = ft_printf("|%+-#*.*ho|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0899\n");
	ret1 = printf("|%+-#*.*lo|\n", width, precision, number);
	ret2 = ft_printf("|%+-#*.*lo|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0900\n");
	ret1 = printf("|%+-#*.*llo|\n", width, precision, number);
	ret2 = ft_printf("|%+-#*.*llo|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0901\n");
	ret1 = printf("|%+-#*.*jo|\n", width, precision, number);
	ret2 = ft_printf("|%+-#*.*jo|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0902\n");
	ret1 = printf("|%+-#*.*zo|\n", width, precision, number);
	ret2 = ft_printf("|%+-#*.*zo|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0903\n");
	ret1 = printf("|%+-#*.*o|\n", width, precision, number);
	ret2 = ft_printf("|%+-#*.*o|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0904\n");
	ret1 = printf("|%+-#*.*u|\n", width, precision, number);
	ret2 = ft_printf("|%+-#*.*u|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0905\n");
	ret1 = printf("|%+-#*.*hhu|\n", width, precision, number);
	ret2 = ft_printf("|%+-#*.*hhu|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0906\n");
	ret1 = printf("|%+-#*.*hu|\n", width, precision, number);
	ret2 = ft_printf("|%+-#*.*hu|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0907\n");
	ret1 = printf("|%+-#*.*lu|\n", width, precision, number);
	ret2 = ft_printf("|%+-#*.*lu|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0908\n");
	ret1 = printf("|%+-#*.*llu|\n", width, precision, number);
	ret2 = ft_printf("|%+-#*.*llu|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0909\n");
	ret1 = printf("|%+-#*.*ju|\n", width, precision, number);
	ret2 = ft_printf("|%+-#*.*ju|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0910\n");
	ret1 = printf("|%+-#*.*zu|\n", width, precision, number);
	ret2 = ft_printf("|%+-#*.*zu|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0911\n");
	ret1 = printf("|%+-#*.*u|\n", width, precision, number);
	ret2 = ft_printf("|%+-#*.*u|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0912\n");
	ret1 = printf("|%+-#*.*x|\n", width, precision, number);
	ret2 = ft_printf("|%+-#*.*x|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0913\n");
	ret1 = printf("|%+-#*.*hhx|\n", width, precision, number);
	ret2 = ft_printf("|%+-#*.*hhx|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0914\n");
	ret1 = printf("|%+-#*.*hx|\n", width, precision, number);
	ret2 = ft_printf("|%+-#*.*hx|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0915\n");
	ret1 = printf("|%+-#*.*lx|\n", width, precision, number);
	ret2 = ft_printf("|%+-#*.*lx|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0916\n");
	ret1 = printf("|%+-#*.*llx|\n", width, precision, number);
	ret2 = ft_printf("|%+-#*.*llx|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0917\n");
	ret1 = printf("|%+-#*.*jx|\n", width, precision, number);
	ret2 = ft_printf("|%+-#*.*jx|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0918\n");
	ret1 = printf("|%+-#*.*zx|\n", width, precision, number);
	ret2 = ft_printf("|%+-#*.*zx|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0919\n");
	ret1 = printf("|%+-#*.*x|\n", width, precision, number);
	ret2 = ft_printf("|%+-#*.*x|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0920\n");
	ret1 = printf("|%+-#*.*X|\n", width, precision, number);
	ret2 = ft_printf("|%+-#*.*X|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0921\n");
	ret1 = printf("|%+-#*.*hhX|\n", width, precision, number);
	ret2 = ft_printf("|%+-#*.*hhX|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0922\n");
	ret1 = printf("|%+-#*.*hX|\n", width, precision, number);
	ret2 = ft_printf("|%+-#*.*hX|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0923\n");
	ret1 = printf("|%+-#*.*lX|\n", width, precision, number);
	ret2 = ft_printf("|%+-#*.*lX|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0924\n");
	ret1 = printf("|%+-#*.*llX|\n", width, precision, number);
	ret2 = ft_printf("|%+-#*.*llX|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0925\n");
	ret1 = printf("|%+-#*.*jX|\n", width, precision, number);
	ret2 = ft_printf("|%+-#*.*jX|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0926\n");
	ret1 = printf("|%+-#*.*zX|\n", width, precision, number);
	ret2 = ft_printf("|%+-#*.*zX|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0927\n");
	ret1 = printf("|%+-#*.*X|\n", width, precision, number);
	ret2 = ft_printf("|%+-#*.*X|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0928\n");
	ret1 = printf("|% +-#*.*o|\n", width, precision, number);
	ret2 = ft_printf("|% +-#*.*o|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0929\n");
	ret1 = printf("|% +-#*.*hho|\n", width, precision, number);
	ret2 = ft_printf("|% +-#*.*hho|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0930\n");
	ret1 = printf("|% +-#*.*ho|\n", width, precision, number);
	ret2 = ft_printf("|% +-#*.*ho|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0931\n");
	ret1 = printf("|% +-#*.*lo|\n", width, precision, number);
	ret2 = ft_printf("|% +-#*.*lo|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0932\n");
	ret1 = printf("|% +-#*.*llo|\n", width, precision, number);
	ret2 = ft_printf("|% +-#*.*llo|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0933\n");
	ret1 = printf("|% +-#*.*jo|\n", width, precision, number);
	ret2 = ft_printf("|% +-#*.*jo|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0934\n");
	ret1 = printf("|% +-#*.*zo|\n", width, precision, number);
	ret2 = ft_printf("|% +-#*.*zo|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0935\n");
	ret1 = printf("|% +-#*.*o|\n", width, precision, number);
	ret2 = ft_printf("|% +-#*.*o|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0936\n");
	ret1 = printf("|% +-#*.*u|\n", width, precision, number);
	ret2 = ft_printf("|% +-#*.*u|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0937\n");
	ret1 = printf("|% +-#*.*hhu|\n", width, precision, number);
	ret2 = ft_printf("|% +-#*.*hhu|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0938\n");
	ret1 = printf("|% +-#*.*hu|\n", width, precision, number);
	ret2 = ft_printf("|% +-#*.*hu|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0939\n");
	ret1 = printf("|% +-#*.*lu|\n", width, precision, number);
	ret2 = ft_printf("|% +-#*.*lu|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0940\n");
	ret1 = printf("|% +-#*.*llu|\n", width, precision, number);
	ret2 = ft_printf("|% +-#*.*llu|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0941\n");
	ret1 = printf("|% +-#*.*ju|\n", width, precision, number);
	ret2 = ft_printf("|% +-#*.*ju|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0942\n");
	ret1 = printf("|% +-#*.*zu|\n", width, precision, number);
	ret2 = ft_printf("|% +-#*.*zu|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0943\n");
	ret1 = printf("|% +-#*.*u|\n", width, precision, number);
	ret2 = ft_printf("|% +-#*.*u|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0944\n");
	ret1 = printf("|% +-#*.*x|\n", width, precision, number);
	ret2 = ft_printf("|% +-#*.*x|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0945\n");
	ret1 = printf("|% +-#*.*hhx|\n", width, precision, number);
	ret2 = ft_printf("|% +-#*.*hhx|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0946\n");
	ret1 = printf("|% +-#*.*hx|\n", width, precision, number);
	ret2 = ft_printf("|% +-#*.*hx|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0947\n");
	ret1 = printf("|% +-#*.*lx|\n", width, precision, number);
	ret2 = ft_printf("|% +-#*.*lx|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0948\n");
	ret1 = printf("|% +-#*.*llx|\n", width, precision, number);
	ret2 = ft_printf("|% +-#*.*llx|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0949\n");
	ret1 = printf("|% +-#*.*jx|\n", width, precision, number);
	ret2 = ft_printf("|% +-#*.*jx|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0950\n");
	ret1 = printf("|% +-#*.*zx|\n", width, precision, number);
	ret2 = ft_printf("|% +-#*.*zx|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0951\n");
	ret1 = printf("|% +-#*.*x|\n", width, precision, number);
	ret2 = ft_printf("|% +-#*.*x|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0952\n");
	ret1 = printf("|% +-#*.*X|\n", width, precision, number);
	ret2 = ft_printf("|% +-#*.*X|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0953\n");
	ret1 = printf("|% +-#*.*hhX|\n", width, precision, number);
	ret2 = ft_printf("|% +-#*.*hhX|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0954\n");
	ret1 = printf("|% +-#*.*hX|\n", width, precision, number);
	ret2 = ft_printf("|% +-#*.*hX|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0955\n");
	ret1 = printf("|% +-#*.*lX|\n", width, precision, number);
	ret2 = ft_printf("|% +-#*.*lX|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0956\n");
	ret1 = printf("|% +-#*.*llX|\n", width, precision, number);
	ret2 = ft_printf("|% +-#*.*llX|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0957\n");
	ret1 = printf("|% +-#*.*jX|\n", width, precision, number);
	ret2 = ft_printf("|% +-#*.*jX|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0958\n");
	ret1 = printf("|% +-#*.*zX|\n", width, precision, number);
	ret2 = ft_printf("|% +-#*.*zX|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0959\n");
	ret1 = printf("|% +-#*.*X|\n", width, precision, number);
	ret2 = ft_printf("|% +-#*.*X|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0960\n");
	ret1 = printf("|%0+-#*.*o|\n", width, precision, number);
	ret2 = ft_printf("|%0+-#*.*o|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0961\n");
	ret1 = printf("|%0+-#*.*hho|\n", width, precision, number);
	ret2 = ft_printf("|%0+-#*.*hho|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0962\n");
	ret1 = printf("|%0+-#*.*ho|\n", width, precision, number);
	ret2 = ft_printf("|%0+-#*.*ho|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0963\n");
	ret1 = printf("|%0+-#*.*lo|\n", width, precision, number);
	ret2 = ft_printf("|%0+-#*.*lo|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0964\n");
	ret1 = printf("|%0+-#*.*llo|\n", width, precision, number);
	ret2 = ft_printf("|%0+-#*.*llo|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0965\n");
	ret1 = printf("|%0+-#*.*jo|\n", width, precision, number);
	ret2 = ft_printf("|%0+-#*.*jo|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0966\n");
	ret1 = printf("|%0+-#*.*zo|\n", width, precision, number);
	ret2 = ft_printf("|%0+-#*.*zo|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0967\n");
	ret1 = printf("|%0+-#*.*o|\n", width, precision, number);
	ret2 = ft_printf("|%0+-#*.*o|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0968\n");
	ret1 = printf("|%0+-#*.*u|\n", width, precision, number);
	ret2 = ft_printf("|%0+-#*.*u|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0969\n");
	ret1 = printf("|%0+-#*.*hhu|\n", width, precision, number);
	ret2 = ft_printf("|%0+-#*.*hhu|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0970\n");
	ret1 = printf("|%0+-#*.*hu|\n", width, precision, number);
	ret2 = ft_printf("|%0+-#*.*hu|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0971\n");
	ret1 = printf("|%0+-#*.*lu|\n", width, precision, number);
	ret2 = ft_printf("|%0+-#*.*lu|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0972\n");
	ret1 = printf("|%0+-#*.*llu|\n", width, precision, number);
	ret2 = ft_printf("|%0+-#*.*llu|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0973\n");
	ret1 = printf("|%0+-#*.*ju|\n", width, precision, number);
	ret2 = ft_printf("|%0+-#*.*ju|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0974\n");
	ret1 = printf("|%0+-#*.*zu|\n", width, precision, number);
	ret2 = ft_printf("|%0+-#*.*zu|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0975\n");
	ret1 = printf("|%0+-#*.*u|\n", width, precision, number);
	ret2 = ft_printf("|%0+-#*.*u|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0976\n");
	ret1 = printf("|%0+-#*.*x|\n", width, precision, number);
	ret2 = ft_printf("|%0+-#*.*x|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0977\n");
	ret1 = printf("|%0+-#*.*hhx|\n", width, precision, number);
	ret2 = ft_printf("|%0+-#*.*hhx|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0978\n");
	ret1 = printf("|%0+-#*.*hx|\n", width, precision, number);
	ret2 = ft_printf("|%0+-#*.*hx|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0979\n");
	ret1 = printf("|%0+-#*.*lx|\n", width, precision, number);
	ret2 = ft_printf("|%0+-#*.*lx|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0980\n");
	ret1 = printf("|%0+-#*.*llx|\n", width, precision, number);
	ret2 = ft_printf("|%0+-#*.*llx|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0981\n");
	ret1 = printf("|%0+-#*.*jx|\n", width, precision, number);
	ret2 = ft_printf("|%0+-#*.*jx|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0982\n");
	ret1 = printf("|%0+-#*.*zx|\n", width, precision, number);
	ret2 = ft_printf("|%0+-#*.*zx|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0983\n");
	ret1 = printf("|%0+-#*.*x|\n", width, precision, number);
	ret2 = ft_printf("|%0+-#*.*x|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0984\n");
	ret1 = printf("|%0+-#*.*X|\n", width, precision, number);
	ret2 = ft_printf("|%0+-#*.*X|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0985\n");
	ret1 = printf("|%0+-#*.*hhX|\n", width, precision, number);
	ret2 = ft_printf("|%0+-#*.*hhX|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0986\n");
	ret1 = printf("|%0+-#*.*hX|\n", width, precision, number);
	ret2 = ft_printf("|%0+-#*.*hX|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0987\n");
	ret1 = printf("|%0+-#*.*lX|\n", width, precision, number);
	ret2 = ft_printf("|%0+-#*.*lX|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0988\n");
	ret1 = printf("|%0+-#*.*llX|\n", width, precision, number);
	ret2 = ft_printf("|%0+-#*.*llX|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0989\n");
	ret1 = printf("|%0+-#*.*jX|\n", width, precision, number);
	ret2 = ft_printf("|%0+-#*.*jX|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0990\n");
	ret1 = printf("|%0+-#*.*zX|\n", width, precision, number);
	ret2 = ft_printf("|%0+-#*.*zX|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0991\n");
	ret1 = printf("|%0+-#*.*X|\n", width, precision, number);
	ret2 = ft_printf("|%0+-#*.*X|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0992\n");
	ret1 = printf("|% 0+-#*.*o|\n", width, precision, number);
	ret2 = ft_printf("|% 0+-#*.*o|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0993\n");
	ret1 = printf("|% 0+-#*.*hho|\n", width, precision, number);
	ret2 = ft_printf("|% 0+-#*.*hho|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0994\n");
	ret1 = printf("|% 0+-#*.*ho|\n", width, precision, number);
	ret2 = ft_printf("|% 0+-#*.*ho|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0995\n");
	ret1 = printf("|% 0+-#*.*lo|\n", width, precision, number);
	ret2 = ft_printf("|% 0+-#*.*lo|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0996\n");
	ret1 = printf("|% 0+-#*.*llo|\n", width, precision, number);
	ret2 = ft_printf("|% 0+-#*.*llo|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0997\n");
	ret1 = printf("|% 0+-#*.*jo|\n", width, precision, number);
	ret2 = ft_printf("|% 0+-#*.*jo|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0998\n");
	ret1 = printf("|% 0+-#*.*zo|\n", width, precision, number);
	ret2 = ft_printf("|% 0+-#*.*zo|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0999\n");
	ret1 = printf("|% 0+-#*.*o|\n", width, precision, number);
	ret2 = ft_printf("|% 0+-#*.*o|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #1000\n");
	ret1 = printf("|% 0+-#*.*u|\n", width, precision, number);
	ret2 = ft_printf("|% 0+-#*.*u|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #1001\n");
	ret1 = printf("|% 0+-#*.*hhu|\n", width, precision, number);
	ret2 = ft_printf("|% 0+-#*.*hhu|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #1002\n");
	ret1 = printf("|% 0+-#*.*hu|\n", width, precision, number);
	ret2 = ft_printf("|% 0+-#*.*hu|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #1003\n");
	ret1 = printf("|% 0+-#*.*lu|\n", width, precision, number);
	ret2 = ft_printf("|% 0+-#*.*lu|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #1004\n");
	ret1 = printf("|% 0+-#*.*llu|\n", width, precision, number);
	ret2 = ft_printf("|% 0+-#*.*llu|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #1005\n");
	ret1 = printf("|% 0+-#*.*ju|\n", width, precision, number);
	ret2 = ft_printf("|% 0+-#*.*ju|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #1006\n");
	ret1 = printf("|% 0+-#*.*zu|\n", width, precision, number);
	ret2 = ft_printf("|% 0+-#*.*zu|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #1007\n");
	ret1 = printf("|% 0+-#*.*u|\n", width, precision, number);
	ret2 = ft_printf("|% 0+-#*.*u|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #1008\n");
	ret1 = printf("|% 0+-#*.*x|\n", width, precision, number);
	ret2 = ft_printf("|% 0+-#*.*x|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #1009\n");
	ret1 = printf("|% 0+-#*.*hhx|\n", width, precision, number);
	ret2 = ft_printf("|% 0+-#*.*hhx|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #1010\n");
	ret1 = printf("|% 0+-#*.*hx|\n", width, precision, number);
	ret2 = ft_printf("|% 0+-#*.*hx|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #1011\n");
	ret1 = printf("|% 0+-#*.*lx|\n", width, precision, number);
	ret2 = ft_printf("|% 0+-#*.*lx|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #1012\n");
	ret1 = printf("|% 0+-#*.*llx|\n", width, precision, number);
	ret2 = ft_printf("|% 0+-#*.*llx|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #1013\n");
	ret1 = printf("|% 0+-#*.*jx|\n", width, precision, number);
	ret2 = ft_printf("|% 0+-#*.*jx|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #1014\n");
	ret1 = printf("|% 0+-#*.*zx|\n", width, precision, number);
	ret2 = ft_printf("|% 0+-#*.*zx|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #1015\n");
	ret1 = printf("|% 0+-#*.*x|\n", width, precision, number);
	ret2 = ft_printf("|% 0+-#*.*x|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #1016\n");
	ret1 = printf("|% 0+-#*.*X|\n", width, precision, number);
	ret2 = ft_printf("|% 0+-#*.*X|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #1017\n");
	ret1 = printf("|% 0+-#*.*hhX|\n", width, precision, number);
	ret2 = ft_printf("|% 0+-#*.*hhX|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #1018\n");
	ret1 = printf("|% 0+-#*.*hX|\n", width, precision, number);
	ret2 = ft_printf("|% 0+-#*.*hX|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #1019\n");
	ret1 = printf("|% 0+-#*.*lX|\n", width, precision, number);
	ret2 = ft_printf("|% 0+-#*.*lX|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #1020\n");
	ret1 = printf("|% 0+-#*.*llX|\n", width, precision, number);
	ret2 = ft_printf("|% 0+-#*.*llX|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #1021\n");
	ret1 = printf("|% 0+-#*.*jX|\n", width, precision, number);
	ret2 = ft_printf("|% 0+-#*.*jX|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #1022\n");
	ret1 = printf("|% 0+-#*.*zX|\n", width, precision, number);
	ret2 = ft_printf("|% 0+-#*.*zX|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #1023\n");
	ret1 = printf("|% 0+-#*.*X|\n", width, precision, number);
	ret2 = ft_printf("|% 0+-#*.*X|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

}
