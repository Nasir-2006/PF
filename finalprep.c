// #include<stdio.h>
// int main()
// {
//     int i;
//     printf("Enter array element:");
//     scanf("%d",&i);
//     int arr[i];
//     for(int j=0;j<i;j++)
//     {
//         scanf("%d",&arr[j]);
//     }
//     for(int k=0;k<i;k++)
//     {
//         for(int l=k+1;l<i;l++)
//         {
//             if(arr[k]<arr[l])
//             {
//                 int temp = arr[k];
//                 arr[k]=arr[l];
//                 arr[l]=temp;
//             }
//         }
//     }
//     for(int j=0;j<i;j++)
//     {
//         printf("%d  ",arr[j]);
//     }
// }
// #include<stdio.h>
// int main()
// {
//     printf("Enter array element");
//     int i;
//     scanf("%d",&i);
//     int arr[i];
//     for(int j=0;j<i;j++)
//     {
//         scanf("%d",&arr[j]);
//     }
//     int max=arr[0];
//     int min=arr[0];

//      for(int j=0;j<i;j++)
//      {
//         if(arr[j]<min)
//         min=arr[j];
//         if(arr[j]>max)
//         max=arr[j];
//      }
//      printf("max is %d",max);
//      printf("min is %d",min);
// }
// #include<stdio.h>
// int main()
// {
//     int n;
//     printf("Enter elements:");
//     scanf("%d",&n);
//     int arr[n];
//     for (int  i = 0; i < n; i++)
//     {
//         scanf("%d",&arr[i]);
//     }
//     for (int i = 0; i < n; i++)
//     {
//         for(int j =i+1;j<n;j++)
//         {
//             if(arr[i]<arr[j])
//             {
//                 int temp = arr[i];
//                 arr[i] = arr[j];
//                 arr[j] = temp;
//             }
//         }
//     }
    
//     {
//         printf("Max is %d \n Min is %d ",arr[0],arr[n-1]);
//     }
    
    
// }
// #include<stdio.h>
// int main()
// {
//     int n;
//     printf("Enter elements:");
//     scanf("%d",&n);
//     int arr[n];
//     for(int i=0;i<n;i++)
//     {
//         scanf("%d",&arr[i]);
//     }
//     printf("\n--------------------------");
//     for(int j=n-1;j>=0;j--)
//     {
//         printf("\n%d ",arr[j]);
//     }
// }
// #include<stdio.h>
// int main()
// {
//     int n;
//     printf("Enter elements:");
//     scanf("%d",&n);
//     int arr[n];
//     for(int i=0;i<n;i++)
//     {
// scanf("%d",&arr[i]);
//     }
//     for(int i=0;i<n/2;i++)
//     {
//         int temp=arr[i];
//         arr[i]=arr[n-i-1];
//         arr[n-i-1]=temp;
//     }
//      for(int i=0;i<n;i++)
//     {
//        printf("%d\n",arr[i]);
//     }
    
// }
// #include<stdio.h>
// int main()
// {
//     int n;
//     printf("Enter num:");
//     scanf("%d",&n);
//     switch(n>0)
//     {
//         case 1:printf("Number is Postive");break;
//         case 0:switch(n==0)
//         {
//             case 1:printf("Number is Zero");break;
//             case 0:printf("Number is negitive");break;
//         }
//     }
// }
// #include<stdio.h>
// int main()
// {
//     int n,sum=0;
//     printf("Enter elements:");
//     scanf("%d",&n);
//     int arr[n];
//     for(int i=0;i<n;i++)
//     {
//         scanf("%d",&arr[i]);
//         sum=sum+arr[i];
       
//     }
//      printf("\nSum is %d",sum);
    
// }
// #include<stdio.h>
// int main()
// {
//   int n,sum=0;
//     printf("Enter elements:");
//     scanf("%d",&n);
//     int arr[n];
//     for(int i=0;i<n;i++)  
//     {
//        scanf("%d",&arr[i]); 
//     }
//     int size = sizeof(arr)/sizeof(arr[0]);
//     printf("\nElements are: %d",size);
// }
// #include<stdio.h>
// int main()
// {    int n;
//     printf("Enter elements:");
//     scanf("%d",&n);
//     int arr[n];
//     for(int i=0;i<n;i++)  
//     {
//        scanf("%d",&arr[i]); 
//     }
//     for(int i=0;i<n;i++)  
//     {
//         if(arr[i]%2==0)
//         {
//             printf("%d ",arr[i]);
//         }
//     }
// }
// #include<stdio.h>
// int main()
// {
//     int i,j,r1,r2,c1,c2;
    
//     printf("Enter rows and columns of Matrix 1:  ");
//     scanf("%d %d",&r1,&c1);
//     printf("Enter rows and columns of Matrix 2:  ");
//     scanf("%d %d", &r2, &c2);
    
//     if(c1!=r2)
//     printf("\nWrong input");
//     else
//     {
//         int A[r1][c1],B[r2][c2],C[r1][c2];
//         printf("\nEnter elements of matrix 1:\n");
//         for(int i=0;i<r1;i++)
//         {
//             for(int j=0;j<c1;j++)
//             {
//                 scanf("%d", &A[i][j]);
//             }
//         }
//         printf("\nEnter elements of matrix 2:\n");
//         for(int i=0;i<r2;i++)
//         {
//             for(int j=0;j<c2;j++)
//             {
//                 scanf("%d", &B[i][j]);
//             }
//         }
//          for(int i=0;i<r1;i++)
//         {
//             for(int j=0;j<c2;j++)
//             {
//                 C[i][j]=0;
//             }
//         }
//         for( i=0;i<r1;i++)
//         {
//             for( j=0;j<c2;j++)
//             {
//                 for(int k=0;k<c1;k++)
//                 {
//                     C[i][j]+=A[i][k]*B[k][j];
//                 }
//             }
//         }
//         for(int i=0;i<r1;i++)
//         {
//             for(int j=0;j<c2;j++)
//             {
//                 printf("%d ",C[i][j]);
//             }
//             printf("\n");
//         }
//     }
// }
// #include<stdio.h>
// int main()
// {
//     int i,sum=0;
//     float avg=0;
//     printf("Element :");
//     scanf("%d",&i);
//     int arr[i];
//     for(int j=0;j<i;j++)
//     {
//         scanf("%d",&arr[j]);
//     }
//     for(int j=0;j<i;j++)
//     {
//         printf("Elements are %d\n",arr[j]);
//         sum +=arr[j];
//     }
//     printf("Sum is %d",sum);
//     avg = sum/i;
//     printf("\nAverage is %f",avg);
    
// }
// #include<stdio.h>
// int main()
// {
//     FILE *fptr;
//     char ch;
//     fptr=fopen("Hi.txt","w");
//     if(fptr==NULL)
//     {
//         printf("Sorry!File does not exist");
//     }
//     while(ch!=)
//     {

//     }
// }
#include<stdio.h>
int upr(sptr);
int main()
{
    int str[]="Hi my name is nasir";
    int *sptr = &str[0];
    while(sptr!='\0')
    {
        printf("%s",sptr);
        sptr++;
    }
}