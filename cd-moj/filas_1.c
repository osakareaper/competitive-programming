// Link to problem:
// https://moj.naquadah.com.br/cgi-bin/questao.sh/moj-problems%23fila-enfileira-vetor

// Implementação de inserção em fila (de vetores) não circular

#include <stdlib.h>

typedef struct fila {
  int *dados;
  int N, p, u;
} fila;

int enfileira(fila *f, int x) {
  // se fila estiver cheia
  // traseira == tamanho
  if (f->u == f->N) {
    int novo_N = 2 * f->N;
    int *novo_dados = malloc(novo_N * sizeof(int));
    if (!novo_dados)
      return 0; // alocacao falhou

    for (int i = 0; i < f->u; i++) {
      novo_dados[i] = f->dados[i];
    }
    free(f->dados);
    f->dados = novo_dados;
    f->N = novo_N;
  }
  // aloca na traseira
  f->dados[f->u] = x;
  // incrementa traseira
  f->u++;

  return 1;
}