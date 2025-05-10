/*
OpenGl code for Translation, Rotation and Scaling of an 2D object

problem no- 05,06,08
*/


#include<gl/glut.h>

void display()
{
    glClearColor(0,0,0,0);
    glClear(GL_COLOR_BUFFER_BIT);

    //Translation
    //glTranslatef(0.9f,0.8f,0.0f);                    // glTranslatef(tx,ty,tz);


    //Rotation
    glRotatef(90,0.0f,0.0f,0.1f);        //glRotateF(angle, x, y, z); for 2-d plane set z=1

    //Scaling
    //glScalef(0.5f,0.5f,0.5f);



    glBegin(GL_QUADS);
    glColor3f(0.0,1.0,1.0);
    glVertex2f(-0.9,-0.2);
    glVertex2f(0.6,-0.2);
    glVertex2f(0.6,0.8);
    glVertex2f(-0.9,0.8);
    glEnd();

    glFlush();

}

//-------------------------------------------------
//   Md. Raihan Karim Priyo
//
//   https://www.youtube.com/watch?v=x7myytJvwfc
//-------------------------------------------------

int main(int agrc, char** argv)
{
    glutInit(&agrc, argv);
    glutInitWindowSize(640,500);
    glutInitWindowPosition(100,100);
    glutCreateWindow("Rotation");
    glutDisplayFunc(display);
    glutMainLoop();
     return 0;
}
