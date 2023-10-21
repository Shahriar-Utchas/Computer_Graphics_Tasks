#include <windows.h>
#include <GL/glut.h>
#include <math.h>

void circle(float radius, float cX, float cY)
{
   glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    for(int i=0;i<200;i++)
        {
            glColor3f(0.0,1.0,0.016);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=radius;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+cX,y+cY);
        }
}

void circle2(float radius, float cX, float cY)
{
   glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    for(int i=0;i<200;i++)
        {
            glColor3f(0.988f,0.856f,0.024f);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=radius;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+cX,y+cY);
        }
}

void bench(){
glLineWidth(2.5);

//middle
glBegin(GL_QUADS);
glColor3f(0.749f,0.376f,0.024f);
glVertex2f(14.0f,-7.0f);
glVertex2f(14.0f,-5.0f);
glVertex2f(18.0f,-5.0f);
glVertex2f(18.0f,-7.0f);
glEnd();

glBegin(GL_QUADS);
glColor3f(0.749f,0.376f,0.024f);
glVertex2f(16.0f,-8.0f);
glVertex2f(14.0f,-7.0f);
glVertex2f(18.0f,-7.0f);
glVertex2f(20.0f,-8.0f);
glEnd();

//leg
glBegin(GL_LINES);
glColor3f(0.0f, 0.0f, 0.0f);
glVertex2f(14.0f, -7.0f);    // x, y
glVertex2f(14.0f, -9.0f);    // x, y
glEnd();

glBegin(GL_LINES);
glColor3f(0.0f, 0.0f, 0.0f);
glVertex2f(16.0f, -8.0f);    // x, y
glVertex2f(16.0f, -9.0f);    // x, y
glEnd();

glBegin(GL_LINES);
glColor3f(0.0f, 0.0f, 0.0f);
glVertex2f(19.8f, -8.0f);    // x, y
glVertex2f(19.8f, -9.0f);    // x, y
glEnd();

glBegin(GL_LINES);
glColor3f(0.0f, 0.0f, 0.0f);
glVertex2f(18.3f, -8.0f);    // x, y
glVertex2f(18.3f, -9.0f);    // x, y
glEnd();

glBegin(GL_LINES);
glColor3f(0.0f, 0.0f, 0.0f);
glVertex2f(14.0f, -7.0f);    // x, y
glVertex2f(16.0f, -8.0f);    // x, y
glEnd();

glBegin(GL_LINES);
glColor3f(0.0f, 0.0f, 0.0f);
glVertex2f(14.0f, -7.0f);    // x, y
glVertex2f(18.0f, -7.0f);    // x, y
glEnd();

glBegin(GL_LINES);
glColor3f(0.0f, 0.0f, 0.0f);
glVertex2f(18.0f, -7.0f);    // x, y
glVertex2f(20.0f, -8.0f);    // x, y
glEnd();

glBegin(GL_LINES);
glColor3f(0.0f, 0.0f, 0.0f);
glVertex2f(14.0f, -7.0f);    // x, y
glVertex2f(14.0f, -5.0f);    // x, y
glEnd();

glBegin(GL_LINES);
glColor3f(0.0f, 0.0f, 0.0f);
glVertex2f(14.0f, -5.0f);    // x, y
glVertex2f(18.0f, -5.0f);    // x, y
glEnd();

glBegin(GL_LINES);
glColor3f(0.0f, 0.0f, 0.0f);
glVertex2f(18.0f, -5.0f);    // x, y
glVertex2f(18.0f, -7.0f);    // x, y
glEnd();

}


void lamppost(){
glLineWidth(2.5);

//last
glBegin(GL_QUADS);
glColor3f(0.212f,0.122f,0.004f);
glVertex2f(21.8f,-9.0f);
glVertex2f(21.8f,-8.0f);
glVertex2f(24.0f,-8.0f);
glVertex2f(24.0f,-9.0f);
glEnd();

glBegin(GL_LINES);
glColor3f(0.0f, 0.0f, 0.0f);
glVertex2f(23.0f, -8.0f);    // x, y
glVertex2f(23.0f, 0.0f);    // x, y
glEnd();

glBegin(GL_LINES);
glColor3f(0.0f, 0.0f, 0.0f);
glVertex2f(23.0f, 0.0f);    // x, y
glVertex2f(18.0f, 0.0f);    // x, y
glEnd();

glBegin(GL_QUADS);
glColor3f(0.988f,0.856f,0.024f);
glVertex2f(18.0f,-1.0f);
glVertex2f(18.0f,0.0f);
glVertex2f(20.0f,0.0f);
glVertex2f(20.0f,-1.0f);
glEnd();

}




void display() {

glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
glClear(GL_COLOR_BUFFER_BIT);
glOrtho(-25,25,-25,25,-25,25);
glLineWidth(1.5);

//middle
glBegin(GL_QUADS);
glColor3f(0.0f,1.0f,0.992f);
glVertex2f(-7.0f,-10.0f);
glVertex2f(-7.0f,10.0f);
glVertex2f(8.0f,10.0f);
glVertex2f(8.0f,-10.0f);
glEnd();

//shed
glBegin(GL_QUADS);
glColor3f(0.0f,0.0f,0.0f);
glVertex2f(-7.0f,10.0f);
glVertex2f(-7.0f,11.0f);
glVertex2f(8.0f,11.0f);
glVertex2f(8.0f,10.0f);
glEnd();

//left line
glBegin(GL_LINES);
glColor3f(0.0f, 0.0f, 0.0f);
glVertex2f(-2.0f, 10.0f);    // x, y
glVertex2f(-2.0f, -10.0f);    // x, y
glEnd();

//middle line
glBegin(GL_LINES);
glColor3f(0.0f, 0.0f, 0.0f);
glVertex2f(3.0f, 10.0f);    // x, y
glVertex2f(3.0f, -10.0f);    // x, y
glEnd();

//shad
glBegin(GL_TRIANGLES);
glColor3f(0.0f,0.0f,0.0f);
glVertex2f(-5.0f,10.0f);
glVertex2f(0.5f, 14.0f);
glVertex2f(6.0f, 10.0f);
glEnd();

//left 5th window
glBegin(GL_QUADS);
glColor3f(0.988f,0.856f,0.024f);
glVertex2f(-5.5f,7.0f);
glVertex2f(-5.5f,9.0f);
glVertex2f(-3.0f,9.0f);
glVertex2f(-3.0f,7.0f);
glEnd();

////window line
//glBegin(GL_LINES);
//glColor3f(0.0f, 0.0f, 0.0f);
//glVertex2f(-4.2f, 9.0f);    // x, y
//glVertex2f(-4.2f, 7.0f);    // x, y
//glEnd();

//left 4th window
glBegin(GL_QUADS);
glColor3f(0.988f,0.856f,0.024f);
glVertex2f(-5.5f,3.0f);
glVertex2f(-5.5f,5.0f);
glVertex2f(-3.0f,5.0f);
glVertex2f(-3.0f,3.0f);
glEnd();

//left 3th window
glBegin(GL_QUADS);
glColor3f(0.988f,0.856f,0.024f);
glVertex2f(-5.5f,-1.0f);
glVertex2f(-5.5f,1.0f);
glVertex2f(-3.0f,1.0f);
glVertex2f(-3.0f,-1.0f);
glEnd();

//left 2th window
glBegin(GL_QUADS);
glColor3f(0.988f,0.856f,0.024f);
glVertex2f(-5.5f,-5.0f);
glVertex2f(-5.5f,-3.0f);
glVertex2f(-3.0f,-3.0f);
glVertex2f(-3.0f,-5.0f);
glEnd();

//left 1st window
glBegin(GL_QUADS);
glColor3f(0.988f,0.856f,0.024f);
glVertex2f(-5.5f,-8.2f);
glVertex2f(-5.5f,-6.5f);
glVertex2f(-3.0f,-6.5f);
glVertex2f(-3.0f,-8.2f);
glEnd();


//left tola
glBegin(GL_QUADS);
glColor3f(0.0f,0.0f,0.0f);
glVertex2f(-7.0f,-10.0f);
glVertex2f(-7.0f,-9.0f);
glVertex2f(-2.0f,-9.0f);
glVertex2f(-2.0f,-10.0f);
glEnd();

//right tola
glBegin(GL_QUADS);
glColor3f(0.0f,0.0f,0.0f);
glVertex2f(3.0f,-10.0f);
glVertex2f(3.0f,-9.0f);
glVertex2f(8.0f,-9.0f);
glVertex2f(8.0f,-10.0f);
glEnd();

//door
glBegin(GL_QUADS);
glColor3f(0.0f,0.0f,0.0f);
glVertex2f(-0.4f,-10.0f);
glVertex2f(-0.4f,-5.5f);
glVertex2f(1.4f,-5.5f);
glVertex2f(1.4f,-10.0f);
glEnd();

//door line
glBegin(GL_LINES);
glColor3f(0.0f, 0.0f, 0.0f);
glVertex2f(-0.6f, -10.0f);    // x, y
glVertex2f(-0.6f, -5.25f);    // x, y
glEnd();

//door line
glBegin(GL_LINES);
glColor3f(0.0f, 0.0f, 0.0f);
glVertex2f(1.58f, -10.0f);    // x, y
glVertex2f(1.58f, -5.25f);    // x, y
glEnd();

//door line
glBegin(GL_LINES);
glColor3f(0.0f, 0.0f, 0.0f);
glVertex2f(-0.6f, -5.25f);    // x, y
glVertex2f(1.58f, -5.25f);    // x, y
glEnd();

//middle 5th window
glBegin(GL_QUADS);
glColor3f(0.988f,0.856f,0.024f);
glVertex2f(-0.7f,7.0f);
glVertex2f(-0.7f,9.0f);
glVertex2f(2.0f,9.0f);
glVertex2f(2.0f,7.0f);
glEnd();

//middle 4th window
glBegin(GL_QUADS);
glColor3f(0.988f,0.856f,0.024f);
glVertex2f(-0.7f,3.0f);
glVertex2f(-0.7f,5.0f);
glVertex2f(2.0f,5.0f);
glVertex2f(2.0f,3.0f);
glEnd();

//middle 3th window
glBegin(GL_QUADS);
glColor3f(0.988f,0.856f,0.024f);
glVertex2f(-0.7f,-1.0f);
glVertex2f(-0.7f,1.0f);
glVertex2f(2.0f,1.0f);
glVertex2f(2.0f,-1.0f);
glEnd();

//middle 2th window
glBegin(GL_QUADS);
glColor3f(0.988f,0.856f,0.024f);
glVertex2f(-0.7f,-4.7f);
glVertex2f(-0.7f,-3.0f);
glVertex2f(2.0f,-3.0f);
glVertex2f(2.0f,-4.7f);
glEnd();

//Right 5th window
glBegin(GL_QUADS);
glColor3f(0.988f,0.856f,0.024f);
glVertex2f(4.5f,7.0f);
glVertex2f(4.5f,9.0f);
glVertex2f(7.0f,9.0f);
glVertex2f(7.0f,7.0f);
glEnd();

//Right 4th window
glBegin(GL_QUADS);
glColor3f(0.988f,0.856f,0.024f);
glVertex2f(4.5f,3.0f);
glVertex2f(4.5f,5.0f);
glVertex2f(7.0f,5.0f);
glVertex2f(7.0f,3.0f);
glEnd();


//Right 3th window
glBegin(GL_QUADS);
glColor3f(0.988f,0.856f,0.024f);
glVertex2f(4.5f,-1.0f);
glVertex2f(4.5f,1.0f);
glVertex2f(7.0f,1.0f);
glVertex2f(7.0f,-1.0f);
glEnd();

//right 2th window
glBegin(GL_QUADS);
glColor3f(0.988f,0.856f,0.024f);
glVertex2f(4.5f,-4.7f);
glVertex2f(4.5f,-3.0f);
glVertex2f(7.0f,-3.0f);
glVertex2f(7.0f,-4.7f);
glEnd();

//right 1st window
glBegin(GL_QUADS);
glColor3f(0.988f,0.856f,0.024f);
glVertex2f(4.5f,-8.2f);
glVertex2f(4.5f,-6.5f);
glVertex2f(7.0f,-6.5f);
glVertex2f(7.0f,-8.2f);
glEnd();

//road
glBegin(GL_QUADS);
glColor3f(0.0f, 0.0f, 0.0f);
glVertex2f(-25.0f, -20.0f);    // x, y
glVertex2f(-25.0f, -13.0f);    // x, y
glVertex2f(25.0f, -13.0f);    // x, y
glVertex2f(25.0f, -20.0f);    // x, y
glEnd();

//road line
glBegin(GL_LINES);
glColor3f(1.0f, 1.0f, 0.0f);
glVertex2f(-25.0f, -17.0f);    // x, y
glVertex2f(25.0f, -17.0f);    // x, y
glEnd();

//last
glBegin(GL_QUADS);
glColor3f(0.0f, 1.0f, 0.314f);
glVertex2f(-25.0f, -25.0f);    // x, y
glVertex2f(-25.0f, -20.0f);    // x, y
glVertex2f(25.0f, -20.0f);    // x, y
glVertex2f(25.0f, -25.0f);    // x, y
glEnd();

//middle
glBegin(GL_QUADS);
glColor3f(0.0f, 1.0f, 0.314f);
glVertex2f(-25.0f, -13.0f);    // x, y
glVertex2f(-25.0f, -10.0f);    // x, y
glVertex2f(25.0f, -10.0f);    // x, y
glVertex2f(25.0f, -13.0f);    // x, y
glEnd();

glBegin(GL_QUADS);
glColor3f(0.0f, 1.0f, 0.314f);
glVertex2f(8.0f, -10.0f);    // x, y
glVertex2f(8.0f, -9.0f);    // x, y
glVertex2f(25.0f, -9.0f);    // x, y
glVertex2f(25.0f, -13.0f);    // x, y
glEnd();

glBegin(GL_QUADS);
glColor3f(0.0f, 1.0f, 0.314f);
glVertex2f(-25.0f, -13.0f);    // x, y
glVertex2f(-25.0f, -9.0f);    // x, y
glVertex2f(-7.0f, -9.0f);    // x, y
glVertex2f(-7.0f, -10.0f);    // x, y
glEnd();

//tree
glBegin(GL_QUADS);
glColor3f(0.749f,0.376f,0.024f);
glVertex2f(-15.0f,-9.0f);
glVertex2f(-15.0f,-2.0f);
glVertex2f(-14.0f,-2.0f);
glVertex2f(-14.0f,-9.0f);
glEnd();

circle(2.0,-16.0,-2.7);
glEnd();

circle(2.0,-14.0,-1.5);
glEnd();

circle(2.0,-13.0,-2.7);
glEnd();

circle2(5.0, 19.0,19.0);
glEnd();

bench();
lamppost();


glFlush();
}


int main(int argc, char** argv) {

glutInit(&argc, argv);
glutInitWindowSize(520, 520);
glutCreateWindow("OpenGL Setup");
glutDisplayFunc(display);
glutMainLoop();
return 0;

}
