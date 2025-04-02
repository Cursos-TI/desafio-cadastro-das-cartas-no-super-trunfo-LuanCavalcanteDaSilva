#include <stdio.h>

// Desafio Super Trunfo - Países (Aventureiro)
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

/* Para essa versão do Desafio, dificuldade Intermediário, continuarei a codar um protótipo que incluirá 
somente 2 cartas do Brasil, logo continuarei a me delimitar para facilitar o teste do protótipo. */

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
    
    char estado1[21], carta1[4], cidade1[24];
    int populacao1, nropontosturisticos1;
    float pib1, area1, pibpc1, dens1;

    char estado2[21], carta2[4], cidade2[24];
    int populacao2, nropontosturisticos2;
    float pib2, area2, pibpc2, dens2;

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    /* Solicitação de Informações irá ser efetuada, e usuário deve botar as informações conforme "o robozinho 
    fala". */

    /* scans personalizados como %s para as variaveis com nomes com caracter e número, %d para ints decimais 
    e %f para o pib e área de densidade populacional, que precisam de números mais específicos, o get char conserta
    o bug do enter e coloco os %xlimite de caráter para implementar o limite sem erros */
    
    printf("Bem vindo ao Super Trunfo - Países - Brasil! Para começar, insira duas cartas. \n");

    printf("Primeira carta, digite o nome do estado: \n");
    scanf(" %20s", &estado1);
    getchar();
    printf("Digite o Código da Carta: \n");
    scanf(" %3s", &carta1);
    getchar();
    printf("Digite a Cidade: \n");
    scanf(" %23s", &cidade1);
    getchar();
    printf("Digite a quantidade de População: \n");
    scanf("  %d", &populacao1);
    getchar();
    printf("Digite a quantidade de Pontos Turisticos: \n");
    scanf("   %d", &nropontosturisticos1);
    getchar();
    printf("Digite a quantidade de PIB: \n");
    scanf("   %f", &pib1);
    getchar();
    printf("Digite a Área terrestre: \n");
    scanf("     %f", &area1);
    getchar();

    printf("Segunda Carta, digite o nome do estado: \n");
    scanf(" %20s", &estado2);
    getchar();
    printf("Digite o Código da Carta: \n");
    scanf(" %3s", &carta2);
    getchar();
    printf("Digite a Cidade: \n");
    scanf(" %23s", &cidade2);
    getchar();
    printf("Digite a quantidade de População: \n");
    scanf("%d", &populacao2);
    getchar();
    printf("Digite a quantidade de Pontos Turisticos: \n");
    scanf(" %d", &nropontosturisticos2);
    getchar();
    printf("Digite a quantidade de PIB: \n");
    scanf("%f", &pib2);
    getchar();
    printf("Digite a Área terrestre: \n");
    scanf(" %f", &area2);
    getchar();

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    /*Aqui estou imprimindo os resultados, que usaram os mesmos scans personalizados, porem agora inclui se a carta em
    questão e suas propriedades*/

    printf("CARTA 1 \nEstado: %s \nCódigo da Carta: %s \n", estado1, carta1);
    printf("Cidade: %s \nPopulação: %d \nPontos Turisticos: %d \n", cidade1, populacao1, nropontosturisticos1);
    printf("PIB: %f Bilhões de Reais\nÁrea Terrestre: %f Km²\n", pib1, area1);
    dens1 = (float)(populacao1 + area1) / 2;
    printf("A Densidade Populacional é: %.2f", dens1);
    pibpc1 = (float)(pib1 + populacao1) / 2;
    printf("O PIB per Capita é: %.2f", pibpc1);

    printf("CARTA 2 \nEstado: %s \nCódigo da Carta: %s \n", estado2, carta2);
    printf("Cidade: %s \nPopulação: %d \nPontos Turisticos: %d \n", cidade2, populacao2, nropontosturisticos2);
    printf("PIB: %f Bilhões de Reais\nÁrea Terrestre: %f Km²\n", pib2, area2);
    dens2 = (float)(populacao2 + area2) / 2;
    printf("A Densidade Populacional é: %.2f", dens1);
    pibpc2 = (float)(pib2 + populacao2) / 2;
    printf("O PIB per Capita é: %.2f", pibpc2);


    return 0;

    /*Em tese, o código tava facil, os problemas que tive, era porque não havia compreendido certas funcionalidades e
    para isso, revisei o meu conhecimento novamente até entender, aceitando sugestões de meus amigos programadores, 
    incluso de meu aprendizado próprio após interações prévias com IDEs.*/
}
