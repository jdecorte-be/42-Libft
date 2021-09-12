#include "libft.h"

int ft_tolower(int charact)
{
	if(charact >= 'A' && charact <= 'Z') 
		charact += 32; 
	return charact;
}
