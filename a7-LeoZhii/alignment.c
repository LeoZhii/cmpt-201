#include <stdio.h>
#pragma pack(push, 1)
struct pack_example {
  char a;
  int b;
  short c;
  double d;
};
#pragma pack(pop)

struct align_example {
  char a;   // 1 byte
  int b;    // 4 bytes (requires 4-byte alignment)
  short c;  // 2 bytes (requires 2-byte alignment)
  double d; // 8 bytes (requires 8-byte alignment)
};

void align(void) {
  struct align_example ex = {'0', 0, 0, 0.1};

  printf("sizeof(char): %lu, sizeof(int): %lu, sizeof(short): %lu, "
         "sizeof(double):%lu\n",
         sizeof(char), sizeof(int), sizeof(short), sizeof(double));
  printf("ex.a address: %p\nex.b address: %p\nex.c address: %p\nex.d address: "
         "%p\n",
         (void *)&ex.a, (void *)&ex.b, (void *)&ex.c, (void *)&ex.d);
  printf("sizeof(struct align_example): %lu\n", sizeof(struct align_example));
}

void pack(void) {
  struct pack_example ex = {'0', 0, 0, 0.1};

  printf("ex.a address: %p\nex.b address: %p\nex.c address: %p\nex.d address: "
         "%p\n",
         (void *)&ex.a, (void *)&ex.b, (void *)&ex.c, (void *)&ex.d);
  printf("sizeof(struct pack_example): %lu\n", sizeof(struct pack_example));
}

int main(void) {
  align();
  pack();
}
