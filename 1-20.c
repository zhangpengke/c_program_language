#include<stdio.h>

#define TAB_INC 8

int main(int argc, char const *argv[])
{
    int pos=1;
    int c;
    int blank_ct=0;
    while ((c=getchar())!=EOF)
    {
        if (c=='\t')
        {
            blank_ct=TAB_INC-(pos-1)%TAB_INC;
            while (blank_ct>0)
            {
                putchar(' ');
                blank_ct--;
                pos++;
            }
        }else if (c=='\n')
        {
            putchar(c);
            pos=1;
        }else{
            putchar(c);
            pos++;
        }
    }
    
    return 0;
}
