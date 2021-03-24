#include<stdio.h>

struct Complex{
    int real;
    int img;



};


Complex sub(Complex a,Complex b)
{
    Complex d;
    d.real=a.real-b.real;
    d.img=a.img-b.img;
    return d;


}











int main()

{
    Complex a,b;
    scanf("%d %d",&a.real,&a.img);
    scanf("%d %d",&b.real,&b.img);

    Complex d = sub(a,b);

    printf("%d +j %d",d.real,d.img);
}
