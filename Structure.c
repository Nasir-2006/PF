// #include<stdio.h>
// #include<string.h>
// struct info
// {
//     char name[100];
//     int roll;
//     float gpa;
// }S1,S2,S3;
// int main()
// {
//     printf("Enter name of students:");
//     scanf("%s%s%s",&S1.name,&S2.name,&S3.name);
//     printf("\nEnter roll number of student:");
//     scanf("%d%d%d", &S1.roll, &S2.roll, &S3.roll);
//     printf("\nEnter gpa of student:");
//     scanf("%f%f%f", &S1.gpa, &S2.gpa, &S3.gpa);
//     printf("\n--- Student Information ---\n");
//     printf("Student 1: Name: %s | Roll: %d | GPA: %.2f\n", S1.name, S1.roll, S1.gpa);
//     printf("Student 2: Name: %s | Roll: %d | GPA: %.2f\n", S2.name, S2.roll, S2.gpa);
//     printf("Student 3: Name: %s | Roll: %d | GPA: %.2f\n", S3.name, S3.roll, S3.gpa);
// }
// #include<stdio.h>
// struct book
// {
//     char tit[100];
//     float pri;
//     char aut[100];
// }b[3];
// int main()
// { 
//     for(int i=0;i<3;i++)
//     {
//         printf("\nEnter name of Author:");
//         scanf("%s",b[i].aut);
//     }
//      for(int i=0;i<3;i++)
//     {
//         printf("\nEnter price of Book:");
//         scanf("%f",&b[i].pri);
//     }
//      for(int i=0;i<3;i++)
//     {
//         printf("\nEnter Title:");
//         scanf("%s",&b[i].tit);
//     }
//     if(b[1].pri>b[2].pri && b[1].pri>b[3].pri)
//      printf("\nMost Expensive Book:\nAuthor = %s\nTitle = %s\n", b[0].aut, b[0].tit);
//     else if(b[2].pri>b[1].pri && b[2].pri>b[3].pri)
//     printf("\nMost Expensive Book:\nAuthor = %s\nTitle = %s\n", b[1].aut, b[1].tit);
//     else
//     printf("\nMost Expensive Book:\nAuthor = %s\nTitle = %s\n", b[2].aut, b[2].tit);
//     if(b[1].pri<b[2].pri && b[1].pri<b[3].pri)
//     printf("\nMost Cheapest Book:\nAuthor = %s\nTitle = %s\n", b[0].aut, b[0].tit);
//     else if(b[2].pri<b[1].pri && b[2].pri<b[3].pri)
//     printf("\nMost Cheapest Book:\nAuthor = %s\nTitle = %s\n", b[1].aut, b[1].tit);
//     else
//     printf("\nMost Cheapest Book:\nAuthor = %s\nTitle = %s\n", b[2].aut, b[2].tit);
// }
// #include<stdio.h>
// struct circle
// {
//     int rad;
// };
// int main()
// {
//     struct circle c1,c2;
//     printf("Enter radius of circle 1:");
//     scanf("%d",&c1.rad);
//     printf("\nEnter radius of circle 2:");
//     scanf("%d",&c2.rad);
//     printf("\nArea of Circle 1 is %.4f and circumfernce is %.4f",(3.14*(c1.rad*c1.rad)),2*3.14*c1.rad);
//     printf("\nArea of Circle 2 is %.4f and circumfernce is %.4f",(3.14*(c2.rad*c2.rad)),2*3.14*c2.rad);
// }
// #include<stdio.h>
// struct time
// {
//     int hour;
//     int min;
//     int sec;
// }t1,t2;
// int main()
// {
//     printf("Enter TIME1:");
//     scanf("%d%d%d",&t1.hour,&t1.min,&t1.sec);
//     printf("\nEnter TIME2:");
//     scanf("%d%d%d",&t2.hour,&t2.min,&t2.sec);
//     int sum1 = t1.hour+t2.hour;
//     int sum2 = t1.min+t2.min;
//     int sum3 = t1.sec+t2.sec;
//     if(sum3>=60)
//     {
//         sum2 = sum2 + (sum3/60);
//         sum3 = sum3%60;
//     }
//     if(sum2>=60)
//     {
//         sum1 = sum1 + (sum2/60);
//         sum2 = sum2%60;
//     }

//     printf("Sum is %d:%d:%d",sum1,sum2,sum3);

// }
#include <stdio.h>

int main() 
{
    int day1, month1, day2, month2;
    int monthDays[] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
    int days = 0, i;

    printf("Enter first date (dd mm): ");
    scanf("%d %d", &day1, &month1);

    printf("Enter second date (dd mm): ");
    scanf("%d %d", &day2, &month2);

    if (month1 == month1) {
        days = day2 - day1;
    } else {
        days += monthDays[month1] - day1; 
        for (i = month1 + 1; i < monthDays[i-1]; i++) {
            days += monthDays[i]; 
        }
        days += day2; 

    if (days < 0) days = -days;

    printf("Difference in days: %d\n", days);
    return 0;
}}
