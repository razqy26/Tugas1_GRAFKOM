#include <windows.h>
#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif

#include <stdlib.h>

void init(void);
void draw(void);

main(int argc, char **argv){
    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize(250, 250);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("line");
    init();
    glutDisplayFunc(draw);
    glutMainLoop();
    return 0;
}

void init(void)
{
    glClearColor(0.0, 0.0, 0.0, 0.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(0.0,10.0,0.0,10.0,-10.0, 10.0);
}

void draw(void)
{
    glClear(GL_COLOR_BUFFER_BIT);

    glPointSize(8.0);
    glBegin(GL_POINTS);

    glColor3f(1.0, 0.0, 0.0); // color titik 1
    glVertex3f(4.0, 4.0, 0.0); // koordinat titik 1
    glColor3f(0.0, 1.0, 0.0); // color titik 2
    glVertex3f(5.0, 4.0, 0.0); // koordinat titik 2
    glColor3f(0.0, 0.0, 1.0); // color titik 3
    glVertex3f(6.0, 4.0, 0.0); // koordinat titik 3
    glColor3f(1.0, 1.0, 0.0); // color titik 4
    glVertex3f(4.0, 6.0, 0.0); // koordinat titik 4
    glColor3f(0.0, 1.0, 1.0); // color titik 5
    glVertex3f(5.0, 6.0, 0.0); // koordinat titik 5
    glColor3f(1.0, 0.0, 1.0); // color titik 6
    glVertex3f(6.0, 6.0, 0.0); // koordinat titik 6

    glEnd();

    glLineWidth(3.0);
    glBegin(GL_LINES);

    glColor3f(1.0,0.0,0.0);

    //garis 1
    glVertex3f(2.0,2.0,0.0);
    glVertex3f(8.0,2.0,0.0);

    //garis 2
    glVertex3f(8.0,2.0,0.0);
    glVertex3f(9.0,5.0,0.0);

    //garis 3
    glVertex3f(9.0,5.0,0.0);
    glVertex3f(8.0,8.0,0.0);

    //garis 4
    glVertex3f(2.0,8.0,0.0);
    glVertex3f(8.0,8.0,0.0);

    //garis 5
    glVertex3f(2.0,8.0,0.0);
    glVertex3f(1.0,5.0,0.0);

    //garis 6
    glVertex3f(1.0,5.0,0.0);
    glVertex3f(2.0,2.0,0.0);

    glEnd();

    glutSwapBuffers();
}

