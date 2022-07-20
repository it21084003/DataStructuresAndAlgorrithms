//pointer char array string
#include <iostream>

int main() {
    char *str = "AnttMin Paing";

    printf("my name is %s\n ",str);
    printf("char pointer size on my processor %d\n",sizeof(str));

    char *name[4] = {"Antt","Min","Paing"};
    for (int i = 0; i < 3; ++i) {
        printf("name[0] is %s\n",name[i]);
    }


    return 0;
}
