void primercan(){
  Serial.println(F("#17 P2000 T100"));
  Serial.println(F("#16 P1900 T100"));
  Serial.println(F("#5 P1350 T100"));
  Serial.println(F("#4 P1100 T100"));
  Serial.println(F("#25 P2000 T100"));
  Serial.println(F("#24 P1900 T100"));
  delay(350);
  
  Serial.println(F("#17 P1350 T100"));
  Serial.println(F("#16 P1350 T100"));
  Serial.println(F("#4 P1700 T100"));
  Serial.println(F("#5 P2000 T100"));
  Serial.println(F("#24 P1350 T100"));
  Serial.println(F("#25 P1350 T100"));
  delay(350);
  
  Serial.println(F("#16 P600 T100"));
  Serial.println(F("#17 P2100 T100"));
  Serial.println(F("#18 P600 T100"));
  
  Serial.println(F("#4 P2000 T100"));
  Serial.println(F("#5 P600 T100"));
  Serial.println(F("#6 P200 T100"));
  
  Serial.println(F("#24 P600 T100"));
  Serial.println(F("#25 P2100 T100"));
  Serial.println(F("#26 P350 T100"));
  delay(350);
  
  Serial.println(F("#16 P1350 T100"));
  Serial.println(F("#17 P1350 T100"));
  Serial.println(F("#18 P1900 T100"));
  Serial.println(F("#4 P1700 T100"));//a
  Serial.println(F("#5 P2000 T100"));//b
  Serial.println(F("#6 P1350 T100"));//c
  Serial.println(F("#24 P1350 T100"));//a
  Serial.println(F("#25 P1350 T100"));//b
  Serial.println(F("#26 P1200 T100"));//c
  delay(350);
}



void segundocan(){
    //primer movimiento
  Serial.println(F("#9 P900 T100"));
  Serial.println(F("#8 P1000 T100"));
  Serial.println(F("#1 P1000 T100"));
  Serial.println(F("#0 P1000 T100"));
  Serial.println(F("#21 P2000 T100"));
  Serial.println(F("#20 P2000 T100"));
  delay(350);
  //regresa a su posición
  Serial.println(F("#0 P1700 T100"));//a
  Serial.println(F("#1 P1650 T100"));//b
  Serial.println(F("#8 P1700 T100"));//a
  Serial.println(F("#9 P1530 T100"));//b
  Serial.println(F("#20 P1350 T100"));//a
  Serial.println(F("#21 P1350 T100"));//b
  delay(350);
  
  //segundo movimiento
  Serial.println(F("#10 P2100 T100"));
  Serial.println(F("#9 P800 T100"));
  Serial.println(F("#8 P2200 T100"));
  Serial.println(F("#2 P2200 T100"));
  Serial.println(F("#1 P900 T100"));
  Serial.println(F("#0 P2200 T100"));
  Serial.println(F("#22 P2100 T100"));
  Serial.println(F("#21 P2100 T100"));
  Serial.println(F("#20 P600 T100"));
  delay(350);
  //regresa posición
  Serial.println(F("#0 P1700 T100"));//a
  Serial.println(F("#1 P1650 T100"));//b
  Serial.println(F("#2 P1800 T100"));//c
  Serial.println(F("#8 P1700 T100"));//a
  Serial.println(F("#9 P1530 T100"));//b
  Serial.println(F("#10 P1100 T100"));//c
  Serial.println(F("#20 P1350 T100"));//a
  Serial.println(F("#21 P1350 T100"));//b
  Serial.println(F("#22 P1350 T100"));//c
  delay(350);
}

