#include<iostream>
#include <math.h>
using namespace std;

int i=1;
float Xi=3.2,Xi1,error;
float tolerancia = 0.0001;
float e =2.718281828;

void tabla(){
//Formula 
    cout<<"i                X               |Error| \n\n";

    do{
        Xi1= pow(e,(-Xi))+3;
        error = abs(Xi1-Xi);
        
        Xi = Xi1;
        cout<<i<<"\t\t"<<Xi<<"\t\t"<<error<<endl;
        i++;
    
    }while(error > tolerancia);



}






int main(){



    tabla();



    return 0;
}