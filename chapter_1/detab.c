//
// Created by pk on 19-4-19.
//

#include <stdio.h>

#define TABINC 8

int main() {
    int c;
    int pos = 0;
    while ((c = getchar()) != EOF) {
        if (c == '\t') {
            int remain = TABINC - pos % TABINC;
            while (remain > 0) {
                putchar(' ');
                pos++;
                remain--;
            }
        } else if (c == '\n') {
            putchar(c);
            pos = 0;
        } else {
            pos++;
            putchar(c);
        }
    }
}
