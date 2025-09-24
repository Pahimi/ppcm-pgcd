#include <stdio.h>
#include <stdlib.h>
#define Max_Size 100

int main()
{
    int t[Max_Size] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int a, b;
    printf("Enter your first number: ");
    scanf("%d", &a);
    printf("Enter your second number: ");
    scanf("%d", &b);
    int tab1[Max_Size];
    int rows = 0;
    int tab2[Max_Size];
    int cels = 0;

    for(int i = 1; i < a*b; i++){
        if(i % a == 0 && i % b == 0){
            tab1[rows] = i;
            rows++;
        }else if(a % i == 0 && b % i == 0){
            tab2[cels] = i;
            cels++;
        }
    }
    printf("Le PPCM de %d et de %d est: %d", a, b, tab1[0]);
    printf("\nLe PGCD de %d et de %d est: %d", a, b, tab2[cels - 1]);
    return 0;
}
