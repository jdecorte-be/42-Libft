int ft_atoi( const char *str)
{
    int  i = 0;
    int signe = 1;
    int res = 0;
    while((str[i] >= 9 && str[i] <= 13) || (str[i] == ' '))
        i++;
    if(str[i] == '-')
    {
        signe*= -1;
        i++;
    }
    else if(str[i] == '+')
        i++;
    
    while(str[i] >= '0' && str[i] <= '9')
    {
        res = res * 10 + str[i] - '0';
        i++;
    }

    return res * signe;
}
