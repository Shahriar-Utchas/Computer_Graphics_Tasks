#include <windows.h>
#include <GL/glut.h>
#include<math.h>

void display() {
glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
glClear(GL_COLOR_BUFFER_BIT);
glLineWidth(1.5);

glBegin(GL_POLYGON);
glColor3f(0.008f,0.322f,0.149f);
glVertex2f(0.305f,2.02067f);
glVertex2f(14.752f,2.0267f);
glVertex2f(14.752f,9.40f);
glVertex2f(0.305f,9.40f);
glEnd();

// line middle
glBegin(GL_POLYGON);
glColor3ub(128,128,128);
glVertex2f(0.305f,4.35f);
glVertex2f(14.752f,4.35f);
glVertex2f(14.752f,6.80f);
glVertex2f(0.305f,6.80f);
glEnd();

//line top
glBegin(GL_POLYGON);
glColor3ub(128,128,128);
glVertex2f(4.56f,6.74f);
glVertex2f(7.46f,6.74f);
glVertex2f(5.46f,9.43f);
glVertex2f(3.3055f,9.44f);
glEnd();

//bus
glBegin(GL_POLYGON);
glColor3ub(255,0,0);
glVertex2f(9.00f,4.81f);
glVertex2f(14.02f,4.814f);
glVertex2f(14.02f,6.15f);
glVertex2f(9.73f,6.15f);
glVertex2f(9.00f,5.5f);
glEnd();

//windows1
glBegin(GL_POLYGON);
glColor3ub(145,184,219);
glVertex2f(9.88f, 5.91f);
glVertex2f(9.88f,5.5f);
glVertex2f(13.87f,5.5f);
glVertex2f(13.87f,5.91f);
glEnd();

//door
glBegin(GL_POLYGON);
glColor3ub(255,255,255);
glVertex2f(10.42f,4.95f);
glVertex2f(10.95f,4.954f);
glVertex2f(10.95f,5.91f);
glVertex2f(10.42f,5.91f);
glEnd();

//Front window
glBegin(GL_POLYGON);
glColor3ub(145,184,219);
glVertex2f(9.0f, 5.5f);
glVertex2f(9.72f,5.5f);
glVertex2f(9.72f,6.17f);
glEnd();

glBegin(GL_LINES);
glLineWidth(2.5);
glColor3ub(0,0,0);
glVertex2f(11.88f, 5.91f);
glVertex2f(11.88f, 5.49f);
glEnd();

glBegin(GL_LINES);
glLineWidth(2.5);
glColor3ub(0,0,0);
glVertex2f(12.79f, 5.91f);
glVertex2f(12.79f, 5.49f);
glEnd();

glBegin(GL_LINES);
glLineWidth(0.5);
glColor3ub(0,0,0);
glVertex2f(10.95f, 5.91f);
glVertex2f(10.95f, 5.49f);
glEnd();

glBegin(GL_LINES);
glLineWidth(0.5);
glColor3ub(0,0,0);
glVertex2f(10.42f, 5.91f);
glVertex2f(10.42f, 5.49f);
glEnd();

float theta;
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glColor3ub(54,53,58);
	for(int i=0;i<360;i++)
        {
            float pi=3.1416;
            float theta=(i*pi)/180;
            float r=0.2;
            float x = r * cos(theta);
            float y = r * sin(theta);
            glVertex2f(13.2+x,4.8+y );
        }

glEnd();


glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glColor3ub(54,53,58);
	for(int i=0;i<360;i++)
        {
            float pi=3.1416;
            float theta=(i*pi)/180;
            float r=0.2;
            float x = r * cos(theta);
            float y = r * sin(theta);
            glVertex2f(9.79+x,4.8+y );
        }

glEnd();


//Traffic light

glBegin(GL_POLYGON);
glColor3ub(65,66,70);
glVertex2f(8.0f, 7.98f);
glVertex2f(8.4f,7.98f);
glVertex2f(8.4f,8.91f);
glVertex2f(8.0f,8.91f);
glEnd();

glBegin(GL_LINES);
glLineWidth(8.5);
glColor3ub(0,0,0);
glVertex2f(8.20f, 7.98f);
glVertex2f(8.20f, 6.8f);
glEnd();


glBegin(GL_LINES);
glLineWidth(8.5);
glColor3ub(255,255,255);
glVertex2f(7.92f, 6.8f);
glVertex2f(8.4f, 6.8f);
glEnd();

//Lights
glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glColor3ub(0,0,0);
	for(int i=0;i<360;i++)
        {
            float pi=3.1416;
            float theta=(i*pi)/180;
            float r=0.1;
            float x = r * cos(theta);
            float y = r * sin(theta);
            glVertex2f(8.2+x,8.76+y );
        }

glEnd();

glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glColor3ub(255,255,0);
	for(int i=0;i<360;i++)
        {
            float pi=3.1416;
            float theta=(i*pi)/180;
            float r=0.1;
            float x = r * cos(theta);
            float y = r * sin(theta);
            glVertex2f(8.2+x,8.43+y );
        }

glEnd();

glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
glColor3ub(255,0,0);
	for(int i=0;i<360;i++)
        {
            float pi=3.1416;
            float theta=(i*pi)/180;
            float r=0.1;
            float x = r * cos(theta);
            float y = r * sin(theta);
            glVertex2f(8.2+x,8.13+y );
        }

glEnd();

//Lines

glBegin(GL_LINES);
glLineWidth(5.5f);
glColor3ub(255,255,255);
glVertex2f(3.75f, 6.55f);
glVertex2f(4.49f, 6.55f);
glEnd();

glBegin(GL_LINES);
glLineWidth(5.5f);
glColor3ub(255,255,255);
glVertex2f(3.93f, 6.22f);
glVertex2f(4.63f, 6.22f);
glEnd();

glBegin(GL_LINES);
glLineWidth(5.5f);
glColor3ub(255,255,255);
glVertex2f(4.10f, 5.82f);
glVertex2f(4.84f, 5.82f);
glEnd();

glBegin(GL_LINES);
glLineWidth(5.5f);
glColor3ub(255,255,255);
glVertex2f(4.25f, 5.47f);
glVertex2f(5.01f, 5.49f);
glEnd();

glBegin(GL_LINES);
glLineWidth(5.5f);
glColor3ub(255,255,255);
glVertex2f(4.43f, 5.06f);
glVertex2f(5.21f, 5.06f);
glEnd();

glBegin(GL_LINES);
glLineWidth(5.5f);
glColor3ub(255,255,255);
glVertex2f(4.63f, 4.72f);
glVertex2f(5.41f, 4.71f);
glEnd();

glBegin(GL_LINES);
glLineWidth(5.5f);
glColor3ub(255,255,255);
glVertex2f(4.83f, 4.39f);
glVertex2f(5.53f, 4.39f);
glEnd();


//Lines

glBegin(GL_LINES);
glLineWidth(5.5f);
glColor3ub(255,255,255);
glVertex2f(7.82f, 6.2f);
glVertex2f(8.56f, 6.2f);
glEnd();

glBegin(GL_LINES);
glLineWidth(5.5f);
glColor3ub(255,255,255);
glVertex2f(8.30f, 5.70f);
glVertex2f(9.0f, 5.70f);
glEnd();

glBegin(GL_LINES);
glLineWidth(5.5f);
glColor3ub(255,255,255);
glVertex2f(8.53f, 5.21f);
glVertex2f(8.99f, 5.21f);
glEnd();

glBegin(GL_LINES);
glLineWidth(5.5f);
glColor3ub(255,255,255);
glVertex2f(8.66f, 4.66f);
glVertex2f(9.98f, 4.66f);
glEnd();

//Lines

glBegin(GL_LINES);
glLineWidth(5.5f);
glColor3ub(255,255,255);
glVertex2f(4.96f, 7.16f);
glVertex2f(4.96f, 6.67f);
glEnd();

glBegin(GL_LINES);
glLineWidth(5.5f);
glColor3ub(255,255,255);
glVertex2f(5.53f, 7.16f);
glVertex2f(5.53f, 6.67f);
glEnd();

glBegin(GL_LINES);
glLineWidth(5.5f);
glColor3ub(255,255,255);
glVertex2f(6.16f, 7.16f);
glVertex2f(6.16f, 6.67f);
glEnd();

glBegin(GL_LINES);
glLineWidth(5.5f);
glColor3ub(255,255,255);
glVertex2f(6.91f, 7.16f);
glVertex2f(6.91f, 6.67f);
glEnd();


glFlush();
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
	glutInitWindowSize(700, 500);
	glutCreateWindow("Traffic light");
	gluOrtho2D(1,14.5,2,9.40);
	glutDisplayFunc(display);
	glutMainLoop();
	return 0;

return 0;
}

