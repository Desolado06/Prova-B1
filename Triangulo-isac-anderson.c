/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    float side1, side2, side3;

    printf("Entre com tres numero para saber qual triangulo é : ");
    scanf("%f %f %f", &side1, &side2, &side3);

    if (side1 == side2 && side2 == side3) {
        printf("o triagulo é  equilateral.\n");
    } else if (side1 == side2 || side2 == side3 || side1 == side3) {
        printf("o triagulo é  isosceles.\n");
    } else {
        printf("o triagulo é escaleno .\n");
    }

    return 0;
}
