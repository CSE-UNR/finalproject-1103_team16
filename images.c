//Authors: Kevin Tran & Ashley Garcia
//Date: 05.04.2024
//Purpose: Final Project/Image Stuff


#include <stdio.h>
#define ROW 100
#define COL 100
#define STR_LEN 100
int getMENUCHOICE();
int getEDITCHOICE();

int loadImage();
int saveImage();
int cropImage();
void dimimage();
void brightenimage();
//rotate image function goes here (EXTRA CREDIT)

int loadImage(){
	char filename[STR_LEN+1];
	
	printf("Please enter the name of the file you wish to load in:\n");
	scanf("%s", filename);
	
	FILE *fp
	fp = fopen(filename, "r");
	if(fp = NULL){
		printf("File cannot be opened (¬_¬')\n");
		return 0;
	}
	else{
		while(fgets(
	}
	fclose(fp);	
}

int main(){
	int menuchoice;
	int editchoice;
	int loadimage;
	int display image;
	
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
			printf("bet\n"); //place holder 
		}
		if(choice == 'n' || 'N'){
			printf("bruh\n");//place holder
		}
}
int cropImage(){
int a2DArray[ROW][COL];
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

void dimimage(){
	int row;
	int col;
	char edited[ROW][COL];
	
	for(row = 0; row < ROW; row++){
		for(col = 0; col < COL; col++){
			if(a2dARRAY[row][col] == 1){
				edited[row][col] == ' ';
			}
			if(a2dARRAY[row][col] == 2){
				edited[row][col] == '.';
			}
			if(a2dARRAY[row][col] == 3){
				edited[row][col] == 'o';
			}
			if(a2dARRAY[row][col] == 4){
				edited[row][col] == 'O';
			}

		}
	}
}

void brightenimage(){
	int row;
	int col;
	char edited[ROW][COL];
	
	for(col = 0; col < COL; col++){
			if(a2dARRAY[row][col] == 0){
				edited[row][col] == '.';
			}
			if(a2dARRAY[row][col] == 1){
				edited[row][col] == 'o';
			}
			if(a2dARRAY[row][col] == 2){
				edited[row][col] == 'O';
			}
			if(a2dARRAY[row][col] == 3){
				edited[row][col] == '0';
			}

		}
}
