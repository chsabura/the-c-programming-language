#include <stdio.h>
#include <limits.h>

int main()
{
    int c;
    int max_len = 0;
    static int word_len[INT_MAX];
    int curr_len = 0;

    while ((c = getchar())) {
        if (c == EOF) {
            word_len[curr_len - 1]++;
            break;
        }
        curr_len += 1;
        if (curr_len > max_len) {
            max_len = curr_len;
        }
        if (c == ' ') {
            word_len[curr_len - 1]++;
            curr_len = 0;
        }
    }
    for (int i = 1; i < max_len; i++) {
        if (word_len[i] > 0)
            printf("Length %d -> %d\n", i, word_len[i]);
    }
    return 0;
}
