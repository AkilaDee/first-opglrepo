#include <stdio.h>
#include <GL/glut.h>
void display(void){
	glClear( GL_COLOR_BUFFER_BIT);
 
	glBegin(GL_POLYGON);//triangle 1
	glColor3f(1.0, 0.0, 0.0);
 	glVertex3f(3.0, 7.0, 0.0);

	glColor3f(0.0, 1.0, 0.0);
  	glVertex3f(7.0, 7.0, 0.0);

	glColor3f(0.0, 0.0, 1.0);
  	glVertex3f(5.0, 11.0, 0.0);

	glEnd();

	glBegin(GL_POLYGON);//triangle 2
	glColor3f(1.0, 0.0, 0.0);
 	glVertex3f(3.0, 7.0, 0.0);

	glColor3f(0.0, 1.0, 0.0);
  	glVertex3f(3.0, 3.0, 0.0);

	glColor3f(0.0, 0.0, 1.0);
  	glVertex3f(-1.0, 5.0, 0.0);

	glEnd();

	glBegin(GL_POLYGON); //triangle 3
	glColor3f(1.0, 0.0, 0.0);
 	glVertex3f(7.0, 7.0, 0.0);

	glColor3f(0.0, 1.0, 0.0);
  	glVertex3f(7.0, 3.0, 0.0);

	glColor3f(0.0, 0.0, 1.0);
  	glVertex3f(11.0, 5.0, 0.0);

	glEnd();

	

 	glBegin(GL_POLYGON);//cube
	glColor3f(0.0, 1.0, 1.0);
  	glVertex3f(3.0, 3.0, 0.0);
  	glVertex3f(7.0, 3.0, 0.0);
  	glVertex3f(7.0, 7.0, 0.0);
  	glVertex3f(3.0, 7.0, 0.0);

 	glEnd();

 	glFlush();
}

int main(int argc, char **argv){

	
 	glutInit(&argc, argv);
 	glutInitDisplayMode ( GLUT_SINGLE | GLUT_RGB | GLUT_DEPTH);

 	glutInitWindowPosition(0,0);
 	glutInitWindowSize(500,500);
 	glutCreateWindow ("pyramid");

	glClearColor(0.0, 0.0, 0.0, 0.0);  
 	glShadeModel (GL_SMOOTH);       
 	glMatrixMode(GL_PROJECTION);              
 	glLoadIdentity();                           
 	glOrtho(-10.0, 15.0, -10.0, 15.0, -1.0, 1.0);      

 	glutDisplayFunc(display);
 	glutMainLoop();

 return 0;
}
