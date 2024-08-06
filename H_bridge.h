void port_intialization();
void change_direction();
volatile char *outf=0x31;


void port_intialization(){
  volatile char *dirf=0x30;
  *dirf=0x03;
}
void change_direction(){ 
    *outf=0x01;
    delay(1000);
    *outf=0x02;
    delay(1000);
}
