#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x3F, 16, 2); // Dirección I2C y dimensiones del LCD (16x2)

void setup() {
  lcd.init(); // Inicializar el LCD
  lcd.backlight(); // Encender la retroiluminación
}

void loop() {
  lcd.setCursor(0, 0); // Establecer la posición del cursor en la primera fila
  String mensaje = "Hola, amigos";
  for (int i = 0; i < mensaje.length(); i++) {
    lcd.print(mensaje.charAt(i)); // Mostrar la letra actual
    delay(200); // Retraso entre letras
  }
for (int i = 0; i < mensaje.length(); i++) {
    lcd.scrollDisplayRight(); // Desplazar una posición hacia la derecha
    delay(500);
  }
 
  lcd.clear();  // Borrar la pantalla al finalizar

  lcd.setCursor(0, 1); // Establecer la posición del cursor en la segunda fila
String mmensaje = "ITSE UNAM FESC";
  for (int i = 0; i < mmensaje.length(); i++) {
    lcd.print(mmensaje.charAt(i)); // Mostrar la letra actual
    delay(200); // Retraso entre letras
  }
for (int i = 0; i < mmensaje.length(); i++) {
    lcd.scrollDisplayRight(); // Desplazar una posición hacia la derecha
    delay(500);
  }

  lcd.clear();  // Borrar la pantalla al finalizar
  delay(3000);
}

