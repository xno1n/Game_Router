#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<dos.h>
void ascundecursor()
{
_AH=1;
_CH=0x20;

}
int sunet(void)
 {


   return 0;
  }
void main(void)
{
clrscr();
textmode(2);
struct  time t;
gettime(&t);
gotoxy(30,12);
ascundecursor();
//getch();
clrscr();
sunet();
int x=2,y=2;
int i=1,j=1,c,p,m,n;
char a[25][80];
et1 :clrscr();gotoxy(31,8);textcolor(130);
cprintf("Little boy");
gotoxy(31,11);textcolor(6);cprintf("1) About game");
gotoxy(31,12);textcolor(3);cprintf("2) Play");
gotoxy(31,13);textcolor(9);cprintf("3) Load games");
gotoxy(31,14);textcolor(10);cprintf("4) Time");
gotoxy(31,15);textcolor(12);cprintf("5) Exit");
textcolor(8);
c=getch();
if(c==52) {
	  clrscr();gotoxy(24,12);
	  cprintf("Time when game started was: %2d:%02d:%02d\n",t.ti_hour, t.ti_min, t.ti_sec);
	  getch();
	  goto et1;
	  }
if(c==53) goto et3;
else if (c==49)
{clrscr();
FILE *stream;
char buf[20];
if ((stream = fopen("Game.rrr", "r"))
    == NULL)
{
   fprintf(stderr, "Error\n");
}
fread(buf, 700, 1, stream);
printf("%s\n", buf);
fclose(stream);
getch();
}
if(c==51)
{
clrscr();
textcolor(9);
cprintf("Under construction...");
getch();

}
if (c==50)
{clrscr();
textcolor(3);
gotoxy(31,11); cprintf("1) Single player");
gotoxy(31,12); cprintf("2) Deathmatch");
gotoxy(31,13); cprintf("3) Multiplayer");
c=getch();
if(c==49)
{
{clrscr();
gotoxy(1,1);textcolor(6);
randomize();
printf("\n");
for(i=1;i<25;i++)
 for(j=1;j<=80;j++)
   {a[i][j]=random(4);}
for(i=1;i<25;i++)
 for(j=1;j<=80;j++)
   {
     if ((a[i][j]==2)||(a[i][j]==3)||(a[i][j]==0)) a[i][j]='.';
     else a[i][j]='þ';
   }
for(i=1;i<25;i++) {a[i][1]='þ';a[i][80]='þ';}
for(j=1;j<=80;j++) {a[1][j]='þ';a[24][j]='þ';}
a[2][2]='.';a[22][79]='.';a[2][3]='.';a[2][4]='.';
a[3][2]='.';a[3][2]='.';a[3][3]='.';a[23][79]='.';
a[23][78]='.';a[23][77]='.';a[23][76]='.';a[23][2]='.';
a[23][3]='.';a[23][4]='.';a[22][2]='.';a[22][3]='.';
a[22][4]='.';a[21][2]='.';a[21][3]='.';a[20][2]='.';
a[2][79]='.';a[2][78]='.';a[2][77]='.';a[2][76]='.';
a[3][79]='.';a[3][78]='.';a[4][79]='.';a[5][79]='.';

/*
for(i=1;i<25;i++)
 for(j=1;j<=80;j++)
    {printf("%c",a[i][j]);}
  */

i=2;j=2;
gotoxy(2,2);
textcolor(4);
cprintf("");
textcolor(8);
while(1)
 {
 c=getch();
 if((c==119)&&(a[i-1][j]=='.')) {if((i>1)&&(y>1)){
			       gotoxy(x,y);textcolor(2);
			       cprintf("%c",a[i][j]);
			       gotoxy(x,y-1);textcolor(4);
			       cprintf("");
			       y=y-1;i=i-1;}}
      else
	if((c==119)&&(a[i-1][j]=='þ')){if((i>1)&&(y>1)){
				    gotoxy(x,y-1); textcolor(6);
				    cprintf("%c",a[i-1][j]);
				    gotoxy(x,y);}}
	else
	  if ((c==97)&&(a[i][j-1]=='.')) {if((x>1)&&(j>1)){
					gotoxy(x,y);textcolor(2);
					cprintf("%c",a[i][j]);
					gotoxy(x-1,y); textcolor(4);
					cprintf("");
					x=x-1;j=j-1;}}
	    else
	      if((c==97)&&(a[i][j-1]=='þ')) {if((x>1)&&(j>1)){
					   gotoxy(x-1,y); textcolor(6);
					   cprintf("%c",a[i][j-1]);
					   gotoxy(x,y);}}
		else
		  if ((c==100)&&(a[i][j+1]=='.')) { if((x<=80)&&(j<=80)){
						  gotoxy(x,y);textcolor(2);
						  cprintf("%c",a[i][j]);
						  gotoxy(x+1,y);textcolor(4);
						  cprintf("");
						  x=x+1;j=j+1;}}
		    else
		      if((c==100)&&(a[i][j+1]=='þ')){ if((x<=80)&&(j<=80)){
						   gotoxy(x+1,y);textcolor(6);
						   cprintf("%c",a[i][j+1]);
						   gotoxy(x,y);}}
			  else
			    if ((c==115)&&(a[i+1][j]=='.')){ if((i<=24)&&(y<=24)){
							  gotoxy(x,y);textcolor(2);
							  cprintf("%c",a[i][j]);
							  gotoxy(x,y+1); textcolor(4);
							  cprintf("");
							  y=y+1;i=i+1;}}
			      else
				if((c==115)&&(a[i+1][j]=='þ')){ if((i<=24)&&(y<=24)){
							     gotoxy(x,y+1); textcolor(6);
							     cprintf("%c",a[i+1][j]);
							     gotoxy(x,y);}}
if (((i==24)&&(j==79))||((i==23)&&(j==79))||((i==23)&&(j==80))) break;
}
clrscr();
gotoxy(33,13);
cprintf("Congratualations! You win!");

}
}
if(c==51)
 {clrscr();
  cprintf("Under construction.......");
  getch();}
if(c==50)
{clrscr();
gotoxy(1,1);textcolor(6);
randomize();
printf("\n");
for(i=1;i<25;i++)
 for(j=1;j<=80;j++)
   {a[i][j]=random(4);}
for(i=1;i<25;i++)
 for(j=1;j<=80;j++)
   {
     if ((a[i][j]==2)||(a[i][j]==3)||(a[i][j]==0)) a[i][j]='.';
     else a[i][j]='þ';
   }
for(i=1;i<25;i++) {a[i][1]='þ';a[i][80]='þ';}
for(j=1;j<=80;j++) {a[1][j]='þ';a[24][j]='þ';}
a[2][2]='.';a[22][79]='.';a[2][3]='.';a[2][4]='.';
a[3][2]='.';a[3][2]='.';a[3][3]='.';a[23][79]='.';
a[23][78]='.';a[23][77]='.';a[23][76]='.';a[23][2]='.';
a[23][3]='.';a[23][4]='.';a[22][2]='.';a[22][3]='.';
a[22][4]='.';a[21][2]='.';a[21][3]='.';a[20][2]='.';
a[2][79]='.';a[2][78]='.';a[2][77]='.';a[2][76]='.';
a[3][79]='.';a[3][78]='.';a[4][79]='.';a[5][79]='.';

/*
for(i=1;i<25;i++)
 for(j=1;j<=80;j++)
    {printf("%c",a[i][j]);}
  */

i=2;j=2;
gotoxy(2,2);
textcolor(4);
cprintf("");
textcolor(8);
int xx=2,yy=23;
m=23;n=2;
gotoxy(2,23);
textcolor(9);
cprintf("");
textcolor(8);

while(1)
 {
 c=getch();
if((c==119)&&(a[i-1][j]=='.')) {if((i>1)&&(y>1)){
			       gotoxy(x,y);textcolor(2);
			       cprintf("%c",a[i][j]);
			       gotoxy(x,y-1);textcolor(4);
			       cprintf("");
			       y=y-1;i=i-1;}}
      else
	if((c==119)&&(a[i-1][j]=='þ')){if((i>1)&&(y>1)){
				    gotoxy(x,y-1); textcolor(6);
				    cprintf("%c",a[i-1][j]);
				    gotoxy(x,y);}}
	else
	  if ((c==97)&&(a[i][j-1]=='.')) {if((x>1)&&(j>1)){
					gotoxy(x,y);textcolor(2);
					cprintf("%c",a[i][j]);
					gotoxy(x-1,y); textcolor(4);
					cprintf("");
					x=x-1;j=j-1;}}
	    else
	      if((c==97)&&(a[i][j-1]=='þ')) {if((x>1)&&(j>1)){
					   gotoxy(x-1,y); textcolor(6);
					   cprintf("%c",a[i][j-1]);
					   gotoxy(x,y);}}
		else
		  if ((c==100)&&(a[i][j+1]=='.')) { if((x<=80)&&(j<=80)){
						  gotoxy(x,y);textcolor(2);
						  cprintf("%c",a[i][j]);
						  gotoxy(x+1,y);textcolor(4);
						  cprintf("");
						  x=x+1;j=j+1;}}
		    else
		      if((c==100)&&(a[i][j+1]=='þ')){ if((x<=80)&&(j<=80)){
						   gotoxy(x+1,y);textcolor(6);
						   cprintf("%c",a[i][j+1]);
						   gotoxy(x,y);}}
			  else
			    if ((c==115)&&(a[i+1][j]=='.')){ if((i<=24)&&(y<=24)){
							  gotoxy(x,y);textcolor(2);
							  cprintf("%c",a[i][j]);
							  gotoxy(x,y+1); textcolor(4);
							  cprintf("");
							  y=y+1;i=i+1;}}
			      else
				if((c==115)&&(a[i+1][j]=='þ')){ if((i<=24)&&(y<=24)){
							     gotoxy(x,y+1); textcolor(6);
							     cprintf("%c",a[i+1][j]);
							     gotoxy(x,y);}}

  else
 if((c==56)&&(a[m-1][n]=='.')) {if((m>1)&&(yy>1)){
			       gotoxy(xx,yy);textcolor(2);
			       cprintf("%c",a[m][n]);
			       gotoxy(xx,yy-1);textcolor(9);
			       cprintf("");
			       yy=yy-1;m=m-1;}}
      else
	if((c==56)&&(a[m-1][n]=='þ')){if((m>1)&&(yy>1)){
				    gotoxy(xx,yy-1); textcolor(6);
				    cprintf("%c",a[m-1][n]);
				    gotoxy(xx,yy);}}
	else
	  if ((c==52)&&(a[m][n-1]=='.')) {if((xx>1)&&(n>1)){
					gotoxy(xx,yy);textcolor(2);
					cprintf("%c",a[m][n]);
					gotoxy(xx-1,yy); textcolor(9);
					cprintf("");
					xx=xx-1;n=n-1;}}
	    else
	      if((c==52)&&(a[m][n-1]=='þ')) {if((xx>1)&&(n>1)){
					   gotoxy(xx-1,yy); textcolor(6);
					   cprintf("%c",a[m][n-1]);
					   gotoxy(xx,yy);}}
		else
		  if ((c==54)&&(a[m][n+1]=='.')) { if((xx<=80)&&(n<=80)){
						  gotoxy(xx,yy);textcolor(2);
						  cprintf("%c",a[m][n]);
						  gotoxy(xx+1,yy);textcolor(9);
						  cprintf("");
						  xx=xx+1;n=n+1;}}
		    else
		      if((c==54)&&(a[m][n+1]=='þ')){ if((xx<=80)&&(n<=80)){
						   gotoxy(xx+1,yy);textcolor(6);
						   cprintf("%c",a[m][n+1]);
						   gotoxy(xx,yy);}}
			  else
			    if ((c==53)&&(a[m+1][n]=='.')){ if((m<24)&&(yy<24)){
							  gotoxy(xx,yy);textcolor(2);
							  cprintf("%c",a[m][n]);
							  gotoxy(xx,yy+1); textcolor(9);
							  cprintf("");
							  yy=yy+1;m=m+1;}}
			      else
				if((c==53)&&(a[m+1][n]=='þ')){ if((m<24)&&(yy<24)){
							     gotoxy(xx,yy+1); textcolor(6);
							     cprintf("%c",a[m+1][n]);
							     gotoxy(xx,yy);}}


if (((i==23)&&(j==79))||((m==2)&&(n==79))) break;
}
clrscr();
gotoxy(33,13);
et2: cprintf("Congruatulations! You win!");

}
else goto et1;
}
else goto et1;
et3: getch();
}