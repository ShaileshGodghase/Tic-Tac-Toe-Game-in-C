#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>

//char ar[3][3]={'1','2','3','4','5','6','7','8','9'};
int ak=100;
int p1wc=0,p2wc=0,md=0;
int checkWinner(char *name1,char *name2,char ar[3][3])
{
	if(ar[0][0]==ar[0][1] && ar[0][1]==ar[0][2])
	{

		if(ar[0][0]=='X')
		{
			for(ak=100;ak<=200;ak+=10)
			{
				sound(ak);
				outtextxy(100,300,name1);
				outtextxy(250,300,"WINS..!");
				delay(250);
			}
			p1wc++;
			nosound();
		}
		if(ar[0][0]=='O')
		{
			for(ak=100;ak<=200;ak+=10)
			{
				sound(ak);
				outtextxy(100,300,name2);
				outtextxy(250,300,"WINS..!");
				delay(250);
			}
			p2wc++;
			nosound();
		}
		return(20);
	}
	else if(ar[0][0]==ar[1][1] && ar[1][1]==ar[2][2])
	{

		if(ar[0][0]=='X')
		{
			for(ak=100;ak<=200;ak+=10)
			{
				sound(ak);
				outtextxy(100,300,name1);
				outtextxy(250,300,"WINS..!");
				delay(250);
			}
			p1wc++;
			nosound();
		}
		if(ar[0][0]=='O')
		{
			 for(ak=100;ak<=200;ak+=10)
			 {
				sound(ak);
				outtextxy(100,300,name2);
				outtextxy(250,300,"WINS..!");
				delay(250);
			 }
			 p2wc++;
			 nosound();
		}
		return(20);
	}
	else if(ar[0][0]==ar[1][0] && ar[1][0]==ar[2][0])
	{

		if(ar[0][0]=='X')
		{
			for(ak=100;ak<=200;ak+=10)
			{
				sound(ak);
				outtextxy(100,300,name1);
				outtextxy(250,300,"WINS..!");
				delay(250);
			}
			p1wc++;
			nosound();
		}
		if(ar[0][0]=='O')
		{
			for(ak=100;ak<=200;ak+=10)
			{
				sound(ak);
				outtextxy(100,300,name2);
				outtextxy(250,300,"WINS..!");
				delay(250);
			}
			p2wc++;
			nosound();
		}
		return(20);
	}
	else if(ar[1][0]==ar[1][1] && ar[1][1]==ar[1][2])
	{

		if(ar[1][0]=='X')
		{
			for(ak=100;ak<=200;ak+=10)
			{
				sound(ak);
				outtextxy(100,300,name1);
				outtextxy(250,300,"WINS..!");
				delay(250);
			}
			p1wc++;
			nosound();
		}
		if(ar[1][0]=='O')
		{
			for(ak=100;ak<=200;ak+=10)
			{
				sound(ak);
				outtextxy(100,300,name2);
				outtextxy(250,300,"WINS..!");
				delay(250);
			}
			p2wc++;
			nosound();
		}
		return(20);
	}
	else if(ar[2][0]==ar[2][1] && ar[2][1]==ar[2][2])
	{

		if(ar[2][0]=='X')
		{
			for(ak=100;ak<=200;ak+=10)
			{
				sound(ak);
				outtextxy(100,300,name1);
				outtextxy(250,300,"WINS..!");
				delay(250);
			}
			p1wc++;
			nosound();
		}
		if(ar[2][0]=='O')
		{
			for(ak=100;ak<=200;ak+=10)
			{
				sound(ak);
				outtextxy(100,300,name2);
				outtextxy(250,300,"WINS..!");
				delay(250);
			}
			p2wc++;
			nosound();
		}
		return(20);
	}
	else if(ar[0][1]==ar[1][1] && ar[1][1]==ar[2][1])
	{
		if(ar[0][1]=='X')
		{
			for(ak=100;ak<=200;ak+=10)
			{
				sound(ak);
				outtextxy(100,300,name1);
				outtextxy(250,300,"WINS..!");
				delay(250);
			}
			p1wc++;
			nosound();
		}
		if(ar[0][1]=='O')
		{
			for(ak=100;ak<=200;ak+=10)
			{
				sound(ak);
				outtextxy(100,300,name2);
				outtextxy(250,300,"WINS..!");
				delay(250);
			}
			p2wc++;
			nosound();
		}
		return(20);
	}
	else if(ar[0][2]==ar[1][2] && ar[1][2]==ar[2][2])
	{

		if(ar[0][2]=='X')
		{
			for(ak=100;ak<=200;ak+=10)
			{
				sound(ak);
				outtextxy(100,300,name1);
				outtextxy(250,300,"WINS..!");
				delay(250);
			}
			p1wc++;
			nosound();
		}
		if(ar[0][2]=='O')
		{
			for(ak=100;ak<=200;ak+=10)
			{
				sound(ak);
				outtextxy(100,300,name2);
				outtextxy(250,300,"WINS..!");
				delay(250);
			}
			p2wc++;
			nosound();
		}
		return(20);
	}
	else if(ar[0][2]==ar[1][1] && ar[1][1]==ar[2][0])
	{
		if(ar[0][2]=='X')
		{
			for(ak=100;ak<=200;ak+=10)
			{
				sound(ak);
				outtextxy(100,300,name1);
				outtextxy(250,300,"WINS..!");
				delay(250);
			}
			p1wc++;
			nosound();
		}
		if(ar[0][2]=='O')
		{
			for(ak=100;ak<=200;ak+=10)
			{
				sound(ak);
				outtextxy(100,300,name2);
				outtextxy(250,300,"WINS..!");
				delay(250);
			}
			p2wc++;
			nosound();
		}
		return(20);
	}
	else
	{
		return(10);
	}
}//end of method

void drawboxes()
{
	int x=75,y=75,i,j;
	setcolor(WHITE);
	for(i=1;i<=3;i++)
	{
		for(j=1;j<=3;j++)
		{
			rectangle(x,y,x+50,y+50);
			x = x + 55;
		}
		y = y + 55;
		x = 75;
	}

} //drawing boxes

void main()
{
	int gd=0,gm;
	int ud,lr,a,b;
	int box;
	int nr,rc;
	char sym,*temp;
	char *name1[10];
	char *name2[10];
	char ar[3][3]={'1','2','3','4','5','6','7','8','9'};
	int p,t,w,ch,i,y,z;
	char roundcount[10];
	char totalround[10];
	char wcp1[10];
	char wcp2[10];
	char dm[10];

	int arr1[] = {75,75,125,75,125,125,75,125,75,75};
	int arr2[] = {130,75,180,75,180,125,130,125,130,75};
	int arr3[] = {185,75,235,75,235,125,185,125,185,75};

	int arr4[] = {75,130,125,130,125,180,75,180,75,130};
	int arr5[] = {130,130,180,130,180,180,130,180,130,130};
	int arr6[] = {185,130,235,130,235,180,185,180,185,130};

	int arr7[] = {75,185,125,185,125,235,75,235,75,185};
	int arr8[] = {130,185,180,185,180,235,130,235,130,185};
	int arr9[] = {185,185,235,185,235,235,185,235,185,185};

	clrscr();
	printf("ENTER NAME OF 1ST PLAYER:");
	fflush(stdin);
	gets(name1);
	printf("ENTER NAME OF 2ND PLAYER:");
	fflush(stdin);
	gets(name2);
	printf("HOW MANY ROUNDS DO YOU WANT TO PLAY:");
	scanf("%d",&nr);
	clrscr();



	//i=1;
	rc=1;
	while(rc<=nr)
	{
		ud=0;
		lr=0;
		box=0;
		p=1;
		t=0;
		sym='X';
		initgraph(&gd,&gm,"C:/TURBOC3/BGI");

		//outtextxy(330,120,"Current turn: ");
		//outtext(450,120,name
		settextstyle(3,0,3);
		drawboxes();
		rectangle(350,50,getmaxx(),280);

		settextstyle(3,0,1);
		outtextxy(360,80,"CURRENT ROUND: ");
		itoa(rc,roundcount,10);
		outtextxy(505,80,roundcount);
		outtextxy(520,80,"OF");
		itoa(nr,totalround,10);
		outtextxy(550,80,totalround);
		//rc++;
		outtextxy(360,190,"R: RESTART CURRENT GAME");
		outtextxy(360,220,"Esc:TO QUIT");
		outtextxy(360,250,"B: BEGIN FROM 1ST ROUND");
		outtextxy(360,110,name1);
		outtextxy(360,130,name2);
		outtextxy(360,150,"DRAWN");
		outtextxy(450,110,":");
		outtextxy(450,130,":");
		outtextxy(450,150,":");
		sprintf(wcp1,"%d",p1wc);
		sprintf(wcp2,"%d",p2wc);
		sprintf(dm,"%d",md);
		outtextxy(460,110,wcp1);
		outtextxy(460,130,wcp2);
		outtextxy(460,150,dm);

		while(1)
		{
			if(!kbhit())
			{
				a = getch();
				if(a==27)
				{
					cleardevice();
					outtextxy(100,250,"YOU WANT TO CLOSE. PRESS ESC AGAIN TO QUIT.");
					b=getch();
					if(b==27)
					exit(0);
				}
				if(a=='r' || a=='R')
				{
					cleardevice();
					goto restart;
				}
				if(a=='b' || a=='B')
				{
					cleardevice();
					rc=1;
					p1wc=0;
					p2wc=0;
					md=0;
					goto restart;
				}
				else if(a==0 || a==224)
				{
					b = getch();
					switch(b)
					{
						case 72:
							 if(ud==1)
								ud=0;
							 else if(ud==2)
								ud=1;
							 break;

						case 80:
							if(ud==0)
								ud=1;
							else if(ud==1)
								ud=2;
							break;

						case 75:
							 if(lr==2)
								lr=1;
							 else if(lr==1)
								lr=0;
							 break;

						case 77:
							 if(lr==0)
								lr=1;
							 else if(lr==1)
								lr=2;
							 break;
					} //end of switch
				       //	cleardevice();
					drawboxes();
					setcolor(YELLOW);
					if(lr==0 && ud==0)
					{
						drawpoly(5,arr1);
						box=1;
					}
					else if(lr==1 && ud==0)
					{
						drawpoly(5,arr2);
						box=2;
					}
					else if(lr==2 && ud==0)
					{
						drawpoly(5,arr3);
						box=3;
					}
					else if(lr==0 && ud==1)
					{
						drawpoly(5,arr4);
						box=4;
					}
					else if(lr==1 && ud==1)
					{
						drawpoly(5,arr5);
						box=5;
					}
					else if(lr==2 && ud==1)
					{
						drawpoly(5,arr6);
						box=6;
					}
					else if(lr==0 && ud==2)
					{
						drawpoly(5,arr7);
						box=7;
					}
					else if(lr==1 && ud==2)
					{
						drawpoly(5,arr8);
						box=8;
					}
					else if(lr==2 && ud==2)
					{
						drawpoly(5,arr9);
						box=9;
					}
				}
				else if(a==13)
				{
					// when user press "Enter" impress the symbol
					switch(box)
					{
						case 1: if(ar[0][0]=='X' || ar[0][0]=='O')
							{
								sound(ak);
								outtextxy(100,300,"Invalid Move, re-try\n");
								delay(1000);
								nosound();
								setcolor(0);
								outtextxy(100,300,"Invalid Move, re-try\n");
								setcolor(14);
								continue;
							}
							else
							{
								ar[0][0]=sym;
							}
							break;
						case 2: if(ar[0][1]=='X' || ar[0][1]=='O')
							{
								sound(ak);
								outtextxy(100,300,"Invalid Move, re-try\n");
								delay(1000);
								nosound();
								setcolor(0);
								outtextxy(100,300,"Invalid Move, re-try\n");
								setcolor(14);
								continue;
							}
							else
							{
								ar[0][1]=sym;
							}
							break;
						case 3: if(ar[0][2]=='X' || ar[0][2]=='O')
							{
								sound(ak);
								outtextxy(100,300,"Invalid Move, re-try\n");
								delay(1000);
								nosound();
								setcolor(0);
								outtextxy(100,300,"Invalid Move, re-try\n");
								setcolor(14);
								continue;
							}
							else
							{
								ar[0][2]=sym;
							}
							break;
						case 4: if(ar[1][0]=='X' || ar[1][0]=='O')
							{
								sound(ak);
								outtextxy(100,300,"Invalid Move, re-try\n");
								delay(1000);
								nosound();
								setcolor(0);
								outtextxy(100,300,"Invalid Move, re-try\n");
								setcolor(14);
								continue;
							}
							else
							{
								ar[1][0]=sym;
							}
							break;
						case 5: if(ar[1][1]=='X' || ar[1][1]=='O')
							{
								sound(ak);
								outtextxy(100,300,"Invalid Move, re-try\n");
								delay(1000);
								nosound();
								setcolor(0);
								outtextxy(100,300,"Invalid Move, re-try\n");
								setcolor(14);
								continue;
							}
							else
							{
								ar[1][1]=sym;
							}
							break;
						case 6:if(ar[1][2]=='X' || ar[1][2]=='O')
						       {
								sound(ak);
								outtextxy(100,300,"Invalid Move, re-try\n");
								delay(1000);
								nosound();
								setcolor(0);
								outtextxy(100,300,"Invalid Move, re-try\n");
								setcolor(14);
								continue;
							 }
						       else
						       {
								ar[1][2]=sym;
						       }
							break;
						case 7: if(ar[2][0]=='X' || ar[2][0]=='O')
							{
								sound(ak);
								outtextxy(100,300,"Invalid Move, re-try\n");
								delay(1000);
								nosound();
								setcolor(0);
								outtextxy(100,300,"Invalid Move, re-try\n");
								setcolor(14);
								continue;
							}
							else
							{
								ar[2][0]=sym;
							}
							break;
						case 8: if(ar[2][1]=='X' || ar[2][1]=='O')
							{
								sound(ak);
								outtextxy(100,300,"Invalid Move, re-try\n");
								delay(1000);
								nosound();
								setcolor(0);
								outtextxy(100,300,"Invalid Move, re-try\n");
								setcolor(14);
								continue;
							}
							else
							{
								 ar[2][1]=sym;
							}
							break;
						case 9: if(ar[2][2]=='X' || ar[2][2]=='O')
							{
								sound(ak);
								outtextxy(100,300,"Invalid Move, re-try\n");
								delay(1000);
								nosound();
								setcolor(0);
								outtextxy(100,300,"Invalid Move, re-try\n");
								setcolor(14);
								continue;
							}
						else
						{
							ar[2][2]=sym;
						}
						break;
					} //end of switch
					sprintf(temp,"%c",sym);
					if(box==1)
					{
						outtextxy(arr1[0]+10,arr1[1]+10,temp);
					}
					else if(box==2)
					{
						outtextxy(arr2[0]+10,arr2[1]+10,temp);
					}
					else if(box==3)
					{
						outtextxy(arr3[0]+10,arr3[1]+10,temp);
					}
					else if(box==4)
					{
						outtextxy(arr4[0]+10,arr4[1]+10,temp);
					}
					else if(box==5)
					{
						outtextxy(arr5[0]+10,arr5[1]+10,temp);
					}
					else if(box==6)
					{
						outtextxy(arr6[0]+10,arr6[1]+10,temp);

					}
					else if(box==7)
					{
						outtextxy(arr7[0]+10,arr7[1]+10,temp);
					}
					else if(box==8)
					{
						outtextxy(arr8[0]+10,arr8[1]+10,temp);
					}
					else if(box==9)
					{
						outtextxy(arr9[0]+10,arr9[1]+10,temp);
					}
					t++;
					w=checkWinner(name1,name2,ar);
					if(t==9 && w==10)
					{
						for(ak=100;ak<=200;ak+=10)
						{
							sound(ak);
							outtextxy(100,300,"MATCH DRAWN..!");
							delay(250);
						}
						md++;
						nosound();
						break;
					}
					if(w==10) //winner not found
					{
						if(p==1)
						{
							p=2;
							sym='O';
							continue;
						}
						else if(p==2)
						{
							p=1;
							sym='X';
						}
					}
					if(w==20) //winner found
					{
						break;
					}
				}
			}
		}//end of inner loop
		rc++;
		restart:
		ar[0][0]='1';
		ar[0][1]='2';
		ar[0][2]='3';
		ar[1][0]='4';
		ar[1][1]='5';
		ar[1][2]='6';
		ar[2][0]='7';
		ar[2][1]='8';
		ar[2][2]='9';
		delay(1500);
		cleardevice();
		outtextxy(50,150,"PRESS ENTER TO CONTINUE");
		getch();
		if(rc==(nr+1))
		{
			if(p1wc>p2wc)
			{
				cleardevice();
				outtextxy(100,250,"FINAL WINNER IS: ");
				outtextxy(250,250,name1);
				getch();
			}
			else if(p1wc<p2wc)
			{
				cleardevice();
				outtextxy(100,250,"FINAL WINNER IS: ");
				outtextxy(250,250,name2);
				getch();
			}
			else
			{
				cleardevice();
				outtextxy(100,250,"SERIES DRAWN");
				getch();
			}
			//i++;
		}//end of outer loop
		closegraph();
	}
}