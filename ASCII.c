#include <stdio.h>
int ascii();
int main()
{
    int i = 0;
    char ou;
    ascii();
    return 0;
}
int ascii()
{
    int i = 0;
    char ou;
    while (i<=255)
    {
        printf("%d = %c\n",i,ou);
        i++;
        ou++;
    }
    return(ou);
}
