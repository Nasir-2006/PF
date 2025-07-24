
// #include<stdio.h>
// int main()
// {
//     int num1, num2, sum;
//     printf("Enter two integers: ");
//     scanf("%d %d",&num1,&num2); /* Stores the two integer entered by user in variable num1 and num2 */

//     sum=num1+num2;      /* Performs addition and stores it in variable sum */
//     printf("Sum: %d",sum);  

// }
// #include<stdio.h>
// int main()
// {
//     char ch = 'A';
// char str[20] = "Nasir";
// float flt = 11.2;
// int no = 192;
// double dbl = 45.98789;
// printf("Character is %c \n", ch);
// printf("String is %s \n" , str);
// printf("Float value is %f \n", flt);
// printf("Integer value is %d\n" , no);
// printf("Double value is %lf \n", dbl);
// printf("Octal value is %o \n", no);
// printf("Hexadecimal value is %x \n", no);

// }
// #include<Stdio.h>
// int main()
// {
//     char hi[20];
//     printf("Enter Name or any thing else:");
//     scanf("%s",&hi);
//     printf("THE statement you entered is (%s)",hi);
// }
// #include<stdio.h>
// int main()
// {
//     float radius,area;
//   printf( "Enter radius of circle: ");
//   scanf( "%f", &radius) ;
//   area = 3.14*radius*radius;
//   printf( "Area of the circle is:  %f \n", area);

// }
// #include<stdio.h>
// int main()
// {
//     int a,b,c;
//     a='z';
//     b='y';
//     c=a+b;
//     printf("%d",c);
// }
// #include<stdio.h>
// int main()
// {
//     int a;
//     char b;
//     float c;
//     double d;
//     long double e;
//     printf("Storage of int data type is %d",sizeof(a));
//     printf("\nstorage of float is %d",sizeof(c));
//     printf("\nstorage of char is %d",sizeof(b));
//     printf("\nstorage of double is %d",sizeof(d));
//     printf("\nstorage of long double is %d",sizeof(e));
// }
// #include<stdio.h>
// int main()
// {
//     int cir,rad;
//     printf("Enter the radius of circle:");
//     scanf("%d",&rad);
//     cir=3.14*rad*rad;
//     printf("Area of the circle is:%d",cir);
// }
// #include <stdio.h>
// int main()
// {
//     int num;
//     printf("Enter Number:");
//     scanf("%d",&num);
//     printf("THE character is %c and Next are %c %c %c %c",num,num+1,num+2,num+3,num+4);
// }
// #include<stdio.h>
// int main()
// {
//     int hour,min,sec,time;
//     printf("Enter Time");
//     scanf("%d %d %d",&hour,&min,&sec);
//     printf("Time is %d:%d:%d",hour,min,sec);
//     time=(hour*3600)+(min*60)+(sec);
//     printf("\nTotal time in sec is %d",time);
// }
// #include<stdio.h>
// int main()
// {
//     int a,b;
//     printf("Enter two numbers:");
//     scanf("%d %d",&a,&b);
//     printf("Sum of two numbers is:%d",a+b);
// }
// #include <stdio.h>
// int main()
// {
//     int a=4, b, c;
// 	printf("a= %d b= %d c= %d",a,b,c);
// 	b=6;
// 	c=a+b;
// 	printf("\na= %d b= %d c= %d",a,b,c);
// 	a++; 						
// b -= 2; 						
//     	--c; 						
//     	printf("\na= %d b= %d c= %d",a,b,c);
//     	b *= ++a; 					
//     	printf("\na= %d b= %d c= %d",a,b,c);
//     	c /= a++; 					
//     	printf("\na= %d b= %d c= %d",a,b,c); 
// a = (b+c)*4; 					
//     	c = b+c*4;					
//    	 printf("\na= %d b= %d c= %d",a,b,c);

// }
// #include<conio.h>
// #include<stdio.h>
// int main ()
// {
// int num,a,b;
// printf("Enter the 3 digit value to be reversed:");
// scanf("%d", &num);
// a=num/100;
// num=num%100;
// b=num/10;
// num=num%10;
// printf("The reverse order is: %d%d%d",num,b,a);	
// }
// #include<stdio.h>
// int main()
// {
// 	int num,en;
// 	printf("Enter First and Last num:");
// 	scanf("%d%d",&num,&en);
// 	while(num<=en)
// 	{
// 		if(num%2==1)
// 		{
// 			printf("%d\t",num);
// 		}
// 		else
// 		{
//           printf("%d\n",num);
// 		}
// 		num++;
// 	}
// }
// #include<stdio.h>
// int main()
// {
// 	int num1,num2,num3,num4,num5;
// 	printf("Enter 5 numbers:");
// 	scanf("%d%d%d%d%d",&num1,&num2,&num3,&num4,&num5);
// 	if(num1>num2&&num1>num3&&num1>num4&&num1>num5)
// 	{
// 		printf("%d is the gratest",num1);
// 	}
// 	else if(num2>num1&&num2>num3&&num2>num4&&num2>num5)
// 	{
// 		printf("%d is the greatest",num2);
// 	}
// 	else if(num3>num1&&num3>num2&&num3>num4&&num3>num5)
// 	{
// 		printf("%d is the greatest",num3);
// 	}
// 	else if(num4>num1&&num4>num2&&num4>num3&&num4>num5)
// 	{
// 		printf("%d is the greatest",num4);
// 	}
// 	else if(num5>num1&&num5>num2&&num5>num3&&num5>num4)
// 	{
// 		printf("%d is the greatest",num5);
// 	}
// 	else{printf("To too gya bete!");}
// }
// #include<stdio.h>
// int main()
// {
// 	int n1,n2,n3;
// 	printf("Enter Three numbers:");
// 	scanf("%d%d%d",&n1,&n2,&n3);
// 	if(n1>n2&&n1>n3&&n2>n3)
// 	{
// 		printf("%d%d%d",n1,n2,n3);
// 	}
// 	else if(n2>n3&&n2>n1&&n1>n3)
// 	{
// 		printf("%d%d%d",n2,n1,n3);
// 	}
// 	else
// 	{
// 		printf("%d%d%d",n3,n2,n1);
// 	}
// }
// #include<stdio.h>
// int main()
// {
// 	int qty,dis=0;
// 	float rate,tot;
// 	printf("Enter qty:");
// 	scanf("%d",&qty);
// 	printf("Enter rate: ");
// 	scanf("%f",&rate);
// 	if(qty>1000)
// 	dis=10;
// 	tot=(qty*rate)-(qty*rate*dis/100);
// 	printf("total is:%f",tot);
// 	return 0;
// }

// #include<stdio.h>
// int main()
// {
// 	float hra, da,gs;
// 	int  bs;
// 	printf("Enter basic salary (bs):");
// 	scanf("%d",&bs);
// 	if(bs<1500)
// 	{
// 		hra=500;
// 		da=bs*98/100;
// 	}
// 	else{
// 		hra=bs*10/100;
// 		da=bs*90/100;
// 	}
// 	gs=bs+hra+da;
// 	printf("Total salary:%f",gs);
// }
// #include<stdio.h>
// int main()
// {
//     int acp,bp;
//     float td,tdp;
//     printf("Enter bought price: ");
//     scanf("%d",&bp);
//     printf("Enter actual price:");
//     scanf("%d",&acp);
//     if(acp>bp){
//     td = acp - bp;  
//     printf("Total discount in ruppee is: %.2f", td);
//     tdp = (td / acp) * 100;
//     printf("IN percentage discount is:%f",tdp);}
//     else
//     printf("IF BOUGHT PRICE IS GREATER THAN ACTUAL PRICE THERE CAN BE NO DISCOUNT");

// }
// #include<stdio.h>
// int main()
// {
//     int ms,gen,age;
//     printf("Enter 1 for married and 2 for un-married");
//     scanf("%d",&ms);
//     printf("Enter 1 for male and 2 for female");
//     scanf("%d",&gen);
//     printf("Entr age:");
//     scanf("%d",&age);
//     if(ms==1)
//     {
//         printf("You are eligible for license");

//     }
//     else if(ms==2)
//     {
//         if(gen==1&&age>30)
//         {
//             printf("You are eligible");
//         }
//         else if(gen==2&&age>25)
//         {
//             printf("You are eligible");
//         }
//         else
//         {
//             printf("You are not eligible");
//         }

//     }
//     else
//     printf("Code Error 404");
// }
// #include<stdio.h>
// int main()
// {
//     hi:
//     int ch;
//     printf("*********(Hello Welcome to tour selection and destination planning and its claculation program)******");
//     printf("\nPlease enter your choice of destination:\n");
//     printf("1)Maldives\n2)Malasia\n3)Singapore\n4)Pakistan\n5)Saudia\n");
//     scanf("%d",&ch);
//     switch (ch)
//     {
//         case 1 :
//         {
//             int days,ser,travel,bill;
//             printf("\n******(Nice Choice for Selecting Maldives!)*******\n");
//             printf("How many days do you want to stay:");
//             scanf("%d",&days);
//             printf("\nWhich service would you like :");
//             printf("\nPress 1 for Economy\n press 2 for Business\n");
//             scanf("%d",&ser);
//             printf("\nWill you like to travel in the country:");
//             printf("\nPress 1 for Yes\nPress 2 for No\n");
//             scanf("%d", &travel);
//             if(ser==1)
//             {
//                 bill=(days*5)+(travel*10);
//             } else if(ser==2) 
//             {
//                  bill=(days*10)+(travel*20);
//              }
//              else
//              printf("Error code 404");
//              printf("Your total bill is: %d\n", bill);
//              char choice;

//              printf("Do you want to do everything again");
//              scanf(" %c",&choice);
//              if(choice=='Y'||choice=='y')
//             { 
//              goto hi;
//          }
//             }
//             break;
//             case 2 :
//         {
//             int days,ser,travel,bill;
//             printf("\n******(Nice Choice for Selecting Malasia!)*******\n");
//             printf("How many days do you want to stay:");
//             scanf("%d",&days);
//             printf("\nWhich service would you like :");
//             printf("\nPress 1 for Economy\n press 2 for Business\n");
//             scanf("%d",&ser);
//             printf("\nWill you like to travel in the country:");
//             printf("\nPress 1 for Yes\nPress 2 for No\n");
//             scanf("%d", &travel);
//             if(ser==1)
//             {
//                 bill=(days*10)+(travel*20);
//             } else if(ser==2) 
//             {
//                  bill=(days*20)+(travel*30);
//              }
//              else
//              printf("Error code 404");
//              printf("Your total bill is: %d\n", bill);
//              char choice;

//              printf("Do you want to do everything again");
//              scanf(" %c",&choice);
//              if(choice=='Y'||choice=='y')
//             { 
//              goto hi;
//          }
//             }
//             break;
//             case 3 :
//         {
//             int days,ser,travel,bill;
//             printf("\n******(Nice Choice for Selecting singapoe!)*******\n");
//             printf("How many days do you want to stay:");
//             scanf("%d",&days);
//             printf("\nWhich service would you like :");
//             printf("\nPress 1 for Economy\n press 2 for Business\n");
//             scanf("%d",&ser);
//             printf("\nWill you like to travel in the country:");
//             printf("\nPress 1 for Yes\nPress 2 for No\n");
//             scanf("%d", &travel);
//             if(ser==1)
//             {
//                 bill=(days*5)+(travel*7);
//             } else if(ser==2) 
//             {
//                  bill=(days*7)+(travel*20);
//              }
//              else
//              printf("Error code 404");
//              printf("Your total bill is: %d\n", bill);
//              char choice;

//              printf("Do you want to do everything again");
//              scanf(" %c",&choice);
//              if(choice=='Y'||choice=='y')
//             { 
//              goto hi;
//          }
//             }
//             break;
//             case 4 :
//         {
//             int days,ser,travel,bill;
//             printf("\n******(Nice Choice for Selecting Pakistan!)*******\n");
//             printf("How many days do you want to stay:");
//             scanf("%d",&days);
//             printf("\nWhich service would you like :");
//             printf("\nPress 1 for Economy\n press 2 for Business\n");
//             scanf("%d",&ser);
//             printf("\nWill you like to travel in the country:");
//             printf("\nPress 1 for Yes\nPress 2 for No\n");
//             scanf("%d", &travel);
//             if(ser==1)
//             {
//                 bill=(days*5)+(travel*10);
//             } else if(ser==2) 
//             {
//                  bill=(days*10)+(travel*20);
//              }
//              else
//              printf("Error code 404");
//              printf("Your total bill is: %d\n", bill);
//              char choice;

//              printf("Do you want to do everything again");
//              scanf(" %c",&choice);
//              if(choice=='Y'||choice=='y')
//             { 
//              goto hi;
//          }
//             }
//             break;
//             case 5 :
//         {
//             int days,ser,travel,bill;
//             printf("\n******(Nice Choice for Selecting Saudia!)*******\n");
//             printf("How many days do you want to stay:");
//             scanf("%d",&days);
//             printf("\nWhich service would you like :");
//             printf("\nPress 1 for Economy\n press 2 for Business\n");
//             scanf("%d",&ser);
//             printf("\nWill you like to travel in the country:");
//             printf("\nPress 1 for Yes\nPress 2 for No\n");
//             scanf("%d", &travel);
//             if(ser==1)
//             {
//                 bill=(days*15)+(travel*20);
//             } else if(ser==2) 
//             {
//                  bill=(days*20)+(travel*40);
//              }
//              else
//              printf("Error code 404");
//              printf("Your total bill is: %d\n", bill);
//              char choice;

//              printf("Do you want to do everything again");
//              scanf(" %c",&choice);
//              if(choice=='Y'||choice=='y')
//             { 
//              goto hi;
//          }
//             }
//             break;
//             default:
//             {
//             printf("Error code 404");
//             }
           

//             return 0;

//     }


// }


// #include<stdio.h>
// int main()
// {
//     float units,bill,tax;
//     printf("Enter units:");
//     scanf("%f",&units);
//     if(units<=50)
//     {
//         bill=units*0.50;
//     }
//     else if(units<=150)
//     {
//         bill=25+(units-50)*0.75;
//     }
//     else if(units<=250)
//     {
//         bill=25+75+(units-150)*1.20;
//     }
//     else if(units>250)
//     {
//         bill=25+75+120+(units-250)*1.70;
//     }
//     else
//     {
//         printf("invalid units");
//     }
//     tax=bill*0.20;
//     bill=bill+tax;
//     printf("%.2f",bill);
// }


// #include<stdio.h>
// int main()
// {
//     int temp,a,b;
//     printf("enter the numbers");
//     scanf("%d %d",&a,&b);
//     temp=a;
//     a=b;
//     b=temp;
//     printf("%d%d",a,b);
//     return 0;
// }
// #include<stdio.h>
// #include<math.h>
// int main()
// {
//     int a=0,b=0,c=0;
//     float dis=0,r1,r2,r;
//     printf("Enter vaalue of a b c\n");
//     scanf("%d%d%d",&a,&b,&c);
//     if(a==0)
//     {
//         printf("A can't be 0 in quadratic equation");
//         return 1;
//     }
//     else
//     {
//         dis=(b*b)-(4*a*c);
//     }
//     if(dis>0)
//     {
//         r1=((-b+sqrt(dis))/(2*a));
//         r2=((-b-sqrt(dis))/(2*a));
//         printf("Root 1 is real %.2f\nRoot 2 is also real and equals to %.2f",r1,r2);
//     }
//     else if(dis==0)
//     {
//         r= (-b/(2*a));
//         printf("Root is equal %.2f",r);
//     }
//     else{
//         printf("Root is imaginary ");
//     }
// }

// #include<stdio.h>
// int main()
// {
//     int num,fac=1,count=1;
//     printf("Enter num:");
//     scanf("%d",&num);
//     while(count>=num)
//     {
//         fac=fac*count;
//         count++;
//     }
//     printf("fac is %d",fac);
// }
// #include<stdio.h>
// int main()
// {
//     int n1=0,n2=1,n3,fab,num,count;
//     printf("Enter num:");
//     scanf("%d",&num);
//     printf("%d+",num);
//     while(count<=num)
//     {
//         n3=n1+n2;
//         n1=n2;
//         n2=n3;
//     }
//     printf("%d",n1);
// }
// #include<stdio.h>
// int AR(int len,int wid);
// int AC(int radi);
// int VC(int radius,int height);
// int main()
// {
//     int rep;
//     do{
        
//         int opt;
//         printf("Asslam-Alaikum!\nThis program calculate \n1-Area of rectangle\n2-Area of circle\n3-Volume of Cylinder\nWhich option you want?");
//         scanf("%d",&opt);
//         switch(opt)
//         {
//             case 1:
//             {
//             int len,wid;
//              printf("Enter length and width\n");
//              scanf("%d%d",&len,&wid);
//             AR(len,wid);
//             break;}
            
//             case 2:
//             {
//             int radi;
//              printf("Enter radius:");
//              scanf("%d",&radi);
//              AC(radi);
//              break;
//             }


//             case 3:
//             {int radius,height;
//              printf("Enter radius and height");
//              scanf("%d%d",&radius,&height);
//              VC(radius,height);
//             break;}
//         }
//         printf("\nWould you like to give an other try if yes enter 1");
//         scanf("%d",&rep);
//     }while(rep==1);
// } 
// int AR(int len,int wid)
//  {     int res;
//      res=len*wid;
//      printf("\nAREA is %d",res);
//      return res;
//  } 
//  int AC(int radi)
// {
//     int res;
//     res=(radi*radi*3.14);
//     printf("\nRadius is %d",res);
//     return res;
// }
// int VC(int radius,int height)
// {
//     int res;
//     res=((radius*radius)*height)*3.14;
//     printf("Volume of Cylinder is %d",res);
//     return res;
// }
// #include <stdio.h>
// #define SMALL_SIZE 9
// #define MEDIUM_SIZE 12
// #define LARGE_SIZE 15
// #define SMALL_PRICE 1.75f
// #define MEDIUM_PRICE 1.90f
// #define LARGE_PRICE 2.00f
// void manual();
// void sell(int *small, int *medium, int *large);
// void cupsold(int small, int medium, int large);
// void cofsold(int small, int medium, int large);
// void money(int small, int medium, int large);

// int main() {
//     int choice;
//     int smallCups = 0, mediumCups = 0, largeCups = 0;

//     do {
//         printf("\n\n----------Hello!----------");
//         printf("\nWelcome to the Coffee Program :)");
//         printf("\nChoose from the following:");
//         printf("\n1 - Manual");
//         printf("\n2 - Sell coffee");
//         printf("\n3 - Show number of cups sold");
//         printf("\n4 - Show amount of coffee sold");
//         printf("\n5 - Show total money made");
//         printf("\n6 - Exit");
//         printf("\nEnter your choice: ");
//         scanf("%d", &choice);

//         switch(choice) {
//             case 1: manual(); break;
//             case 2: sell(&smallCups, &mediumCups, &largeCups); break;
//             case 3: cupsold(smallCups, mediumCups, largeCups); break;
//             case 4: cofsold(smallCups, mediumCups, largeCups); break;
//             case 5: money(smallCups, mediumCups, largeCups); break;
//             case 6: printf("Thank you for visiting!"); break;
//             default: printf("Invalid choice! Try again."); break;
//         }
//     } while (choice != 6);

//     return 0;
// }

// void manual() {
//     printf("\n--------- Manual ---------");
//     printf("\n1. You can buy coffee in 3 sizes: Small (9 oz), Medium (12 oz), and Large (15 oz).");
//     printf("\n2. You can place multiple orders.");
//     printf("\n3. You can view how many cups you've sold.");
//     printf("\n4. You can check the total amount of coffee sold (in oz).");
//     printf("\n5. You can also view the total money made from sales.");
// }

// void sell(int *small, int *medium, int *large) {
//     int choice, cups;

//     printf("\nWhich portion do you want?");
//     printf("\n1 - Small ($1.75)\n2 - Medium ($1.90)\n3 - Large ($2.00)");
//     printf("\nEnter your choice: ");
//     scanf("%d", &choice);

//     printf("How many cups? ");
//     scanf("%d", &cups);

//     switch(choice) {
//         case 1:
//             *small += cups;
//             printf("Sold %d Small cup(s).\n", cups);
//             printf("Amount of coffee: %d oz\n", cups * SMALL_SIZE);
//             printf("Revenue: $%.2f\n", cups * SMALL_PRICE);
//             break;
//         case 2:
//             *medium += cups;
//             printf("Sold %d Medium cup(s).\n", cups);
//             printf("Amount of coffee: %d oz\n", cups * MEDIUM_SIZE);
//             printf("Revenue: $%.2f\n", cups * MEDIUM_PRICE);
//             break;
//         case 3:
//             *large += cups;
//             printf("Sold %d Large cup(s).\n", cups);
//             printf("Amount of coffee: %d oz\n", cups * LARGE_SIZE);
//             printf("Revenue: $%.2f\n", cups * LARGE_PRICE);
//             break;
//         default:
//             printf("Invalid size selected.\n");
//     }
// }

// void cupsold(int small, int medium, int large) {
//     printf("\nTotal cups sold:");
//     printf("\nSmall: %d", small);
//     printf("\nMedium: %d", medium);
//     printf("\nLarge: %d", large);
//     printf("\nTotal: %d", small + medium + large);
// }

// void cofsold(int small, int medium, int large) {
//     int totalOunces = (small * SMALL_SIZE) + (medium * MEDIUM_SIZE) + (large * LARGE_SIZE);
//     printf("\nTotal amount of coffee sold: %d oz", totalOunces);
// }

// void money(int small, int medium, int large) {
//     float total = (small * SMALL_PRICE) + (medium * MEDIUM_PRICE) + (large * LARGE_PRICE);
//     printf("\nTotal revenue earned: $%.2f", total);
// }
// #include<stdio.h>
// void bin(int);
// int main()
// {
//     int num;
//     printf("Enter num:");
//     scanf("%d",&num);
//     bin(num);
// }
// void bin(int num)
// { int rem,arr[100],i=0;
//     while(num)
//     {
//         rem = num%2;
//         num/=2;
//         arr[i]=rem;
//         i++;
//     }
//     for(int j=i-1;j>=0;j--)
//     {
//         printf("%d",arr[j]);
//     }
// }
// #include<stdio.h>
// void pri(int);
// int main()
// {
// int num;
// printf("Enter num:");
// scanf("%d",&num);
// pri(num);
// }
// void pri(int num)
// { int count=1,pri=0;
//     while(count<=num)
//     {
//         if(num%count==0)
//         pri++;
//         count++;
//     }
//     if(pri==2)
//     {
//         printf("%d  is prime",num);
//     }
//     else
//     printf("%d is not prime",num);
// }

#include<stdio.h>
int main()
{
 float Temperature,K;
 printf("Enter the temperature");
 scanf("%f",&Temperature);  
 K= Temperature+273.15;
 printf("Temperature=%.2f",K ); 

}