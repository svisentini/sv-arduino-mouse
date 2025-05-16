# sv-arduino-mouse
Botao simulando "auto-click" do mouse

# Placa
Arduino Nano Mini Ultra Pequeno Tipo-C Placa De Desenvolvimento Atmega328p Chip Ch340 Porta Serial

![image](https://github.com/user-attachments/assets/eab1fb8d-1a04-469f-ac8f-1e0232afaf52)

![image](https://github.com/user-attachments/assets/2dfe554a-8053-442a-b3fe-2751bd58d134)

Chip de controle principal: ATMEGA328P

Chip USB chip: CH340G

Tensão de entrada: USB 5V/DC6-12V

Tensão de saída: 3.3V-5V

Corrente de fornecimento máxima de 5V 5V: 1A

Frequência de CPU de 16 MHz

Porta analógica: 6(A0-A5)

Porta Digital (IO-PWM): 14 (3/5/6/11 Suporte PWM

Eventuação DO EEPROM[KB]: 1KBytes

Spam[kb]: 2KBytes

Flash[lb]: 32KBytes

# Configurações da IDE
![image](https://github.com/user-attachments/assets/457cce0b-5ddc-49e8-91ae-4dbbf5436351)

# Possui Builtin led no pino 13

```
void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
}
void loop() {
  digitalWrite(LED_BUILTIN, HIGH);  // turn the LED on (HIGH is the voltage level)
  delay(500);                      // wait for a second
  digitalWrite(LED_BUILTIN, LOW);   // turn the LED off by making the voltage LOW
  delay(500);                      // wait for a second
}
```

# Possui 3 LEDS endereçaveis em D2
Instalar a biblioteca: Adafruit NeoPixel

![image](https://github.com/user-attachments/assets/55ed3a9b-caa5-4583-9d12-8a1df993e2a6)

``` Arduino
#include <Adafruit_NeoPixel.h>

#define NUM_LEDS 3       // Se você tem 3 LEDs endereçáveis
#define DATA_PIN 2      // O pino ao qual os LEDs estão conectados (D2)

Adafruit_NeoPixel pixels(NUM_LEDS, DATA_PIN, NEO_GRB + NEO_KHZ800);

Em Setup:
    pixels.begin(); // Inicializa a biblioteca NeoPixel
    pixels.show();  // Apaga todos os LEDs inicialmente

Em Loop:
  // Acende o primeiro LED em vermelho
  // indice >> 0 -> 1º led; 1 -> 2º led; 2 -> 3º led
  // vermelho, verde, azul >> 0 : desligado; 255 : maximo brilho
  pixels.setPixelColor(0, 10, 0, 0); // (índice, vermelho, verde, azul)
  pixels.show();
```


  
