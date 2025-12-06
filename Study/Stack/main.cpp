#include <iostream>     // Para std::cout
#include <stack>        // Para std::stack<std::string>
#include <string>       // Para std::string
#include <conio.h>      // Para _kbhit(), _getch()
#include <cctype>       // Para std::isprint()
#include <windows.h>    // Para Sleep()

// FLUXOGRAMA ATUALIZADO:
// 1. bool done=false: Controla saída do loop externo.
// 2. Loop externo: while(!done) → Repete entradas.
// 3. Prompt + Loop interno (construção de palavra).
//    - ESC (27): done=true + Break interno → Sai inner, pula push, break outer. 
//    - ENTER (13): Confirma + Push (se !empty).
// 4. Após outer: Sempre imprime stack acumulado.
// 5. Fim normal (return 0).

int main() {
    std::stack<std::string> card;  // Stack para palavras
    bool done = false;             // Flag: true=ESC apertado (sair de entradas)

    // LOOP EXTERNO: Continua até done=true (ESC)
    while (!done) {
        std::cout << "Enter a word:\n";  // Prompt

        std::string input;             // Palavra temporária
        // LOOP INTERNO: Não-bloqueante
        while (true) {
            Sleep(10);                 // Evita sobrecarga CPU

            if (_kbhit()) {
                char c = _getch();     // Lê tecla SEM eco

                // DECISÃO POR TECLA:
                if (c == 27) {         // ESC: Ativa flag + sai inner
                    done = true;
                    break;
                }
                if (c == 13) {         // ENTER: Confirma
                    break;
                }
                if (c == 8 && !input.empty()) {  // BACKSPACE
                    std::cout << "\b \b";
                    input.pop_back();
                    continue;
                }
                unsigned char uc = static_cast<unsigned char>(c);
                if (std::isprint(uc)) {  // Imprimível
                    std::cout << c;      // Eco
                    input += c;
                }
            }
        }
        std::cout << '\n';

        if (done) break;               // ESC: Pula push + sai outer

        if (!input.empty()) {          // Push só se palavra válida
            card.push(input);
        }
    }

    // SEMPRE EXECUTA: Impressão reversa do stack (LIFO)
    size_t SIZE = card.size();         // Use size_t para size()
    for (size_t i = 0; i < SIZE; ++i) {  // Loop otimizado
        std::cout << "Stack size: " << card.size() << '\n';
        std::cout << "Top card: " << card.top() << '\n';
        card.pop();
    }
    std::cout << "Stack size: " << card.size() << '\n';
    return 0;
}
