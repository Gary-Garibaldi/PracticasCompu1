#ifndef PUNTO_PUNTO_H
#define PUNTO_PUNTO_H
#include <math.h>

class Punto2D {
public:
    void SetPosicion(float temp1, float temp2);
    void Trasladar(float temp1, float temp2);
    void RotarRespectoAlOrigen(float temp1);
    void Escalar(float temp1, float temp2);
    float GetX();
    float GetY();
private:
    float x, y;
};


#endif //PUNTO_PUNTO_H
