char t;
 
void setup() {
pinMode(13,OUTPUT);   //Motores esquerdos (para frente)
pinMode(12,OUTPUT);   //Motores esquerdos (para trás)
pinMode(11,OUTPUT);   //Motores direitos (para frente)
pinMode(10,OUTPUT);   //Motores esquerdos (para trás)
Serial.begin(9600);
}
 
void loop() {
if(Serial.available()){
  t = Serial.read();
  Serial.println(t);
}
 
if(t == 'F'){            //Para frente (todos os motores giram na direção para frente)
  digitalWrite(13,HIGH);
  digitalWrite(11,HIGH);
}
 
else if(t == 'B'){      //Para trás (todos os motores giram para trás)
  digitalWrite(12,HIGH);
  digitalWrite(10,HIGH);
}
 
else if(t == 'L'){      //Virar à direita (Motores esquerdos giram para frente, motores direitos não giram)
  digitalWrite(11,HIGH);
}
 
else if(t == 'R'){      //Virar à esquerda (Motores direitos giram para frente, motores direitos não giram)
  digitalWrite(13,HIGH);
}

else if(t == 'S'){      //Parar (Todos os motores param de girar)
  digitalWrite(13,LOW);
  digitalWrite(12,LOW);
  digitalWrite(11,LOW);
  digitalWrite(10,LOW); 
}
delay(100);
}
 
