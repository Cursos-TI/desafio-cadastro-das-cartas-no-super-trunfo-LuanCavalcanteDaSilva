#include <stdio.h>

// Desafio Super Trunfo - Países (Aluno)
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

/* Para essa versão do Desafio, dificuldade Aluno, estarei codando um protótipo que incluirá somente 2 
   cartas do Brasil, logo estarei me delimitando para facilitar o teste do protótipo. */

int main() {

    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

    /* char para declarações com caracteres de letras / letras + números, int e float para números. 
    
    Os char's possuem limites específicos, referentes a quantidade de caracteres. 
    Estado possui 21, pois o estado de nome mais longo tem 20 caracteres, logo adicionei 21 ao 
    código, para evitar erros.

    Codigo da Carta inclui a letra de A-H, acompanhado de 2 números, logo inseri 4 caracteres ao 
    código com o proposito mencionado acima.

    Cidade possui 24, pois a cidade de nome mais longo tem 23 caracteres, logo adicionei 24 ao
    código para evitar erros. 
    
    Estarei usando float em PIB e Área, para permitir que o programa exiba virgula 
    nos decimais.*/
    
    char estado[21];
    char codigo_da_carta[4];
    char cidade[24];
    int populacao, numero_de_pontos_turisticos;
    float pib, area;

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    /* Solicitação de Informações irá ser efetuada, e usuário deve botar as informações conforme "o robozinho 
    fala". */
    
    printf("Bem vindo ao Super Trunfo - Países - Brasil! Para começar, insira duas cartas. \n");
    printf("Primeira carta, digite o nome do estado: \n");
    scanf("%c", &estado);

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
