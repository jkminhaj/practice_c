// 6 Write a C program that accepts two integers from the user and calculates the sum of the two integers.
// Test Data :
// Input the first integer: 25
// Input the second integer: 38
// Expected Output:
// Sum of the above two integers = 63
#include <stdio.h>
int main()
{
    int first, second;
    printf("input the first integer : ");
    scanf("%d", &first);
    printf("input the second integer : ");
    scanf("%d", &second);
    printf("Sum of the above two intergers : %d ", first + second);

    return 0;
}

// 7 Write a C program that accepts two integers from the user and calculates the product of the two integers.
// Test Data :
// Input the first integer: 25
// Input the second integer: 15
// Expected Output:
// Product of the above two integers = 375

#include <stdio.h>
int main()
{
    int first, second;
    printf("input the first integer : ");
    scanf("%d", &first);
    printf("input the second integer : ");
    scanf("%d", &second);
    printf("Product of the above two intergers : %d ", first * second);

    return 0;
}

// 8. Write a C program that accepts two item's weight and number of purchases (floating point values) and calculates their average value.
// Test Data :
// Weight - Item1: 15
// No. of item1: 5
// Weight - Item2: 25
// No. of item2: 4
// Expected Output:
// Average Value = 19.444444
#include <stdio.h>
int main()
{
    float item1, item2, quan1, quan2;
    printf("please input item 1 weight ");
    scanf("%f", &item1);
    printf("please input item 1 quantity ");
    scanf("%f", &quan1);
    printf("please input item 2 weight ");
    scanf("%f", &item2);
    printf("please input item 2 quantity ");
    scanf("%f", &quan2);
    float avarage = ((item1 * quan1) + (item2 * quan2)) / (quan1 + quan2);
    printf("The avarage is %f", avarage);
    return 0;
}

// Notes use %.4f to get only 4 digits for floting result;

// 9. Write a C program that accepts an employee's ID, total worked hours in a month and the amount he received per hour. Print the ID and salary (with two decimal places) of the employee for a particular month.
// Test Data :
// Input the Employees ID(Max. 10 chars): 0342
// Input the working hrs: 8
// Salary amount/hr: 15000
// Expected Output:
// Employees ID = 0342
// Salary = U$ 120000.00

#include <stdio.h>
int main()
{
    int id;
    float hours, money;
    printf("Please input Emplyees ID : ");
    scanf("%d", &id);

    printf("Please input working hours : ");
    scanf("%f", &hours);

    printf("Please input salary amount per hours : ");
    scanf("%f", &money);

    printf("Employees ID = %d \nSalary = US$ %.2f", id, money * hours);

    return 0;
}

// 10 Write a C program that accepts three integers and finds the maximum of three.
// Test Data :
// Input the first integer: 25
// Input the second integer: 35
// Input the third integer: 15
// Expected Output:
// Maximum value of three integers: 35
#include <stdio.h>
int main()
{
    int first, second, third;
    printf("Input the first integer: ");
    scanf("%d", &first);
    printf("Input the second integer: ");
    scanf("%d", &second);
    printf("Input the third integer: ");
    scanf("%d", &third);

    if(first>second && first>third){
        printf("%d is the biggest", first);
    }
    if(second>first && second>third){
        printf("%d is the biggest", second);
    }
    if(third>second && third>first){
        printf("%d is the biggest", third);
    }
    return 0;
}
