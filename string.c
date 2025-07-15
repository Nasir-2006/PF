// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     char name[]="Nasir";
//     printf("Reversal of string is %s",strrev(name));
// }
// #include<stdio.h>
// int main()
// {
//    char st[100];
//    printf("Enter string:");
//    gets(st);
//    puts(st);
// }
// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     char name[]="My name Is Nasir";
//     printf("String length is %d\n",strlen(name));
//     for(int i=strlen(name);i<=strlen(name);i--)
//     {
//         printf("%c",name[i]);
//     }
// }
#include<stdio.h>
#include<string.h>
int main()
{
    char name1[10]= "Nasir";
    char name2[10]="Mehmood";
    printf("%s %s",strlwr(name1),strupr(name2));
    printf("\n%s %s",strupr(name1),strupr(name2));
    printf("\n%s",strncat(name1,name2,1));
    printf("\n%s",strcpy(name1,name2));
     printf("\n%s",strncpy(name1,name2,3));
}