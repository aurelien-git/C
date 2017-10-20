#include <stdio.h>
#include <ctype.h>
int main()
{
    char c;

    c = 'mother';
    printf("%s -> %s", c, toupper(c));

    // Displays the same argument passed if other characters than lowercase character is passed to toupper().
    c = 'D';
    printf("\n%c -> %c", c, toupper(c));

    c = '9';
    printf("\n%c -> %c", c, toupper(c));
    return 0;
}
