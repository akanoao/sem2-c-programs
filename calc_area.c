#include <stdio.h>
#include <math.h>

int main(void){
    int choice;
    float radius, base, height;
    float area;
    printf("enter your choice:\n1.circle\n2.square\n3.triangle\n4.rectangle\n");
    scanf("%d",&choice);
    switch (choice)
    {
    case 1:
        printf("enter radius");
        scanf("%f",&radius);
        area = M_PI*radius*radius;
        break;
    case 2:
        printf("enter side");
        scanf("%f",&base);
        area = base*base;
        break;
    case 3:
        printf("enter base and height");
        scanf("%f %f",&base,&height);
        area = 0.5*base*height;
        break;
    case 4:
        printf("enter base and height");
        scanf("%f %f",&base,&height);
        area = base*height;
        break;
    default:
        break;
    }
    printf("area is: %f",area);
    return 0;
}