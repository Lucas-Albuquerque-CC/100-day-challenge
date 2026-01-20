int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
	//aloca a memória, 2x o valor de inteiro
    int* resultado = malloc(2 * sizeof(int));
	//vai ter que retornar um array de 2 elementos
    *returnSize = 2;
	//o primeiro laço vai do [0] até o numsSize
    for (int i = 0; i < numsSize; i++) {
	//o segundo vai do i+1 (ou seja [1]) até numsSize
	//assim garante que não vai repetir
        for (int j = i + 1; j < numsSize; j++) {
            if (nums[i] + nums[j] == target) {
	//se a soma deles for meu alvo, guarda o valor de i e j nas posições [0][1]
                resultado[0] = i;
                resultado[1] = j;
                return resultado;
            }
        }
    }

    return resultado;
}
