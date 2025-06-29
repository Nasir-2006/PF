// #include<stdio.h>
// int main()
// {
//     int i,sum=0;
//     float tot;
//     printf("Enter number of Elements in array:");
//     scanf("%d",&i);
//     int pri[i];
//      printf("\nEnter prices:");
//     for(int j=0;j<i;j++)
//     {
//        scanf("%d",&pri[j]);
//     }
//     for(int j=0;j<i;j++)
//     {
//         printf("Prices are %d\n",pri[j]);
//         sum+=pri[j];
       
//     }
//      tot=sum+sum*0.18;
//     printf("\nSum is %d",sum);
//     printf("\nPrice after adding GST is %.2f",tot);

// }
// #include<stdio.h>
// int main()
// {
//     int i,j;
//     printf("Enter rows and coulombs:");
//     scanf("%d%d",&i,&j);
//     int arr[i][j];
//     for(int a = 0;a<i;a++)
//     {
//         for(int b = 0;b<j;b++)
//         {
//             scanf("%d",&arr[a][b]);
//         }
//     }
//     printf("\n---------------------");
//     for(int a = 0;a<i;a++)
//     {
//         for(int b = 0;b<j;b++)
//         {
//             printf("\n%d ",arr[a][b]);
//         }
//         printf("\n");
//     }
//     printf("\n---------------------");
//     for(int a = 0;a<j;a++)
//     {
//         for(int b = 0;b<i;b++)
//         {
//             printf("\n%d ",arr[b][a]);
//         }
//         printf("\n");
//     }
// }
#include<stdio.h>
int main()
{
    int num,rem,arr[20],i=0;
    printf("Enter num:");
    scanf("%d",&num);
    while(num)
    {
        rem = num % 2;
        num/=2;
        arr[i] = rem;
        i++;
    }printf("\nIn binary:");
    for(int j =i-1;j>=0;j--)
    {
        printf("%d",arr[j]);
    }
}