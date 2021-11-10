/*
 * Exemplo de declaração e iniciação
 * Cortesia Jean
 *
 * */
#include <stdio.h>
#include <stdlib.h>
int main(){
  typedef struct{
    int id;
    char* name;
  }employee;

  employee emp = {
    .id = 0,
    .name = "none"
  };

  struct s {
    int i;
    int j;
  };

  struct s s_instance = { 10 ,20 };

  printf("%s\n", emp.name);
  printf("%d\n", s_instance.j);
  return 0;
}
