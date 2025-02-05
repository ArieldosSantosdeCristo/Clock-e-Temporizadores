#include <stdio.h>
#include "pico/stdlib.h"
#include "pico/time.h"

#define LED_VERMELHO 11  // GPIO para LED vermelho
#define LED_AMARELO 12   // GPIO para LED amarelo
#define LED_VERDE 13     // GPIO para LED verde

volatile int estado = 0; // Estado do semáforo

// Função de callback do temporizador periódico
bool repeating_timer_callback(struct repeating_timer *t) {
    // Desligar todos os LEDs antes de alterar o estado
    gpio_put(LED_VERMELHO, 0);
    gpio_put(LED_AMARELO, 0);
    gpio_put(LED_VERDE, 0);

    // Alternar entre os estados do semáforo
    if (estado == 0) {
        gpio_put(LED_VERMELHO, 1);
        estado = 1;
    } else if (estado == 1) {
        gpio_put(LED_AMARELO, 1);
        estado = 2;
    } else {
        gpio_put(LED_VERDE, 1);
        estado = 0;
    }
    return true; // Mantém o temporizador ativo
}

int main() {
    // Inicializar a biblioteca padrão
    stdio_init_all();

    // Configurar os pinos dos LEDs como saída
    gpio_init(LED_VERMELHO);
    gpio_set_dir(LED_VERMELHO, GPIO_OUT);
    gpio_init(LED_AMARELO);
    gpio_set_dir(LED_AMARELO, GPIO_OUT);
    gpio_init(LED_VERDE);
    gpio_set_dir(LED_VERDE, GPIO_OUT);

    // Criar o temporizador periódico de 3 segundos
    struct repeating_timer timer;
    add_repeating_timer_ms(3000, repeating_timer_callback, NULL, &timer);

    // Loop principal 3 segundos
    while (true) {
        printf("Sistema de semáforo operando...\n");
        sleep_ms(3000); 
    }
}

