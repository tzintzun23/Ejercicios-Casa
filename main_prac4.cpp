//Semestre 2017 - 2
//************************************************************//
//************************************************************//
//************** Alumno (s): *********************************//
//*************											******//
//*************											******//
//************************************************************//

//Nombre: Hern�ndez Tzintzun Daniel
//Pr�ctica: 4
//Versi�n VS: 2017
//Instrucciones: Ejercicio Casa. Figura de un robot hecha con la
//				 funci�n prisma, la cual se modific� para hacer
//				 cubos de distintos tama�os y colores, para poder
//				 darle forma.


#include "Main.h"

float transX = 0.0f;
float transY = 0.0f;
float transZ = -5.0f;
float angX = 0.0f;
float angY = 0.0f;

int screenW = 0.0;
int screenH = 0.0;


void InitGL ( void )     // Inicializamos parametros
{

	//glShadeModel(GL_SMOOTH);							// Habilitamos Smooth Shading
	glClearColor(0.67f, 0.73f, 0.75f, 1.0f);				// Gris de fondo
	glClearDepth(1.0f);									// Configuramos Depth Buffer
	glEnable(GL_DEPTH_TEST);							// Habilitamos Depth Testing
	//glEnable(GL_LIGHTING);
	glDepthFunc(GL_LEQUAL);								// Tipo de Depth Testing a realizar
	//glEnable ( GL_COLOR_MATERIAL );
	glHint(GL_PERSPECTIVE_CORRECTION_HINT, GL_NICEST);
}

void prisma(void)
{
	GLfloat vertice [8][3] = {
				{0.5 ,-0.5, 0.5},    //Coordenadas V�rtice 0 V0
				{-0.5 ,-0.5, 0.5},    //Coordenadas V�rtice 1 V1
				{-0.5 ,-0.5, -0.5},    //Coordenadas V�rtice 2 V2
				{0.5 ,-0.5, -0.5},    //Coordenadas V�rtice 3 V3
				{0.5 ,0.5, 0.5},    //Coordenadas V�rtice 4 V4
				{0.5 ,0.5, -0.5},    //Coordenadas V�rtice 5 V5
				{-0.5 ,0.5, -0.5},    //Coordenadas V�rtice 6 V6
				{-0.5 ,0.5, 0.5},    //Coordenadas V�rtice 7 V7
				};

		glBegin(GL_POLYGON);	//Front(rojo)
			//glColor3f(1.0,0.0,0.0);
			glVertex3fv(vertice[0]);
			glVertex3fv(vertice[4]);
			glVertex3fv(vertice[7]);
			glVertex3fv(vertice[1]);
		glEnd();

		glBegin(GL_POLYGON);	//Right (amarillo)
			//glColor3f(0.84, 0.97, 0.37);
			glVertex3fv(vertice[0]);
			glVertex3fv(vertice[3]);
			glVertex3fv(vertice[5]);
			glVertex3fv(vertice[4]);
		glEnd();

		glBegin(GL_POLYGON);	//Back(verde)
			//glColor3f(0.23, 0.87, 0.48);
			glVertex3fv(vertice[6]);
			glVertex3fv(vertice[5]);
			glVertex3fv(vertice[3]);
			glVertex3fv(vertice[2]);
		glEnd();

		glBegin(GL_POLYGON);  //Left(rosa)
			//glColor3f(0.98, 0.73, 0.9);
			glVertex3fv(vertice[1]);
			glVertex3fv(vertice[7]);
			glVertex3fv(vertice[6]);
			glVertex3fv(vertice[2]);
		glEnd();

		glBegin(GL_POLYGON);  //Bottom(morado)
			//glColor3f(0.78, 0.03, 0.97);
			glVertex3fv(vertice[0]);
			glVertex3fv(vertice[1]);
			glVertex3fv(vertice[2]);
			glVertex3fv(vertice[3]);
		glEnd();

		glBegin(GL_POLYGON);  //Top(azul)
			//glColor3f(0.0,0.0,1.0);
			glVertex3fv(vertice[4]);
			glVertex3fv(vertice[5]);
			glVertex3fv(vertice[6]);
			glVertex3fv(vertice[7]);
		glEnd();
}

void display ( void )   // Creamos la funcion donde se dibuja
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);	// Limpiamos pantalla y Depth Buffer
	//glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();

		glTranslatef(transX, transY, transZ);
		glRotatef(angX, 1, 0, 0);
		glRotatef(angY, 0, 1, 0);

		//Poner C�digo Aqu�

		//Cabeza
		glColor3f(1, 1, 1);
		prisma();

		//Cuello
		glColor3f(0.92, 0.37, 0.76);
		glTranslatef(0, -0.62, 0);
		glScalef(0.6, 0.2, 0.6);
		prisma();
		
		//Cuerpo
		glColor3f(0, 0, 1);
		glTranslatef(0, -5, 0);
		glScalef(3, 9, 3);	//Nueva escala
		prisma();

		//Piernas
		glColor3f(1, 0, 0);
		glTranslatef(-0.32, -0.75, 0);
		glScalef(0.35, 0.5, 0.35);	//Nueva escala
		prisma();

		glTranslatef(1.7, 0, 0);
		prisma();


		glColor3f(0, 1, 0);
		glTranslatef(0, -0.65, 0);
		glScalef(1, 0.3, 1);	//Nueva escala
		prisma();

		glTranslatef(-1.7, 0, 0);
		prisma();


		glColor3f(0, 0, 1);
		glTranslatef(0, -2, 0);
		glScalef(1, 3, 1);	//Nueva escala
		prisma();

		glTranslatef(1.7, 0, 0);
		prisma();


		glColor3f(0.29, 0.14, 0.14);
		glTranslatef(0.5, -0.75, 0);
		glScalef(2, 0.5, 1);	//Nueva escala
		prisma();

		glTranslatef(-1.35, 0, 0);
		prisma();

		//Brazos
		glColor3f(0, 1, 0);
		glTranslatef(-0.25, 9.3, 0);
		glScalef(0.5, 1, 1);	//Nueva escala
		prisma();

		glColor3f(0.85, 0.87, 0.27);
		glTranslatef(-1.25, 0, 0);
		glScalef(1.5, 1, 1);	//Nueva escala
		prisma();
		
		glColor3f(1, 0, 0);
		glTranslatef(-1, 0, 0);
		prisma();

		glColor3f(0, 0, 0);
		glTranslatef(-0.65, 0, 0);
		glScalef(0.3, 1, 1);	//Nueva escala
		prisma();


		glColor3f(0, 1, 0);
		glTranslatef(16.7, 0, 0);
		glScalef(2, 1, 1);	//Nueva escala
		prisma();

		glColor3f(0.85, 0.87, 0.27);
		glTranslatef(1.3, 0, 0);
		glScalef(1.5, 1, 1);	//Nueva escala
		prisma();

		glColor3f(1, 0, 0);
		glTranslatef(1, 0, 0);
		prisma();

		glColor3f(0, 0, 0);
		glTranslatef(0.65, 0, 0);
		glScalef(0.3, 1, 1);	//Nueva escala
		prisma();




		//glRotatef(90, 1, 0, 0);	//Regreso a posicion original
		//glTranslatef(1, 0, 0);
		//glRotatef(90, 0, 1, 0);	//Nueva rotacion de color
		//prisma();

  glutSwapBuffers ( );
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

	// Tipo de Vista
	//glOrtho(-5,5,-5,5,0.2,20);	
	glFrustum (-0.1, 0.1,-0.1, 0.1, 0.1, 50.0);

	glMatrixMode(GL_MODELVIEW);							// Seleccionamos Modelview Matrix
}

void keyboard ( unsigned char key, int x, int y )  // Create Keyboard Function
{
	switch ( key ) {
		case 'w':
		case 'W':
			transZ +=0.3f;
			break;
		case 's':
		case 'S':
			transZ -= 0.3f;
			break;
		case 'a':
		case 'A':
			transX -= 0.3f;
			break;
		case 'd':
		case 'D':
			transX += 0.3f;
			break;

		case 'q':
			transY += 0.3f;
			break;
		case 'e':
			transY -= 0.3f;
			break;

		case 27:        // Cuando Esc es presionado...
			exit ( 0 );   // Salimos del programa
		break;        
		default:        // Cualquier otra
		break;
  }
	glutPostRedisplay();
}

void arrow_keys ( int a_keys, int x, int y )  // Funcion para manejo de teclas especiales (arrow keys)
{
  switch ( a_keys ) {
    case GLUT_KEY_UP:		// Presionamos tecla ARRIBA...
		angX += 1.0f;
		break;
    case GLUT_KEY_DOWN:		// Presionamos tecla ABAJO...
		angX -= 1.0f;
		break;
	case GLUT_KEY_LEFT:
		angY += 1.0f;
		break;
	case GLUT_KEY_RIGHT:
		angY -= 1.0f;
		break;
    default:
      break;
  }
  glutPostRedisplay();
}


int main ( int argc, char** argv )   // Main Function
{
  glutInit            (&argc, argv); // Inicializamos OpenGL
  //glutInitDisplayMode (GLUT_RGBA | GLUT_SINGLE | GLUT_DEPTH); // Display Mode (Clores RGB y alpha | Buffer Sencillo )
  glutInitDisplayMode (GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH); // Display Mode (Clores RGB y alpha | Buffer Doble )
  screenW = glutGet(GLUT_SCREEN_WIDTH);
  screenH = glutGet(GLUT_SCREEN_HEIGHT);
  glutInitWindowSize  (500, 500);	// Tama�o de la Ventana
  glutInitWindowPosition (0, 0);	//Posicion de la Ventana
  glutCreateWindow    ("Practica 4"); // Nombre de la Ventana
  printf("Resolution H: %i \n", screenW);
  printf("Resolution V: %i \n", screenH);
  InitGL ();						// Parametros iniciales de la aplicacion
  glutDisplayFunc     ( display );  //Indicamos a Glut funci�n de dibujo
  glutReshapeFunc     ( reshape );	//Indicamos a Glut funci�n en caso de cambio de tamano
  glutKeyboardFunc    ( keyboard );	//Indicamos a Glut funci�n de manejo de teclado
  glutSpecialFunc     ( arrow_keys );	//Otras
  glutMainLoop        ( );          // 

  return 0;
}



