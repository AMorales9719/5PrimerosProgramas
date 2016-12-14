/****************************************************************
**                                                             **
**                          TÏTOL: LedPotènciomete             **
**          Posar un nom representatiu del programa            **
**                                                             **
** NOM: Andrés Ricardo Morales Bacilio        DATA:14/12/2016  **
****************************************************************/
//********************** INCLUDE ********************************


//********************* VARIABLES *******************************

int sensorValue = 0;

//*********************** SETUP *********************************

void setup(){               
pinMode(3, OUTPUT);
}
//************************ LOOP *********************************
void loop() {
  sensorValue = analogRead(A0);
  analogWrite(3, sensorValue/4);
 
}

//****************** FUNCIONS ***********************************


