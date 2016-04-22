//Binary number to decimal no
 
#include<stdio.h>
#include<string.h>
 
int power(int i)
{
    int v=2;
    if(i==0)
        return 1;
    else
     {
        for(int j=2;j<=i;j++)
         v*=2;
     }
     return v;
}
 
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
            dec=dec+power(i);
        }
    }
    printf("decimal value:%d",dec);
     
    return 0;
     
}
