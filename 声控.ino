#include <SoftwareSerial.h>

SoftwareSerial mySerial(2,3);
String receive_data;

void setup(){
  mySerial.begin(115200);
  Serial.begin(115200);
  receive_data = "";
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
}

void loop(){
  while (mySerial.available() > 0) {
    receive_data = String(receive_data) + String(char(mySerial.read()));
  }
  if (String(receive_data).indexOf(String("dakainuanqi")) != -1) {
    digitalWrite(4,HIGH);
    Serial.println("打开暖气");
    receive_data = "";

  } else if (String(receive_data).indexOf(String("guanbinuanq")) != -1) {
    digitalWrite(4,LOW);
    Serial.println("关闭暖气");
    receive_data = "";
  }
  if (String(receive_data).indexOf(String("dakaicfeng")) != -1) {
    digitalWrite(5,HIGH);
    Serial.println("打开吹风");
    receive_data = "";

  } else if (String(receive_data).indexOf(String("guanbicfeng")) != -1) {
    digitalWrite(5,LOW);
    Serial.println("关闭吹风");
    receive_data = "";
  }
  if (String(receive_data).indexOf(String("dakdianfangbao")) != -1) {
    digitalWrite(6,HIGH);
    Serial.println("打开电饭煲");
    receive_data = "";

  } else if (String(receive_data).indexOf(String("guabdianfangbao")) != -1) {
    digitalWrite(6,LOW);
    Serial.println("关闭电饭煲");
    receive_data = "";
  }
  if (String(receive_data).indexOf(String("turnon")) != -1) {
    digitalWrite(7,HIGH);
    Serial.println("打开台灯");
    receive_data = "";

  } else if (String(receive_data).indexOf(String("turnoff")) != -1) {
    digitalWrite(7,LOW);
    Serial.println("关闭台灯");
    receive_data = "";
  }
  if (String(receive_data).indexOf(String("openElectricfan")) != -1) {
    digitalWrite(8,HIGH);
    Serial.println("打开风扇");
    receive_data = "";

  } else if (String(receive_data).indexOf(String("closElectricfan")) != -1) {
    digitalWrite(8,LOW);
    Serial.println("关闭风扇");
    receive_data = "";
  }
  if (String(receive_data).indexOf(String("openled")) != -1) {
    digitalWrite(9,HIGH);
    Serial.println("开灯");
    receive_data = "";

  } else if (String(receive_data).indexOf(String("closeled")) != -1) {
    digitalWrite(9,LOW);
    Serial.println("关灯");
    receive_data = "";
  }
  if (String(receive_data).indexOf(String("dakaiyuba")) != -1) {
    digitalWrite(10,HIGH);
    Serial.println("打开浴霸");
    receive_data = "";

  } else if (String(receive_data).indexOf(String("guanbiyuba")) != -1) {
    digitalWrite(10,LOW);
    Serial.println("关闭浴霸");
    receive_data = "";
  }
  if (String(receive_data).indexOf(String("dakaizaoming")) != -1) {
    digitalWrite(11,HIGH);
    Serial.println("打开照明");
    receive_data = "";

  } else if (String(receive_data).indexOf(String("guanbizhaoming")) != -1) {
    digitalWrite(11,LOW);
    Serial.println("关闭照明");
    receive_data = "";
  }
  if (String(receive_data).indexOf(String("dakaiyingsji")) != -1) {
    digitalWrite(12,HIGH);
    Serial.println("打开饮水机");
    receive_data = "";

  } else if (String(receive_data).indexOf(String("guanbiyingsji")) != -1) {
    digitalWrite(12,LOW);
    Serial.println("关闭饮水机");
    receive_data = "";
  }
  if (String(receive_data).indexOf(String("kaishichus")) != -1) {
    digitalWrite(13,HIGH);
    Serial.println("开始出水");
    receive_data = "";

  } else if (String(receive_data).indexOf(String("tingzchus")) != -1) {
    digitalWrite(13,LOW);
    Serial.println("停止出水");
    receive_data = "";
  }
  if (String(receive_data).indexOf(String("zengjialiangdu")) != -1) {
    pinMode(A0, OUTPUT);
    digitalWrite(A0,HIGH);
    Serial.println("增加亮度");
    receive_data = "";

  } else if (String(receive_data).indexOf(String("jianxiaoliangdu")) != -1) {
    pinMode(A0, OUTPUT);
    digitalWrite(A0,LOW);
    Serial.println("减小亮度");
    receive_data = "";
  }
  if (String(receive_data).indexOf(String("settiConehonor")) != -1) {
    pinMode(A2, OUTPUT);
    digitalWrite(A2,HIGH);
    Serial.println("一小时后开机");
    receive_data = "";

  } else if (String(receive_data).indexOf(String("settiOonehonor")) != -1) {
    pinMode(A2, OUTPUT);
    digitalWrite(A2,LOW);
    Serial.println("一小时后关机");
    receive_data = "";
  }
  if (String(receive_data).indexOf(String("shenggaowendu")) != -1) {
    pinMode(A3, OUTPUT);
    digitalWrite(A3,HIGH);
    Serial.println("升高温度");
    receive_data = "";

  } else if (String(receive_data).indexOf(String("jiandiwendu")) != -1) {
    pinMode(A3, OUTPUT);
    digitalWrite(A3,LOW);
    Serial.println("降低温度");
    receive_data = "";
  }
  if (String(receive_data).indexOf(String("AdjustGearmax")) != -1) {
    pinMode(A4, OUTPUT);
    digitalWrite(A4,HIGH);
    Serial.println("风速调到最大");
    receive_data = "";

  } else if (String(receive_data).indexOf(String("AdjustGearmin")) != -1) {
    pinMode(A1, OUTPUT);
    digitalWrite(A1,LOW);
    Serial.println("风速调到最小");
    receive_data = "";
  }
  if (String(receive_data).indexOf(String("volumeUpUni")) != -1) {
    pinMode(A5, OUTPUT);
    digitalWrite(A5,HIGH);
    Serial.println("增大音量");
    receive_data = "";

  } else if (String(receive_data).indexOf(String("volumeDownUni")) != -1) {
    pinMode(A2, OUTPUT);
    digitalWrite(A2,LOW);
    Serial.println("减小音量");
    receive_data = "";
  }

}
