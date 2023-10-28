#include <iostream>
#define EMBED_STR(name, path)                \
  extern const char name[];                  \
  asm(".section .rodata, \"a\", @progbits\n" \
      #name ":\n"                            \
      ".incbin \"" path "\"\n"               \
      ".byte 0\n"                            \
      ".previous\n");

EMBED_STR(kCurSourceFile, __FILE__);
int main() {
    std::cout << kCurSourceFile;
    return 0;
}
