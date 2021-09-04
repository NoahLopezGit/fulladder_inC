#include <stdio.h>
/*
Atempt to recreate half adder in c
*/

//int half_adder(int byte1, int byte2);

int main(){
  unsigned int int1 = 0b00001001;
  unsigned int int2 = 0b00000011;


  //reading bits and storing into array
  int bitArray[8];
  for( int i = 0; i < 8; i++ ){
    bitArray[7-i] = ( int1 >> i & 1 );
  }

  for ( int i = 0; i < 8; i++ ){
    printf("%d ", bitArray[i]);
  }
  printf("\n");

  for( int i = 0; i < 8; i++ ){
    bitArray[7-i] = ( int2 >> i & 1 );
  }

  for ( int i = 0; i < 8; i++ ){
    printf("%d ", bitArray[i]);
  }
  printf("\n");


  //adding? ADDING
  int C = 0;
  int S;
  for ( int i = 0; i < 8; i++ ){

    S = ( int1 >> i & 1) ^ ( int2 >> i & 1 ) ^ C & 1;
    C = ( int1 >> i & 1) & ( int2 >> i & 1 ) \
        ^ ( C & 1 ) & ( int2 >> i & 1 ) \
        ^ ( int1 >> i & 1) & ( C & 1 );

    printf("%d %d %d %d\n", (int1 >> i & 1), (int2 >> i & 1), C, S);
    bitArray[7-i] = S;
  }

  for ( int i = 0; i < 8; i++ ){
    printf("%d ", bitArray[i]);
  }
  printf("\n");
}
