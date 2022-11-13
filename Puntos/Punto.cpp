#include "Punto.h"
#include <math.h>

void Punto2D::Trasladar(float temp1, float temp2) {
    x=x+temp1;
    y=y+temp2;
}

void Punto2D::SetPosicion(float temp1, float temp2) {
    x=temp1;
    y=temp2;
}

float Punto2D::GetY() {
    return y;
}

float Punto2D::GetX() {
    return x;
}

void Punto2D::RotarRespectoAlOrigen(float temp1) {
    float rotar;
    rotar=x;
    x=((x)* cos(temp1*M_PI/180)-((y)*(sin(temp1*M_PI/180))));
    y=((rotar)* sin(temp1*M_PI/180)+((y)*(cos(temp1*M_PI/180))));
}

void Punto2D::Escalar(float temp1, float temp2) {
    x=x*temp1;
    y=y*temp2;
}
