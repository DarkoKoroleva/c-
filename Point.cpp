#include "Point.h"

const float border = 1.0;//�������

void Point::Up() {
    if (position.y < border) position += speed_y;
}

void Point::Down() {
    if (position.y > -border) position -= speed_y;
}

void Point::Left() {
    if (position.x > -border) position -= speed_x;
}

void Point::Right() {
    if (position.x < border) position += speed_x;
}

void Point::updateTrace() { //������ ������ ������� � ����
    trace.push_back(position);
    if (trace.size() > 10) {
        trace.erase(trace.begin());
    }
}

void Point::clearTraceAFK() {//����� �����������, ����������� ��� ����, ����� ���� �����.
    if (glfwGetTime() > 0.5) {
        trace.clear();
    }
}

void Point::drawPointandTrace() {
    glPointSize(2);
    glColor3f(1.0f, 1.0f, 0.0f);
    glBegin(GL_POINTS);
    for (const auto& it : trace) {
        glVertex2f(it.x, it.y);
    }
    glEnd();
    position.drawPoint();//��������� �������� ���������
}