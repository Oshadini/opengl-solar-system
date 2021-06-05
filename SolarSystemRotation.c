#include <GL/glut.h>

const int   A = 500;  /* length of a side of the monitor window */
const float B = 500;  /* length of a side of the clipping rectangle */
const float C = 200;  /* length of a side of the square the program draws */






int ro = 150;
int rp = 20;
int rs = 55;
double rl2 = 80;
double rl3 = 100;
double rl4 = 150;
double rl5 = 130;
double rl6 = 180;
double rl7 = 225;
double rp2 = 4;
double rp3 = 5;
double rp4 = 10;
double rp5 = 15;
double rp6 = 12;
double rp8 = 15;

double   xcj = 1500;
double  ycj = -165;




int xc8 = 198;
int yc8 = -105;

int xc6 = -115;
int yc6 = -60;

int xc = 150;
int yc = 0;

int xc3 = -55;
int yc3 = 58;


int xc2 = 46;
int yc2 = -46;

int xc4 = -68;
int yc4 = -68;

int xc5 = 70;
int yc5 = 70;



int j = 0;
int j2 = 90;
int j4 = 180;
int j8 = 45;
int jc = 60;

void myinit(void)
{
  glClearColor(0.0, 0.0, 0.0, 0.0); /* gray background */

  glMatrixMode(GL_PROJECTION);      /* In World coordinates: */
  glLoadIdentity();                 /* position the "clipping rectangle" */
  gluOrtho2D( -B/2, B/2, -B/2, B/2);/* at -B/2, its right edge at +B/2, its bottom */
  glMatrixMode(GL_MODELVIEW);       /* edge at -B/2 and its top edge at +B/2 */
}

void display( void )
{

  glClear(GL_COLOR_BUFFER_BIT);     /* clear the window */

  glMatrixMode(GL_MODELVIEW);       /* The following coordinates are expressed */
  glLoadIdentity();                 /* in terms of World coordinates */


  glColor3f(1.0, 0.0, 0.0);



double xp1;
double yp1;
double xp3;
double yp3;

double angle1 = 2 * 3.14 * j / 360;
double angle2 = 2 * 3.14 * j2 / 360;
double angle4 = 2 * 3.14 * j4 / 360;
double angle8 = 2 * 3.14 * j8 / 360;
double anglec = 2 * 3.14 * jc / 360;
   int i;
   glBegin(GL_POLYGON); //  sun

       for(i =0; i <= 360; i++){
          double angle = 2 * 3.14 * i / 360;
          xp1 = rs*cos(angle);
          yp1 = rs*sin(angle);
          glVertex2d(xp1,yp1);
       }

   glEnd();



      glBegin(GL_POINTS); //  o1

       for(i =0; i <= 360; i++){
          double angle = 2 * 3.14 * i / 360;
          xp1 = ro*cos(angle);
          yp1 = ro*sin(angle);
          glVertex2d(xp1,yp1);
       }

   glEnd();








//O2
  glColor3f(1.0,1.0,1.0);
  glPointSize(3);
  for(i=0;i<=360;i++){
     double z = 2*3.14*i/360;
      xp1 = rl2*cos(z);
      yp1 = rl2*sin(z);

      glBegin(GL_POINTS);
      glVertex2d(xp1,yp1);
   }
   glEnd();

//O3

     glColor3f(1.0,1.0,1.0);
  glPointSize(3);
  for(i=0;i<=360;i++){
     double z = 2*3.14*i/360;
     xp1 = rl3*cos(z);
     yp1 = rl3*sin(z);

     glBegin(GL_POINTS);
     glVertex2d(xp1,yp1);
   }
   glEnd();


//O4

  glColor3f(1.0,1.0,1.0);
  glPointSize(3);
  for(i=0;i<=360;i++){
     double z = 2*3.14*i/360;
     xp1 = rl4*cos(z);
     yp1 = rl4*sin(z);

     glBegin(GL_POINTS);
     glVertex2d(xp1,yp1);
   }
   glEnd();

//circle 5



  glColor3f(1.0,1.0,1.0);
  glPointSize(3);
  for(i=0;i<=360;i++){
     double z = 2*3.14*i/360;
     xp1 = rl5*cos(z);
     yp1 = rl5*sin(z);

     glBegin(GL_POINTS);
     glVertex2d(xp1,yp1);
   }
   glEnd();


//circle 6

  glColor3f(1.0,1.0,1.0);
  glPointSize(3);
  for(i=0;i<=360;i++){
     double z = 2*3.14*i/360;
     xp1 = rl6*cos(z);
     yp1 = rl6*sin(z);

     glBegin(GL_POINTS);
     glVertex2d(xp1,yp1);
  }
   glEnd();


//circle 7

  glColor3f(1.0,1.0,1.0);
  glPointSize(3);
  for(i=0;i<=360;i++){
     double z = 2*3.14*i/360;
     xp1 = rl7*cos(z);
     yp1 = rl7*sin(z);

     glBegin(GL_POINTS);
     glVertex2d(xp1,yp1);
   }
   glEnd();










   glColor3f(0.0, 0.0, 1.0);
   glBegin(GL_POLYGON); //  P1

       for(i =0; i <= 360; i++){
          double angle = 2 * 3.14 * i / 360;
          xp1 = xc + rp*cos(angle);
          yp1 = yc + rp*sin(angle);
          glVertex2d(xp1,yp1);
       }

   glEnd();

   //2nd planet

glBegin(GL_POLYGON);
for(i=0;i<=360;i++){
      double z = 2*3.14*i/360;
       xp1 = xc2 +rp2*cos(z);
       yp1 = yc2 +rp2*sin(z);
       glVertex2d(xp1,yp1);
       glColor3f(1.0,0.5,0.0);
}
glEnd();


 //3rd planet


glColor3f(0.8, 0.498039,0.196078);
glBegin(GL_POLYGON);
for(i=0;i<=360;i++){
       double z = 2*3.14*i/360;
       xp1 = xc3 +rp3*cos(z);
       yp1 = yc3 +rp3*sin(z);
       glVertex2d(xp1,yp1);

}
glEnd();




//4th planet

glColor3f( 0.196078,0.8,0.196078);
glBegin(GL_POLYGON);
for(i=0;i<=360;i++){
      double z = 2*3.14*i/360;
      xp1 = xc4 +rp4*cos(z);
      yp1 = yc4 +rp4*sin(z);
      glVertex2d(xp1,yp1);

}
glEnd();


//5th planet

glBegin(GL_POLYGON);
for(i=0;i<=360;i++){
       double z = 2*3.14*i/360;
       xp1 = xc5 +rp5*cos(z);
       yp1 = yc5 +rp5*sin(z);
       glVertex2d(xp1,yp1);
       glColor3f(0.556863,0.137255,0.419608);
}
glEnd();



//6th planet
glBegin(GL_POLYGON);
for(i=0;i<=360;i++){
       double z = 2*3.14*i/360;
       xp1= xc6 +rp6*cos(z);
       yp1 = yc6 +rp6*sin(z);
       glVertex2d(xp1,yp1);
       glColor3f( 0.917647,0.917647,0.678431);

}
glEnd();



//8th planet
glBegin(GL_POLYGON);
for(i=0;i<=360;i++){
       double z = 2*3.14*i/360;
       xp1 = xc8 +rp8*cos(z);
      yp1 = yc8 +rp8*sin(z);
       glVertex2d(xp1,yp1);
       glColor3f(0.184314,0.184314,0.500000);

}
glEnd();


glFlush();                        /* send all commands */



      xc = ro*cos(anglec);
      yc = ro*sin(anglec);

      xc3 = rl3*cos(angle2);
      yc3 = rl3*sin(angle2);



      xc2 = rl2*cos(angle1);
      yc2 = rl2*sin(angle1);

      xc4 = rl4*cos(angle4);
      yc4 = rl4*sin(angle4);


      xc5 = rl5*cos(angle1);
      yc5= rl5*sin(angle1);


      xc6= rl6*cos(angle1);
      yc6= rl6*sin(angle1);

      xc8= rl7*cos(angle8);
      yc8= rl7*sin(angle8);


      xcj= rl7*cos(angle8);
      ycj= rl7*sin(angle8);


          j = j+3;
          j2 = j2+5;
          j4 = j4+1;
          j8 = j8+4;
          jc = jc+4;

   _sleep(15);// can use the function wait as well. the system("pause") is not encouraged
   glutPostRedisplay();
}


void main(int argc, char** argv)
{
  glutInit(&argc,argv);
  glutInitWindowSize( A, A );       /* A x A pixel screen window  */

  glutInitDisplayMode( GLUT_RGB | GLUT_SINGLE);
  glutCreateWindow("My Rectangle"); /* window title                   */
  glutDisplayFunc(display);         /* tell OpenGL main loop what     */
  myinit();                         /* set attributes                 */

  glutMainLoop();                   /* pass control to the main loop  */
}

