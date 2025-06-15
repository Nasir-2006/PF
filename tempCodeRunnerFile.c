#include<stdio.h>
int main()
{
    int i,sum=0;
    float tot;
    printf("Enter number of Elements in array:");
    scanf("%d",&i);
    int pri[i];
     printf("\nEnter prices:");
    for(int j=0;j<i;j++)
    {
       scanf("%d",&pri[j]);
    }
    for(int j=0;j<i;j++)
    {
        printf("Prices are %d\n",pri[j]);
        sum+=pri[j];
       
    }
     tot=sum+sum*0.18;
    printf("\nSum is %d",sum);
    printf("\nPrice after adding GST is %.2f",tot);

}