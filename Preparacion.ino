void preparar( int tiempo){
Serial.println(F("#0 P2000 T300"));//a
  Serial.println(F("#1 P1900 T300"));//b
  Serial.println(F("#2 P1800 T300"));//c


  //PATA 2
  Serial.println(F("#4 P2000 T300"));//a
  Serial.println(F("#5 P2300 T300"));//b
  Serial.println(F("#6 P1500 T300"));//c

  //PATA 1
  Serial.println(F("#8 P2000 T300"));//a
  Serial.println(F("#9 P1900 T300"));//b
  Serial.println(F("#10 P1100 T300"));//c


  //MITAD IZQ
  //PATA 6
  Serial.println(F("#16 P1000 T300"));//a
  Serial.println(F("#17 P1000 T300"));//b
  Serial.println(F("#18 P1900 T300"));//c

  //PATA 5
  Serial.println(F("#20 P900 T300"));//a
  Serial.println(F("#21 P1050 T300"));//b
  Serial.println(F("#22 P1500 T300"));//c

  //PATA 4
  Serial.println(F("#24 P1000 T300"));//a
  Serial.println(F("#25 P1100 T300"));//b
  Serial.println(F("#26 P1200 T300"));//c
  
  delay(tiempo);
}

