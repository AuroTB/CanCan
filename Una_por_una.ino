void levantapatas(){
  Serial.println(F("#16 P600 T100"));
  Serial.println(F("#17 P2100 T100"));
  Serial.println(F("#1 P900 T100"));
  Serial.println(F("#0 P2200 T100"));
  delay(300);

  Serial.println(F("#16 P1300 T100"));
  Serial.println(F("#17 P1350 T100"));
  Serial.println(F("#0 P1700 T100"));//a
  Serial.println(F("#1 P1650 T100"));//b
  delay(500);

  Serial.println(F("#24 P600 T100"));
  Serial.println(F("#25 P2100 T100"));
  Serial.println(F("#9 P800 T100"));
  Serial.println(F("#8 P2200 T100"));
  delay(300);
  
  Serial.println(F("#24 P1300 T100"));//a
  Serial.println(F("#25 P1300 T100"));//b
  Serial.println(F("#8 P1700 T100"));//a
  Serial.println(F("#9 P1530 T100"));//b
  delay(500);
}

void levantareversa(){
  Serial.println(F("#24 P600 T100"));
  Serial.println(F("#25 P2100 T100"));
  Serial.println(F("#9 P800 T100"));
  Serial.println(F("#8 P2200 T100"));
  delay(300);
  
  Serial.println(F("#24 P1300 T100"));//a
  Serial.println(F("#25 P1300 T100"));//b
  Serial.println(F("#8 P1700 T100"));//a
  Serial.println(F("#9 P1530 T100"));//b
  delay(500);

  Serial.println(F("#16 P600 T100"));
  Serial.println(F("#17 P2100 T100"));
  Serial.println(F("#1 P900 T100"));
  Serial.println(F("#0 P2200 T100"));
  delay(300);

  Serial.println(F("#16 P1300 T100"));
  Serial.println(F("#17 P1350 T100"));
  Serial.println(F("#0 P1700 T100"));//a
  Serial.println(F("#1 P1650 T100"));//b
  delay(500);
}

void cuatropatas(){
  Serial.println(F("#16 P600 T100"));
  Serial.println(F("#17 P2100 T100"));
  delay(100);
  Serial.println(F("#16 P1300 T100"));
  Serial.println(F("#17 P1350 T100"));
  delay(300);

  Serial.println(F("#24 P600 T100"));
  Serial.println(F("#25 P2100 T100"));
  delay(100);
  Serial.println(F("#24 P1300 T100"));//a
  Serial.println(F("#25 P1300 T100"));//b
  delay(300);
  
  Serial.println(F("#1 P900 T100"));
  Serial.println(F("#0 P2200 T100"));
  delay(100);
  Serial.println(F("#0 P1700 T100"));//a
  Serial.println(F("#1 P1650 T100"));//b
  delay(300);

  Serial.println(F("#9 P800 T100"));
  Serial.println(F("#8 P2200 T100"));
  delay(100);
  Serial.println(F("#8 P1700 T100"));//a
  Serial.println(F("#9 P1530 T100"));//b
  delay(300);
}

void reversacuatro(){
  Serial.println(F("#9 P800 T100"));
  Serial.println(F("#8 P2200 T100"));
  delay(100);
  Serial.println(F("#8 P1700 T100"));//a
  Serial.println(F("#9 P1530 T100"));//b
  delay(300);

  Serial.println(F("#1 P900 T100"));
  Serial.println(F("#0 P2200 T100"));
  delay(100);
  Serial.println(F("#0 P1700 T100"));//a
  Serial.println(F("#1 P1650 T100"));//b
  delay(300);

  Serial.println(F("#24 P600 T100"));
  Serial.println(F("#25 P2100 T100"));
  delay(100);
  Serial.println(F("#24 P1300 T100"));//a
  Serial.println(F("#25 P1300 T100"));//b
  delay(300);

  Serial.println(F("#16 P600 T100"));
  Serial.println(F("#17 P2100 T100"));
  delay(100);
  Serial.println(F("#16 P1300 T100"));
  Serial.println(F("#17 P1350 T100"));
  delay(300);
}

