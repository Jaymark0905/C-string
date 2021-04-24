#include<stdio.h>
#include<string.h>

main()
{
int i,vowel=0,consonant=0;
char str[100];
printf("Input a sentence:");
gets (str);


for(i=0;i<strlen(str);i++)
{
    if(str[i]=='A'||str[i]=='a'||str[i]=='E'||str[i]=='e'||
    str[i]=='I'||str[i]=='i'||str[i]=='O'||str[i]=='o'||str[i]=='U'||str[i]=='u')
    {
        vowel++;
    } 
    
else if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {
    ++consonant;
    
    
        
    }
}
printf("String Converted:");
puts(str);
printf("\nString Length:%zu\n",strlen(str));
printf("Vowel:%d\n",vowel);
printf("Consonant:%d\n", consonant);


    return 0;
}