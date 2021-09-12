int ft_isalnum( int character )
{
    if((character >= 'a' && character <= 'z') || (character >= 'A' && character <= 'Z'))
        return 1;
    if(character >= '0' && character <= '9')
        return 1;
    return 0;
}