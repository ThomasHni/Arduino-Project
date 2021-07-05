/*

 Déclencher l'allumage de 3 LED à l'aide de 3 interrupteurs
 Apprentissage du binaire en observant le nombre de combinaisons possibles
 
 */

// Initialisation des constantes :
const int bouton1 = 4;     // Numéro de la broche à laquelle est connecté le bouton poussoir 1
const int bouton2 = 3;     // Numéro de la broche à laquelle est connecté le bouton poussoir 2
const int bouton3 = 2;     // Numéro de la broche à laquelle est connecté le bouton poussoir 3

const int ledVerte =  13;      // Numéro de la broche à laquelle est connectée la LED verte
const int ledJaune =  12;      // Numéro de la broche à laquelle est connectée la LED jaune
const int ledRouge =  11;      // Numéro de la broche à laquelle est connectée la LED rouge

// Déclaration des variables :
int etatBouton1 = 0;         // variable qui sera utilisée pour stocker l'état du bouton 1
int etatBouton2 = 0;         // variable qui sera utilisée pour stocker l'état du bouton 2
int etatBouton3 = 0;         // variable qui sera utilisée pour stocker l'état du bouton 3
int button1Pressed = 0;		
int light1On = 0;
int button2Pressed = 0;		
int light2On = 0;
int button3Pressed = 0;		
int light3On = 0;



// le code dans cette fonction est exécuté une fois au début
void setup() {
  // indique que la broche ledVerte, ledJaune et ledRouge sont des sorties :
  pinMode(ledVerte, OUTPUT);
  pinMode(ledJaune, OUTPUT);      
  pinMode(ledRouge, OUTPUT);        
  // indique que la broche bouton est une entrée :
  pinMode(bouton1, INPUT);     
  pinMode(bouton2, INPUT);     
  pinMode(bouton3, INPUT);     
}

// le code dans cette fonction est exécuté en boucle
void loop(){
  // lit l'état du bouton et stocke le résultat dans etatBouton
  etatBouton1 = digitalRead(bouton1);
  etatBouton2 = digitalRead(bouton2);
  etatBouton3 = digitalRead(bouton3);
  //Bouton1
  int tempButton1Pressed = 0;
  if (etatBouton1 == HIGH) {
    // The button 1 is pressed
    tempButton1Pressed = 1;
  }
  if (!button1Pressed && tempButton1Pressed) {
    // The button wasn't pressed, but now it is. It means we need to switch the state of the light
    light1On = !light1On;
    digitalWrite(ledVerte, light1On ? HIGH : LOW); // Turn off green light
  }
  if (button1Pressed != tempButton1Pressed) {
    // The state of the button just changed, so we sweep the value
    button1Pressed = !button1Pressed;
  }
  //Bouton2
  int tempButton2Pressed = 0;
  if (etatBouton2 == HIGH) {
    // The button 2 is pressed
    tempButton2Pressed = 1;
  }
  if (!button2Pressed && tempButton2Pressed) {
    // The button wasn't pressed, but now it is. It means we need to switch the state of the light
    light2On = !light2On;
    digitalWrite(ledJaune, light2On ? HIGH : LOW); 
  }
  if (button2Pressed != tempButton2Pressed) {
    // The state of the button just changed, so we sweep the value
    button2Pressed = !button2Pressed;
  }
  //Bouton3
  int tempButton3Pressed = 0;
  if (etatBouton3 == HIGH) {
    // The button 3 is pressed
    tempButton3Pressed = 1;
  }
  if (!button3Pressed && tempButton3Pressed) {
    // The button wasn't pressed, but now it is. It means we need to switch the state of the light
    light3On = !light3On;
    digitalWrite(ledRouge, light3On ? HIGH : LOW); 
  }
  if (button3Pressed != tempButton3Pressed) {
    // The state of the button just changed, so we sweep the value
    button3Pressed = !button3Pressed;
  }
 
}
