// #include<stdio.h>
// int main()
// {
//     int val=10;
//     int*p1=&val;
//     printf("%u\n",p1);
//     printf("%u\n",&p1);
//      printf("%u\n",*(&p1));
// }
// #include<stdio.h>
// int main()
// {
//     int val = 15;
//     //value at pointer (ptr) is equal to value at address of val
//     int *ptr = &val;
//     //value at pointer (pptr) is equal to value at address of (ptr)
//     int **pptr = &ptr;
//     printf("*ptr = %u",*ptr);
//     printf("\n**ptr = %u",*pptr);
// }
// #include<stdio.h>
// int main()
// {
//     int i = 5;
//     int*ptr = &i;
//     int**pptr = &ptr;
//     int***ppptr = &pptr;
//     printf("%u\n",i);
//     printf("%u\n",&ptr);
//     printf("%u\n",&pptr);
//      printf("%u\n",&ppptr);

// }
// #include<stdio.h>
// void swap(int*a,int*b)
// // is function me int*a=&x or int*b=&y he
// {
//     *a = *a + *b - (*b=*a);
// }
// int main()
// {
//     int x,y;
//     printf("Enter value of A and B\n");
//     scanf("%d%d",&x,&y);
//     swap(&x,&y);
//     printf("A = %d\nB = %d",x,y);
// }