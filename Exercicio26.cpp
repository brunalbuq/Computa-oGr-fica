#include <GL/glut.h>

void drawWindow()
{
 5glClearColor(1.0f, 0.5f, 0.0f, 1.0f);
 6glClear(GL_COLOR_BUFFER_BIT);
  
 glBegin(GL_TRIANGLES);
glVertex3f(0.0f, 0.5f, 0.0f);
glVertex3f(-0.5f, -0.5f, 0.0f);
glVertex3f(0.5f, -0.5f, 0.0f);
glEnd();
  
glFlush();
}
 
int main(int argc, char *argv[])
{
glutCreateWindow("Olá Mundo OpenGL");
glutDisplayFunc(drawWindow);
glutMainLoop();
return 1;
  }
