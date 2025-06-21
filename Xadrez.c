#include <stdio.h>


// MT = MOVIMENTO DA TORRE

void MT(int passos){
   if(passos > 0){
   printf("Torre andou para a direita\n");
   MT(passos - 1);
   }
}


// MBV = MOVIMENTO DO BISPO 

void MB(int passos){
  if(passos > 0){
    printf("Bispo andou para cima, Bispo andou para direita\n");
    MB(passos - 1);
  }

}




// MR = MOVIMENTO DA RAINHA

void MR(int passos){
  if(passos > 0 ){
    printf("Rainha andou para a esquerda\n");
    MR(passos - 1);
  }
}

int main(){
 
 // Variáveis
   int t = 5; 
   int bv;
   int bh;
   int r;
   int c1; 
   int c2;

   // torre com recursividade
 
   printf("MOVIMENTO DA TORRE\n");
   MT(t);
  

  // bispo com recursividade e loops aninhados
    
  for(bv = 0; bv < 1; bv++){
    for(bh = 0; bh < 1; bh++){
      MB(5);
    }
  }

    
   
  

   // Rainha com recursividade
      
   
   printf("MOVIMENTO DA RAINHA\n");
    MR(8);

  // Cavalo com loops complexos
  printf("MOVIMENTO DO CAVALO\n");
  for(c1=1, c2=2;  c2>=c1; c1++){
        printf("Cavalo andou para cima\n");
        if(c2==c1){
          printf("Cavalo andou para a direita\n");
        }
        }
  
  
  

   




return 0;

}
