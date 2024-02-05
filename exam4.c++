#include <stdio.h>
#include <string.h>

struct numberNode{
	int data ;
	struct numberNode *back ;
	struct numberNode *next ;
};

struct numberNode *AddNode( struct numberNode **start, int data ) ;
void showAll( struct numberNode *walk ) ;
void swap( struct numberNode **start, int data1, int data2 ) ;
	
int main() {
	 
	int A, B ;
	struct numberNode *start, *now, **walk ;
	start = NULL ;
	AddNode( &start, 10 ) ;
	AddNode( &start, 20 ) ;
	AddNode( &start, 30 ) ;
	AddNode( &start, 40 ) ;
	AddNode( &start, 50 ) ;
	
	do{
		
		printf( "Before swap : " ) ;
		showAll( start ) ;
		
		printf( "First value to change A to B (# #) : " ) ;
		scanf( "%d%d", &A, &B) ;
		
		swap( &start , A , B ) ;
		
		printf( "After swap : " ) ;
		showAll( start ) ;
		
		printf( "enter text '1' to swap (must exit , enter text '2'): " ) ;
		scanf( "%d", &A) ;
		
	}while(A == 1);
	//end do while
	
	return 0 ;
}//end main

struct numberNode *AddNode( struct numberNode **start, int data  ) {
	
	struct numberNode *temp = NULL;
	
	while( ( *start ) != NULL ){
		temp = *start;
		start = &( *start )->next ;
	}//end while
	
	*start = new struct numberNode ;
	( *start )->data = data ;
	( *start )->next = NULL ;
	( *start )->back = temp ;
	return *start ;
}//end AddNode function	

void swap( struct numberNode **start, int data1, int data2) {
	
	//data 1 or 2 Same dammit!
	if( data1 == data2){
		printf( "Oh Shit data1 and data2 \n ahhh it's the same\n" ) ;
		return;
	} 
	
	//node1
	numberNode *node1 = *start;
	numberNode *back1 = NULL ;
	while ( node1 && node1 -> data != data1 ) { 
		
		back1 = node1;
		node1 = node1 -> next;
	}// end while
	
	//node2
	numberNode *back2 = NULL;
	numberNode *node2 = *start;
	while ( node2 && node2 -> data != data2 ) {
		
		back2 = node2;
		node2 = node2 -> next;
	}// end while
	
	if ( node1 == NULL || node2 == NULL ) {
		printf( "Cannot switch values that do not exist!\n" ) ;
		return;
	}
	
	if ( back1 != NULL ) {
		
		back1 -> next = node2;	
	
	}else{
		*start = node2;
	}
	
	if ( back2 != NULL ){
		back2 -> next = node1; 
	}else{
		
		*start = node1;
	}
	
	numberNode *temp = node2 -> next;
	node2 ->next = node1 -> next;
	node1 ->next = temp;
}//end swap function

void showAll( struct numberNode *walk ) {
	while( walk != NULL ) {
		printf( "%d ", walk->data ) ;
		walk = walk->next ;
	}//end while
	printf( "\n" ) ;
}//end ShowAll function