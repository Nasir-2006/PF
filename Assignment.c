// #include<stdio.h>
// int main()
// {
//     int bal,rep;
//     printf("Enter balance :");
//     scanf("%d",&bal);
//     if(bal==0||bal<0)
//     {
//         printf("Insufficient Balance !");
//     }
//     do{
//         int wd;
//         float ser;
//     if(bal==0||bal<0)
//     {
//         printf("Insufficient Balance !");
//         break;
//     } 
//     printf("\nEnter withdrawl Amount: ");
//     scanf("%d",&wd);
//     if(wd>500)
//     {
//         printf("\nYour Entered amount exceedes daily limit");
//         break;
//     }  
//     else if(wd>bal)
//     {
//         if(bal>=25)
//         {
//             int yn;
//             printf("\nInsufficient balance!\n You can take money against service chages of $25\n 1 for yes\n 2 for no\n");
//             scanf("%d",&yn);
//             if(yn==1)
//             {
//                 bal=bal-wd-25;
//                 printf("\nBalance is Now $%d",bal);
//             }
//             else{
//                 printf("\nInsufficient balance");
//             }
//         }
//     }
//     else if(wd>=300&&wd<=500)
//     {
//         printf("\nYour entered amount is $%d ",wd);
//         ser = (wd-300)*0.04;
//         printf("Service chages is $%f",ser);
//         bal = bal-(wd+ser);
//         printf("\nAfter transaction your account has $%d",bal);
//     }
//     else if(wd<300)
//     {
//         printf("\nYour entered amount is $%d ",wd);
//         bal = bal-wd;
//         printf("\nAfter transaction your account has $%d",bal);
//     }
// printf("\nWould You like to do another transaction!\n1 for Yes\n2 for No\n ");
// scanf("%d",&rep);
//     }while(rep==1);
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
// #include<stdio.h>
// int isVowel(char alp);
// #define TRUE 1
// #define FALSE 0
// int main()
// {
//     char alp;
//     printf("Enter alphabet:");
//     scanf("%c",&alp);
// if(isVowel(alp))
// printf("TRUE");
// else
// printf("False");
// }
// int isVowel(char alp)
// {
//     if(alp=='a'||alp=='e'||alp=='i'||alp=='o'||alp=='u'||alp=='A'||alp=='E'||alp=='I'||alp=='O'||alp=='U')
//     {
//         return TRUE;
//     }
//     else
//     return FALSE;
// }
// #include<stdio.h>
// int AR(int len,int wid);
// int AC(int r);
// int VC(int rad,int hei);
// int main()
// {
//     int rep;
//     do{
//         int opt;
//         printf("Asslam-o-Alaikum!\nThis program perform following function:\n1-Calculates Area of rectangle\n2-Calculates Area of Circle\n3-Calculates Volume of Cylinder\nWhich option you want\n");
//         scanf("%d",&opt);
//         switch(opt)
//         {
//             case 1:
//             {
//                 int len,wid;
//                 printf("\nEnter Length and width");
//                 scanf("%d%d",&len,&wid);
//                 printf("\nArea is %d",AR(len,wid));
//             }break;
//             case 2:
//             {
//                 int r;
//                 printf("\nEnter radius:");
//                 scanf("%d",&r);
//                 printf("\nArea is %d",AC(r));
//             }break;
//             case 3:
//             {
//                 int hei,rad;
//                 printf("\nEnter height and radius");
//                 scanf("%d%d",&hei,&rad);
//                 printf("Volume is %d",VC(rad,hei));
//             }break;}
//             printf("\nWOuld you like to performa nother calculation if yes then enter 1");
//             scanf("%d",&rep);

//     }while(rep==1);
// }
// int AR(int len,int wid)
// {
//     return len*wid;
// }
// int AC(int r)
// {
//     return ((r*r)*3.14);
// }
// int VC(int rad,int hei)
// {
//     return (((rad*rad)*hei)*3.14);
// }
// #include<stdio.h>
// int reverseDigit(int num);
// int main()
// {
//     int num;
//     printf("Enter num: ");
//     scanf("%d",&num);
//     printf("Reveversal of Digit is %d ",reverseDigit(num));
// }
// int reverseDigit(int num)
// {
//     int rev=0;
// while(num!=0)
// {
//     int ld= num%10;
//     rev = rev * 10 + ld;
//     num/=10;
// }
// return rev;

// }
// #include<stdio.h>
// int main()
// {
//     int day,year,month;
//     printf("Enter DATE (mm/dd/yy):");
//     scanf("%d%d%d",&month,&day,&year);
//     if((year % 4 == 0) && (year % 100 != 0 || year % 400 == 0))
//     {if(month==1)
//     {
//         printf("Your entered date is %d-%d-%d and day number of year is %d",month,day,year,day);
//     }
//     else if(month==2)
//     {
//         printf("Your entered date is %d-%d-%d and day number of year is %d",month,day,year,day+31);
//     }
//     else if(month==3)
//     {
//         printf("Your entered date is %d-%d-%d and day number of year is %d",month,day,year,day+60);
//     }
//     else if(month==4)
//     {
//         printf("Your entered date is %d-%d-%d and day number of year is %d",month,day,year,day+91);
//     }
//     else if(month==5)
//     {
//         printf("Your entered date is %d-%d-%d and day number of year is %d",month,day,year,day+121);
//     }
//     else if(month==6)
//     {
//         printf("Your entered date is %d-%d-%d and day number of year is %d",month,day,year,day+152);
//     }
//     else if(month==7)
//     {
//         printf("Your entered date is %d-%d-%d and day number of year is %d",month,day,year,day+182);
//     }
//     else if(month==8)
//     {
//         printf("Your entered date is %d-%d-%d and day number of year is %d",month,day,year,day+213);
//     }
//     else if(month==9)
//     {
//         printf("Your entered date is %d-%d-%d and day number of year is %d",month,day,year,day+244);
//     }
//     else if(month==10)
//     {
//         printf("Your entered date is %d-%d-%d and day number of year is %d",month,day,year,day+274);
//     }
//     else if(month==11)
//     {
//         printf("Your entered date is %d-%d-%d and day number of year is %d",month,day,year,day+305);
//     }
//     else if(month==12)
//     {
//         printf("Your entered date is %d-%d-%d and day number of year is %d",month,day,year,day+335);
//     }}
//     else
//     {
//     if(month==1)
//     {
//         printf("Your entered date is %d-%d-%d and day number of year is %d",month,day,year,day);
//     }
//     else if(month==2)
//     {
//         printf("Your entered date is %d-%d-%d and day number of year is %d",month,day,year,day+31);
//     }
//     else if(month==3)
//     {
//         printf("Your entered date is %d-%d-%d and day number of year is %d",month,day,year,day+59);
//     }
//     else if(month==4)
//     {
//         printf("Your entered date is %d-%d-%d and day number of year is %d",month,day,year,day+90);
//     }
//     else if(month==5)
//     {
//         printf("Your entered date is %d-%d-%d and day number of year is %d",month,day,year,day+120);
//     }
//     else if(month==6)
//     {
//         printf("Your entered date is %d-%d-%d and day number of year is %d",month,day,year,day+151);
//     }
//     else if(month==7)
//     {
//         printf("Your entered date is %d-%d-%d and day number of year is %d",month,day,year,day+181);
//     }
//     else if(month==8)
//     {
//         printf("Your entered date is %d-%d-%d and day number of year is %d",month,day,year,day+212);
//     }
//     else if(month==9)
//     {
//         printf("Your entered date is %d-%d-%d and day number of year is %d",month,day,year,day+243);
//     }
//     else if(month==10)
//     {
//         printf("Your entered date is %d-%d-%d and day number of year is %d",month,day,year,day+273);
//     }
//     else if(month==11)
//     {
//         printf("Your entered date is %d-%d-%d and day number of year is %d",month,day,year,day+304);
//     }
//     else if(month==12)
//     {
//         printf("Your entered date is %d-%d-%d and day number of year is %d",month,day,year,day+334);
//     }}}





    //OR//
    




// #include<stdio.h>
// int ly(int year)
// {
//     if((year%4==0)&&((year%100!=0)||(year%400==0)))
//     return 1;
//     else 
//     return 0;

// }
// int main()
// {
//     int day,month,year;
//     printf("Enter Month Day Year (mm/dd/yy):");
//     scanf("%d-%d-%d",&month,&day,&year);
//     int doy[]={0,31,28,31,30,31,30,31,31,30,31,30};
//     if(ly)
//     {
//         doy[2]=29;
//     }
//     int days=0;
//     for(int i=0;i<=month;i++)
//     {
//         days+=doy[i];
//     }
//     days+=day;
//     printf("Days till now are : %d",days);
// }
// #include<stdio.h>
// void info();
// int ser();
// int input(int age,int month);
// int main()
// {
//     info();
//     ser();
// }
// void info()
// {
//     printf("-------Welcome o Fitness Freak------");
//     printf("\nLocation:Missile chowk , Abbottabad");
//     printf("\nEmail:FC@email.com");
//     printf("\nOperating Hours are as following:\n");
//     printf("FOR MEN:(5:00 AM - 9:00 AM) AND (4:00 PM - 10:00 PM)");
//     printf("\nFor WOMEN:(9:00 AM - 4:00 PM)");
//     printf("\n Over-view:\n");
//     printf("Fitness Freak is a modern, fully-equipped gym dedicated to helping people achieve their health and wellness goals. With expert trainers, state-of-the-art equipment, and a welcoming community, we cater to all fitness levels.");
// }
// int input(int age,int month)
// {
//  int ag,mon;
// printf("\n============================================");
//     printf("\nEnter age:");scanf("%d",&ag);
//     printf("\nEnter how many months membership you want");scanf("%d",&mon);
//     return age,month;
// }

// int ser()
// {
//     int age,month;
//     int ser,choice;
//     float cost, totcos;
    
//     printf("\n============================================");
//     printf("\nWe have following services\n");
//     printf("1-Cardio = $10\n2-Strength Traning = $15\n3-Free weigths = $5\n4-Group Fitness classes = $20\n5-Suana/Steam room = $20\n6-Locker room = $5\n7-Showers = $5\n8-cafe = $30\n9-Juice bar = $30\n10-Protein bar = $100");
//     printf("\nHow many services You want!");
//     scanf("%d",&ser);
//     for (int i = 0; i < ser; i++)
//      {
//         printf("\nEnter service number %d: ", i + 1);
//         scanf("%d", &choice);

//         switch (choice) {
//             case 1: cost = 10;totcos += cost; break;
//             case 2: cost = 15;totcos += cost;break;
//             case 3: cost = 5;totcos += cost; break;
//             case 4: cost = 20;totcos += cost; break;
//             case 5: cost = 20;totcos += cost; break;
//             case 6: cost = 5;totcos += cost; break;
//             case 7: cost = 5;totcos += cost; break;
//             case 8: cost = 30;totcos += cost; break;
//             case 9: cost = 30;totcos += cost; break;
//             case 10: cost = 100;totcos += cost; break;
//             default: printf("Invalid service number!\n"); break;
//         }
//         if(ser>5)
//         {
//             cost = cost * 0.2;
//             printf("Cost is %.2f",cost);
//         }
//         else
//         {
//             printf("Cost is %.2f",cost); 
//         }
//     }
//     input(age,month);
//     if((age>60)&&(month>=12))
//     {
//         printf("\nTotal-Cost is %.2f",totcos*0.55);
//     }
//     else if(age>60)
//     {
//         printf("\nTotal-Cost is %.2f",totcos*0.3);
//     }
//     else if(month>=12)
//     {
//         printf("\nTotal-Cost is %.2f",totcos*0.15);
//     }
    
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

// void cupsold(int small, int medium, int large) 
// {
//     printf("\nTotal cups sold:");
//     printf("\nSmall: %d", small);
//     printf("\nMedium: %d", medium);
//     printf("\nLarge: %d", large);
//     printf("\nTotal: %d", small + medium + large);
// }

// void cofsold(int small, int medium, int large)
//  {
//     int totalOunces = (small * SMALL_SIZE) + (medium * MEDIUM_SIZE) + (large * LARGE_SIZE);
//     printf("\nTotal amount of coffee sold: %d oz", totalOunces);
// }

// void money(int small, int medium, int large)
//  {
//     float total = (small * SMALL_PRICE) + (medium * MEDIUM_PRICE) + (large * LARGE_PRICE);
//     printf("\nTotal revenue earned: $%.2f", total);
// }