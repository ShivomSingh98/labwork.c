#include<stdio.h>
#include<string.h>
void main()
{
    char str1[20],str2[30],res,str3[20];
    int strlength;
    printf("enter the first string:-\n");
    scanf("%s",str1);
    printf("enter the second string:-\n");
    scanf("%s",str2);
    res=strcmp(str1,str2);
    printf("concatenation string result is:-%s %s!\n",str1,str2);
    printf("compare string result is:%d\n",res);
    strcpy(str3,str1);
    printf("first string is :-%s\n",str1);
    printf("third string is :-%s\n",str3);
    printf("third string lowercase is:-%s\n",strlwr(str3));
    printf("SECOND string lowercase is:-%s\n",strlwr(str2));
    printf("SECOND string UPPERCASE is:-%s",strupr(str2));

}
