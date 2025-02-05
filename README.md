# Clock-e-Temporizadores
--------------------------------------------------------------------------------------------------------
ATENÇÃO: Para que o projeto funcione corretamente, 
é preciso baixar as pastas, e dentro do vscode abrir cada pasta indivualmente 
para importar o projeto pelo Raspberry Pi Pico Projeto.
--------------------------------------------------------------------------------------------------------
SEMAFORO

README - Sistema de Semáforo com Raspberry Pi Pico

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

---------------------------------------------------------------------------------------------------------
Temporizador

Controle de LEDs com Botão no Raspberry Pi Pico
Este projeto implementa um sistema de controle de LEDs utilizando um botão no Raspberry Pi Pico. Quando o botão é pressionado, os LEDs acendem em sequência com temporizadores que controlam o tempo de cada cor.

🛠️ Componentes Necessários

Raspberry Pi Pico
3 LEDs (Azul, Vermelho e Verde)
1 Botão Push
Resistores adequados (220Ω - 330Ω)
Fios de conexão
Protoboard

🔌 Conexões

Componente	GPIO do Pico
LED Azul	11
LED Vermelho	12
LED Verde	13
Botão	5

🚀 Funcionamento

O sistema fica em espera até que o botão seja pressionado.
Quando o botão é acionado, os LEDs acendem na seguinte sequência:
Azul → 3 segundos → Desliga
Vermelho → 3 segundos → Desliga
Verde → 3 segundos → Desliga
Após a sequência, o sistema volta a esperar uma nova ativação do botão.
