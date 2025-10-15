#define FASTLED_ALLOW_INTERRUPTS 0
  #include <FastLED.h>


//SISTEMA PICO
  #include <Wire.h>
  #include <Scheduler.h>
 
  unsigned long lastTime;
  int cont=0;
  int count=0;
  int countM=0;
  int pos=0;
  int position=0;
  int getseg2=0;
  int corShortStar=0;
  bool lvez = false;
  bool inic = true;
  bool animacao = true;
  bool shortstar = false;
  bool trocanima = false;
  int aux;
  int caso=0;
  int texto=0;
  unsigned long int millison1=0, millisoff1=0;
  unsigned long int millisoff=0, millison=0;
//RTC DS3231
  #include <DS3231.h>
  DS3231 myRTC;
  bool modo = false;
  bool h12;
  bool hpm;
  bool confere = false;
  int  temp;
  int wait = 4;
  
//RTC PICO
#include <PicoEspTime.h>
  PicoEspTime rtc;
  int horapico;

//FASTLED
  #include <FastLED.h>
  #define Pino 22
  #define Leds 45
  #define brilho 10
  CRGB Halo[Leds]; //vermelho, vermelho, verde, verde,    blue     blue    amarelo,  amarelo, laranja,laranja, amarelo ciano
  const long cor[]={0x00ff00,0x00ff00,0xff0000,0xff0000,0x0000ff,0x0000ff,0xfbff00, 0xfbff00,0xFF4500,0xFF4500,0x00ffff,0xff00ff};
  //PacificaRef pacifica = PacificaRef::New(Leds);
  int corlocal =0;

// SHOOTINGSTAR
unsigned long previousMillis = 0;           // Stores last time LEDs were updated
int caunt = 0;     
int direction = 0;
int red = 0;
int green = 0;
int blue = 0;
int tail_length = 0;
int delay_duration = 0;




//DISPLAY
  # define botao 17
  int pinA[4]={20,21,18,19};
             //a,b, c, d, e, f, g
  int pinB[7]={11,8,9,10,12,14,16};
  bool display[11][7]={{1,1,1,1,1,1,0},  // ZERO
                    {0,1,1,0,0,0,0},  // UM
                    {1,1,0,1,1,0,1},  // DOIS
                    {1,1,1,1,0,0,1},  // TRES
                    {0,1,1,0,0,1,1},  // QUATRO
                    {1,0,1,1,0,1,1},  // CINCO
                    {1,0,1,1,1,1,1},  // SEIS
                    {1,1,1,0,0,0,0},  // SETE
                    {1,1,1,1,1,1,1},  // OITO
                    {1,1,1,1,0,1,1},  // NOVE
                    {0,0,0,0,0,0,0}}; //LIMPA

  bool displayAlfa[28][7]= {{0,0,1,1,1,0,1}, // letra o 0
                            {1,0,0,1,1,1,0}, // letra c 1
                            {0,0,1,1,1,1,1}, // letra b 2
                            {0,1,1,1,1,0,1}, // letra d 3 
                            {0,1,1,0,0,0,0}, // letra I esquerda 4
                            {1,1,1,0,1,1,1}, // letra A 5
                            {1,1,1,0,1,1,0}, // letra N 6
                            {0,0,0,1,1,1,1}, // letra t 7
                            {1,1,0,0,1,1,0}, // letra m 8
                            {1,1,0,0,0,1,1}, //  grau 9
                            {1,0,1,1,1,1,0}, // letra G 10
                            {0,0,0,0,1,0,1}, // letra r 11
                            {0,0,0,0,0,0,0}, // vazio 12
                            {0,1,1,0,1,1,1}, // letra H 13
                            {0,1,1,1,1,1,0}, // letra V 14
                            {1,0,0,1,1,1,1}, // letra E 15
                            {0,1,1,1,0,1,1}, // letra Y 16
                            {0,0,1,0,1,1,1}, // letra h 17
                            {0,0,0,1,1,1,0}, // letra L 18
                            {1,0,1,1,0,1,1},  // letra S 19
                            {1,1,1,1,1,0,0}, // letra J 20
                            {1,1,0,0,1,1,1}, // letra P 21
                            {1,1,1,0,0,1,0}, // letra M 22
                            {1,0,0,0,1,1,1}, // letra F 23
                            {0,0,0,0,1,0,0}, // letra i min 24
                            {0,0,1,0,1,0,1},// letra n 25
                            {1,1,1,1,1,1,0},// letra O 26
                            {0,0,0,0,1,1,0}}; // letra I direita 27

int foundJesus[32]={4,25,12,6,15,15,3,12,0,23,12,21,15,5,1,15,12,4,12,23,0,14,25,3,12,20,15,19,14,19,12,12};                            
int chose[16]={4,12,1,17,0,0,19,15,12,20,15,19,14,19,12,12};                           
int JesusFather[24]={20,15,19,14,19,12,4,19,12,5,12,10,0,0,3,12,23,5,7,17,15,11,12,12};                         
int JesusPeace[22]={20,15,19,14,19,12,4,19,12,5,12,26,6,18,27,12,7,11,14,15,12,12};
int blessedDay[24]={7,0,3,5,16,12,4,19,12,5,12,2,18,15,19,19,15,3,12,3,5,16,12,12};
int niceDay[20]={13,24,12,13,5,14,15,12,5,12,6,4,1,15,12,3,5,16,12,12};
int goodNigth[16]= {13,15,18,18,0,12,10,0,0,3,12,6,4,10,7,17};
int Hello[6]={13,15,18,18,0,12};
int godisGood[27]={10,0,3,12,4,19,12,10,0,0,3,12,5,18,18,12,7,17,15,12,7,4,8,22,15,12,12};

void setup() {
  //SISTEMA
    Wire.begin();
    Wire.setClock(400000);
    Serial.begin(115200);

    for (int i=0; i<4; i++){
      pinMode(pinA[i],OUTPUT);
    }
    for (int j=0; j<7; j++){
      pinMode(pinB[j],OUTPUT);
    }
    pinMode(LED_BUILTIN,OUTPUT);
    pinMode(botao,OUTPUT);
         
    
  //RTC  
    myRTC.setClockMode(modo);
    //myRTC.setHour(10); //acerta o relogio do DS3231
    //myRTC.setMinute(47);
    //myRTC.setSecond(0);
    int  hora=myRTC.getHour(h12, hpm);
    int  minuto=myRTC.getMinute();
    int  segundo=myRTC.getSecond();
    rtc.adjust(hora, minuto, segundo, 2025, 8,22);// sicroniza o rtc da pico



  //FASTLED
      FastLED.addLeds<WS2812B, Pino, GRB>(Halo, Leds).setCorrection(TypicalLEDStrip);
      FastLED.setBrightness(brilho);
      FastLED.clear();
      FastLED.show();
      Scheduler.startLoop(loop2);
    }

void loop() {
  
  tictac();
  texto=myRTC.getMinute()/10;
  position=0;
  while (myRTC.getMinute()%10==0 && myRTC.getSecond()<=32){
        switch (texto){
          case(0):
             displayMsg(20,niceDay);
          break;
          case(1):
            displayMsg(24,JesusFather);
          break;
          case(2):
            displayMsg(23,blessedDay);
          break;
          case(3):
            displayMsg(16,chose);
          break;
          case(4):
            displayMsg(26,godisGood);
          break;
          case(5):
            displayMsg(31,foundJesus);
          break;
        }
      }
  }     

void loop2(){
/*if(millis() - lastTime >= 1000) {
    rtc.read(); 
    PrintTime();
    lastTime = millis();
  }*/
  rtc.read();
  horapico=rtc.hour;
  
  if(horapico>=22){
      Solitario();
  } else if (horapico>=0 && horapico<=6){
      rtc.read();
      if (rtc.hour==6 && rtc.minute==5 && rtc.second==5){
          rtc.adjust(myRTC.getHour(h12, hpm), myRTC.getMinute(), myRTC.getSecond(), 2025, 4,22);
      }
      Solitario();
   }else if(horapico>=7 && horapico<=21){
      rtc.read();
          while(lvez==false){
            rtc.read();
            getseg2=rtc.second;
            if (getseg2<30){
              caso=1;
              lvez=true;
       
            } else {
              caso=2;
              lvez=true;
            }
          if(rtc.minute>=58){
            aux=0;
          } else{
            rtc.read();
            aux=rtc.minute;
          }
        }
        while(shortstar==true){
          for (int i=0; i<1000; i++){
            shootingStar(corShortStar);
          }
      
          if (corShortStar>2){
            corShortStar=0;
          }else {
            corShortStar=corShortStar+1;
          }
          shortstar=false;
          animacao=true;
        } 


        while (animacao==true){
          
          countM=rtc.minute/7;
                
          switch (countM){
            case(0):
              LigaTodos();
            break; 
            case(1):
              if(trocanima==false){
                FastLED.clear();
                FastLED.show();
                trocanima=true;
              }
              LigaDesliga();
            break;
            case(2):
              LigaRun();
            break;
            case(3):
              MaoDupla();
            break;
            case(4):
              confere=false;
              Pendolo();
            break;
            case(5):
              Circulando();
            break;
            case(6):
              Desbotando();
            break;
            case(7):
              chrome();
            break;
            case(8):
               Solitario();
            break;
          }
          rtc.read();
          if (rtc.minute%6==0){
            if  (rtc.second<=3){
              confere=false;
              animacao=false;
              shortstar=true;
            }
          }
          
        }
      }      
    yield();
  
}

/*void PrintTime()
{ 
  Serial.println(rtc.getTime("%A, %B %d %Y %H:%M:%S"));
}*/
