// 3. Write a C program to print the following characters in reverse.
// Test Characters: 'X', 'M', 'L'
// Expected Output:
// The reverse of XML is LMX

#include <stdio.h>
int main () {
    char a , b , c;
    printf("please enter first character ");
    scanf(" %c",&a);
    printf("please enter second character ");
    scanf(" %c",&b);
    printf("please enter third character ");
    scanf(" %c",&c);
    printf("Here is the reverse %c %c %c",c,b,a);
    return 0 ; 
}

// 4. Write a C program to compute the perimeter and area of a rectangle with a height of 7 inches and width of 5 inches.
// Expected Output:
// Perimeter of the rectangle = 24 inches
// Area of the rectangle = 35 square inches

int main () {
    int height , width ;
    printf("please enter height: ");
    scanf("%d",&height);
    printf("please enter width: ");
    scanf("%d",&width);
    printf("Perimeter of the rec is %d",height*width);
    return 0;
}

// 5. Write a C program to compute the perimeter and area of a circle with a given radius.
// Expected Output:
// Perimeter of the Circle = 37.680000 inches 2 pi r
// Area of the Circle = 113.040001 square inches pi r r
int main () {
    float radius; 
    printf("please enter the radius of circle ");
    scanf("%f",&radius);
    printf("Perimeter is %f , and area is %f" , 2*3.1416*radius , 3.1416*radius*radius );
    return 0 ; 
}