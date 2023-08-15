#include <stdio.h>
#include<locale.h>
#include <wchar.h>
#include <stdlib.h>

int main (int argc,char **argv){
	
	
setlocale(LC_ALL, "");


printf("Las generaciones de computadoras son categorías históricas utilizadas para clasificar el desarrollo y el avance de la tecnología en el campo de la informática. Comúnmente se clasifican en cinco generaciones, aunque algunos expertos pueden haber agregado generaciones adicionales o cambiado las clasificaciones.\t");
printf("\n");
printf("\n");

printf("\x1B[31mPrimera generación (1946-1955)\033[0m\t\t\n");
printf("Se desarrollaron las primeras computadoras, estas se caracterizaban por lo siguiente:\n");
printf("\n");
printf("\033[3;47;35mValvulas de vacío:\033[0m");
printf(" Se las usaban para realizar operaciones lógicas y de procesamiento de datos.\n");
printf("\033[3;47;35mTamaño y consumo de energía:\033[0m");
printf(" Ocupaban habitaciones enteras y requerían un enfriamiento eficiente.\n");
printf("\033[3;47;35mProgramación manual:\033[0m");
printf(" Se conectaban y configurando interruptores y conexiones.\n");
printf("\033[3;47;35mVelocidad y capacidad limitadas:\033[0m");
printf(" Eran muy lentas.\n");
printf("\n");
printf("\n");

    printf("\x1B[32mSegunda generación (1956-1963)\033[0m\t\t\n");
	printf("Las máquinas se volvieron más eficientes, más pequeñas y más confiables. Las características de esta generación:\n");
	printf("\n");
	printf("\033[3;47;35mTransistores:\033[0m");
	printf(" Estos eran mucho mas pequeños, usaban menos energía, generaban menos calor y eran más confiables.\n");
	printf("\033[3;47;35mTamaño reducido:\033[0m");
	printf(" Eran mucho más pequeÃ±as que las computadoras de primera generación.\n");
	printf("\033[3;47;35mLenguajes de programación:\033[0m");
	printf(" Surgieron lenguajes de programación de alto nivel, como COBOL y FORTRAN.\n");
	printf("\033[3;47;35mMemorias magnéticas:\033[0m");
	printf(" Permitían un acceso más rápido y una mayor capacidad de almacenamiento.\n");
	printf("\n");
	printf("\n");
printf("\x1B[33mTercera generación (1964-1971)\033[0m\t\t\n");
printf("Mejoro el rendimiento, la capacidad y la versatilidad de las computadoras. Las características principales son:\n");
printf("\n");
printf("\033[3;47;35mCircuitos Integrados (Chips):\033[0m");
printf(" Permitieron combinar múltiples componentes electrónicos en un solo chip \n");
printf("\033[3;47;35mMinicomputadoras:\033[0m");
printf(" Estas máquinas eran menos costosas y más pequeñas.\n");
printf("\033[3;47;35mSistemas Operativos Avanzados:\033[0m");
printf(" Facilitá la programación en lenguajes de alto nivel.\n");
printf("\033[3;47;35mLenguajes de Programación Avanzados:\033[0m");
printf(" Hubo mejoras en la facilidad de uso y la eficiencia.\n");
printf("\033[3;47;35mAlmacenamiento en Disco: :\033[0m");
printf(" Permitiá un acceso más rápido a los datos y una mayor capacidad de almacenamiento.\n");
printf("\n");
printf("\n");

printf("\x1B[34mCuarta generación (1972-1980)\033[0m\t\t\n");
printf("Las computadoras ahora eran accesibles para el público y aumento la integración y accesibilidad en la informática. Se caracteriza por:\n");
printf("\n");
printf("\033[3;47;35mMicroprocesadores:\033[0m");
printf(" Son chips que contienen una unidad central de procesamiento completa en un solo circuito integrado. \n");
printf("\033[3;47;35mComputadoras Personales (PCs):\033[0m");
printf(" Ahora había computadoras en los hogares y las pequeñ±as empresas.\n");
printf("\033[3;47;35mMemoria RAM Mejorada:\033[0m");
printf(" Permitiá un acceso más rápido a los datos y una mejora en el rendimiento general del sistema.\n");
printf("\033[3;47;35mInterfaces Gráficas de Usuario (GUI):\033[0m");
printf(" Hicieron que la interacción con las computadoras fuera más intuitiva y accesible para un público más amplio.\n");
printf("\033[3;47;35mRedes de Computadoras:\033[0m");
printf(" Permitiá la comunicación y el intercambio de información entre diferentes sistemas.\n");
printf("\n");
printf("\n");

    printf("\x1B[35mQuinta generación (1980-presente)\033[0m\t\t\n");
    printf("Se centra en aspectos avanzados y en desarrollos disruptivo. Los principales son:\n");
    printf("\n");
    printf("\033[3;47;35mInteligencia Artificial (IA):\033[0m");
    printf(" Permitiendo a las máquinas realizar tareas que anteriormente requerían la inteligencia humana.\n");
    printf("\033[3;47;35mComputación Cuántica:\033[0m");
    printf(" Utiliza los principios de la mecánica cuÃ¡ntica para realizar cálculos mucho más rápido. \n");
    printf("\033[3;47;35mConectividad y Nube:\033[0m");
    printf(" Esto permite el acceso a recursos y datos desde cualquier lugar y fomenta la colaboración en línea.\n");
    printf("\033[3;47;35mDispositivos Móviles y Tecnología Portátil:\033[0m");
    printf(" Los avances en la potencia de procesamiento, la duraciÃ³n de la batería y la miniaturización provoco la creación de tecnología portátil.\n");
    printf("\033[3;47;35mInterfaz Natural:\033[0m");
    printf(" Las interfaces de usuario son más naturales y accesibles. \n");
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
