#include<windows.h>
#include<GL\glut.h>
#include <GL/glu.h>
#include<math.h>
#include <stdlib.h>
#include<stdio.h>
#define PI 3.1416

GLint i, j, k;
GLfloat ax=0,bx=0,cx=0,dx=0,ex=0,fx=0;
void init(void)
{
	glClearColor(0.52,0.8,0.92, 0.0); //sky color
	glMatrixMode(GL_PROJECTION);
	gluOrtho2D(0.0, 1000.0, 0.0, 500.0);
}

void circle(GLdouble rad)
{
    GLint points = 50;
    GLdouble delTheta = (2.0 * PI) / (GLdouble)points;
    GLdouble theta = 0.0;

    glBegin(GL_POLYGON);
    {
        for( i = 0; i <=50; i++, theta += delTheta )
        {
            glVertex2f(rad * cos(theta),rad * sin(theta));
        }
    }
    glEnd();
}

void Sun_Model(){

    glColor3ub(253,184,19);
    glPushMatrix();
    glTranslatef(200,450,0);
    circle(25);
    glPopMatrix();

}
void field(){
    ///Field

	glBegin(GL_POLYGON);
    glColor3ub(112,128,144);// grass
	glVertex2i(0, 50);
	glVertex2i(0, 90);
	glVertex2i(1000, 90);
	glVertex2i(1000, 50);
	glEnd();

    glLineWidth(2);
	glColor3ub(255,255,255);
	glEnable(GL_LINE_STIPPLE);
	glLineStipple(3, 0x00FF);
	glBegin(GL_LINES);
	glVertex2i(0,70);
	glVertex2i(1000,70);
	glEnd();
	glDisable(GL_LINE_STIPPLE);


	glBegin(GL_POLYGON);
    glColor3ub(135, 181, 89);// grass
	glVertex2i(0,220);
    glVertex2i(1000,220);
	glVertex2i(1000,90);
	glVertex2i(600,90);
	glEnd();

	glBegin(GL_TRIANGLES);
	glColor3ub(164, 209, 119);
	glVertex2i(0,90);
	glVertex2i(0,220);
	glVertex2i(600,90);

	glEnd();


	glBegin(GL_POLYGON);
	glColor3ub(123, 219, 101); // shadow effect
	glVertex2i(0, 0);
	glVertex2i(0, 50);
	glVertex2i(1000, 50);
	glVertex2i(1000, 0);

	glEnd();

}
  void crane()
{
    //base
    glBegin(GL_POLYGON);
    glColor3ub(255,255,255);
    glVertex2i(10,90);
    glVertex2i(10,100);
    glVertex2i(80,100);
    glVertex2i(80,90);
    glEnd();

     //top
    glBegin(GL_POLYGON);
    glColor3ub(255,255,255);
    glVertex2i(10,300);
    glVertex2i(10,305);
    glVertex2i(80,305);
    glVertex2i(80,300);
    glEnd();

    //topcabinet
    glBegin(GL_POLYGON);
    glColor3ub(255,255,0);
    glVertex2i(15,305);
    glVertex2i(15,355);
    glVertex2i(55,355);
    glVertex2i(75,330);
    glVertex2i(75,305);
    glEnd();


    glColor3ub(255,255,0);
    glLineWidth(5);
    glBegin(GL_LINES);
    glVertex2i(25,100);
    glVertex2i(25,300);
    glEnd();

    glBegin(GL_LINES);
    glVertex2i(65,100);
    glVertex2i(65,300);
    glEnd();

    glBegin(GL_LINE_LOOP);
    glVertex2i(65,100);
    glVertex2i(25,100);
    glVertex2i(65,150);
    glVertex2i(25,150);
    glEnd();

        glBegin(GL_LINE_LOOP);
    glVertex2i(65,150);
    glVertex2i(25,150);
    glVertex2i(65,200);
    glVertex2i(25,200);
    glEnd();

     glBegin(GL_LINE_LOOP);
    glVertex2i(65,200);
    glVertex2i(25,200);
    glVertex2i(65,250);
    glVertex2i(25,250);
    glEnd();

    glBegin(GL_LINE_LOOP);
    glVertex2i(65,250);
    glVertex2i(25,250);
    glVertex2i(65,300);
    glVertex2i(25,300);
    glEnd();

//horizontal

    glColor3ub(255,255,0);
    glLineWidth(5);
    glBegin(GL_LINES);
    glVertex2i(05,310);
    glVertex2i(05,350);
    glVertex2i(05,350);
    glVertex2i(355,350);
    glVertex2i(355,350);
    glVertex2i(355,310);
    glVertex2i(355,310);
    glVertex2i(05,310);
    glEnd();

    glBegin(GL_LINE_LOOP);
    glVertex2i(05,310);
    glVertex2i(05,350);
    glVertex2i(55,310);
    glVertex2i(55,350);
    glEnd();

     glBegin(GL_LINE_LOOP);
    glVertex2i(55,310);
    glVertex2i(55,350);
    glVertex2i(105,310);
    glVertex2i(105,350);
    glEnd();

    glBegin(GL_LINE_LOOP);
    glVertex2i(105,310);
    glVertex2i(105,350);
    glVertex2i(155,310);
    glVertex2i(155,350);
    glEnd();


    glBegin(GL_LINE_LOOP);
    glVertex2i(155,310);
    glVertex2i(155,350);
    glVertex2i(205,310);
    glVertex2i(205,350);
    glEnd();

    glBegin(GL_LINE_LOOP);
    glVertex2i(205,310);
    glVertex2i(205,350);
    glVertex2i(255,310);
    glVertex2i(255,350);
    glEnd();

    glBegin(GL_LINE_LOOP);
    glVertex2i(255,310);
    glVertex2i(255,350);
    glVertex2i(305,310);
    glVertex2i(305,350);
    glEnd();

    glBegin(GL_LINE_LOOP);
    glVertex2i(305,310);
    glVertex2i(305,350);
    glVertex2i(355,310);
    glVertex2i(355,350);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(0,0,0);
    glVertex2i(260,300);
    glVertex2i(260,308);
    glVertex2i(300,308);
    glVertex2i(300,300);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(255,0,0);
    glVertex2i(270,280);
    glVertex2i(270,290);
    glVertex2i(290,290);
    glVertex2i(290,280);
    glEnd();

    glBegin(GL_POLYGON);
   glColor3ub(171, 201, 219);
    glVertex2i(20,310);
    glVertex2i(20,350);
    glVertex2i(50,350);
    glVertex2i(70,330);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(206, 227, 240);
    glVertex2i(70,330);
    glVertex2i(70,310);
    glVertex2i(20,310);
    glEnd();

}
void hook(){

    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2i(280,308);
    glVertex2i(280,270);
    glEnd();

}

void hookk(){
    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2i(280,270);
    glVertex2i(290,260);
    glVertex2i(290,260);
    glVertex2i(280,250);
    glVertex2i(280,250);
    glVertex2i(275,260);
    glEnd();

}
void movehook()
{

    glPushMatrix();
    hook();

    //glScalef(0.2,0.8,0);
     glTranslatef(0,-dx,0);
     if(dx >=30)
        glTranslatef(0,dx,0);
    hook();
    hookk();
    glPopMatrix();
}


void box(){
    glBegin(GL_QUADS);
    glColor3ub(110, 90, 89);
    glVertex2i(260,200);
    glVertex2i(260,240);
    glVertex2i(300,240);
    glVertex2i(300,200);
    glEnd();

    glLineWidth(1.5);
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2i(260,240);
    glVertex2i(280,252);
    glVertex2i(280,252);
    glVertex2i(300,240);
    glEnd();

}
void movebox(){

     glPushMatrix();
     glTranslatef(0,-ex,0);
     if( ex >=100)
        glTranslatef(0,ex-100,0);
    box();
    glPopMatrix();
}

void fact(){

//3d
    glBegin(GL_POLYGON);
    glColor3ub(237, 228, 228);
    glVertex2i(150,90);
    glVertex2i(100,110);
    glVertex2i(100,200);
    glVertex2i(150,190);
    glEnd();

    //dark
    glBegin(GL_POLYGON);
    glColor3ub(219, 193, 193);
    glVertex2i(150,90);
    glVertex2i(150,190);
    glVertex2i(200,200);
    glVertex2i(200,110);
    glEnd();

    //door
     glBegin(GL_POLYGON);
     glColor3ub(230, 220, 218);
     glVertex2i(155,100);
     glVertex2i(155,170);
     glVertex2i(195,180);
     glVertex2i(195,115);
     glEnd();



      glBegin(GL_POLYGON);
     glColor3ub(184, 176, 174);
     glVertex2i(155,100);
     glVertex2i(155,170);
     glVertex2i(180,160);
     glVertex2i(180,115);
     glEnd();

     glPointSize(5);
     glBegin(GL_POINTS);
     glColor3ub(0,0,0);
     glVertex2i(175,135);
     glVertex2i(175,138);
     glEnd();


    //triangle
     glBegin(GL_TRIANGLES);
    glColor3ub(201, 143, 143);
    glVertex2i(100,200);
    glVertex2i(145,240);
    glVertex2i(150,190);
    glEnd();

    //dark
     glBegin(GL_TRIANGLES);
    glColor3ub(199, 125, 125);
    glVertex2i(150,190);
    glVertex2i(145,240);
    glVertex2i(200,200);
    glEnd();


    //body
    glBegin(GL_POLYGON);
    glColor3ub(235, 244, 245);
    glVertex2i(500,0);
    glVertex2i(500,200);
    glVertex2i(600,200);
    glVertex2i(600,0);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(235, 244, 245);
    glVertex2i(500,220);
    glVertex2i(500,250);
    glVertex2i(600,250);
    glVertex2i(600,220);
    glEnd();

     //roof
    glBegin(GL_POLYGON);
    glColor3ub(56, 105, 112);
    glVertex2i(485,200);
    glVertex2i(485,220);
    glVertex2i(615,220);
    glVertex2i(615,200);
       glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(56, 105, 112);
    glVertex2i(485,250);
    glVertex2i(550,300);
    glVertex2i(615,250);
    glEnd();

//vent
    glBegin(GL_QUADS);
    glColor3ub(56, 105, 112);
    glVertex2i(530,165);
    glVertex2i(530,180);
    glVertex2i(570,180);
    glVertex2i(570,165);
    glEnd();

    //door

    glBegin(GL_QUADS);
    glColor3ub(56, 105, 112);
    glVertex2i(515,0);
    glVertex2i(515,140);
    glVertex2i(585,140);
    glVertex2i(585,0);
    glEnd();

}
 void chimney(void){
    //chimney
  glBegin(GL_QUADS);
  glColor3f(1,1,1);
  glVertex2i(635,210);
  glVertex2i(635,280);
  glVertex2i(670,280);
  glVertex2i(670,210);
  glEnd();

    glBegin(GL_QUADS);
  glColor3ub(235, 238, 242);
  glVertex2i(670,210);
  glVertex2i(670,280);
  glVertex2i(705,280);
  glVertex2i(705,210);
  glEnd();

//red
    glBegin(GL_QUADS);
  glColor3ub(237, 109, 109);
  glVertex2i(635,280);
  glVertex2i(635,310);
  glVertex2i(670,310);
  glVertex2i(670,280);
  glEnd();

   glBegin(GL_QUADS);
  glColor3ub(230, 87, 87);
  glVertex2i(670,280);
  glVertex2i(670,310);
  glVertex2i(705,310);
  glVertex2i(705,280);
  glEnd();


   //white
    glBegin(GL_QUADS);
  glColor3f(1,1,1);
  glVertex2i(635,310);
  glVertex2i(635,350);
  glVertex2i(670,350);
  glVertex2i(670,310);
  glEnd();


  glBegin(GL_QUADS);
  glColor3ub(235, 238, 242);
  glVertex2i(670,310);
  glVertex2i(670,350);
  glVertex2i(705,350);
  glVertex2i(705,310);
  glEnd();

  //red
   glBegin(GL_QUADS);
  glColor3ub(237, 109, 109);
  glVertex2i(635,350);
  glVertex2i(635,380);
  glVertex2i(670,380);
  glVertex2i(670,350);
  glEnd();

    glBegin(GL_QUADS);
  glColor3ub(230, 87, 87);
  glVertex2i(670,350);
  glVertex2i(670,380);
  glVertex2i(705,380);
  glVertex2i(705,350);
  glEnd();

  //brown
   glBegin(GL_QUADS);
  glColor3ub(48, 19, 19);
  glVertex2i(630,360);
  glVertex2i(630,370);
  glVertex2i(710,370);
  glVertex2i(710,360);
  glEnd();

//chimney3
 glBegin(GL_QUADS);
  glColor3f(1,1,1);
  glVertex2i(840,210);
  glVertex2i(840,280);
  glVertex2i(875,280);
  glVertex2i(875,210);
  glEnd();

    glBegin(GL_QUADS);
  glColor3ub(235, 238, 242);
  glVertex2i(875,210);
  glVertex2i(875,280);
  glVertex2i(905,280);
  glVertex2i(905,210);
  glEnd();

  //red

  glBegin(GL_QUADS);
  glColor3ub(237, 109, 109);
  glVertex2i(840,280);
  glVertex2i(840,310);
  glVertex2i(875,310);
  glVertex2i(875,280);
  glEnd();

   glBegin(GL_QUADS);
  glColor3ub(230, 87, 87);
  glVertex2i(875,280);
  glVertex2i(875,310);
  glVertex2i(905,310);
  glVertex2i(905,280);
  glEnd();

  //white
  glBegin(GL_QUADS);
  glColor3f(1,1,1);
  glVertex2i(840,310);
  glVertex2i(840,350);
  glVertex2i(875,350);
  glVertex2i(875,310);
  glEnd();


  glBegin(GL_QUADS);
  glColor3ub(235, 238, 242);
  glVertex2i(875,310);
  glVertex2i(875,350);
  glVertex2i(905,350);
  glVertex2i(905,310);
  glEnd();

  //red
   glBegin(GL_QUADS);
  glColor3ub(237, 109, 109);
  glVertex2i(840,350);
  glVertex2i(840,380);
  glVertex2i(875,380);
  glVertex2i(875,350);
  glEnd();

    glBegin(GL_QUADS);
  glColor3ub(230, 87, 87);
  glVertex2i(875,350);
  glVertex2i(875,380);
  glVertex2i(905,380);
  glVertex2i(905,350);
  glEnd();

  //brown
   glBegin(GL_QUADS);
  glColor3ub(48, 19, 19);
  glVertex2i(835,360);
  glVertex2i(835,370);
  glVertex2i(910,370);
  glVertex2i(910,360);
  glEnd();



  glBegin(GL_QUADS);
  glColor3f(1,1,1);
  glVertex2i(740,210);
  glVertex2i(740,280);
  glVertex2i(775,280);
  glVertex2i(775,210);
  glEnd();

    glBegin(GL_QUADS);
  glColor3ub(235, 238, 242);
  glVertex2i(775,210);
  glVertex2i(775,280);
  glVertex2i(805,280);
  glVertex2i(805,210);
  glEnd();

  //red

  glBegin(GL_QUADS);
  glColor3ub(237, 109, 109);
  glVertex2i(740,280);
  glVertex2i(740,310);
  glVertex2i(775,310);
  glVertex2i(775,280);
  glEnd();

   glBegin(GL_QUADS);
  glColor3ub(230, 87, 87);
  glVertex2i(775,280);
  glVertex2i(775,310);
  glVertex2i(805,310);
  glVertex2i(805,280);
  glEnd();

  //white
  glBegin(GL_QUADS);
  glColor3f(1,1,1);
  glVertex2i(740,310);
  glVertex2i(740,350);
  glVertex2i(775,350);
  glVertex2i(775,310);
  glEnd();


  glBegin(GL_QUADS);
  glColor3ub(235, 238, 242);
  glVertex2i(775,310);
  glVertex2i(775,350);
  glVertex2i(805,350);
  glVertex2i(805,310);
  glEnd();

  //red
   glBegin(GL_QUADS);
  glColor3ub(237, 109, 109);
  glVertex2i(740,350);
  glVertex2i(740,380);
  glVertex2i(775,380);
  glVertex2i(775,350);
  glEnd();

    glBegin(GL_QUADS);
  glColor3ub(230, 87, 87);
  glVertex2i(775,350);
  glVertex2i(775,380);
  glVertex2i(805,380);
  glVertex2i(805,350);
  glEnd();

  //brown
   glBegin(GL_QUADS);
  glColor3ub(48, 19, 19);
  glVertex2i(735,360);
  glVertex2i(735,370);
  glVertex2i(810,370);
  glVertex2i(810,360);
  glEnd();

 }

 void factory(void){
    //factory
    glColor3ub(235, 244, 245);
    glBegin(GL_POLYGON);
    glVertex2i(615,0);
    glVertex2i(615,200);
    glVertex2i(720,250);
    glVertex2i(720,0);
    glEnd();

       glBegin(GL_POLYGON);
    glVertex2i(720,0);
    glVertex2i(720,200);
    glVertex2i(820,250);
    glVertex2i(820,0);
    glEnd();

       glBegin(GL_POLYGON);
    glVertex2i(820,0);
    glVertex2i(820,200);
    glVertex2i(920,250);
    glVertex2i(920,0);
    glEnd();


    //roof
    glColor3ub(56, 105, 112);
    glBegin(GL_POLYGON);
    glVertex2i(615,200);
    glVertex2i(615,220);
    glVertex2i(720,270);
    glVertex2i(720,250);

    glEnd();

    glBegin(GL_POLYGON);
    glVertex2i(720,200);
    glVertex2i(720,220);
    glVertex2i(820,270);
    glVertex2i(820,250);

    glEnd();

    glBegin(GL_POLYGON);
    glVertex2i(820,200);
    glVertex2i(820,220);
    glVertex2i(920,270);
    glVertex2i(920,250);

    glEnd();

    //window border
   glColor3ub(56, 105, 112);
    glBegin(GL_POLYGON);

		glVertex2f(625,135);
		glVertex2f(625,185);
		glVertex2f(710,185);
		glVertex2f(710,135);

	glEnd();

	glBegin(GL_POLYGON);

		glVertex2f(730,135);
		glVertex2f(730,185);
		glVertex2f(810,185);
		glVertex2f(810,135);

	glEnd();

	glBegin(GL_POLYGON);

		glVertex2f(830,135);
		glVertex2f(830,185);
		glVertex2f(910,185);
		glVertex2f(910,135);

	glEnd();


    //window
    glColor3ub(223, 232, 242);
	glBegin(GL_POLYGON);

		glVertex2f(630,140);
		glVertex2f(630,180);
		glVertex2f(705,180);
		glVertex2f(705,140);

	glEnd();


	glBegin(GL_POLYGON);
	glVertex2f(735,140);
		glVertex2f(735,180);
		glVertex2f(805,180);
		glVertex2f(805,140);
        glEnd();

        glBegin(GL_POLYGON);
	glVertex2f(835,140);
		glVertex2f(835,180);
		glVertex2f(905,180);
		glVertex2f(905,140);
        glEnd();

        //windowlines
glLineWidth(5);
        glBegin(GL_LINES);
	glColor3ub(37, 45, 54);
	glVertex2i(650,140);
	glVertex2i(650,180);
    glEnd();

     glBegin(GL_LINES);
	glColor3ub(37, 45, 54);
	glVertex2i(680,140);
	glVertex2i(680,180);
    glEnd();

 glBegin(GL_LINES);
	glColor3ub(37, 45, 54);
	glVertex2i(755,140);
	glVertex2i(755,180);
    glEnd();

     glBegin(GL_LINES);
	glColor3ub(37, 45, 54);
	glVertex2i(785,140);
	glVertex2i(785,180);
    glEnd();

     glBegin(GL_LINES);
	glColor3ub(37, 45, 54);
	glVertex2i(855,140);
	glVertex2i(855,180);
    glEnd();

     glBegin(GL_LINES);
	glColor3ub(37, 45, 54);
	glVertex2i(885,140);
	glVertex2i(885,180);
    glEnd();
}
//smoke

void smoke_one(){

   glColor3ub(220,220,220);

    glPushMatrix();
    glTranslatef(670,400,0);
    circle(15);
    glPopMatrix();

     glPushMatrix();
    glTranslatef(678,420, 0);
    circle(16);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(685,415, 0);
    circle(17);
    glPopMatrix();

     glPushMatrix();
    glTranslatef(690,430, 0);
    circle(19);
    glPopMatrix();

}

void smoke_two(){

   glColor3ub(220,220,220);

    ///Top_Left

    glPushMatrix();
    glTranslatef(775,400,0);
    circle(15);
    glPopMatrix();

     glPushMatrix();
    glTranslatef(778,420, 0);
    circle(19);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(785,415, 0);
    circle(20);
    glPopMatrix();

     glPushMatrix();
    glTranslatef(790,430, 0);
    circle(16);
    glPopMatrix();

}

void smoke_three(){

   glColor3ub(220,220,220);

    ///Top_Left

    glPushMatrix();
    glTranslatef(875,400,0);
    circle(13);
    glPopMatrix();

     glPushMatrix();
    glTranslatef(878,420, 0);
    circle(14);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(885,415, 0);
    circle(20);
    glPopMatrix();

     glPushMatrix();
    glTranslatef(890,430, 0);
    circle(13);
    glPopMatrix();

}
void s_one(){
    glPushMatrix();
    glTranslatef(05,ax,0);
    smoke_one();
    glPopMatrix();
}
void s_two(){
    glPushMatrix();
    glTranslatef(05,bx,0);
    smoke_two();
    glPopMatrix();
}
void s_three(){
    glPushMatrix();
    glTranslatef(05,cx+20,0);
    smoke_three();
    glPopMatrix();
}
void s_four(){
    glPushMatrix();
    glTranslatef(05,bx,0);
    smoke_one();
    glPopMatrix();
}
void s_five(){
    glPushMatrix();
    glTranslatef(05,ax,0);
    smoke_two();
    glPopMatrix();
}
void s_six(){
    glPushMatrix();
    glTranslatef(05,cx,0);
    smoke_three();
    glPopMatrix();
}

void display(void)
{
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(0.0, 0.0, 1.0);
	Sun_Model();
	field();
	fact();
	chimney();
	factory();


	smoke_one();
	smoke_two();
	smoke_three();

    s_one();
    s_two();
    s_three();
    s_four();
    s_five();
    s_six();
    movehook();

    crane();

    movebox();

    glFlush();
}

void move_up(){

    ax = ax + .01;
    bx = bx + .008;
    cx = cx + .009;
    dx = dx + 0.02;
    ex = ex + 0.02;


    glutPostRedisplay();
}


void mouse(int key, int state, int x, int y){
    switch (key)
    {
    case GLUT_LEFT_BUTTON:
        if (state == GLUT_DOWN)
        {
            glutIdleFunc(move_up);
        }
        break;
    case GLUT_RIGHT_BUTTON:
        if(state == GLUT_DOWN)
        {
            glutIdleFunc(NULL);

        }
        break;
    default:
        break;
    }
}

int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowPosition(5,5);
	glutInitWindowSize(1800, 1800);
	glutCreateWindow("Destruction");
	init();
	glutDisplayFunc(display);
	glutMouseFunc(mouse);
	glutMainLoop();
}
