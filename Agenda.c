//Encerrado Roque Julio Cesar
/*
Programa que realiza una agenda de un alumno almacenando en estructuras
*/

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<windows.h>
#include<conio.h>
#include<string.h>


struct datos_alumno
{
    char nombre[40], sexo[15], fech_naci[50], domicilio[30], fracc_colon[30], cp[6], ciudad[25], telefono[20], mail[20], notas[80];
}pers;

struct datos_academicos
{
    char codigo[15], carrera[15], escuela[50], ciclo_ing[10], ciclo_act[10], materias_act[100], promedio[5], creditos[10], correo_esc[25], observa[80];
}escol[10];

int cont=0; //variable que llevara el control del número de elementos capturados.

void cap_dat_esco()
{

if(cont<10) //antes de capturar los datos primero se verifica si cont es menor a 5
{ //ya que solo puede almacenar 5 elementos como máximo.

printf("\n***********************************************");
printf("\nIngrese datos escolares:");
printf("\n***********************************************");
printf("\n+++++++++++++++++++++++++++++++++++++++++++++++");
fflush(stdin);
printf("\nCodigo:  ");
scanf("%s",&escol[cont].codigo);
printf("+++++++++++++++++++++++++++++++++++++++++++++++");
fflush(stdin);
printf("\nCarrera:  ");
scanf("%s",&escol[cont].carrera);
printf("+++++++++++++++++++++++++++++++++++++++++++++++");
fflush(stdin);
printf("\nEscuela:  ");
scanf("%s",&escol[cont].escuela);
printf("+++++++++++++++++++++++++++++++++++++++++++++++");
fflush(stdin);
printf("\nCiclo de ingreso:  ");
scanf("%s",&escol[cont].ciclo_ing);
printf("+++++++++++++++++++++++++++++++++++++++++++++++");
fflush(stdin);
printf("\nCiclo actual:  ");
scanf("%s",&escol[cont].ciclo_act);
printf("+++++++++++++++++++++++++++++++++++++++++++++++");
fflush(stdin);
printf("\nMaterias actuales:  ");
scanf("%s",&escol[cont].materias_act);
printf("+++++++++++++++++++++++++++++++++++++++++++++++");
fflush(stdin);
printf("\nPromedio:  ");
scanf("%s",&escol[cont].promedio);
printf("+++++++++++++++++++++++++++++++++++++++++++++++");
fflush(stdin);
printf("\nCréditos:  ");
scanf("%s",&escol[cont].creditos);
printf("+++++++++++++++++++++++++++++++++++++++++++++++");
fflush(stdin);
printf("\nCorreo escolar:  ");
scanf("%s",&escol[cont].correo_esc);
printf("+++++++++++++++++++++++++++++++++++++++++++++++");
fflush(stdin);
printf("\nObservaciones:  ");
scanf("%s",&escol[cont].observa);
printf("+++++++++++++++++++++++++++++++++++++++++++++++");
}
else // cuando cont tome el valor de 5, entonces se mostrará el mensaje .
{
printf("\n NO HAY ESPACIO DISPONIBLE....");
}

}

void cap_dat_pers()
{
printf("\n***********************************************");
printf("\nIngrese datos personales:");
printf("\n***********************************************");
printf("\n+++++++++++++++++++++++++++++++++++++++++++++++");
fflush(stdin);
printf("\nNombre:  ");
scanf("%s",&pers.nombre);
printf("+++++++++++++++++++++++++++++++++++++++++++++++");
fflush(stdin);
printf("\nSexo:  ");
scanf("%s",&pers.sexo);
printf("+++++++++++++++++++++++++++++++++++++++++++++++");
fflush(stdin);
printf("\nFecha de nacimiento:  ");
scanf("%s",&pers.fech_naci);
printf("+++++++++++++++++++++++++++++++++++++++++++++++");
fflush(stdin);
printf("\nDomicilio:  ");
scanf("%s",&pers.domicilio);
printf("+++++++++++++++++++++++++++++++++++++++++++++++");
fflush(stdin);
printf("\nFraccionamiento o colonia:  ");
scanf("%s",&pers.fracc_colon);
printf("+++++++++++++++++++++++++++++++++++++++++++++++");
fflush(stdin);
printf("\nCódigo postal:  ");
scanf("%s",&pers.cp);
printf("+++++++++++++++++++++++++++++++++++++++++++++++");
fflush(stdin);
printf("\nCiudad:  ");
scanf("%s",&pers.ciudad);
printf("+++++++++++++++++++++++++++++++++++++++++++++++");
fflush(stdin);
printf("\nTeléfono:  ");
scanf("%s",&pers.telefono);
printf("+++++++++++++++++++++++++++++++++++++++++++++++");
fflush(stdin);
printf("\nCorreo:  ");
scanf("%s",&pers.mail);
printf("+++++++++++++++++++++++++++++++++++++++++++++++");
fflush(stdin);
printf("\nNotas:  ");
scanf("%s",&pers.notas);
printf("+++++++++++++++++++++++++++++++++++++++++++++++");

}

void most_dat_esco()
{
        setlocale(LC_ALL, "");
if(cont!=0) //antes de mostrar los elementos primero se verifica si existen datos
for (int i=0;i<cont;i++) // puesto que los datos se imprimirán una o varias
{
    printf("\n***********************************************");
    printf("\nDatos escolares del alumno");
    printf("\n***********************************************");
    printf("\n-----------------------------------------------");
    printf("\nCódigo: %s", escol[cont].codigo);
    printf("\nCarrera: %s", escol[cont].carrera);
    printf("\nEscuela: %s", escol[cont].escuela);
    printf("\nCiclo de ingreso: %s", escol[cont].ciclo_ing);
    printf("\nCiclo actual: %s", escol[cont].ciclo_act);
    printf("\nMaterias actuales: %s", escol[cont].materias_act);
    printf("\nPromedio: %s", escol[cont].promedio);
    printf("\nCréditos: %s", escol[cont].creditos);
    printf("\nCorreo escolar: %s", escol[cont].correo_esc);
    printf("\nObservaciones: %s", escol[cont].observa);
    printf("\n-----------------------------------------------\n");
    }
else // en caso que cont sea igual que cero entonces debe mostrarse el mensaje
{
printf("\n EL ARREGLO ESTA VACÍO.....");
}
}

void most_dat_pers()
{
    printf("\n***********************************************");
    printf("\nDatos personales del alumno");
    printf("\n***********************************************");
    printf("\n-----------------------------------------------");
    printf("\nNombre: %s", pers.nombre);
    printf("\nSexo: %s", pers.sexo);
    printf("\nFecha de nacimiento: %s", pers.fech_naci);
    printf("\nDomicilio: %s", pers.domicilio);
    printf("\nFraccionamiento o Colonia: %s", pers.fracc_colon);
    printf("\nCódigo Postal: %s", pers.cp);
    printf("\nCiudad: %s", pers.ciudad);
    printf("\nTeléfono: %s", pers.telefono);
    printf("\nCorreo: %s", pers.mail);
    printf("\nNotas: %s", pers.notas);
    printf("\n-----------------------------------------------\n");
}


int main()
{
    system("color F8");//Fondo gris y texto blanco brillante
    setlocale(LC_ALL, "");
    int nip, opc0, opc1, resp, x=1, i=1; //se incrementa el contador;
        for(i=1; i<=5; i=i+1)
{
    printf("\nCargando sistema...");
    Sleep(600);
    system("cls");
}
    printf("\n+++++++++++++++++++++++++++++++++++++++++++++++");
    printf("\nAGENDA ALUMNO");
    printf("\n+++++++++++++++++++++++++++++++++++++++++++++++");
    printf("\nEscriba su nip: ");
    scanf("%d", &nip);
    printf("+++++++++++++++++++++++++++++++++++++++++++++++\n");
    sleep(2);
    system("cls");
if(nip==123)
{
sleep(2);
printf("+++++++++++++++++++++++++++++++++++++++++++++++");
printf("\nLa contraseña es correcta");
printf("\n+++++++++++++++++++++++++++++++++++++++++++++++\n");
sleep(2);
system("cls");
}

else
{
system("cls");
Sleep(400);
printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
printf("\n¡¡¡¡¡Nip incorrecto!!!!!... intento [%d]", x);
printf("\n-----------------------------------------------");
printf("\n+++++++++++++++++++++++++++++++++++++++++++++++");
printf("\nIngrese su nip nuevamente: ");
scanf("%d", &nip);
printf("+++++++++++++++++++++++++++++++++++++++++++++++");
Sleep(400);
x++;
if(nip==123)
{
sleep(2);
printf("\n+++++++++++++++++++++++++++++++++++++++++++++++");
printf("\nLa contraseña es correcta");
printf("\n+++++++++++++++++++++++++++++++++++++++++++++++");
Sleep(400);

system("cls");
}
else
{
system("cls");
sleep(1);
printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
printf("\n¡¡¡¡¡Nip incorrecto!!!!!... intento [%d]", x);
printf("\n-----------------------------------------------");
printf("\n+++++++++++++++++++++++++++++++++++++++++++++++");
printf("\nIngrese su nip nuevamente: ");
scanf("%d", &nip);
printf("+++++++++++++++++++++++++++++++++++++++++++++++");
Sleep(400);
x++;
if(nip==123)
{
Sleep(400);
printf("\n+++++++++++++++++++++++++++++++++++++++++++++++");
printf("\nLa contraseña es correcta");
printf("\n+++++++++++++++++++++++++++++++++++++++++++++++");
Sleep(400);
system("cls");
}
else
{
system("cls");
Sleep(400);
printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
printf("\n¡¡¡¡¡Nip incorrecto!!!!!... intento [%d]", x);
printf("\n-----------------------------------------------");
printf("\n+++++++++++++++++++++++++++++++++++++++++++++++");
printf("\nIngrese su nip nuevamente: ");
scanf("%d", &nip);
printf("+++++++++++++++++++++++++++++++++++++++++++++++");
x++;
Sleep(400);
//system("cls");
}
}
}
system("cls");


while(nip==123)
{
        for(x=1; x<=5; x=x+1)
{
    printf("\nCargando sistema...");
    Sleep(600);
    system("cls");
}

printf("\t*      AGENDA ALUMNO    *");
printf("\n\t*-----------------------*");
printf("\n\t|");printf(" Información del alumno");printf("|");
printf("\n\t*-----------------------*");
printf("\n\t|Personal  "); printf("  |Escolar   |");
printf("\n\t*¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨*");
printf("\n\t|Nombre    "); printf("  |Carrera   |");
printf("\n\t*¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨*");
printf("\n\t|...       "); printf("  |...       |");
printf("\n\t*¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨*");
printf("\n\t|...       "); printf("  |...       |");
printf("\n\t*¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨*");
printf("\n\t|...       "); printf("  |...       |");
printf("\n\t*¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨*");
printf("\n\t\t Version 1.1");
printf("\n\t Autor: Encerrado Roque Julio Cesar");
    sleep(3);
    system("cls");

    for(x=1; x<=5; x=x+1)
{
    printf("\nCargando sistema...");
    Sleep(500);
    system("cls");
}
Sleep(400);
do{
printf("\n***********************************************");
printf("\n\tAGENDA ALUMNO");
printf("\n***********************************************");
printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
printf("\n1.-Capturar");
printf("\n2.-Mostrar");
printf("\n3.-Buscar");
printf("\n4.-Salir");
printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
printf("\n+++++++++++++++++++++++++++++++++++++++++++++++");
fflush(stdin);
printf("\nElija una opción: ");
scanf("%d", &opc0);
printf("+++++++++++++++++++++++++++++++++++++++++++++++");
Sleep(400);
system("cls");
Sleep(400);

switch(opc0)
{
    case 1:
        {
            cap_dat_pers();
            sleep(2);
            system("cls");
            cap_dat_esco();
            sleep(2);
            system("cls");
        }break;
    case 2:
        {
            most_dat_pers();
            //getch();
            sleep(4);
            //system("cls");
            most_dat_esco();
            getch();
            system("cls");

        }break;
    case 3:
        {
            sleep(2);
            system("cls");
        }break;
}



system("cls");
Sleep(400);
printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
printf("\nPresione 1 para regresar al menu principal");
printf("\nPresione 2 para salir del sistema");
printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
printf("\n+++++++++++++++++++++++++++++++++++++++++++++++");
printf("\nElija una respuesta: ");
scanf("%d", &resp);
printf("+++++++++++++++++++++++++++++++++++++++++++++++");
Sleep(400);

system("cls");
 }while(resp==1);
 system("cls");
nip++;
}
sleep(1);
for(x=1; x<=5; x=x+1)
{

printf("\nSaliendo sistema...");
    Sleep(400);
    system("cls");
}
printf("\n***********************************************");
printf("\nHa finalizado el sistema (Presione <ENTER>)...");
getch();
printf("\n***********************************************\n\n\n\n\n");
sleep(2);
return 0;
}
