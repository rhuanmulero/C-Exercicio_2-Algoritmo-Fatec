#include <stdio.h>

main (){

char resposta;
int unidades, preco;
float precoTotal, desconto;


printf("Bem-Vindo a Simulations de Jujubinhas do Rhuan \nGostaria de simular uma compra hoje?\n"); // <- Entrada Manual
scanf(" %s", &resposta); // <- Base de Dados

if(resposta == 's' || resposta == 'S') {
    printf("Perfeito! Compras pelo nosso Software possuem desconto de 9%%! \nQuantas Unidades Gostaria Hoje?\n"); // <- Decisão
    scanf("%d", &unidades);
    printf("Entendido! Voce gostaria de: %d, certo?\nQual o preco das unidades?\n", unidades);
    scanf("%d", &preco);

    precoTotal = unidades * preco;
    desconto = precoTotal - (precoTotal * 9/100);

    printf("Total sem Desconto: %d\n");
    printf("Total com Desconto: %.2f", desconto);

}

else {
printf("Que pena, fica para a proxima");}

return 0;

}
