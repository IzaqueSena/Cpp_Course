#include <iostream>
using namespace std;

int main() {
    // loop infinito que não faz nada, entra e nao sai nunca
    // for(;;) {}

    // loop infnito que faz inicializa e faz algo em cada iteração
    for(int i = 0; ; i++) {
        cout << i << endl;
        if (i == 10) {
            break;
        }
    }

    return 0;
}