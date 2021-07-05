
// Initialisation des constantes :
// Numéro de la broche où est connecté le bouton poussoir
const int bouton1 = 2;      
const int bouton2 = 3;     
const int bouton3 = 4;     
const int bouton4 = 5;     
const int bouton5 = 6;     

// Numéro de la broche où est connectée la LED
const int ledRouge =  9;        
const int ledJaune =  10;       
const int ledVerte =  11;       
const int ledBleu =  12;        
const int ledBlanche =  13;     
     

// Déclaration des variables :
// variables stocker l'état des boutons 
int etatBouton1 = 0;          
int etatBouton2 = 0;         
int etatBouton3 = 0;         
int etatBouton4 = 0;
int etatBouton5 = 0;
int button1Pressed = 0;		
int light1On = 0;
int button2Pressed = 0;		
int light2On = 0;
int button3Pressed = 0;		
int light3On = 0;
int button4Pressed = 0;		
int light4On = 0;
int button5Pressed = 0;		
int light5On = 0;


void setup() {
  
  // indique que les broches des leds sont des sorties :
  pinMode(ledRouge, OUTPUT);
  pinMode(ledJaune, OUTPUT);      
  pinMode(ledVerte, OUTPUT);
  pinMode(ledBleu, OUTPUT);      
  pinMode(ledBlanche, OUTPUT);
  // indique que les broches des boutons sont une entrée :
  pinMode(bouton1, INPUT);     
  pinMode(bouton2, INPUT);     
  pinMode(bouton3, INPUT);
  pinMode(bouton4, INPUT);     
  pinMode(bouton5, INPUT);
}


void loop(){

  etatBouton1 = digitalRead(bouton1);
  etatBouton2 = digitalRead(bouton2);
  etatBouton3 = digitalRead(bouton3);
  etatBouton4 = digitalRead(bouton4);
  etatBouton5 = digitalRead(bouton5);
  
  
  //Bouton1
  int tempButton1Pressed = 0;
  if (etatBouton1 == HIGH) {
    
    // Le Bouton1 est pressé
    tempButton1Pressed = 1;
  }
  if (!button1Pressed && tempButton1Pressed) {
    
    // Si le bouton n'est pas pressé pas besoin de changer l'état de la led
    light1On = !light1On;
    digitalWrite(ledRouge, light1On ? HIGH : LOW); 
  }
  if (button1Pressed != tempButton1Pressed) {
    
    // L'état du bouton change 
    button1Pressed = !button1Pressed;
  }
  
  
  //Bouton2
  int tempButton2Pressed = 0;
  if (etatBouton2 == HIGH) {
    
    // Le Bouton2 est pressé
    tempButton2Pressed = 1;
  }
  if (!button2Pressed && tempButton2Pressed) {
    
    // Si le bouton n'est pas pressé pas besoin de changer l'état de la led
    light2On = !light2On;
    digitalWrite(ledJaune, light2On ? HIGH : LOW); 
  }
  if (button2Pressed != tempButton2Pressed) {
    
    // L'état du bouton change
    button2Pressed = !button2Pressed;
  }
  
  
  //Bouton3
  int tempButton3Pressed = 0;
  if (etatBouton3 == HIGH) {
    
    // Le Bouton3 est pressé
    tempButton3Pressed = 1;
  }
  if (!button3Pressed && tempButton3Pressed) {
    
    // Si le bouton n'est pas pressé pas besoin de changer l'état de la led
    light3On = !light3On;
    digitalWrite(ledVerte, light3On ? HIGH : LOW); 
  }
  if (button3Pressed != tempButton3Pressed) {
    
    // L'état du bouton change
    button3Pressed = !button3Pressed;
  }
  
  
  //Bouton4
  int tempButton4Pressed = 0;
  if (etatBouton4 == HIGH) {
    
    // Le Bouton4 est pressé
    tempButton4Pressed = 1;
  }
  if (!button4Pressed && tempButton4Pressed) {
    
    // Si le bouton n'est pas pressé pas besoin de changer l'état de la led
    light4On = !light4On;
    digitalWrite(ledBleu, light4On ? HIGH : LOW); 
  }
  if (button4Pressed != tempButton4Pressed) {
    
    // L'état du bouton change
    button4Pressed = !button4Pressed;
  }
  
  
  //Bouton5
  int tempButton5Pressed = 0;
  if (etatBouton5 == HIGH) {
    
    // Le Bouton5 est pressé
    tempButton5Pressed = 1;
  }
  if (!button5Pressed && tempButton5Pressed) {
    // Si le bouton n'est pas pressé pas besoin de changer l'état de la led
    light5On = !light5On;
    digitalWrite(ledBlanche, light5On ? HIGH : LOW); // Turn off green light
  }
  if (button5Pressed != tempButton5Pressed) {
    // L'état du bouton change
    button5Pressed = !button5Pressed;
  }
}
