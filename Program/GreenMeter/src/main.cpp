#include <TFT_eSPI.h> // Biblioteka TFT_eSPI
#include <SPIFFS.h>  // Biblioteka do obsługi systemu plików SPIFFS

#define ST7789_DRIVER // Wybór sterownika wyświetlacza

// Konfiguracja pinów
//#define TFT_CS    5
//#define TFT_RST   9
//#define TFT_DC    16
//#define TFT_MOSI  19
//#define TFT_SCLK  18
//#define TFT_BL    4

TFT_eSPI tft = TFT_eSPI(); // Tworzenie obiektu wyświetlacza

void setup() {
  // Konfiguracja jasności podświetlenia
  
  tft.init();                 // Inicjalizacja wyświetlacza
  tft.setRotation(1);         // Ustawienie orientacji ekranu (1 = poziomo)
  tft.fillScreen(TFT_BLACK);  // Wypełnienie ekranu kolorem czarnym

  // Ustawienia czcionki i koloru
  tft.setTextColor(TFT_WHITE, TFT_BLACK); // Tekst biały, tło czarne
  tft.setTextDatum(MC_DATUM);             // Wyrównanie do środka ekranu
  tft.setTextSize(3);                     // Skalowanie tekstu

  // Wyświetlenie tekstu
  tft.drawString("Heej Sandra :D", tft.width() / 2, tft.height() / 2);
}

void loop() {
  // Pętla główna pozostaje pusta
}
