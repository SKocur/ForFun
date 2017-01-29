#include <windows.h>
#include <iostream>
#include <gl/gl.h>
#include <gl/glut.h>

GLint iRecursionLevel;
GLfloat size = 100;

void carpet(GLfloat x, GLfloat y, GLfloat width, GLint level)
{
	if (level > 0)
	{
		width /= 3;
		carpet(x, y, width, level - 1);
		carpet(x - width, y, width, level - 1);
		carpet(x - 2 * width, y, width, level - 1);
		carpet(x, y - width, width, level - 1);
		carpet(x - 2 * width, y - width, width, level - 1);
		carpet(x, y - 2 * width, width, level - 1);
		carpet(x - width, y - 2 * width, width, level - 1);
		carpet(x - 2 * width, y - 2 * width, width, level - 1);
	}
	else {
		glBegin(GL_POLYGON);
		glColor3f(0.0f, 0.0f, 0.0f);
		glVertex2f(x, y);
		glColor3f(1.0f, 1.0f, 1.0f);
		glVertex2f(x, y - width);
		glColor3f(1.0f, 1.0f, 1.0f);
		glVertex2f(x - width, y - width);
		glColor3f(1.0f, 1.0f, 1.0f);
		glVertex2f(x - width, y);
		glEnd();
	}
}

void Display(void)
{
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(0.0f, 1.0f, 0.0f);
	carpet(50, 50, size, iRecursionLevel);
	glFlush();
}

void Resize(GLsizei horizontal, GLsizei vertical)
{
	GLfloat AspectRatio;

	glViewport(0, 0, horizontal, vertical);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	AspectRatio = (GLfloat)horizontal / (GLfloat)vertical;

	if (horizontal <= vertical) {
		glOrtho(-100.0, 100.0, -100.0 / AspectRatio, 100.0 / AspectRatio, 1.0, -1.0);
	}
	else {
		glOrtho(-100.0*AspectRatio, 100.0*AspectRatio, -100.0, 100.0, 1.0, -1.0);
	}

	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
}

int main(int argc, char * argv[])
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
	glutCreateWindow("Sierpinski carpet");

	std::cout << "Podaj poziom rekurencji: ";
	std::cin >> iRecursionLevel;

	glutDisplayFunc(Display);
	glutReshapeFunc(Resize);
	glClearColor(1.0f, 1.0f, 1.0f, 0.0f);
	glutMainLoop();
	return 0;
}