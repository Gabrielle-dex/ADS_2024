/*Solicite ao usuário dois, números e um operador ( +, -, * /). 
Utilizem um ‘switch - case’ 
para realizar operação escolhida e exibir o resultado. */
#include <stdio.h>
#include <stdbool.h>

int main(void){
    double num1, num2;
    char op;
/*  O que eu pensei
    char opsom;    
    char opdim;
    char opvex;
    char opdiv; */
    double resultado;

    printf("Digite o primeiro número: \n");
    scanf("%d", num1);
    prinf("Digite o segundo número: \n");
    scanf("%d", num2);
    printf("Digite o operador (+, -, *, /): \n");
    scanf("%c", op); 

    // abre switc e coloca condição ()
    switch (op){

        case '+': 
            resultado = num1 + num2;
        break;

        case '-': 
            resultado = num1 - num2;
        break;

        case '*': 
            resultado = num1 * num2;
        break;

        case '/':
            resultado = num1 / num2;
        break;
        // diferente de 0
        if (num2 !=0){
            resultado = num1/num2;
        } else{
            printf("Erro: Divisão por zero!\n");
            return 1;
        }break;
        // porque default
        default;
        printf("Operador invalido!\n");
        return 1;
    }


}