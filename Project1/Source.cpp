#include <iostream>
#include <stdio.h>
#include  <locale.h>



int main()
{
	setlocale(LC_ALL, "");
	int r, a,f, c,s,p;
	printf("Ввидите масса первого вещества");
	scanf_s("%d", &s);
	printf("Ввидите объём первого вещества");
	scanf_s("%d", &r);
	printf("Ввидите масса второго вещества ");
	scanf_s("%d", &p);
	printf("Ввидите объём второго вещества  ");
	scanf_s("%d", &f);
	p= s / r;
	c = p / f;
	if (p < c)printf("Плотность первого вещества меньше \n");
	else printf("Плотность второго вещества меньше\n"); 
	
	
	
	
	
	
	/*int a, b  ;
	float c;
	printf("Расстояние в мм ");
	scanf_s("%d", &a);
	printf("Расстояние в дюймах ");
	scanf_s("%d", &b);
	c = b*25,4;
	if (a < c)printf("Расстояние в мм меньше\n");
	else printf("Расстояние в дюмах меньше\n");*/

	
	
	/*int r, a,f, c;
	float s,p;
	printf("Ввидите радиус круга");
	scanf_s("%d", &r);
	printf("Ввидите сторону квадрата");
	scanf_s("%d", &a);
	p = 3, 14;
	f = a * a;
	s = p * f;
	c = 4 * a;
	if (s < c)printf("Площадь квадрата больше\n");
	else printf("Площадь круга больше\n");*/ 

	
	
	
	
	/*int a, b, c ;
	printf("Скорость в км\\ч");
	scanf_s("%d", &a);
	printf("Скорость в м\\ч");
	scanf_s("%d", &b);
	c = b *3,6;
	if (a < c)printf("скорость в км\\час меньше\n");
	else printf("Скорость в милях в час меньше\n");*/

	
	
	
	
	
	
	/*int a, b, c ;
	printf("Ввидите первое число ");
	scanf_s("%d", &a);
	printf("Ввидите второе число ");
	scanf_s("%d", &b);
	c = a/b;
	printf("%d\n", c);*/










	/*int a, b, c ;
	printf("Расстояние в км ");
	scanf_s("%d", &a);
    printf("Расстояние в футах ");
	scanf_s("%d", &b);
	c = b / 2000;
	if (a < c)printf("Расстояние в км меньше\n");
	else printf("Расстояние в футах меньше\n");*/





	/*int a, b;
	a = 35;
	b = 56;
	if (a < b) printf("%d\n", a);
	else printf("%d/n", b)*/
	
	
	/*int a, b;
	a = 33;
	b = 55;
	if (a > b) printf("%d\n",a);
	else printf("%d/n", b);*/















	/*int r, d, e, a;
	a = 5;
	r = 6;
	d = sqrt(a*a + a*a);
	e = d / 2;
	if (r < e) printf("yes\n");
	else printf("no\n");*/




	
	
	
	/*int a, b, y, d, c, v;
	a = 2;
	b = 3;
	y = a * b;
	d = a / b;
	c = a + b;
    v = a - b;
	printf("result: %d\n", y);
	printf("result: %d\n", d);
	printf("result: %d\n", c);
	printf("result: %d\n", v);*/
	
	
	/*int p, y, c;
	p = 800;
	y = 1000;
	c = y / p;
	printf("result: %d\n", c);*/




	/*int a, b, c, s, d,k;
	a = 6;
	b = 5;
	d = a + b;
	c=d/2;
	k = sqrt(a*b);
	s = 2 * k;
    printf("result: %d\n", c);
	printf("result: %d\n", s);*/


	
	/*int a, b, p, f,d;
	a = 2;
	b = 6;
	p = 2 * a + 2 * b;
	f = a + b ;
	d = f / 2;
	printf("result: %d\n", p);
	printf("result: %d\n", d);*/

	/*int a, b, c,p;
	a = 3;
	b = 4;
	c = sqrt(a*a + b * b);
	p = a + b + c;
	printf("result: %d\n", p);*/

	/*int a, b, c;
	a = 3;
	b = 4;printf("result: %d\n", c);
	c = sqrt(a*a + b * b);
	printf("result: %d\n", c);*/

	/*int d, p, s;
	p = 3, 14;
	d = 6;
	s = p / 4 * d*d;
	printf("result: %d\n", s);*/



/*int l, r,p;
p = 3, 14;
r = 6;
l = 2 * p*r;
printf("result: %d\n", l)* /;
system("pause");



	/*int a, P;
	a = 12;
	P = 4* a;
	printf("result: %d\n", P);*/;

system("pause");
}