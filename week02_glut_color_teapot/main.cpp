#include <GL/glut.h>
void display()
{
    glColor3f(247/255.0, 180/255.0, 171/255.0);
    glutSolidTeapot(0.3);

    glColor3f(251/255.0, 233/255.0, 219/255.0);
    glutSolidTeapot(0.1);

    glutSwapBuffers();
}
int main(int argc, char *argv[])
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);
    glutCreateWindow("GLUT Shapes");
    glutDisplayFunc(display);
    glutMainLoop();
}