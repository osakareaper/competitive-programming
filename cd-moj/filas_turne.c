// Link to problem:
// https://moj.naquadah.com.br/cgi-bin/questao.sh/moj-problems%23turne

#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// nó
typedef struct Node {
  char cidade[27];
  struct Node *next;
} Node;

// fila
typedef struct Queue {
  Node *head;
  Node *tail;
} Queue;

// inicia fila
Queue *init_queue() {
  Queue *q = (Queue *)malloc(sizeof(Queue));
  q->head = NULL;
  q->tail = NULL;
  return q;
}

void enqueue(Queue *q, char const *city_name) {
  // cria nó
  Node *new_node = (Node *)malloc(sizeof(Node));
  strcpy(new_node->cidade, city_name);
  new_node->next = NULL;

  // enfileirar realmente

  // verifica se lista ta vazia
  if (q->tail == NULL) {
    // nó que criamos vai se tornar o inicio e o fim da lista
    q->head = new_node;
    q->tail = new_node;
    return;
  }

  // se nao ta vazia, enfileira normalmente
  q->tail->next = new_node;
  q->tail = new_node;
}

// desenfileira e retorna nó do início da fila
Node *dequeue(Queue *q) {
  // se fila vazia, nao faz nada
  if (q->tail == NULL) {
    return NULL;
  }

  // salva o nó desenfileirado
  Node *temp = q->head;

  q->head = q->head->next;

  // verifica se fila ficou vazia
  if (q->head == NULL) {
    q->tail = NULL;
  }

  // retorna nó desenfileirado
  return temp;
}

int main() {
  Queue *fila = init_queue();
  char cidade[27];

  // enquanto nao é EOF
  while (scanf("%s", cidade) != EOF) {
    // enfileira essa cidade
    enqueue(fila, cidade);
  }

  // verifica se houveram entradas
  if (fila->head == NULL) {
    free(fila);
    return 0;
  }

  // primeiro show sempre é o primeiro retornado
  Node *ultimoShow = dequeue(fila);
  printf("%s\n", ultimoShow->cidade);
  char ultimoShowCidade[27];
  strcpy(ultimoShowCidade, ultimoShow->cidade);
  free(ultimoShow);

  while (fila->head != NULL) {
    char lastchar = tolower(ultimoShowCidade[strlen(ultimoShowCidade) - 1]);
    char firstchar = tolower(fila->head->cidade[0]);

    // se for igual precisamos mover pro fim
    if (lastchar == firstchar) {
      Node *cidadeParaMover = dequeue(fila);
      enqueue(fila, cidadeParaMover->cidade);
      free(cidadeParaMover);
    }

    Node *proximoShow = dequeue(fila);
    if (proximoShow != NULL) {
      printf("%s\n", proximoShow->cidade);
      strcpy(ultimoShowCidade, proximoShow->cidade);
      free(proximoShow);
    }
  }
  // libera fila
  free(fila);

  return 0;
}