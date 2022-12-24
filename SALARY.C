//This programm is prepared by 22TCE073_SUHASI
#include<stdio.h>
#include<conio.h>
void main() {
long int salary, DA, HRA, MA, TA, PF, IT, Gross_salary, Net_salary, A, D;
clrscr();
printf("Sr.No.\tInput/Output\t\t\tAmount\n");
printf("1\tEnter the basic salary\t\t:");
scanf("%ld",&salary);
DA = salary * 70 / 100;
printf("2\tDA of the basic salary\t\t:%ld\n",DA);
HRA = salary * 7 / 100;
printf("3\tHRA of the salary\t\t:%ld\n",HRA);
MA = salary * 2 /100;
printf("4\tMA of the salary\t\t:%ld\n",MA);
TA = salary * 4 / 100;
printf("5\tTA of the salary\t\t:%ld\n",TA);
PF = salary * 12 / 100;
printf("6\tPF of the salary\t\t:%ld\n",PF);
A = DA + HRA + MA + TA;
Gross_salary = salary + A;
printf("7\tGross salary\t\t\t:%ld\n",Gross_salary);
IT = 500;
D = PF + IT;
Net_salary = Gross_salary - D;
printf("8\tNet salary\t\t\t:%ld\n\n",Net_salary);
printf("By 22TCE073_SUHASI\n");
getch();
}