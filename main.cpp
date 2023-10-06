#include <windows.h>
#include <GL/glut.h>

void display() {
glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
glClear(GL_COLOR_BUFFER_BIT);
glOrtho(-17,17,-17,17,-17,17);

//Background
glBegin(GL_POLYGON);
glColor3f(0.0f, 0.0f, 0.0f);
glVertex2f(-3.5f, -7.5f);    // x, y
glVertex2f(-8.5f, -3.5f);    // x, y
glVertex2f(-8.5f, 3.5f);    // x, y
glVertex2f(-3.5f, 7.5f);    // x, y
glVertex2f(3.5f, 7.5f);    // x, y
glVertex2f(8.5f, 3.5f);    // x, y
glVertex2f(8.5f, -3.5f);    // x, y
glVertex2f(3.5f, -7.5f);    // x, y
glEnd();

//Background
glBegin(GL_POLYGON);
glColor3f(1.0f, 0.95f, 0.0f);
glVertex2f(-3.0f, -7.0f);    // x, y
glVertex2f(-8.0f, -3.0f);    // x, y
glVertex2f(-8.0f, 3.0f);    // x, y
glVertex2f(-3.0f, 7.0f);    // x, y
glVertex2f(3.0f, 7.0f);    // x, y
glVertex2f(8.0f, 3.0f);    // x, y
glVertex2f(8.0f, -3.0f);    // x, y
glVertex2f(3.0f, -7.0f);    // x, y
glEnd();

//Center-Quads
glBegin(GL_QUADS);
glColor3f(0.0f, 0.0f, 0.0f);
glVertex2f(-7.0f, -2.0f);
glVertex2f(-7.0f, 2.0f);
glVertex2f(7.0f, 2.0f);
glVertex2f(7.0f, -2.0f);
glEnd();

//Head
glBegin(GL_POLYGON);
glVertex2f(-1.0f, 2.0f);
glVertex2f(-1.0f, 5.0f);
glVertex2f(-0.4f, 4.0f);
glVertex2f(0.6f, 4.0f);
glVertex2f(1.0f, 5.0f);
glVertex2f(1.0f, 2.0f);
glEnd();

//Left-Side
glBegin(GL_POLYGON);
glVertex2f(-7.0f, 2.0f);
glVertex2f(-5.0f, 4.0f);
glVertex2f(-2.0f, 4.0f);
glVertex2f(-3.0f, 3.0f);
glVertex2f(-1.0f, 2.0f);
glEnd();

//Right-Side
glBegin(GL_POLYGON);
glVertex2f(7.0f, 2.0f);
glVertex2f(5.0f, 4.0f);
glVertex2f(2.0f, 4.0f);
glVertex2f(3.0f, 3.0f);
glVertex2f(1.0f, 2.0f);
glEnd();

//Down
glBegin(GL_TRIANGLES);
glColor3f(0.0f,0.0f,0.0f);
glVertex2f(0.0f,-5.0f);
glVertex2f(-3.5f,-2.0f);
glVertex2f(3.5f,-2.0f);
glEnd();

glFlush();
}

int main(int argc, char** argv) {

glutInit(&argc, argv);
glutInitWindowSize(520, 520);
glutCreateWindow("I'm Vengence");
glutDisplayFunc(display);
glutMainLoop();
return 0;
}
