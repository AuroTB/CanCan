void xxx(){
  //1 a 4
  Serial.println(F("#16 P600 T100"));
  Serial.println(F("#17 P2100 T100"));
  Serial.println(F("#1 P900 T100"));
  Serial.println(F("#0 P2200 T100"));
  delay(250);

  Serial.println(F("#16 P1350 T100"));
  Serial.println(F("#17 P1350 T100"));
  Serial.println(F("#0 P1700 T100"));//a
  Serial.println(F("#1 P1650 T100"));//b
  delay(250);
    
  Serial.println(F("#4 P2000 T100"));
  Serial.println(F("#5 P600 T100"));
  Serial.println(F("#21 P2100 T100"));
  Serial.println(F("#20 P600 T100"));
  delay(250);
  
  Serial.println(F("#4 P1700 T100"));//a
  Serial.println(F("#5 P2000 T100"));//b
  Serial.println(F("#20 P1350 T100"));//a
  Serial.println(F("#21 P1350 T100"));//b
  delay(500);
  
  Serial.println(F("#24 P600 T100"));
  Serial.println(F("#25 P2100 T100"));
  Serial.println(F("#9 P800 T100"));
  Serial.println(F("#8 P2200 T100"));
  delay(250);
  
  Serial.println(F("#24 P1350 T100"));//a
  Serial.println(F("#25 P1350 T100"));//b
  Serial.println(F("#8 P1700 T100"));//a
  Serial.println(F("#9 P1530 T100"));//b
  delay(500);

  //Mover patas del medio para sostener pose
  //PATA 2
  Serial.println(F("#4 P2000 T300"));//a
  Serial.println(F("#5 P1500 T300"));//b
  Serial.println(F("#6 P2200 T300"));//c

  //PATA 5
  Serial.println(F("#20 P900 T300"));//a
  Serial.println(F("#21 P1850 T300"));//b
  Serial.println(F("#22 P800 T300"));//c
  delay(250);

  Serial.println(F("#4 P1700 T300"));//a
  Serial.println(F("#5 P2000 T300"));//b
  Serial.println(F("#20 P1300 T300"));//a
  Serial.println(F("#21 P1350 T300"));//b
  delay(500);

  //5 a 8
  
  //Patas de enfrente
  Serial.println(F("#16 P700 T100"));
  Serial.println(F("#17 P2200 T100"));
  Serial.println(F("#18 P1500 T100"));
  Serial.println(F("#10 P2100 T100"));
  Serial.println(F("#9 P800 T100"));
  Serial.println(F("#8 P2200 T100"));
  delay(250);
  
  Serial.println(F("#18 P600 T100"));
  Serial.println(F("#10 P1600 T100"));
  delay(300);
  
  Serial.println(F("#18 P1500 T100"));
  Serial.println(F("#10 P2100 T100"));
  delay(300); 
   
  Serial.println(F("#18 P600 T100"));
  Serial.println(F("#10 P1600 T100"));
  delay(300);

  //Regresan a su lugar
  Serial.println(F("#10 P1100 T300"));//c
  Serial.println(F("#18 P1900 T300"));//c
  delay(100);
   
  //PATA 1
  Serial.println(F("#8 P1700 T300"));//a
  Serial.println(F("#9 P1500 T300"));//b
  
  //PATA 6
  Serial.println(F("#16 P1300 T300"));//a
  Serial.println(F("#17 P1350 T300"));//b
  
  delay(500);

  //PATA 2
  Serial.println(F("#4 P1100 T300"));//a
  Serial.println(F("#5 P1500 T300"));//b
  Serial.println(F("#6 P1500 T300"));//c

  //PATA 5
  Serial.println(F("#20 P1900 T300"));//a
  Serial.println(F("#21 P1850 T300"));//b
  Serial.println(F("#22 P1500 T300"));//c
  delay(300);

  Serial.println(F("#4 P1700 T300"));//a
  Serial.println(F("#5 P2000 T300"));//b
  Serial.println(F("#20 P1300 T300"));//a
  Serial.println(F("#21 P1350 T300"));//b
  delay(500);
}






void yyy(){
  //1 a 4
  //Patas de en medio
  Serial.println(F("#6 P2200 T300"));//c
  Serial.println(F("#22 P800 T300"));//c
  Serial.println(F("#4 P2000 T100"));
  Serial.println(F("#5 P600 T100"));
  Serial.println(F("#21 P2100 T100"));
  Serial.println(F("#20 P600 T100"));
  delay(300);
  
  Serial.println(F("#4 P1700 T100"));//a
  Serial.println(F("#5 P2000 T100"));//b
  Serial.println(F("#20 P1350 T100"));//a
  Serial.println(F("#21 P1350 T100"));//b
  delay(300);

  //Patas de atrás y levantar patas de frente
  Serial.println(F("#16 P700 T100"));
  Serial.println(F("#17 P2200 T100"));
  Serial.println(F("#18 P1250 T100"));
  Serial.println(F("#1 P900 T100"));
  Serial.println(F("#0 P2200 T100"));
  delay(300);
  Serial.println(F("#0 P1700 T100"));//a
  Serial.println(F("#1 P1650 T100"));//b
  delay(300);

  Serial.println(F("#10 P1750 T100"));
  Serial.println(F("#9 P800 T100"));
  Serial.println(F("#8 P2200 T100"));
  Serial.println(F("#24 P600 T100"));
  Serial.println(F("#25 P2100 T100"));
  delay(300);
  Serial.println(F("#24 P1350 T100"));//a
  Serial.println(F("#25 P1350 T100"));//b
  delay(300);

  //5 a 8
  
  //Patas de enfrente
  Serial.println(F("#18 P600 T100"));
  Serial.println(F("#10 P1100 T100"));
  Serial.println(F("#8 P1500 T100"));
  Serial.println(F("#16 P1400 T100"));
  delay(300);

  Serial.println(F("#8 P2200 T100"));
  Serial.println(F("#16 P700 T100"));
  delay(300);

  Serial.println(F("#18 P1850 T100"));
  Serial.println(F("#10 P2250 T100"));
  Serial.println(F("#8 P1500 T100"));
  Serial.println(F("#16 P1400 T100"));
  delay(300);

  Serial.println(F("#8 P2200 T100"));
  Serial.println(F("#16 P700 T100"));
  delay(300);

  //POSEPOSE
  Serial.println(F("#16 P700 T100"));
  Serial.println(F("#17 P2200 T100"));
  Serial.println(F("#18 P1250 T100"));
  Serial.println(F("#8 P1700 T300"));//a
  Serial.println(F("#9 P1500 T300"));//b
  Serial.println(F("#10 P1750 T300"));//c
  delay(250);

  Serial.println(F("#10 P2000 T300"));//c
  Serial.println(F("#16 P1700 T100"));
  Serial.println(F("#18 P700 T100"));
  delay(350);
  
  Serial.println(F("#16 P700 T100"));
  delay(200);
  Serial.println(F("#9 P800 T100"));
  delay(100);

  //Segunda vez
  Serial.println(F("#16 P700 T100"));
  Serial.println(F("#17 P2200 T100"));
  Serial.println(F("#8 P1700 T300"));//a
  Serial.println(F("#9 P1500 T300"));//b
  delay(150);

  Serial.println(F("#10 P2000 T300"));//c
  Serial.println(F("#16 P1700 T100"));
  Serial.println(F("#18 P700 T100"));
  delay(350);
  
  Serial.println(F("#16 P700 T100"));
  delay(200);
  Serial.println(F("#9 P800 T100"));
  delay(100);
  //Acomodo
  Serial.println(F("#10 P1100 T300"));//c
  Serial.println(F("#18 P1900 T300"));//c
  delay(100);
   
  //PATA 1
  Serial.println(F("#8 P1700 T300"));//a
  Serial.println(F("#9 P1500 T300"));//b
  
  //PATA 6
  Serial.println(F("#16 P1300 T300"));//a
  Serial.println(F("#17 P1350 T300"));//b
  
  delay(200);

  //PATA 2
  Serial.println(F("#4 P2000 T300"));//a
  Serial.println(F("#5 P1500 T300"));//b
  Serial.println(F("#6 P1500 T300"));//c

  //PATA 5
  Serial.println(F("#20 P900 T300"));//a
  Serial.println(F("#21 P1850 T300"));//b
  Serial.println(F("#22 P1500 T300"));//c
  delay(200);

  Serial.println(F("#4 P1700 T300"));//a
  Serial.println(F("#5 P2000 T300"));//b
  Serial.println(F("#20 P1300 T300"));//a
  Serial.println(F("#21 P1350 T300"));//b
  delay(200);
}

