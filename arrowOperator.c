#include <stdio.h> 
#include <stdlib.h>

struct arrowOp {
    const char* theosOpinion;
};

struct arrowOp* theo = NULL;

int main(int argc, char *argv[]) {
    theo = (struct arrowOp*)
        malloc(sizeof(struct arrowOp));

    theo->theosOpinion = "theo loves the arrow operator! (scope resolution is also an operator)";

    printf("%s", theo->theosOpinion);
  return 0;
}
