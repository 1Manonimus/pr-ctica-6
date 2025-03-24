#include <stdio.h>
//López Gutiérrez María Fernanda
//calculadora
int main()
{
    int sum = 0;
    int a = 0;
    int b = 0;
    int n;
 
    printf ("escoje una opción; \n");
    printf ("1- suma \n");
    printf ("2- resta \n");
    printf ("3- multiplicación \n");
    printf ("4- división\n");
    
    scanf ("%u" , &n);
    
    while (n !=0)
{
    printf ("ingresa el primer valor;\n");
    scanf ("%d" ,& a);
    printf ("ingrese el segundo valor;\n");
    scanf ("%d" ,& b);
    
    if (n==1)
    {
        sum=a+b;
    }
    else
    {
        if (n==2)
        {
            sum=a-b;
        }
    else
        if (n==3)
        {
            sum=a*b;
        }
    else
        if(n==4)
        {
            sum=a/b;
        }
    }
printf ("la operación es;%d\n", sum);

    printf ("escoje una opción; \n");
    printf ("1- suma \n");
    printf ("2- resta \n");
    printf ("3- multiplicación \n");
    printf ("4- división\n");
    
    scanf ("%u" , &n);
}

return 0;
}
