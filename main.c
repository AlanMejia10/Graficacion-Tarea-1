#include <stdlib.h>
#include <GL/glut.h>

enum DrawWith {points = 1, lineLoop, triangle};
enum DrawWith drawShape = points;

void DrawPoints();
void DrawLine();
void DrawPolygon();
void Draw(void);
void Keyboard (unsigned char key, int x, int y);

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA);
    glutInitWindowSize(640, 480);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("Tarea 1");

    glutDisplayFunc(Draw);
    glutKeyboardFunc(Keyboard);
    glClearColor(0.0f, 0.0f, 0.0f, 0.0f);
    glutMainLoop();
    return 0;
}


void DrawPoints(){
    glPointSize(3.0f);
    // letter A (points)
    glBegin(GL_POINTS);
        glColor3f(0.0f, 1.0f, 0.0f);
        glVertex2f(-0.9f, -0.4f);
        glVertex2f(-0.85f, -0.3f);
        glVertex2f(-0.8f, -0.2f);
        glVertex2f(-0.75f, -0.1f);
        glVertex2f(-0.7f, 0.0f);
        glVertex2f(-0.65f, 0.1f);
        glVertex2f(-0.6f, 0.2f);
        glVertex2f(-0.55f, 0.1f);
        glVertex2f(-0.5f, 0.0f);
        glVertex2f(-0.45f, -0.1f);
        glVertex2f(-0.4f, -0.2f);
        glVertex2f(-0.35f, -0.3f);
        glVertex2f(-0.3f, -0.4f);
        glVertex2f(-0.7f, -0.15f);
        glVertex2f(-0.6f, -0.15f);
        glVertex2f(-0.5f, -0.15f);
    glEnd();

    // letter M (points)
    glBegin(GL_POINTS);
        glColor3f(1.0f, 1.0f, 1.0f);
        glVertex2f(-0.1f, -0.4f);
        glVertex2f(-0.1f, -0.3f);
        glVertex2f(-0.1f, -0.2f);
        glVertex2f(-0.1f, -0.1f);
        glVertex2f(-0.1f, 0.0f);
        glVertex2f(-0.1f, 0.1f);
        glVertex2f(-0.1f, 0.2f);
        glVertex2f(0.0f, 0.1f);
        glVertex2f(0.1f, 0.0f);
        glVertex2f(0.2f, 0.1f);
        glVertex2f(0.3f, 0.2f);
        glVertex2f(0.3f, 0.1f);
        glVertex2f(0.3f, 0.0f);
        glVertex2f(0.3f, -0.1f);
        glVertex2f(0.3f, -0.2f);
        glVertex2f(0.3f, -0.3f);
        glVertex2f(0.3f, -0.4f);
    glEnd();

    // letter E (points)
    glBegin(GL_POINTS);
        glColor3f(1.0f, 0.0f, 0.0f);
        glVertex2f(0.5f, 0.2f);
        glVertex2f(0.5f, 0.1f);
        glVertex2f(0.5f, 0.0f);
        glVertex2f(0.5f, -0.1f);
        glVertex2f(0.5f, -0.2f);
        glVertex2f(0.5f, -0.3f);
        glVertex2f(0.5f, -0.4f);

        glVertex2f(0.6f, -0.4f);
        glVertex2f(0.7f, -0.4f);
        glVertex2f(0.8f, -0.4f);

        glVertex2f(0.6f, 0.2f);
        glVertex2f(0.7f, 0.2f);
        glVertex2f(0.8f, 0.2f);

        glVertex2f(0.6f, -0.1f);
        glVertex2f(0.7f, -0.1f);
        glVertex2f(0.8f, -0.1f);
    glEnd();
}

void DrawLine(){
    glBegin(GL_LINE_STRIP);
        glColor3f(0.0f, 1.0f, 0.0f);
        glVertex2f(-0.9f, -0.4f);
        glVertex2f(-0.85f, -0.3f);
        glVertex2f(-0.8f, -0.2f);
        glVertex2f(-0.75f, -0.1f);
        glVertex2f(-0.7f, 0.0f);
        glVertex2f(-0.65f, 0.1f);
        glVertex2f(-0.6f, 0.2f);
        glVertex2f(-0.55f, 0.1f);
        glVertex2f(-0.5f, 0.0f);
        glVertex2f(-0.45f, -0.1f);
        glVertex2f(-0.4f, -0.2f);
        glVertex2f(-0.35f, -0.3f);
        glVertex2f(-0.3f, -0.4f);
    glEnd();
    glBegin(GL_LINE_STRIP);
        glVertex2f(-0.7f, -0.15f);
        glVertex2f(-0.6f, -0.15f);
        glVertex2f(-0.5f, -0.15f);
    glEnd();

    glBegin(GL_LINE_STRIP);
        glColor3f(1.0f, 1.0f, 1.0f);
        glVertex2f(-0.1f, -0.4f);
        glVertex2f(-0.1f, -0.3f);
        glVertex2f(-0.1f, -0.2f);
        glVertex2f(-0.1f, -0.1f);
        glVertex2f(-0.1f, 0.0f);
        glVertex2f(-0.1f, 0.1f);
        glVertex2f(-0.1f, 0.2f);
        glVertex2f(0.0f, 0.1f);
        glVertex2f(0.1f, 0.0f);
        glVertex2f(0.2f, 0.1f);
        glVertex2f(0.3f, 0.2f);
        glVertex2f(0.3f, 0.1f);
        glVertex2f(0.3f, 0.0f);
        glVertex2f(0.3f, -0.1f);
        glVertex2f(0.3f, -0.2f);
        glVertex2f(0.3f, -0.3f);
        glVertex2f(0.3f, -0.4f);
    glEnd();

    glBegin(GL_LINE_STRIP);
        glColor3f(1.0f, 0.0f, 0.0f);
        glVertex2f(0.8f, 0.2f);
        glVertex2f(0.7f, 0.2f);
        glVertex2f(0.6f, 0.2f);

        glVertex2f(0.5f, 0.2f);
        glVertex2f(0.5f, 0.1f);
        glVertex2f(0.5f, 0.0f);
        glVertex2f(0.5f, -0.1f);
        glVertex2f(0.5f, -0.2f);
        glVertex2f(0.5f, -0.3f);
        glVertex2f(0.5f, -0.4f);

        glVertex2f(0.6f, -0.4f);
        glVertex2f(0.7f, -0.4f);
        glVertex2f(0.8f, -0.4f);

    glEnd();

    glBegin(GL_LINE_STRIP);
        glVertex2f(0.6f, -0.1f);
        glVertex2f(0.7f, -0.1f);
        glVertex2f(0.8f, -0.1f);
        glVertex2f(0.5f, -0.1f);
    glEnd();
}

void DrawPolygon(){
    glColor3f(0.0f, 1.0f, 0.0f);
    glBegin(GL_POLYGON);
        glVertex2f(-0.35f, -0.4f);
        glVertex2f(-0.3f, -0.4f);
        glVertex2f(-0.55f, 0.2f);
        glVertex2f(-0.6f, 0.2f);
    glEnd();

    glBegin(GL_POLYGON);
        glVertex2f(-0.6f, 0.2f);
        glVertex2f(-0.65f, 0.2f);
        glVertex2f(-0.9f, -0.4f);
        glVertex2f(-0.85f, -0.4f);
    glEnd();

    glBegin(GL_POLYGON);
        glVertex2f(-0.7f, -0.15f);
        glVertex2f(-0.5f, -0.15f);
        glVertex2f(-0.5f, -0.10f);
        glVertex2f(-0.7f, -0.10f);
    glEnd();

    glColor3f(1.0f, 1.0f, 1.0f);
    glBegin(GL_POLYGON);
        glVertex2f(0.3f, -0.4f);
        glVertex2f(0.3f, 0.2f);
        glVertex2f(0.25f, 0.2f);
        glVertex2f(0.25f, -0.4f);
    glEnd();

    glBegin(GL_POLYGON);
        glVertex2f(0.25f, 0.2f);
        glVertex2f(0.1f, 0.05f);
        glVertex2f(0.1f, -0.0f);
        glVertex2f(0.25f, 0.15f);
    glEnd();

    glBegin(GL_POLYGON);
        glVertex2f(0.1f, -0.0f);
        glVertex2f(0.1f, 0.05f);
        glVertex2f(-0.1f, 0.2f);
        glVertex2f(-0.1, 0.15f);
    glEnd();

    glBegin(GL_POLYGON);
        glVertex2f(-0.1f, 0.2f);
        glVertex2f(-0.15f, 0.2f);
        glVertex2f(-0.15f, -0.4f);
        glVertex2f(-0.1f, -0.4f);
    glEnd();

    // letter E
    glColor3f(1.0f, 0.0f, 0.0f);
    glBegin(GL_POLYGON);
        glVertex2f(0.5f, 0.2f);
        glVertex2f(0.5f, 0.25f);
        glVertex2f(0.8f, 0.25f);
        glVertex2f(0.8f, 0.2f);
    glEnd();

    glBegin(GL_POLYGON);
        glVertex2f(0.5f, -0.1f);
        glVertex2f(0.5f, -0.05f);
        glVertex2f(0.8f, -0.05f);
        glVertex2f(0.8f, -0.1f);
    glEnd();

    glBegin(GL_POLYGON);
        glVertex2f(0.5f, -0.4f);
        glVertex2f(0.5f, -0.35f);
        glVertex2f(0.8f, -0.35f);
        glVertex2f(0.8f, -0.4f);
    glEnd();

    glBegin(GL_POLYGON);
        glVertex2f(0.5f, 0.25f);
        glVertex2f(0.45f, 0.25f);
        glVertex2f(0.45f, -0.4f);
        glVertex2f(0.5f, -0.4f);
    glEnd();
}

void Draw(void) {
    /* Aquí va el dibujo con OpenGL */
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    if(drawShape == points)
        DrawPoints();
    else if(drawShape == lineLoop)
        DrawLine();
    else if(drawShape == triangle)
        DrawPolygon();
    //tells openGL to draw the points
    //glFinish();
    glutSwapBuffers();
}

void Keyboard (unsigned char key, int x, int y) {
    switch (key) {
        case '1':
            drawShape = points;
            break;
        case '2':
            drawShape = lineLoop;
            break;
        case '3':
            drawShape = triangle;
            break;
        case 27:
            exit(0);
            break;
    }

    glutPostRedisplay();
}
