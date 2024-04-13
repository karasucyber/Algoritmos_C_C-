/*Alice e Bob criaram, cada um, um problema para o HackerRank. Um revisor avalia os dois desafios, atribuindo pontos em uma escala de 1 a 100 para três categorias: clareza do problema , originalidade e dificuldade .

A classificação para o desafio de Alice é o trigêmeo a = (a[0], a[1], a[2]) e a classificação para o desafio de Bob é o trigêmeo b = (b[0], b[1], b [2]) .

A tarefa é encontrar seus pontos de comparação comparando a[0] com b[0] , a[1] com b[1] e a[2] com b[2] .

Se a[i] > b[i] , então Alice recebe 1 ponto.
Se a[i] < b[i] , então Bob recebe 1 ponto.
Se a[i] = b[i] , então nenhuma pessoa recebe um ponto.
Os pontos de comparação são o total de pontos que uma pessoa ganhou.

Dados a e b , determine seus respectivos pontos de comparação.

Exemplo

uma = [1, 2, 3]
b = [3, 2, 1]
Para elementos *0*, Bob recebe um ponto porque a[0] .
Para os elementos iguais a[1] e b[1] , nenhum ponto é ganho.
Finalmente, para elementos 2 , a[2] > b[2] então Alice recebe um ponto.
A matriz de retorno é [1, 1] com a pontuação de Alice primeiro e a de Bob em segundo.

Descrição da função

Complete a função compareTriplets no editor abaixo.

compareTriplets tem os seguintes parâmetros:

int a[3] : Classificação de desafio de Alice
int b[3] : Classificação de desafio de Bob
Retornar

int[2] : A pontuação de Alice está na primeira posição e a pontuação de Bob está na segunda.
Formato de entrada

A primeira linha contém 3 números inteiros separados por espaço, a[0] , a[1] e a[2] , os respectivos valores no trio a .
A segunda linha contém 3 números inteiros separados por espaço, b[0] , b[1] e b[2] , os respectivos valores no trio b .*/

#include <assert.h>
#include <ctype.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* readline();
char* ltrim(char*);
char* rtrim(char*);
char** split_string(char*);

int parse_int(char*);

/*
 * Complete the 'compareTriplets' function below.
 *
 * The function is expected to return an INTEGER_ARRAY.
 * The function accepts following parameters:
 *  1. INTEGER_ARRAY a
 *  2. INTEGER_ARRAY b
 */

/*
 * To return the integer array from the function, you should:
 *     - Store the size of the array to be returned in the result_count variable
 *     - Allocate the array statically or dynamically
 *
 * For example,
 * int* return_integer_array_using_static_allocation(int* result_count) {
 *     *result_count = 5;
 *
 *     static int a[5] = {1, 2, 3, 4, 5};
 *
 *     return a;
 * }
 *
 * int* return_integer_array_using_dynamic_allocation(int* result_count) {
 *     *result_count = 5;
 *
 *     int *a = malloc(5 * sizeof(int));
 *
 *     for (int i = 0; i < 5; i++) {
 *         *(a + i) = i + 1;
 *     }
 *
 *     return a;
 * }
 *
 */
int* compareTriplets(int a_count, int* a, int b_count, int* b, int* result_count) {
 int Score_a = 0; 
 int Score_b = 0;
 
 for(int i = 0; i < a_count; i++){
     if(a[i] > b[i]){
         Score_a++;
     }else if (a[i] < b[i]){
         Score_b++;
     }
     int* result = (int*)malloc(2 * sizeof(int));
    if(result == NULL){
        return NULL;
    };
    
    result[0] = Score_a;
    result_count[1] = Score_b;  
    
    *result_count = 2;
  
 };
 
 return result_count;
 
};

int main()
{
    FILE* fptr = fopen(getenv("OUTPUT_PATH"), "w");

    char** a_temp = split_string(rtrim(readline()));

    int* a = malloc(3 * sizeof(int));

    for (int i = 0; i < 3; i++) {
        int a_item = parse_int(*(a_temp + i));

        *(a + i) = a_item;
    }

    char** b_temp = split_string(rtrim(readline()));

    int* b = malloc(3 * sizeof(int));

    for (int i = 0; i < 3; i++) {
        int b_item = parse_int(*(b_temp + i));

        *(b + i) = b_item;
    }

    int result_count;
    int* result = compareTriplets(3, a, 3, b, &result_count);

    for (int i = 0; i < result_count; i++) {
        fprintf(fptr, "%d", *(result + i));

        if (i != result_count - 1) {
            fprintf(fptr, " ");
        }
    }

    fprintf(fptr, "\n");

    fclose(fptr);

    return 0;
}

char* readline() {
    size_t alloc_length = 1024;
    size_t data_length = 0;

    char* data = malloc(alloc_length);

    while (true) {
        char* cursor = data + data_length;
        char* line = fgets(cursor, alloc_length - data_length, stdin);

        if (!line) {
            break;
        }

        data_length += strlen(cursor);

        if (data_length < alloc_length - 1 || data[data_length - 1] == '\n') {
            break;
        }

        alloc_length <<= 1;

        data = realloc(data, alloc_length);

        if (!data) {
            data = '\0';

            break;
        }
    }

    if (data[data_length - 1] == '\n') {
        data[data_length - 1] = '\0';

        data = realloc(data, data_length);

        if (!data) {
            data = '\0';
        }
    } else {
        data = realloc(data, data_length + 1);

        if (!data) {
            data = '\0';
        } else {
            data[data_length] = '\0';
        }
    }

    return data;
}

char* ltrim(char* str) {
    if (!str) {
        return '\0';
    }

    if (!*str) {
        return str;
    }

    while (*str != '\0' && isspace(*str)) {
        str++;
    }

    return str;
}

char* rtrim(char* str) {
    if (!str) {
        return '\0';
    }

    if (!*str) {
        return str;
    }

    char* end = str + strlen(str) - 1;

    while (end >= str && isspace(*end)) {
        end--;
    }

    *(end + 1) = '\0';

    return str;
}

char** split_string(char* str) {
    char** splits = NULL;
    char* token = strtok(str, " ");

    int spaces = 0;

    while (token) {
        splits = realloc(splits, sizeof(char*) * ++spaces);

        if (!splits) {
            return splits;
        }

        splits[spaces - 1] = token;

        token = strtok(NULL, " ");
    }

    return splits;
}

int parse_int(char* str) {
    char* endptr;
    int value = strtol(str, &endptr, 10);

    if (endptr == str || *endptr != '\0') {
        exit(EXIT_FAILURE);
    }

    return value;
}
