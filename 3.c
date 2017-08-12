#include <stdio.h>
int main()
{
    char s;
    int isLowercaseVowel, isUppercaseVowel;
     printf("Enter an alphabet: ");
    scanf("%c",&s);
     isLowercaseVowel = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
     isUppercaseVowel = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
    if (isLowercaseVowel || isUppercaseVowel)
        printf("%c is a vowel.", s);
     else
        printf("%c is a consonant.", s);
    return 0;
}
