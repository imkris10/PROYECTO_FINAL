#include<stdio.h>
#include<stdlib.h>

struct info{
    char Equipo[20];
    int golesFavor;
    int golesContra;
    int victorias;
    int derrotas;
    char mejorJugador[20];
};

void recogida(const int cantidad);
void muestra(const int cantidad);
void ordenar(const int cantidad);

int main()
{
 int opcion,cantidad;
 do{
     printf ("LIGA DE FUTBOL\n");
     printf("[1] Registrar equipo\n");
     printf("[2] Mostrar equipos\n");
     printf("[3] Ordenar\n");
     printf("[4] Salir\n");
     printf("Selecciona una Opcion: ");
     scanf("%d",&opcion);
     switch(opcion){
         case 1:
         printf("Ingresa la cantidad de equipos:\n ");
         scanf("%d",&cantidad);
         recogida(cantidad);
         break;
         case 2:
         muestra(cantidad);
         break;
         case 3:
         ordenar(cantidad);
         break;
         case 4:
         system("cls");
         printf("\t\n Hasta luego");
         break;
 default:
 printf("OPCION INCORRECTA\n");
 }
     
 }while(opcion!=4);
 return 0;
}

void recogida(const int cantidad){
    FILE *archivo;
    struct info datos[cantidad];
    int i;
    for(i=0;i<cantidad;i++){
        system("cls");
        printf("\t Registro del equipo %d",i+1);
        fflush(stdin);
        printf("\n Nombre del equipo:");
        gets(datos[i].Equipo);
        printf("\n Victorias:");
        scanf("%d", &datos[i].victorias);
        printf("\n Derrotas: ");
        scanf("%d", &datos[i].derrotas);
        fflush(stdin);
        printf("\n Mejor Jugador: ");
        gets(datos[i].mejorJugador);
        printf("\n Goles a favor: ");
        scanf("%d", &datos[i].golesFavor);
        printf("\n Goles en contra: ");
        scanf("%d", &datos[i].golesContra);
        printf("\n");
    }
    archivo = fopen("futbol.txt", "w+");
    if (archivo)
    {	
    fwrite(datos, sizeof(struct info), cantidad, archivo);
    fclose(archivo);
    }
}

void muestra(const int cantidad){
    FILE *archivo;
    struct info datos[cantidad];
	archivo = fopen("futbol.txt", "r");
	if (archivo)
	{
	    fread(datos, sizeof(struct info), cantidad, archivo);
	    fclose(archivo);
    }
    int i;
    for ( i = 0; i < cantidad; i++)
	{
	    printf("\nEquipo %d",i+1);
	    printf("\n Nombre del equipo: %s",datos[i].Equipo);
	    printf("\n Victorias: %d",datos[i].victorias);
	    printf("\n Derrotas: %d",datos[i].derrotas);
	    printf("\n Mejor Jugador: %s",datos[i].mejorJugador);
	    printf("\n Goles a favor: %d",datos[i].golesFavor);
	    printf("\n Goles en contra: %d\n",datos[i].golesContra);
	    printf("\n");
	}
}

void ordenar(const int cantidad){
      FILE *archivo;
    struct info datos[cantidad];
	archivo = fopen("futbol.txt", "r");
	if (archivo)
	{
	    fread(datos, sizeof(struct info), cantidad, archivo);
	    fclose(archivo);
    }
    int elementos,minimo,menor,*puntero,auxiliar,i,j;
    puntero=(int *)malloc(cantidad *sizeof(int));
    printf("los equipos ordenados son \n");
    for(i=0;i<cantidad;i++){
    minimo=(puntero[i]=datos[i].victorias);
    menor=i;
    for(j=i;j<cantidad;j++)
    {			
        if(puntero[j]>minimo)
        {				
        minimo=puntero[j];
        menor=j;
        }	
        }	
        auxiliar=puntero[i];
        puntero[i]=puntero[menor];
        puntero[menor]=auxiliar;
        }
    
        for(i=0;i<cantidad;i++)
        {	
    printf("%i Lugar : \n",i-cantidad);
    printf("Numero de victorias: %d \n",puntero[i]);
    printf("Nombre del equipo: %s \n",datos[i].Equipo);
 	printf("\n");
    }
    system("PAUSE");
}


