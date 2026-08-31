#include <stdio.h>
#include <math.h>

//fonction divisible
/*

int divisible(int a, int b){
    if (a == 0) return 0;
    return (b % a == 0);
    
    
}

int main(){
    if (divisible(3, 10)){
        printf("divisible");
    }
    else printf("non divisible");
}
    */



//chiffre premier

/*
int est_premier(int a){
     
    if (a < 2) return 0;
    for (int i = 2; i<=sqrt(a); i++){
        if (a % i == 0) return 0;
    }
    return 1;
    
}

int main(){

    if (est_premier(500)) printf("est premier");
    else printf("n'est pas premier");
}
    */


int pgcd(int a, int b){

    int reste = 1;
    int A = a;
    int B = b;
    int nReste = 1;
    while (reste != 0)
    {
        reste = A % B;
        A = B;
        B = reste;

        
        
    }
    return A;
    
    
}

int main(){
    printf("%d", pgcd(84, 30));
}
