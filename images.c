//Authors: Kevin Tran & Ashley Garcia
//Date: 05.04.2024
//Purpose: Final Project/Image Stuff


#include <stdio.h>
#define ROW 11
#define COL 21

int getMENUCHOICE();
int getEDITCHOICE();
int displayImage();
int loadImage();
int saveImage();
int cropImage();
void dimimage();
void brightenimage();
//rotate image function goes here (EXTRA CREDIT)

int loadImage(){
			int row, col;
			FILE* fp;
			fp = fopen("test_image.txt", "r");
			if(fp == NULL){
			printf("File cannot be opened\n");
			
		return 0;
	}
	
		else{
			int a2DArray[ROW][COL];
			for(row = 0; row < ROW; row++){
				for(col = 0; col < COL; col++){
					printf("%d ", a2DArray[ROW][COL]);
			}
		}
		fclose(fp);
	}	
}

int main(){
	int menuchoice;
	int editchoice;
	
	do{
		menuchoice = getMENUCHOICE();
		
		switch(menuchoice){
			case 1:
				loadimage = loadImage();
				break;
			case 2:
				displayimage = displayImage();
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

int saveImage(){
	char choice;
	
	printf("Would you like to save this image?\n");
	scanf(" %c", &choice);
	
		if(choice == 'y' || 'Y'){
			
		}
			printf("Image was saved\n"); //place holder 
			
		}
		if(choice == 'n' || 'N'){
			printf("Image was not saved\n");//place holder
		}
}
int cropImage(){
int a2DArray[ROW][COL]; //new int to start
			for(row = 0; row < ROW; row++){
				for(col = 0; col < COL; col++){
					printf("%d ", a2DArray[row][col]);
			}
}

int displayImage(int a2DArray[][21], int row, col;){
	int a2DArray[ROW][COL];
			for(row = 0; row < ROW; row++){
				for(col = 0; col < COL; col++){
					printf("%d ", a2DArray[row][col]);
			}
}
