#include<stdio.h>
#include<Gl/gl.h>
#include<GL/glut.h>


float x0,x1,x2,x3,y0,y1,y2,y3,tx,ty;

void display(void){
    glClear(GL_COLOR_BUFFER_BIT);

    glColor3f(1.0,1.0,1.0);
    glBegin(GL_LINES);
    glVertex3f(x0,y0,0.0f);
    glVertex3f(x1,y1,0.0f);

    glVertex3f(x1,y1,0.0f);
    glVertex3f(x2,y2,0.0f);

    glVertex3f(x2,y2,0.0f);
    glVertex3f(x3,y3,0.0f);

    glVertex3f(x3,y3,0.0f);
    glVertex3f(x0,y0,0.0f);

    glEnd();

    x0+=tx;
    y0+=ty;
    x1+=tx;
    y1+= ty;
    x2+=tx;
    y2+= ty;
    x3+=tx;
    y3+= ty;

    glColor3f(0.0,1.0,0.0);
    glBegin(GL_LINES);
    glVertex3f(x0,y0,0.0f);
    glVertex3f(x1,y1,0.0f);

    glVertex3f(x1,y1,0.0f);
    glVertex3f(x2,y2,0.0f);

    glVertex3f(x2,y2,0.0f);
    glVertex3f(x3,y3,0.0f);

    glVertex3f(x3,y3,0.0f);
    glVertex3f(x0,y0,0.0f);

    glEnd();



    glFlush();

}

void init(void)
{
    glClearColor(0.0,0.0,0.0,0.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(0.0,1.0,0.0,1.0,0.0,1.0);

}

int main(int argc, char** argv)
{

    printf("Enter the 4 vertices anti-clock wise\n");

    printf("vertex no.1: ");
    scanf("%f %f",&x0,&y0);

    printf("vertex no.2: ");
    scanf("%f %f",&x1,&y1);

    printf("vertex no.3: ");
    scanf("%f %f",&x2,&y2);

    printf("vertex no.4: ");
    scanf("%f %f",&x3,&y3);

    printf("\nEnter translation factors (tx,ty):");
    scanf("%f %f",&tx,&ty);
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(600,600);
    glutInitWindowPosition(100,100);
    glutCreateWindow("Translation");
    init();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
