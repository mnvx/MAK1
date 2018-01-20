#include <MAK1.h>


MAK1 mak1;


void setup() {
  
  mak1.initialize();

  // Начало

  mak1.forward(72);
  mak1.left(90); 
  mak1.forward(96);

  // Конец

  mak1.stop();
}


void loop() {

}
