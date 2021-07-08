#include <stdio.h>
#include <locale.h>

int main(){
    // Especificando o idioma
    setlocale(LC_ALL, "Portuguese");
    
    // Declarando variáveis
    float salario;
    float desconto;
    
    // Lendo valores
    printf("Digite o valor do produto R$");
    scanf("%f", &salario);
    
    // Calculando o desconto
    desconto = salario - (salario * 5 / 100);
    
    // Exibindo o desconto
    printf("Desconto: %.2f", desconto);
    
    // Finalizando a execução
    return 0;
    
}
