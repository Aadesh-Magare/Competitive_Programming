#include<stdio.h>
#include<stdlib.h>
#define MAX 1024
#define RIGHT 1
#define DOWN 2
#define LEFT 3
#define UP 4
#define ALLDONE 5

typedef struct position{
	int x, y, direction;
}position;

typedef struct stack{
	position maze[MAX];
	int count;
}stack;

stack final;
int **visited, **path;
int nrows, ncols;

void checkmaze(int nrows, int ncols);

void init(stack *s){
	s->count = 0;
}

void push(stack *s, position p){
	s->maze[s->count] = p;
	s->count++;
}

position pop(stack *s){
	position p;
	p = s->maze[s->count - 1];
	s->count--;
	return p;
}
int isempty(stack *s){
	return s->count == 0;
}
int isfull(stack *s){
	return s->count == MAX - 1;
}

void printmaze(int nrows, int ncols);

void buildmaze(char *s){
	FILE *fp;
	fp = fopen(s, "r");
	if(fp == NULL){
		printf("Some error while opening file");
		exit(0);
	}
	int i, j;
	fscanf(fp, "%d%d", &nrows, &ncols);
	printf("%d	%d\n", nrows, ncols);
	nrows += 2;
	ncols += 2;
	path = (int **)malloc(sizeof(int *) * nrows);
	for(i = 0; i < nrows; i++)
		path[i] = (int *)malloc(sizeof(int) * ncols);
	for( i = 0; i < nrows; i++){
		path[i][0] = -1;
		path[i][ncols-1] = -1;
	}
	for( i = 0; i < ncols; i++){
		path[0][i] = -1;
		path[nrows-1][i] = -1;
	}
	for( i = 0; i < nrows-2; i++)
		for( j = 0; j < ncols-2; j++)
			fscanf(fp, "%d", &path[i+1][j+1]);
	printmaze(nrows, ncols);
}
void printmaze(int nrows, int ncols){
	int i, j;
	for( i = 0; i < nrows; i++){
		for( j = 0; j < ncols; j++)
			printf("%4d", path[i][j]);
		printf("\n");
	}
	printf("\n");
	printf("\n");
	
}
int main(int argc, char *argv[]){
	init(&final);
	int i, j, k, l;
	buildmaze(argv[1]);
	
	visited = (int **)malloc(sizeof(int *) * nrows);
	for(i = 0; i < nrows; i++)
		visited[i] = (int *)malloc(sizeof(int) * ncols);
	for( i = 0; i < nrows; i++)
		for( j = 0; j < ncols; j++)
			visited[i][j] = 0;

	checkmaze(nrows, ncols);
	return 0;
}	
void donewithit(){   
	int **done;
	int i, j;
	done = (int **)malloc(sizeof(int *) * nrows);
	for(i = 0; i < nrows; i++)
		done[i] = (int *)malloc(sizeof(int) * ncols);
	
	for( i = 0; i < nrows; i++)
		for( j = 0; j < ncols; j++)
			done[i][j] = 0;

	done[1][1] = done[nrows-2][ncols-2] = 1;
	
	for( i = 0; i < nrows; i++){
		done[i][0] = -1;
		done[i][ncols-1] = -1;
	}
	for( i = 0; i < ncols; i++){
		path[0][i] = -1;
		path[nrows-1][i] = -1;
	}
	for( i = 0; i < nrows; i++){		// some problems wiht printing check it later but nt that important everything else wkrks fine.
		for( j = 0; j < ncols; j++)
				printf("%4d", done[i][j]);
		printf("\n");
	}
		printf("\n");
		printf("\n");
	
    	position curr;
	while(!isempty(&final)){
		curr = pop(&final);
		done[curr.x][curr.y] = 1;
	}
	
	for( i = 0; i < nrows; i++){
		for( j = 0; j < ncols; j++){
			//if(done[i][j])
				printf("%4d", done[i][j]);
			//else if(done[i][j] == 0)
			//	printf("%4d", done[i][j]);
			//else
			//	printf("%4c", '-');
		}
		printf("\n");
	}
    return;
}
void checkmaze(int nrows, int ncols){
	position curr;
	int nextrow, nextcol, found = 0;
	curr.x = curr.y = curr.direction = RIGHT;
	visited[curr.x][curr.y] = 1;
	push(&final, curr);
	while(!isempty(&final) && !found){
		curr = pop(&final);
		while(curr.direction < ALLDONE && !found){
			switch(curr.direction){
		            case RIGHT:
		    	        nextrow = curr.x;
		    	        nextcol = curr.y+1; 
		                break;
			    case DOWN:
		    	        nextrow = curr.x+1;
		    	        nextcol = curr.y; 
		                break;
			    case LEFT:
		    	        nextrow = curr.x;
		    	        nextcol = curr.y-1; 
		                break;
			    case UP:
		    	        nextrow = curr.x-1;
		    	        nextcol = curr.y; 
		                break;
			    default:
				    printf("something is wrong in switch\n");	
			}
				  
			if((nextrow == nrows-2) && (nextcol == ncols-2)){
			        found = 1;
			}	  
			else if((path[nextrow][nextcol] == 1 )&& !(visited[nextrow][nextcol])){
			        visited[nextrow][nextcol] = 1;
			        push(&final, curr);
				curr.x = nextrow;
			        curr.y = nextcol;
			        curr.direction = RIGHT;
			}    
			else{
			        curr.direction++;
			}
	    }   	  
	}
	if(found)
		donewithit();
	else
		printf("no solution for maze \n");
	//donewithit();
	return;
}	
