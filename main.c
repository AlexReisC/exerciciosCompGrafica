#include <windows.h>
#include <GL/glut.h>

int init(void){
    glClearColor(1.0,1.0,1.0,0.0); // cor de fundo
    glMatrixMode(GL_PROJECTION);
    gluOrtho2D(0.0,200.0,0.0,150.0);
}

void triangulo(void){
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(0.0,0.0,1.0); // cor do desenho (ponto, linha...) em rgb
    glBegin(GL_TRIANGLES);
    // (x,y): x esta da esquerda para a direita e y esta de cima para baixo
        glVertex2i(100,140);
        glColor3f(0.0,1.0,0.0); // cor verde
        glVertex2i(50,50);
        glColor3f(1.0,0.0,0.0); // cor vermelho
        glVertex2i(150,50);
    glEnd();
    glFlush();
}

void boneco(void){
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

void bandeira(void){
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(0.0,0.5,0.0);
    glBegin(GL_QUADS);
        glVertex2i(50,140);
        glVertex2i(50,90);
        glVertex2i(120,90);
        glVertex2i(120,140);
    glEnd();

    glBegin(GL_QUADS);
        glColor3f(1.0,1.0,1.0);
        glVertex2i(73,140);
        glVertex2i(73,90);
        glVertex2i(96,90);
        glVertex2i(96,140);
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
    glutDisplayFunc(triangulo);
    //glutDisplayFunc(boneco);
    //glutDisplayFunc(bandeira);
    glutMainLoop();
    return 0;
}
