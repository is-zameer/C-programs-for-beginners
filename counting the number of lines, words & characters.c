#include<stdio.h>
#include<ctype.h>
int main()  {
    int ch, lines = 0, words = 0, chars = 0;
    int inWord = 0, sawAny = 0, lastChar = 0;
    printf("Enter text: \n");
    while((ch = getchar()) != EOF)  {
        sawAny = 1;
        chars++;
        lastChar = ch;
        if(ch == '\n')  {
            lines++;
            inWord = 0;
        }   else if(isspace(ch))    {
            inWord = 0;
        }   else if(!inWord)    {
            words++;
            inWord = 1;
        }
    }
    if(sawAny && lastChar != '\n')
        lines++;
    printf("Lines = %d\n", lines);
    printf("Words = %d\n", words);
    printf("Characters = %d\n", chars);
    return 0;
}