/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {

    struct ListNode *novoNo;
    /*a abordagem aqui foi utilizar o Dummy, um nó ficticio que evita o uso do first
    e elimina pensar nos casos especiais
    */
    struct ListNode *dummy; //declara a variável
    dummy = malloc(sizeof(struct ListNode)); // aloca a memória
    dummy->val = 0; //atribui valor
    dummy->next = NULL; //nulifica o próximo nó
    //
    struct ListNode *aux = dummy; //pra percorrer a lista, usei o aux, ele vai apontar para o dummy
    //
    int carry = 0;
    int soma_l1, soma_l2;
    int soma;
    //enquanto tiver listas e carry o while vai ser True
    while(l1 != NULL || l2 != NULL || carry != 0){
        //aqui eu coloco os valores nas variáveis de soma
        if (l1 != NULL){
            soma_l1 = l1->val;
        }else{
            soma_l1 =0;
        }
        if (l2 != NULL){
            soma_l2 = l2->val;
        }else{
            soma_l2 =0;
        }
        soma = soma_l1 + soma_l2 + carry; //aqui ele vai somar o valor das listas com o carry
        carry = soma / 10;
        //
        novoNo = malloc(sizeof(struct ListNode)); //aloca o valor do novo nó
        novoNo->val = soma % 10; //atribui valor
        novoNo->next = NULL; //nulifica o próximo
        //
        aux->next = novoNo; //aqui encadeia os nós
        aux = novoNo; //aqui move o ponteiro
        //
        if (l1 != NULL){ //se não for nulo, percorre a lista, l2 é a mesma coisa
            l1 = l1->next;        
        }
        if (l2 != NULL){
            l2 = l2->next;
        }
    }
    return dummy->next; //aqui retorno o inicio real da lista
}
