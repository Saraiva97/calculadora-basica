#include <stdio.h>
#include <stdlib.h>


main(void){

int nm1, nm2, opc;

printf("\n\tdigite 1 para somar \n\t");
printf("digite 2 para subtrair \n\t");
printf("digite 3 para multiplicar \n\t");
printf("digite 4 para dividir \n\t");

scanf("\t %i",&opc);

printf("\t digite o primeiro numero: \n");
scanf(" \t %i",&nm1);

printf("\t digite o segundo numero: \n");
scanf("\t %i",&nm2);

if  (opc==1){  nm1=nm1+nm2;

  printf("\t sua soma e:%i",nm1);

}

if (opc==2){ nm1=nm1-nm2;

  printf("\t sua subtracao e:%i",nm1);

}
if (opc==3){ nm1=nm1*nm2;

  printf("\t sua multiplicacao e:%i",nm1);

}

if (opc==4){ nm1=nm1/nm2;

  printf("\t sua divisao e:%i",nm1);
}


return 0;

}
