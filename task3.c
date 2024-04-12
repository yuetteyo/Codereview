#include <stdio.h>

typedef struct human_struct {
  char name[1000];
  char nextname[1000];
  int height;
} human;

int main() {
  int N = 0;
  int error = 0;
  if (scanf("%d", &N) == 1 && N > 0) {
    human people[N];
    for (int i = 0; i < N && !error; i++) {
      if ((scanf("%s", people[i].name) != 1) ||
          (scanf("%s", people[i].nextname) != 1) ||
          (scanf("%d", &people[i].height) != 1)) {
        error = 1;
      }
    }
    int H = 0;
    if (scanf("%d", &H) != 1) {
      error = 1;
    }
    int num = 0;
    for (int i = 0; i < N && !error; i++) {
      if (people[i].height >= H) {
        if (num) {
          printf(", ");
        }
        num++;
        printf("%s %s", people[i].name, people[i].nextname);
      }
    }
    if (!num) {
      printf("Nothing");
    }
  } else {
    error = 1;
  }
  if (error) {
    printf("n/a");
  }
}

