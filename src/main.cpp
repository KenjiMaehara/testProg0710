#include <Arduino.h>

void setup() {
    // シリアル通信を初期化し、ボーレートを115200に設定
    Serial.begin(115200);
    // Hello Worldメッセージをシリアルモニタに出力
    Serial.println("Hello, World!");
}

void loop() {
    // 毎秒メッセージを出力
    Serial.println("This is ESP32-S3!");
    // 1秒間待機
    delay(1000);
}
