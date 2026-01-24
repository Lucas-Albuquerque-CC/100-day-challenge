bool isPalindrome(int x) {
    /*
O problema consiste em verificar se um número é palíndromo, se ele permanece
o mesmo, ainda que invertido. Comecei descartando números negativos e números
que terminam em zero, a menos que seja o próprio zero. Depois algoritmo inverte
o número dígito por dígito usando matemáticas (% 10 e / 10). Por fim, o número 
invertido é comparado com o número original, se forem iguais, o número é 
considerado palíndromo.
    */
    if (x < 0) { //se for netivo não é palindrome
        return false;
    }

    if (x != 0 && x % 10 == 0) { //se termina com 0 e não é 0
        return false;
    }

    int original = x;
    long long invertido = 0;

    while (x > 0) {
        int digito = x % 10;           // pega o último dígito
        invertido = invertido * 10 + digito;
        x = x / 10;                    // remove o último dígito
    }

    return original == invertido;
}
