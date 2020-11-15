#include "libft.h"

int     ft_isalnum(int character)
{
    if (ft_isalpha(character) || ft_isdigit(character))
        return (1);
    return (0);
}