
#include <stdio.h>
#include "libft.h"

int main()
{

    
    printf("printf outputs %#x, %#o\n", 122 ,122);
    printf("printf outputs %X, %#O\n\n", 122 ,122);
    
    ft_printf("my printf outputs %#x, %#o\n", 122 ,122);
    ft_printf("my printf outputs %#X, %#O\n\n", 122 ,122);
    
    char str[] = "hello";
    
    //printf("%s\n", str);
    ft_printf("%s\n", "hello");
    ft_printf("%s\n", str);
    //ft_printf("%s\n", str);
    //printf("%-10s\n", str);
    //printf("%3.5s\n", "testing");

    return 0;
}
