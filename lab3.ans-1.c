#include<stdio.h>
int main()
{
    char s[100],ch;
    int i,c=0,v=0;
    printf("Input String:");
    gets(s);
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]>='A'&&s[i]<='Z' || s[i]>='a'&&s[i]<='z')
            c++;
    }

 for(i=0;s[i]!='\0';i++)
 {
     //if(s[i]>='A'&&s[i]<='Z' || s[i]>='a'&&s[i]<='z')
          //  c++;
     if(s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'||s[i]=='a'||s[i]=='e'||s[i]=='o'||s[i]=='i'||s[i]=='u')
        v++;

 }
 printf("No of vowel:%d",v);

}
