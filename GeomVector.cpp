#include "GeomVector.h"

GeomVector& GeomVector::operator+=(const GeomVector& v) {
    x += v.x;
    y += v.y;
    return *this;
}

GeomVector& GeomVector::operator-=(const GeomVector& v) {
    x -= v.x;
    y -= v.y;
    return *this;
}

void GeomVector::drawPoint() const {
    glPointSize(6);
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POINTS);//отрисовка точки
    glVertex2f(x, y);
    glEnd();
}
