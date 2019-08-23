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
