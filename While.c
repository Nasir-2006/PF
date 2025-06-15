// #include<stdio.h>
// int main()
// {
//     int num,count=1,sum;
//     printf("Enter num:");
//     scanf("%d",&num);
//     while(count<=num)
//     {
//         printf("%d",count);
//         sum=sum+count;
//     count++;       
// }

// printf("%d",sum);
// }
// #include<stdio.h>
// int main()
// {
//     int num,count=0;
//     printf("Enter num:");
//     scanf("%d",&num);
//     while(num!=0)
//     {
//         num/=10;
//         count++;
//     }
//     printf("Total Digits:%d",count);
// }
// #include<stdio.h>
// int main()
// {
//     int num,w1,w2,count=0;
//     printf("Enter Number:");
//     scanf("%d",&num);
//    w1=num;
//    w2=num;
//     while(w1>=10)
//     {
//         w1=w1/10;
//     }
//     printf("First Digit:%d",w1);
//     num=num%10;
//     printf("\nLast Digit:%d",num);
//     while(w2!=0)
//     {
//         w2=w2/10;
//         count++;
//     }
//     printf("\nTotal Digits:%d",count);
// }
// #include<stdio.h>
// int main()
// {
// 	int num,count=0;
// 	printf("Enter num:");
// 	scanf("%d",&num);
// 	int w1=num;
// 	int w2=num;
// 	int w3=num;
// 	while(w1>=10)
// 	{
// 		w1/=10;
// 	}
// 	printf("\nFirst digit:%d",w1);
// 	num%=10;
// 	printf("\nLast digit:%d",num);
// 		while(w2!=0)
// 	{
// 		w2/=10;
// 		count++;
// 	}
// 	printf("\nTotal digit:%d",count);
// 	printf("\nSum is:%d",w1+num);
// 	printf("\nProduct is:%d",w1*num);
// 	int temp=w1+num;
// 	w1=temp-num;
// 	num=temp-w1;
// 	printf("\nSwapping of %d and %d \nIn %d is %d %d",w1,num,w3,num,w1);
// }
// #include<stdio.h>
// int main()
// {
// 	int num,count=0,w1,w2,rev;
// 	printf("Enter num:");
// 	scanf("%d",&num);
// 	num=w1;
// 	num=w2;
// 	num=num%10;
// 	while(w1!=0)
// 	{
// 		w1/=10;
// 	}
// 	while(w2!=0)
// 	{
// 		int dig;
// 		dig=w2%10;
// 		rev=rev*10+dig;
// 		w1/=10;
// 	}
// 	if(w1==num)
// 	{
// 		printf("Palindrome");
// 	}
// 	else if(num==rev){
	
// 	printf("palindrome");
// }
// 	else
// 	{
// 		printf("Palindrome");
// 	}
// }
// #include <stdio.h>
// int main()

// {

//     int num;

//     int one = 0, two = 0, three = 0, four = 0, five = 0, six = 0, seven = 0, eight = 0, nine = 0, zero = 0;



//     printf("Enter an integer: ");

//     scanf("%d", &num);



//     while (num != 0)

//     {

//         int digit = num % 10;

//         num /= 10;

//         switch (digit)

//         {

//         case 0:

//             zero++;

//             break;

//         case 1:

//             one++;

//             break;

//         case 2:

//             two++;

//             break;

//         case 3:

//             three++;

//             break;

//         case 4:

//             four++;

//             break;

//         case 5:

//             six++;

//             break;

//         case 7:

//             seven++;

//             break;

//         case 8:

//             eight++;

//             break;

//         case 9:

//             nine++;

//             break;

//         }

//     }

//     printf("frequency of numbers: \n0:%d\n1:%d\n2:%d\n3:%d\n4:%d\n5:%d\n6:%d\n7:%d\n8:%d\n9:%d", zero, one, two, three, four, five, six, seven, eight, nine);




// }
#include <stdio.h>

int main() {
    int num1, num2, a, b;

    printf("Enter two numbers: ");
    scanf("%d%d", &num1, &num2);

    a = num1;
    b = num2;

    // Using the Euclidean algorithm to find HCF
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }

    printf("HCF of %d and %d is: %d\n", num1, num2, a);
    
    return 0;
}