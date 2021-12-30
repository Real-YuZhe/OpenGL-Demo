#include <stdio.h>
#include <GL/glut.h>

int main(int argc, char** argv)
{
    glutInit(&argc, argv);

    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB | GLUT_DEPTH);

    glutInitWindowSize(300, 300);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("OpenGL Demo Window");

    printf("OpenGL Vendor  : %s\n", glGetString(GL_VENDOR));
    printf("Renderer Name  : %s\n", glGetString(GL_RENDERER));
    printf("OpenGL Version : %s\n", glGetString(GL_VERSION));
    printf("OGLU Version   : %s\n", gluGetString(GLU_VERSION));

    return 0;
}
