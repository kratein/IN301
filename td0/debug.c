#include <stdio.h>
#include <stdlib.h>
#include <time.h>


//fonction factorielle
int factorielle (int n)
{
	int f;
	if (n <= 1)
		f = 1;
	else
		f = n * factorielle(--n);
	return f;
}

//fonction somme
int somme(int x){
  int res = 0;
  int i;
  for (i=1;i<=x;i++)
  {
	res +=i;
  }
  return res;
}

//fonction maximum
int maximum(int x, int y){
  if(y >= x)
    return y;
  else 
    return x;
}

//fonction principale
int main(){
  int a, b;

  srand(time(NULL));
  a = rand() % 8 + 2;
  b = factorielle(a);
  printf("\nFactorielle de %d vaut %d\n\n", a, b);
  
  a = rand() % 100;
  b = somme(a);
  printf("\nLa somme des entiers de 1 a %d vaut %d\n\n", a, b);

  a = rand() % 100;
  b = rand() % 100;
  printf("\nLe maximum entre %d et %d vaut %d\n\n", a, b, maximum(a,b));
  
  return 0;
}
