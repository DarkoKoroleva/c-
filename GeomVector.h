
#ifndef GEOMVECTOR_H
#define GEOMVECTOR_H
#include <GLFW/glfw3.h>

class GeomVector {
public:
    float x, y;
    GeomVector(float x_init = 0.0, float y_init = 0.0) : x{ x_init }, y{ y_init } {}

    GeomVector& operator+=(const GeomVector& v);
    GeomVector& operator-=(const GeomVector& v);

    void drawPoint() const;
};

#endif
