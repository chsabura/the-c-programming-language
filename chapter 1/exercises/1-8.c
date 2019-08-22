#include <stdio.h>

int main()
{
    int c;
    int blanks = 0;
    int tabs = 0;
    int newlines = 0;

    c = getchar();
    while (c != EOF) {
        if (c == ' ')
            ++blanks;
        if (c == '\t')
            ++tabs;
        if (c == '\n')
            ++newlines;
        c = getchar();
    }
    
    printf("Tabs: %d\n", tabs);
    printf("Blanks: %d\n", blanks);
    printf("Newlines: %d\n", newlines);

    return 0;
}
