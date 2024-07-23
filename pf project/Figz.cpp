#include<stdio.h>
#include<windows.h>
#include<stdlib.h>
#include<unistd.h>
#include<string.h>
#include<conio.h>
void payment();
void search ();
void biryani ();
void nihari ();
void karahi ();
void chicken_tikka ();
void beef_tikka ();
void beef_burger ();
void zinger_burger ();
void chicken_burger ();
void cheese_ham ();
void pizza_lar ();
void pizza_sml ();
void fish_n_chips ();
void fried_fish ();
void prawns ();
void grilled_fish ();
void spag_nood ();
void wonton ();
void soup ();
void chowmein ();
void dumplings ();
void bill (int);
void review(int);
struct file_data{
	char resturant[35];
	int price;
}y[135];
struct bills {
	char item[20];
	int tot;
}x[20];
struct revname{
	char name[30];
}z;
int i=1;
//void gotoxy(short a, short b); //function declaration
void gotoxy(short a, short b) //Custom gotoxy() function
{
    COORD coordinates; //Data type of co-ordinates
    coordinates.X = a; //Assign value to X- Co-ordinate
    coordinates.Y = b; //Assign value to Y Co-ordinate
 
SetConsoleCursorPosition(
        GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
 
}
void signup(){
	char em[50],pin[30],email[50];
	FILE *ptr;
	ptr=fopen("abc.txt","a+");
	b:
	gotoxy(20,7);
	printf ("Enter your email=");
	fflush(stdin);
	gets(email);
	while(!feof(ptr)){
		fscanf(ptr,"%s",em); 
		if((strcmp(em,email))==0){
			gotoxy(20,8);
			printf ("This email already exists.Please make another one\n");
			sleep(2);
			system("cls");
			goto b;
		}
	}
	gotoxy(20,8);
  printf("Enter your passcode=");
  gets(pin);
  fprintf (ptr,"\n%s\n%s",email,pin);
  gotoxy(20,8);
  printf ("\nSuccesfully recorded");
  strcpy(z.name,email);
  fclose(ptr); 	
}
void login(){
	char email[50],em[50],pin[30],pinv[50];
	email:
	sleep(1);
	system("cls");
	int code=0;
	gotoxy(20,5);
	printf ("Enter your email: ");
	fflush(stdin);
	gets(email);
	FILE *ptr;
	ptr=fopen("abc.txt","a+");
	while(!feof(ptr)){
		fscanf (ptr,"%s",em);
        if((strcmp(em,email))==0){
        	code=1;
        	gotoxy(20,6);
        	printf ("Enter your passcode: ");
        	gets(pin);
        	fscanf (ptr,"%s",pinv);
        	if((strcmp(pin,pinv))==0){
        		gotoxy(20,8);
        		printf ("Succesfully signed in");
        		strcpy(z.name,email);
				fclose(ptr);
        		sleep(1);
				break;}
        	else{
        		pin:
        		gotoxy(20,7);
        		printf ("wrong passocode.Please enter again");
        		sleep(2);
        		system("cls");
        		gotoxy(20,5);
        		printf ("Enter your email: %s\n",email);
        		gotoxy(20,6);
        		printf ("Enter your passcode: ");
        		gets(pin);
        		if((strcmp(pin,pinv))==0){
        			gotoxy(20,8);
        		printf ("Succesfully signed in");
        		fclose(ptr);
        		sleep(1);
				break;}
        		else
        		goto pin;
			    }	
			
		   }
	    }
	   if(code!=1){
	   	gotoxy(21,7);
	   	printf ("No such email found");
	   	gotoxy(20,8);
	   	printf ("Please Enter your email again");
	   	goto email;
	   } 
    }
    void redirect(void){
    system("CLS");printf("Redirecting.");sleep(1);system("CLS");printf("Redirecting..");sleep(1);system("CLS");printf("Redirecting...");sleep(1);system("CLS");
}
void close(void)
{
    printf("\n\n\nPROJECT BY Daniyal(22k-4601), Ahmed Abdullah(22k-4449) and Anas Ahmed(22k-4154)\n");
    exit(1);
    }
main(){
	int ag, an1, ag1, lans,laag,ans;
	char email[100];
	ag:
	gotoxy(30,4);
	printf("Welcome to FIGZZ\n");
	gotoxy(20,8);
	sleep(1);system("color A");printf("Select from below:");
	gotoxy(20,9);printf("1.Sign up");gotoxy(20,10);printf("2.Login\n");
	gotoxy(20,11);
	scanf("%d", &an1);
	system("cls");
	if(an1==1)signup();
	else if(an1==2)login();
	else {
	printf("Wrong choice! Select again ");
	sleep(1);
	system("cls");
	goto ag;
    }
	ag1:
	system("cls");
	printf ("loading|||||\nplease wait.");sleep(1);system("cls");printf ("loading|||||||||\nplease wait..");sleep(1);system("cls");printf ("loading||||||||||||||||||\nplease wait...");sleep(1);system("cls");printf ("loading completed\nThanks for waiting :)");sleep(1);	
	system("cls");
	gotoxy(0,0);
	printf("       We offer these:\n=========================================================\n1.Dine In        2.Take Away         3.Delivery\n");
	scanf("%d", &ans);
	system("CLS");
	if(ans==1){printf("You have selected Dine-IN");sleep(1);redirect();}
	else if (ans==2){printf("You have selected Take Away");sleep(1);redirect();}
	else if (ans==3){printf("You have selected Delivery");sleep(1);redirect();}
    else{printf("We have no such option. Please choose another one.");sleep(1);system("CLS");goto ag;}
    FILE *f1ptr;
	FILE *f2ptr;
	
	f1ptr = fopen("1.txt","r");
	f2ptr = fopen("2.txt","r");
	
	for (int k=0;k<135;k++){
		fgets(y[k].resturant,35,f1ptr);
	}
	
	for (int k=0;k<135;k++){
		fscanf(f2ptr,"%d",&y[k].price);
	}
	
	fclose(f1ptr);
	fclose(f2ptr);
	food:
	system("cls");
    int a;
    printf("\n                                    MENU\n================================================================================================================\n\n");
    printf("   1-[Desi Foods]  2-[Fast Food]  3-[Sea Food]  4-[Chinese Food]\n   5-[Print BILL!!]  6-[Search]  7-[Reviews]    8-[Exit]\n");
    printf("   enter choice: ");
    int b;
    scanf("%d",&b);
    system("cls");
    switch (b){
    	case 8:
            		printf("Project by:\n Daniyal (22k-4601), Ahmed Abdullah (22k-4449), and Anas Ahmed (22k-4154)");
            		break;
    	case 1:
    		printf("                             Menu\n-----------------------------------------------------------------------------------------\n\n ");
    		printf("\n  1-biryani\n  2-nihari\n  3-karahi\n  4-chicken tikka\n  5-beef tikka\n");
			printf("\n**choose option: ");
	        scanf("%d",&a);
	        system("cls");
	        printf("                                 Available resturants");
	        printf("\n========================================================================================\n");
            switch (a){
    	        case 1:
    		    biryani();
    		    printf("\nwant to buy something more? (y/n) :");
	            char more;
	            scanf(" %c",&more);
	              if (more=='y'){
		            system("cls");
		            i++;
		            goto food;	
	               }
	              else{
		          system("cls");
		          printf ("Printing you bill\n.please wait...");sleep(1);system("cls");printf ("Printing you bill\n.please wait......");sleep(1);system("cls");printf ("Printing you bill\n.please wait......");system("cls");
		          bill(ans);
	              } 		
    		    break;
    	        case 2:
    		    nihari();
    		    printf("\nwant to buy something more? (y/n) :");
	            scanf(" %c",&more);
	              if (more=='y'){
		            system("cls");
		            i++;
		            goto food;	
	               }
	              else{
		          system("cls");
		          printf ("Printing you bill\n.please wait...");sleep(1);system("cls");printf ("Printing you bill\n.please wait......");sleep(1);system("cls");printf ("Printing you bill\n.please wait......");system("cls");
		          bill(ans);
	              } 			
    		    break;
		        case 3:
			    karahi();
			     printf("\nwant to buy something more? (y/n) :");
	            scanf(" %c",&more);
	              if (more=='y'){
		            system("cls");
		            i++;
		            goto food;	
	               }
	              else{
		          system("cls");
		          printf ("Printing you bill\n.please wait...");sleep(1);system("cls");printf ("Printing you bill\n.please wait......");sleep(1);system("cls");printf ("Printing you bill\n.please wait......");system("cls");
		          bill(ans);
	              } 			
			    break;
		        case 4:
			    chicken_tikka();
			    printf("\nwant to buy something more? (y/n) :");
	            scanf(" %c",&more);
	              if (more=='y'){
		            system("cls");
		            i++;
		            goto food;	
	               }
	              else{
		          system("cls");
		          printf ("Printing you bill\n.please wait...");sleep(1);system("cls");printf ("Printing you bill\n.please wait......");sleep(1);system("cls");printf ("Printing you bill\n.please wait......");system("cls");
		          bill(ans);
	              } 		
			    break;
		        case 5:
			    beef_tikka();
			    printf("\nwant to buy something more? (y/n) :");
	            scanf(" %c",&more);
	              if (more=='y'){
		            system("cls");
		            i++;
		            goto food;	
	               }
	              else{
		          system("cls");
		          printf ("Printing you bill\n.please wait...");sleep(1);system("cls");printf ("Printing you bill\n.please wait......");sleep(1);system("cls");printf ("Printing you bill\n.please wait......");system("cls");
		          bill(ans);
	              } 			
			    break;
			}
			break;
    	case 2:
    		printf("                             Menu\n-----------------------------------------------------------------------------------------\n\n ");
    		printf("1-beef burger\n  2-zinger burger\n  3-chicken burger\n  4-cheese burger\hamburger\n  5-pizza large\n  6-pizza small\n");
			printf("\n**choose option: ");
	        scanf("%d",&a);
	        system("cls");
	        printf("                                 Available resturants");
	        printf("\n========================================================================================\n");
            switch (a){
                case 1:
			        beef_burger();
			        printf("\nwant to buy something more? (y/n) :");
	            char more;
	            scanf(" %c",&more);
	              if (more=='y'){
		            system("cls");
		            i++;
		            goto food;	
	               }
	              else{
		          system("cls");
		          printf ("Printing you bill\n.please wait...");sleep(1);system("cls");printf ("Printing you bill\n.please wait......");sleep(1);system("cls");printf ("Printing you bill\n.please wait......");system("cls");
		          bill(ans);
	              } 			
			        break;
    	        case 2:
    		        zinger_burger();
    		       printf("\nwant to buy something more? (y/n) :");
	            scanf(" %c",&more);
	              if (more=='y'){
		            system("cls");
		            i++;
		            goto food;	
	               }
	              else{
		          system("cls");
		          printf ("Printing you bill\n.please wait...");sleep(1);system("cls");printf ("Printing you bill\n.please wait......");sleep(1);system("cls");printf ("Printing you bill\n.please wait......");system("cls");
		          bill(ans);
	              } 		
    		        break;
		        case 3:
			        chicken_burger();
			        printf("\nwant to buy something more? (y/n) :");
	            
	            scanf(" %c",&more);
	              if (more=='y'){
		            system("cls");
		            i++;
		            goto food;	
	               }
	              else{
		          system("cls");
		          printf ("Printing you bill\n.please wait...");sleep(1);system("cls");printf ("Printing you bill\n.please wait......");sleep(1);system("cls");printf ("Printing you bill\n.please wait......");system("cls");
		          bill(ans);
	              } 		
			        break;
		        case 4:
			        cheese_ham();
			       printf("\nwant to buy something more? (y/n) :");
	            
	            scanf(" %c",&more);
	              if (more=='y'){
		            system("cls");
		            i++;
		            goto food;	
	               }
	              else{
		          system("cls");
		          printf ("Printing you bill\n.please wait...");sleep(1);system("cls");printf ("Printing you bill\n.please wait......");sleep(1);system("cls");printf ("Printing you bill\n.please wait......");system("cls");
		          bill(ans);
	              } 		
			        break;
		        case 5:
			        pizza_lar();
			        printf("\nwant to buy something more? (y/n) :");
	           
	            scanf(" %c",&more);
	              if (more=='y'){
		            system("cls");
		            i++;
		            goto food;	
	               }
	              else{
		          system("cls");
		          printf ("Printing you bill\n.please wait...");sleep(1);system("cls");printf ("Printing you bill\n.please wait......");sleep(1);system("cls");printf ("Printing you bill\n.please wait......");system("cls");
		          bill(ans);
	              } 			
			        break;
		        case 6:
			        pizza_sml();
			        printf("\nwant to buy something more? (y/n) :");
	            
	            scanf(" %c",&more);
	              if (more=='y'){
		            system("cls");
		            i++;
		            goto food;	
	               }
	              else{
		          system("cls");
		          printf ("Printing you bill\n.please wait...");sleep(1);system("cls");printf ("Printing you bill\n.please wait......");sleep(1);system("cls");printf ("Printing you bill\n.please wait......");system("cls");
		          bill(ans);
	              } 			
			        break;
		}
    		break;
		case 3:
			printf("                             Menu\n-----------------------------------------------------------------------------------------\n\n ");
			printf("\n  1-fish n chips\n  2-fried fish\n  3-prawns\n  4-grilled fish\n");
			printf("\n**choose option: ");
	        scanf("%d",&a);
	        system("cls");
	        printf("                                 Available resturants");
	        printf("\n========================================================================================\n");
            switch (a){
			    case 1:
    		        fish_n_chips();
    		        printf("\nwant to buy something more? (y/n) :");
	            char more;
	            scanf(" %c",&more);
	              if (more=='y'){
		            system("cls");
		            i++;
		            goto food;	
	               }
	              else{
		          system("cls");
		          printf ("Printing you bill\n.please wait...");sleep(1);system("cls");printf ("Printing you bill\n.please wait......");sleep(1);system("cls");printf ("Printing you bill\n.please wait......");system("cls");
		          bill(ans);
	              } 			
    		        break;
		        case 2:
			        fried_fish();
			        printf("\nwant to buy something more? (y/n) :");
	           
	            scanf(" %c",&more);
	              if (more=='y'){
		            system("cls");
		            i++;
		            goto food;	
	               }
	              else{
		          system("cls");
		          printf ("Printing you bill\n.please wait...");sleep(1);system("cls");printf ("Printing you bill\n.please wait......");sleep(1);system("cls");printf ("Printing you bill\n.please wait......");system("cls");
		          bill(ans);
	              } 			
			        break;
		        case 3:
			        prawns();
			       printf("\nwant to buy something more? (y/n) :");
	            
	            scanf(" %c",&more);
	              if (more=='y'){
		            system("cls");
		            i++;
		            goto food;	
	               }
	              else{
		          system("cls");
		          printf ("Printing you bill\n.please wait...");sleep(1);system("cls");printf ("Printing you bill\n.please wait......");sleep(1);system("cls");printf ("Printing you bill\n.please wait......");system("cls");
		          bill(ans);
	              } 		
			        break;
		        case 4:
			        grilled_fish();
			       	printf("\nwant to buy something more? (y/n) :");
	            
	            scanf(" %c",&more);
	              if (more=='y'){
		            system("cls");
		            i++;
		            goto food;	
	               }
	              else{
		          system("cls");
		          printf ("Printing you bill\n.please wait...");sleep(1);system("cls");printf ("Printing you bill\n.please wait......");sleep(1);system("cls");printf ("Printing you bill\n.please wait......");system("cls");
		          bill(ans);
	              } 		
			        break;
		}
			break;
		case 4:	
		    printf("                             Menu\n-----------------------------------------------------------------------------------------\n\n "); 
		    printf("\n  1-spaghetti/noodles\n  2-wonton\n  3-soup\n  4-chowmein\n  5-dumplings\n");
			printf("\n**choose option: ");
	        scanf("%d",&a);
	        system("cls");
	        printf("                                 Available resturants");
	        printf("\n========================================================================================\n");
            switch (a){
			    case 1:
			        spag_nood();
			        printf("\nwant to buy something more? (y/n) :");
	            char more;
	            scanf(" %c",&more);
	              if (more=='y'){
		            system("cls");
		            i++;
		            goto food;	
	               }
	              else{
		          system("cls");
		          printf ("Printing you bill\n.please wait...");sleep(1);system("cls");printf ("Printing you bill\n.please wait......");sleep(1);system("cls");printf ("Printing you bill\n.please wait......");system("cls");
		          bill(ans);
	              } 			
			        break;
    	        case 2:
    		        wonton();
    		         printf("\nwant to buy something more? (y/n) :");
	            
	            scanf(" %c",&more);
	              if (more=='y'){
		            system("cls");
		            i++;
		            goto food;	
	               }
	              else{
		          system("cls");
		          printf ("Printing you bill\n.please wait...");sleep(1);system("cls");printf ("Printing you bill\n.please wait......");sleep(1);system("cls");printf ("Printing you bill\n.please wait......");system("cls");
		          bill(ans);
	              } 			
    		        break;
		        case 3:
			        soup();
			        printf("\nwant to buy something more? (y/n) :");
	            
	            scanf(" %c",&more);
	              if (more=='y'){
		            system("cls");
		            i++;
		            goto food;	
	               }
	              else{
		          system("cls");
		          printf ("Printing you bill\n.please wait...");sleep(1);system("cls");printf ("Printing you bill\n.please wait......");sleep(1);system("cls");printf ("Printing you bill\n.please wait......");system("cls");
		          bill(ans);
	              } 			
			        break;
		        case 4:
			        chowmein();
					printf("\nwant to buy something more? (y/n) :");
	            
	            scanf(" %c",&more);
	              if (more=='y'){
		            system("cls");
		            i++;
		            goto food;	
	               }
	              else{
		          system("cls");
		          printf ("Printing you bill\n.please wait...");sleep(1);system("cls");printf ("Printing you bill\n.please wait......");sleep(1);system("cls");printf ("Printing you bill\n.please wait......");system("cls");
		          bill(ans);
	              } 		 	
			        break;
		        case 5:
		            dumplings(); 
					printf("\nwant to buy something more? (y/n) :");
	           
	            scanf(" %c",&more);
	              if (more=='y'){
		            system("cls");
		            i++;
		            goto food;	
	               }
	              else{
		          system("cls");
		          printf ("Printing you bill\n.please wait...");sleep(1);system("cls");printf ("Printing you bill\n.please wait......");sleep(1);system("cls");printf ("Printing you bill\n.please wait......");system("cls");
		          bill(ans);
	              } 			
			        break;
		}
	
 		    break;
 		case 5:
 			printf ("Printing you bill\n.please wait...");sleep(1);system("cls");printf ("Printing you bill\n.please wait......");sleep(1);system("cls");printf ("Printing you bill\n.please wait......");system("cls");
		    bill(ans);
			break; 
		case 6:
		    search();
		       printf("\nwant to buy something more? (y/n) :");
	           char more;
	            scanf(" %c",&more);
	              if (more=='y'){
		            system("cls");
		            i++;
		            goto food;	
	               }
	              else{
		          system("cls");
		          printf ("Printing you bill\n.please wait...");sleep(1);system("cls");printf ("Printing you bill\n.please wait......");sleep(1);system("cls");printf ("Printing you bill\n.please wait......");system("cls");
		          bill(ans);
	              } 
		case 7:
			int coder=0;
		    review(coder);
		    goto food;	 
	}
    
}
    void biryani (void){
	int c;
	for(int j=0;j<=8;j++){
	printf(" %s",y[j].resturant);
	}
	scanf("%d",&c);
    x[i].tot=y[c-1].price;
	strcpy(x[i].item,"biryani");
}
     void nihari (void){
	int c;
	for(int j=9;j<=13;j++){
	printf(" %s",y[j].resturant);
	}
    scanf("%d",&c);
    x[i].tot=y[8+c].price;
	strcpy(x[i].item,"nihari");	
}
    void karahi (void){
	int c;
	for(int j=14;j<=21;j++){
	printf(" %s",y[j].resturant);
	}
    scanf("%d",&c);
    x[i].tot=y[13+c].price;
	strcpy(x[i].item,"karahi");
		
}
void    chicken_tikka (void){
    int c;
    for(int j=22;j<=29;j++){
	printf(" %s",y[j].resturant);
	}
    scanf("%d",&c);
    x[i].tot=y[21+c].price;
	strcpy(x[i].item,"chicken tikka");
	
}
    void beef_tikka (void){
	int c;
	for(int j=30;j<=37;j++){
	printf(" %s",y[j].resturant);
	}
    scanf("%d",&c);
    x[i].tot=y[29+c].price;
	strcpy(x[i].item,"beef tikka");
	
}
    void beef_burger (void){
	int c;
	for(int j=38;j<=46;j++){
	printf(" %s",y[j].resturant);
	}
    scanf("%d",&c);
    x[i].tot=y[37+c].price;
	strcpy(x[i].item,"beef burger");

}
    void zinger_burger (void){
	int c;
	for(int j=47;j<=55;j++){
	printf(" %s",y[j].resturant);
	}
    scanf("%d",&c);
    x[i].tot=y[46+c].price;
	strcpy(x[i].item,"zinger burger");
		
}
    void chicken_burger (void){
	int c;
	for(int j=56;j<=64;j++){
	printf(" %s",y[j].resturant);
	}
    scanf("%d",&c);
    x[i].tot=y[55+c].price;
	strcpy(x[i].item,"chicken burger");
	
}
    void cheese_ham (void){
	int c;
	for(int j=65;j<=73;j++){
	printf(" %s",y[j].resturant);
	}
    scanf("%d",&c);
    x[i].tot=y[64+c].price;
	strcpy(x[i].item,"cheez/ham burger");
		
}
   void pizza_lar (void){
	int c;
	for(int j=74;j<=81;j++){
	printf(" %s",y[j].resturant);
	}
    scanf("%d",&c);
    x[i].tot=y[73+c].price;
	strcpy(x[i].item,"large pizza");
	
}
    void pizza_sml (void){
	int c;
	for(int j=82;j<=89;j++){
	printf(" %s",y[j].resturant);
	}
    scanf("%d",&c);
    x[i].tot=y[81+c].price;
	strcpy(x[i].item,"small pizza");

}
    void fish_n_chips (void){
	int c;
	for(int j=90;j<=93;j++){
	printf(" %s",y[j].resturant);
	}
    scanf("%d",&c);
    x[i].tot=y[89+c].price;
	strcpy(x[i].item,"fish n chips");
		
}
    void fried_fish (void){
	int c;
	for(int j=94;j<=98;j++){
	printf(" %s",y[j].resturant);
	}
    x[i].tot=y[93+c].price;
	strcpy(x[i].item,"fried fish");

}
    void prawns (void){
	int c;
	for(int j=99;j<=103;j++){
	printf(" %s",y[j].resturant);
	}
    scanf("%d",&c);
    x[i].tot=y[98+c].price;
	strcpy(x[i].item,"prawns");
	
}
    void grilled_fish (){
	int c;
	for(int j=104;j<=109;j++){
	printf(" %s",y[j].resturant);
	}
    scanf("%d",&c);
    x[i].tot=y[103+c].price;
	strcpy(x[i].item,"grilled fish");
	
}
    void spag_nood (void){
	int c;
	for(int j=110;j<=114;j++){
	printf(" %s",y[j].resturant);
	}
    scanf("%d",&c);
    x[i].tot=y[109+c].price;
	strcpy(x[i].item,"spahetti/noodles");
	
}
   void wonton (void){
	int c;
	for(int j=115;j<=119;j++){
	printf(" %s",y[j].resturant);
	}
    scanf("%d",&c);
    x[i].tot=y[114+c].price;
	strcpy(x[i].item,"wonton");
	
}
   void  soup (void){
	int c;
	for(int j=120;j<=124;j++){
	printf(" %s",y[j].resturant);
	}
    scanf("%d",&c);
    x[i].tot=y[119+c].price;
	strcpy(x[i].item,"soup");

}
   void chowmein (void){
	int c;
	for(int j=125;j<=129;j++){
	printf(" %s",y[j].resturant);
	}
    scanf("%d",&c);
    x[i].tot=y[124+c].price;
	strcpy(x[i].item,"chowmein");
	
}
    void dumplings (void){
	int c;
	for(int j=130;j<=134;j++){
	printf(" %s",y[j].resturant);
	}
    scanf("%d",&c);
    x[i].tot=y[129+c].price;
	strcpy(x[i].item,"dumplings");
}
    void bill (int choice){
	system("cls");
	printf("                             BILL                                   \n======================================================================\n");
	int j,total=0;
	for (j=1;j<=i;j++){
		printf("\n product %d : %s \n price of %d : %d Rs",j,x[j].item,j,x[j].tot);
		total=total+x[j].tot;
	}
	printf("\n--------------------------------");
	printf("\n Total : %d Rs\n",total);
	if(total>500){
		printf ("Do you have any discount coupon(y for yes): ");
		char coup;
		fflush(stdin);
		scanf ("%c",&coup);
		if(coup=='y'){
			printf ("\nPlease enter discount coupon code: ");
		char discount[10];
		scanf ("%s" ,&discount);
		char coupon[]="pf1234";
		if((strcmp(discount,coupon))==0){
			total=total-((total*40)/100);
			printf ("\nCoupon applied,\n Your new bill is %d" ,total);
		}
	}
	}
	if(choice==1){
		printf ("\nYou had selected Dine-in\nPlease enter time at which you would arrive so that we can book a table for you\n");
		sleep(1);
		fflush(stdin);
		printf ("\nPlease Enter time: ");
		char time[15];
		gets(time);
		sleep(1);
		payment();
		system("color E");
		printf ("\t\tORDER CONFIRMED\n");
		sleep(2);	
		printf ("\n\nWe will try to prepare everything according to your demands to make this evening memorable for you\n");
	}
	else if(choice==2){
		printf ("You had selected Take-away\n");
		payment();
		system("color E");
		printf ("\t\tORDER CONFIRMED\n\t\tYou can collect your order in 25 minutes\n");
		sleep(2);	
		system("color A");
		printf ("\n\nWe will try to prepare everything according to your demands to make this evening memorable for you\n");	
	}
	else if(choice==3){
		char adr[100];
		printf ("You had selected Delivery\nPlease enter your address:");
		fflush(stdin);
		gets(adr);
		sleep(1);
		payment();	
		system("color E");
		printf ("\t\tORDER CONFIRMED\n\t\tYour order will be delivered in 25 minutes\n");
		sleep(2);
		system("color A");
		printf ("\n\nWe will try to prepare everything according to your demands to make this evening memorable for you\n");	
	}
	sleep(2);
	getch();
	system("cls");
	system("color A");
	printf ("Do you want to give review\nYour review help us in improving\nY for yes\nN for no");
	char revi;
	scanf (" %c",&revi);
	int coder=1;
	if(revi=='y'){
		review(coder);
		sleep(1);
	}
	close();
}
void search (void){
	system("cls");
	char str[30];
	p:
	fflush(stdin);
	printf("\n enter dish name : ");
	gets(str);
	strlwr(str);
	if (strcmp(str,"biryani")==0 || strcmp(str,"chicken biryani")==0 || strcmp(str,"beef biryani")==0){
		biryani();	
	}
	else if(strcmp(str,"nihari")==0 || strcmp(str,"chicken nihari")==0 || strcmp(str,"")==0){
		nihari();
	}
	else if(strcmp(str,"karahi")==0){
		karahi();
	}
	else if(strcmp(str,"chicken tikka")==0 || strcmp(str,"tikka")==0){
		chicken_tikka();
	}
	else if(strcmp(str,"beef tikka")==0){
		beef_tikka();
	}
	else if(strcmp(str,"beef burger")==0){
		beef_burger();
	}
	else if(strcmp(str,"zinger burger")==0){
		zinger_burger();
	}
	else if(strcmp(str,"chicken burger")==0 || strcmp(str,"burger")==0){
		chicken_burger();
	}
	else if(strcmp(str,"cheese burger")==0 || strcmp(str,"ham burger")==0){
		cheese_ham();
	}
	else if(strcmp(str,"large pizza")==0 || strcmp(str,"pizza")==0){
		pizza_lar();
	}
	else if(strcmp(str,"small pizza")==0){
		pizza_sml();
	}
	else if(strcmp(str,"fish and chips")==0  || strcmp(str,"fish")==0){
		fish_n_chips();
	}
	else if(strcmp(str,"fried fish")==0 || strcmp(str,"fish fry")==0){
		fried_fish();
	}
	else if(strcmp(str,"prawns")==0){
		prawns();
	}
	else if(strcmp(str,"grilled fish")==0){
		grilled_fish();
	}
	else if(strcmp(str,"spaghetti")==0  ||  strcmp(str,"noodles")==0  || strcmp(str,"macroni")==0){
		spag_nood();
	}
	else if(strcmp(str,"wonton")==0  || strcmp(str,"wongtong")==0){
		wonton();
	}
	else if(strcmp(str,"soup")==0  ||  strcmp(str,"chicken corn soup")==0 || strcmp(str,"hot and corn soup")==0){
		soup();
	}
	else if(strcmp(str,"chowmein")==0){
		chowmein();
	}
	else if(strcmp(str,"dumplings")==0){
		dumplings();
	}
	else{
		printf("\ncould not find..");
		goto p;
	}
}
void review(int coder){
	int return1;
	char review[100],revfile[100],see;
	FILE *rev;
	rev=fopen("review.txt","a+");
	if(coder==0){
		while(!feof(rev)){
			fgets (revfile,100,rev);
			printf ("%s",revfile);
		}
		printf ("\n\nPress 1 to return to menu\n");
		scanf ("%d",&return1);
	}
	else{
	fflush(stdin);
	system("cls");
	printf ("Please Enter your review:\n ");
	gets(review);
	sleep(1);
	printf ("\nYour review has been Recorded.\nWe appreciate you\n");
	sleep(1);
	fprintf (rev,"\n\n%s:",z.name);
	fprintf (rev,"\n%s",review);
	printf ("\n\n\nPress any key to end");
	getch();
    }
    fclose(rev);
}
void payment(void){
		pay:
		printf ("Do you want to pay\n1). Online \n2).Cash Payment\n");
		int o;
		scanf ("%d" ,&o);
		if(o==1){
			printf ("Please Enter your account number: ");
			int account_no;
			scanf ("%d" ,&account_no);
			printf ("Please enter pin: ");
			int payment_pin;
			scanf ("%d",&payment_pin);
			system("cls");printf ("Doing transactions|||\nPlease wait.");sleep(1);system("cls");printf ("Doing transactions|||||||||\nPlease wait..");sleep(1);system("cls");printf ("Doing transactions|||||||||||||||\nPlease wait...");sleep(1);system("cls");
			sleep(1);
			system("cls");
			printf ("Payment successful\n");
		}
		else if(o==2){
			printf ("Cash payment selected\n");
			sleep(1);
			system("cls");
		}
		else{
			printf ("Please enter correct choice");
			sleep(1);
			goto pay;
		}	
}
