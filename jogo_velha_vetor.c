//JOGO DA VELHA 
#include <stdio.h>
#include <stdlib.h>

void tabuleiro (char casas2[9]){
 system("cls");
 printf ("\t %c | %c | %c \n",casas2 [0],casas2 [1],casas2[2]);
  printf ("\t-----------\n");
 printf ("\t %c | %c | %c \n",casas2 [3],casas2 [4],casas2[5]);
 printf ("\t-----------\n");
 printf ("\t %c | %c | %c \n",casas2 [6],casas2 [7],casas2[8]);
}
int main (){
 char casas [9] = {'1','2','3','4','5','6','7','8','9'};
 tabuleiro (casas);
 char res;
 int cont_jogadas,jogada,vez = 0,i;

 do{
  cont_jogadas = 1;
  for (i=0;i<=8;i++){
   casas[i] = ' ';
    }
  do{
   tabuleiro(casas);
   printf ("Digite a casa para marcar[1-0]");
   scanf("%i",&jogada);
   if (jogada < 1 || jogada > 9){
    jogada = 0;
   }else if (casas[jogada-1] != ' '){
    jogada = 0;
   }else{
    if (vez %2==0){
     casas [jogada-1]= 'X';
    }else{
     casas [jogada-1]= 'O';
    }
    cont_jogadas++;
    vez++;
   }
   if (casas[0]== 'X' && casas [1]== 'X' && casas[2]=='X') {cont_jogadas = 11;}
   if (casas[3]== 'X' && casas [4]== 'X' && casas[5]=='X') {cont_jogadas = 11;}
   if (casas[6]== 'X' && casas [7]== 'X' && casas[8]=='X') {cont_jogadas = 11;}
   if (casas[0]== 'X' && casas [3]== 'X' && casas[6]=='X') {cont_jogadas = 11;}
   if (casas[1]== 'X' && casas [4]== 'X' && casas[7]=='X') {cont_jogadas = 11;}
   if (casas[2]== 'X' && casas [5]== 'X' && casas[8]=='X') {cont_jogadas = 11;}
   if (casas[0]== 'X' && casas [4]== 'X' && casas[8]=='X') {cont_jogadas = 11;}
   if (casas[2]== 'X' && casas [4]== 'X' && casas[6]=='X') {cont_jogadas = 11;}

   if (casas[0]== 'O' && casas [1]== 'O' && casas[2]=='O') {cont_jogadas = 11;}
   if (casas[3]== 'O' && casas [4]== 'O' && casas[5]=='O') {cont_jogadas = 11;}
   if (casas[6]== 'O' && casas [7]== 'O' && casas[8]=='O') {cont_jogadas = 11;}
   if (casas[0]== 'O' && casas [3]== 'O' && casas[6]=='O') {cont_jogadas = 11;}
   if (casas[1]== 'O' && casas [4]== 'O' && casas[7]=='O') {cont_jogadas = 11;}
   if (casas[2]== 'O' && casas [5]== 'O' && casas[8]=='O') {cont_jogadas = 11;}
   if (casas[0]== 'O' && casas [4]== 'O' && casas[8]=='O') {cont_jogadas = 11;}
   if (casas[2]== 'O' && casas [4]== 'O' && casas[6]=='O') {cont_jogadas = 11;}

  }while (cont_jogadas <= 9);
  tabuleiro(casas);
  if(cont_jogadas==10){
   printf ("Jogo empatado\n");
  }if (cont_jogadas==11){
   printf ("Vencedor X\n");
  }if(cont_jogadas==12){
   printf ("Vencedor O\n");

  }
  printf ("Deseja jogar novamente?[S-N]\n");
  scanf ("%s",&res);
 }while(res=='s');
 return 0;

}
