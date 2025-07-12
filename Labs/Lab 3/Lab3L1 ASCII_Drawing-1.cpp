/*Christian Arubs
*COSC 1336
* 2/20/2023
*Purpose: Print two houses separated by a line. 
*/
#include <stdio.h> 

int printRectangle();
int printTriangle();

void main()
{
    printTriangle();
    printRectangle();

    printf("\n");

    printTriangle();
    printRectangle();
}

void printRectangle() {
    printf("*****");
    printf("\n*   *");
    printf("\n*   *");
    printf("\n*****");
}

void printTriangle() {
    printf("  *\n");
    printf(" * *\n");
    printf("*****\n");
    return 0;
}
