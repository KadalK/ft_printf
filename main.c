

#include <stdio.h>
#include "ft_printf.h"

#define args "%"

int	main(void)
{
//	ft_printf("					---[CHARACTERE TESTER]---\n");
//	ft_printf("		[MA FONCTION DE GROS BG] : |%c|	", 'k');
//	printf("[PAS MA FONCTION DE GROS BG] : |%c| \n\n", 'k');
//
//
//	ft_printf("					---[STRING TESTER]---\n");
//	ft_printf("[MA FONCTION DE GROS BG] : |%s|	", "Je suis CPUFAN de toi <3");
//	printf("[PAS MA FONCTION DE GROS BG] : |%s| \n\n", "Je suis pas CPUFAN de toi <3");
//
//	ft_printf("					---[DECIMAL TESTER]---\n");
//	ft_printf("		[MA FONCTION DE GROS BG] : |%d|	", 69);
//	printf("[PAS MA FONCTION DE GROS BG] : |%d| \n\n", 69);
//
//	ft_printf("					---[HEXADECIMAL TESTER]---\n");
//	ft_printf("		[MA FONCTION DE GROS BG] : |%x|	", 255);
//	printf("[PAS MA FONCTION DE GROS BG] : |%x| \n\n", 255);
//
//	ft_printf("				---[UPPER HEXADECIMAL TESTER]---\n");
//	ft_printf("		[MA FONCTION DE GROS BG] : |%X|	", 255);
//	printf("[PAS MA FONCTION DE GROS BG] : |%X| \n\n", 255);
//
//	ft_printf("					---[UNSIGNED TESTER]---\n");
//	ft_printf("		[MA FONCTION DE GROS BG] : |%u| |%u| 	", 42, -42);
//	printf("[PAS MA FONCTION DE GROS BG] : |%u| |%u| \n\n", 42, -42);
//
//	ft_printf("					---[NORMAN TESTER]---\n");
//	ft_printf("		[MA FONCTION DE GROS BG] : |%p|	", &main);
//	printf("[PAS MA FONCTION DE GROS BG] : |%p| \n\n", &main);
//
//	ft_printf("					---[PURCENT ARAB TESTER]---\n");
//	ft_printf("		[MA FONCTION DE GROS BG] : |%%|	");
//	printf("[PAS MA FONCTION DE GROS BG] : |%%| \n\n");

	ft_printf("%d\n", ft_printf(args));
	printf("%d\n", printf(args));

	return (0);
}