// Online C compiler to run C program online
#include <stdio.h>
#include <stdbool.h>
//this is still not catering all possibilities, but should cover the requirements of the exam
int main() {
    char guesses[6][5];
    char secret[] = "tuber";
    bool used[26];//each index will represent a flag for a-z
    char correct_pos[5]; int cpsCounter = 0;
    char correct_bad_pos[5]; int cbpsCounter = 0;
    
    for(int i = 0; i < 6; i++) {
        correct_pos[i] = ' ';
        correct_bad_pos[i] = ' ';
        for (int j=0; j< 5; j++) {
            guesses[i][j] = ' ';//initally empty
            
        }
    }
    for (int i =0; i<26; i++) {
        used[i]=false;
    }
    
    int guess_counter = 0; 
    do {
      printf("Please enter your guess (5 characters only): ");
      char guess[6];
      scanf("%s",guess);
      int matchcounter = 0; 
      for (int i = 0; i< 5; i++) {
          guesses[guess_counter][i] = guess[i];
          for (int j = 0; j<5; j++) {
              if (secret[i] == guess [j]) {
                  
                  if (i==j) {
                      bool flag =true; int k=0;
                      //adding to avoid repititons of letters in the array
                      while(k<5) {
                          if(correct_pos[k]==secret[i] || correct_pos[k]==secret[i]) {
                              flag = false;
                              break;
                          }
                          k++;
                      }
                      if(flag) {
                          correct_pos[cpsCounter++] = secret[i];
                          used[guess[j]%'a'] = true;
                      }
                      matchcounter++;
                      
                  } else {
                      bool flag =true, flag_pos=false; int k=0;
                      //adding to avoid repetitions of letters in the array
                      while(k<5) {
                          if(correct_bad_pos[k]==secret[i] || correct_pos[k]==secret[i]) {
                              flag = false;
                              if(guess[j]==correct_pos[k]) {
                                  flag_pos = true;
                                  break;
                              }
                              break;
                          }
                          
                          k++;
                      }
                      if (flag) {
                          
                              correct_bad_pos[cbpsCounter++] = secret[i];
                              used[guess[j]%'a'] = true;
                      } 
                      /*else {
                          if (flag_pos) {
                              printf ("\nincorrect\n");
                              used[guess[j]%'a'] = true;
                          }
                      }*/
                      
                  }
                  
              } else {
                  used[guess[j]%'a'] = true;
              }
          }
      }
      for(int i = 0; i < 5; i++) {
          for(int j = 0; j < 5; j++){
              if(correct_pos[i] == correct_bad_pos[j])
                correct_bad_pos[j]=' ';
          }
      }
    
    if (matchcounter == 5){
        printf("\nYou've guessed the correct word! You win! :D\n");
        break;
    } else {
        printf("Current Stats: \n");
        for(int i = 0; i < 6; i++) {
            for (int j=0; j< 5; j++) {
                printf("| %c ", guesses[i][j]);
                
            }
            printf("|\n");
        }
        for (char a='a'; a<='z'; a++){
            if(used[a%'a']) {
                printf("%c - used\n", a);
            }else {
                printf("%c - not used\n", a);
            }
        }
        printf("Correct character and position:\n");
        for (int i = 0; i < 5; i++) {
                printf ("%c, ",correct_pos[i]);
        }
        printf("\n");
        printf("Correct character and incorrect position:\n");
        for (int i = 0; i < 5; i++) {
            printf ("%c, ",correct_bad_pos[i]);
        }
        printf("\n");
    }
        
    guess_counter++;
    if(guess_counter==6) {
        printf("\nYou've failed to guess the correct word :(\n");
        break;
    }
    } while (guess_counter<6);
    
    return 0;
}

