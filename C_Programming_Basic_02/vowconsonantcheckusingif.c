/*The isalpha() function checks whether a character is an alphabet or not.
You can get a different non-zero integer when alphabetic character is passed to isalpha() on your system. But, when you pass non-alphabetic character to isalpha(), it always returns 0.
Internally, the character is converted into the integer value corresponding to its ASCII value when passed.*/
#include<stdio.h>
#include<ctype.h>
int main(){
    char vowel;
    printf("ENTER A CHARACTER AND CHECK IF IT IS A VOWEL OR A CONSONANT\n");
    scanf("%c", &vowel);
    if(vowel == 'A'||vowel=='E'||vowel=='I'||vowel=='O'||vowel=='U'||vowel=='a'||vowel=='e'||vowel=='i'||vowel=='o'||vowel=='u')
    printf("THE CHARACTER %c you ENTERED IS A VOWEL", vowel);
    else if((vowel>='a' && vowel<='z') || (vowel>='A' && vowel<='Z')) 
    printf("THE CHARACTER %c YOU ENTERED IS  A CONSONANT ", vowel);
    else if(!isalpha(vowel))
    printf(" NON ALPHABETIC");
    
}
     
    
    