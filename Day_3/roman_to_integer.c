/*
Nesse problema eu estava pensando no meu ultimo estudo que foi PHP/Laravel
É importante eu deixar claro, pois a minha idéia era a produção de um Array associativo
Exemplo: 
    $pessoa = array(
        "nome" => "Ana",
        "idade" => 30,
        "cidade" => "São Paulo"
    );

Assim eu conetaria o caractere ao respectivo valor. Porém em C eu não consigo realizar isso
a solução que pensei para isso, foi fazer uma função nova com um switch case retornando
o valor respectivo ao caractere.
*/
int valorRomano(char c) {   //função do switch case
    switch (c) {    //ela recebe o caractere e vai comparar
        case 'I': return 1;
        case 'V': return 5;
        case 'X': return 10;
        case 'L': return 50;
        case 'C': return 100;
        case 'D': return 500;
        case 'M': return 1000;
        default: return 0;
    }
}

int romanToInt(char* s) {   
    int i = 0;
    int resultado = 0;  //vai ser o resultado da minha soma

    while (s[i] != '\0') {  // aqui ele para quando chega ao fim encontrando o \0
        int atual = valorRomano(s[i]);  //chamo minha função e encontro o valor do caractere
        int proximo = valorRomano(s[i + 1]);    //a mesma coisa que antes mas é o próximo 

        if (proximo > atual) {  //se o prixmo for maior eu subtraio
            resultado -= atual; 
        } else {
            resultado += atual;
        }

        i++;    
    }

    return resultado; //retorno o resultado do somatório
}
