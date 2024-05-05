//Authors: Kevin Tran & Ashely Garcia
//Date: 05.04.2024
//Purpose: Final Project/Image Stuff


#include <stdio.h>

int getMENUCHOICE();
int getEDITCHOICE();
//load image function goes here
//save image function goes here
//crop image function goes here
void dimimage();
void brightenimage();
//rotate image function goes here (EXTRA CREDIT)

int main(){
	int menuchoice;
	int editchoice;
	
	do{
		menuchoice = getMENUCHOICE();
		
		switch(menuchoice){
			case 1:
				//load image stuff goes here
				break;
			case 2:
				//display image stuff goes here
				break;
			case 3:
				editchoice = getEDITCHOICE();
				
				switch(editchoice){
					case 1:
						//crop image stuff goes here
						break;
					case 2:
						dimimage();
						break;
					case 3:
						brightenimage();
						break;
					case 0: //return to main menu, no need to add anything else
						break;
					default:
						printf("Invalid Choice! (¬_¬')\n");
						printf("Please Try Again!\n\n");
						break;
				}
				
				break;
			case 0:
				printf("Goodbye! (-ω-)/\n\n");
				break;
			default:
				printf("Invalid Choice! (¬_¬')\n");
				printf("Please Try Again!\n\n");
				break;
		}
	}
	while(menuchoice != 0);
	
	return 0;
}

int getMENUCHOICE(){
	int userinput;
	
	printf("******MAIN MENU******\n");
	printf("=====================\n");
	printf("| [1] Load Image    |\n");
	printf("|-------------------|\n");
	printf("| [2] Display Image |\n");
	printf("|-------------------|\n");
	printf("| [3] Edit Image    |\n");
	printf("|-------------------|\n");
	printf("| [0] Exit          |\n");
	printf("=====================\n");
	
	printf("Please select one of the options from above: ");
	scanf("%d", &userinput);
	printf("\n");
	return userinput;
}

int getEDITCHOICE(){
	int userinput;
	
	printf("*********EDIT MENU*********\n");
	printf("===========================\n");
	printf("| [1] Crop Image          |\n");
	printf("|-------------------------|\n");
	printf("| [2] Dim Image           |\n");
	printf("|-------------------------|\n");
	printf("| [3] Brighten Image      |\n");
	printf("|-------------------------|\n");
	printf("| [0] Return to Main Menu |\n");
	printf("===========================\n");
	
	printf("Please select one of the options from above: ");
	scanf("%d", &userinput);
	printf("\n");
	return userinput;
}

void dimimage(){
	
}

void brightenimage (){

}
