#include <stdio.h> 

int main (){
    // PORQUE O FATORIAL TA DANDO 0 E TROCAR O U FICA O NUMERO QUE DIGITOU
    int u;
    // motivo de usar doble: número grande
    double fatorial = 1.0;
    printf("Digite um número inteiro positvo");
    scanf("%d",&u);
         if (u <= 0)
            printf("Digite um número valido");
         else{
             for (int i = 1; i <= fatorial; i++){
                // 7,6,5... x= aquele número
                fatorial *= i;
             }
    printf("Seu número %d, fatorial dele é %d", u, fatorial);
             
         }
    return 0;
}

/* exemplo do colega com Do - While
 int main(){
    int num;
    double fat =1.0;
    printf(" Informe o número: \n");
    scanf ("%d", &num);

    do{
        fat*fat*num;
        num--;
    } while (num>0);
    prinf("fatorial: %2f", fat);
    return 0;
 }
*/