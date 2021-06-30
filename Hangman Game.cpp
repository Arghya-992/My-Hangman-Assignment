#include <stdio.h>
#include <string.h>

int main() {

  char ans[200];
  printf("Enter a ord which another user will ahve to guess: ");
  fflush(stdout);
  
  scanf("%s", ans);

  int n = strlen(ans);
  int unknown[n];
  for (int i=0; i < n; ++i) {
    unknown[i] = 0;
  }

 
  int ggove = 0;
  while (! ggove) {

    printf("The word is : ");
    for(int i=0; i < n; ++i) {
      if (unknown[i]) {
        printf("%c", ans[i]);
      }
      else {
        printf("*");
      }
    }
    printf("\n");


    char gss;
    printf("Letter you will enter now is: ");
    fflush(stdout);
    scanf(" %c", &gss);

    for(int i=0; i < n; ++i) {
      if (ans[i] == gss) {
	unknown[i] = 1;
      }
    }

    
    ggove = 1;
    for(int i = 0; i < n; ++i) {
      if (!unknown[i]) {
        ggove = 0;
        break;
      }
    }
  }
 printf("Brilliant! You just guessed the word, which is \"%s\"\n", ans);
 return 0;
}
