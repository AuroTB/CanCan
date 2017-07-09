void giro(){
  Serial.println(F("#26 P2000 T300"));
  Serial.println(F("#6 P2000 T300"));
  Serial.println(F("#18 P2200 T300"));
  Serial.println(F("#2 P2200 T300"));
  Serial.println(F("#22 P2000 T300"));
  Serial.println(F("#10 P2000 T300"));
  
  Serial.println(F("#24 P1200 T300")); //<1300
  Serial.println(F("#20 P1200 T300"));
  Serial.println(F("#16 P1200 T300"));
  
  Serial.println(F("#8 P1800 T300"));  //>1700
  Serial.println(F("#4 P1800 T300"));
  Serial.println(F("#0 P1800 T300"));

  delay(500);
  //1 y 4
  Serial.println(F("#26 P1200 T300"));//c
  Serial.println(F("#25 P2000 T300"));
  Serial.println(F("#24 P1900 T300"));
  Serial.println(F("#10 P1100 T300"));//c
  Serial.println(F("#9 P900 T300"));
  Serial.println(F("#8 P1000 T300"));
  delay(500);
  Serial.println(F("#8 P1700 T300"));//a
  Serial.println(F("#9 P1500 T300"));//b
  Serial.println(F("#24 P1300 T300"));//a
  Serial.println(F("#25 P1370 T300"));//b

  //3 y 6
  delay(500);
  //2 y 5
  Serial.println(F("#21 P2000 T300"));
  Serial.println(F("#20 P2000 T300"));
  Serial.println(F("#5 P1350 T300"));
  Serial.println(F("#4 P1100 T300"));
  Serial.println(F("#22 P1500 T300"));//c
  Serial.println(F("#6 P1500 T300"));//c
  
  delay(500);
  Serial.println(F("#4 P1700 T300"));//a
  Serial.println(F("#5 P2000 T300"));//b
  Serial.println(F("#20 P1300 T300"));//a
  Serial.println(F("#21 P1350 T300"));//b

  delay(500);

  Serial.println(F("#17 P2000 T300"));
  Serial.println(F("#16 P1900 T300"));
  Serial.println(F("#1 P1000 T300"));
  Serial.println(F("#0 P1000 T300"));
  Serial.println(F("#18 P1900 T300"));//c
  Serial.println(F("#2 P1800 T300"));//c
  
  delay(500);
  Serial.println(F("#0 P1700 T300"));//a
  Serial.println(F("#1 P1650 T300"));//b
  Serial.println(F("#16 P1300 T300"));//a
  Serial.println(F("#17 P1350 T300"));//b

  delay(500);
}

