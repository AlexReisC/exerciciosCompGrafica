/*
#include <windows.h>
#include <GL/glut.h>

int init(void){
    glClearColor(1.0,1.0,1.0,0.0); // cor de fundo
    glMatrixMode(GL_PROJECTION);
    gluOrtho2D(0.0,200.0,0.0,150.0);
}

void display(void){
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(1.0,0.0,0.0); // cor do desenho (ponto, linha...) em rgb
    //cabeca
    glBegin(GL_QUADS);
    // (x,y): x esta da esquerda para a direita e y esta de cima para baixo
        glVertex2i(80,140);
        glVertex2i(80,110);
        glVertex2i(110,110);
        glVertex2i(110,140);
    glEnd();
    //tronco
    glBegin(GL_LINES);
        glVertex2i(95,110);
        glVertex2i(95,50);
    glEnd();
    //bracos
    glBegin(GL_LINES);
        glVertex2i(95,100);
        glVertex2i(60,75);
        glVertex2i(95,100);
        glVertex2i(131,75);
    glEnd();
    //pernas
    glBegin(GL_LINES);
        glVertex2i(95,50);
        glVertex2i(65,20);
        glVertex2i(95,50);
        glVertex2i(125,20);
    glEnd();
    glFlush();
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE| GLUT_RGB);
    glutInitWindowSize(400,300);
    glutInitWindowPosition(200,0);
    glutCreateWindow("Exemplo de janela");

    init();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}*/
