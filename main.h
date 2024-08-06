#include "H_bridge.h"
void setup() {
  // put your setup code here, to run once:
  port_intialization();
  while(1){
    change_direction();
  }
}

void loop() {
  // put your main code here, to run repeatedly:

}
