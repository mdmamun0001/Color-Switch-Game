# include "iGraphics.h"

int timer;
int up=0,sky_x1=0,sky_y1=-1000,sky_y2=0,sky_y3=1000;
int w=800, h=1000;
int x=w/2, y=h/4, r=16;// circle and basardho
int rx0=-200,rx1=0,rx2=200,rx3=400,rx4=600,rx5=800,rx6=1000,rx01=-200,rx11=0,rx21=200,rx31=400,rx41=600,rx51=800,rx61=1000;//reactangle location
int cl11=5000,cl12=0,cl13=0;                                                                   //ball colour controling by cl11,cl12..... 
int clr11=00,clr12=1200,clr13=1300;                                            
int ry=600,ry1=1100,d=6,over1=0, complt=0;                            //ry  ,r 1  1st && 2nd row reactangle  used to control y loacation of reactangle 
int m1=5,m4,level,lvl,over=0,ho=0,stop=1,resart=0;
int step=0,page=1,choose,mistake=0;      
int score=0,life=2,a=4,b=4,coin1y=1000,coin2y=500,coin3y=300,coin4y=700;                                                   //stop pr pause timer at run time
char scoreText[100];
int coin1x=200,coin2x=400,coin3x=100,coin4x=600,chk1=1,chk2=1,chk3=1,chk4=1,chk11=1,chk22=1,chk33=1,chk44=1;
float width=.0,width2=0;                                       // width increasing ....loading reactangle
void bounce() 
{
	/*printf("5");
    if(page!=0)                                     //ma used to define when timer will be paused 
       {                                         //step used to count passed step colour raactangle
		iPauseTimer(timer);
	}*/
	
	
	if(rx6>=1000)
	{                                                 //here reactangle moving.............................
	rx6=-400;
	}
	else if(rx5>=1000)
	{
	rx5=-400;
	}
	else if(rx4>=1000)
	{
	rx4=-400;
	}
	else if(rx3>=1000)
	{
	rx3=-400;
	}
	else if(rx2>=1000)
	{
	rx2=-400;
	}
	else if(rx1>=1000)
	{
	rx1=-400;
	}
	else if(rx0>=1000)
	{
	rx0=-400;
	}
	 if(ry<=10)
	{
		ry=1010;
	}
	 if(rx61<=-200)
	{
	rx61=1200;
	}
	else if(rx51<=-200)
	{
	rx51=1200;
	}
	else if(rx41<=-200)
	{
	rx41=1200;
	}
	else if(rx31<=-200)
	{
	rx31=1200;
	}
	else if(rx21<=-200)
	{
	rx21=1200;
	}
	else if(rx11<=-200)
	{
	rx11=1200;
	}
	else if(rx01<=-200)
	{
	rx01=1200;
	}
	 if(ry1<=10)
	{
		ry1=1010;
	}


if(level==1)                                            //level controling..................
{
	if(step==5)                 //level==2 control
	{
		step=0;
		mistake=0;              
		//iPauseTimer(timer);
		page=4;
		a=3;
		b=2;
		//score=0;
		life=2;
	 level=2;
		stop++;
		
	}
		 if(choose==1)                                 //colour choose........................
		     {
		         if(((rx6<=x-r && rx6+200>=x+r)&&(ry<=y&&ry+30>=y))||((rx3<=x-r && rx3+200>=x+r)&&(ry<=y&&ry+30>=y))) //ball passing through reactangle
                   {
	                y=y+101;
                   	step++;
	              score++;
				  
                   }
                else if(!(rx6<=x-r && rx6+200>=x+r)&&(ry<=y&&ry+30>=y))//defult colour reactangle
                   {
					   mistake++;                                    //mistake used to control live saving
					 life--;
                     	x=w/2;
	                    y=h/4;
                   }
		       if(((rx61<=x-r && rx61+200>=x+r)&&(ry1<=y&&ry1+30>=y))||((rx31<=x-r && rx31+200>=x+r)&&(ry1<=y&&ry1+30>=y)))//ball passing through reactangle
                   {
	                
	                y=y+101;
	                step++;
					score++;
                   }
               else if(!(rx61<=x-r && rx61+200>=x+r)&&(ry1<=y&&ry1+30>=y))
			     {
					
	              x=w/2;
	              y=h/4;
				   mistake++;
				    life--;
                 }

		  }
     if(choose==2)
	      {
		     if(((rx5<=x-r && rx5+200>=x+r)&&(ry<=y&&ry+30>=y))||((rx1<=x-r && rx1+200>=x+r)&&(ry<=y&&ry+30>=y)))
                   {
	                 y=y+101;
	                  step++;
	                  score++;
                   }
             else if(!(rx5<=x-r && rx5+200>=x+r)&&(ry<=y&&ry+30>=y))
                   {
					    life--;
				
	                 x=w/2;
                   	y=h/4;
					 mistake++;
                   }
		    if(((rx51<=x-r && rx51+200>=x+r)&&(ry1<=y&&ry1+30>=y))||((rx11<=x-r && rx11+200>=x+r)&&(ry1<=y&&ry1+30>=y)))
                  {
	             
	               y=y+10;
	               step++;
				   score++;
                  }
          else if(!(rx51<=x-r && rx51+200>=x+r)&&(ry1<=y&&ry1+30>=y))
                 {
					 life--;
                   	x=w/2;
	                y=h/4;
					 mistake++;
                  }

   	    }
    if(choose==3)
        {  
		  if(((rx4<=x-r && rx4+200>=x+r)&&(ry<=y&&ry+30>=y))||((rx0<=x-r && rx0+200>=x+r)&&(ry<=y&&ry+30>=y)))
                {
	              y=y+101;
               	  step++;
				score++;
	              
                }
          else if(!(rx4<=x-r && rx4+200>=x+r)&&(ry<=y&&ry+30>=y))
                {
					 mistake++;
				 life--;
	              x=w/2;
	              y=h/4;
                }
          if(((rx01<=x-r && rx01+200>=x+r)&&(ry1<=y&&ry1+30>=y))||((rx41<=x-r && rx41+200>=x+r)&&(ry1<=y&&ry1+30>=y)))
               {
	            
	             y=y+10;
	             step++;
				score++;
               }
          else if(!(rx41<=x-r && rx41+200>=x+r)&&(ry1<=y&&ry1+30>=y))
               {
				  life--;
	            x=w/2;
	            y=h/4;
				 mistake++;
               }
         }


			 if(y<=0|| mistake==2)                                           // ball loaction y less 0.....game over  
			{                                                              //mistake  for colour choosing mistake of reactangle
				//iPauseTimer(timer);                    
		       life=2;
			   step=0;
			   page=4;
			   mistake=-1;
			  stop++;
				over=1;
				//score=0;
				level=0;
			
			}
    }
  else if(level==2)                                                                  //leve used to define level
	 {                                  
		
			 if(step==5)                           //used step && complete  level 2
			 {
				 complt=1;
				 page=4;
				 step=0;
				 stop++;
				 level=3;
			 }


       if(m1==0)                                                               //m1 used to control colour changimg position
         {
           if(((rx6<=x-r && rx6+200>=x+r)&&(ry<=y&&ry+30>=y))||((rx3<=x-r && rx3+200>=x+r)&&(ry<=y&&ry+30>=y)))
              {

	             m1=1;
	             y=y+101;
	             cl11=80;                                                                         //colour changing here
	             cl12=950;
	             cl13=100;                                                                         //score++ ...score increasing
	             step++;
				 score++;
                }
           else if(!(rx6<=x-r && rx6+200>=x+r)&&(ry<=y&&ry+30>=y))
              {
				
	            x=w/2;
	            y=h/4;
				 life--;
				 mistake++;
              }
		 if(((rx61<=x-r && rx61+200>=x+r)&&(ry1<=y&&ry1+30>=y))||((rx31<=x-r && rx31+200>=x+r)&&(ry1<=y&&ry1+30>=y)))
			                                                                             
                {
					  y=y+101;
					  m1=1;
					  cl11=80;
					  cl12=950;
					  cl13=100;
					  step++;
					   score++;
				}
		  else if(!(rx61<=x-r && rx61+200>=x+r)&&(ry1<=y&&ry1+30>=y))
			    {
					 life--;
						x=w/2;
						y=h/4;
						 mistake++;
	           	 }

        } 
    else if (m1==1)                                                //m1 controling colour changing ball....location of reactangle 
        {
	       if(((rx5<=x-r && rx5+200>=x+r)&&(ry<=y&&ry+30>=y))||((rx1<=x-r && rx1+200>=x+r)&&(ry<=y&&ry+30>=y)))
              {

             	m1=2;
	            y=y+101;
	           cl11=80;
	           cl12= 150;            
	           cl13=30;
	           step++;
			   score++;
              }
           else if(!(rx5<=x-r && rx5+200>=x+r)&&(ry<=y&&ry+30>=y))
              {
	             life--;
            	x=w/2;
	            y=h/4;
				 mistake++;
               }
		   
		if(((rx51<=x-r && rx51+200>=x+r)&&(ry1<=y&&ry1+30>=y))||((rx11<=x-r && rx11+200>=x+r)&&(ry1<=y&&ry1+30>=y)))
			  {
				m1=2;
	            y=y+101;
	           cl11=80;
	           cl12= 150;
	           cl13=30;
	           step++;
			   score++;
			  }

		else if(!(rx51<=x-r && rx51+200>=x+r)&&(ry1<=y&&ry1+30>=y))
			{
				 life--;
			x=w/2;
			y=h/4;
			 mistake++;
			}

         }
	else if (m1==2)
        {
	       if(((rx4<=x-r && rx4+200>=x+r)&&(ry<=y&&ry+30>=y))||((rx0<=x-r && rx0+200>=x+r)&&(ry<=y&&ry+30>=y)))
              {
				  score++;
             	m1=0;
	            y=y+101;
	           cl11=5000;
	           cl12=0;                                            //m1 controling colour changing ball....location of reactangle 
	           cl13=0;
	           step++;
              }
           else if(!(rx4<=x-r && rx4+200>=x+r)&&(ry<=y&&ry+30>=y))
              {
				 
            	x=w/2;
	            y=h/4;
				 mistake++;
				 life--;
               }
		   
		if(((rx41<=x-r && rx41+200>=x+r)&&(ry1<=y&&ry1+30>=y))||((rx01<=x-r && rx01+200>=x+r)&&(ry1<=y&&ry1+30>=y)))
			  {
				y=y+101;
				m1=0;
				cl11=5000;
				cl12=0;
				cl13=0;
				step++;
				score++;
			  }

		else if(!(rx41<=x-r && rx41+200>=x+r)&&(ry1<=y&&ry1+30>=y))
			{
		
			x=w/2;
			y=h/4;
			 life--;
			 mistake++;
			}

         }

	
			 if(y<=0|| mistake==2)                       
				{
					                   
				   life=2;
				   step=-1;
				   page=4;
				  mistake=-1;
				  stop++;
					over1=1;
					score=0;      
					level=0;
			 
			    }
			

  }


	if(x+r>=790 )
	{
		x=x-15;                                              //  come bacak from right side
	}
	else if(x-r<=0)
	{
		x=x+15;                                           //  come bacak from left side
	}
	if(y>850)
	{
             y=y-5;
	}
	
	/*if(sky_y1<-1000)
	{
		sky_y1=2000;
	}
	if(sky_y2<-1000)
	{

		sky_y2=2000;
	}
		else if(sky_y3+1000<-1000)
	{

		sky_y3=2000;
	}
	

	sky_y1-=2;
	sky_y2-=2;
	sky_y3-=2;
	*/
	if(coin1x+20>800)
		 chk1=1;
	else if(coin2x-20<0)
		chk1=0;
	if(coin2x+20>800)
		 chk2=1;
	else if(coin2x-20<0)
		chk2=0;
	if(coin3x+20>800)
		 chk3=1;
	else if(coin3x-20<0)
		chk3=0;
	if(coin4x+20>800)
		 chk4=1;
	else if(coin4x-20<0)
		chk4=0;

	if(coin1y+20>1000)
		 chk11=1;
	else if(coin2y-20<0)
		chk11=0;
	if(coin2y+20>1000)
		 chk22=1;
	else if(coin2y-20<0)
		chk22=0;
	if(coin3y+20>1000)
		 chk33=1;
	else if(coin3y-20<0)
		chk33=0;
	if(coin4y+20>1000)
		 chk44=1;
	else if(coin4y-20<0)
		chk44=0;


	if(chk1==1)
		coin1x-=3;
	else
		coin1x+=3;
	if(chk2==1)
		coin2x-=3;
	else
		coin2x+=3;
    if(chk3==1)
		coin3x-=3;
	else
		coin3x+=3;
   if(chk4==1)
		coin4x-=3;
	else
		coin4x+=3;
   
	if(chk11==1)
		coin1y-=3;
	else
		coin1y+=3;
	if(chk22==1)
		coin2y-=3;
	else
		coin2y+=3;
    if(chk33==1)
		coin3y-=3;
	else
		coin3y+=3;
   if(chk44==1)
		coin4y-=3;
	else
		coin4y+=3;







	


	y-=1;
	ry-=a;
	ry1-=a;
	rx0+=b;                                          //here reactangle moving  right side
	rx1+=b;
	rx2+=b;
	rx3+=b;
	rx4+=b;
	rx5+=b;
	rx6+=b;
	rx01-=b;
	rx11-=b;
	rx21-=b;
	rx31-=b;
	rx41-=b;
	rx51-=b;                                      ////here reactangle moving  left side
	rx61-=b;



}







void iDraw() 
{
	
	if(stop%2==1)
		{
		iPauseTimer(timer);
		}
		else
		{
			iResumeTimer(timer);
		}


	if(page==0)                                //used ma to control gameing step...home page,loading,colour choosing etc..
	{

		iClear();
	

		 
		
	//	iShowBMP(sky_x1,sky_y1,"sky2.bmp");
		 iShowBMP(sky_x1,sky_y2,"sky1.bmp");
	   // iShowBMP(sky_x1,sky_y3,"sky3.bmp");


		 			
		











	iSetColor(cl11, cl12,cl13);
	iFilledCircle(x, y,r);
	iSetColor(80, 150,30);
	iFilledRectangle(rx0,ry,200,30);
	iSetColor(80, 950, 100);
	iFilledRectangle(rx1,ry,200,30);
	iSetColor(40, 32, 882);
	iFilledRectangle(rx2,ry,200,30);
	iSetColor(5000, 0,0);
	iFilledRectangle(rx3,ry,200,30);
	iSetColor(80, 150, 30);
	iFilledRectangle(rx4,ry,200,30);
	iSetColor(80, 950, 100);
	iFilledRectangle(rx5,ry,200,30);
    iSetColor(5000,0, 0);
	iFilledRectangle(rx6,ry,200,30);
	iSetColor(80, 150, 30);
	iFilledRectangle(rx01,ry1,200,30);
	iSetColor(80, 950, 100);
	iFilledRectangle(rx11,ry1,200,30);
	iSetColor(40, 32, 882);
	iFilledRectangle(rx21,ry1,200,30);
	iSetColor(5000, 0, 0);
	iFilledRectangle(rx31,ry1,200,30);
	iSetColor(80, 150, 30);
	iFilledRectangle(rx41,ry1,200,30);
	iSetColor(80, 950, 100);
	iFilledRectangle(rx51,ry1,200,30);
    iSetColor(5000, 0,0);
	iFilledRectangle(rx61,ry1,200,30);
	 
	 iSetColor(255,0,0);
	iText(0,970,"SCORE:");
	_itoa_s(score,scoreText,15);                                     //score update used _toa_s function....(int,char,size)
	iText(50,970,scoreText);


	 iSetColor(255,0,0);
	iText(720,960,"life:");
	_itoa_s(life,scoreText,15);                                     // life saveing update used _toa_s function....(int,char,size)
	iText(780,960,scoreText);

	iSetColor(cl11, cl12,cl13);
	iFilledCircle(coin1x,coin1y,20);

	iSetColor(cl11, cl12,cl13);
	iFilledCircle(coin2x,coin2y,20);

	iSetColor(cl11, cl12,cl13);
	iFilledCircle(coin3x,coin3y,20);

	iSetColor(cl11, cl12,cl13);
	iFilledCircle(coin4x,coin4y,20);
	}
	else if(page==1)                                  //   //used ma to control gameing step...home page,loading,colour choosing etc..
	{
	         iClear();
	
		iPauseTimer(timer);
		iClear();
		iShowBMP(0, 0,"clr swtch.bmp");
		iShowBMP(220, 310,"play.bmp");
		
		iShowBMP(270, 100,"exit.bmp");
	

	  }
	else if(page==8)
	{
		
		iPauseTimer(timer);
		iShowBMP(0,0,"sky1.bmp");
		iShowBMP(200,600,"level.bmp");
		iShowBMP(200,400,"level2.bmp");

		if(level==2)
		iShowBMP(600,00,"exit.bmp");
		else
			iShowBMP(00,00,"back.bmp");
		
	}

	else if(page==2)//    //used ma to control gameing step...home page,loading,colour choosing etc..

	{
	
		iPauseTimer(timer);
	    	iClear();
		    iShowBMP(0,0,"clr_chose_pg.bmp");

		    iSetColor(5000, 0,0);
		    iText(500, 850, "choose the colourful  ball", GLUT_BITMAP_HELVETICA_18);

		    iSetColor(5000, 0,0);
	        iFilledCircle(500, 750,20);
			iSetColor(0, 0,0);
	        iText(500, 700, "press r", GLUT_BITMAP_9_BY_15);
	        iSetColor(80, 950,100);
	        iFilledCircle(600,750 ,20);
			iSetColor(0, 0,0);
	        iText(600, 700, "press y", GLUT_BITMAP_9_BY_15);
		    iSetColor(80, 150,30);
			iFilledCircle(400,750 ,20);
			iSetColor(0, 0,0);
	        iText(400, 700, "press g", GLUT_BITMAP_9_BY_15);
			iShowBMP(0,20,"back.bmp");
		
	  }
	else if(page==3)   // //   //used ma to control gameing step...home page,loading,colour choosing etc..
		{
			iPauseTimer(timer);
			iClear();
		    iSetColor(0, 15000,3000);
	        iFilledRectangle(0,0,1000,1000);
			iSetColor(80, 150, 30);
		    iRectangle(300,240,200,30);
		    iSetColor(80, 150, 30);
			iText(300, 280, "Loading", GLUT_BITMAP_9_BY_15);
		    iFilledRectangle(300,240,width,30);

		   if(width<=200.00)
		     {
			   width=width+.3;
			
		     }
		   if(width>=200.00)
		     {
			   page=0;
			   width=0;
			  
			    
		     }
 

	  }

else if(page==4)                           ///used ma to control gameing step...home page,loading,colour choosing etc..
      {
		
		
		if( level==2)          //level==2
	     	{
				
		    
			  iClear();
			  step=0;
			  lvl=2;
			  level=2;
			    iShowBMP(0,0,"sky2.bmp");
	         iShowBMP(300,480,"level.bmp");
	          iShowBMP(300,600,"level_complete.bmp");
			  
				iText(400,500,"SCORE:");
				_itoa_s(score,scoreText,15);                                     //score update used _toa_s function....(int,char,size)
				iText(470,500,scoreText);
	          iShowBMP(600,0,"next.bmp");
		    }
		
		
	    
	
	
	 if(over==1)
	   {
		 
		 
		iPauseTimer(timer);
		iClear();
		 iShowBMP(0,0,"sky2.bmp");
		iShowBMP(0,0,"over.bmp");
		
		iShowBMP(0, 0,"replay.bmp");
		
		iShowBMP(600, 0,"exit.bmp");
		iSetColor(255,0,0);
	iText(0,970,"SCORE:");
	_itoa_s(score,scoreText,15);                                     //score update used _toa_s function....(int,char,size)
	iText(50,970,scoreText);

		
				
		  x=w/2;
	           y=h/4;

			   rx0=-200;
			   rx1=0;
			   rx2=200;
			   rx3=400;
			   rx4=600;
			   rx5=800;
			   rx6=1000;
			   rx01=-200;
			   rx11=0;
			   rx21=200;
			   rx31=400;
			   rx41=600;
			   rx51=800;
			   rx61=1000;
			   cl11=5000;
			   cl12=0;
			   cl13=0;
			   ry=600;
			   ry1=1100;
		    
	   
	    }
		
	 else  if(over1==1)
	    {
		

		iClear();
		 iShowBMP(0,0,"sky2.bmp");
		iShowBMP(0,0,"over.bmp");
		
		iShowBMP(0, 0,"replay.bmp");
		
		iShowBMP(600, 0,"exit.bmp");
		iSetColor(255,0,0);
	iText(0,970,"SCORE:");
	_itoa_s(score,scoreText,15);                                     //score update used _toa_s function....(int,char,size)
	iText(50,970,scoreText);

		
				
		  x=w/2;
	           y=h/4;

			   rx0=-200;
			   rx1=0;
			   rx2=200;
			   rx3=400;
			   rx4=600;
			   rx5=800;
			   rx6=1000;
			   rx01=-200;
			   rx11=0;
			   rx21=200;
			   rx31=400;
			   rx41=600;
			   rx51=800;
			   rx61=1000;
			   cl11=5000;
			   cl12=0;
			   cl13=0;
			   ry=600;
			   ry1=1100;
		    
	        lvl=2;
         }

	  if(complt==1)
	    {
			 iClear();
			   step=0;
		      // iPauseTimer(timer);
               
			   lvl=2;
			   level=2;
			   //complt=0;
			    iShowBMP(0,0,"sky2.bmp");
	         iShowBMP(300,480,"level2.bmp");
	          iShowBMP(300,600,"level_complete.bmp");
			  
				iText(400,500,"SCORE:");
				_itoa_s(score,scoreText,15);                                     //score update used _toa_s function....(int,char,size)
				iText(470,500,scoreText);
				 iShowBMP(0,0,"home.bmp");
	          iShowBMP(600,0,"exit.bmp");
		   }
	 }
}
	  




void iMouseMove(int mx, int my) {
	x=mx;
	y=my;
	
}

	

void iKeyboard(unsigned char key) 
{

	
	
	 if(key=='r'||key=='R')
	{
		page=3;
		choose=1;
		cl11=5000;
	    cl12=0;
	    cl13=0;
		iPauseTimer(timer);
		
	}
	else if(key=='y'||key=='Y')
	{
		page=3;
		choose=2;
	    cl11=80;
	    cl12=950;
	   cl13=100;
	}
else if(key=='g'||key=='G')
	{
		 page=3;
		choose=3;
	    cl11=80;
	    cl12=150;
	    cl13=30;
	}
	else if(key==' ')
	{
		
		
		stop++;
		
	}

 
}



	



void iSpecialKeyboard(unsigned char key) 
{
	if(key==GLUT_KEY_PAGE_UP) {
		if(r<30) r++;
	} else if(key==GLUT_KEY_PAGE_DOWN) {
		if(r>10) r--;
	}
	if(key==GLUT_KEY_UP){
	y=y+15;
	}
	if(key==GLUT_KEY_DOWN){
	y=y-20;
	}

	if(key==GLUT_KEY_RIGHT){
	x=x+15;
	}
	if(key==GLUT_KEY_LEFT){
	x=x-15;
	}
	

}


void iMouse( int button, int state, int mx, int my) 
{
	  if((mx>=250 && mx<=600) && (my>=470 && my<=550)&& page ==1)      //play      //(250,320,310,135);
	{
		page=8;
		
		stop=1;
	}
	  else   if((mx>=200 && mx<=500) && (my>=720 && my<=900)&& page==8 )   //l pushing into level 1        //(250,320,310,135);
	{
				level=1;
				complt=0;
				score=0;
				page=2;
			    x=w/2;
	            y=h/4;
				
			   rx0=-200;
			   rx1=0;
			   rx2=200;
			   rx3=400;
			   rx4=600;
			   rx5=800;
			   rx6=1000;
			   rx01=-200;
			   rx11=0;
			   rx21=200;
			   rx31=400;
			   rx41=600;
			   rx51=800;
			   rx61=1000;
			   cl11=5000;
			   cl12=0;
			   cl13=0;
			   ry=600;
			   ry1=1100;
			   coin1y=1000;
			   coin2y=300;
			   coin3y=100;
			   coin4y=700;
			   coin1x=750;
			   coin2x=300;
			   coin3x=100;
			   coin4x=700;
		    width=0;
			stop=1;
	}

	    else   if((mx>=200 && mx<=500) && (my>=580 && my<=680)&& (page==8 && lvl==2)) //pshing into level 2           //(250,320,310,135);
	{
		
		       score=0;
			   x=w/2;
	           y=h/4;
			   step=1;
			   rx0=-200;
			   rx1=0;
			   rx2=200;
			   rx3=400;
			   rx4=600;
			   rx5=800;
			   rx6=1000;
			   rx01=-200;
			   rx11=0;
			   rx21=200;
			   rx31=400;
			   rx41=600;
			   rx51=800;
			   rx61=1000;
			   cl11=5000;
			   cl12=0;
			   cl13=0;
			   ry=600;
			   ry1=1100;
			iResumeTimer(timer);
			page=0;
			m1=0;
			step=0;
			level=2;
			complt=0;
			a=3;
			b=4;
			
	}
	   else   if((mx>=0 && mx<=200) && (my>=00 && my<=400)&& (page==2||page==8))            //(250,320,310,135);//come back
	{
		
		page=1;
		  x=w/2;
	           y=h/4;

			   rx0=-200;
			   rx1=0;
			   rx2=200;
			   rx3=400;
			   rx4=600;
			   rx5=800;
			   rx6=1000;
			   rx01=-200;
			   rx11=0;
			   rx21=200;
			   rx31=400;
			   rx41=600;
			   rx51=800;
			   rx61=1000;
			   cl11=5000;
			   cl12=0;
			   cl13=0;
			   ry=600;
			   ry1=1100;
		    
	        }
		
		 else   if((mx>=0 && mx<=300) && (my>=00 && my<=400)&&level==2)            //(250,320,310,135);home page page
	        {
				level=0;
				page=1;
				complt=0;
	       }
		 else   if((mx>=0 && mx<=200) && (my>=00 && my<=400)&& ( over==1 && page==4))        //(250,320,310,135);if over then back to home
	      {
		
	
			page=1;
			level=0;
	    
			over=0;
			over1=0;
		    x=w/2;
	        y=h/4;
			step=0;
	        mistake=0;
	    	stop=1;
	    }
	  else   if((mx>=0 && mx<=200) && (my>=00 && my<=400)&& (page==4 && over1==1))        //(250,320,310,135);//if over1 then back to home
	   {
		
       
		page=1;
		level=0;
	    iPauseTimer(timer);
	    over=0;
		over1=0;
		  x=w/2;
	           y=h/4;
			   lvl=2;
	    mistake=0;
		step=0;
		stop=1;
		}
		
		 

	   else   if((mx>=300 && mx<=500) && (my>=280 && my<=420)&& page==1)            //(250,320,310,135);
	    {
		exit(0);

	    }

   else   if((mx>=600 && mx<=800) && (my>=00&& my<=400)&& (page==4 &&(over!=1&&over1!=1)))          //(250,320,310,135);
	   {
	
		page=8;
			//stop=1;
    }
  else   if((mx>=600 && mx<=800) && (my>=0 && my<=300)&& (page==8||over==1||complt==1||over1==1))            //(250,320,310,135);
	{
		exit(0);
		

	}
}



int main()
{
	
	timer=iSetTimer(.1, bounce);
	
	iInitialize(w, h, "colour switch ");
	return 0;
}