#include <stdio.h>
#include "txtfind.h"

int main()
{
    char word[WORD] = {'\0'};
    char op='\0';
    if(!getWord(word)) printf("Err");
    char index=getc(stdin);
    while((index != '\n') )
    {
        if(index =='a') op='a';
        if(index =='b') op='b';
         index=getc(stdin);
    }
    char first[1];
     if(getLine(first)!=0) printf("Err");
    printf("%s ",word);
    printf("%c \n",op);
    switch(op){
    case 'a':
        print_lines(word);
        break;
    case 'b':
        print_similar_words(word);
        break;
    default:
        printf("invalid input");
    }
    return 0;
}