#include <stdio.h>
#include <stdint.h>
#include "libftprintf.h"

void		signed_number_testing(int width, int precision, intmax_t number)
{
	int		ret1;
	int		ret2;

	printf("Test #0000\n");
	ret1 = printf("|%*.*d|\n", width, precision, number);
	ret2 = ft_printf("|%*.*d|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0001\n");
	ret1 = printf("|%*.*hhd|\n", width, precision, number);
	ret2 = ft_printf("|%*.*hhd|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0002\n");
	ret1 = printf("|%*.*hd|\n", width, precision, number);
	ret2 = ft_printf("|%*.*hd|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0003\n");
	ret1 = printf("|%*.*ld|\n", width, precision, number);
	ret2 = ft_printf("|%*.*ld|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0004\n");
	ret1 = printf("|%*.*lld|\n", width, precision, number);
	ret2 = ft_printf("|%*.*lld|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0005\n");
	ret1 = printf("|%*.*jd|\n", width, precision, number);
	ret2 = ft_printf("|%*.*jd|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0006\n");
	ret1 = printf("|%*.*zd|\n", width, precision, number);
	ret2 = ft_printf("|%*.*zd|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0007\n");
	ret1 = printf("|%*.*d|\n", width, precision, number);
	ret2 = ft_printf("|%*.*d|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0008\n");
	ret1 = printf("|%*.*i|\n", width, precision, number);
	ret2 = ft_printf("|%*.*i|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0009\n");
	ret1 = printf("|%*.*hhi|\n", width, precision, number);
	ret2 = ft_printf("|%*.*hhi|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0010\n");
	ret1 = printf("|%*.*hi|\n", width, precision, number);
	ret2 = ft_printf("|%*.*hi|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0011\n");
	ret1 = printf("|%*.*li|\n", width, precision, number);
	ret2 = ft_printf("|%*.*li|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0012\n");
	ret1 = printf("|%*.*lli|\n", width, precision, number);
	ret2 = ft_printf("|%*.*lli|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0013\n");
	ret1 = printf("|%*.*ji|\n", width, precision, number);
	ret2 = ft_printf("|%*.*ji|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0014\n");
	ret1 = printf("|%*.*zi|\n", width, precision, number);
	ret2 = ft_printf("|%*.*zi|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0015\n");
	ret1 = printf("|%*.*i|\n", width, precision, number);
	ret2 = ft_printf("|%*.*i|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0016\n");
	ret1 = printf("|% *.*d|\n", width, precision, number);
	ret2 = ft_printf("|% *.*d|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0017\n");
	ret1 = printf("|% *.*hhd|\n", width, precision, number);
	ret2 = ft_printf("|% *.*hhd|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0018\n");
	ret1 = printf("|% *.*hd|\n", width, precision, number);
	ret2 = ft_printf("|% *.*hd|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0019\n");
	ret1 = printf("|% *.*ld|\n", width, precision, number);
	ret2 = ft_printf("|% *.*ld|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0020\n");
	ret1 = printf("|% *.*lld|\n", width, precision, number);
	ret2 = ft_printf("|% *.*lld|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0021\n");
	ret1 = printf("|% *.*jd|\n", width, precision, number);
	ret2 = ft_printf("|% *.*jd|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0022\n");
	ret1 = printf("|% *.*zd|\n", width, precision, number);
	ret2 = ft_printf("|% *.*zd|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0023\n");
	ret1 = printf("|% *.*d|\n", width, precision, number);
	ret2 = ft_printf("|% *.*d|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0024\n");
	ret1 = printf("|% *.*i|\n", width, precision, number);
	ret2 = ft_printf("|% *.*i|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0025\n");
	ret1 = printf("|% *.*hhi|\n", width, precision, number);
	ret2 = ft_printf("|% *.*hhi|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0026\n");
	ret1 = printf("|% *.*hi|\n", width, precision, number);
	ret2 = ft_printf("|% *.*hi|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0027\n");
	ret1 = printf("|% *.*li|\n", width, precision, number);
	ret2 = ft_printf("|% *.*li|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0028\n");
	ret1 = printf("|% *.*lli|\n", width, precision, number);
	ret2 = ft_printf("|% *.*lli|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0029\n");
	ret1 = printf("|% *.*ji|\n", width, precision, number);
	ret2 = ft_printf("|% *.*ji|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0030\n");
	ret1 = printf("|% *.*zi|\n", width, precision, number);
	ret2 = ft_printf("|% *.*zi|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0031\n");
	ret1 = printf("|% *.*i|\n", width, precision, number);
	ret2 = ft_printf("|% *.*i|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0032\n");
	ret1 = printf("|%0*.*d|\n", width, precision, number);
	ret2 = ft_printf("|%0*.*d|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0033\n");
	ret1 = printf("|%0*.*hhd|\n", width, precision, number);
	ret2 = ft_printf("|%0*.*hhd|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0034\n");
	ret1 = printf("|%0*.*hd|\n", width, precision, number);
	ret2 = ft_printf("|%0*.*hd|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0035\n");
	ret1 = printf("|%0*.*ld|\n", width, precision, number);
	ret2 = ft_printf("|%0*.*ld|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0036\n");
	ret1 = printf("|%0*.*lld|\n", width, precision, number);
	ret2 = ft_printf("|%0*.*lld|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0037\n");
	ret1 = printf("|%0*.*jd|\n", width, precision, number);
	ret2 = ft_printf("|%0*.*jd|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0038\n");
	ret1 = printf("|%0*.*zd|\n", width, precision, number);
	ret2 = ft_printf("|%0*.*zd|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0039\n");
	ret1 = printf("|%0*.*d|\n", width, precision, number);
	ret2 = ft_printf("|%0*.*d|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0040\n");
	ret1 = printf("|%0*.*i|\n", width, precision, number);
	ret2 = ft_printf("|%0*.*i|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0041\n");
	ret1 = printf("|%0*.*hhi|\n", width, precision, number);
	ret2 = ft_printf("|%0*.*hhi|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0042\n");
	ret1 = printf("|%0*.*hi|\n", width, precision, number);
	ret2 = ft_printf("|%0*.*hi|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0043\n");
	ret1 = printf("|%0*.*li|\n", width, precision, number);
	ret2 = ft_printf("|%0*.*li|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0044\n");
	ret1 = printf("|%0*.*lli|\n", width, precision, number);
	ret2 = ft_printf("|%0*.*lli|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0045\n");
	ret1 = printf("|%0*.*ji|\n", width, precision, number);
	ret2 = ft_printf("|%0*.*ji|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0046\n");
	ret1 = printf("|%0*.*zi|\n", width, precision, number);
	ret2 = ft_printf("|%0*.*zi|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0047\n");
	ret1 = printf("|%0*.*i|\n", width, precision, number);
	ret2 = ft_printf("|%0*.*i|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0048\n");
	ret1 = printf("|% 0*.*d|\n", width, precision, number);
	ret2 = ft_printf("|% 0*.*d|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0049\n");
	ret1 = printf("|% 0*.*hhd|\n", width, precision, number);
	ret2 = ft_printf("|% 0*.*hhd|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0050\n");
	ret1 = printf("|% 0*.*hd|\n", width, precision, number);
	ret2 = ft_printf("|% 0*.*hd|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0051\n");
	ret1 = printf("|% 0*.*ld|\n", width, precision, number);
	ret2 = ft_printf("|% 0*.*ld|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0052\n");
	ret1 = printf("|% 0*.*lld|\n", width, precision, number);
	ret2 = ft_printf("|% 0*.*lld|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0053\n");
	ret1 = printf("|% 0*.*jd|\n", width, precision, number);
	ret2 = ft_printf("|% 0*.*jd|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0054\n");
	ret1 = printf("|% 0*.*zd|\n", width, precision, number);
	ret2 = ft_printf("|% 0*.*zd|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0055\n");
	ret1 = printf("|% 0*.*d|\n", width, precision, number);
	ret2 = ft_printf("|% 0*.*d|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0056\n");
	ret1 = printf("|% 0*.*i|\n", width, precision, number);
	ret2 = ft_printf("|% 0*.*i|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0057\n");
	ret1 = printf("|% 0*.*hhi|\n", width, precision, number);
	ret2 = ft_printf("|% 0*.*hhi|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0058\n");
	ret1 = printf("|% 0*.*hi|\n", width, precision, number);
	ret2 = ft_printf("|% 0*.*hi|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0059\n");
	ret1 = printf("|% 0*.*li|\n", width, precision, number);
	ret2 = ft_printf("|% 0*.*li|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0060\n");
	ret1 = printf("|% 0*.*lli|\n", width, precision, number);
	ret2 = ft_printf("|% 0*.*lli|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0061\n");
	ret1 = printf("|% 0*.*ji|\n", width, precision, number);
	ret2 = ft_printf("|% 0*.*ji|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0062\n");
	ret1 = printf("|% 0*.*zi|\n", width, precision, number);
	ret2 = ft_printf("|% 0*.*zi|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0063\n");
	ret1 = printf("|% 0*.*i|\n", width, precision, number);
	ret2 = ft_printf("|% 0*.*i|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0064\n");
	ret1 = printf("|%+*.*d|\n", width, precision, number);
	ret2 = ft_printf("|%+*.*d|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0065\n");
	ret1 = printf("|%+*.*hhd|\n", width, precision, number);
	ret2 = ft_printf("|%+*.*hhd|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0066\n");
	ret1 = printf("|%+*.*hd|\n", width, precision, number);
	ret2 = ft_printf("|%+*.*hd|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0067\n");
	ret1 = printf("|%+*.*ld|\n", width, precision, number);
	ret2 = ft_printf("|%+*.*ld|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0068\n");
	ret1 = printf("|%+*.*lld|\n", width, precision, number);
	ret2 = ft_printf("|%+*.*lld|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0069\n");
	ret1 = printf("|%+*.*jd|\n", width, precision, number);
	ret2 = ft_printf("|%+*.*jd|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0070\n");
	ret1 = printf("|%+*.*zd|\n", width, precision, number);
	ret2 = ft_printf("|%+*.*zd|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0071\n");
	ret1 = printf("|%+*.*d|\n", width, precision, number);
	ret2 = ft_printf("|%+*.*d|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0072\n");
	ret1 = printf("|%+*.*i|\n", width, precision, number);
	ret2 = ft_printf("|%+*.*i|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0073\n");
	ret1 = printf("|%+*.*hhi|\n", width, precision, number);
	ret2 = ft_printf("|%+*.*hhi|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0074\n");
	ret1 = printf("|%+*.*hi|\n", width, precision, number);
	ret2 = ft_printf("|%+*.*hi|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0075\n");
	ret1 = printf("|%+*.*li|\n", width, precision, number);
	ret2 = ft_printf("|%+*.*li|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0076\n");
	ret1 = printf("|%+*.*lli|\n", width, precision, number);
	ret2 = ft_printf("|%+*.*lli|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0077\n");
	ret1 = printf("|%+*.*ji|\n", width, precision, number);
	ret2 = ft_printf("|%+*.*ji|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0078\n");
	ret1 = printf("|%+*.*zi|\n", width, precision, number);
	ret2 = ft_printf("|%+*.*zi|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0079\n");
	ret1 = printf("|%+*.*i|\n", width, precision, number);
	ret2 = ft_printf("|%+*.*i|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0080\n");
	ret1 = printf("|% +*.*d|\n", width, precision, number);
	ret2 = ft_printf("|% +*.*d|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0081\n");
	ret1 = printf("|% +*.*hhd|\n", width, precision, number);
	ret2 = ft_printf("|% +*.*hhd|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0082\n");
	ret1 = printf("|% +*.*hd|\n", width, precision, number);
	ret2 = ft_printf("|% +*.*hd|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0083\n");
	ret1 = printf("|% +*.*ld|\n", width, precision, number);
	ret2 = ft_printf("|% +*.*ld|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0084\n");
	ret1 = printf("|% +*.*lld|\n", width, precision, number);
	ret2 = ft_printf("|% +*.*lld|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0085\n");
	ret1 = printf("|% +*.*jd|\n", width, precision, number);
	ret2 = ft_printf("|% +*.*jd|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0086\n");
	ret1 = printf("|% +*.*zd|\n", width, precision, number);
	ret2 = ft_printf("|% +*.*zd|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0087\n");
	ret1 = printf("|% +*.*d|\n", width, precision, number);
	ret2 = ft_printf("|% +*.*d|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0088\n");
	ret1 = printf("|% +*.*i|\n", width, precision, number);
	ret2 = ft_printf("|% +*.*i|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0089\n");
	ret1 = printf("|% +*.*hhi|\n", width, precision, number);
	ret2 = ft_printf("|% +*.*hhi|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0090\n");
	ret1 = printf("|% +*.*hi|\n", width, precision, number);
	ret2 = ft_printf("|% +*.*hi|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0091\n");
	ret1 = printf("|% +*.*li|\n", width, precision, number);
	ret2 = ft_printf("|% +*.*li|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0092\n");
	ret1 = printf("|% +*.*lli|\n", width, precision, number);
	ret2 = ft_printf("|% +*.*lli|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0093\n");
	ret1 = printf("|% +*.*ji|\n", width, precision, number);
	ret2 = ft_printf("|% +*.*ji|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0094\n");
	ret1 = printf("|% +*.*zi|\n", width, precision, number);
	ret2 = ft_printf("|% +*.*zi|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0095\n");
	ret1 = printf("|% +*.*i|\n", width, precision, number);
	ret2 = ft_printf("|% +*.*i|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0096\n");
	ret1 = printf("|%0+*.*d|\n", width, precision, number);
	ret2 = ft_printf("|%0+*.*d|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0097\n");
	ret1 = printf("|%0+*.*hhd|\n", width, precision, number);
	ret2 = ft_printf("|%0+*.*hhd|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0098\n");
	ret1 = printf("|%0+*.*hd|\n", width, precision, number);
	ret2 = ft_printf("|%0+*.*hd|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0099\n");
	ret1 = printf("|%0+*.*ld|\n", width, precision, number);
	ret2 = ft_printf("|%0+*.*ld|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0100\n");
	ret1 = printf("|%0+*.*lld|\n", width, precision, number);
	ret2 = ft_printf("|%0+*.*lld|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0101\n");
	ret1 = printf("|%0+*.*jd|\n", width, precision, number);
	ret2 = ft_printf("|%0+*.*jd|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0102\n");
	ret1 = printf("|%0+*.*zd|\n", width, precision, number);
	ret2 = ft_printf("|%0+*.*zd|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0103\n");
	ret1 = printf("|%0+*.*d|\n", width, precision, number);
	ret2 = ft_printf("|%0+*.*d|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0104\n");
	ret1 = printf("|%0+*.*i|\n", width, precision, number);
	ret2 = ft_printf("|%0+*.*i|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0105\n");
	ret1 = printf("|%0+*.*hhi|\n", width, precision, number);
	ret2 = ft_printf("|%0+*.*hhi|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0106\n");
	ret1 = printf("|%0+*.*hi|\n", width, precision, number);
	ret2 = ft_printf("|%0+*.*hi|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0107\n");
	ret1 = printf("|%0+*.*li|\n", width, precision, number);
	ret2 = ft_printf("|%0+*.*li|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0108\n");
	ret1 = printf("|%0+*.*lli|\n", width, precision, number);
	ret2 = ft_printf("|%0+*.*lli|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0109\n");
	ret1 = printf("|%0+*.*ji|\n", width, precision, number);
	ret2 = ft_printf("|%0+*.*ji|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0110\n");
	ret1 = printf("|%0+*.*zi|\n", width, precision, number);
	ret2 = ft_printf("|%0+*.*zi|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0111\n");
	ret1 = printf("|%0+*.*i|\n", width, precision, number);
	ret2 = ft_printf("|%0+*.*i|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0112\n");
	ret1 = printf("|% 0+*.*d|\n", width, precision, number);
	ret2 = ft_printf("|% 0+*.*d|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0113\n");
	ret1 = printf("|% 0+*.*hhd|\n", width, precision, number);
	ret2 = ft_printf("|% 0+*.*hhd|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0114\n");
	ret1 = printf("|% 0+*.*hd|\n", width, precision, number);
	ret2 = ft_printf("|% 0+*.*hd|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0115\n");
	ret1 = printf("|% 0+*.*ld|\n", width, precision, number);
	ret2 = ft_printf("|% 0+*.*ld|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0116\n");
	ret1 = printf("|% 0+*.*lld|\n", width, precision, number);
	ret2 = ft_printf("|% 0+*.*lld|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0117\n");
	ret1 = printf("|% 0+*.*jd|\n", width, precision, number);
	ret2 = ft_printf("|% 0+*.*jd|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0118\n");
	ret1 = printf("|% 0+*.*zd|\n", width, precision, number);
	ret2 = ft_printf("|% 0+*.*zd|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0119\n");
	ret1 = printf("|% 0+*.*d|\n", width, precision, number);
	ret2 = ft_printf("|% 0+*.*d|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0120\n");
	ret1 = printf("|% 0+*.*i|\n", width, precision, number);
	ret2 = ft_printf("|% 0+*.*i|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0121\n");
	ret1 = printf("|% 0+*.*hhi|\n", width, precision, number);
	ret2 = ft_printf("|% 0+*.*hhi|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0122\n");
	ret1 = printf("|% 0+*.*hi|\n", width, precision, number);
	ret2 = ft_printf("|% 0+*.*hi|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0123\n");
	ret1 = printf("|% 0+*.*li|\n", width, precision, number);
	ret2 = ft_printf("|% 0+*.*li|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0124\n");
	ret1 = printf("|% 0+*.*lli|\n", width, precision, number);
	ret2 = ft_printf("|% 0+*.*lli|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0125\n");
	ret1 = printf("|% 0+*.*ji|\n", width, precision, number);
	ret2 = ft_printf("|% 0+*.*ji|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0126\n");
	ret1 = printf("|% 0+*.*zi|\n", width, precision, number);
	ret2 = ft_printf("|% 0+*.*zi|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0127\n");
	ret1 = printf("|% 0+*.*i|\n", width, precision, number);
	ret2 = ft_printf("|% 0+*.*i|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0128\n");
	ret1 = printf("|%-*.*d|\n", width, precision, number);
	ret2 = ft_printf("|%-*.*d|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0129\n");
	ret1 = printf("|%-*.*hhd|\n", width, precision, number);
	ret2 = ft_printf("|%-*.*hhd|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0130\n");
	ret1 = printf("|%-*.*hd|\n", width, precision, number);
	ret2 = ft_printf("|%-*.*hd|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0131\n");
	ret1 = printf("|%-*.*ld|\n", width, precision, number);
	ret2 = ft_printf("|%-*.*ld|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0132\n");
	ret1 = printf("|%-*.*lld|\n", width, precision, number);
	ret2 = ft_printf("|%-*.*lld|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0133\n");
	ret1 = printf("|%-*.*jd|\n", width, precision, number);
	ret2 = ft_printf("|%-*.*jd|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0134\n");
	ret1 = printf("|%-*.*zd|\n", width, precision, number);
	ret2 = ft_printf("|%-*.*zd|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0135\n");
	ret1 = printf("|%-*.*d|\n", width, precision, number);
	ret2 = ft_printf("|%-*.*d|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0136\n");
	ret1 = printf("|%-*.*i|\n", width, precision, number);
	ret2 = ft_printf("|%-*.*i|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0137\n");
	ret1 = printf("|%-*.*hhi|\n", width, precision, number);
	ret2 = ft_printf("|%-*.*hhi|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0138\n");
	ret1 = printf("|%-*.*hi|\n", width, precision, number);
	ret2 = ft_printf("|%-*.*hi|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0139\n");
	ret1 = printf("|%-*.*li|\n", width, precision, number);
	ret2 = ft_printf("|%-*.*li|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0140\n");
	ret1 = printf("|%-*.*lli|\n", width, precision, number);
	ret2 = ft_printf("|%-*.*lli|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0141\n");
	ret1 = printf("|%-*.*ji|\n", width, precision, number);
	ret2 = ft_printf("|%-*.*ji|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0142\n");
	ret1 = printf("|%-*.*zi|\n", width, precision, number);
	ret2 = ft_printf("|%-*.*zi|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0143\n");
	ret1 = printf("|%-*.*i|\n", width, precision, number);
	ret2 = ft_printf("|%-*.*i|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0144\n");
	ret1 = printf("|% -*.*d|\n", width, precision, number);
	ret2 = ft_printf("|% -*.*d|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0145\n");
	ret1 = printf("|% -*.*hhd|\n", width, precision, number);
	ret2 = ft_printf("|% -*.*hhd|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0146\n");
	ret1 = printf("|% -*.*hd|\n", width, precision, number);
	ret2 = ft_printf("|% -*.*hd|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0147\n");
	ret1 = printf("|% -*.*ld|\n", width, precision, number);
	ret2 = ft_printf("|% -*.*ld|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0148\n");
	ret1 = printf("|% -*.*lld|\n", width, precision, number);
	ret2 = ft_printf("|% -*.*lld|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0149\n");
	ret1 = printf("|% -*.*jd|\n", width, precision, number);
	ret2 = ft_printf("|% -*.*jd|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0150\n");
	ret1 = printf("|% -*.*zd|\n", width, precision, number);
	ret2 = ft_printf("|% -*.*zd|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0151\n");
	ret1 = printf("|% -*.*d|\n", width, precision, number);
	ret2 = ft_printf("|% -*.*d|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0152\n");
	ret1 = printf("|% -*.*i|\n", width, precision, number);
	ret2 = ft_printf("|% -*.*i|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0153\n");
	ret1 = printf("|% -*.*hhi|\n", width, precision, number);
	ret2 = ft_printf("|% -*.*hhi|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0154\n");
	ret1 = printf("|% -*.*hi|\n", width, precision, number);
	ret2 = ft_printf("|% -*.*hi|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0155\n");
	ret1 = printf("|% -*.*li|\n", width, precision, number);
	ret2 = ft_printf("|% -*.*li|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0156\n");
	ret1 = printf("|% -*.*lli|\n", width, precision, number);
	ret2 = ft_printf("|% -*.*lli|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0157\n");
	ret1 = printf("|% -*.*ji|\n", width, precision, number);
	ret2 = ft_printf("|% -*.*ji|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0158\n");
	ret1 = printf("|% -*.*zi|\n", width, precision, number);
	ret2 = ft_printf("|% -*.*zi|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0159\n");
	ret1 = printf("|% -*.*i|\n", width, precision, number);
	ret2 = ft_printf("|% -*.*i|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0160\n");
	ret1 = printf("|%0-*.*d|\n", width, precision, number);
	ret2 = ft_printf("|%0-*.*d|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0161\n");
	ret1 = printf("|%0-*.*hhd|\n", width, precision, number);
	ret2 = ft_printf("|%0-*.*hhd|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0162\n");
	ret1 = printf("|%0-*.*hd|\n", width, precision, number);
	ret2 = ft_printf("|%0-*.*hd|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0163\n");
	ret1 = printf("|%0-*.*ld|\n", width, precision, number);
	ret2 = ft_printf("|%0-*.*ld|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0164\n");
	ret1 = printf("|%0-*.*lld|\n", width, precision, number);
	ret2 = ft_printf("|%0-*.*lld|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0165\n");
	ret1 = printf("|%0-*.*jd|\n", width, precision, number);
	ret2 = ft_printf("|%0-*.*jd|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0166\n");
	ret1 = printf("|%0-*.*zd|\n", width, precision, number);
	ret2 = ft_printf("|%0-*.*zd|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0167\n");
	ret1 = printf("|%0-*.*d|\n", width, precision, number);
	ret2 = ft_printf("|%0-*.*d|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0168\n");
	ret1 = printf("|%0-*.*i|\n", width, precision, number);
	ret2 = ft_printf("|%0-*.*i|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0169\n");
	ret1 = printf("|%0-*.*hhi|\n", width, precision, number);
	ret2 = ft_printf("|%0-*.*hhi|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0170\n");
	ret1 = printf("|%0-*.*hi|\n", width, precision, number);
	ret2 = ft_printf("|%0-*.*hi|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0171\n");
	ret1 = printf("|%0-*.*li|\n", width, precision, number);
	ret2 = ft_printf("|%0-*.*li|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0172\n");
	ret1 = printf("|%0-*.*lli|\n", width, precision, number);
	ret2 = ft_printf("|%0-*.*lli|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0173\n");
	ret1 = printf("|%0-*.*ji|\n", width, precision, number);
	ret2 = ft_printf("|%0-*.*ji|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0174\n");
	ret1 = printf("|%0-*.*zi|\n", width, precision, number);
	ret2 = ft_printf("|%0-*.*zi|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0175\n");
	ret1 = printf("|%0-*.*i|\n", width, precision, number);
	ret2 = ft_printf("|%0-*.*i|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0176\n");
	ret1 = printf("|% 0-*.*d|\n", width, precision, number);
	ret2 = ft_printf("|% 0-*.*d|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0177\n");
	ret1 = printf("|% 0-*.*hhd|\n", width, precision, number);
	ret2 = ft_printf("|% 0-*.*hhd|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0178\n");
	ret1 = printf("|% 0-*.*hd|\n", width, precision, number);
	ret2 = ft_printf("|% 0-*.*hd|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0179\n");
	ret1 = printf("|% 0-*.*ld|\n", width, precision, number);
	ret2 = ft_printf("|% 0-*.*ld|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0180\n");
	ret1 = printf("|% 0-*.*lld|\n", width, precision, number);
	ret2 = ft_printf("|% 0-*.*lld|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0181\n");
	ret1 = printf("|% 0-*.*jd|\n", width, precision, number);
	ret2 = ft_printf("|% 0-*.*jd|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0182\n");
	ret1 = printf("|% 0-*.*zd|\n", width, precision, number);
	ret2 = ft_printf("|% 0-*.*zd|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0183\n");
	ret1 = printf("|% 0-*.*d|\n", width, precision, number);
	ret2 = ft_printf("|% 0-*.*d|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0184\n");
	ret1 = printf("|% 0-*.*i|\n", width, precision, number);
	ret2 = ft_printf("|% 0-*.*i|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0185\n");
	ret1 = printf("|% 0-*.*hhi|\n", width, precision, number);
	ret2 = ft_printf("|% 0-*.*hhi|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0186\n");
	ret1 = printf("|% 0-*.*hi|\n", width, precision, number);
	ret2 = ft_printf("|% 0-*.*hi|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0187\n");
	ret1 = printf("|% 0-*.*li|\n", width, precision, number);
	ret2 = ft_printf("|% 0-*.*li|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0188\n");
	ret1 = printf("|% 0-*.*lli|\n", width, precision, number);
	ret2 = ft_printf("|% 0-*.*lli|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0189\n");
	ret1 = printf("|% 0-*.*ji|\n", width, precision, number);
	ret2 = ft_printf("|% 0-*.*ji|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0190\n");
	ret1 = printf("|% 0-*.*zi|\n", width, precision, number);
	ret2 = ft_printf("|% 0-*.*zi|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0191\n");
	ret1 = printf("|% 0-*.*i|\n", width, precision, number);
	ret2 = ft_printf("|% 0-*.*i|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0192\n");
	ret1 = printf("|%+-*.*d|\n", width, precision, number);
	ret2 = ft_printf("|%+-*.*d|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0193\n");
	ret1 = printf("|%+-*.*hhd|\n", width, precision, number);
	ret2 = ft_printf("|%+-*.*hhd|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0194\n");
	ret1 = printf("|%+-*.*hd|\n", width, precision, number);
	ret2 = ft_printf("|%+-*.*hd|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0195\n");
	ret1 = printf("|%+-*.*ld|\n", width, precision, number);
	ret2 = ft_printf("|%+-*.*ld|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0196\n");
	ret1 = printf("|%+-*.*lld|\n", width, precision, number);
	ret2 = ft_printf("|%+-*.*lld|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0197\n");
	ret1 = printf("|%+-*.*jd|\n", width, precision, number);
	ret2 = ft_printf("|%+-*.*jd|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0198\n");
	ret1 = printf("|%+-*.*zd|\n", width, precision, number);
	ret2 = ft_printf("|%+-*.*zd|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0199\n");
	ret1 = printf("|%+-*.*d|\n", width, precision, number);
	ret2 = ft_printf("|%+-*.*d|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0200\n");
	ret1 = printf("|%+-*.*i|\n", width, precision, number);
	ret2 = ft_printf("|%+-*.*i|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0201\n");
	ret1 = printf("|%+-*.*hhi|\n", width, precision, number);
	ret2 = ft_printf("|%+-*.*hhi|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0202\n");
	ret1 = printf("|%+-*.*hi|\n", width, precision, number);
	ret2 = ft_printf("|%+-*.*hi|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0203\n");
	ret1 = printf("|%+-*.*li|\n", width, precision, number);
	ret2 = ft_printf("|%+-*.*li|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0204\n");
	ret1 = printf("|%+-*.*lli|\n", width, precision, number);
	ret2 = ft_printf("|%+-*.*lli|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0205\n");
	ret1 = printf("|%+-*.*ji|\n", width, precision, number);
	ret2 = ft_printf("|%+-*.*ji|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0206\n");
	ret1 = printf("|%+-*.*zi|\n", width, precision, number);
	ret2 = ft_printf("|%+-*.*zi|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0207\n");
	ret1 = printf("|%+-*.*i|\n", width, precision, number);
	ret2 = ft_printf("|%+-*.*i|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0208\n");
	ret1 = printf("|% +-*.*d|\n", width, precision, number);
	ret2 = ft_printf("|% +-*.*d|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0209\n");
	ret1 = printf("|% +-*.*hhd|\n", width, precision, number);
	ret2 = ft_printf("|% +-*.*hhd|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0210\n");
	ret1 = printf("|% +-*.*hd|\n", width, precision, number);
	ret2 = ft_printf("|% +-*.*hd|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0211\n");
	ret1 = printf("|% +-*.*ld|\n", width, precision, number);
	ret2 = ft_printf("|% +-*.*ld|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0212\n");
	ret1 = printf("|% +-*.*lld|\n", width, precision, number);
	ret2 = ft_printf("|% +-*.*lld|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0213\n");
	ret1 = printf("|% +-*.*jd|\n", width, precision, number);
	ret2 = ft_printf("|% +-*.*jd|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0214\n");
	ret1 = printf("|% +-*.*zd|\n", width, precision, number);
	ret2 = ft_printf("|% +-*.*zd|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0215\n");
	ret1 = printf("|% +-*.*d|\n", width, precision, number);
	ret2 = ft_printf("|% +-*.*d|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0216\n");
	ret1 = printf("|% +-*.*i|\n", width, precision, number);
	ret2 = ft_printf("|% +-*.*i|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0217\n");
	ret1 = printf("|% +-*.*hhi|\n", width, precision, number);
	ret2 = ft_printf("|% +-*.*hhi|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0218\n");
	ret1 = printf("|% +-*.*hi|\n", width, precision, number);
	ret2 = ft_printf("|% +-*.*hi|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0219\n");
	ret1 = printf("|% +-*.*li|\n", width, precision, number);
	ret2 = ft_printf("|% +-*.*li|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0220\n");
	ret1 = printf("|% +-*.*lli|\n", width, precision, number);
	ret2 = ft_printf("|% +-*.*lli|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0221\n");
	ret1 = printf("|% +-*.*ji|\n", width, precision, number);
	ret2 = ft_printf("|% +-*.*ji|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0222\n");
	ret1 = printf("|% +-*.*zi|\n", width, precision, number);
	ret2 = ft_printf("|% +-*.*zi|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0223\n");
	ret1 = printf("|% +-*.*i|\n", width, precision, number);
	ret2 = ft_printf("|% +-*.*i|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0224\n");
	ret1 = printf("|%0+-*.*d|\n", width, precision, number);
	ret2 = ft_printf("|%0+-*.*d|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0225\n");
	ret1 = printf("|%0+-*.*hhd|\n", width, precision, number);
	ret2 = ft_printf("|%0+-*.*hhd|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0226\n");
	ret1 = printf("|%0+-*.*hd|\n", width, precision, number);
	ret2 = ft_printf("|%0+-*.*hd|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0227\n");
	ret1 = printf("|%0+-*.*ld|\n", width, precision, number);
	ret2 = ft_printf("|%0+-*.*ld|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0228\n");
	ret1 = printf("|%0+-*.*lld|\n", width, precision, number);
	ret2 = ft_printf("|%0+-*.*lld|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0229\n");
	ret1 = printf("|%0+-*.*jd|\n", width, precision, number);
	ret2 = ft_printf("|%0+-*.*jd|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0230\n");
	ret1 = printf("|%0+-*.*zd|\n", width, precision, number);
	ret2 = ft_printf("|%0+-*.*zd|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0231\n");
	ret1 = printf("|%0+-*.*d|\n", width, precision, number);
	ret2 = ft_printf("|%0+-*.*d|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0232\n");
	ret1 = printf("|%0+-*.*i|\n", width, precision, number);
	ret2 = ft_printf("|%0+-*.*i|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0233\n");
	ret1 = printf("|%0+-*.*hhi|\n", width, precision, number);
	ret2 = ft_printf("|%0+-*.*hhi|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0234\n");
	ret1 = printf("|%0+-*.*hi|\n", width, precision, number);
	ret2 = ft_printf("|%0+-*.*hi|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0235\n");
	ret1 = printf("|%0+-*.*li|\n", width, precision, number);
	ret2 = ft_printf("|%0+-*.*li|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0236\n");
	ret1 = printf("|%0+-*.*lli|\n", width, precision, number);
	ret2 = ft_printf("|%0+-*.*lli|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0237\n");
	ret1 = printf("|%0+-*.*ji|\n", width, precision, number);
	ret2 = ft_printf("|%0+-*.*ji|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0238\n");
	ret1 = printf("|%0+-*.*zi|\n", width, precision, number);
	ret2 = ft_printf("|%0+-*.*zi|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0239\n");
	ret1 = printf("|%0+-*.*i|\n", width, precision, number);
	ret2 = ft_printf("|%0+-*.*i|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0240\n");
	ret1 = printf("|% 0+-*.*d|\n", width, precision, number);
	ret2 = ft_printf("|% 0+-*.*d|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0241\n");
	ret1 = printf("|% 0+-*.*hhd|\n", width, precision, number);
	ret2 = ft_printf("|% 0+-*.*hhd|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0242\n");
	ret1 = printf("|% 0+-*.*hd|\n", width, precision, number);
	ret2 = ft_printf("|% 0+-*.*hd|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0243\n");
	ret1 = printf("|% 0+-*.*ld|\n", width, precision, number);
	ret2 = ft_printf("|% 0+-*.*ld|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0244\n");
	ret1 = printf("|% 0+-*.*lld|\n", width, precision, number);
	ret2 = ft_printf("|% 0+-*.*lld|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0245\n");
	ret1 = printf("|% 0+-*.*jd|\n", width, precision, number);
	ret2 = ft_printf("|% 0+-*.*jd|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0246\n");
	ret1 = printf("|% 0+-*.*zd|\n", width, precision, number);
	ret2 = ft_printf("|% 0+-*.*zd|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0247\n");
	ret1 = printf("|% 0+-*.*d|\n", width, precision, number);
	ret2 = ft_printf("|% 0+-*.*d|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0248\n");
	ret1 = printf("|% 0+-*.*i|\n", width, precision, number);
	ret2 = ft_printf("|% 0+-*.*i|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0249\n");
	ret1 = printf("|% 0+-*.*hhi|\n", width, precision, number);
	ret2 = ft_printf("|% 0+-*.*hhi|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0250\n");
	ret1 = printf("|% 0+-*.*hi|\n", width, precision, number);
	ret2 = ft_printf("|% 0+-*.*hi|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0251\n");
	ret1 = printf("|% 0+-*.*li|\n", width, precision, number);
	ret2 = ft_printf("|% 0+-*.*li|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0252\n");
	ret1 = printf("|% 0+-*.*lli|\n", width, precision, number);
	ret2 = ft_printf("|% 0+-*.*lli|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0253\n");
	ret1 = printf("|% 0+-*.*ji|\n", width, precision, number);
	ret2 = ft_printf("|% 0+-*.*ji|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0254\n");
	ret1 = printf("|% 0+-*.*zi|\n", width, precision, number);
	ret2 = ft_printf("|% 0+-*.*zi|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0255\n");
	ret1 = printf("|% 0+-*.*i|\n", width, precision, number);
	ret2 = ft_printf("|% 0+-*.*i|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0256\n");
	ret1 = printf("|%#*.*d|\n", width, precision, number);
	ret2 = ft_printf("|%#*.*d|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0257\n");
	ret1 = printf("|%#*.*hhd|\n", width, precision, number);
	ret2 = ft_printf("|%#*.*hhd|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0258\n");
	ret1 = printf("|%#*.*hd|\n", width, precision, number);
	ret2 = ft_printf("|%#*.*hd|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0259\n");
	ret1 = printf("|%#*.*ld|\n", width, precision, number);
	ret2 = ft_printf("|%#*.*ld|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0260\n");
	ret1 = printf("|%#*.*lld|\n", width, precision, number);
	ret2 = ft_printf("|%#*.*lld|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0261\n");
	ret1 = printf("|%#*.*jd|\n", width, precision, number);
	ret2 = ft_printf("|%#*.*jd|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0262\n");
	ret1 = printf("|%#*.*zd|\n", width, precision, number);
	ret2 = ft_printf("|%#*.*zd|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0263\n");
	ret1 = printf("|%#*.*d|\n", width, precision, number);
	ret2 = ft_printf("|%#*.*d|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0264\n");
	ret1 = printf("|%#*.*i|\n", width, precision, number);
	ret2 = ft_printf("|%#*.*i|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0265\n");
	ret1 = printf("|%#*.*hhi|\n", width, precision, number);
	ret2 = ft_printf("|%#*.*hhi|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0266\n");
	ret1 = printf("|%#*.*hi|\n", width, precision, number);
	ret2 = ft_printf("|%#*.*hi|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0267\n");
	ret1 = printf("|%#*.*li|\n", width, precision, number);
	ret2 = ft_printf("|%#*.*li|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0268\n");
	ret1 = printf("|%#*.*lli|\n", width, precision, number);
	ret2 = ft_printf("|%#*.*lli|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0269\n");
	ret1 = printf("|%#*.*ji|\n", width, precision, number);
	ret2 = ft_printf("|%#*.*ji|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0270\n");
	ret1 = printf("|%#*.*zi|\n", width, precision, number);
	ret2 = ft_printf("|%#*.*zi|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0271\n");
	ret1 = printf("|%#*.*i|\n", width, precision, number);
	ret2 = ft_printf("|%#*.*i|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0272\n");
	ret1 = printf("|% #*.*d|\n", width, precision, number);
	ret2 = ft_printf("|% #*.*d|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0273\n");
	ret1 = printf("|% #*.*hhd|\n", width, precision, number);
	ret2 = ft_printf("|% #*.*hhd|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0274\n");
	ret1 = printf("|% #*.*hd|\n", width, precision, number);
	ret2 = ft_printf("|% #*.*hd|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0275\n");
	ret1 = printf("|% #*.*ld|\n", width, precision, number);
	ret2 = ft_printf("|% #*.*ld|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0276\n");
	ret1 = printf("|% #*.*lld|\n", width, precision, number);
	ret2 = ft_printf("|% #*.*lld|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0277\n");
	ret1 = printf("|% #*.*jd|\n", width, precision, number);
	ret2 = ft_printf("|% #*.*jd|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0278\n");
	ret1 = printf("|% #*.*zd|\n", width, precision, number);
	ret2 = ft_printf("|% #*.*zd|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0279\n");
	ret1 = printf("|% #*.*d|\n", width, precision, number);
	ret2 = ft_printf("|% #*.*d|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0280\n");
	ret1 = printf("|% #*.*i|\n", width, precision, number);
	ret2 = ft_printf("|% #*.*i|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0281\n");
	ret1 = printf("|% #*.*hhi|\n", width, precision, number);
	ret2 = ft_printf("|% #*.*hhi|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0282\n");
	ret1 = printf("|% #*.*hi|\n", width, precision, number);
	ret2 = ft_printf("|% #*.*hi|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0283\n");
	ret1 = printf("|% #*.*li|\n", width, precision, number);
	ret2 = ft_printf("|% #*.*li|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0284\n");
	ret1 = printf("|% #*.*lli|\n", width, precision, number);
	ret2 = ft_printf("|% #*.*lli|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0285\n");
	ret1 = printf("|% #*.*ji|\n", width, precision, number);
	ret2 = ft_printf("|% #*.*ji|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0286\n");
	ret1 = printf("|% #*.*zi|\n", width, precision, number);
	ret2 = ft_printf("|% #*.*zi|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0287\n");
	ret1 = printf("|% #*.*i|\n", width, precision, number);
	ret2 = ft_printf("|% #*.*i|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0288\n");
	ret1 = printf("|%0#*.*d|\n", width, precision, number);
	ret2 = ft_printf("|%0#*.*d|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0289\n");
	ret1 = printf("|%0#*.*hhd|\n", width, precision, number);
	ret2 = ft_printf("|%0#*.*hhd|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0290\n");
	ret1 = printf("|%0#*.*hd|\n", width, precision, number);
	ret2 = ft_printf("|%0#*.*hd|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0291\n");
	ret1 = printf("|%0#*.*ld|\n", width, precision, number);
	ret2 = ft_printf("|%0#*.*ld|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0292\n");
	ret1 = printf("|%0#*.*lld|\n", width, precision, number);
	ret2 = ft_printf("|%0#*.*lld|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0293\n");
	ret1 = printf("|%0#*.*jd|\n", width, precision, number);
	ret2 = ft_printf("|%0#*.*jd|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0294\n");
	ret1 = printf("|%0#*.*zd|\n", width, precision, number);
	ret2 = ft_printf("|%0#*.*zd|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0295\n");
	ret1 = printf("|%0#*.*d|\n", width, precision, number);
	ret2 = ft_printf("|%0#*.*d|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0296\n");
	ret1 = printf("|%0#*.*i|\n", width, precision, number);
	ret2 = ft_printf("|%0#*.*i|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0297\n");
	ret1 = printf("|%0#*.*hhi|\n", width, precision, number);
	ret2 = ft_printf("|%0#*.*hhi|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0298\n");
	ret1 = printf("|%0#*.*hi|\n", width, precision, number);
	ret2 = ft_printf("|%0#*.*hi|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0299\n");
	ret1 = printf("|%0#*.*li|\n", width, precision, number);
	ret2 = ft_printf("|%0#*.*li|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0300\n");
	ret1 = printf("|%0#*.*lli|\n", width, precision, number);
	ret2 = ft_printf("|%0#*.*lli|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0301\n");
	ret1 = printf("|%0#*.*ji|\n", width, precision, number);
	ret2 = ft_printf("|%0#*.*ji|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0302\n");
	ret1 = printf("|%0#*.*zi|\n", width, precision, number);
	ret2 = ft_printf("|%0#*.*zi|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0303\n");
	ret1 = printf("|%0#*.*i|\n", width, precision, number);
	ret2 = ft_printf("|%0#*.*i|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0304\n");
	ret1 = printf("|% 0#*.*d|\n", width, precision, number);
	ret2 = ft_printf("|% 0#*.*d|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0305\n");
	ret1 = printf("|% 0#*.*hhd|\n", width, precision, number);
	ret2 = ft_printf("|% 0#*.*hhd|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0306\n");
	ret1 = printf("|% 0#*.*hd|\n", width, precision, number);
	ret2 = ft_printf("|% 0#*.*hd|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0307\n");
	ret1 = printf("|% 0#*.*ld|\n", width, precision, number);
	ret2 = ft_printf("|% 0#*.*ld|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0308\n");
	ret1 = printf("|% 0#*.*lld|\n", width, precision, number);
	ret2 = ft_printf("|% 0#*.*lld|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0309\n");
	ret1 = printf("|% 0#*.*jd|\n", width, precision, number);
	ret2 = ft_printf("|% 0#*.*jd|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0310\n");
	ret1 = printf("|% 0#*.*zd|\n", width, precision, number);
	ret2 = ft_printf("|% 0#*.*zd|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0311\n");
	ret1 = printf("|% 0#*.*d|\n", width, precision, number);
	ret2 = ft_printf("|% 0#*.*d|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0312\n");
	ret1 = printf("|% 0#*.*i|\n", width, precision, number);
	ret2 = ft_printf("|% 0#*.*i|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0313\n");
	ret1 = printf("|% 0#*.*hhi|\n", width, precision, number);
	ret2 = ft_printf("|% 0#*.*hhi|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0314\n");
	ret1 = printf("|% 0#*.*hi|\n", width, precision, number);
	ret2 = ft_printf("|% 0#*.*hi|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0315\n");
	ret1 = printf("|% 0#*.*li|\n", width, precision, number);
	ret2 = ft_printf("|% 0#*.*li|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0316\n");
	ret1 = printf("|% 0#*.*lli|\n", width, precision, number);
	ret2 = ft_printf("|% 0#*.*lli|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0317\n");
	ret1 = printf("|% 0#*.*ji|\n", width, precision, number);
	ret2 = ft_printf("|% 0#*.*ji|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0318\n");
	ret1 = printf("|% 0#*.*zi|\n", width, precision, number);
	ret2 = ft_printf("|% 0#*.*zi|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0319\n");
	ret1 = printf("|% 0#*.*i|\n", width, precision, number);
	ret2 = ft_printf("|% 0#*.*i|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0320\n");
	ret1 = printf("|%+#*.*d|\n", width, precision, number);
	ret2 = ft_printf("|%+#*.*d|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0321\n");
	ret1 = printf("|%+#*.*hhd|\n", width, precision, number);
	ret2 = ft_printf("|%+#*.*hhd|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0322\n");
	ret1 = printf("|%+#*.*hd|\n", width, precision, number);
	ret2 = ft_printf("|%+#*.*hd|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0323\n");
	ret1 = printf("|%+#*.*ld|\n", width, precision, number);
	ret2 = ft_printf("|%+#*.*ld|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0324\n");
	ret1 = printf("|%+#*.*lld|\n", width, precision, number);
	ret2 = ft_printf("|%+#*.*lld|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0325\n");
	ret1 = printf("|%+#*.*jd|\n", width, precision, number);
	ret2 = ft_printf("|%+#*.*jd|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0326\n");
	ret1 = printf("|%+#*.*zd|\n", width, precision, number);
	ret2 = ft_printf("|%+#*.*zd|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0327\n");
	ret1 = printf("|%+#*.*d|\n", width, precision, number);
	ret2 = ft_printf("|%+#*.*d|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0328\n");
	ret1 = printf("|%+#*.*i|\n", width, precision, number);
	ret2 = ft_printf("|%+#*.*i|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0329\n");
	ret1 = printf("|%+#*.*hhi|\n", width, precision, number);
	ret2 = ft_printf("|%+#*.*hhi|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0330\n");
	ret1 = printf("|%+#*.*hi|\n", width, precision, number);
	ret2 = ft_printf("|%+#*.*hi|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0331\n");
	ret1 = printf("|%+#*.*li|\n", width, precision, number);
	ret2 = ft_printf("|%+#*.*li|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0332\n");
	ret1 = printf("|%+#*.*lli|\n", width, precision, number);
	ret2 = ft_printf("|%+#*.*lli|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0333\n");
	ret1 = printf("|%+#*.*ji|\n", width, precision, number);
	ret2 = ft_printf("|%+#*.*ji|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0334\n");
	ret1 = printf("|%+#*.*zi|\n", width, precision, number);
	ret2 = ft_printf("|%+#*.*zi|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0335\n");
	ret1 = printf("|%+#*.*i|\n", width, precision, number);
	ret2 = ft_printf("|%+#*.*i|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0336\n");
	ret1 = printf("|% +#*.*d|\n", width, precision, number);
	ret2 = ft_printf("|% +#*.*d|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0337\n");
	ret1 = printf("|% +#*.*hhd|\n", width, precision, number);
	ret2 = ft_printf("|% +#*.*hhd|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0338\n");
	ret1 = printf("|% +#*.*hd|\n", width, precision, number);
	ret2 = ft_printf("|% +#*.*hd|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0339\n");
	ret1 = printf("|% +#*.*ld|\n", width, precision, number);
	ret2 = ft_printf("|% +#*.*ld|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0340\n");
	ret1 = printf("|% +#*.*lld|\n", width, precision, number);
	ret2 = ft_printf("|% +#*.*lld|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0341\n");
	ret1 = printf("|% +#*.*jd|\n", width, precision, number);
	ret2 = ft_printf("|% +#*.*jd|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0342\n");
	ret1 = printf("|% +#*.*zd|\n", width, precision, number);
	ret2 = ft_printf("|% +#*.*zd|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0343\n");
	ret1 = printf("|% +#*.*d|\n", width, precision, number);
	ret2 = ft_printf("|% +#*.*d|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0344\n");
	ret1 = printf("|% +#*.*i|\n", width, precision, number);
	ret2 = ft_printf("|% +#*.*i|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0345\n");
	ret1 = printf("|% +#*.*hhi|\n", width, precision, number);
	ret2 = ft_printf("|% +#*.*hhi|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0346\n");
	ret1 = printf("|% +#*.*hi|\n", width, precision, number);
	ret2 = ft_printf("|% +#*.*hi|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0347\n");
	ret1 = printf("|% +#*.*li|\n", width, precision, number);
	ret2 = ft_printf("|% +#*.*li|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0348\n");
	ret1 = printf("|% +#*.*lli|\n", width, precision, number);
	ret2 = ft_printf("|% +#*.*lli|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0349\n");
	ret1 = printf("|% +#*.*ji|\n", width, precision, number);
	ret2 = ft_printf("|% +#*.*ji|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0350\n");
	ret1 = printf("|% +#*.*zi|\n", width, precision, number);
	ret2 = ft_printf("|% +#*.*zi|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0351\n");
	ret1 = printf("|% +#*.*i|\n", width, precision, number);
	ret2 = ft_printf("|% +#*.*i|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0352\n");
	ret1 = printf("|%0+#*.*d|\n", width, precision, number);
	ret2 = ft_printf("|%0+#*.*d|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0353\n");
	ret1 = printf("|%0+#*.*hhd|\n", width, precision, number);
	ret2 = ft_printf("|%0+#*.*hhd|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0354\n");
	ret1 = printf("|%0+#*.*hd|\n", width, precision, number);
	ret2 = ft_printf("|%0+#*.*hd|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0355\n");
	ret1 = printf("|%0+#*.*ld|\n", width, precision, number);
	ret2 = ft_printf("|%0+#*.*ld|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0356\n");
	ret1 = printf("|%0+#*.*lld|\n", width, precision, number);
	ret2 = ft_printf("|%0+#*.*lld|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0357\n");
	ret1 = printf("|%0+#*.*jd|\n", width, precision, number);
	ret2 = ft_printf("|%0+#*.*jd|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0358\n");
	ret1 = printf("|%0+#*.*zd|\n", width, precision, number);
	ret2 = ft_printf("|%0+#*.*zd|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0359\n");
	ret1 = printf("|%0+#*.*d|\n", width, precision, number);
	ret2 = ft_printf("|%0+#*.*d|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0360\n");
	ret1 = printf("|%0+#*.*i|\n", width, precision, number);
	ret2 = ft_printf("|%0+#*.*i|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0361\n");
	ret1 = printf("|%0+#*.*hhi|\n", width, precision, number);
	ret2 = ft_printf("|%0+#*.*hhi|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0362\n");
	ret1 = printf("|%0+#*.*hi|\n", width, precision, number);
	ret2 = ft_printf("|%0+#*.*hi|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0363\n");
	ret1 = printf("|%0+#*.*li|\n", width, precision, number);
	ret2 = ft_printf("|%0+#*.*li|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0364\n");
	ret1 = printf("|%0+#*.*lli|\n", width, precision, number);
	ret2 = ft_printf("|%0+#*.*lli|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0365\n");
	ret1 = printf("|%0+#*.*ji|\n", width, precision, number);
	ret2 = ft_printf("|%0+#*.*ji|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0366\n");
	ret1 = printf("|%0+#*.*zi|\n", width, precision, number);
	ret2 = ft_printf("|%0+#*.*zi|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0367\n");
	ret1 = printf("|%0+#*.*i|\n", width, precision, number);
	ret2 = ft_printf("|%0+#*.*i|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0368\n");
	ret1 = printf("|% 0+#*.*d|\n", width, precision, number);
	ret2 = ft_printf("|% 0+#*.*d|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0369\n");
	ret1 = printf("|% 0+#*.*hhd|\n", width, precision, number);
	ret2 = ft_printf("|% 0+#*.*hhd|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0370\n");
	ret1 = printf("|% 0+#*.*hd|\n", width, precision, number);
	ret2 = ft_printf("|% 0+#*.*hd|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0371\n");
	ret1 = printf("|% 0+#*.*ld|\n", width, precision, number);
	ret2 = ft_printf("|% 0+#*.*ld|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0372\n");
	ret1 = printf("|% 0+#*.*lld|\n", width, precision, number);
	ret2 = ft_printf("|% 0+#*.*lld|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0373\n");
	ret1 = printf("|% 0+#*.*jd|\n", width, precision, number);
	ret2 = ft_printf("|% 0+#*.*jd|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0374\n");
	ret1 = printf("|% 0+#*.*zd|\n", width, precision, number);
	ret2 = ft_printf("|% 0+#*.*zd|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0375\n");
	ret1 = printf("|% 0+#*.*d|\n", width, precision, number);
	ret2 = ft_printf("|% 0+#*.*d|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0376\n");
	ret1 = printf("|% 0+#*.*i|\n", width, precision, number);
	ret2 = ft_printf("|% 0+#*.*i|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0377\n");
	ret1 = printf("|% 0+#*.*hhi|\n", width, precision, number);
	ret2 = ft_printf("|% 0+#*.*hhi|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0378\n");
	ret1 = printf("|% 0+#*.*hi|\n", width, precision, number);
	ret2 = ft_printf("|% 0+#*.*hi|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0379\n");
	ret1 = printf("|% 0+#*.*li|\n", width, precision, number);
	ret2 = ft_printf("|% 0+#*.*li|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0380\n");
	ret1 = printf("|% 0+#*.*lli|\n", width, precision, number);
	ret2 = ft_printf("|% 0+#*.*lli|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0381\n");
	ret1 = printf("|% 0+#*.*ji|\n", width, precision, number);
	ret2 = ft_printf("|% 0+#*.*ji|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0382\n");
	ret1 = printf("|% 0+#*.*zi|\n", width, precision, number);
	ret2 = ft_printf("|% 0+#*.*zi|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0383\n");
	ret1 = printf("|% 0+#*.*i|\n", width, precision, number);
	ret2 = ft_printf("|% 0+#*.*i|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0384\n");
	ret1 = printf("|%-#*.*d|\n", width, precision, number);
	ret2 = ft_printf("|%-#*.*d|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0385\n");
	ret1 = printf("|%-#*.*hhd|\n", width, precision, number);
	ret2 = ft_printf("|%-#*.*hhd|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0386\n");
	ret1 = printf("|%-#*.*hd|\n", width, precision, number);
	ret2 = ft_printf("|%-#*.*hd|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0387\n");
	ret1 = printf("|%-#*.*ld|\n", width, precision, number);
	ret2 = ft_printf("|%-#*.*ld|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0388\n");
	ret1 = printf("|%-#*.*lld|\n", width, precision, number);
	ret2 = ft_printf("|%-#*.*lld|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0389\n");
	ret1 = printf("|%-#*.*jd|\n", width, precision, number);
	ret2 = ft_printf("|%-#*.*jd|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0390\n");
	ret1 = printf("|%-#*.*zd|\n", width, precision, number);
	ret2 = ft_printf("|%-#*.*zd|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0391\n");
	ret1 = printf("|%-#*.*d|\n", width, precision, number);
	ret2 = ft_printf("|%-#*.*d|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0392\n");
	ret1 = printf("|%-#*.*i|\n", width, precision, number);
	ret2 = ft_printf("|%-#*.*i|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0393\n");
	ret1 = printf("|%-#*.*hhi|\n", width, precision, number);
	ret2 = ft_printf("|%-#*.*hhi|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0394\n");
	ret1 = printf("|%-#*.*hi|\n", width, precision, number);
	ret2 = ft_printf("|%-#*.*hi|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0395\n");
	ret1 = printf("|%-#*.*li|\n", width, precision, number);
	ret2 = ft_printf("|%-#*.*li|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0396\n");
	ret1 = printf("|%-#*.*lli|\n", width, precision, number);
	ret2 = ft_printf("|%-#*.*lli|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0397\n");
	ret1 = printf("|%-#*.*ji|\n", width, precision, number);
	ret2 = ft_printf("|%-#*.*ji|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0398\n");
	ret1 = printf("|%-#*.*zi|\n", width, precision, number);
	ret2 = ft_printf("|%-#*.*zi|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0399\n");
	ret1 = printf("|%-#*.*i|\n", width, precision, number);
	ret2 = ft_printf("|%-#*.*i|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0400\n");
	ret1 = printf("|% -#*.*d|\n", width, precision, number);
	ret2 = ft_printf("|% -#*.*d|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0401\n");
	ret1 = printf("|% -#*.*hhd|\n", width, precision, number);
	ret2 = ft_printf("|% -#*.*hhd|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0402\n");
	ret1 = printf("|% -#*.*hd|\n", width, precision, number);
	ret2 = ft_printf("|% -#*.*hd|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0403\n");
	ret1 = printf("|% -#*.*ld|\n", width, precision, number);
	ret2 = ft_printf("|% -#*.*ld|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0404\n");
	ret1 = printf("|% -#*.*lld|\n", width, precision, number);
	ret2 = ft_printf("|% -#*.*lld|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0405\n");
	ret1 = printf("|% -#*.*jd|\n", width, precision, number);
	ret2 = ft_printf("|% -#*.*jd|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0406\n");
	ret1 = printf("|% -#*.*zd|\n", width, precision, number);
	ret2 = ft_printf("|% -#*.*zd|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0407\n");
	ret1 = printf("|% -#*.*d|\n", width, precision, number);
	ret2 = ft_printf("|% -#*.*d|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0408\n");
	ret1 = printf("|% -#*.*i|\n", width, precision, number);
	ret2 = ft_printf("|% -#*.*i|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0409\n");
	ret1 = printf("|% -#*.*hhi|\n", width, precision, number);
	ret2 = ft_printf("|% -#*.*hhi|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0410\n");
	ret1 = printf("|% -#*.*hi|\n", width, precision, number);
	ret2 = ft_printf("|% -#*.*hi|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0411\n");
	ret1 = printf("|% -#*.*li|\n", width, precision, number);
	ret2 = ft_printf("|% -#*.*li|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0412\n");
	ret1 = printf("|% -#*.*lli|\n", width, precision, number);
	ret2 = ft_printf("|% -#*.*lli|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0413\n");
	ret1 = printf("|% -#*.*ji|\n", width, precision, number);
	ret2 = ft_printf("|% -#*.*ji|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0414\n");
	ret1 = printf("|% -#*.*zi|\n", width, precision, number);
	ret2 = ft_printf("|% -#*.*zi|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0415\n");
	ret1 = printf("|% -#*.*i|\n", width, precision, number);
	ret2 = ft_printf("|% -#*.*i|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0416\n");
	ret1 = printf("|%0-#*.*d|\n", width, precision, number);
	ret2 = ft_printf("|%0-#*.*d|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0417\n");
	ret1 = printf("|%0-#*.*hhd|\n", width, precision, number);
	ret2 = ft_printf("|%0-#*.*hhd|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0418\n");
	ret1 = printf("|%0-#*.*hd|\n", width, precision, number);
	ret2 = ft_printf("|%0-#*.*hd|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0419\n");
	ret1 = printf("|%0-#*.*ld|\n", width, precision, number);
	ret2 = ft_printf("|%0-#*.*ld|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0420\n");
	ret1 = printf("|%0-#*.*lld|\n", width, precision, number);
	ret2 = ft_printf("|%0-#*.*lld|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0421\n");
	ret1 = printf("|%0-#*.*jd|\n", width, precision, number);
	ret2 = ft_printf("|%0-#*.*jd|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0422\n");
	ret1 = printf("|%0-#*.*zd|\n", width, precision, number);
	ret2 = ft_printf("|%0-#*.*zd|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0423\n");
	ret1 = printf("|%0-#*.*d|\n", width, precision, number);
	ret2 = ft_printf("|%0-#*.*d|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0424\n");
	ret1 = printf("|%0-#*.*i|\n", width, precision, number);
	ret2 = ft_printf("|%0-#*.*i|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0425\n");
	ret1 = printf("|%0-#*.*hhi|\n", width, precision, number);
	ret2 = ft_printf("|%0-#*.*hhi|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0426\n");
	ret1 = printf("|%0-#*.*hi|\n", width, precision, number);
	ret2 = ft_printf("|%0-#*.*hi|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0427\n");
	ret1 = printf("|%0-#*.*li|\n", width, precision, number);
	ret2 = ft_printf("|%0-#*.*li|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0428\n");
	ret1 = printf("|%0-#*.*lli|\n", width, precision, number);
	ret2 = ft_printf("|%0-#*.*lli|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0429\n");
	ret1 = printf("|%0-#*.*ji|\n", width, precision, number);
	ret2 = ft_printf("|%0-#*.*ji|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0430\n");
	ret1 = printf("|%0-#*.*zi|\n", width, precision, number);
	ret2 = ft_printf("|%0-#*.*zi|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0431\n");
	ret1 = printf("|%0-#*.*i|\n", width, precision, number);
	ret2 = ft_printf("|%0-#*.*i|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0432\n");
	ret1 = printf("|% 0-#*.*d|\n", width, precision, number);
	ret2 = ft_printf("|% 0-#*.*d|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0433\n");
	ret1 = printf("|% 0-#*.*hhd|\n", width, precision, number);
	ret2 = ft_printf("|% 0-#*.*hhd|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0434\n");
	ret1 = printf("|% 0-#*.*hd|\n", width, precision, number);
	ret2 = ft_printf("|% 0-#*.*hd|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0435\n");
	ret1 = printf("|% 0-#*.*ld|\n", width, precision, number);
	ret2 = ft_printf("|% 0-#*.*ld|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0436\n");
	ret1 = printf("|% 0-#*.*lld|\n", width, precision, number);
	ret2 = ft_printf("|% 0-#*.*lld|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0437\n");
	ret1 = printf("|% 0-#*.*jd|\n", width, precision, number);
	ret2 = ft_printf("|% 0-#*.*jd|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0438\n");
	ret1 = printf("|% 0-#*.*zd|\n", width, precision, number);
	ret2 = ft_printf("|% 0-#*.*zd|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0439\n");
	ret1 = printf("|% 0-#*.*d|\n", width, precision, number);
	ret2 = ft_printf("|% 0-#*.*d|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0440\n");
	ret1 = printf("|% 0-#*.*i|\n", width, precision, number);
	ret2 = ft_printf("|% 0-#*.*i|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0441\n");
	ret1 = printf("|% 0-#*.*hhi|\n", width, precision, number);
	ret2 = ft_printf("|% 0-#*.*hhi|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0442\n");
	ret1 = printf("|% 0-#*.*hi|\n", width, precision, number);
	ret2 = ft_printf("|% 0-#*.*hi|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0443\n");
	ret1 = printf("|% 0-#*.*li|\n", width, precision, number);
	ret2 = ft_printf("|% 0-#*.*li|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0444\n");
	ret1 = printf("|% 0-#*.*lli|\n", width, precision, number);
	ret2 = ft_printf("|% 0-#*.*lli|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0445\n");
	ret1 = printf("|% 0-#*.*ji|\n", width, precision, number);
	ret2 = ft_printf("|% 0-#*.*ji|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0446\n");
	ret1 = printf("|% 0-#*.*zi|\n", width, precision, number);
	ret2 = ft_printf("|% 0-#*.*zi|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0447\n");
	ret1 = printf("|% 0-#*.*i|\n", width, precision, number);
	ret2 = ft_printf("|% 0-#*.*i|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0448\n");
	ret1 = printf("|%+-#*.*d|\n", width, precision, number);
	ret2 = ft_printf("|%+-#*.*d|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0449\n");
	ret1 = printf("|%+-#*.*hhd|\n", width, precision, number);
	ret2 = ft_printf("|%+-#*.*hhd|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0450\n");
	ret1 = printf("|%+-#*.*hd|\n", width, precision, number);
	ret2 = ft_printf("|%+-#*.*hd|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0451\n");
	ret1 = printf("|%+-#*.*ld|\n", width, precision, number);
	ret2 = ft_printf("|%+-#*.*ld|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0452\n");
	ret1 = printf("|%+-#*.*lld|\n", width, precision, number);
	ret2 = ft_printf("|%+-#*.*lld|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0453\n");
	ret1 = printf("|%+-#*.*jd|\n", width, precision, number);
	ret2 = ft_printf("|%+-#*.*jd|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0454\n");
	ret1 = printf("|%+-#*.*zd|\n", width, precision, number);
	ret2 = ft_printf("|%+-#*.*zd|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0455\n");
	ret1 = printf("|%+-#*.*d|\n", width, precision, number);
	ret2 = ft_printf("|%+-#*.*d|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0456\n");
	ret1 = printf("|%+-#*.*i|\n", width, precision, number);
	ret2 = ft_printf("|%+-#*.*i|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0457\n");
	ret1 = printf("|%+-#*.*hhi|\n", width, precision, number);
	ret2 = ft_printf("|%+-#*.*hhi|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0458\n");
	ret1 = printf("|%+-#*.*hi|\n", width, precision, number);
	ret2 = ft_printf("|%+-#*.*hi|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0459\n");
	ret1 = printf("|%+-#*.*li|\n", width, precision, number);
	ret2 = ft_printf("|%+-#*.*li|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0460\n");
	ret1 = printf("|%+-#*.*lli|\n", width, precision, number);
	ret2 = ft_printf("|%+-#*.*lli|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0461\n");
	ret1 = printf("|%+-#*.*ji|\n", width, precision, number);
	ret2 = ft_printf("|%+-#*.*ji|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0462\n");
	ret1 = printf("|%+-#*.*zi|\n", width, precision, number);
	ret2 = ft_printf("|%+-#*.*zi|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0463\n");
	ret1 = printf("|%+-#*.*i|\n", width, precision, number);
	ret2 = ft_printf("|%+-#*.*i|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0464\n");
	ret1 = printf("|% +-#*.*d|\n", width, precision, number);
	ret2 = ft_printf("|% +-#*.*d|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0465\n");
	ret1 = printf("|% +-#*.*hhd|\n", width, precision, number);
	ret2 = ft_printf("|% +-#*.*hhd|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0466\n");
	ret1 = printf("|% +-#*.*hd|\n", width, precision, number);
	ret2 = ft_printf("|% +-#*.*hd|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0467\n");
	ret1 = printf("|% +-#*.*ld|\n", width, precision, number);
	ret2 = ft_printf("|% +-#*.*ld|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0468\n");
	ret1 = printf("|% +-#*.*lld|\n", width, precision, number);
	ret2 = ft_printf("|% +-#*.*lld|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0469\n");
	ret1 = printf("|% +-#*.*jd|\n", width, precision, number);
	ret2 = ft_printf("|% +-#*.*jd|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0470\n");
	ret1 = printf("|% +-#*.*zd|\n", width, precision, number);
	ret2 = ft_printf("|% +-#*.*zd|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0471\n");
	ret1 = printf("|% +-#*.*d|\n", width, precision, number);
	ret2 = ft_printf("|% +-#*.*d|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0472\n");
	ret1 = printf("|% +-#*.*i|\n", width, precision, number);
	ret2 = ft_printf("|% +-#*.*i|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0473\n");
	ret1 = printf("|% +-#*.*hhi|\n", width, precision, number);
	ret2 = ft_printf("|% +-#*.*hhi|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0474\n");
	ret1 = printf("|% +-#*.*hi|\n", width, precision, number);
	ret2 = ft_printf("|% +-#*.*hi|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0475\n");
	ret1 = printf("|% +-#*.*li|\n", width, precision, number);
	ret2 = ft_printf("|% +-#*.*li|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0476\n");
	ret1 = printf("|% +-#*.*lli|\n", width, precision, number);
	ret2 = ft_printf("|% +-#*.*lli|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0477\n");
	ret1 = printf("|% +-#*.*ji|\n", width, precision, number);
	ret2 = ft_printf("|% +-#*.*ji|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0478\n");
	ret1 = printf("|% +-#*.*zi|\n", width, precision, number);
	ret2 = ft_printf("|% +-#*.*zi|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0479\n");
	ret1 = printf("|% +-#*.*i|\n", width, precision, number);
	ret2 = ft_printf("|% +-#*.*i|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0480\n");
	ret1 = printf("|%0+-#*.*d|\n", width, precision, number);
	ret2 = ft_printf("|%0+-#*.*d|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0481\n");
	ret1 = printf("|%0+-#*.*hhd|\n", width, precision, number);
	ret2 = ft_printf("|%0+-#*.*hhd|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0482\n");
	ret1 = printf("|%0+-#*.*hd|\n", width, precision, number);
	ret2 = ft_printf("|%0+-#*.*hd|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0483\n");
	ret1 = printf("|%0+-#*.*ld|\n", width, precision, number);
	ret2 = ft_printf("|%0+-#*.*ld|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0484\n");
	ret1 = printf("|%0+-#*.*lld|\n", width, precision, number);
	ret2 = ft_printf("|%0+-#*.*lld|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0485\n");
	ret1 = printf("|%0+-#*.*jd|\n", width, precision, number);
	ret2 = ft_printf("|%0+-#*.*jd|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0486\n");
	ret1 = printf("|%0+-#*.*zd|\n", width, precision, number);
	ret2 = ft_printf("|%0+-#*.*zd|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0487\n");
	ret1 = printf("|%0+-#*.*d|\n", width, precision, number);
	ret2 = ft_printf("|%0+-#*.*d|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0488\n");
	ret1 = printf("|%0+-#*.*i|\n", width, precision, number);
	ret2 = ft_printf("|%0+-#*.*i|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0489\n");
	ret1 = printf("|%0+-#*.*hhi|\n", width, precision, number);
	ret2 = ft_printf("|%0+-#*.*hhi|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0490\n");
	ret1 = printf("|%0+-#*.*hi|\n", width, precision, number);
	ret2 = ft_printf("|%0+-#*.*hi|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0491\n");
	ret1 = printf("|%0+-#*.*li|\n", width, precision, number);
	ret2 = ft_printf("|%0+-#*.*li|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0492\n");
	ret1 = printf("|%0+-#*.*lli|\n", width, precision, number);
	ret2 = ft_printf("|%0+-#*.*lli|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0493\n");
	ret1 = printf("|%0+-#*.*ji|\n", width, precision, number);
	ret2 = ft_printf("|%0+-#*.*ji|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0494\n");
	ret1 = printf("|%0+-#*.*zi|\n", width, precision, number);
	ret2 = ft_printf("|%0+-#*.*zi|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0495\n");
	ret1 = printf("|%0+-#*.*i|\n", width, precision, number);
	ret2 = ft_printf("|%0+-#*.*i|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0496\n");
	ret1 = printf("|% 0+-#*.*d|\n", width, precision, number);
	ret2 = ft_printf("|% 0+-#*.*d|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0497\n");
	ret1 = printf("|% 0+-#*.*hhd|\n", width, precision, number);
	ret2 = ft_printf("|% 0+-#*.*hhd|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0498\n");
	ret1 = printf("|% 0+-#*.*hd|\n", width, precision, number);
	ret2 = ft_printf("|% 0+-#*.*hd|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0499\n");
	ret1 = printf("|% 0+-#*.*ld|\n", width, precision, number);
	ret2 = ft_printf("|% 0+-#*.*ld|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0500\n");
	ret1 = printf("|% 0+-#*.*lld|\n", width, precision, number);
	ret2 = ft_printf("|% 0+-#*.*lld|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0501\n");
	ret1 = printf("|% 0+-#*.*jd|\n", width, precision, number);
	ret2 = ft_printf("|% 0+-#*.*jd|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0502\n");
	ret1 = printf("|% 0+-#*.*zd|\n", width, precision, number);
	ret2 = ft_printf("|% 0+-#*.*zd|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0503\n");
	ret1 = printf("|% 0+-#*.*d|\n", width, precision, number);
	ret2 = ft_printf("|% 0+-#*.*d|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0504\n");
	ret1 = printf("|% 0+-#*.*i|\n", width, precision, number);
	ret2 = ft_printf("|% 0+-#*.*i|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0505\n");
	ret1 = printf("|% 0+-#*.*hhi|\n", width, precision, number);
	ret2 = ft_printf("|% 0+-#*.*hhi|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0506\n");
	ret1 = printf("|% 0+-#*.*hi|\n", width, precision, number);
	ret2 = ft_printf("|% 0+-#*.*hi|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0507\n");
	ret1 = printf("|% 0+-#*.*li|\n", width, precision, number);
	ret2 = ft_printf("|% 0+-#*.*li|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0508\n");
	ret1 = printf("|% 0+-#*.*lli|\n", width, precision, number);
	ret2 = ft_printf("|% 0+-#*.*lli|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0509\n");
	ret1 = printf("|% 0+-#*.*ji|\n", width, precision, number);
	ret2 = ft_printf("|% 0+-#*.*ji|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0510\n");
	ret1 = printf("|% 0+-#*.*zi|\n", width, precision, number);
	ret2 = ft_printf("|% 0+-#*.*zi|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

	printf("Test #0511\n");
	ret1 = printf("|% 0+-#*.*i|\n", width, precision, number);
	ret2 = ft_printf("|% 0+-#*.*i|\n", width, precision, number);
	printf("Ret1 = %d Ret2 = %d\n%d\n", ret1, ret2, ret1 - ret2);

}
