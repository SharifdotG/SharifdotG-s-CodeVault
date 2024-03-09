#include <stdio.h>
#include <string.h>

int main() {
    int tabs, actions;
    scanf("%d %d", &tabs, &actions);

    while (actions--) {
        char action[10];
        scanf("%s", action);

        if (strcmp(action, "fechou") == 0) {
            tabs++;
        } else tabs--;
    }

    printf("%d\n", tabs);

    return 0;
}
