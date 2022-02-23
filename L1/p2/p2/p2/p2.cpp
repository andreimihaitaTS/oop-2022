#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>

int convert(const char* s) {
    int i;
    int numar = 0;
    for (i = 0; s[i] != '\n' && s[i]; i++) {
        numar = numar * 10 + (s[i] - '0');
    }
    return numar;
}

bool solve(int& rezultat) {
    FILE* fisier = fopen("text.txt", "r");
    if (fisier == NULL) {
        printf("Nu exista fisierul");
        return 0;
    }
    char sir[100] = "";
    while (fgets(sir, sizeof(sir), fisier)) {
        rezultat += convert(sir);
    }
    fclose(fisier);
    return 1;
}

int main() {
    int rezultat = 0;
    if (solve(rezultat)) {
        printf("%d", rezultat);
    } else {
        printf("eroare");
    }
    return 0;
}
