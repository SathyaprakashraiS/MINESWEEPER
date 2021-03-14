#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#include<ctime>
using namespace std;
int main()
{
	system("cls");
	string c="safe";
	int jack=0,state=0,k=0,l=0,y=0,u=0,bombnumber=0,player=0,v=0;
	int a[5][5];
	int bmax=12,o=0;
	//strings bombs{0,1};
	cout<<"This is a minesweeper game of 5*5 layout made by SATHYA PRAKASH RAI S 19MIC0110\n";
	for(int i=0;i<5;i++)
	{
		cout<<"||";
		for(int j=0;j<5;j++)
		{
			cout<<"\t||";
		}
		if(i<4)
		{
		cout<<"\n------------------------------------------ \n";
	    }
	    else
	    {
	    	jack++; 
		}
	}
	for(int q=0;q<5;q++)
	{
		for(int w=0;w<5;w++)
		{
			a[q][w]=(rand() % 2);
			if(a[q][w]==1)
			{
				bombnumber++;
			}
			//cout<<a[q][w]<<"\t"; values randomised output
			//int result = 1 + (rand() % 6)
		}
	}
	cout<<"\nITS JUST A BASIC MINESWEEPER GAME USING ARRAY CONCEPT";
	cout<<"TO PICK A POSITION ,THE ENTRY MUST BE OF ARRAY TYPE\n";
	cout<<"EXAMPLE:IF YOU WANT TO PICK ROW 3 COLOMN THEN ENTER 3 AND ENTER AND 4 ENTER\nHOPE YOU WOULD LIKE IT\n";
	cout<<"\nENTER 1 TO CONTINUE\n";
	cin>>o;
	switch(o)
	{
		case 1:
			//game();
			system("cls");
			while(c=="safe")
			{
			cout<<"\nenter a value to pick in the game\n";
			cin>>k>>l;
			if(k>=6 || l>=6)
			{
				cout<<"\nINVALID ENTRY RETRY BY CORRECTING YOUR INPUT\n";
			}
			else if(a[k][l]==3)
			{
				cout<<"\nentry already recorded\n";
			}
			else
			{
			if(a[k][l]==1)
			{
				for(k=0;k<5;k++)
				{
					cout<<"||";
					for(l=0;l<5;l++)
					{
						if(a[k][l]==1)
						{
							cout<<" BOMB ||";
						}
						else
						{
							cout<<"\t||";
						}						
					}
					if(k<4)
		            {
					cout<<"\n------------------------------------------ \n";
	                }
	                else
	                {
	    	        jack++; 
		            }  
				}
				cout<<"\nSTEPPED ON BOMB :(\nGAME OVER\n";
				c="done";
			}
			else
			{
				player++;
				system("cls");
				a[k][l]=3;
			cout<<"GAME STATE:"<<state+1<<"\n";
		    for(k=0;k<5;k++)
	          {
	          	cout<<"||";
		       for( l=0;l<5;l++)
		         {
		         	if(a[k][l]==3)
		         	{
					 cout<<"PINNED||";
					 
				    }
				    else
				    {
				    	cout<<"\t||";
					}
		         }
		        if(k<4)
		         {
		          cout<<"\n------------------------------------------ \n";
	             }
	            else
	             {
	    	      jack++; 
		         }  
	          }
	          state++;
	        }
	        k=0;l=0;
	        cout<<"\n\t"<<25-bombnumber;
	        if(state>=(25-bombnumber))
	        {
	        	cout<<"\nYOU WON!!!";
	        	break;
			}
			else
			{
				jack++;
			}
		    }
		};
			break;
		default:
			cout<<"INVALID ENTRY\n";
	}
	cout<<"\nThank you\n";
	return 0;
}

