#include <stdio.h>
int main(){
	int op = 0;
	char contenido[100];
	FILE *a;
	FILE *b;
	FILE *c;
	FILE *d;
	FILE *e;
	FILE *f;
	FILE *g;
	FILE *h;
	do {
		
        printf("\tSerie de Bowen\n\n");
	    printf("Elegir el Mineral deseado\n");
	    printf("1) OLIVINO\n");
	    printf("2) PIROXENO\n");
	    printf("3) ANFIBOL\n");
	    printf("4) BIOTITA\n");
	    printf("5) FELDESPATO(POTASICO)\n");
	    printf("6) MUSCOVITA\n");
	    printf("7) PLAGIOCLASA\n");
	    printf("8) CUARZO\n");
	    printf("9) Salir\n");
	    scanf("%d",&op);
	    switch(op) {
	    	default:
			printf("Opcion no valida.\n");
			break;
		    case 1:
		    	a=fopen("olivino.txt","r");
		    	while(fscanf(a," %[^\n]",&contenido)!=EOF){
		    		printf("%s\n",contenido);
		    	}
		    	fclose(a);
		    	break;
		    case 2:
		    	b=fopen("piroxeno.txt","r");
		    	while(fscanf(b," %[^\n]",&contenido)!=EOF){
		    		printf("%s\n",contenido);
		    	}
		    	fclose(b);
		    	break;
		    case 3:
		    	c=fopen("anfibol.txt","r");
		    	while(fscanf(c," %[^\n]",&contenido)!=EOF){
		    		printf("%s\n",contenido);
		    	}
		    	fclose(c);
		        break;
		    case 4:
		    	d=fopen("biotita.txt","r");
		    	while(fscanf(d," %[^\n]",&contenido)!=EOF){
		    		printf("%s\n",contenido);
		    	}
		    	fclose(d);
		        break;
		    case 5:
		    	e=fopen("feldespato.txt","r");
		    	while(fscanf(e," %[^\n]",&contenido)!=EOF){
		    		printf("%s\n",contenido);
		    	}
		    	fclose(e);
		        break;
		    case 6:
		    	f=fopen("muscobita.txt","r");
		    	while(fscanf(f," %[^\n]",&contenido)!=EOF){
		    		printf("%s\n",contenido);
		    	}
		    	fclose(f);
		        break;
		    case 7:
		    	g=fopen("plagioclasa.txt","r");
		    	while(fscanf(g," %[^\n]",&contenido)!=EOF){
		    		printf("%s\n",contenido);
		    	}
		    	fclose(g);
		        break;
		    case 8:
		    	h=fopen("cuarzo.txt","r");
		    	while(fscanf(h," %[^\n]",&contenido)!=EOF){
		    		printf("%s\n",contenido);
		    	}
		    	fclose(h);
		        break;
		}
	} while (op != 9);
	return 0;
}



	
		
	
	
