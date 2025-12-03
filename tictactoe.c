#include <stdio.h>
#include <stdlib.h>

char b[9];

void show(){
    printf("\n");
    for(int i=0;i<9;i++){
        char c = b[i] ? b[i] : '1'+i;
        printf(" %c ", c);
        if(i%3!=2) printf("|");
        if(i%3==2 && i<8) printf("\n---+---+---\n");
    }
    printf("\n\n");
}

char winner(){
    int W[8][3] = {{0,1,2},{3,4,5},{6,7,8},{0,3,6},{1,4,7},{2,5,8},{0,4,8},{2,4,6}};
    for(int i=0;i<8;i++){
        char a=b[W[i][0]], c=b[W[i][1]], d=b[W[i][2]];
        if(a && a==c && c==d) return a;
    }
    for(int i=0;i<9;i++) if(!b[i]) return 0;
    return 'D';
}

int try_move(int idx, char p){
    if(b[idx]) return 0;
    b[idx]=p;
    int win = (winner()==p);
    b[idx]=0; 
    return win;
}

void computer_move(){
    for(int i=0;i<9;i++) if(try_move(i,'O')){ b[i]='O'; return; }
    for(int i=0;i<9;i++) if(try_move(i,'X')){ b[i]='O'; return; }
    if(!b[4]){ b[4]='O'; return; }
    int corners[] = {0,2,6,8};
    for(int i=0;i<4;i++) if(!b[corners[i]]){ b[corners[i]]='O'; return; }
    int sides[] = {1,3,5,7};
    for(int i=0;i<4;i++) if(!b[sides[i]]){ b[sides[i]]='O'; return; }
}

void player_move(){
    int pos;
    while(1){
        printf("Enter position (1-9): ");
        if(scanf("%d",&pos)!=1){ scanf("%*s"); continue; }
        pos--;
        if(pos>=0 && pos<9 && !b[pos]){ b[pos]='X'; break; }
        printf("Invalid move. Try again.\n");
    }
}

int main(){
    for(int i=0;i<9;i++) b[i]=0;
    printf("Tic-Tac-Toe: You = X, Computer = O\nYou go first.\n");
    show();
    while(1){
        player_move();
        show();
        char w = winner();
        if(w){ if(w=='X') printf("You win!\n"); else if(w=='O') printf("Computer wins!\n"); else printf("Draw!\n"); break; }
        printf("Computer's move...\n");
        computer_move();
        show();
        w = winner();
        if(w){ if(w=='X') printf("You win!\n"); else if(w=='O') printf("Computer wins!\n"); else printf("Draw!\n"); break; }
    }
    return 0;
}
