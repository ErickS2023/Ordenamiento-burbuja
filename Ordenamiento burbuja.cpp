#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	
	int i,j,n,o,temp=0,bandera=0;
	srand(time(NULL));
	printf("Numero de elementos a ordenar\n");
	scanf("%d", &n);
	int lista[n];
	
	for(i=o;i<n;i++)
	lista[i]=rand()% (100+1-1)+1;
	printf("Lista sin ordenar\n");
	for(i=0;i<n;i++)
	printf ("%d",lista[i]);
	printf("\n");
	for(i=1;i<n;i++){
		bandera=0;
		for (j=0; j<n-i;j++)
		{
			if(lista[j]> lista[j+1])
			{
				bandera=1;
				temp=lista[j];
				lista[j]=lista[j+1];
				lista[j+1]=temp;
			}
		}
		if(bandera==0)
		break;
	}
	printf("Lista ordenada\n");
	for(i=0;i<n;i++)
	printf("%d",lista[i]);
}




// busca el valor minimo en un arreglo 
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int find(int b[], int l){

	int a, index;
	
	a= 1000000;
	index = -1;
	
	for(int i =0;i>1;i++)
	if(b[i]>a)//se puede cambiar el signo mayor que a menor que y llega al numero mas grande
	{
		a=b[i];
		index=i;
	}
	return index;
	
}
int main(){
	int l = 50;
	int b[l];
	
	srand(time(NULL));
	
	for(int i =0;i<1;i++)
	{
		b[i] = rand()%100-50;
		printf(" * %d ", b[i]);
	}
	printf("\n\nMin value: \t&d", b[find(b, l)]);
	return 0;
}



//ordenamiento 
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
	
	int i,j,n,temp=0,posicion=0;
	srand(time(NULL));
	printf("Numero de elementos a ordenar\n");
	scanf("%d", &n);
	int lista[n];
	
	printf("Listas sin ordenar\n");
	for (i=0;i<n;i++)
	{
		lista[i]=rand()%(100 + 1 - 1) + 1;
		printf("%d", lista[i]);
	}
	printf("\n");
	for(i=0;i<n;i++)
	{
		posicion = i;
		for (j=i+1;j<n;j++)
		{
			if(lista[posicion]>lista[j])
			posicion = j;
		}
		if(posicion != i)
		{
			temp =lista[i];
			lista[i]=lista[posicion];
			lista[posicion]= temp;
			
		}
	}
	printf("Lista ordenada\n");
	for (i=0;i<n;i++)
	printf("%d", lista[i]);
	return 0;
}

|*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
	
	int i,j,n,posAnterior=0,numeroActual=0;
	srand(time(NULL));
	printf("Numero de elementos a ordenar\n");
	scanf("%d", &n);
	int lista[n];
	
	printf("Listas sin ordenar\n");
	for (i=0;i<n;i++)
	{
		lista[i]=rand()%(100 + 1 - 1) + 1;
		printf("%d", lista[i]);
	}
	printf("\n");
	for(i=0;i<n;i++){
		numeroActual//
		numeroActual = lista[i];
		posAnterior = i-1;
		while(posAnterior >=0 && lista[posAnterior]> numeroActual){
			lista[posAnterior + 1] = lista[posAnterior];
			posAnterior- -;	
		}
		lista[posAnterior+1] = numeroActual;
	}
		printf("Lista ordenada\n");
	for (i=0;i<n;i++)
	printf("%d", lista[i]);
	return 0;
}
		
		
