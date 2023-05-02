/*Create a user defined function that accepts a string as input and returns the number of vowels and consonants in the string.*/

#include<string.h>
void stringcount(char*s)
{
    int vowels=0, consonants=0, i;
    
    for(i=0;s[i];i++)  
    {
    if((s[i]>=65 && s[i]<=90)|| (s[i]>=97 && s[i]<=122))
    {
            if(s[i]=='a'|| s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
      vowels++;
            else
             consonants++;
        } 
 }   
    printf("vowels = %d\n",vowels);
    printf("consonants = %d\n",consonants); 
}
int main()
{ 
    char s[1000];  
   printf("Enter  the string: ");
    gets(s);    
     stringcount(s);
 }

