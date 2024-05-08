//Authors: Kevin Tran & Ashley Garcia
//Date: 05.04.2024
//Purpose: Final Project/Image Stuff


#include <stdio.h>
#define ROW 100
#define COL 100
#define STR_LEN 100
#define MAX_LEN 100


int getMENUCHOICE();
int getEDITCHOICE();

int loadimage(int a2DArray[][COL]);
int saveImage();
int cropImage();
void displayImage();
void dimimage();
void brightenimage();
//rotate image function goes here (EXTRA CREDIT)



int main(){
	int menuchoice;
	int editchoice;
	int loadImage;
	int displayimage;
	int cropimage;
	int a2DArray[ROW][COL];
	
	int row = 0;
	int col = 0;
	
	do{
		menuchoice = getMENUCHOICE();
		
		switch(menuchoice){
			case 1:
				
				loadImage = loadimage(a2DArray);
				break;
			case 2:
				displayImage();
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

int loadimage(int a2DArray[][COL]){
	char filename[STR_LEN+1];
	char temp;
	int row = 0;
	int col = 0;
	int r;
	int c;
	
	
	printf("Please enter the name of the image you wish to load in:\n");
	scanf("%s", filename);
	
	FILE *fp;
	fp = fopen(filename, "r");
	if(fp == NULL){
		printf("\nFile cannot be opened (¬_¬')\n\n");
		return 0;
	}
	else{
		
		while(fscanf(fp, "%c", &temp) == 1){
			if(temp == '\n'){
				row++;
				col = 0;
			}
			else if(temp != ' '){
				a2DArray[row][col] = temp;
				col++;
			}
		}
		printf("\nImage successfully loaded! o(≧∇≦o)\n\n");	
		fclose(fp);
	}
}

void displayImage(int a2DArray[][COL], int row, int col){
	char filename[STR_LEN+1];
	char displayimage[ROW][COL];
	
	FILE *fp;
	fp = fopen(filename, "r");
	if(fp == NULL){
		printf("\nBruh where tf is the image (¬_¬')\n\n");
	}
	else{
		for(row = 0; row < ROW; row++){
			for(col = 0; col < COL; col++){
				if(a2DArray[row][col] == '0'){
					displayimage[row][col] = ' ';
				}
				if(a2DArray[row][col] == '1'){
					displayimage[row][col] = '.';
				}
				if(a2DArray[row][col] == '2'){
					displayimage[row][col] = 'o';
				}
				if(a2DArray[row][col] == '3'){
					displayimage[row][col] = 'O';
				}
				if(a2DArray[row][col] == '4'){
					displayimage[row][col] = '0';
				}
			}
		}
		for(row = 0; row < ROW; row++){
			for(col = 0; col < COL; col++){
				printf("%c", displayimage[row][col]);
			}
		}
	}
}	

int saveImage(int a2DArray[ROW][COL], int row, int col){
char choice;
	
	printf("Would you like to save this image?\n");
	scanf(" %c", &choice);
	
		if(choice == 'y' || 'Y'){
				FILE* fp;
			fp = fopen("test_image.txt", "w");
			if(fp == NULL){
			printf("File cannot be opened\n");		 
		}
	}
}
	
int cropImage(int a2DArray[ROW][COL], int row, int col, int cropRow, int cropCol, int beginRow, int beginCol){

		cropRow = beginRow - ROW;
				cropCol = beginCol - COL;
					for(row = beginRow; row < ROW; row++){
						for(col = beginCol; col < COL; col++){
							printf("%d ", a2DArray[row][col]);
					}
		}
}		


void dimimage(int a2DArray[][COL], int row, int col){
	
	char edited[ROW][COL];
	
	for(row = 0; row < ROW; row++){
		for(col = 0; col < COL; col++){
			if(a2DArray[row][col] == 1){
				edited[row][col] == ' ';
			}
			if(a2DArray[row][col] == 2){
				edited[row][col] == '.';
			}
			if(a2DArray[row][col] == 3){
				edited[row][col] == 'o';
			}
			if(a2DArray[row][col] == 4){
				edited[row][col] == 'O';
			}

		}
	
	}
}

void brightenimage(int a2DArray[][COL], int row, int col){
	
	char edited[ROW][COL];
	
	
	for(col = 0; col < COL; col++){
			if(a2DArray[row][col] == 0){
				edited[row][col] == '.';
			}
			if(a2DArray[row][col] == 1){
				edited[row][col] == 'o';
			}
			if(a2DArray[row][col] == 2){
				edited[row][col] == 'O';
			}
			if(a2DArray[row][col] == 3){
				edited[row][col] == '0';
			}

		}
	}


