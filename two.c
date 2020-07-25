#include<stdio.h> 
#include<GL/glut.h> 
#include<math.h> 

void display (void) 
{
	typedef GLfloat point2[2];

	point2 vertice[8] = {
	  {0.0,0.0},   
	  {-0.5,0.0},   
	  {-0.5,-0.5},   
	  {0.0,-0.5},   
	  {-0.3,-0.3},   
	  {0.2,-0.3},   
	  {0.2,0.2},   
	  {-0.3,0.2}
	};




	glBegin(GL_LINES);
		glVertex2fv(vertice[0]);
		glVertex2fv(vertice[1]);

		glVertex2fv(vertice[1]);
		glVertex2fv(vertice[2]);

		glVertex2fv(vertice[2]);
		glVertex2fv(vertice[3]);

		glVertex2fv(vertice[3]);
		glVertex2fv(vertice[0]);

		glVertex2fv(vertice[4]);
		glVertex2fv(vertice[5]);	

		glVertex2fv(vertice[5]);
		glVertex2fv(vertice[6]);

		glVertex2fv(vertice[6]);
		glVertex2fv(vertice[7]);

		glVertex2fv(vertice[7]);
		glVertex2fv(vertice[4]);

		glVertex2fv(vertice[0]);
		glVertex2fv(vertice[6]);

		glVertex2fv(vertice[1]);
		glVertex2fv(vertice[7]);

		glVertex2fv(vertice[2]);
		glVertex2fv(vertice[4]);

		glVertex2fv(vertice[3]);
		glVertex2fv(vertice[5]);

	
		  
	glEnd();





	glFlush();

}




int main (int argc, char** argv) 
{
	glutInit(&argc, argv); 
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB); 
	
	
	glutInitWindowSize(500, 500); 
	glutInitWindowPosition(100, 100); 

	glutCreateWindow("Cube"); 
	
	glClearColor(0.0, 0.0, 0.0, 1.0);
	glColor3f(1.0, 0.1, 0.1);



	glutDisplayFunc(display); 
	glutMainLoop();

}
