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

#define CHAR_NUM 128

int main()
{
    static int chars[CHAR_NUM];
    int c;

    while ((c = getchar()) != EOF) {
        chars[c]++;
    }

    // characters from 0 to 31 can't be used as input afaik
    for (int i = 32; i < CHAR_NUM; i++) {
        if (chars[i] != 0)
            printf("Character '%c' -> %d\n", i, chars[i]);
    }

    return 0;
}