#include <stdio.h>

#define MAXLINE 1000

int get_line(char [], int);

void copy(char [], char[]);

void reverse(char[]);

int main() {
    char line[MAXLINE], longest[MAXLINE];
//    int len, max = 0;
//    while ((len = get_line(line, MAXLINE)) > 0) {
//        if (len > max) {
//            max = len;
//            copy(line, longest);
//        }
//    }
//    printf("longest line %s, with size=%d", longest, max);
    while (get_line(line, MAXLINE) > 0) {
        reverse(line);
        printf("after reverse, string is %s\n", line);
    }

    return 0;
}

int get_line(char s[], int limit) {
    int c, i, j;
    i = 0;
    j = 0;
    while ((c = getchar()) != EOF && c != '\n') {
        if (i < limit - 1) {
            s[j] = c;
            j++;
        }
        i++;
    }
    if (c == '\n') {
        s[j] = c;
        j++;
        i++;
    }
    s[j] = '\0';
    return i;
}

void copy(char from[], char to[]) {
    int i = 0;
    while ((to[i] = from[i]) != '\0') {
        i++;
    }
}

int remove_blank(char s[]) {

    int i = 0;
    while (s[i] != '\n') {
        i++;
    }
    i--;
    while (i >= 0 && (s[i] != ' ' && s[i] != '\t')) {
        i--;
    }
    if (i >= 0) {
        i++;
        s[i] = '\n';
        i++;
        s[i] = '\0';
    }
    return i;
}

void reverse(char s[]) {

    int i, j = 0;
    char tmp;
    while (s[i] != '\0') {
        i++;
    }
    if (i > 0) {
        i--;
        if (s[i] == '\n' && i > 0) {
            i--;
        }
    }
    while (i > j) {
        tmp = s[j];
        s[j] = s[i];
        s[i] = tmp;
        i--;
        j++;
    }
}
