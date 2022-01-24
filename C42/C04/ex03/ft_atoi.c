#include<stdio.h>
int ft_atoi(char *str)
{
    int i;
    int sign;
    int convert_number;
    int tmp;
    convert_number = 0;
    sign =1;
    i= 0;
    //probleme avec les espaces
    while(str[i] == '\f' || str[i] == '\n' || str[i] == '\t' || str[i] == '\v')
    {
        i++;
    }
    while(str[i] == '+' || str[i] == '-')
    {
        if(str[i] == '-')
        {
            sign *= -1;
        }
        i++;
    }
    while(str[i] >= '0' && str[i] <= '9')
    {
        tmp = str[i] - '0';
        convert_number = convert_number * 10 - tmp;
        i++;
    }
    if(sign == -1)
        convert_number *= -1;
    
    return convert_number;
}

int main()
{
    char a[] = "	----+26662";
    int b = ft_atoi(a);
    printf("%d", b);
}
