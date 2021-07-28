/*Crie um programa com uma função do tipo void max(a,b,c) que recebe três
inteiros, a, b e c (devem ser lidos no início da execução do programa). A
função deve, então, salvar o maior valor em a, o segundo maior valor em b e
o menor valor em c. Após isso deve-se exibir os novos valores de a, b e c.
Ex.: para a=2, b=5 ,c=6, após executar a função, deve-se exibir “a=6, b=5 e
c=2”.*/
 
#include <stdio.h>
void max(int *a, int *b, int *c)
{
    int Vmaior=0, Vmenor=0, intermediario=0;
    if(*a>*b && *a>*c)
    {
        Vmaior = *a;
        *a=Vmaior;
        if(*b > *c)
        {
            Vmenor=*c;
            *c=Vmenor;
            intermediario=*b;
            *b=intermediario;
        }
        else
        {
            Vmenor=*b;
            intermediario=*c;
            *c=Vmenor;
            *b=intermediario;
        }
    }
    else if(*a<*b && *a<*c)
    {
        Vmenor=*a;
        if(*b>*c)
        {
            Vmaior=*b;
            intermediario=*c;
            *a=Vmaior;
            *b=intermediario;
            *c=Vmenor;
        }
        else
        {
            Vmaior=*c;
            intermediario=*b;
            *a=Vmaior;
            *b=intermediario;
            *c=Vmenor;
        }
    }
    else if(*b>*c)
    {
        Vmaior=*b;
        Vmenor=*c;
        intermediario=*a;
        *a=Vmaior;
        *b=intermediario;
        *c=Vmenor;
    }
    else
    {
        Vmaior=*c;
        Vmenor=*b;
        intermediario=*a;
        *a=Vmaior;
        *b=intermediario;
        *c=Vmenor;
 
    }
}
 
int main()
{
    int *a, *b, *c;
    puts("digite 3 valores inteiros");
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    max(&a,&b,&c);
    printf("a: %d\nb: %d\nc: %d\n",a,b,c);
}
