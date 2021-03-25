#include <stdio.h>
#include <math.h>
#define e 2.718281828
#define error 0.0001
int main (){  
    int i=0;  
    float ea=100,x=0,xi=0,temp;  
    printf("Metodo de iteracion de punto fijo"); 
    printf("Encontrar la raiz para la funcion:  f(x) = e^(-x) - x");  
    printf("Con un error de 0.0001");
     
    printf("#       X             |Ea| \n\n\n");
    do {      
                  
            printf("%d",i);      
                 
            printf("%.8f",x);      
                  
            xi = pow(e,(-x));      
            if (i==0)printf("------");      
            else{
                    ea = fabs(((x-temp)/x)*100);printf("%.8f",ea);      
                    }      
            temp=x;      
            x=xi;      
            i++;      
            printf("\n");    }
            while(ea > error);
         
            printf("La raiz de la funcion es: %.8f",temp);  
              
            return 0; 

            }