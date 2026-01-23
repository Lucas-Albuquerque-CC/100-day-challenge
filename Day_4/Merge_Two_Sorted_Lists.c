/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2) {
/*
Esse exercício é basicamente juntar duas listas, 
nesse caso usei um dummy pra facilitar,
percorri a lista e comparei para saber a
ordem dos nós e no final retorna o inicio da lista ignorando o dummy
*/
    struct ListNode dummy;
    dummy.next = NULL;

    struct ListNode* aux = &dummy;

    while (list1 != NULL && list2 != NULL) {
        if (list1->val <= list2->val) {
            aux->next = list1;   // vai ligar o menor 
            list1 = list1->next;     
        } else {
            aux->next = list2;
            list2 = list2->next;     
        }
        aux = aux->next;     
    }

    if (list1 != NULL) {
        aux->next = list1;
    } else {
        aux->next = list2;
    }

    return dummy.next;
}
