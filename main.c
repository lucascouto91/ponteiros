#include <stdio.h>
#include <stdlib.h>

int main(void) {
  
  int a;
  char b[10];
  
  printf("Endereço da variável a: %p\n", &a);
  printf("Endereço da variável b: %p\n", &b);
  
  printf("Hello World\n");
  
  int *pointerInt; //ponteiro para inteiro
  
  int c = 10;
  
  pointerInt= &c;
  
  printf("Endereço da variável c: \n= %p\n", &c);
  
  printf("Endereço guardado em pointerInt:\n= %p\n", pointerInt);

  printf("Endereço 2 guardado em pointerInt:\n= %p\n", &pointerInt);
  
  printf("Valor armazenado na variável apontada por pointerInt:\n= %d\n", *pointerInt);
  
  
  int*p = (int *)malloc(sizeof(int));
  
  *p = 550;
  
  printf("%i \n\n\n", *p);
  
  int num, i, *ptr, sum = 0;

  printf("Entre com a quantidade de elementos:");
  scanf("%d", &num);

  ptr = (int*) malloc(num * sizeof(int));
  
  if(ptr == NULL){
    printf("Erro!! Houve um erro na alocacao de memoria.");
    exit(0);
  }

  printf("Digite os elementos do vetor:");
  for(i=0; i<num; ++i){
    scanf("%d", ptr +i);
    sum += *(ptr + i);
  }

  printf("Soma = %d \n\n", sum);

  free(ptr);

  int x, y, *e;

  y=0;
  e=&y;
  x=*e;
  x=4;
  (*e)++;
  --x;
  (*e) += x;

  printf("x = %d\n",x);
  printf("y = %d\n",y);

  int vetor[]={1997,2007,2017};
  int *ano;

  ano= &vetor[0];
  ano++;
  
  printf("Valor: %d\n", *ano);
  (*ano)++;
  printf("Valor: %d\n", *ano);
  

  return 0;
}
