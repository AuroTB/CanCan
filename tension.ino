void tension( int tiempo){ 
  //LADO DER
  //PATA 3
  Serial.println(F("#0 P1550 T100"));//a
  Serial.println(F("#1 P1500 T100"));//b
  Serial.println(F("#2 P1800 T100"));//c

  //PATA 2
  Serial.println(F("#4 P1550 T100"));//a
  Serial.println(F("#5 P1850 T100"));//b
  Serial.println(F("#6 P1500 T100"));//c

  //PATA 1
  Serial.println(F("#8 P1550 T100"));//a
  Serial.println(F("#9 P1350 T100"));//b
  Serial.println(F("#10 P1100 T100"));//c


  //MITAD IZQ
  //PATA 6
  Serial.println(F("#16 P1450 T100"));//a
  Serial.println(F("#17 P1550 T100"));//b
  Serial.println(F("#18 P1900 T100"));//c

  //PATA 5
  Serial.println(F("#20 P1450 T100"));//a
  Serial.println(F("#21 P1550 T100"));//b
  Serial.println(F("#22 P1500 T100"));//c

  //PATA 4
  Serial.println(F("#24 P1450 T100"));//a
  Serial.println(F("#25 P1500 T100"));//b
  Serial.println(F("#26 P1200 T100"));//c


  delay(tiempo);
  preparar(tiempo);
}
