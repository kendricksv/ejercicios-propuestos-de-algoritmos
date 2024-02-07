#include <stdio.h>
#include <math.h>

/*escribe un programa que solicite al usuario un angulo en grados y luego muestre los valores del seno, coseno y tangente de ese angulo*/

int main(){
    double angulo;
    printf("introducir angulo: ");
    scanf("%if",&angulo);

  //se convierte el angulo a radianes ya que las funciones trigonometricas en c trabajan con radianes//
    double anguloradianes = angulo*
    M_PI/180.0;

    double seno = sin(anguloradianes);
    double coseno = cos(anguloradianes);
    double tangente = tan(anguloradianes);

    printf("seno:%.3if\n", seno);
    printf("coseno:%.3if\n", coseno);
    printf("tangente:%.3if\n", tangente);

    return 0;
    }




