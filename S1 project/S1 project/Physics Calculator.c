//19k-1400
//19k-1357
// 19k-0214
#include<stdio.h>
#include<stdlib.h>
#include<dos.h>
#include<string.h>
#include<conio.h>
#include <windows.h> 
#include"PhyWiz.c"

int SHM(int b);
int WAK(int c);
int VAS(int d);
int KIN(int e);
void pattern(void);

int main()
{
	int a,b,c,f,d;
	pattern();
	getch();
	while(1)
	{ 
	system("cls");
	printf("\t\t\t\t# Physics Calculator V.1 #\n");
	 printf(" \n\n\nChapters:\n\n\n\t\t1.Kinematics\n\n\t\t2.Simple Harmonic Motion\n\n\t\t3.Work and Kinetic Energy\n\n\t\t4.Scalars And Vectors\n\n\t\t5.Exit\n\t\t");
	 scanf("%d",&a);

    switch (a)
	{
		case 1:
			system("cls");
			printf("\t\t\t\t# Physics Calculator VOL.1 #\n");
			printf("----->Kinematics");
			f=1;
			KIN(f);
			getch();
			break;
			
		case 2:
			
				system("cls");
				printf("\t\t\t\t# Physics Calculator VOL.1 #\n");
				printf("----->Simple Harmonic Motion");
				b=1;
				SHM(b);
				getch();
				break;

			
		case 3:
			
				system("cls");
				printf("\t\t\t\t# Physics Calculator VOL.1 #\n");
				printf("----->Work and Kinetic Energy");
				c=1;
				WAK(c);
				getch();
				break;
			
			
		case 4:
		
				system("cls");
				printf("\t\t\t\t# Physics Calculator VOL.1 #\n");
				printf("----->Scalars And Vectors");
				d=1;
				VAS(d);
				getch();
				break;
		case 5:
				system("color 2");
				printf("\t\t\tPROGRAM WILL BE TERMINATED IN 3 SECOUNDS....\n\t\t\t");
				Sleep(3000);
				exit(0);
				break;

			
	}

    }

    

}
int SHM(int b)
{
	int a1,aa,bb;
	float k,F,mm,T,U,K,I,L,d1,v,a,roo;
	printf("\n\n\n1. Force on string\n\n2. Acceleration:\n\n3. Time period(T)\n\n4. Potential Energy(U)\n\n5. Kinectic Energy(K.E)\n\n6. Physical Pendulum:\n\n7. Simple Pendulum\n\n8. Torsional Pendulum\n\n");
	scanf("%d",&a1);
	switch(a1)
    {
		case 1:
			
				system("cls");
				printf("\t\t\t\t# Physics Calculator VOL.1 #\n");
				printf("Enter spring constant(k):");
				scanf("%f",&k);
				his(k);
				printf("\n Enter the Distance of spring:\n");
				printf("1.m\n2.cm\n3.km:\nEnter your choice\n");
				scanf("%d%f",&bb,&d1);
				his(d1);
				d1=dist(d1,bb);
				F=-k*d1;
				his(F);
				printf("F=%fN/m",F);
				getch();
				break;
			
		case 2:
			
				system("cls");
				printf("\t\t\t\t# Physics Calculator VOL.1 #\n");
				printf("Enter Velocity\n");
				printf("1.m/s\n2.km/h:\nEnter Your choice\n");
				scanf("%d",&aa);
				scanf("%f",&v);
				v=velocity(v,aa);
				printf("Enter disp:\n");
				printf("1.m\n2.km\n3.cm:\nEnter Your choice\n");
				scanf("%d",&aa);
				scanf("%f",&d1);
				d1=dist(d1,aa);
				a=-v*v*d1;
				printf("Acceleration = %.2f m/s^2",a);
				getch();
				break;
			
		case 3:
			
				system("cls");
				printf("\t\t\t\t# Physics Calculator VOL.1 #\n");
				printf("Enter Mass\n1.g\n2.kg\n");
				scanf("%d",&aa);
				scanf("%f",&mm);
				mm=mass(mm,aa);
				printf("Enter Spring Constant:\n");
				scanf("%f",&k);
				mm=root(mm/k);
				T=6.141*mm;
				printf("Time=%.2f secounds",T);
				getch();
				break;
			
		case 4:
			
				system("cls");
				printf("\t\t\t\t# Physics Calculator VOL.1 #\n");
				printf("Enter spring constant:\n");
				scanf("%f",&k);
				printf("Enter Displacement:");
				printf("\n1.m\n2.km\n3.cm:\n");
				scanf("%d",&bb);
				scanf("%f",&d1);
				d1=dist(d1,bb);
				U = 0.5*k*d1*d1;
				printf("Potential Energy = %.2f",U);
				getch();
				break;
			
		case 5:
			
				system("cls");
				printf("\t\t\t\t# Physics Calculator VOL.1 #\n");
				printf("Enter Velocity\n");
				printf("1.m/s\n2.km/h:\nEnter Your choice\n");
				fflush(stdin);
				scanf("%d",&aa);
				fflush(stdin);
				scanf("%f",&v);
				v=velocity(v,aa);
				printf("Enter Mass\n1.g\n2.kg\n");
				fflush(stdin);
				scanf("%d",&aa);
				scanf("%f",&mm);
				mm=mass(mm,aa);
				K=(mm*v*v)*0.5;
				printf("K.E=%2.f",K);
				getch();
				break;
			
			float wait,ohno;
			
		case 6:
			
				system("cls");
				printf("\t\t\t\t# Physics Calculator VOL.1 #\n");
				printf("Enter Inertia\n");
				scanf("%f",&I);
				printf("Enter Mass\n1.g\n2.kg\n");
				fflush(stdin);
   			    scanf("%d",&aa);
				scanf("%f",&mm);
				mm=mass(mm,aa);
				printf("length \n1.m\n2.km\n3.cm:\n");
				scanf("%d",&bb);
				scanf("%f",&d1);
				d1=dist(d1,bb);
                wait=mm*g*d1;
				mm=I/wait;
				ohno=root(mm);
				T=2*pi*ohno;
				printf("\nTime : %2.f",T);
				getch();
				break;
			
			float r;
			float ur;
		case 7:
			
				system("cls");
				printf("\t\t\t\t# Physics Calculator VOL.1 #\n");
				printf("Enter Length\n");
				printf("1.m\n2.km\n3.cm:\n");
				scanf("%d",&bb);
				scanf("%f",&d1);
				d1=dist(d1,bb);
				ur=d1/g;
				r=root(ur);
				T=2*pi*r;
				printf("\nTime=%2.f",T);
				getch();
				break;
			
			float t,o;
		case 8:
			
				system("cls");
				printf("\t\t\t\t# Physics Calculator VOL.1 #\n");
				printf("Enter Inertia and Spring constant\n");
				scanf("%f%f",&I,&k);
				t=I/k;
				o=root(t);
				T=2*pi*o;
				printf("T=%2.f",T);
				getch();
				break;
			
		default:
				printf("\t\tIvalid choics:\n\t\t\n\t\tenter anything to go back to menu  :) :) :)");
				break;
				
	}
}

int WAK(int c)
{
	int a1,aa,bb,angle;
	char ch;
	float KE,PE,ti,w,force,W,F,mm,T,U,K,I,L,d1,v,a,roo,cos,P;
	printf("\n\n1.Work(w)\n\n2.Weight(W)\n\n3.Power(P)\n\n4.Potential Energy(P.E)\n\n5.Kinectic Energy(K.E)\n\n6.Total Engergy(T.E)\n\n7.Exit");
	fflush(stdin);
	scanf("%d",&a1);
	switch(a1)
	{
		case 1:
			{
				system("cls");
				printf("\t\t\t\t# Physics Calculator VOL.1 #\n");
			printf("Enter Force");
			scanf("%f",&force);
			printf("Enter disp:\n");
				printf("1.m\n2.km\n3.cm:\nEnter Your choice\n");
				scanf("%d",&aa);
				scanf("%f",&d1);
				d1=dist(d1,aa);
				printf("Enter Angle:");
				scanf("%d",&angle);
				cos=cosine(angle);
				printf("angle : %f\n",cos);
				W=force*d1*cos;
				printf("Work=%.3f",W);
				break;
			}
		case 2:
			{
				system("cls");
				printf("\t\t\t\t# Physics Calculator VOL.1 #\n");
				printf("Enter Mass\n1.g\n2.kg\n");
				fflush(stdin);
				scanf("%d",&aa);
				scanf("%f",&mm);
				mm=mass(mm,aa);
				w=mm*g;
				printf("Weight=%f",w);
				break;
			}
		case 3:
			{
				system("cls");
				printf("\t\t\t\t# Physics Calculator VOL.1 #\n");
				printf("Enter amount of work:");
				scanf("%f",&w);
				printf("Enter time\n1.sec\n2.hour:");
				scanf("%d",&bb);
				scanf("%f",&ti);
				ti=time(ti,bb);
				printf("%f Joules",w/ti);
				break;
			}
		case 4:
			{
				system("cls");
				printf("\t\t\t\t# Physics Calculator VOL.1 #\n");
				printf("Enter Mass\n1.g\n2.kg\n");
				scanf("%d",&aa);
				scanf("%f",&mm);
				mm=mass(mm,aa);
				printf("Enter Height\n1.m\n2.km\n3.cm:\n");
				scanf("%d",&bb);
				scanf("%f",&d1);
				d1=dist(d1,bb);
				PE=10*mm*d1;
				printf("%f Joules",PE);
				break;
			}
		case 5:
			{
				system("cls");
				printf("\t\t\t\t# Physics Calculator VOL.1 #\n");
				printf("Enter Mass\n1.g\n2.kg\n");
				scanf("%d",&aa);
				scanf("%f",&mm);
				mm=mass(mm,aa);
				printf("Enter Velocity\n");
				printf("1.m/s\n2.km/h:\nEnter Your choice\n");
				scanf("%d",&bb);
				scanf("%f",&v);
				v=velocity(v,bb);
				KE=0.5*mm*v*v;
				printf("%f Joules",KE);
				break;
				
			}
		case 6:
			{
				system("cls");
				printf("\t\t\t\t# Physics Calculator VOL.1 #\n");
					printf("Enter value for KE and PE:");
					scanf("%f%f",&KE,&PE);
					printf("total energy = %f",KE+PE);
					break;
			}
			case 7:
				printf("\t\t\t\t# Physics Calculator VOL.1 #\n");
				exit(0);
		default:
				printf("\t\tIvalid choics:\n\t\t\n\t\tenter anything to go back to menu  :) :) :)");
				break;
	
}
}
int VAS(int d)
{
	int i,j,a2,a3,a4,aa,m[3],n[3],an;
	float Mag,Mag1,s=0;
	char c,ch;
	printf("\n\n1.Unit vector\n\n2.Scalar product\n\n3.Vector Product\n\n");
	scanf("%d",&aa);
	switch(aa)
	{
		case 1:
			{
				int co;
				for(i=0,c='i';i<3;i++,c++)
				{
					printf("Enter value of %d vector for %c\n",i,c);
					scanf("%d",&m[i]);
				}
 				Mag=sqt(m[0])+sqt(m[1])+sqt(m[2]);
				Mag=root(Mag);
				for(i=0,c='i';i<3;i++,c++)
				{
					printf("+%d%c/%.2f",m[i],c,Mag);
				}
				break;
			}
		case 2:
			{
				printf("Do you have angle between 2 vectors or not(y/n)");
				scanf(" %c",&ch);
				if(ch=='y')
				{
					printf("Enter angle:");
					scanf("%d",&an);
					for(i=0,c='i';i<3;i++,c++)
				{
					printf("Enter value for 1st vector of %c\n",c);
					scanf("%d",&m[i]);
					printf("Enter value for 2nd vector of %c\n",c);
					scanf("%d",&n[i]);
				}
				Mag=sqt(m[0])+sqt(m[1])+sqt(m[2]);
				Mag1=sqt(n[0])+sqt(n[1])+sqt(n[2]);
				s=root(Mag)*root(Mag1)*cosine(an);
				printf("Scalar product of <%d,%d,%d>.<%d,%d,%d> is %f",m[0],m[1],m[2],n[0],n[1],n[2],s);
				break;
				}
				else if(ch=='n')
				{
					for(i=0,c='i';i<3;i++,c++)
				{
					printf("Enter value for 1st vector of %c\n",c);
					scanf("%d",&m[i]);
					printf("Enter value for 2nd vector of %c\n",c);
					scanf("%d",&n[i]);
				}
					for(i=0;i<3;i++)
				{
					s=s+m[i]*n[i];
				}
				printf("Scalar product of <%d,%d,%d>.<%d,%d,%d> is %f",m[0],m[1],m[2],n[0],n[1],n[2],s);
				break;
				
				}
			}
		case 3:
			{
				printf("Do you have angle between 2 vectors or not(y/n)");
				scanf(" %c",&ch);
				if(ch=='n')
				{
				for(i=0,c='i';i<3;i++,c++)
 					{
 						printf("Enter value for vector 1 for %c",c);
  						scanf("%d",&m[i]);
 					}
 				for(i=0,c='i';i<3;i++,c++)
  					{
					printf("Enter value for vector 2 for %c",c);	
   					scanf("%d",&n[i]);
					}
				for(i=0;i<3;i++)
					{
						for(j=1;j<3;j++)
							{
								if(i==1)
									{
										a2=m[i]*n[j]-m[j]*n[i];
									}
								if(i==2)
								{
						 			j=0;
						 			a3=m[i]*n[j]-m[j]*n[i];
						 			break;
								}
							a4=m[i]*n[j]-m[j]*n[i];
							}
					}
				printf("%di+%dj+%dk",a2,a3,a4);
				}
				if(ch=='y')
				{
					printf("Enter angle:");
					scanf("%d",&an);
					for(i=0,c='i';i<3;i++,c++)
				{
					printf("Enter value for 1st vector of %c\n",c);
					scanf("%d",&m[i]);
					printf("Enter value for 2nd vector of %c\n",c);
					scanf("%d",&n[i]);
				}
				Mag=sqt(m[0])+sqt(m[1])+sqt(m[2]);
				Mag1=sqt(n[0])+sqt(n[1])+sqt(n[2]);
				s=root(Mag)*root(Mag1)*sine(an);
				printf("Vectors product of <%d,%d,%d>x<%d,%d,%d> is %f",m[0],m[1],m[2],n[0],n[1],n[2],s);
				break;			}
			}
			default:
				printf("\t\tIvalid choics:\n\t\t\n\t\tenter anything to go back to menu  :) :) :)");
				break;
	}
}
int KIN(int e)
{
	int a,aa,ch,*ptr,cc,ch1,aa1;
	float Vi, s,v,d1,ti,acc,bb,te,t  ;
	printf("\nSelect the unknown value:\n\n1.Initial Velocity(Vi)\n\n2.Final Velocity(Vf)\n\n3.Acceleration(a)\n\n4.Distance(d)\n\n5.Time(t)\n\n");
	scanf("%d",&aa);
		switch(aa)
	{
		case 1:
			{
					printf("Select best equation according to your given values:\n1.Vi=Vf-at\n2.Vi=(Vf^2-2as)^1/2\n\n3.Vi=S-(1/2at^2)/t");
					scanf("%d",&aa1);
					if(aa1==1)
						{
						printf("Enter Final Velocity\n");
						printf("1.m/s\n2.km/h:\nEnter Your choice\n");
						scanf("%d",&aa);
						scanf("%f",&v);
						v=velocity(v,aa);
						printf("Enter acceleration:");
						scanf("%f",&acc);
						printf("Enter time\n1.sec\n2.hour:");
						scanf("%d",&bb);
						scanf("%f",&ti);
						ti=time(ti,bb);
						Vi=v-acc*ti;
						printf("Initial velocity is : %fm/s",Vi);
						break;
				}
				if(aa1==2)
				{
					printf("Enter Final Velocity\n");
					printf("1.m/s\n2.km/h:\nEnter Your choice\n");
					scanf("%d",&aa);
					scanf("%f",&v);
					v=velocity(v,aa);
					printf("Enter acceleration:");
					scanf("%f",&acc);
					printf("Enter Distance: \n1.m\n2.km\n3.cm:\n");
					scanf("%d",&bb);
					scanf("%f",&d1);
					d1=dist(d1,bb);
					v=sqt(v);
					te=2*acc*d1;
					v=v-te;
					if(v<0)
					{
						printf("Imaginary answer. Try using the second euation of motion.");
					}
					Vi=root(v);
					printf("Initial Velocity is %fm/s",Vi);
					break;
				}
				if(aa1==3)
				{
					printf("Enter time\n1.sec\n2.hour:");
					scanf("%d",&bb);
					scanf("%f",&ti);
					ti=time(ti,bb);
					printf("Enter Distance: \n1.m\n2.km\n3.cm:\n");
					scanf("%d",&bb);
					scanf("%f",&d1);
					d1=dist(d1,bb);
					printf("Enter acceleration:");
					scanf("%f",&acc);
					t=sqt(ti);
					t=(acc*t)/2;
					t=d1-t;
					Vi=t/ti;
					printf("\t\tIvalid choics:\n\t\t\n\t\tenter anything to go back to menu  :) :) :)");
					break;
				}
			}
		case 2:
		{
		
		
		 printf("Select best equation according to your given values:\n1.Vf=Vi+at\n2.Vi=SquareRoot(Vi^2+2as)\n");
				scanf("%d",&aa1);
				if(aa1==1)
				{
					printf("Enter Initial Velocity\n");
					printf("1.m/s\n2.km/h:\nEnter Your choice\n");
					scanf("%d",&aa);
					scanf("%f",&Vi);
					v=velocity(Vi,aa);
					printf("Enter acceleration:");
					scanf("%f",&acc);
					printf("Enter time\n1.sec\n2.hour:");
					scanf("%d",&bb);
					scanf("%f",&ti);
					ti=time(ti,bb);
					v=Vi+acc*ti;
					printf("Final velocity %fm/s",v);
					break;
				}
				if(aa1==2)
				{
					printf("Enter Final Velocity\n");
					printf("1.m/s\n2.km/h:\nEnter Your choice\n");
					scanf("%d",&aa);
					scanf("%f",&Vi);
					Vi=velocity(Vi,aa);
					printf("Enter acceleration:");
					scanf("%f",&acc);
					printf("Enter Distance: \n1.m\n2.km\n3.cm:\n");
					scanf("%d",&bb);
					scanf("%f",&d1);
					d1=dist(d1,bb);
					v=root(sqt(Vi)+2*acc*d1);
					printf("Final Velocity is %fm/s",v);
					break;
				}
 		}
		case 3:  
		{
		printf("Select best equation according to your given values:\n1.a=(Vf-Vi)/t\n2.a=(Vf^2-Vi^2)/2s\n");
					scanf("%d",&aa1);
		 			if(aa1==1)
				 	printf("Enter Initial Velocity\n");
					printf("1.m/s\n2.km/h:\nEnter Your choice\n");
					scanf("%d",&aa);
					scanf("%f",&Vi);
					Vi=velocity(Vi,aa);
					printf("Enter Final Velocity\n");
					printf("1.m/s\n2.km/h:\nEnter Your choice\n");
					scanf("%d",&cc);
					scanf("%f",&v);
					v=velocity(v,cc);
					printf("Enter time\n1.sec\n2.hour:");
					scanf("%d",&bb);
					scanf("%f",&ti);
					ti=time(ti,bb);
					acc=(v-Vi)/ti;
					printf("Acceleration = %fm/s^2", acc);
					break;
					if(aa1==2)
					{
					printf("Enter initial velocity\n1.m/s\n2.km/h:\nEnter Your choice\n");
					scanf("%d",&aa);
					scanf("%f",&Vi);
					Vi=velocity(Vi,aa);
					printf("Enter Final Velocity\n");
					printf("1.m/s\n2.km/h:\nEnter Your choice\n");
					scanf("%d",&bb);
					scanf("%f",&v);
					v=velocity(v,bb);
					printf("Enter Distance: \n1.m\n2.km\n3.cm:\n");
					scanf("%d",&cc);
					scanf("%f",&d1);
					d1=dist(d1,cc);
					a=(sqt(v)-sqt(Vi))/2*s;
					break;
					}
		}
		case 4:
			{
		           printf("Select best equation according to your given values:\n1.s=(Vf^2-Vi^2)/2a\n2.s=Vit+0.5at^2\n3.s=vt\n");
					scanf("%d",&aa1);
					if(aa1==1)
					{
					printf("Enter Initial Velocity\n");
					printf("1.m/s\n2.km/h:\nEnter Your choice\n");
					scanf("%d",&aa);
					scanf("%f",&Vi);
					Vi=velocity(Vi,aa);
					printf("Enter Final Velocity\n");
					printf("1.m/s\n2.km/h:\nEnter Your choice\n");
					scanf("%d",&bb);
					scanf("%f",&v);
					v=velocity(v,bb);
					printf("Enter acceleration:");
					scanf("%f",&acc);
					d1=(sqt(v)-sqt(Vi))/(2*acc);
					printf("Distance is %f m",d1);
					break;
					}
					if(aa1==2)
					{
						printf("Enter Initial Velocity\n");
						printf("1.m/s\n2.km/h:\nEnter Your choice\n");
						scanf("%d",&aa);
						scanf("%f",&Vi);
						Vi=velocity(Vi,aa);
						printf("Enter acceleration:");
						scanf("%f",&acc);
						printf("Enter time\n1.sec\n2.hour:");
						scanf("%d",&bb);
						scanf("%f",&ti);
						ti=time(ti,bb);
						d1=(Vi*ti)+((acc*sqt(ti))/2);
						printf("Distance =%f m",d1);
						break;
					}
					if(aa1==3)
					{
						printf("Enter Velocity\n");
						printf("1.m/s\n2.km/h:\nEnter Your choice\n");
						scanf("%d",&aa);
						scanf("%f",&v);
						v=velocity(v,aa);
						printf("Enter time\n1.sec\n2.hour:");
						scanf("%d",&bb);
						scanf("%f",&ti);
						ti=time(ti,bb);
						d1=v*ti;
						printf("Distance is %f",d1);
						break;	
					}
					break;
			}
		case 5: 
			{		
					 printf("Select best equation according to your given values:\n1.t=(Vf-Vi)/a\n2.t=s/v\n");
					scanf("%d",&aa1);
					if(aa1==1)
					{
						printf("Enter Initial Velocity\n");
						printf("1.m/s\n2.km/h:\nEnter Your choice\n");
						scanf("%d",&aa);
						scanf("%f",&Vi);
						Vi=velocity(Vi,aa);
						printf("Enter Final Velocity\n");
						printf("1.m/s\n2.km/h:\nEnter Your choice\n");
						scanf("%d",&bb);
						scanf("%f",&v);
						v=velocity(v,bb);
						printf("Enter acceleration:");
						scanf("%f",&acc);
						ti=(v-Vi)/acc;
						printf("Total Time is %f",ti);
						break;
					}
					if(aa1==2)
					{
						printf("Enter Velocity\n");
						printf("1.m/s\n2.km/h:\nEnter Your choice\n");
						scanf("%d",&aa);
						scanf("%f",&v);
						v=velocity(v,aa);
						printf("Enter Distance: \n1.m\n2.km\n3.cm:\n");
						scanf("%d",&bb);
						scanf("%f",&d1);
						d1=dist(d1,bb);
						ti=d1/v;
						printf("Time = %f",ti);
						break;
					}
			}
			default:
				printf("\t\tIvalid choics:\n\t\t\n\t\tenter anything to go back to menu  :) :) :)");
				break;
	}
	
}
void pattern(void)
{
	int c=10,r,i,j,k,a;
	a=c;
	printf("\n\n\n\n");
	
	for(i=1;i<=c-1;i++)
	{
	    for(k=1;k<=a;k++)
	    {
		printf(" ");
   		}
   	       a--;
    
		for(j=1;j<=i;j++)
		{ 
		 system("color 2");
		    printf(" +");
	    }
	    
	    
	 printf("\n");
		
	}
    	printf("\t\t\t\t# Physics Calculator VOL.1 #\n");
	a=2;
	
	for(i=1;i<=c;i++)
	{
		
		for(k=1;k<=a;k++)
	    {
		printf(" ");
   		}
	    a++;
	    
		
		for(j=c-1;j>=i;j--)
		{ 
			system("color 4");
			system("color 2");
			system("color 3");
			system("color 9");
		    printf(" +");
	    }
	    
	    
	    
	 printf("\n");
		
	}
	printf("\t\t\t\t\t\t\t\t\t\t\t\t\tBY: S&W");
}
