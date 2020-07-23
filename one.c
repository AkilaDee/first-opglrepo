#include<stdio.h> 
#include<GL/glut.h> 
#include<math.h> 

void display (void) 
{	
	glClear(GL_COLOR_BUFFER_BIT);
	glPointSize(10.0);
	glBegin(GL_POINTS);
		glVertex3f(-0.65, -0.65, 0.0);
        	glVertex3f(0.2, -0.2, 0.0);
	glEnd();

	glBegin(GL_QUADS);
		glVertex3f(-0.65, -0.65, 0.0);
        	glVertex3f(0.2, -0.65, 0.0);
		glVertex3f(0.2, -0.2, 0.0);
        	glVertex3f(-0.65, -0.2, 0.0);
	glEnd();

	glBegin(GL_QUADS);
		glVertex3f(-0.65, -0.16, 0.0);
        	glVertex3f(0.2, -0.16, 0.0);
		glVertex3f(0.2, 0.29, 0.0);
        	glVertex3f(0.2, 0.29, 0.0);
	glEnd();

	
    	glFlush();
}




int main (int argc, char** argv) 
{ 
	glutInit(&argc, argv); 
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB); 
	
	
	glutInitWindowSize(500, 500); 
	glutInitWindowPosition(100, 100); 
	
	
	glutCreateWindow("First"); 
	glClearColor(1.0, 1.0, 0.0, 1.0);
	glColor3f(0.2, 0.5, 0.4);



	glutDisplayFunc(display); 
	glutMainLoop(); 
} 
