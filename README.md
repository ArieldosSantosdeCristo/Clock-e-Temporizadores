# Clock-e-Temporizadores
SEMAFORO

Este projeto implementa um sistema simples de semáforo utilizando um Raspberry Pi Pico. Ele controla três LEDs representando as cores do semáforo (vermelho, amarelo e verde) alternando entre eles a cada 3 segundos.

🛠️ Requisitos

Raspberry Pi Pico
3 LEDs (Vermelho, Amarelo, Verde)
Resistores adequados (220Ω - 330Ω)
Fios de conexão
Protoboard

🚦 Funcionamento

O código utiliza a biblioteca padrão do Pico e a API de temporização (pico/time.h) para alternar os LEDs de acordo com o ciclo de um semáforo:

LED vermelho acende por 3 segundos.
LED amarelo acende por 3 segundos.
LED verde acende por 3 segundos.
O ciclo se repete indefinidamente.

📌 Configuração dos Pinos

Os LEDs devem ser conectados aos seguintes pinos GPIO do Raspberry Pi Pico:

LED Vermelho: GPIO 11
LED Amarelo: GPIO 12
LED Verde: GPIO 13

🚀 Como Usar

Carregue o código no Raspberry Pi Pico.
Conecte os LEDs conforme a configuração descrita.
Execute o programa no Raspberry Pi Pico.
Observe o funcionamento do semáforo alternando entre as cores.