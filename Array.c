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
// #include<stdio.h>
// int main()
// {
//     int num,rem,arr[20],i=0;
//     printf("Enter num:");
//     scanf("%d",&num);
//     while(num)
//     {
//         rem = num % 2;
//         num/=2;
//         arr[i] = rem;
//         i++;
//     }printf("\nIn binary:");
//     for(int j =i-1;j>=0;j--)
//     {
//         printf("%d",arr[j]);
//     }
// }
// #include<stdio.h>
// int main()
// {
//     int r1,r2,c1,c2;
//     printf("Enter number of elements in r1 and c1");
//     scanf("%d%d",&r1,&c1);
//     printf("\nEnter number of elements in r1 and c1");
//     scanf("%d%d",&r2,&c2);
//     int arr1[r1][c1],arr2[r2][c2],res[10][10];
//     if(c1!=r2)
//     {
//         printf("\nWrong entry");
//     }
//     else{
//         printf("\nEnter elemnts of Matrix1");
//     for(int i=0;i<r1;i++)
//     {
//         for(int j=0;j<c1;j++)
//         {
//             scanf("%d",&arr1[i][j]);
//         }
//     }
//     printf("\nEnter elemnts of Matrix2");
//     for(int i=0;i<r2;i++)
//     {
//         for(int j=0;j<c2;j++)
//         {
//             scanf("%d",&arr2[i][j]);
//         }
//     }
    
//     for(int i=0;i<r1;i++)
//     {
//         for(int j=0;j<c2;j++)
//         {
//             res[i][j]=0;
//         }
//     }

//      for(int i=0;i<r1;i++)
//     {
//         for(int j=0;j<c2;j++)
//         {
//             for(int k=0;k<c1;k++)
//             {
//                 res[i][j]+=arr1[i][k]*arr2[k][j];
//             }
//         }}
//         printf("\nResult!\n");
//     for(int i=0;i<r1;i++)
//     {
//         for(int j=0;j<c2;j++)
//         {
//             printf("%d ",res[i][j]);
            
//         }
//         printf("\n");
//     }}
// }
