#include <iostream>
#include <string>
#include "GeomVector.h"
#include "Point.h"

Point point;
//�������, ������� ������ ��� ��������� ����� � ����������
void keyCallback(GLFWwindow* window, int key, int scancode, int action, int mods) {
    if (action == GLFW_PRESS) {
        point.updateTrace();
        switch (key) {
        case GLFW_KEY_UP:
            point.Up();
            break;
        case GLFW_KEY_DOWN:
            point.Down();
            break;
        case GLFW_KEY_RIGHT:
            point.Right();
            break;
        case GLFW_KEY_LEFT:
            point.Left();
            break;
        default:
            break;
        }
        glfwSetTime(0.0);//����� ����������� �������� �� ����
    }
}

int main() {
    if (!glfwInit()) {
        std::cerr << "Failed to initialize GLFW" << std::endl;
        return -1;
    }
    //�������� ����
    GLFWwindow* window = glfwCreateWindow(800, 600, "Point Movement", NULL, NULL);
    if (!window) {
        glfwTerminate();
        return -1;
    }
    glfwMakeContextCurrent(window);
    glfwSetKeyCallback(window, keyCallback);
    //���� ���� �� �������
    while (!glfwWindowShouldClose(window)) {
        glClear(GL_COLOR_BUFFER_BIT);
        point.drawPointandTrace();// ������������� ����� � � �����
        glfwSwapBuffers(window);
        glfwPollEvents();
        point.clearTraceAFK();
    }
    glfwTerminate();
    return 0;
}