// Solutions to the book The C Programming Language
// Copyright (C) 2019  Carlos Toro (chsabura)
//
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <https://www.gnu.org/licenses/>.

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
