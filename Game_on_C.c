#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

void mouse ();
void drawBat ();
void GG ();
void map1 ();
void map2 ();
void map2_1 ();
void map3 ();
void map4 ();

int main() 
{
  int hp = 0;
  time_t t;
  srand((unsigned) time(&t));
  hp = (rand() % 5) + 15;

  int sw = 0;
  srand((unsigned) time(&t));
  sw = (rand() % 5) + 20;

  int playerhealth = 100;
  int enemyhealth = 100;
  int playerChoice;
  int enemyChoice;
  int playerMaps;

  map1();
  printf("\nChoice doors\n");
  scanf("%d", &playerMaps);
  // главний switch (1-6)
  switch (playerMaps)
  {
    case 1:
      while (playerhealth > 0 && enemyhealth > 0) {
          drawBat();
          printf("\nPlayer: %d HP\tEnemy: %d HP\n", playerhealth, enemyhealth);
          printf("You charge:\n");
          printf("1. Bronze Sword(20-25)\n");
          printf("2. Health potion(30-35) \n");
          printf("Write choice: ");
          scanf("%d", &playerChoice);
        switch (playerChoice) 
        {
          case 1:
            printf("\nPlayer attacks the enemy!\n");
            enemyhealth -= sw;
            break;
          case 2:
            if (playerhealth > 80) {
              continue;
            }
            playerhealth += hp;
            printf("Player recovers HP\n");
            break;
          default:
            printf("Error\n");
          continue;
        }
        srand((unsigned) time(&t));
        enemyChoice = (rand() % 2) + 1;
        printf("%d\n", enemyChoice);

      switch (enemyChoice)
      {
        case 1:
          printf("The enemy attacks the player!\n");
          playerhealth -= sw;
          enemyhealth += 5;
          printf("Player loses %d HP\n", sw);
          printf("\nBat return 5 HP");
          break;
        case 2:
          if (enemyhealth > 80) {
            continue;
          }
          enemyhealth += hp;
          printf("Enemy recovers HP\n");
          default:
          break;
        }
      }
      if (playerhealth <= 0) {
        printf("\nYou lost!\n");
      } else {
        map2();
        printf("\nChoice doors\n");
        scanf("%d", &playerMaps);
//----------------------------------------------------------------
        switch (playerChoice) {
          case 1:
            while (playerhealth > 0 && enemyhealth > 0) 
            {
              // Вставить БОСА
              printf("\nPlayer: %d HP\tEnemy: %d HP\n", playerhealth, enemyhealth);
              printf("You charge:\n");
              printf("1. Bronze Sword(20-25)\n");
              printf("2. Health potion(30-35) \n");
              printf("Write choice: ");
              scanf("%d", &playerChoice);
            switch (playerChoice) 
            {
              case 1:
                printf("\nPlayer attacks the enemy!\n");
                enemyhealth -= sw;
                break;
              case 2:
                if (playerhealth > 80) {
                  continue;
                }
                playerhealth += hp;
                printf("Player recovers HP\n");
                break;
              default:
                printf("Error\n");
              continue;
            }
            srand((unsigned) time(&t));
            enemyChoice = (rand() % 2) + 1;
            printf("%d\n", enemyChoice);

          switch (enemyChoice)
          {
            case 1:
              printf("The enemy attacks the player!\n");
              playerhealth -= sw;
              enemyhealth += 5;
              printf("Player loses %d HP\n", sw);
              printf("\nBat return 5 HP");
              break;
            case 2:
              if (enemyhealth > 80) {
                continue;
              }
              enemyhealth += hp;
              printf("Enemy recovers HP\n");
              default:
              break;
          }
        }
        if (playerhealth <= 0) {
        printf("\nYou lost!\n");
        } else {
        map3();
        printf("\nExit?\n");
        printf("\nYes-1");
        printf("\nNo-2");
        scanf("%d", &playerMaps);  
        switch (playerChoice)
        {
        case 1:
          GG();
          break;
        case 2:
          printf("\nErzhan! Erzhan, get up, hey! Salam Alaikum. Get up, go on work. Are you sleeping? Get up, Erzhan!\n");
        default:
          break;
        }
        scanf("%d", &playerMaps);   
      }
    }
// //----------------------------------------------------------------------------------------------------------------
    break;
    case 2:
      while (playerhealth > 0 && enemyhealth > 0) {
      mouse();
      printf("\nPlayer: %d HP\tEnemy: %d HP\n", playerhealth, enemyhealth);
      printf("You charge:\n");
      printf("1. Bronze Sword(20-25)\n");
      printf("2. Health potion(30-35) \n");
      printf("Write choice: ");
      scanf("%d", &playerChoice);
    
      switch (playerChoice) 
      {
        case 1:
          printf("\nPlayer attacks the enemy!\n");
          enemyhealth -= sw;
          printf("Enemy loses HP\n");
          break;
        case 2:
          if (playerhealth > 80) {
            continue;
          }
          playerhealth += hp;
          printf("Player recovers HP\n");
          break;
        default:
          printf("Error\n");
          continue;
      }
      srand((unsigned) time(&t));
      enemyChoice = (rand() % 2) + 1;
      printf("%d\n", enemyChoice);

      switch (enemyChoice)
      {
        case 1:
          printf("The enemy attacks the player!\n");
          playerhealth -= sw;
          printf("Player loses %d HP\n", sw);
          break;
        case 2:
          if (enemyhealth > 80) {
            continue;
          }
          enemyhealth += hp;
          printf("Enemy recovers HP\n");
        default:
          break;
      }
    }
    if (playerhealth <= 0) {
      printf("\nYou lost! The enemy wins.\n");
    } else {
      map4();
      printf("\nChoice doors\n");
      scanf("%d", &playerMaps);
      switch (playerMaps) 
      {
        case 1:
          map1();
          printf("\nChoice doors\n");
          scanf("%d", &playerMaps);
      }
    }
      break;
    }
  }
//-------------------------------------------------------------------------------------------------

  // while (playerhealth > 0 && enemyhealth > 0) {
  //   int playerChoice;
  //   int enemyChoice;
  //   printf("\nPlayer: %d HP\tEnemy: %d HP\n", playerhealth, enemyhealth);
  //   printf("You charge:\n");
  //   printf("1. Bronze Sword(20-25)\n");
  //   printf("2. Health potion(30-35) \n");
  //   printf("Write choice: ");
  //   scanf("%d", &playerChoice);
    
  //   switch (playerChoice) 
  //   {
  //     case 1:
  //       printf("\nPlayer attacks the enemy!\n");
  //       enemyhealth -= sw;
  //       printf("Enemy loses HP\n");
  //       break;
  //     case 2:
  //       if (playerhealth > 80) {
  //         continue;
  //       }
  //       playerhealth += hp;
  //       printf("Player recovers HP\n");
  //       break;
  //     default:
  //       printf("Error\n");
  //       continue;
  //   }
  //   srand((unsigned) time(&t));
  //   enemyChoice = (rand() % 2) + 1;
  //   printf("%d\n", enemyChoice);

  //   switch (enemyChoice)
  //   {
  //   case 1:
  //     printf("The enemy attacks the player!\n");
  //     playerhealth -= sw;
  //     printf("Player loses %d HP\n", sw);
  //     break;
  //   case 2:
  //     if (enemyhealth > 80) {
  //         continue;
  //       }
  //     enemyhealth += hp;
  //     printf("Enemy recovers HP\n");
  //   default:
  //     break;
  //   }
  // }
  // if (playerhealth <= 0) {
  //   printf("\nYou lost! The enemy wins.\n");
  // } else {
  //   GG();
  // }

  return 0;
}

void drawBat() {
  char image[8][35] = {
    {'/', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '\\'},
    {'|', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '|'},
    {'|', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '(', '_', ' ', ' ', ' ', ' ', ',', '_', ',', ' ', ' ',' ', ' ', '_', ')', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '|'},
    {'|', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '/', ' ', '\'', '`', '-', '-', ')', ' ', '(', '-', '-','\'', '`', ' ', '\\', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '|'},
    {'|', ' ', ' ', ' ', ' ', ' ', ' ', '/', ' ', ' ', '_', ',', '-', '\'', '\\', '_', '/', '\'', '-', ',', '_', ' ', ' ', '\\', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '|'},
    {'|', ' ', ' ', ' ', ' ', ' ', '/', '.', '-', '\'', ' ', ' ', ' ', ' ', '"', ' ', '"', ' ', ' ', ' ', ' ', '\'', '-', '.', '\\', ' ', ' ', ' ', ' ', ' ', ' ', '|'},
    {'|', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '|'},
    {'\\', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '/'}
    };

  for (int i = 0; i < 8; i++) {
    for (int j = 0; j < 35; j++) {
    printf("%c", image[i][j]);
    }
    printf("\n");
  }
}

void GG() {
  char image2[14][30] = {
    {'/', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '\\'},
    {'|', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '|'},
    {'|', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 'G', 'G', 'G', ' ', ' ', ' ', 'G', 'G', 'G', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '|'},
    {'|', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 'G', 'G', 'G', 'G', 'G', ' ', 'G', 'G', 'G', 'G', 'G', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '|'},
    {'|', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 'G', ' ', ' ', ' ', ' ', ' ', 'G', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '|'},
    {'|', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 'G', ' ', ' ', ' ', ' ', ' ', 'G', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '|'},
    {'|', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 'G', ' ', ' ', ' ', ' ', ' ', 'G', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '|'},
    {'|', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 'G', ' ', 'G', 'G', ' ', ' ', 'G', ' ', 'G', 'G', ' ',' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '|'},
    {'|', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 'G', ' ', 'G', ' ', 'G', ' ', 'G', ' ', 'G', ' ', 'G',' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '|'},
    {'|', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 'G', ' ', ' ', ' ', 'G', ' ', 'G', ' ', ' ', ' ', 'G', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '|'},
    {'|', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 'G', 'G', 'G', 'G', 'G', ' ', 'G', 'G', 'G', 'G', 'G', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '|'},
    {'|', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 'G', 'G', 'G', ' ', ' ', ' ', 'G', 'G', 'G', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '|'},
    {'|', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '|'},
    {'\\', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '/'}
    };

  for (int x = 0; x < 11; x++) {
    for (int y = 0; y < 35; y++) {
    printf("%c", image2[x][y]);
    }
    printf("\n");
  }
}

void map1() {
  char map1[8][35] = {
    {'/', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '|', '1', '|', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '\\'},
    {'|', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '|'},
    {'-', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '|'},
    {'2', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '|'},
    {'-', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '|'},
    {'|', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '|'},
    {'|', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '|'},
    {'\\', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '|', '-', '|', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '/'}
    };

  for (int i = 0; i < 8; i++) {
    for (int j = 0; j < 35; j++) {
    printf("%c", map1[i][j]);
    }
    printf("\n");
  }
}

void map2() {
  char map2[8][35] = {
    {'/', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '|', '1', '|', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '\\'},
    {'|', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '|'},
    {'-', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '|'},
    {'2', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '|'},
    {'-', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '|'},
    {'|', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '|'},
    {'|', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '|'},
    {'\\', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '/'}
    };

  for (int i = 0; i < 8; i++) {
    for (int j = 0; j < 35; j++) {
    printf("%c", map2[i][j]);
    }
    printf("\n");
  }
}

void map12() {
  char map12[8][35] = {
    {'/', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '|', '1', '|', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '\\'},
    {'|', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '|'},
    {'|', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '|'},
    {'|', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '|'},
    {'|', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '|'},
    {'|', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '|'},
    {'|', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '|'},
    {'\\', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '/'}
    };

  for (int i = 0; i < 8; i++) {
    for (int j = 0; j < 35; j++) {
    printf("%c", map12[i][j]);
    }
    printf("\n");
  }
}

void map3() {
  char map3[8][35] = {
    {'/', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '|', 'e', 'x', '|', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '\\'},
    {'|', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '|'},
    {'|', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '-'},
    {'|', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '2'},
    {'|', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '-'},
    {'|', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '|'},
    {'|', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '|'},
    {'\\', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '/'}
    };

  for (int i = 0; i < 8; i++) {
    for (int j = 0; j < 35; j++) {
    printf("%c", map3[i][j]);
    }
    printf("\n");
  }
}

void map4() {
  char map4[8][35] = {
    {'/', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '|', '2', '|', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '\\'},
    {'|', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '|'},
    {'-', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '-'},
    {'3', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '1'},
    {'-', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '-'},
    {'|', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '|'},
    {'|', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '|'},
    {'\\', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '/'}
    };

  for (int i = 0; i < 8; i++) {
    for (int j = 0; j < 35; j++) {
    printf("%c", map4[i][j]);
    }
    printf("\n");
  }
}

void mouse() {
  char mouse1[14][23] = {
    {'/', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '\\'},
    {'|', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',  ' ', ' ', '|'},
    {'|', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '_', ',', ')',  ' ', '|'},
    {'|', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '_', '.', '.', '.', '_', '.', '-', ';', '-', '\'', ' ', ' ', '|'},
    {'|', ' ', ' ', ' ', ' ', ' ', ' ', '.', '-', '\'', ' ', ' ', ' ', ' ', ' ', ' ', '\'', '(', ' ', ' ', ' ', ' ', '|'},
    {'|', ' ', ' ', ' ', ' ', ' ', '/', ' ', ' ', ' ', ' ', ' ', ' ', ';', ' ', ' ', ' ', '\\', ' ', ' ', ' ', ' ', '|'},
    {'|', ' ',' ', ' ', ' ', ';', '.', ' ', ' ', ';', '\'', ' ', ' ', ',', ' ', ';', ' ', ' ', ';', ' ', ' ', ' ', '|'},
    {'|', ' ', ' ', ' ', '.', '\'', '\'', ' ', '\'', '\'', '.', ' ', '(', ' ', ' ', '\\', ' ', ';', ' ', ' ', ' ', ' ', '|'},
    {'|', ' ', ' ', '/', ' ', 'f', '_', ' ', '_', 'L', ' ', '\\', ' ', ';', ' ', ' ', ')', '\\', ' ', ' ', ' ', ' ', '|'},
    {'|', ' ', ' ', '\\', '/', '|', '\'', ' ', '\'', '|', '\\', '/', ';', ';', ' ', '<', ';', '/', ' ', ' ', ' ', ' ', '|'},
    {'|', ' ', '(', '(', ';', ' ', '\\', '_', '/', ' ', ' ', '(', '(', ')', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '|'},
    {'|', ' ', ' ', ' ', ' ', ' ', ' ', '"', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '|'},
    {'|', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '|'},
    {'\\', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '/'}
  };
  for (int i = 0; i < 14; i++) {
    for (int j = 0; j < 23; j++) {
      printf("%c", mouse1[i][j]);
    }
  printf("\n");
  }
}

// system("cls")
// #include <unistd.h>
// sleep(5);