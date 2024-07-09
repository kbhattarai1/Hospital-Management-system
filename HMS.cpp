
#include<stdio.h>
#include <unistd.h>
#include<string.h>
#include<stdlib.h>
#include<conio.h>
#include<time.h>
#include <windows.h>
#define ANS 15
#define ACS 4  
COORD coord={0,0};
void gotoxy(int x,int y)
 {
   static HANDLE h = NULL; 
if(!h) h = GetStdHandle(STD_OUTPUT_HANDLE); 
COORD c = { x, y }; 
SetConsoleCursorPosition(h,c); 
    coord.X=x;
    coord.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
 }
struct emp
{
	char name[10];
	char gender[10];
	
	int age;
	int bs;
	char docname[10];
	
}e;
struct doc
{
	char dname[10];
	char dgender[10];
	
	int dage;
	char dspecial[10];
}f;

int main() 
{
	system("color BD");
gotoxy(40,10);	printf("\t\t*************************************************\n");
gotoxy(40,11);	printf("\t\t*       -----------------------------           *\n");
gotoxy(40,12);	printf("\t\t*        WELCOME TO KTM HOSPITAL                *\n");
gotoxy(40,13);	printf("\t\t*       -----------------------------           *\n");
gotoxy(40,14);	printf("\t\t*                                               *\n");
gotoxy(40,15);	printf("\t\t*                                               *\n");
gotoxy(40,16);	printf("\t\t*            Kathmandu,Nepal                    *\n");
gotoxy(40,17);	printf("\t\t*                                               *\n");
gotoxy(40,18);	printf("\t\t*                                               *\n");
gotoxy(40,19);	printf("\t\t*      CONTACT US:9803236991,0610423280         *\n");
gotoxy(40,20);	printf("\t\t*************************************************\n\n\n");
	sleep(4);
char userid[]="keshab",password[]="123",p[15],u[15];
   int n=1,a,b;

   	system("cls");
   system("color B1");
   char d[25]="Password Protected";

int i=0,j, c=0,l=0;


gotoxy(10,4);
for(j=0;j<20;j++)
{
Sleep(50);
printf("*");
}
for(j=0;j<20;j++)
{
Sleep(50);
printf("%c",d[j]);
}
for(j=0;j<20;j++)
{
Sleep(50);
printf("*");
}
   
   gotoxy(50,12);
   printf("\nEnter USER ID and PASSWORD below:");
   getch();
   while(n<=3)
   {
      system("cls");
      gotoxy(30,5);
      
      
      printf("Hospital Management System");
      gotoxy(30,10);
      
      
      printf("\nUSER ID: ");
      scanf("%s",u);
      
      system("cls");
      gotoxy(30,10);
      printf("\nPASSWORD: ");
      scanf("%s",p);
      a=strcmp(u,userid);
      b=strcmp(p,password);
      if(a==0&&b==0)
      {
      	system("cls");SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_BLUE);

      	
        

system("color B0");
	system("title Hospital Management record");//title of Console box
	FILE*fp,*ft,*fl,*fa;
	char another, choice,ch,cha,oop,ooa;
	char patname[40];
	char docaname[40];
	int o;
	int hh;
	long int recsize;
	fp=fopen("EMP1.DAT","ab+"); 
	if(fp==NULL)
	{
	     puts("File doesnot exit.");
	     exit(0);
	}
	fl=fopen("EMM.DAT","ab+");
	{
		if(fl==NULL)
		{
			puts("FIle foes not exist");
			exit(0);
		}
		
	}
	int pp = 0;
	for (int pp = 1; pp < 101; pp++) {
    gotoxy(33,20);    printf("\b\b\b\b\bLOADING %3d%%", pp);
        Sleep(20);
    }
 	
 
 system("clear");
 printf("\n");
	recsize=sizeof(e);
	
	
	while(1)
	{
		B:
		system("cls");
		
    
		gotoxy(0,0);
    printf("%c",201);
    for(i = 1; i < 78; i++){
        gotoxy(i, 0);
        printf("%c",205);
    }
    gotoxy(78,0);
    printf("%c",187);
    for(i = 1; i < 25; i++){
        gotoxy(78, i);
        if(i == 6){
            printf("%c",185);
        }else{
            printf("%c",186);
        }
    }
    gotoxy(78, 25);
    printf("%c",188);
    for(i = 77; i > 0; i--){
        gotoxy(i,25);
        if(i == 35){
            printf("%c",202);
        }else{
            printf("%c",205);
        }
    }
    gotoxy(0,25);
    printf("%c",200);
    for(i = 24; i > 0; i--){
        gotoxy(0,i);
        if(i == 6){
            printf("%c",204);
        }else{
            printf("%c",186);
        }
    }

    for(i = 1; i < 78; i++){
        gotoxy(i,6);
        if(i == 35){
            printf("%c",203);
        }else{
            printf("%c",205);
        }
    } 
	time_t s, val = 1;
    struct tm* current_time;
 
    // time in seconds
    s = time(NULL);
 
    // to get current time
    current_time = localtime(&s);
 
    // print time in minutes,
    // hours and seconds
 gotoxy(22,23);  printf("%02d:%02d:%02d",
           current_time->tm_hour,
           current_time->tm_min,
           current_time->tm_sec);
		gotoxy(16,5);
		printf("HOSPITAL RECORD OF PATIENTS And Doctors");
		gotoxy(22,8);
		printf("1.Add Doctor/Patient Record");
		gotoxy(22,10);
		printf("2.List Doctor/Patient Record");
		gotoxy(22,12);
		printf("3.Modify Record");
		gotoxy(22,14);
		printf("4.Delete Record");
		gotoxy(22,16);
		printf("5.Search Doctor/Patient");
		gotoxy(22,18);
		printf("0.Exit");
		gotoxy(22,20);
		printf("Please Enter Your Choice: ");
		fflush(stdin);  //to clear the stream/buffer
		choice=getche();//reads a single character from the keyboard and immeditiately display output on screen without prassing enter key
		switch(choice)
		{
			case '1':
				system("cls"); 
				
				
				gotoxy(40,12);
				printf("1.Enter details of patient\n");
				gotoxy(40,14);
				printf("2.Enter details of doctor\n");
		gotoxy(40,16);		
		printf("Enter your choice: ");
				ch=getche();
				switch(ch)
				{
				case '1':
		
			
				another='Y';
				while(another=='Y')
				{
					system("cls");	fseek(fp,0,SEEK_END);
					
					printf("\nEnter Patient name:\t");
					scanf("%s",e.name);
					printf("Gender:\t");
					scanf("%s",e.gender);
					
					printf("Enter Patient age:\t");
					scanf("%d",&e.age);
					printf("Enter ward no:\t");
					scanf("%d",&e.bs);
					
					printf(" \nEnter doctors name:\t");
					scanf("%s",e.docname);
					fwrite(&e,recsize,1,fp);
					printf("\nAdd another Record(Y/N): ");
					fflush(stdin);
					another=getche();
					
				}
				break;
				case '2':
							
					another='Y';
					while(another=='Y')
				{
					system("cls");	fseek(fl,0,SEEK_END);
					
					printf("\nEnter doctor name:\t");
					scanf("%s",f.dname);
					printf("Gender:\t");
					scanf("%s",f.dgender);
					
					printf("Enter doctor age:\t");
					scanf("%d",&f.dage);
				
					printf(" \nEnter doctors specialization:\t");
					scanf("%s",f.dspecial);
					fwrite(&f,recsize,1,fl);
					printf("\nAdd another Record(Y/N): ");
					fflush(stdin);
					another=getche();	
					
		}
	}
			
			
			
			
			
			
			
			
			
			
			
				break;
			case '2':
				system("cls");
				
		gotoxy(40,12);		printf("1.Display record of patient\n");
		gotoxy(40,14);		printf("2.Display record of Doctor\n");
		gotoxy(40,16);		printf("Enter your choice: ");
				ch=getche();
				switch(ch)
				{
					
			case'1':
				system("cls");
				gotoxy(1,1);

printf("\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdbRecord List\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb");

				rewind(fp);
			gotoxy(2,2);	printf("Name\t\tGender\t\tAge\t\tward no\t\tdoctor name\n");
				while(fread(&e,recsize,1,fp)==1)
					printf("%s\t\t%s\t\t%d\t\t%d\t\t%s\n",e.name,e.gender,e.age,e.bs,e.docname);
				system("pause");
				cha=getch();
				break;
				
			case'2':
					system("cls");
					rewind(fl);
					printf("\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdbRecord List\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb");

					
			gotoxy(2,2);		printf("Name\t\tGender\t\tAge\t\tSpecialization\n");
					while(fread(&f,recsize,1,fl)==1)
						printf("%s\t\t%s\t\t%d\t\t%s\n",f.dname,f.dgender,f.dage,f.dspecial);
				system("pause");
				
				
				
				
			}
				
				
				
				
				
				break;
			case '3':
				system("cls");
		gotoxy(40,12);		printf("1.Modify Patients information\n");
		gotoxy(40,14);		printf("2.Modify Doctors information\n");
		gotoxy(40,16);		printf("Enter your choice: ");
				ch=getche();
				switch(ch)
				{
				case'1':
					system("cls");
				another='Y';
				while(another=='Y')
				{
				printf("\xdb\xdb\xdb\xdb\xdb\xdb Edit Record \xdb\xdb\xdb\xdb\xdb\xdb");
v:
				gotoxy(2,2);	printf("\nEnter name of patient to modify: ");
					scanf("%s",patname);
					rewind(fp);
					while(fread(&e,recsize,1,fp)==1)
					{
						if(strcmp(e.name,patname)==0)
						{
							printf("\nEnter patient name:\t");
							scanf("%s",e.name);
							printf(" Enter your Gender:\t");
							scanf("%s",e.gender);
							printf("Enter patient age:\t");
							scanf("%d",&e.age);
							printf("Enter ward no:\t");
							scanf("%d",&e.bs);
							printf("Enter doctor name:\t");
							scanf("%s",e.docname);
							fseek(fp,-recsize,SEEK_CUR); //Current position of the file pointer
							fwrite(&e,recsize,1,fp);
								gotoxy(50,20);		printf("The record is modified");
									printf("\nModify another Record(Y/N): ");
					fflush(stdin);
					another=getche();
					if(another=='Y'||another=='y')
					
						goto v;
					
					else
						goto B;
					
					o=1;
							
					}}
					
				if(!o)
				{
					printf("RECORD DOESNOT EXIST\n");
					ooa=getche();
					if(ooa=='y')
					goto v;
					else
					goto B;
				}
			
		}
	
				
				
				
				
			break;
			case'2':
			system("cls");
			
				another='Y';
				while(another=='Y')
				{
				gotoxy(2,2);
				printf("\xdb\xdb\xdb\xdb\xdb\xdb Edit Record \xdb\xdb\xdb\xdb\xdb\xdb");
                       r:
					printf("\nEnter name of doctor to modify: ");
					scanf("%s",docaname);
					rewind(fl);
					while(fread(&f,recsize,1,fl)==1)
					{
						if(strcmp(f.dname,docaname)==0)
						{
							printf("\nEnter doctor name:\t");
							scanf("%s",f.dname);
							printf("Enter your Gender:\t");
							scanf("%s",f.dgender);
							printf("Enter doctor age:\t");
							scanf("%d",&f.dage);
							
							printf("Enter doctor Specialization:\t");
							scanf("%s",f.dspecial);
							fseek(fl,-recsize,SEEK_CUR); //Current position of the file pointer
							fwrite(&f,recsize,1,fl);
					gotoxy(50,20);		printf("The record is modified\n");
					printf("MODIFY ANOTHER RECORD Y/N");
					fflush(stdin);
					another=getche();
					if(another=='Y'||another=='y')
					
						goto r;
					
					else
						goto B;
					
					hh=1;
							
					}}
					
				if(!hh)
				{
					printf("RECORD DOESNOT EXIST\n");
					ooa=getche();
					if(ooa=='y')
					goto v;
					else
					goto B;
				}
					
				
				
			}
			
		}
			
			
			
		
			
			
			
				break;
			case '4':
				system("cls");
		gotoxy(40,12);
				printf("1.Delete Record of patients\n");
		gotoxy(40,14);		printf("2.Delete record of Doctors\n");
		gotoxy(40,16);		printf("3.Enter your choice: ");
				ch=getche();
				switch(ch)
				{
				case'1':
					system("cls");
				another='Y';
				while(another=='Y')
				{
					printf("\nEnter name of pat to delete: ");
					scanf("%s",patname);
					
					ft=fopen("TEMP.DAT","wb+");
					rewind(fp);
					while(fread(&e,recsize,1,fp)==1)
					{
						{if(strcmp(e.name,patname)!=0)
						
							fwrite(&e,recsize,1,ft);}
					}
					fclose(fp);
					fclose(ft);
					remove("EMP1.DAT");
					rename("TEMP.DAT","EMP1.DAT");
						fp=fopen("EMP1.DAT","rb+");
					printf("Delete another Record (Y/N): ");
					fflush(stdin);
					another=getche();
				}
			break;
			case'2':
				system("cls");
				another='Y';
				while(another=='Y')
				{
					printf("\nEnter name of doctor to delete: ");
					scanf("%s",docaname);
					
					fa=fopen("TEMP1.DAT","wb+");
					rewind(fl);
					while(fread(&f,recsize,1,fl)==1)
					{
						if(strcmp(f.dname,docaname)!=0){
						
							
							fwrite(&f,recsize,1,fa);}
					}
					fclose(fl);
					fclose(fa);
					remove("EMM.DAT");
					rename("TEMP1.DAT","EMM.DAT");
					fp=fopen("EMM.DAT","rb+");
					printf("Delete another Record (Y/N): ");
					fflush(stdin);
					another=getche();
				}
			
			
			
			
			
			
		}
			
			
			
			
			
				break;
				case '5':
					system("cls");
		gotoxy(40,12);			printf("1.Search patient\n");
			gotoxy(40,14);		printf("2.Search Doctor\n");
			gotoxy(40,16);		printf("Enter your choice: ");
					ch=getche();
					switch(ch)
					{
					
					case'1':
					system("cls");	
					
					k:
					another='Y';
						while(another=='Y')
					{
						printf("\nEnter the patient details you want to search: ");	
						gets(patname);
					fseek(fp,0,SEEK_SET);
					rewind(fp);
					while(fread(&e,recsize,1,fp)==1)
					
					{
							if(strcmp(e.name,patname)==0)
						{
							system("cls");
							 gotoxy(37,5);
							 printf("The record is Found! ");
        gotoxy(37,c+8);printf("Name: %s",e.name);
        gotoxy(37,c+10);printf("Gender: %s",e.gender);
        gotoxy(37,c+11);printf("Age: %d",e.age);
        gotoxy(37,c+12);printf("Ward no: %d",e.bs);
        gotoxy(37,c+13);printf("Doctor name: %s",e.docname);
        c+=6;
        
						}}
					if(c==0)
					
						printf("\nRecord not found");
						gotoxy(37,c+11);
						printf("Search another record (Y/N): ");
						if(getch()=='y')
							goto k;
						
						else
							goto B;
						
					
					
					break;
	
					
					case'2':
					
					system("cls");
						
					another='Y';
						while(another=='Y')
					{
						h:
						printf("\nEnter the doctor details you want to search: ");	
						scanf("%s",docaname);
					fseek(fl,0,SEEK_SET);
					rewind(fl);
					while(fread(&f,recsize,1,fl)==1)
					{
							if(strcmp(f.dname,docaname)==0)
						{
							 gotoxy(37,5);printf("The record is Found! ");
        gotoxy(37,l+10);printf("Name: %s",f.dname);
        gotoxy(37,l+11);printf("Gender: %s",f.dgender);
        gotoxy(37,l+12);printf("Age: %d",f.dage);
        
        gotoxy(37,l+13);printf("Specialization: %s",f.dspecial);
        l+=6;
    }}
					
						if(l==0)
					
						printf("\nRecord not found: ");
						gotoxy(37,l+11);
						printf("Search another record (Y/N): ");
						if(getch()=='y')
							goto h;
						
						else
							goto B;
							}
				
						
					
					
				}
					
					
					
					
					
					
					break;
				}
			case '0':
				system("cls");
				fclose(fp);
				fclose(fl);
				gotoxy(50,20);
				printf("AKA GROUP \n");
				gotoxy(50,22);
				printf("THANK YOU!");
				system("pause");
				exit(0);
		
	}

	}
	}	else
		{
			if(n==3)
			{
			goto A;
			}
			printf("\nYou have %d tries left! ",3-n);
			getch();
		}	
			A:
			if(n==3)
			{
				printf("\nYou have no tries left! ");
				exit(0);
			}n++;
   }
}

