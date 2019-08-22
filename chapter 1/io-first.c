#include <stdio.h>

/* copy input to output; 1st version */
main()
{
    int c;
    setbuf(stdout, NULL);
    printf("lmao");
    c = getchar();
    while (c != EOF) {
        putchar(c); // adds c to stdout stream, it only gets flushed once it reaches \n
                    // thus outputing the stream
        c = getchar();
    }
}
