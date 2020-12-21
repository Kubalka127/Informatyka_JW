#include <stdio.h>
#include <math.h>
float x1,x2;
float y3,y2;
float r1,r2;

int main ()
{
char znak;
printf("Program do pokazania wzajemnego polozenia okregow\n");

do
{
	wprowadzenie1();
	
	wprowadzenie2();  
     
    printf(sprawdzenie());
    
    printf("Czy chcesz kontynuowac?(t/n)\n");
    scanf("%s", &znak);
}while (znak == 't');

     return 0;
}

void sprawdzenie()
{	
float odl;	
odl= sqrt( ((x2-x1)*(x2-x1))+((y2-y3)*(y2-y3)) );
abs(r1-r2);
if (odl> (r1+r2) )
{
	printf("okregi sa rozlaczne\n");
}	
	
if (odl == (r1+r2) )
{
		printf("okregi sa styczne zewnetrznie\n ");
}

if ( abs(r1-r2)<odl & odl<(r1+r2) )
	{
		printf("okregi sie przecinaja");
	}
	
if(odl == abs(r1-r2))
{
	printf("okregi sa styczne wewnetrznie");
}
if(odl< abs(r1-r2))
{
	printf("okregi sa rozlaczne wewnetrznie");
}
}


void wprowadzenie1()
{ 
printf("podaj wspolrzedne pierwszego  okregu\n");
	scanf("%f %f", &x1, &y3);
	printf("podaj promien\n ");
	scanf("%f", &r1);
}
void wprowadzenie2()
{
	printf("podaj wspolrzedne drugiego okregu\n");
	scanf("%f %f", &x2, &y2);
	printf("podaj promien\n ");
     scanf("%f", &r2); 
}




