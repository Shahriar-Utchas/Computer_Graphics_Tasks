#include <windows.h>
#include <GL/glut.h>
#include <math.h>

void circle(float radius, float cX, float cY)
{
   glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
    for(int i=0;i<200;i++)
        {
            glColor3f(0.008f,0.412f,0.0f);
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
            glColor3f(1.0f,1.0f,1.0f);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=radius;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+cX,y+cY);
        }
}

void circle3(float radius, float cX, float cY)
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


void display() {

glClearColor(0.0f, 0.769f, 1.0f, 1.0f);
glClear(GL_COLOR_BUFFER_BIT);
glOrtho(-25,25,-25,25,-25,25);
glLineWidth(1.5);

//green field
glBegin(GL_QUADS);
glColor3f(0.0f,1.0f,0.345f);
glVertex2f(-25.0f,-15.0f);
glVertex2f(-25.0f,10.0f);
glVertex2f(25.0f,10.0f);
glVertex2f(25.0f,-4.0f);
glEnd();

//river
glBegin(GL_QUADS);
glColor3f(0.0f,0.078f,1.0f);
glVertex2f(-25.0f,-25.0f);
glVertex2f(-25.0f,-15.0f);
glVertex2f(25.0f,-4.0f);
glVertex2f(25.0f,-25.0f);
glEnd();

glBegin(GL_LINES);
glColor3f(1.0f, 1.0f, 1.0f);
glVertex2f(-20.0f, -20.0f);    // x, y
glVertex2f(-15.0f, -18.5f);    // x, y
glEnd();

glBegin(GL_LINES);
glColor3f(1.0f, 1.0f, 1.0f);
glVertex2f(-10.0f, -22.0f);    // x, y
glVertex2f(-5.0f, -20.5f);    // x, y
glEnd();

glBegin(GL_LINES);
glColor3f(1.0f, 1.0f, 1.0f);
glVertex2f(-1.0f, -16.0f);    // x, y
glVertex2f(3.0f, -14.9f);    // x, y
glEnd();

glBegin(GL_LINES);
glColor3f(1.0f, 1.0f, 1.0f);
glVertex2f(20.0f, -16.0f);    // x, y
glVertex2f(24.0f, -14.9f);    // x, y
glEnd();


//boat
glBegin(GL_QUADS);
glColor3f(0.659f,0.271f,0.0f);
glVertex2f(8.0f,-17.0f);
glVertex2f(5.0f,-15.0f);
glVertex2f(15.0f,-15.0f);
glVertex2f(12.5f,-17.0f);
glEnd();

glBegin(GL_LINES);
glColor3f(0.0f, 0.0f, 0.0f);
glVertex2f(12.0f, -15.0f);    // x, y
glVertex2f(12.0f, -10.0f);    // x, y
glEnd();

glBegin(GL_LINES);
glColor3f(0.0f, 0.0f, 0.0f);
glVertex2f(11.0f, -15.0f);    // x, y
glVertex2f(11.0f, -10.0f);    // x, y
glEnd();

glBegin(GL_TRIANGLES);
glColor3f(0.831f,0.153f,0.0f);
glVertex2f(4.0f,-14.7f);
glVertex2f(10.0f, -10.0f);
glVertex2f(10.0f, -14.7f);
glEnd();

//house
//middle
glBegin(GL_QUADS);
glColor3f(1.0f,0.0f,0.0f);
glVertex2f(-20.0f,-10.0f);
glVertex2f(-20.0f,0.0f);
glVertex2f(-10.0f,0.0f);
glVertex2f(-10.0f,-10.0f);
glEnd();
//shed
glBegin(GL_QUADS);
glColor3f(0.549f,0.267f,0.0f);
glVertex2f(-22.0f,0.0f);
glVertex2f(-20.0f,4.0f);
glVertex2f(-10.0f,4.0f);
glVertex2f(-8.0f,0.0f);
glEnd();
//door
glBegin(GL_QUADS);
glColor3f(0.549f,0.267f,0.0f);
glVertex2f(-16.0f,-10.0f);
glVertex2f(-16.0f,-4.0f);
glVertex2f(-14.0f,-4.0f);
glVertex2f(-14.0f,-10.0f);
glEnd();
//window_left
glBegin(GL_QUADS);
glColor3f(0.549f,0.267f,0.0f);
glVertex2f(-19.0f,-3.0f);
glVertex2f(-19.0f,-5.5f);
glVertex2f(-17.0f,-5.5f);
glVertex2f(-17.0f,-3.0f);
glEnd();
//window_right
glBegin(GL_QUADS);
glColor3f(0.549f,0.267f,0.0f);
glVertex2f(-13.0f,-3.0f);
glVertex2f(-13.0f,-5.5f);
glVertex2f(-11.0f,-5.5f);
glVertex2f(-11.0f,-3.0f);
glEnd();

//tree

glBegin(GL_QUADS);
glColor3f(0.749f,0.376f,0.024f);
glVertex2f(-7.7f,-9.0f);
glVertex2f(-7.7f,-4.0f);
glVertex2f(-6.7f,-4.0f);
glVertex2f(-6.7f,-9.0f);
glEnd();

circle(1.5,-6.4,-4);
glEnd();

circle(1.5,-7.8,-4);
glEnd();

circle(1.5,-7.0,-2.5);
glEnd();

//cloud
circle2(1.5,-20.0,20);
glEnd();
circle2(1.5,-18.5,19.5);
glEnd();
circle2(1.5,-18.5,20.5);
glEnd();
circle2(1.5,-17.0,20);
glEnd();

circle2(1.5,0.0,20);
glEnd();
circle2(1.5,2,19.5);
glEnd();
circle2(1.5,2,20.5);
glEnd();
circle2(1.5,0,20);
glEnd();
circle2(1.5,3.5,20);
glEnd();

//sun
circle3(3.5,20,20);
glEnd();

//house2
//middle
glBegin(GL_QUADS);
glColor3f(0.941f,0.0f,0.898f);
glVertex2f(5.0f,-3.0f);
glVertex2f(5.0f,5.0f);
glVertex2f(15.0f,5.0f);
glVertex2f(15.0f,-3.0f);
glEnd();
//shed
glBegin(GL_QUADS);
glColor3f(0.549f,0.267f,0.0f);
glVertex2f(3.0f,5.0f);
glVertex2f(5.0f,8.0f);
glVertex2f(15.0f,8.0f);
glVertex2f(17.0f,5.0f);
glEnd();
//door
glBegin(GL_QUADS);
glColor3f(0.549f,0.267f,0.0f);
glVertex2f(9.0f,-3.0f);
glVertex2f(9.0f,2.0f);
glVertex2f(11.0f,2.0f);
glVertex2f(11.0f,-3.0f);
glEnd();
//window_left
glBegin(GL_QUADS);
glColor3f(0.549f,0.267f,0.0f);
glVertex2f(6.0f,1.0f);
glVertex2f(6.0f,3.0f);
glVertex2f(8.0f,3.0f);
glVertex2f(8.0f,1.0f);
glEnd();
//window_right
glBegin(GL_QUADS);
glColor3f(0.549f,0.267f,0.0f);
glVertex2f(12.0f,1.0f);
glVertex2f(12.0f,3.0f);
glVertex2f(14.0f,3.0f);
glVertex2f(14.0f,1.0f);
glEnd();

//tree2
glBegin(GL_QUADS);
glColor3f(0.749f,0.376f,0.024f);
glVertex2f(19.0f,0.0f);
glVertex2f(19.0f,5.0f);
glVertex2f(19.3f,5.0f);
glVertex2f(19.3f,0.0f);
glEnd();

glBegin(GL_TRIANGLES);
glColor3f(0.008f,0.412f,0.0f);
glVertex2f(17.7f,5.0f);
glVertex2f(19.5f, 9.0f);
glVertex2f(21.0f, 5.0f);
glEnd();

//tree3
glBegin(GL_QUADS);
glColor3f(0.749f,0.376f,0.024f);
glVertex2f(23.0f,0.0f);
glVertex2f(23.0f,5.0f);
glVertex2f(23.3f,5.0f);
glVertex2f(23.3f,0.0f);
glEnd();

glBegin(GL_TRIANGLES);
glColor3f(0.008f,0.412f,0.0f);
glVertex2f(21.7f,5.0f);
glVertex2f(23.0f, 9.0f);
glVertex2f(24.3f, 5.0f);
glEnd();



glFlush();
}


int main(int argc, char** argv) {

glutInit(&argc, argv);
glutInitWindowSize(720, 520);
glutCreateWindow("Village-Day");
glutDisplayFunc(display);
glutMainLoop();
return 0;

}
