// #include<stdio.h>
// int main()
// {
// 	int s1,s2,s3,a1,a2,a3,sum;
// 	printf("Enter sides:");
// 	scanf("%d%d%d",&s1,&s2,&s3);
	
// 	if((s1==s2&&s1==s3))
// 	{
// 		printf("Equilateral triangle");
// 	}
// 	else if((s1==s2||s1==s3||s2==s3))
// 	{
// 		printf("isoscales triangle");
// 	}
// 	else if((s1!=s2||s1!=s3))
// 	{
// 		printf("Scalene Triangle");
// 	}
// 	else
// 	{
// 		printf("Error code 404");
// 	}
// }
// #include<stdio.h>
// #include<math.h>
// int main()
// {
//     int a=0,b=0,c=0;
//     float dis=0 ,r1=0,r2=0;
//     printf("Enter value of a b c\n");
//     scanf("%d%d%d",&a,&b,&c);
//     if(a==0)
//     {
//         printf("A can't be zero");
//     }
//     else{
//         dis=(b*b)-(4*a*c);
//     }
//     if(dis>0)
//     {
//         r1=(-b+sqrt(dis))/(2*a);
//         r2=(-b-sqrt(dis))/(2*a);
//         printf("Root 1 is %f\nRoot 2 is %f",r1,r2);
//     }
//     else if(dis==0)
//     {
//         float r;
//         r=-b/(2*a);
//         printf("In case dis is Zero\nRoot is %f",r);
//     }
//     else
//     {
//         float real,imag;
//         real=-b/(2*a);
//         imag=sqrt(-dis)/(2*a);
//         printf("Real part is %f\nImagenary part is%f",real,imag);
//     }
// }
// #include <stdio.h>

// int main() {
//     float costPrice, sellingPrice, profit, loss;

//     // Input cost price and selling price
//     printf("Enter Cost Price: ");
//     scanf("%f", &costPrice);

//     printf("Enter Selling Price: ");
//     scanf("%f", &sellingPrice);

//     // Calculate profit or loss
//     if (sellingPrice > costPrice) {
//         profit = sellingPrice - costPrice;
//         printf("Profit = %.2f\n", profit);
//     }
//     else if (costPrice > sellingPrice) {
//         loss = costPrice - sellingPrice;
//         printf("Loss = %.2f\n", loss);
//     }
//     else {
//         printf("No profit, no loss.\n");
//     }

//     return 0;
// }
// #include <stdio.h>

// int main() {
//     float basicSalary, hra, da, grossSalary;

//     // Input basic salary
//     printf("Enter basic salary: ");
//     scanf("%f", &basicSalary);

//     // Calculate HRA and DA based on salary slabs
//     if (basicSalary <= 10000) {
//         hra = 0.20 * basicSalary;  // 20%
//         da = 0.80 * basicSalary;   // 80%
//     } else if (basicSalary <= 20000) {
//         hra = 0.25 * basicSalary;  // 25%
//         da = 0.90 * basicSalary;   // 90%
//     } else {
//         hra = 0.30 * basicSalary;  // 30%
//         da = 0.95 * basicSalary;   // 95%
//     }

//     // Calculate gross salary
//     grossSalary = basicSalary + hra + da;

//     // Output the gross salary
//     printf("Gross Salary = %.2f\n", grossSalary);

//     return 0;
// }
// #include<stdio.h>
// int main()
// {
//     int unit;float bill;
//     printf("Enter units:");
//     scanf("%d",&unit);
//     if(unit<=50)
//     {
//     bill=unit*0.50;
//     }
//     else if(unit<=150)
//     {bill=25+(unit-50)*0.75;}
//     else if(unit<=250)
//     {bill=25+75+(unit-150)*1.20;}
//     else if(unit>250)
//     {bill=25+75+120+(unit-250)*1.50;}
//     else
//     {printf("Error code 404");}
//     bill=bill+bill*0.20;
//     printf("%.2f",bill);

// }
// #include<stdio.h>
// int main(){
//     int count=1,fac=1,num;
//     printf("Enter number:");
//     scanf("%d",&num);
//     while(count<=num)
//     {
//         fac=fac*count;
//         count++;
//     }
//     printf("Fac of %d is %d",num,fac);
// }
// #include<stdio.h>
// int main()
// {
//     int count=1,num,sum=0;
//     printf("Enter num:");
//     scanf("%d",&num);
//     while(count<=num)
//     {
//         sum=sum+count;
//         count++;
//     }
//     printf("Num is %d\n And Sum is %d",num,sum);
// }
// #include<stdio.h>
// int main()
// {
//     int num,count=1,sum=0;
//     printf("Enter num:");
//     scanf("%d",&num);
//     while(count<=num)
//     {
//         if(count%2==0)
//         {
//             printf("%d\n",count);
//          sum=sum+count;
//         }
//         count++;
//     }
//     printf("sum is %d",sum);
// }

// #include<stdio.h>
// int main()
// {
//     int x=0;
//     printf("ASCII table\n");
//     while(x<=255)
//     {
//         printf("%c-->%d\n",x,x);
//         x++;
//     }
// }
// #include<stdio.h>
// int main()
// {
//     int count=1,sum=0,num;
//     scanf("%d",&num);
//     while(count<=num)
//     {
//         sum=sum+count;
//         count++;
//     }printf("%d",sum);
// }
// #include<stdio.h>
// int main()
// {
//     int num,n1,n2,n3,n4;
//     printf("Enter num:");
//     scanf("%d",&num);
//     n1=num/1000;
//     num=num%1000;
//     n2=num/100;
//     num=num%100;
//     n3=num/10;
//     num=num%10;
//     n4=num;
    
//     printf("%d",n4);

// }
// #include<stdio.h>
// int main()
// {
//     ss:
//     printf("Hi");
//     goto ss;
// }
// #include<stdio.h>
// int main()
// {
//     int count=0,num;
//     printf("Enter num:");
//     scanf("%d",&num);
//     // while(count<=num)
//     // {
//     //     printf("%d\n",count);
//     //     count++;
//     // }
   
// }
// #include<stdio.h>
// int main()
// {
//     int num,count=0;
//     scanf("%d",&num);
//     do
//     {
//         printf("%d\n",count);
//         count++;

//     }while(count<=num);
//     for(num;count<=num;count++)
//     {
//         printf("%d",count);
//     }
//     return 0;
    
// }
// #include<stdio.h>
// int main()
// {
//     int num=10;
//     printf("%d",++num);
// }
// #include<stdio.h>
// int main()
// {
//     int count=1,num,sum;
//     printf("Entr num:");
//     scanf("%d",&num);
//     while(count<=num)
//     {
//         sum=sum+count;
//         count++;
//     }
//     printf("%d",sum);
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



// #include <stdio.h>

// int main() {
//     int units;
//     float bill = 0.0, surcharge;

//     // Input electricity units
//     printf("Enter the number of electricity units consumed: ");
//     scanf("%d", &units);

//     // Calculate bill according to slabs
//     if (units <= 50)
//      {
//         bill = units * 0.50;
//     } 
//     else if (units <= 150) 
//     {
//         bill = 25 + (units - 50) * 0.75;
//     }
//      else if (units <= 250)
//       {
//         bill =25+75 + (units - 150) * 1.20;
//     }
//      else {
//         bill = 25+75+120 + (units - 250) * 1.50;
//     }

//     // Add 20% surcharge
//     surcharge = bill * 0.20;
//     bill += surcharge;

//     // Display the total bill
//     printf("Total electricity bill (including 20%% surcharge): Rs. %.2f\n", bill);

//     return 0;
// }
#include <stdio.h>

int main() {
    int num, count = 1, factors = 0;
    printf("Enter number: ");
    scanf("%d", &num);

    while(count <= num) {
        if(num % count == 0) {
            factors++;
        }
        count++;
    }

    if(factors == 2) {
        printf("Prime number");
    } else {
        printf("Not a prime number");
    }

    return 0;
}
