#define _USE_MATH_DEFINES
#include <cmath>
#include <gl/glut.h>
//#include <math.h>
//#include <cmath>
float ang;
void ajusta(int w, int h) {
    glClearColor(1, 1, 1, 0);
    gluOrtho2D(-80, 80, -80, 80);
}
void circulo(void) {
    glBegin(GL_POLYGON);
    for (ang = 0; ang <= 2 * M_PI; ang += M_PI / 50)
        glVertex2f(50 * cos(ang), 50 * sin(ang));
    glEnd();
}
void desenhar(void) {
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(0, 0, 0.2);
    circulo();
    glColor3f(0, 0, 0.6);
    glScalef(0.7, 0.7, 1);
    circulo();
    glColor3f(0, 0, 0.2);
    glScalef(0.7, 0.7, 1);
    circulo();
    glColor3f(1, 1, 1);
    glScalef(0.5, 0.5, 1);
    circulo();
    glFlush();
}
