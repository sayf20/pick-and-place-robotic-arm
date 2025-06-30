/*
       Bras Robotique Arduino
       Contrôlé par Smartphone et application créée avec "App Inventor"
       by Saifeddine Mosrati
*/

#include <SoftwareSerial.h>
#include <Servo.h>

Servo servo01;
Servo servo02;
Servo servo03;
Servo servo04;
Servo servo05;
Servo servo06;

SoftwareSerial Bluetooth(3, 4);  // Broches auxquelles le module Bluetooth est connecté (3,4)


int servo1Pos, servo2Pos, servo3Pos, servo4Pos, servo5Pos, servo6Pos;                          // Position actuelle
int servo1PPos, servo2PPos, servo3PPos, servo4PPos, servo5PPos, servo6PPos;                    // Position précédente (PP)
int servo01SP[50], servo02SP[50], servo03SP[50], servo04SP[50], servo05SP[50], servo06SP[50];  // pour sauvegarder les positions
int velocita = 20;
int IndiceArray = 0;
int DatiInEntrata;
int m = 0;

void setup() {
  servo01.attach(5);
  servo02.attach(6);
  servo03.attach(7);
  servo04.attach(8);
  servo05.attach(9);
  servo06.attach(10);
  Bluetooth.begin(9600);  // Baud rate pour le module Bluetooth
  Bluetooth.setTimeout(5);
  delay(20);
  Serial.begin(9600);

  // Déplace tous les servos à mi-course
  servo1PPos = 90;
  servo01.write(servo1PPos);
  servo2PPos = 90;
  servo02.write(servo2PPos);
  servo3PPos = 90;
  servo03.write(servo3PPos);
  servo4PPos = 90;
  servo04.write(servo4PPos);
  servo5PPos = 90;
  servo05.write(servo5PPos);
  servo6PPos = 90;
  servo06.write(servo6PPos);
}

void loop() {
  // Contrôle les données entrantes
  if (Bluetooth.available() > 0) {
    DatiInEntrata = Bluetooth.read();  // Lit les données entrantes

    if (DatiInEntrata == 0) {
      m = 0;
    }
    if (DatiInEntrata == 1) {
      m = 1;
    }
    if (DatiInEntrata == 2) {
      m = 2;
    }
    if (DatiInEntrata == 3) {
      m = 3;
    }
    if (DatiInEntrata == 4) {
      m = 4;
    }
    if (DatiInEntrata == 5) {
      m = 5;
    }
    if (DatiInEntrata == 6) {
      m = 6;
    }
    if (DatiInEntrata == 7) {
      m = 7;
    }
    if (DatiInEntrata == 8) {
      m = 8;
    }
    if (DatiInEntrata == 9) {
      m = 9;
    }
    if (DatiInEntrata == 10) {
      m = 10;
    }
    if (DatiInEntrata == 11) {
      m = 11;
    }
    if (DatiInEntrata == 12) {
      m = 12;
    }
    if (DatiInEntrata == 14) {
      m = 14;
    }
    if (DatiInEntrata == 16) {
      m = 16;
    }
    if (DatiInEntrata == 17) {
      m = 17;
    }
    if (DatiInEntrata == 18) {
      m = 18;
    }
    if (DatiInEntrata == 19) {
      m = 19;
    }
    if (DatiInEntrata == 20) {
      m = 20;
    }
    if (DatiInEntrata == 21) {
      m = 21;
    }
    if (DatiInEntrata == 22) {
      m = 22;
    }
    if (DatiInEntrata == 23) {
      m = 23;
    }
    if (DatiInEntrata == 24) {
      m = 24;
    }
    if (DatiInEntrata == 25) {
      m = 25;
    }
    if (DatiInEntrata == 26) {
      m = 26;
    }
    if (DatiInEntrata == 27) {
      m = 27;
    }

    // Mouvement du bras robotique en direct :

    // Tourner le Servo 1 dans le sens horaire
    while (m == 16) {
      if (Bluetooth.available() > 0) {
        m = Bluetooth.read();
      }
      servo01.write(servo1PPos);
      servo1PPos++;
      delay(velocita);
    }
    // Tourner le Servo 2 dans le sens antihoraire
    while (m == 17) {
      if (Bluetooth.available() > 0) {
        m = Bluetooth.read();
      }
      servo01.write(servo1PPos);
      servo1PPos--;
      delay(velocita);
    }

    // Mouvement du Servo2
    while (m == 19) {
      if (Bluetooth.available() > 0) {
        m = Bluetooth.read();
      }
      servo02.write(servo2PPos);
      servo2PPos++;
      delay(velocita);
    }
    while (m == 18) {
      if (Bluetooth.available() > 0) {
        m = Bluetooth.read();
      }
      servo02.write(servo2PPos);
      servo2PPos--;
      delay(velocita);
    }

    // Mouvement du Servo3
    while (m == 20) {
      if (Bluetooth.available() > 0) {
        m = Bluetooth.read();
      }
      servo03.write(servo3PPos);
      servo3PPos++;
      delay(velocita);
    }
    while (m == 21) {
      if (Bluetooth.available() > 0) {
        m = Bluetooth.read();
      }
      servo03.write(servo3PPos);
      servo3PPos--;
      delay(velocita);
    }

    //  Mouvement du Servo4
    while (m == 23) {
      if (Bluetooth.available() > 0) {
        m = Bluetooth.read();
      }
      servo04.write(servo4PPos);
      servo4PPos++;
      delay(velocita);
    }
    while (m == 22) {
      if (Bluetooth.available() > 0) {
        m = Bluetooth.read();
      }
      servo04.write(servo4PPos);
      servo4PPos--;
      delay(velocita);
    }

    // Mouvement du Servo5
    while (m == 25) {
      if (Bluetooth.available() > 0) {
        m = Bluetooth.read();
      }
      servo05.write(servo5PPos);
      servo5PPos++;
      delay(velocita);
    }
    while (m == 24) {
      if (Bluetooth.available() > 0) {
        m = Bluetooth.read();
      }
      servo05.write(servo5PPos);
      servo5PPos--;
      delay(velocita);
    }

    // Mouvement du Servo6
    while (m == 26) {
      if (Bluetooth.available() > 0) {
        m = Bluetooth.read();
      }
      servo06.write(servo6PPos);
      servo6PPos++;
      delay(velocita);
    }
    while (m == 27) {
      if (Bluetooth.available() > 0) {
        m = Bluetooth.read();
      }
      servo06.write(servo6PPos);
      servo6PPos--;
      delay(velocita);
    }

    // Si le curseur de vitesse a changé...
    if (DatiInEntrata > 101 & DatiInEntrata < 250) {
      velocita = DatiInEntrata / 10;  // Change la vitesse du servo (délai entre les étapes)
    }

    // Si le bouton SAUVEGARDE de l'application est pressé...
    if (m == 12) {
      servo01SP[IndiceArray] = servo1PPos;  // Sauvegarde la position des servos dans les tableaux
      servo02SP[IndiceArray] = servo2PPos;
      servo03SP[IndiceArray] = servo3PPos;
      servo04SP[IndiceArray] = servo4PPos;
      servo05SP[IndiceArray] = servo5PPos;
      servo06SP[IndiceArray] = servo6PPos;
      IndiceArray++;  // Incrémente l'indice du tableau
      m = 0;
    }

    // Si le bouton DÉMARRER est pressé
    if (m == 14) {
      runSteps(); //Lance la fonction "runSteps" qui exécute les étapes en séquence

      // Si le bouton "RESET" a été pressé...
      if (DatiInEntrata != 14) {
        memset(servo01SP, 0, sizeof(servo01SP));  // Vide les données du tableau
        memset(servo02SP, 0, sizeof(servo02SP));
        memset(servo03SP, 0, sizeof(servo03SP));
        memset(servo04SP, 0, sizeof(servo04SP));
        memset(servo05SP, 0, sizeof(servo05SP));
        memset(servo06SP, 0, sizeof(servo06SP));
        IndiceArray = 0;  // Indice à 0
      }
    }
  }
}

// Fonction dédiée (et séparée) pour exécuter les étapes automatiquement
void runSteps() {
  while (DatiInEntrata != 13) {                    // Exécute les étapes l'une après l'autre jusqu'à ce que le bouton "RESET" soit pressé
    for (int i = 0; i <= IndiceArray - 2; i++) {  // Boucle for pour répéter autant de fois qu'il y a de positions sauvegardées
      if (Bluetooth.available() > 0) {      // Contrôle les données entrantes
        DatiInEntrata = Bluetooth.read();
        if (DatiInEntrata == 15) {       // Si le bouton "PAUSE" est pressé...
          while (DatiInEntrata != 14) {  // Attend que le bouton "DÉMARRER" soit pressé à nouveau
            if (Bluetooth.available() > 0) {
              DatiInEntrata = Bluetooth.read();
              if (DatiInEntrata == 13) {
                break;
              }
            }
          }
        }
        // Si la position du curseur "vitesse" a changé...
        if (DatiInEntrata > 100 & DatiInEntrata < 150) {
          velocita = DatiInEntrata / 10;  // Change la vitesse des servos (délai entre chaque étape)
        }
      }

      // Mouvement du Servo 1
      if (servo01SP[i] == servo01SP[i + 1]) {
      }
      if (servo01SP[i] > servo01SP[i + 1]) {
        for (int j = servo01SP[i]; j >= servo01SP[i + 1]; j--) {
          servo01.write(j);
          delay(velocita);
        }
      }
      if (servo01SP[i] < servo01SP[i + 1]) {
        for (int j = servo01SP[i]; j <= servo01SP[i + 1]; j++) {
          servo01.write(j);
          delay(velocita);
        }
      }

      // Mouvement du Servo2
      if (servo02SP[i] == servo02SP[i + 1]) {
      }
      if (servo02SP[i] > servo02SP[i + 1]) {
        for (int j = servo02SP[i]; j >= servo02SP[i + 1]; j--) {
          servo02.write(j);
          delay(velocita);
        }
      }
      if (servo02SP[i] < servo02SP[i + 1]) {
        for (int j = servo02SP[i]; j <= servo02SP[i + 1]; j++) {
          servo02.write(j);
          delay(velocita);
        }
      }

      // Mouvement du Servo3
      if (servo03SP[i] == servo03SP[i + 1]) {
      }
      if (servo03SP[i] > servo03SP[i + 1]) {
        for (int j = servo03SP[i]; j >= servo03SP[i + 1]; j--) {
          servo03.write(j);
          delay(velocita);
        }
      }
      if (servo03SP[i] < servo03SP[i + 1]) {
        for (int j = servo03SP[i]; j <= servo03SP[i + 1]; j++) {
          servo03.write(j);
          delay(velocita);
        }
      }

      // Mouvement du Servo4
      if (servo04SP[i] == servo04SP[i + 1]) {
      }
      if (servo04SP[i] > servo04SP[i + 1]) {
        for (int j = servo04SP[i]; j >= servo04SP[i + 1]; j--) {
          servo04.write(j);
          delay(velocita);
        }
      }
      if (servo04SP[i] < servo04SP[i + 1]) {
        for (int j = servo04SP[i]; j <= servo04SP[i + 1]; j++) {
          servo04.write(j);
          delay(velocita);
        }
      }

      // Mouvement du Servo5
      if (servo05SP[i] == servo05SP[i + 1]) {
      }
      if (servo05SP[i] > servo05SP[i + 1]) {
        for (int j = servo05SP[i]; j >= servo05SP[i + 1]; j--) {
          servo05.write(j);
          delay(velocita);
        }
      }
      if (servo05SP[i] < servo05SP[i + 1]) {
        for (int j = servo05SP[i]; j <= servo05SP[i + 1]; j++) {
          servo05.write(j);
          delay(velocita);
        }
      }

      // Mouvement du Servo6
      if (servo06SP[i] == servo06SP[i + 1]) {
      }
      if (servo06SP[i] > servo06SP[i + 1]) {
        for (int j = servo06SP[i]; j >= servo06SP[i + 1]; j--) {
          servo06.write(j);
          delay(velocita);
        }
      }
      if (servo06SP[i] < servo06SP[i + 1]) {
        for (int j = servo06SP[i]; j <= servo06SP[i + 1]; j++) {
          servo06.write(j);
          delay(velocita);
        }
      }
    }
  }
}
