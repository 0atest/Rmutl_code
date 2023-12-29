#include <stdio.h>

int main() {
    // ประกาศ array ขนาด 6
    int A[6] , B[6] , Answer[7] , Sum[7];
    char op;

    //Input 6 round Number A 0-9
    printf("Enter Number A : \n");
    printf("A[0]: ");
    scanf("%d" , &A[0]);
    printf("A[1]: ");
    scanf("%d" , &A[1]);
    printf("A[2]: ");
    scanf("%d" , &A[2]);
    printf("A[3]: ");
    scanf("%d" , &A[3]);
    printf("A[4]: ");
    scanf("%d" , &A[4]);
    printf("A[5]: ");
    scanf("%d" , &A[5]);

    //Input 6 round Number B 0-9 
    printf("Enter Number B : \n");
    printf("B[0] : ");
    scanf("%d" , &B[0]);
    printf("B[1] : ");
    scanf("%d" , &B[1]);
    printf("B[2] : ");
    scanf("%d" , &B[2]);
    printf("B[3] : ");
    scanf("%d" , &B[3]);
    printf("B[4] : ");
    scanf("%d" , &B[4]);
    printf("B[5] : ");
    scanf("%d" , &B[5]);
    
    //Input Operater + or -
    printf("Operator :   \n");
    scanf("%c" , &op);

    
    // เงื่อนไข + -
    switch (op){
    //เลือกตัวดำเนินการ +
    case '+':
        Answer[6] = 0 ;
		Answer[5] = A[5] + B[5] , 
        Answer[4] = A[4] + B[4] , 
        Answer[3] = A[3] + B[3] , 
        Answer[2] = A[2] + B[2] , 
        Answer[1] = A[1] + B[1] , 
        Answer[0] = A[0] + B[0] ;

        //เงื่อนไข บวกเกิน 10 ให้ทดเศษที่ array ช่องหน้า + 1 
        if(Answer[5] >= 10){
			Answer[4] = Answer[4] + 1 ;
			Answer[5] = Answer[5] - 10 ;
		}
		if(Answer[4] >= 10){
			Answer[3] = Answer[3] + 1 ;
			Answer[4] = Answer[4] - 10 ;
		}
		if(Answer[3] >= 10){
			Answer[2] = Answer[2] + 1 ;
			Answer[3] = Answer[3] - 10 ;
		}
		if(Answer[2] >= 10){
			Answer[1] = Answer[1] + 1 ;
			Answer[2] = Answer[2] - 10 ;
		}
		if(Answer[1] >= 10){
			Answer[0] = Answer[0] + 1 ;
			Answer[1] = Answer[1] - 10 ;
		}
		if(Answer[0] >= 10){
			Answer[6] = Answer[6] + 1 ;
			Answer[0] = Answer[0] - 10 ;
		}
        break;

    //เลือกตัวดำเนินการ -
    case '-':
        Answer[6] = 0 ;
        Answer[5] = A[5] - B[5] ,
        Answer[4] = A[4] - B[4] ,
        Answer[3] = A[3] - B[3] ,
        Answer[2] = A[2] - B[2] ,
        Answer[1] = A[1] - B[1] ,
        Answer[0] = A[0] - B[0] ;
        
        //เงื่อนไข ลบเกิน 0 ให้ยืมจาก array ช่องหน้า เเล้ว + 10
        if(Answer[5] < 0){
			Answer[4] = Answer[4] - 1 ;
            Answer[5] = Answer[5] + 10 ;
		}
		if(Answer[4] < 0){
			Answer[3] = Answer[3] - 1 ;
			Answer[4] = Answer[4] + 10 ;
		}
		if(Answer[3] < 0){
			Answer[2] = Answer[2] - 1 ;
			Answer[3] = Answer[3] + 10 ;
		}
		if(Answer[2] < 0){
			Answer[1] = Answer[1] - 1 ;
			Answer[2] = Answer[2] + 10 ;
		}
		if(Answer[1] < 0){
			Answer[6] = Answer[6] - 1 ;
			Answer[1] = Answer[1] + 10 ;
		}
        
        break;
    }

    //เเสดงค่าตรงหน้าจอ
    printf("Index      x 0 1 2 3 4 5\n");
    printf("Number A :  ");
    printf(" %d %d %d %d %d %d\n" , A[0] , A[1] , A[2] , A[3] , A[4] , A[5]) ;
    printf("Operater :               %c\n" , op) ;
    printf("Number B :  ");
    printf(" %d %d %d %d %d %d\n" , B[0] , B[1] , B[2] , B[3] , B[4] , B[5]) ;
    printf("          -----------------\n") ;        
    printf("Answer :  ");
    printf(" %d %d %d %d %d %d %d\n" , Answer[6] , Answer[0] , Answer[1] , Answer[2] , Answer[3] , Answer[4] , Answer[5]) ;     
    printf("          =================") ;
    return 0;
}