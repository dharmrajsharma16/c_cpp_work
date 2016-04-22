//Binary number to decimal no
 
#include<stdio.h>
#include<string.h>

int main()
{
    char ch[20];
    printf("Enter Binary No:");
    scanf("%s",ch);
    int n=strlen(ch);
    int dec=0;
    for(int i=0,j=n-1;j>=0;j--,i++)
    {
        if(ch[j]=='1')
        {
            dec=dec+(1<<i);
        }
    }
    printf("decimal value:%d",dec);
     
    return 0;
     
}
