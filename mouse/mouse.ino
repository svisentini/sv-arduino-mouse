#include <Adafruit_NeoPixel.h>

#define NUM_LEDS 3       // Se você tem 3 LEDs endereçáveis
#define DATA_PIN 2      // O pino ao qual os LEDs estão conectados (D2)

Adafruit_NeoPixel pixels(NUM_LEDS, DATA_PIN, NEO_GRB + NEO_KHZ800);
// O terceiro parâmetro especifica a ordem das cores (GRB) e a velocidade de comunicação (800 kHz)
// Pode variar dependendo do tipo de LED.

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);

  pixels.begin(); // Inicializa a biblioteca NeoPixel
  pixels.show();  // Apaga todos os LEDs inicialmente
  
}
void loop() {
  digitalWrite(LED_BUILTIN, HIGH);  // turn the LED on (HIGH is the voltage level)
  delay(500);                      // wait for a second
  digitalWrite(LED_BUILTIN, LOW);   // turn the LED off by making the voltage LOW
  delay(500);                      // wait for a second



    // Acende o primeiro LED em vermelho
  pixels.setPixelColor(0, 10, 0, 0); // (índice, vermelho, verde, azul)
  pixels.show();
  delay(1000);

  // Acende o segundo LED em verde
  pixels.setPixelColor(1, 0, 10, 0);
  pixels.show();
  delay(1000);

  // Acende o terceiro LED em azul
  pixels.setPixelColor(2, 0, 0, 10);
  pixels.show();
  delay(1000);

  // Apaga todos os LEDs
  for (int i = 0; i < NUM_LEDS; i++) {
    pixels.setPixelColor(i, 0, 0, 0);
  }
  pixels.show();
  delay(1000);
}

