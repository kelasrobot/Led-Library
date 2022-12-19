#include <Led.h>
Led ledMerah(12);
Led ledKuning(11);
Led ledHijau(10);

void setup() {

}

void loop() {
  ledMerah.ON();
  ledKuning.ON();
  ledHijau.ON();
  delay(100);
  ledMerah.OFF();
  ledKuning.OFF();
  ledHijau.OFF();
  delay(100);
}
