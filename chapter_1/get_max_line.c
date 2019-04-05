#include <stdio.h>

int get_line(char s[]){
    int c, i=0;
    while((c = getchar())!=EOF && c!='\n'){
        s[i] = c;
        i++;
    }
    if(c == '\n'){
        s[i] = c;
        i++;
    }
    s[i] = '\0';
    return i;
}

int main() {
    char s[1000];
    int len = get_line(s);
    printf("%s", s);
    printf("%d\n", len);
    return 0;
}
