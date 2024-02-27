#include <stdio.h>
#include <unistd.h>

int  ft_atoi ( char *str)
{
    int i = 0;
    int r = 0;
    int sign = 1;

    while (str[i] == ' ' || str[i] >= 9 && str[i] <= 13 )
    i++;
    if (str[i] == '-')
    {
        sign *= -1;
    } 
    i++;
    while  (str[i] >= '0' && str[i] <= '9')
    {
        r = r * 10 +(str[i] - '0');
        i++;

    }
    return (r * sign);
}
int main (int ac ,char **av)
{
	while(ac == 4)
	{
		while(*av[1] != '\0' && *av[3]  != '\0')
		{
			if(av[2][0] == '+')
			{
				printf("sum===> %d\n",ft_atoi(av[1]) + ft_atoi(av[3]));
			}
			else if(av[2][0] == '-')
			{
				printf("min===> %d\n", ft_atoi(av[1]) - ft_atoi(av[3]));
			}
			else if(av[2][0] == '/')
			{
				if(av[3] != 0)
				{
					printf("mod===> %d\n",ft_atoi(av[1]) / ft_atoi( av[3]));
				}
				else
				{
					printf("eror");
				}
			}
			else if (av[2][0] == '*')
			{
				printf("dev===> %d\n", ft_atoi(av[1]) * ft_atoi(av[3]));
			}
			else 
				write (1, "\n", 1);
		}
	}
	return 0;
    
}
