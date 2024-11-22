
# include <stdio.h>
#include "ft_printf.h"
# include <limits.h>

int	main(void)
{
	int	lenmine;
	int	lenorig;

	ft_printf("\n");

	ft_printf("------------SEM SPEC------------\n");
	
	printf("\n");
	
	lenmine = ft_printf("TeeeSSSSttttAAAArrr Mandatory AAArrrGGG.\n");
	lenorig = printf("TeeeSSSSttttAAAArrr Mandatory AAArrrGGG.\n");
	ft_printf("my length: %d.\n", lenmine);
	printf("original length: %d.\n", lenorig);

	printf("\n");
	
	ft_printf("Teste com um char:\n");
	lenmine = ft_printf("t");
	printf("\n");
	lenorig = printf("t");
	printf("\n");
	ft_printf("my length: %d.\n", lenmine);
	printf("original length: %d.\n", lenorig);

	printf("\n");
	
	ft_printf("------------%%c------------\n");
	
	printf("\n");
	
	ft_printf("Char maiusculo (C):\n");
	lenmine = ft_printf("%c", 'C');
	ft_printf("\n");
	lenorig = printf("%c", 'C');
	printf("\n");
	ft_printf("my length: %i.\n", lenmine);
	printf("original length: %i.\n", lenorig);

	printf("\n");

	ft_printf("Char minúsculo (c):\n");
	lenmine = ft_printf("%c", 'c');
	ft_printf("\n");
	lenorig = printf("%c", 'c');
	printf("\n");
	ft_printf("my length: %i.\n", lenmine);
	printf("original length: %i.\n", lenorig);

	printf("\n");

	ft_printf("Char nulo:\n");
	lenmine = ft_printf("%c", '\0');
	ft_printf("\n");
	lenorig = printf("%c", '\0');
	printf("\n");
	ft_printf("my length: %i.\n", lenmine);
	printf("original length: %i.\n", lenorig);

	printf("\n");

	ft_printf("Teste com '0' + 256:\n");
	lenmine = ft_printf("%c", '0' + 256);
	ft_printf("\n");
	lenorig = printf("%c", '0' + 256);
	printf("\n");
	ft_printf("my length: %i.\n", lenmine);
	printf("original length: %i.\n", lenorig);

	printf("\n");

	ft_printf("Teste com '1', '2', '3':\n");
	lenmine = ft_printf("%c %c %c", '1', '2', '3');
	ft_printf("\n");
	lenorig = printf("%c %c %c", '1', '2', '3');
	printf("\n");
	ft_printf("my length: %i.\n", lenmine);
	printf("original length: %i.\n", lenorig);

	printf("\n");

	ft_printf("Teste com '3', '2', 1:\n");
	lenmine = ft_printf("%c %c %c", '3', '2', 1);
	ft_printf("\n");
	lenorig = printf("%c %c %c", '3', '2', 1);
	printf("\n");
	ft_printf("my length: %i.\n", lenmine);
	printf("original length: %i.\n", lenorig);

	printf("\n");

	ft_printf("Teste com ' ', ' ', ' ':\n");
	lenmine = ft_printf("%c %c %c", ' ', ' ', ' ');
	ft_printf("\n");
	lenorig = printf("%c %c %c", ' ', ' ', ' ');
	printf("\n");
	ft_printf("my length: %i.\n", lenmine);
	printf("original length: %i.\n", lenorig);

	printf("\n");

	ft_printf("Teste com '0', 0, '1':\n");
	lenmine = ft_printf("%c %c %c", '0', 0, '1');
	ft_printf("\n");
	lenorig = printf("%c %c %c", '0', 0, '1');
	printf("\n");
	ft_printf("my length: %i.\n", lenmine);
	printf("original length: %i.\n", lenorig);

	printf("\n");

	ft_printf("------------%%s------------\n");

	ft_printf("\n");

	ft_printf("Teste com HELLO:\n");
	lenmine = ft_printf("%s", "HELLO");
	ft_printf("\n");
	lenorig = printf("%s", "HELLO");
	printf("\n");
	ft_printf("my length: %i.\n", lenmine);
	printf("original length: %i.\n", lenorig);

	printf("\n");

	ft_printf("Teste com  hello:\n");
	lenmine = ft_printf("%s", "hello");
	ft_printf("\n");
	lenorig = printf("%s", "hello");
	printf("\n");
	ft_printf("my length: %i.\n", lenmine);
	printf("original length: %i.\n", lenorig);

	printf("\n");
	
	ft_printf("String comprida:\n");
	lenmine = ft_printf("%s", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaab");
	ft_printf("\n");
	lenorig = printf("%s", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaab");
	printf("\n");
	ft_printf("my length: %i.\n", lenmine);
	printf("original length: %i.\n", lenorig);

	printf("\n");

	ft_printf("Sinais diferentes:\n");
	lenmine = ft_printf("%s", "Let's !! TEST this..");
	ft_printf("\n");
	lenorig = printf("%s", "Let's !! TEST this..");
	printf("\n");
	ft_printf("my length: %i.\n", lenmine);
	printf("original length: %i.\n", lenorig);

	printf("\n");

	ft_printf("String vazia:\n");
	lenmine = ft_printf("%s", "");
	ft_printf("\n");
	lenorig = printf("%s", "");
	printf("\n");
	ft_printf("my length: %i.\n", lenmine);
	printf("original length: %i.\n", lenorig);

	printf("\n");

	ft_printf("Varios chars:\n");
	lenmine = ft_printf("%s %s %s", "-", "4", "2");
	ft_printf("\n");
	lenorig = printf("%s %s %s", "-", "4", "2");
	printf("\n");
	ft_printf("my length: %i.\n", lenmine);
	printf("original length: %i.\n", lenorig);

	printf("\n");

	ft_printf("Teste com NULL:\n");
	char	*null = NULL;
	lenmine = ft_printf("%s", null);
	ft_printf("\n");
	lenorig = printf("%s", null);
	printf("\n");
	ft_printf("my length: %i.\n", lenmine);
	printf("original length: %i.\n", lenorig);

	printf("\n");

	ft_printf("------------%%p------------\n");
	
	ft_printf("\n");

	ft_printf("ptr (c):\n");
	char	*ptr = "c";
	lenmine = ft_printf("%p", ptr);
	ft_printf("\n");
	lenorig = printf("%p", ptr);
	printf("\n");
	ft_printf("my length: %i.\n", lenmine);
	printf("original length: %i.\n", lenorig);

	ft_printf("\n");
	
	ft_printf("ptr (NULL):\n");
	char	*ptr_null = NULL;
	lenmine = ft_printf("%p", ptr_null);
	ft_printf("\n");
	lenorig = printf("%p", ptr_null);
	printf("\n");
	ft_printf("my length: %i.\n", lenmine);
	printf("original length: %i.\n", lenorig);

	ft_printf("\n");

	ft_printf("ptr p/ int negativo:\n");
	lenmine = ft_printf("%p", (void *)-2);
	ft_printf("\n");
	lenorig = printf("%p", (void *)-2);
	printf("\n");
	ft_printf("my length: %i.\n", lenmine);
	printf("original length: %i.\n", lenorig);

	ft_printf("\n");

	ft_printf("ptr p/ int positivo:\n");
	lenmine = ft_printf("%p", (void *)15);
	ft_printf("\n");
	lenorig = printf("%p", (void *)15);
	printf("\n");
	ft_printf("my length: %i.\n", lenmine);
	printf("original length: %i.\n", lenorig);
	
	ft_printf("\n");

	ft_printf("ptr p/ INT_MIN:\n");
	lenmine = ft_printf("%p", (void *) INT_MIN);
	ft_printf("\n");
	lenorig = printf("%p", (void *)INT_MIN);
	printf("\n");
	ft_printf("my length: %i.\n", lenmine);
	printf("original length: %i.\n", lenorig);

	ft_printf("\n");

	ft_printf("ptr p/ INT_MAX:\n");
	lenmine = ft_printf("%p", (void *)INT_MAX);
	ft_printf("\n");
	lenorig = printf("%p", (void *)INT_MAX);
	printf("\n");
	ft_printf("my length: %i.\n", lenmine);
	printf("original length: %i.\n", lenorig);

	ft_printf("\n");

	ft_printf("ptr p/ LONG_MIN:\n");
	lenmine = ft_printf("%p", (void *)LONG_MIN);
	ft_printf("\n");
	lenorig = printf("%p", (void *)LONG_MIN);
	printf("\n");
	ft_printf("my length: %i.\n", lenmine);
	printf("original length: %i.\n", lenorig);

	ft_printf("\n");

	ft_printf("ptr p/ LONG_MAX:\n");
	lenmine = ft_printf("%p", (void *)LONG_MAX);
	ft_printf("\n");
	lenorig = printf("%p", (void *)LONG_MAX);
	printf("\n");
	ft_printf("my length: %i.\n", lenmine);
	printf("original length: %i.\n", lenorig);

	ft_printf("\n");

	ft_printf("ptr p/ ULONG_MAX:\n");
	lenmine = ft_printf("%p", (void *)ULONG_MAX);
	ft_printf("\n");
	lenorig = printf("%p", (void *)ULONG_MAX);
	printf("\n");
	ft_printf("my length: %i.\n", lenmine);
	printf("original length: %i.\n", lenorig);

	ft_printf("\n");

	ft_printf("ptr p/ -ULONG_MAX:\n");
	lenmine = ft_printf("%p", (void *)ULLONG_MAX);
	ft_printf("\n");
	lenorig = printf("%p", (void *)ULLONG_MAX);
	printf("\n");
	ft_printf("my length: %i.\n", lenmine);
	printf("original length: %i.\n", lenorig);

	ft_printf("\n");

	ft_printf("ptr p/ LONG_MAX:\n");
	lenmine = ft_printf("%p %p", (void*)0, (void*)0);
	ft_printf("\n");
	lenorig = printf("%p %p", (void*)0, (void*)0);
	printf("\n");
	ft_printf("my length: %i.\n", lenmine);
	printf("original length: %i.\n", lenorig);

	ft_printf("\n");

	ft_printf("------------%%i/%%d------------\n");
	
	ft_printf("\n");
	
	ft_printf("Int positivo (32):\n");
	lenmine = ft_printf("%i", 32);
	ft_printf("\n");
	lenorig = printf("%i", 32);
	printf("\n");
	ft_printf("my length: %i.\n", lenmine);
	printf("original length: %i.\n", lenorig);
	
	printf("\n");
	
	ft_printf("Int negativo (-54):\n");
	lenmine = ft_printf("%d", -54);
	ft_printf("\n");
	lenorig = printf("%d", -54);
	printf("\n");
	ft_printf("my length: %d.\n", lenmine);
	printf("original length: %d.\n", lenorig);
	
	printf("\n");
	
	ft_printf("Teste com INT_MIN:\n");
	lenmine = ft_printf("%i", INT_MIN);
	ft_printf("\n");
	lenorig = printf("%i", INT_MIN);
	printf("\n");
	ft_printf("my length: %i.\n", lenmine);
	printf("original length: %i.\n", lenorig);
	
	printf("\n");
	
	ft_printf("Teste com INT_MAX:\n");
	lenmine = ft_printf("%d", INT_MAX);
	ft_printf("\n");
	lenorig = printf("%d", INT_MAX);
	printf("\n");
	ft_printf("my length: %d.\n", lenmine);
	printf("original length: %d.\n", lenorig);
	
	printf("\n");
	
	ft_printf("Teste com 0:\n");
	lenmine = ft_printf("%i", 0);
	ft_printf("\n");
	lenorig = printf("%i", 0);
	printf("\n");
	ft_printf("my length: %i.\n", lenmine);
	printf("original length: %i.\n", lenorig);
	
	printf("\n");

	ft_printf("------------%%u------------\n");
	
	ft_printf("\n");

	ft_printf("Unsigned positivo (54):\n");
	lenmine = ft_printf("%u", 54);
	ft_printf("\n");
	lenorig = printf("%u", 54);
	printf("\n");
	ft_printf("my length: %d.\n", lenmine);
	printf("original length: %d.\n", lenorig);
	
	printf("\n");
	
	ft_printf("Unsigned negativo(-54):\n");
	lenmine = ft_printf("%u", -54);
	ft_printf("\n");
	lenorig = printf("%u", -54);
	printf("\n");
	ft_printf("my length: %d.\n", lenmine);
	printf("original length: %d.\n", lenorig);
	
	printf("\n");
	
	ft_printf("Unsigned 0:\n");
	lenmine = ft_printf("%u", 0);
	ft_printf("\n");
	lenorig = printf("%u", 0);
	printf("\n");
	ft_printf("my length: %d.\n", lenmine);
	printf("original length: %d.\n", lenorig);
	
	printf("\n");
	
	ft_printf("Unsigned com letra:\n");
	lenmine = ft_printf("%u", 4294967295u);
	ft_printf("\n");
	lenorig = printf("%u", 4294967295u);
	printf("\n");
	ft_printf("my length: %d.\n", lenmine);
	printf("original length: %d.\n", lenorig);
	
	ft_printf("\n");
	
	ft_printf("Unsigned INT_MAX:\n");
	lenmine = ft_printf("%u", INT_MAX);
	ft_printf("\n");
	lenorig = printf("%u",  INT_MAX);
	printf("\n");
	ft_printf("my length: %d.\n", lenmine);
	printf("original length: %d.\n", lenorig);
	
	ft_printf("\n");
	
	ft_printf("Unsigned INT_MIN:\n");
	lenmine = ft_printf("%u", INT_MIN);
	ft_printf("\n");
	lenorig = printf("%u",  INT_MIN);
	printf("\n");
	ft_printf("my length: %d.\n", lenmine);
	printf("original length: %d.\n", lenorig);
	
	ft_printf("\n");

	ft_printf("------------%%x/%%X------------\n");
	
	ft_printf("\n");
	
	ft_printf("Low hexa positivo (456):\n");
	lenmine = ft_printf("%x", 456);
	ft_printf("\n");
	lenorig = printf("%x",  456);
	printf("\n");
	ft_printf("my length: %d.\n", lenmine);
	printf("original length: %d.\n", lenorig);

	ft_printf("\n");

	ft_printf("Upper hexa positivo (456):\n");
	lenmine = ft_printf("%X", 456);
	ft_printf("\n");
	lenorig = printf("%X",  456);
	printf("\n");
	ft_printf("my length: %d.\n", lenmine);
	printf("original length: %d.\n", lenorig);

	ft_printf("\n");

	ft_printf("Low hexa negativo (-456):\n");
	lenmine = ft_printf("%x", -456);
	ft_printf("\n");
	lenorig = printf("%x",  -456);
	printf("\n");
	ft_printf("my length: %d.\n", lenmine);
	printf("original length: %d.\n", lenorig);

	ft_printf("\n");

	ft_printf("Upper hexa negativo (-456):\n");
	lenmine = ft_printf("%X", -456);
	ft_printf("\n");
	lenorig = printf("%X",  -456);
	printf("\n");
	ft_printf("my length: %d.\n", lenmine);
	printf("original length: %d.\n", lenorig);

	ft_printf("\n");

	ft_printf("Low hexa c/ letra (4294967293u):\n");
	lenmine = ft_printf("%x", 4294967293u);
	ft_printf("\n");
	lenorig = printf("%x",  4294967293u);
	printf("\n");
	ft_printf("my length: %d.\n", lenmine);
	printf("original length: %d.\n", lenorig);

	ft_printf("\n");

	ft_printf("Upper hexa c/ letra (4294967293u):\n");
	lenmine = ft_printf("%X", 4294967293u);
	ft_printf("\n");
	lenorig = printf("%X",  4294967293u);
	printf("\n");
	ft_printf("my length: %d.\n", lenmine);
	printf("original length: %d.\n", lenorig);

	ft_printf("\n");

	ft_printf("Low hexa positivo baixo (1):\n");
	lenmine = ft_printf("%x", 1);
	ft_printf("\n");
	lenorig = printf("%x",  1);
	printf("\n");
	ft_printf("my length: %d.\n", lenmine);
	printf("original length: %d.\n", lenorig);

	ft_printf("\n");

	ft_printf("Upper hexa positivo baixo (1):\n");
	lenmine = ft_printf("%X", 1);
	ft_printf("\n");
	lenorig = printf("%X",  1);
	printf("\n");
	ft_printf("my length: %d.\n", lenmine);
	printf("original length: %d.\n", lenorig);

	ft_printf("\n");

	ft_printf("Low hexa negativo baixo (-1):\n");
	lenmine = ft_printf("%x", -1);
	ft_printf("\n");
	lenorig = printf("%x",  -1);
	printf("\n");
	ft_printf("my length: %d.\n", lenmine);
	printf("original length: %d.\n", lenorig);

	ft_printf("\n");

	ft_printf("Upper hexa negativo baixo (-1):\n");
	lenmine = ft_printf("%X", -1);
	ft_printf("\n");
	lenorig = printf("%X",  -1);
	printf("\n");
	ft_printf("my length: %d.\n", lenmine);
	printf("original length: %d.\n", lenorig);

	ft_printf("\n");

	ft_printf("Low hexa INT_MAX:\n");
	lenmine = ft_printf("%x", INT_MAX);
	ft_printf("\n");
	lenorig = printf("%x",  INT_MAX);
	printf("\n");
	ft_printf("my length: %d.\n", lenmine);
	printf("original length: %d.\n", lenorig);
	
	ft_printf("\n");
	
	ft_printf("Upper hexa INT_MIN:\n");
	lenmine = ft_printf("%X", INT_MIN);
	ft_printf("\n");
	lenorig = printf("%X",  INT_MIN);
	printf("\n");
	ft_printf("my length: %d.\n", lenmine);
	printf("original length: %d.\n", lenorig);

	ft_printf("\n");

	ft_printf("------------%%------------\n");
	
	ft_printf("\n");
	
	ft_printf("Teste com %%:\n");
	lenmine = ft_printf("%%");
	ft_printf("\n");
	lenorig = printf("%%");
	printf("\n");
	ft_printf("my length: %d.\n", lenmine);
	printf("original length: %d.\n", lenorig);

	ft_printf("\n");

	ft_printf("\n");
	
	ft_printf("Teste com %%%%:\n");
	lenmine = ft_printf("%% %%");
	ft_printf("\n");
	lenorig = printf("%% %%");
	printf("\n");
	ft_printf("my length: %d.\n", lenmine);
	printf("original length: %d.\n", lenorig);

	ft_printf("\n");
	
	ft_printf("Teste com %%%%%%:\n");
	lenmine = ft_printf("%% %% %%");
	ft_printf("\n");
	lenorig = printf("%% %% %%");
	printf("\n");
	ft_printf("my length: %d.\n", lenmine);
	printf("original length: %d.\n", lenorig);

	ft_printf("\n");
	
	ft_printf("Teste com %% e char:\n");
	lenmine = ft_printf("%%%c", 'c');
	ft_printf("\n");
	lenorig = printf("%%%c", 'c');
	printf("\n");
	ft_printf("my length: %d.\n", lenmine);
	printf("original length: %d.\n", lenorig);

	ft_printf("\n");

	ft_printf("------------MIX------------\n");
	
	ft_printf("\n");

	ft_printf("Teste com mistura:\n");
	lenmine = ft_printf("Let's test my printf with a %s%cs, a a, a %d, a %i, a positive %u, a negative %u, a %p and a %%.", "string", 'c', 1, -1, 54, -54, (void *)-5);
	ft_printf("\n");
	lenorig = printf("Let's test my printf with a %s%cs, a a, a %d, a %i, a positive %u, a negative %u, a %p and a %%.", "string", 'c', 1, -1, 54, -54, (void *)-5);
	printf("\n");
	ft_printf("my length: %d.\n", lenmine);
	printf("original length: %d.\n", lenorig);

	return (0);
}
