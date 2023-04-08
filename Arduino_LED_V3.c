#define NOMBRE_DE_BOUTONS 5
//commentaire
// Un tableau pour contenir les valeurs des broches des boutons
const int brochesBouton[NOMBRE_DE_BOUTONS] = {2, 3, 4, 5, 6};
// Un tableau pour contenir les numéros de broche des LED
const int brochesLED[NOMBRE_DE_BOUTONS] = {9, 10, 11, 12, 13};
// Définition d'une structure permettant de regrouper les variables concernant un bouton 
typedef struct Bouton {
  int estPresse, ledOn;
} Bouton;
// Un tableau de Bouton qui contient toutes les informations utiles sur un bouton
Bouton boutons[NOMBRE_DE_BOUTONS] = { 0 };
void setup() {
  // Parcours les boutons et leds et indique s'ils sont des entrées ou sorties
  for (int broche = 0; broche < NOMBRE_DE_BOUTONS; ++broche) {
    pinMode(brochesLED[broche], OUTPUT);
    pinMode(brochesBouton[broche], INPUT);
  }
}
void loop() {
  // On parcours tous nos boutons
  for (int indiceDuBouton = 0; indiceDuBouton < NOMBRE_DE_BOUTONS; ++indiceDuBouton) {
    // Si digitalRead retourne HIGH, l'état du bouton est appuyé, sinon non
    int etatActuel = HIGH == digitalRead(brochesBouton[indiceDuBouton]) ? 1 : 0;
    if (!boutons[indiceDuBouton].estPresse && etatActuel) {
      // Le bouton n'était pas pressé avant, mais il l'est maintenant, donc on change l'état de la LED
      boutons[indiceDuBouton].ledOn = !boutons[indiceDuBouton].ledOn;
      digitalWrite(brochesLED[indiceDuBouton], boutons[indiceDuBouton].ledOn ? HIGH : LOW );
      delay(500);
    }
    // Si l'état du bouton a changé, alors on change aussi notre état mémorisé du bouton
    boutons[indiceDuBouton].estPresse = boutons[indiceDuBouton].estPresse != etatActuel ? !boutons[indiceDuBouton].estPresse : boutons[indiceDuBouton].estPresse;
  }
}
