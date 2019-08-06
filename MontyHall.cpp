// TODO: add your code to this file
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(void){
	int d1=1, d2=1, d3=1, car, choice, quit = 0, good = 0; 
	float games, won;
	srand(time(0));
	while(quit!=1){
		car = rand()%3;
		if(car==0){
			d1=2;
		}
		else if(car==1){
			d2=2;
		}
		else if(car==2){
			d3=2;
		}
		else{
			printf("You should not see this.\n");
		}
		
		while(good!=1){
			printf("Which door would you like to pick? (1-3) ");
			scanf("%i", &choice);
			if(choice<4 && choice>0){
				good = 1;
			}
			else{
				printf("You messed up, try again.\n");
			}
		}
		
		good=0;
		
		if(choice==1){
			d1= -d1;
		}
		else if(choice==2){
			d2= -d2;
		}
		else if(choice==3){
			d3= -d3;
		}
		else{
			printf("You should not see this.\n");
		}
		
		if(d1==1){
			printf("Monty shows you a goat behind door number 1\n");
		}
		else if(d2==1){
			printf("Monty shows you a goat behind door number 2\n");
		}
		else if(d3==1){
			printf("Monty shows you a goat behind door number 3\n");
		}
		else{
			printf("You should not see this.");
		}
		
		while(good!=1){
			printf("Which door would you like to pick now? (1-3) ");
			scanf("%i", &choice);
			if(choice<4 && choice>0){
				good = 1;
			}
			else{
				printf("You messed up, try again.\n");
			}
		}
		good=0;
		
		if(choice==car+1){
			printf("You won the car!\n");
			won += 1;
		}
		else{
			printf("You got a goat, sorry. The car was behind door %i\n", car+1);
		}
		games += 1;
		
		printf("Another game? (1=yes, 0=no) ");
		scanf("%i", &choice);
		if(choice==0){
			quit = 1;
			printf("You played %i games\n", (int)games);
			printf("You won %i games\n", (int)won);
			//having trouble with the formatting of this line
			printf("You won %.02f%% of the games\n", (won/games)*100);
		}
		d1=1;
		d2=1;
		d3=1;
		
	}
	
	return 0;
}