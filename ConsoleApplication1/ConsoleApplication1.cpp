#include <stdio.h>

short findFakeCoin(short coin1, short coin2, short coin3, short coin4, short coin5,
    short coin6, short coin7, short coin8) {
    short originCoin = 1;
    short fakeCoin = 0;
    //printf("coin %d is fake! \n", fakeCoin);

    if (coin1 > originCoin) {
        fakeCoin = 1;
    }

    if (coin2 > originCoin) {
        fakeCoin = 2;
    }
    if (coin3 > originCoin) {
        fakeCoin = 3;
    }

    if (coin4 > originCoin) {
        fakeCoin = 4;
    }
    if (coin5 > originCoin) {
        fakeCoin = 5;
    }

    if (coin6 > originCoin) {
        fakeCoin = 6;
    }
    if (coin7 > originCoin) {
        fakeCoin = 7;
    }

    if (coin8 > originCoin) {
        fakeCoin = 8;
    }

    return fakeCoin;
}

short findFakeCoin3(short cn[8]) {

    short fakeCoin;

    if (cn[0] > cn[1]) {
        fakeCoin = 1;
    }
    else if (cn[1] > cn[2]) {
        fakeCoin = 2;
    }
    else if (cn[2] > cn[3]) {
        fakeCoin = 3;
    }
    else if (cn[3] > cn[4]) {
        fakeCoin = 4;
    }
    else if (cn[4] > cn[5]) {
        fakeCoin = 5;
    }
    else if (cn[5] > cn[6]) {
        fakeCoin = 6;
    }
    else if (cn[6] > cn[7]) {
        fakeCoin = 7;
    }
    else{
        fakeCoin = 8;
    }
    return fakeCoin;

}

short findFakeCoin2(short cn[8])
{
    short originCoin = 1;
    short fakeCoin = 0;

    for (int num = 0; num < 8; num++) {
        if (cn[num] > originCoin) {
            fakeCoin = num;
        }
    }

    fakeCoin = fakeCoin + 1;

    return fakeCoin;
}

int main() {

    const short origin = 1;


    short fakeCoin;


    short  c0 = 1;
    short  c1 = 1;
    short  c2 = 1;
    short  c3 = 3;
    short  c4 = 1;
    short  c5 = 1;
    short  c6 = 1;
    short  c7 = 1;

    short  coin[8] = {};

    coin[0] = 1;
    coin[1] = 1;
    coin[2] = 1;
    coin[3] = 1;
    coin[4] = 1;
    coin[5] = 1;
    coin[6] = 3;
    coin[7] = 1;


    fakeCoin = findFakeCoin(c0, c1, c2, c3, c4, c5, c6, c7);

    printf("coin %d is fake! \n", fakeCoin);

    fakeCoin = findFakeCoin2(coin);
    printf("coin %d is fake coin \n", fakeCoin);

    fakeCoin = findFakeCoin3(coin);
    printf("coin %d is fake coin \n", fakeCoin);
}



    






/*   float a = 55.666;
    float b = 66.555;
    float c;

    int isadd = 0;

    short val1 = 1;
    short val2 = 2;

    if (val1 == val2) {
        c = a * 2;
    }
    else {
        c = subf(a, b);
    };

    for (int i = 0; i < 5; i++) {
        printf("c=%f \n", c);
    }

    //printf("c=%f \n", c);


        8 монет, одна монета фальшива(важче)
        знайти фальшиву монету!

        1 - справжня монета
        2 - фальшива монета
    */



    /*  const int origin = 1;
      const int fake = 2;

      if (coin0 == fake) {
          printf("coin0 is fake!\n");
      };
      if (coin1 == fake) {
          printf("coin1 is fake!\n");
      };
      if (coin2 == fake) {
          printf("coin2 is fake!\n");
      };
      if (coin3 == fake) {
          printf("coin3 is fake!\n");
      };
      if (coin4 == fake) {
          printf("coin4 is fake!\n");
      };
      if (coin5 == fake) {
          printf("coin5 is fake!\n");
      };
      if (coin6 == fake) {
          printf("coin6 is fake!\n");
      };
      if (coin7 == fake) {
          printf("coin7 is fake!\n");
      };

      //short coin[8] = { 2,1,1,1,1,1,1,1 };

      //coin[7] = 2;


      int coin [8] = { coin0, coin1, coin2, coin3, coin4, coin5, coin6, coin7};

      coin2 = 2;

      if (int coin = 2) {
          printf("coin %d is fake!\n", coin);
      }


      for (int i = 0; i < 8; i++) {
          if (coin[i] != origin) {
              printf("coin %d is fake! \n", i);
          }
      }
  */