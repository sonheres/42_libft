#include "libft.h"

int	main(void)
{
	char	cad_src[] = "puri";

    printf("original: %i\n", strchr(cad_src, '\0') - cad_src);
    printf("otra    : %i\n", ft_strchr(cad_src, '\0') );
}