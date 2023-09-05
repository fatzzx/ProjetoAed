#include <stdio.h>
#ifndef FILA_H
#define FILA_H
#define MAX 100

typedef int tp_item;

typedef struct
{
  tp_item item[MAX];
  int inicio;
  int fim;
} tp_fila;

void inicializa_fila(tp_fila *f)
{
  f->inicio = f->fim = MAX - 1;
}

int fila_vazia(tp_fila f)
{
  if (f.inicio == f.fim)
    return 1;
  else
    return 0;
}

int proximo(int pos)
{
  if (pos == MAX - 1)
    return 0;
  else
    return ++pos;
}

int fila_cheia(tp_fila f)
{
  if (proximo(f.fim) == f.inicio)
    return 1;
  else
    return 0;
}

int insere_fila(tp_fila *f, tp_item e)
{
  if (fila_cheia(*f))
    return 0;
  f->fim = proximo(f->fim);
  f->item[f->fim] = e;
  return 1;
}

int remove_fila(tp_fila *f, tp_item *e)
{
  if (fila_vazia(*f))
    return 0;
  f->inicio = proximo(f->inicio);
  *e = f->item[f->inicio];
  return 1;
}

void imprime_fila(tp_fila f)
{
  tp_item e;
  while (!fila_vazia(f))
  {
    remove_fila(&f, &e);
    printf("%d ", e);
  }
  printf("\n");
}

int tamanho_fila(tp_fila f)
{
  int c = 0;
  tp_item e;
  while (!fila_vazia(f))
  {
    remove_fila(&f, &e);
    c++;
  }
  return c;
}

int tamanho_fila2(tp_fila f)
{
  if (fila_vazia(f))
    return 0;
  if (f.inicio < f.fim)
    return f.fim - f.inicio;
  return MAX - 1 - f.inicio + f.fim + 1;
}

#endif
