#pragma once
#ifndef POINT_H
#define POINT_H

#include "GeomVector.h"
#include <vector>

class Point {
private:
    GeomVector position;
    GeomVector speed_y{ 0.0f, 0.1f };
    GeomVector speed_x{ 0.1f, 0.0f };
    std::vector<GeomVector> trace;

public:
    void Up();
    void Down();
    void Left();
    void Right();

    void updateTrace();
    void clearTraceAFK();

    void drawPointandTrace();

};

#endif