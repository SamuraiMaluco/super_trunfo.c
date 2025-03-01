#include <stdio.h>

int main() {  
    //declarando a carta 1
    char estado1 = 'A';
    char codigo1 [] = 'A01';
    char nome_cidade1 [] = 'São Paulo';
    int populacao1 = 12325000;
    float area1 = 1521.11 ;
    float pib1 = 699.28;
    int pontos_turisticos1 = 50;
    
    //declarando a carta 2
    char estado2 = 'B';
    char codigo2 [] = 'B02';
    char nome_cidade2 [] = 'Rio de Janeiro';
    int populacao2 = 6748000;
    float area2 = 1200.25;   
    float pib2 = 300.50;
    int pontos_turisiticos2 = 30;

    //exibindo a carta 1
    printf('carta 1:\n');    
    printf('Estado: %c\n', estado1);
    printf('codigo: %s\n', codigo1);
    printf('Nome da Cidade: %s\n', nome_cidade1);
    printf('População: %d\n', populacao1);
    printf('Área: %.2f km²\n', area1);
    printf('PIB: %.2f bilhões de reais\n', pib1);
    printf('Número de Pontos Turísticos: %d\n', pontos_turisticos1);

    //exibindo carta 2
    printf('carta 2:\n');    
    printf('Estado: %c\n', estado2);
    printf('codigo: %s\n', codigo2);
    printf('Nome da Cidade: %s\n', nome_cidade2);
    printf('População: %d\n', populacao2);
    printf('Área: %.2f km²\n', area2);
    printf('PIB: %.2f bilhões de reais\n', pib2);
    printf('Número de Pontos Turísticos: %d\n', pontos_turisiticos2);


    return 0;
    












}

