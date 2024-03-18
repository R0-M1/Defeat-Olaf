#include "JeuModeTexte.h"
#include "Windows.h"

int main() {
    SetConsoleOutputCP(CP_UTF8);
    JeuModeTexte partie;
    partie.boucleJeu();

    return 0;
}