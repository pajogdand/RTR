// header files
#include <GL/freeglut.h>

// Global variable declaretion
BOOL bFullScreen = FALSE;

// Entry-point function

int main(int argc, char *argv[])
{
	int initialize(void);
	void resize(int, int);
	void display(void);
	void keyborad(unsigned char, int, int);
	void mouse(int, int, int, int);
	void uninitialize(void);

	// code
	glutInit(&argc, argv);

	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA);

	glutInitWindowSize(800, 600);
	glutInitWindowPosition(100,100);
	glutCreateWindow("Mr. Pravin Jogdand");

	initialize();

	glutReshapeFunc(resize);
	glutDisplayFunc(display);
	glutKeyboardFunc(keyborad);
	glutMouseFunc(mouse);

	glutCloseFunc(uninitialize);

	glutMainLoop();

	return (0);
}

int initialize(void)
{
	//Code
	glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
	return (0);
}

void resize(int width, int height)
{
	// code
	glViewport(0, 0, width, height);
}

void display(void)
{
	//code
	glClear(GL_COLOR_BUFFER_BIT);
	/*glBegin(GL_TRIANGLES);*/
	//glColor3f(1.0f, 0.0f, 0.0f);
	//glVertex3f(0.0f, 1.0f, 0.0f);
	//glColor3f(0.0f, 1.0f, 0.0f);
	//glVertex3f(-1.0f, -1.0f, 0.0f);
	//glColor3f(0.0f, 0.0f, 1.0f);
	//glVertex3f(1.0f, -1.0f, 0.0f);


	// set color and specify vertices in reverse (clockwise) order
	//glColor3f(1.0f, 0.0f, 0.0f); // red
	//glVertex3f(1.0f, 1.0f, 0.0f); // top-right
	//glColor3f(0.0f, 1.0f, 0.0f); // green
	//glVertex3f(-1.0f, 1.0f, 0.0f); // top-left
	//glColor3f(0.0f, 0.0f, 1.0f); // blue
	//glVertex3f(-1.0f, -1.0f, 0.0f); // bottom-left
	//glColor3f(1.0f, 1.0f, 0.0f); // yellow
	//glVertex3f(1.0f, -1.0f, 0.0f); // bottom-right

	glBegin(GL_QUADS);
	glColor3f(1.0f, 0.0f, 0.0f); // red
	glVertex3f(0.0f, 1.0f, 0.0f); // top-right
	glColor3f(0.0f, 1.0f, 0.0f); // green
	glVertex3f(-1.0f, 0.0f, 0.0f); // top-left
	glColor3f(0.0f, 0.0f, 1.0f); // blue
	glVertex3f(0.0f, -1.0f, 0.0f); // bottom-left
	glColor3f(1.0f, 1.0f, 0.0f); // yellow
	glVertex3f(1.0f, 0.0f, 0.0f); // bottom-right


	glEnd();

	glutSwapBuffers();
}

void keyborad(unsigned char key, int x, int y)
{
	// code
	switch (key)
	{
	case 27:
		glutLeaveMainLoop();
		break;
	case 'F':
	case 'f':
		if (bFullScreen == FALSE)
		{
			glutFullScreen();
			bFullScreen = TRUE;
		}
		else
		{
			glutLeaveFullScreen();
			bFullScreen = FALSE;
		}
		break;
	default:
		break;
    }
}

void mouse(int button, int state, int X, int Y)
{
	// Code
	switch (button)
	{
	case GLUT_LEFT_BUTTON:
		glutLeaveMainLoop();
		break;
	default:
		break;
	}
}

void uninitialize()
{
	// Code
}