/*
Notes chart:
  C     C#     D     Eb   E     F     F#    G     G#    A     Bb    B
0 16.35 17.32 18.35 19.45 20.60 21.83 23.12 24.50 25.96 27.50 29.14 30.87
1 32.70 34.65 36.71 38.89 41.20 43.65 46.25 49.00 51.91 55.00 58.27 61.74
2 65.41 69.30 73.42 77.78 82.41 87.31 92.50 98.00 103.8 110.0 116.5 123.5
3 130.8 138.6 146.8 155.6 164.8 174.6 185.0 196.0 207.7 220.0 233.1 246.9
4 261.6 277.2 293.7 311.1 329.6 349.2 370.0 392.0 415.3 440.0 466.2 493.9
5 523.3 554.4 587.3 622.3 659.3 698.5 740.0 784.0 830.6 880.0 932.3 987.8
6 1047  1109  1175  1245  1319  1397  1480  1568  1661  1760  1865  1976
7 2093  2217  2349  2489  2637  2794  2960  3136  3322  3520  3729  3951
8 4186  4435  4699  4978  5274  5588  5920  6272  6645  7040  7459  7902
*/

#define NOTE_B0  31
#define NOTE_C1  33
#define NOTE_CS1 35
#define NOTE_D1  37
#define NOTE_DS1 39
#define NOTE_E1  41
#define NOTE_F1  44
#define NOTE_FS1 46
#define NOTE_G1  49
#define NOTE_GS1 52
#define NOTE_A1  55
#define NOTE_AS1 58
#define NOTE_B1  62
#define NOTE_C2  65
#define NOTE_CS2 69
#define NOTE_D2  73
#define NOTE_DS2 78
#define NOTE_E2  82
#define NOTE_F2  87
#define NOTE_FS2 93
#define NOTE_G2  98
#define NOTE_GS2 104
#define NOTE_A2  110
#define NOTE_AS2 117
#define NOTE_B2  123
#define NOTE_C3  131
#define NOTE_CS3 139
#define NOTE_D3  147
#define NOTE_DS3 156
#define NOTE_E3  165
#define NOTE_F3  175
#define NOTE_FS3 185
#define NOTE_G3  196
#define NOTE_GS3 208
#define NOTE_A3  220
#define NOTE_AS3 233
#define NOTE_B3  247
#define NOTE_C4  262
#define NOTE_CS4 277
#define NOTE_D4  294
#define NOTE_DS4 311
#define NOTE_E4  330
#define NOTE_F4  349
#define NOTE_FS4 370
#define NOTE_G4  392
#define NOTE_GS4 415
#define NOTE_A4  440
#define NOTE_AS4 466
#define NOTE_B4  494
#define NOTE_C5  523
#define NOTE_CS5 554
#define NOTE_D5  587
#define NOTE_DS5 622
#define NOTE_E5  659
#define NOTE_F5  698
#define NOTE_FS5 740
#define NOTE_G5  784
#define NOTE_GS5 831
#define NOTE_A5  880
#define NOTE_AS5 932
#define NOTE_B5  988
#define NOTE_C6  1047
#define NOTE_CS6 1109
#define NOTE_D6  1175
#define NOTE_DS6 1245
#define NOTE_E6  1319
#define NOTE_F6  1397
#define NOTE_FS6 1480
#define NOTE_G6  1568
#define NOTE_GS6 1661
#define NOTE_A6  1760
#define NOTE_AS6 1865
#define NOTE_B6  1976
#define NOTE_C7  2093
#define NOTE_CS7 2217
#define NOTE_D7  2349
#define NOTE_DS7 2489
#define NOTE_E7  2637
#define NOTE_F7  2794
#define NOTE_FS7 2960
#define NOTE_G7  3136
#define NOTE_GS7 3322
#define NOTE_A7  3520
#define NOTE_AS7 3729
#define NOTE_B7  3951
#define NOTE_C8  4186
#define NOTE_CS8 4435
#define NOTE_D8  4699
#define NOTE_DS8 4978
#define REST 0

int tempo = 80;
int buzzer = 13;

int melody[] = {

  //line 1
  NOTE_FS5, 2, NOTE_B4, 8, NOTE_CS5, 8, NOTE_D5, 8, NOTE_E5, 8, 
  NOTE_FS5, -4, NOTE_D5, 8, NOTE_FS5, -4, NOTE_D5, 8, 
  NOTE_FS5, -4, NOTE_B4, 8, NOTE_D5, 8, NOTE_B4, 8, NOTE_G4, 8, NOTE_D5, 8, 
  NOTE_B4, 2, REST, 8, NOTE_E5, 8, NOTE_D5, 8, NOTE_CS5, 8, 
  NOTE_FS5, 2, NOTE_B4, 8, NOTE_CS5, 8, NOTE_D5, 8, NOTE_E5, 8,
  NOTE_FS5, -4, NOTE_D5, 8, NOTE_FS5, -4, NOTE_D5, 8, 
  NOTE_FS5, -4, NOTE_B4, 8, NOTE_D5, 8, NOTE_B4, 8, NOTE_G4, 8, NOTE_D5, 8,

  //lines2-3 (wesley)
  NOTE_B4, -2, NOTE_B4, 4, 
  NOTE_CS5, 4, NOTE_D5, 4, NOTE_E5, 4, NOTE_FS5, 8, NOTE_G5, 8, 
  NOTE_A5, -4, NOTE_G5, 8, NOTE_FS5, 4, NOTE_G5, 8, NOTE_A5, 8, 
  NOTE_B5, -4, NOTE_A5, 8, NOTE_G5, 4, NOTE_A5, 8, NOTE_B5, 8, 
  NOTE_CS6, -4, NOTE_B5, 8, NOTE_FS5, 8, NOTE_D5, 8, NOTE_CS5, 8, NOTE_B4, 8, 
  NOTE_CS5, 4, NOTE_D5, 4, NOTE_E5, 4, NOTE_FS5, 8, NOTE_G5, 8, 
  NOTE_A5, -4, NOTE_G5, 8, NOTE_FS5, 4, NOTE_G5, 8, NOTE_A5, 8, 

  NOTE_B5, -4, NOTE_A5, 8, NOTE_G5, 4, NOTE_A5, 8, NOTE_B5, 8, 
  NOTE_C6, -4, NOTE_G5, 8, NOTE_E5, 4, NOTE_G5, 8, NOTE_C5, 8, 
  NOTE_CS6, -4, NOTE_GS5, 8, NOTE_CS6, -4, NOTE_FS5, 8, 
  NOTE_FS5, 2, NOTE_B4, 8, NOTE_CS5, 8, NOTE_D5, 8, NOTE_E5, 8, 
  NOTE_FS5, -4, NOTE_D5, 8, NOTE_FS5, -4, NOTE_D5, 8, 
  NOTE_FS5, -4, NOTE_B4, 8, NOTE_D5, 8, NOTE_B4, 8, NOTE_G4, 8, NOTE_D5, 8, 
  NOTE_B4, 2, REST, 8, NOTE_E5, 8, NOTE_D5, 8, NOTE_CS5, 8,

  //lines 4-5 (monse)
 //MONSE starting code
 NOTE_FS5, 2, NOTE_B4, 8, NOTE_CS5, 8, NOTE_D5, 8, NOTE_E5, 8,
 NOTE_FS5, -4, NOTE_D5, 8, NOTE_FS5, -4, NOTE_D5, 8,
 NOTE_FS5, -4, NOTE_B4, 8, NOTE_D5, 8, NOTE_B4, 8, NOTE_G4, 8, NOTE_D5, 8,  
 NOTE_BS4, -2, NOTE_B4, 4,
 NOTE_CS5, 4, NOTE_D5, 4, NOTE_E5, 4, NOTE_FS5, 8, NOTE_G5, 8, 
 NOTE_A5, -4, NOTE_G5, 8, NOTE_FS5, 4, NOTE_G5, 8, NOTE_A5, 8, 
 NOTE_B5, -4, NOTE_A5, 8, NOTE_G5, 4, NOTE_A5, 8, NOTE_B5, 8, 

 NOTE_CS6, -4, NOTE_B5, 8, NOTE_FS5, 8, NOTE_D5, 8, NOTE_CS5, 8, NOTE_B4, 8,
 NOTE_CS5, 4, NOTE_D5, 4, NOTE_E5, 4, NOTE_FS5, 8, NOTE_G5, 8, 
 NOTE_A5, -4, NOTE_G5, 8, NOTE_FS5, 4, NOTE_G5, 8, NOTE_A5, 8, 
 NOTE_B5, -4, NOTE_A5, 8, NOTE_G5, 4, NOTE_A5, 8, NOTE_B5, 8, 
 NOTE_C5, 8, NOTE_G5, 8, NOTE_CS5, 8, NOTE_B5, 4, NOTE_B5, 8,
 NOTE_AS5, 8, NOTE_F5, 8, NOTE_AS5, 8, NOTE_B5, 4, NOTE_B5, 8,
  //lines 6-7 (abhi)
  // Abhi starting code :) 
    NOTE_C5, 8, NOTE_G5, 8, NOTE_CS5, 8, NOTE_B5, 4, NOTE_B5, 8, 
    NOTE_AS5, 8, NOTE_F5, 8, NOTE_AS5, 8, NOTE_B5, 4, NOTE_B5, 8,  
    NOTE_C5, 8, NOTE_G5, 8, NOTE_CS5, 8, NOTE_CS5, 8, NOTE_G5, 8, NOTE_CS5, 8, 
    NOTE_G5, -4, NOTE_FS5, 4, NOTE_FS5, 8, 
    NOTE_CS5, 8, NOTE_G5, 8, NOTE_CS5, 8, NOTE_CS5,8, NOTE_G5, 8, NOTE_CS5, 8, 
    NOTE_G5, -4, NOTE_FS5, 4, NOTE_FS5, 8, 
    NOTE_C5, 8, NOTE_G5, 8, NOTE_CS5, 8, NOTE_CS5, 8, NOTE_G5, 8, NOTE_CS5, 8, 
    NOTE_CS5, -4, NOTE_CS5, 4, NOTE_CS5, 8, 
    NOTE_D5, 8, NOTE_AS5, -8, NOTE_D5, 8, NOTE_D5, 8, NOTE_AS5, 8, NOTE_D5, 8,  
    NOTE_D5, -4, NOTE_D5, 4, NOTE_CS5, 8, 
    NOTE_D5, 4, NOTE_CS5, 8, NOTE_D5, 4, NOTE_CS5, 8, 
    NOTE_FS5, 8, NOTE_E5, 8, NOTE_CS5, 8, NOTE_AS5, 8, NOTE_FS5, 8, NOTE_E5, 8, NOTE_CS5, 8, NOTE_AS4, 8 

  //lines 8-9 (jose)

};

int notes = sizeof(melody) / sizeof(melody[0]) / 2;

int wholenote = (60000 * 4) / tempo;
int divider = 0, noteDuration = 0;

void setup() {
  
  for (int thisNote = 0; thisNote < notes * 2; thisNote = thisNote + 2) {

    divider = melody[thisNote + 1];
    if (divider > 0) {

      noteDuration = (wholenote) / divider;
    } else if (divider < 0) {
      noteDuration = (wholenote) / abs(divider);
      noteDuration *= 1.5; 
    }

    tone(buzzer, melody[thisNote], noteDuration*0.9);

    delay(noteDuration);
    
    noTone(buzzer);
  }
}


void loop() {

}


