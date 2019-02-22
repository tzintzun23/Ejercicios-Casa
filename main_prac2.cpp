//Semestre 2017 - 2
//************************************************************//
//************************************************************//
//************** Alumno (s): *********************************//
//*************											******//
//*************											******//
//************************************************************//



//Nombre: Hern�ndez Tzintzun Daniel
//Pr�ctica: 2
//Versi�n VS: 2017
//Instrucciones: Ejercicio de casa, con la funci�n GL_QUADS, se
//				 realiza la representaci�n de la cabeza de Mario Bros



#include "Main.h"
void InitGL ( GLvoid )     // Inicializamos parametros
{
	//glShadeModel(GL_FLAT);							// Habilitamos Smooth Shading
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f);				// Blanco de fondo
	//glClearDepth(1.0f);									// Configuramos Depth Buffer
	//glEnable(GL_DEPTH_TEST);							// Habilitamos Depth Testing
	//glDepthFunc(GL_LEQUAL);								// Tipo de Depth Testing a realizar
	
	
}

void display ( void )   // Creamos la funcion donde se dibuja
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);	// Limiamos pantalla y Depth Buffer	
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();									// Reinicializamos la actual matriz Modelview

	//Poner aqui codigo ha dibujar

	//Sombrero
	glColor3f(1.0, 0.0, 0.0);

	glBegin(GL_QUADS);
		glVertex3f(-3.0f, 3.0f, 0.0f);
		glVertex3f(2.0f, 3.0f, 0.0f);
		glVertex3f(2.0f, 4.0f, 0.0f);
		glVertex3f(-3.0f, 4.0f, 0.0f);
	glEnd();

	glBegin(GL_QUADS);
		glVertex3f(-4.0f, 2.0f, 0.0f);
		glVertex3f(5.0f, 2.0f, 0.0f);
		glVertex3f(5.0f, 3.0f, 0.0f);
		glVertex3f(-4.0f, 3.0f, 0.0f);
	glEnd();

	
	//Cabello y bigote
	glColor3f(0.376, 0.254, 0.184);

	glBegin(GL_QUADS);
		glVertex3f(-4.0f, 1.0f, 0.0f);
		glVertex3f(-1.0f, 1.0f, 0.0f);
		glVertex3f(-1.0f, 2.0f, 0.0f);
		glVertex3f(-4.0f, 2.0f, 0.0f);
	glEnd();

	glBegin(GL_QUADS);
		glVertex3f(-3.0f, 0.0f, 0.0f);
		glVertex3f(-2.0f, 0.0f, 0.0f);
		glVertex3f(-2.0f, 1.0f, 0.0f);
		glVertex3f(-3.0f, 1.0f, 0.0f);
	glEnd();

	glBegin(GL_QUADS);
		glVertex3f(-3.0f, -1.0f, 0.0f);
		glVertex3f(-1.0f, -1.0f, 0.0f);
		glVertex3f(-1.0f, 0.0f, 0.0f);
		glVertex3f(-3.0f, 0.0f, 0.0f);
	glEnd();

	glBegin(GL_QUADS);
		glVertex3f(-5.0f, -1.0f, 0.0f);
		glVertex3f(-4.0f, -1.0f, 0.0f);
		glVertex3f(-4.0f, 1.0f, 0.0f);
		glVertex3f(-5.0f, 1.0f, 0.0f);
	glEnd();

	glBegin(GL_QUADS);
		glVertex3f(-5.0f, -2.0f, 0.0f);
		glVertex3f(-3.0f, -2.0f, 0.0f);
		glVertex3f(-3.0f, -1.0f, 0.0f);
		glVertex3f(-5.0f, -1.0f, 0.0f);
	glEnd();

	glBegin(GL_QUADS);
		glVertex3f(2.0f, -1.0f, 0.0f);
		glVertex3f(3.0f, -1.0f, 0.0f);
		glVertex3f(3.0f, 0.0f, 0.0f);
		glVertex3f(2.0f, 0.0f, 0.0f);
	glEnd();

	glBegin(GL_QUADS);
		glVertex3f(1.0f, -2.0f, 0.0f);
		glVertex3f(5.0f, -2.0f, 0.0f);
		glVertex3f(5.0f, -1.0f, 0.0f);
		glVertex3f(1.0f, -1.0f, 0.0f);
	glEnd();


	//Cara (piel)
	glColor3f(0.901, 0.733, 0.560);

	glBegin(GL_QUADS);
		glVertex3f(-4.0f, -1.0f, 0.0f);
		glVertex3f(-3.0f, -1.0f, 0.0f);
		glVertex3f(-3.0f, 1.0f, 0.0f);
		glVertex3f(-4.0f, 1.0f, 0.0f);
	glEnd();

	glBegin(GL_QUADS);
		glVertex3f(-2.0f, 0.0f, 0.0f);
		glVertex3f(-1.0f, 0.0f, 0.0f);
		glVertex3f(-1.0f, 1.0f, 0.0f);
		glVertex3f(-2.0f, 1.0f, 0.0f);
	glEnd();

	glBegin(GL_QUADS);
		glVertex3f(-3.0f, -3.0f, 0.0f);
		glVertex3f(-1.0f, -3.0f, 0.0f);
		glVertex3f(-1.0f, -1.0f, 0.0f);
		glVertex3f(-3.0f, -1.0f, 0.0f);
	glEnd();

	glBegin(GL_QUADS);
		glVertex3f(-1.0f, -3.0f, 0.0f);
		glVertex3f(1.0f, -3.0f, 0.0f);
		glVertex3f(1.0f, 2.0f, 0.0f);
		glVertex3f(-1.0f, 2.0f, 0.0f);
	glEnd();

	glBegin(GL_QUADS);
		glVertex3f(1.0f, -1.0f, 0.0f);
		glVertex3f(2.0f, -1.0f, 0.0f);
		glVertex3f(2.0f, 0.0f, 0.0f);
		glVertex3f(1.0f, 0.0f, 0.0f);
	glEnd();

	glBegin(GL_QUADS);
		glVertex3f(1.0f, -3.0f, 0.0f);
		glVertex3f(4.0f, -3.0f, 0.0f);
		glVertex3f(4.0f, -2.0f, 0.0f);
		glVertex3f(1.0f, -2.0f, 0.0f);
	glEnd();

	glBegin(GL_QUADS);
		glVertex3f(2.0f, 0.0f, 0.0f);
		glVertex3f(3.0f, 0.0f, 0.0f);
		glVertex3f(3.0f, 2.0f, 0.0f);
		glVertex3f(2.0f, 2.0f, 0.0f);
	glEnd();

	glBegin(GL_QUADS);
		glVertex3f(3.0f, 0.0f, 0.0f);
		glVertex3f(5.0f, 0.0f, 0.0f);
		glVertex3f(5.0f, 1.0f, 0.0f);
		glVertex3f(3.0f, 1.0f, 0.0f);
	glEnd();

	glBegin(GL_QUADS);
		glVertex3f(3.0f, -1.0f, 0.0f);
		glVertex3f(6.0f, -1.0f, 0.0f);
		glVertex3f(6.0f, 0.0f, 0.0f);
		glVertex3f(3.0f, 0.0f, 0.0f);
	glEnd();


	//Ojo
	glColor3f(0.0, 0.0, 0.0);

	glBegin(GL_QUADS);
		glVertex3f(1.0f, 0.0f, 0.0f);
		glVertex3f(2.0f, 0.0f, 0.0f);
		glVertex3f(2.0f, 2.0f, 0.0f);
		glVertex3f(1.0f, 2.0f, 0.0f);
	glEnd();


	glFlush();
}

void reshape ( int width , int height )   // Creamos funcion Reshape
{
	if (height==0)										// Prevenir division entre cero
	{
		height=1;
	}

	glViewport(0,0,width,height);

	glMatrixMode(GL_PROJECTION);						// Seleccionamos Projection Matrix
	glLoadIdentity();

	// Ortogonal
	glOrtho(-10,11,-8,9,-1,2);

	glMatrixMode(GL_MODELVIEW);							// Seleccionamos Modelview Matrix
	glLoadIdentity();									
}

// Termina la ejecucion del programa cuando se presiona ESC
void keyboard(unsigned char key, int x, int y)
{
	 switch (key) 
	 {
		case 27: exit(0);
				 break;
	 }
	  glutPostRedisplay();
}    

int main ( int argc, char** argv )   // Main Function
{
  glutInit            (&argc, argv); // Inicializamos OpenGL
  glutInitDisplayMode (GLUT_RGBA | GLUT_SINGLE); // Display Mode (Clores RGB y alpha | Buffer Sencillo )
  glutInitWindowSize  (500, 500);	// Tama�o de la Ventana
  glutInitWindowPosition (0, 0);	//Posicion de la Ventana
  glutCreateWindow    ("Practica 2"); // Nombre de la Ventana
  InitGL ();						// Parametros iniciales de la aplicacion
  glutDisplayFunc     ( display );  //Indicamos a Glut funci�n de dibujo
  glutReshapeFunc     ( reshape );	//Indicamos a Glut funci�n en caso de cambio de tamano
  glutKeyboardFunc	  (keyboard);	//Indicamos a Glut funci�n de manejo de teclado
  glutMainLoop        ( );          // 

  return 0;
}

