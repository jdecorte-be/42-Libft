#include "libft.h"

int ft_toupper(int charact)
{
	if(charact >= 'a' && charact <= 'z') 
		charact -= 32; 
	return charact;
}
