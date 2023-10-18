include <stdio.h>
int main(){
  int lista[] = {20,10,5,2,1} ;
  int dintroducido,cambio,i;
  printf("Introduce un billete de 20,50,100,200 o 500: ");
  scanf("%d",&dintroducido);
for(i = 0 ; i < sizeof(lista)/sizeof(lista[0]); i++)
  {
   printf("Cambio: %d\n", dintroducido/lista[i]);
  }
  return 0;
}
