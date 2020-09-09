#include <stdio.h>

int main(void){

    int x, y, z;
    scanf("%i %i %i", &x, &y, &z);

    int triangehValid(int a,  int b, int c);
    void tipoTriang(int a, int b, int c);
    int triangehRetang(int a, int b, int c);

    if(triangehValid(x, y, z)){
        printf("Valido-");
        tipoTriang(x, y, z);
        if(triangehRetang(x, y, z))
            printf("Retangulo: S\n");
        else
            printf("Retangulo: N\n");
    }else{
        printf("Invalido\n");
    }

    return 0;
}

int triangehValid(int a, int b, int c){
    if(a<b+c && b<a+c && c<a+b){
        return 1;
    }else{
        return 0;
    }
}

void tipoTriang(int a, int b, int c){
    if(a==b && b==c)
        printf("Equilatero\n");
    else if(a!=b && b!=c && a!=c)
        printf("Escaleno\n");
    else
        printf("Isosceles\n");
}

int triangehRetang(int a, int b, int c){
    int hip = c*c;
    int soma = (a*a) + (b*b);
    if( hip == soma)
        return 1;
    else
        return 0;
}

