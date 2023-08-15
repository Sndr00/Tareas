#include <stdio.h>
#include<locale.h>
#include <wchar.h>
#include <stdlib.h>

int main (int argc,char **argv){
	
	
setlocale(LC_ALL, "");


printf("Las generaciones de computadoras son categorías históricas utilizadas para clasificar el desarrollo y el avance de la tecnología en el campo de la informÃ¡tica. ComÃºnmente se clasifican en cinco generaciones, aunque algunos expertos pueden haber agregado generaciones adicionales o cambiado las clasificaciones.\t");
printf("\n");
printf("\n");

printf("\x1B[31mPrimera generación (1946-1955)\033[0m\t\t\n");
printf("Se desarrollaron las primeras computadoras, estas se caracterizaban por lo siguiente:\n");
printf("\n");
printf("\033[3;47;35mValvulas de vacío:\033[0m");
printf("Se las usaban para realizar operaciones lÃ³gicas y de procesamiento de datos.\n");
printf("\033[3;47;35mTamaño y consumo de energía:\033[0m");
printf("Ocupaban habitaciones enteras y requerían un enfriamiento eficiente.\n");
printf("\033[3;47;35mProgramación manual:\033[0m");
printf("Se conectaban y configurando interruptores y conexiones.\n");
printf("\033[3;47;35mVelocidad y capacidad limitadas:\033[0m");
printf("Eran muy lentas.\n");
printf("\n");
printf("\n");

    printf("\x1B[32mSegunda generación (1956-1963)\033[0m\t\t\n");
	printf("Las mÃ¡quinas  se volvieron mÃ¡s eficientes, mÃ¡s pequeÃ±as y mÃ¡s confiables. Las caracterÃ­sticas de esta generaciÃ³n:\n");
	printf("\n");
	printf("Transistores: Estos eran mucho mas pequeÃ±os, usaban menos energía, generaban menos calor y eran mÃ¡s confiables.\n");
	printf("TamaÃ±o reducido: Eran mucho mÃ¡s pequeÃ±as que las computadoras de primera generaciÃ³n.\n");
	printf("Lenguajes de programaciÃ³n: Surgieron lenguajes de programaciÃ³n de alto nivel, como COBOL y FORTRAN.\n");
	printf("Memorias magnÃ©ticas: Permitían un acceso mÃ¡s rÃ¡pido y una mayor capacidad de almacenamiento.\n");
	printf("\n");
	printf("\n");
printf("\x1B[33mTercera generación (1964-1971)\033[0m\t\t\n");
printf("Mejoro el rendimiento, la capacidad y la versatilidad de las computadoras. Las caracterÃ­sticas principales son:\n");
printf("\n");
printf("Circuitos Integrados (Chips): Permitieron combinar mÃºltiples componentes electrÃ³nicos en un solo chip \n");
printf("Minicomputadoras: Estas mÃ¡quinas eran menos costosas y mÃ¡s pequeÃ±as.\n");
printf("Sistemas Operativos Avanzados: FacilitÃ³ la programaciÃ³n en lenguajes de alto nivel.\n");
printf("Lenguajes de ProgramaciÃ³n Avanzados: Hubo mejoras en la facilidad de uso y la eficiencia.\n");
printf("Almacenamiento en Disco: PermitiÃ³ un acceso mÃ¡s rÃ¡pido a los datos y una mayor capacidad de almacenamiento.\n");
printf("\n");
printf("\n");

printf("\x1B[34mCuarta generación (1972-1980)\033[0m\t\t\n");
printf("Las computadoras ahora eran accesibles para el pÃºblico y aumento la integraciÃ³n y accesibilidad en la informÃ¡tica. Se caracteriza por:\n");
printf("\n");
printf("Microprocesadores: Son chips que contienen una unidad central de procesamiento completa en un solo circuito integrado. \n");
printf("Computadoras Personales (PCs): Ahora habÃ­a computadoras en los hogares y las pequeÃ±as empresas.\n");
printf("Memoria RAM Mejorada: PermitiÃ³ un acceso mÃ¡s rÃ¡pido a los datos y una mejora en el rendimiento general del sistema.\n");
printf("Interfaces GrÃ¡ficas de Usuario (GUI): Hicieron que la interacciÃ³n con las computadoras fuera mÃ¡s intuitiva y accesible para un pÃºblico mÃ¡s amplio.\n");
printf("Redes de Computadoras: PermitiÃ³ la comunicaciÃ³n y el intercambio de informaciÃ³n entre diferentes sistemas.\n");
printf("\n");
printf("\n");

    printf("\x1B[35mQuinta generación (1980-presente)\033[0m\t\t\n");
    printf("Se centra en aspectos avanzados y en desarrollos disruptivo. Los principales son:\n");
    printf("\n");
    printf("Inteligencia Artificial (IA): Permitiendo a las mÃ¡quinas realizar tareas que anteriormente requerÃ­an la inteligencia humana.\n");
    printf("ComputaciÃ³n CuÃ¡ntica: Utiliza los principios de la mecÃ¡nica cuÃ¡ntica para realizar cÃ¡lculos mucho mÃ¡s rÃ¡pido. \n");
    printf("Conectividad y Nube: Esto permite el acceso a recursos y datos desde cualquier lugar y fomenta la colaboraciÃ³n en lÃ­nea.\n");
    printf("Dispositivos MÃ³viles y TecnologÃ­a PortÃ¡til: Los avances en la potencia de procesamiento, la duraciÃ³n de la baterÃ­a y la miniaturizaciÃ³n provoco la creaciÃ³n de tecnologÃ­a portÃ¡til.\n");
    printf("Interfaz Natural: Las interfaces de usuario son mÃ¡s naturales y accesibles. \n");
    printf("\n");
    
    /*Son colores
    
    printf("\x1B[31mTexting\033[0m\t\t");
    printf("\x1B[32mTexting\033[0m\t\t");
    printf("\x1B[33mTexting\033[0m\t\t");
    printf("\x1B[34mTexting\033[0m\t\t");
    printf("\x1B[35mTexting\033[0m\n");
    
    printf("\x1B[36mTexting\033[0m\t\t");
    printf("\x1B[36mTexting\033[0m\t\t");
    printf("\x1B[36mTexting\033[0m\t\t");
    printf("\x1B[37mTexting\033[0m\t\t");
    printf("\x1B[93mTexting\033[0m\n");
    
    printf("\033[3;42;30mTexting\033[0m\t\t");
    printf("\033[3;43;30mTexting\033[0m\t\t");
    printf("\033[3;44;30mTexting\033[0m\t\t");
    printf("\033[3;104;30mTexting\033[0m\t\t");
    printf("\033[3;100;30mTexting\033[0m\n");

    printf("\033[3;47;35mTexting\033[0m\t\t");
    printf("\033[2;47;35mTexting\033[0m\t\t");
    printf("\033[1;47;35mTexting\033[0m\t\t");
    printf("\t\t");
    printf("\n");
    */
    
	return 0;
}
