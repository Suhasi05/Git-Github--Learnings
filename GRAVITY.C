//This programm is prepared by 22TCE073_Suhasi.
#include<stdio.h>
#include<conio.h>
#include<math.h>
#define pi 3.14
void main() {
float L, G, T;
clrscr();
printf("Enter the length of pendulum : ");
scanf("%f",&L);
printf("Enter the value of Gravity : ");
scanf("%f",&G);
T = 2 * pi * sqrt(L) / sqrt(G);
printf("\nTime Calculated(seconds) : %.2f", T);
printf("\n\nBy 22TCE073_SUHASI");
getch();
}