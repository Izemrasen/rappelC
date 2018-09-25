#include <stdlib.h>
#include <stdio.h>

void saisir(int l, int c, int tab[][c]){
	int i, j;
	for(i = 0; i < c; i++){
		for(j = 0; j < l; j++){
			printf("Saisir la case %d - %d : ", i, j);
			scanf("%d", &tab[i][j]);
		}
	}
}

void saisirp(int l, int c, int * ptab){
	int i, j;
	for(i = 0; i < c; i++){
                for(j = 0; j < l; j++){
			printf("Saisir la case %d - %d : ", i, j);
			scanf("%d", ptab++);		
		}
	}
}

void afficher(int l, int c, int ** tab){
	int i, j; 
	for(i = 0; i < c; i++){
                for(j = 0; j < l; j++){
                        printf("%d", tab[i][j]);
                }
		printf("\n");
        }
}

/*void afficher2(int c, int * M[c]){
	int i;
	for(i = 0; i < l; i++){
		for(j = 0; j < c; j++){
			printf("%d ", M[]);
		}
	}
}*/

void saisir2(int l, int c, int ** M){
	int i, j;
	for(i = 0; i < l; i++){
                for(j = 0; j < c; j++){
			scanf("%d", &M[i][j]);
		}
	}
}

void saisir2p(int l, int c, int ** M){
	int i, j;
	for(i = 0; i < l; i++){
                for(j = 0; j < c; j++){
			
		}
        }
}

int main(){
	int l = 2;
	int c = 2;
	int i;
	int ** M;
	M = malloc(l*sizeof(*M));
	for(i = 0; i < l; i++){
		M[i] = malloc(c*sizeof(**M));
	}
	saisir2(l,c,M);
	afficher(l,c,M);
}
