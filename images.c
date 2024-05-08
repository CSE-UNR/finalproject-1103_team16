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

int loadImage(int a2DArray[][COL]);
int saveImage(int a2DArray[][COL]);
void cropImage(int a2DArray[][COL]);
void displayImage(int a2DArray[][COL]);
void dimimage(int a2DArray[][COL]);
void brightenimage(int a2DArray[][COL]);
//rotate image function goes here (EXTRA CREDIT)



int main(){
	int menuchoice;
	int editchoice;
	int a2DArray[ROW][COL];
	
	
	do{
		menuchoice = getMENUCHOICE();
		
		switch(menuchoice){
			case 1:
				loadImage(a2DArray);
				break;
			case 2:
				
				displayImage(a2DArray);
				break;
			case 3:
				editchoice = getEDITCHOICE();
		
				
				switch(editchoice){
					case 1:
						cropImage(a2DArray);
						break;
					case 2:
						dimimage(a2DArray);
						break;
					case 3:
						brightenimage(a2DArray);
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

int loadImage(int a2DArray[][COL]){
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
		printf("row = %d, column = %d", row, col);
	}
}

void displayImage(int a2DArray[][COL]){
	int row;
	int col;
	char filename[STR_LEN+1];
	char displayimage[ROW][COL];
	char temp;
	
	FILE *fp;
	fp = fopen(filename, "r");
	if(fp == NULL){
		printf("\nwhere is the image (¬_¬')\n\n");
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
		printf("Image was loaded!\n\n");
		fclose(fp);
		
	}
}
int saveImage(int a2DArray[][COL]){
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
	
void cropImage(int a2DArray[][COL]){
	int beginRow;
	int endRow;
	int beginCol;
	int endCol;
	
	
	printf("Which column do you want to be the new left side?\n");
	scanf("%d", &beginCol);
	
	printf("Which column do you want to be the new right side?\n");
	scanf("%d", &endCol);
	
	printf("which row do you want to be the new top side?\n");
	scanf("%d", &beginRow);
	
	printf("which row do you want to be the new bottom side?\n");
	scanf("%d", &endRow);
	
	int newRows = endRow - beginRow + 1;
	int newCols = endCol - beginCol + 1;
	
	char newimage[newRows][newCols];
	
	for(int i = 0; i < newRows; i++){
		for (int j = 0; j < newCols; j++){
		newimage[i][j] = a2DArray[beginRow + i][beginCol + j];
		}
	}
	
	for(int i = 0; i < newRows; i++){
		for(int j = 0; j < newCols; j++){
			printf("%d", newimage[i][j]);
		}
		printf("\n");
	}
}
void dimimage(int a2DArray[][COL]){
	int r = 0;
	int c = 0;
	char edited[ROW][COL];
	for(r = 0; r < ROW; r++){
		for(c = 0; c < COL; c++){
			edited[r][c] = ' ';
		}
	}
	for(r = 0; r < ROW; r++){
		for(c = 0; c < COL; c++){
			if(a2DArray[r][c] == 1){
				edited[r][c] = ' ';
			}
			if(a2DArray[r][c] == 2){
				edited[r][c] = '.';
			}
			if(a2DArray[r][c] == 3){
				edited[r][c] = 'o';
			}
			if(a2DArray[r][c] == 4){
				edited[r][c] = 'O';
			}
		printf("\n");
		}
	
	}
	for(r = 0; r < ROW; r++){
		for(c = 0; c < COL; c++){
			printf("%c", edited[r][c]);
		}
	}
	
}

void brightenimage(int a2DArray[][COL]){
	int r = 0;
	int c = 0;
	char edited[ROW][COL];
	for(r = 0; r < ROW; r++){
		for(c = 0; c < COL; c++){
			edited[r][c] = ' ';
		}
	}
	for(r = 0; r < ROW; r++){
		for(c = 0; c < COL; c++){
			if(a2DArray[r][c] == 0){
				edited[r][c] = '.';
			}
			if(a2DArray[r][c] == 1){
				edited[r][c] = 'o';
			}
			if(a2DArray[r][c] == 2){
				edited[r][c] = 'O';
			}
			if(a2DArray[r][c] == 3){
				edited[r][c] = '0';
			}

		}
	}
	for(r = 0; r < ROW; r++){
		for(c = 0; c < COL; c++){
			printf("%c", edited[r][c]);
		}
	}
		printf("\n");
}

