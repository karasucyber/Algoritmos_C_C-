#include <stdio.h>
#include <stdlib.h>

// Função para encontrar os índices dos dois números que somam para o target
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    // Alocando memória para o array de retorno
    int *result = (int*)malloc(2 * sizeof(int));
    // Definindo o tamanho do array de retorno
    *returnSize = 2;
    
    // Loop externo para percorrer todos os elementos do array, exceto o último
    for (int i = 0; i < numsSize - 1; i++) {
        // Loop interno para percorrer todos os elementos após o elemento atual do loop externo
        for (int j = i + 1; j < numsSize; j++) {
            // Verificando se a soma dos números nos índices i e j é igual ao target
            if (nums[i] + nums[j] == target) {
                // Se a soma for igual ao target, definimos os índices i e j como os elementos de retorno
                result[0] = i;
                result[1] = j;
                // Retornamos o array de índices
                return result;
            }
        }
    }
    
    // Se nenhum par de números for encontrado que some para o target, retornamos NULL
    return NULL;
}

int main() {
    int nums[] = {2, 7, 11, 15}; // Array de entrada
    int target = 9; // Valor alvo
    int returnSize; // Tamanho do array de retorno
    
    // Chamando a função twoSum para encontrar os índices dos números que somam para o target
    int *indices = twoSum(nums, sizeof(nums) / sizeof(nums[0]), target, &returnSize);
    
    // Verificando se a função retornou uma solução válida
    if (indices != NULL) {
        // Se sim, imprimimos os índices retornados
        printf("[%d, %d]\n", indices[0], indices[1]);
        // Liberamos a memória alocada para o array de índices
        free(indices);
    } else {
        // Se não houver solução, imprimimos uma mensagem informando
        printf("Não existe solução.\n");
    }
    
    return 0;
}
