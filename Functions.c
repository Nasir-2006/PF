// #include<stdio.h>
// void AoA();
// void hi();
// int main()
// {
//     int num;
//     printf("Enter 1 for Asslam-o-Alaikum\nEnter 2 for Hi!\n");
//     scanf("%d",&num);
//     if(num==1)
//     AoA();
//     else if(num==2)
//     hi();
//     else
//     printf("Wrong call");
//     return 0;
// }
// void AoA()
// {
//     printf("Asslam-o-Alaikum");
// }
// void hi()
// {
//     printf("\nHi!");
// }
// #include<stdio.h>
// int table(int num);
// int main()
// {
//     int num=0;
//     printf("Enter a number:");
//     scanf("%d",&num);
//     // printf("factorial of %d is %d",num,table(num));
//     table(num);
//     return 0;
// }
// int table(int num)
// {
//     int table=1;
//     for(int i=1;i<=10;i++)
//     {
//         printf("The table of %d is %d\n",num,i*num);
//     }
//     return table ;
// }
// #include<stdio.h>
// float cir(float r);
// float area(float rad);
// int main()
// {
//     int r=0,rad=0;
//     printf("Enter radius :");
//     scanf("%d",&r);
//     rad=r;
//     cir(r);
//     area(rad);
//     return 0;
// }
// float cir(float r)
// {
//     printf("Circumference is %.4f",((2*3.14)*r));
//     return r;
// }
// float area(float rad)
// {
//     printf("Area is %.4f",(3.14*rad*rad));
//     return rad;
// }
// #include<stdio.h>
// float area_cir(float rad);
// float area_sq(float side);
// float area_rec(float l,float w);
// int main()
// {
//     float rad,side,l,w;
//     printf("Enter Radius side Length width:\n");
//     scanf("%f%f%f%f",&rad,&side,&l,&w);
//     area_cir(rad);
//     area_sq(side);
//     area_rec(l,w);
//     return 0;
// }
// float area_cir(float rad)
// {
//     printf("Area of circle is :%.2f",((2*3.14)*rad));
//     return rad;
// }
// float area_sq(float side)
// {
//     printf("\nArea of square is :%.2f",(side*side));
//     return side;
// }
// float area_rec(float l,float w)
// {
//     printf("\nArea of rectangle is :%.2f",((l*w)));
//     return l*w;
// }
// #include<stdio.h>
// int sq(int num);
// int main()
// {
//     int num;
//     printf("Enter num:");
//     scanf("%d",&num);
//     printf("Square of %d is %d",num,sq(num));
//     return 0;
// }
// int sq(int num)
// {
//     int square=1;
//     square=num*num;
//     return square;
// }

// #include<stdio.h>
// void prime(int num);
// int main(){

//     int num;
//     printf("Enter num:");
//     scanf("%d",&num);
//     prime(num);
// }
// void prime(int num)
// {
//     int pri=0;
//    for(int i=1;i<=num;i++)
//    {
//     if(num%i==0)
//     {
//        pri++; 
//     }
//    }
//    if(pri==2)
//    printf("Hurrah!");
//    else
//    printf("Koi baat nahi dobara try kar le"); 
// }
// #include<stdio.h>
// void HCF();
// void LCM(int new_num,int new_num2);
// int first_last();
// int palindrome(int num);

// int main()
// {
//     int num;
//     printf("Which option you want:\n");
//     printf("1- Void with no Argument\n2- Void with Argument\n3- int with no Argument\n4-int with Argument");
//     scanf("%d",&num);
    
//     switch(num)
//     {
//         case 1:
//         {
//             HCF();
//         }break;
//         case 2:
//         {
//             int new_num,new_num2;
//             printf("Enter num1 and num2:\n");
//             scanf("%d%d",&new_num,&new_num2);
//             LCM(new_num,new_num2);

//         }break;
//         case 3:
//         {
//             first_last();
//         }break;

//         case 4:
//         {
//             palindrome(num);
//             int num;
//             printf("Enter num:");
//             scanf("%d",&num);
//             if (palindrome(num)) {
//                 printf("%d is a palindrome number.\n", num);
//             } else {
//                 printf("%d is not a palindrome number.\n", num);
//             }
//         }break;
//         default:
//         printf("koi nahi dobara try kar");
//     }
// }
// void HCF()
// {
//     int num1,num2,HCF;
//     printf("Enter num1 and num2:");
//     scanf("%d%d",&num1,&num2);
//     for(int count=1;count<=num1&&count<=num2;count++)
//     {
//         if(num1%count==0&&num2%count==0)
//         {
//             HCF=count;
//         }
//     }
//     printf("HCF is %d",HCF);
// }
// void LCM(int new_num,int new_num2)
// {
//     int HCF=0;int LCM=0;
//     for(int count=1;count<=new_num&&count<=new_num2;count++)
//     {
//         if(new_num%count==0&&new_num2%count==0)
//         {
//             HCF=count;
//         }
//     }
    
//     LCM=(new_num*new_num2)/HCF;
//     printf("LCM is %d",LCM);
//     // return LCM;
// }
// int first_last()
// {
//     int num;
//     printf("Enter num:");
//     scanf("%d",&num);
//     int nn=num;
//     for(;num>=10;)
//     {
//         num/=10;
//     }
//     printf("First num is %d",num);
//     nn%=10;
//     printf("Last num is %d",nn);
// }
// int palindrome(int num)
// {
   
//     int nn=num;
//     int rev=0,dig=1;
//     for(;num!=0;)
//     {
//     dig=num%10;
//     rev=rev*10+dig;
//     num/=10;
//     }
//     return (nn == rev) ? 1 : 0;}
// #include<stdio.h>
// int prim(int num);
// int main()
// {
//     int num;
//     printf("Enter num:");
//     scanf("%d",&num);
//     if( prim(num)==0 )
//     printf(" Not prime ");
//     else
//     printf("Prime");
// }
// int prim(int num)
// {
//     int pri=0;int count=1;
//     for (int i = num; count <= num; count++)
//     {
//         if(num%count==0)
//         {
//             pri++;
//         }
//     }
//     if(pri==2)
//     {
//         return 1;
//     }
//     else
//     return 0;
    
// }
// #include<stdio.h>
// int wd(int num)
// {

//     printf("Enter withdrawl amount:");
//     scanf("%d",&num);
//     return num;
// }

// int main()
// {
//    int num,mon,amt;
//    printf("Deposit money:");
//    scanf("%d",&mon);
//    amt=wd(num);
//    printf("Your withdrawl amount is %d",amt);
//    if(amt>mon)
//    {
//     printf("You do not have enough money!");
//    } 
//    else
//    {
//     float ser = (mon-amt)*0.04;
//     printf("\nYour service charges for withdrawl is %.2f ",ser);
//     int bal;
//     bal = mon - (amt+ser);
//     printf("\n Your current balance is %d",bal);
//    }
// }



// -------------------RECURSION-----------------
// #include<stdio.h>
// int sum(int num);
// int main()
// {
//     int num;
//     printf("Enter num:");
//     scanf("%d",&num);
//     printf("Sum of %d is %d",num,sum(num));
//     return 0;
// }
// int sum(int num)
// {
//     if(num==0)
//     return 0;
//     int add = sum(num-1)+num;
//     return add;
// }

// #include<stdio.h>
// int loop(int n);
// int main()
// {
//     int n;
//     printf("Enter num:");
//     scanf("%d",&n);
//     loop(n);
//     printf("%d\n",loop(n));
    
// }
// int loop(n)
// {
//     if(n==0)
//     return 1;
//    return loop(n-1)*n;
// }
// #include<stdio.h>
// int mul(int n1,int n2);
// int main()
// {
//     int n1,n2;
//     printf("Enter num:");
//     scanf("%d%d",&n1,&n2);
//     printf("product of n1 & n2 is %d",mul(n1,n2));
//     return 0;
// }
// int mul(n1,n2)
// {
//     if(n1==0||n2==0)
//     return 0;
//     if(n1==1)
//     return n2;
//     int pro = n2+mul(n1-1,n2);
//     return pro;
// }
// #include<stdio.h>
// int LCM(int n1,int n2);
// int main()
// {
//     int n1,n2;
//     printf("Enter num:");
//     scanf("%d%d",&n1,&n2);
//     printf("The LCM is %d",LCM(n1,n2));
//     return 0;
// }
// int LCM(n1,n2)
// {
//     if(n1==0||n2==0)
//     return 0;
//     // int max=(n1>n2)?n1:n2;
//     // return max;
//     static int temp=1;
//     if(temp%n1==0 && temp%n2==0)
//     return temp;
//     temp++;
//     return LCM(n1,n2);
    
// }
// #include<stdio.h>
// int find(int);
// int main()
// {
//     int num;
//     printf("Enter num:");
//     scanf("%d",&num);
//     if(find(1))
//     {
//         printf("Num is even");
//     }
//     else
//     {
//         printf("Number is odd");
//     }
// }
// int find(int num)
// {
//     if(num%2==0)
//     return 1;
//     else
//     return 0;
// }
// #include<stdio.h>
// int ser(int);
// int main()
// {
//     int num;
//     printf("Enter num:");
//     scanf("%d",&num);
//     printf("Sum is %d",ser(num));

// }
// int ser(int num)
// {
//     int sum=0;
//     for(int i=1;i<=num;i++)
//     {
//        int fac=1;
//        for(int j = 1;j<=i;j++)
//        {
//         fac = fac * j;
//        }
//        sum = sum + (fac/i);
//     }
// return sum;
// }
// #include<stdio.h>
// int main()
// {
//     int num,r,b=0,ba=1;
//     scanf("%d",&num);
//     while(num>0)
//     {
//         r=num%2;
//         b=b+r*ba;
//         num/=2;
//         ba=ba*10;

//     }
//     printf("Binary is %d",b);
// }
// #include<stdio.h>
// void sum(int);
// int main()
// {
//     int num;
//     printf("Enter num");
//     scanf("%d",&num);
//     sum(num);

// }
// void sum(int num)
// {
//     int s;
//     if(num==0)
//     return 0;
//     else
//   printf("%d\n",&num);
//    sum(num-1);  
    
// }