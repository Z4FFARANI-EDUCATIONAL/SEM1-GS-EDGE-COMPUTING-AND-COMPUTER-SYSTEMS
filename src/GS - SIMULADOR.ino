#include <LiquidCrystal.h>
#include <TMP36.h>
#include <MQ135.h>

#define PIN_GAS A0
#define PIN_TEMPERATURA A1
#define PIN_SIRENE 13

LiquidCrystal lcd(12, 11, 10, 5, 4, 3, 2);
TMP36 myTMP36(PIN_TEMPERATURA);
MQ135 gasSensor = MQ135(PIN_GAS);

double tempC = 0;

void setup() {
  lcd.begin(16, 2);
  pinMode(PIN_SIRENE, OUTPUT);
  delay(50);
}

void loop() {
  sensor_gas();
  pisca_tela();
  sensor_temperatura();
  pisca_tela();
}

void pisca_tela() {
  lcd.clear();
  delay(500);
  lcd.display();
}

void sensor_gas() {
  float ppm = gasSensor.getPPM(); 
  int value = map(ppm, 350, 30000, 0, 100);

  if (value > 20) {
    tone(PIN_SIRENE, 600);
    delay(1500);
    noTone(PIN_SIRENE);

    lcd.setCursor(0, 0);
    lcd.print("CO2 DETECTADO!");
    delay(3000);

    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("RISCO DE");
    lcd.setCursor(0, 1);
    lcd.print("ACIDIFICACAO."); 
  } else if (value <= 20 && value > -6) {
    lcd.setCursor(0, 0);
    lcd.print("CO2 POR PERTO!");
  } else {
    lcd.setCursor(0, 0);
    lcd.print("NENHUM GAS");
    lcd.setCursor(0, 1);
    lcd.print("DETECTADO.");
  }

  delay(3000);
}

void sensor_temperatura() {
  float tempC = myTMP36.getTempC();

  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("TEMPERATURA");
  lcd.setCursor(0, 1);
  lcd.print("DA AGUA: ");
  lcd.print(tempC, 1);
  lcd.print("C");
  delay(3000);
}