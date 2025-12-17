#include <stdio.h>

int main() {
   const char *messages[] = {
        "Hello world this is git and yeaaa i am trying new things heheh",
        "This was added from feature branch",
        "creating new file"
    };
    int length = sizeof(messages) / sizeof(messages[0]);
    for (int i = 0; i < length; i++) {
        printf("%s\n", messages[i]);
    }

    return 0;
}