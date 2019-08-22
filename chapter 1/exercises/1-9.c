#include <stdio.h>

int main()
{
    int c;
    int prev = -1;

    c = getchar();
    while (c != EOF) {
        if (c == ' ') {
            if (prev != ' ')
                putchar(' ');
        } else {
            putchar(c);
        }
        prev = c;
        c = getchar();
    }
    return 0;
}
