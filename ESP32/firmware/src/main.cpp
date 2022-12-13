#include <esp_now.h>
#include <WiFi.h>
#include <WiFiMAC.h>

// MAC ADRESS
extern uint8_t broadcastAddress[] = {0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF};

// struct_message called myData
extern struct_message mensagem;

// Informação de Pareamento
esp_now_peer_info_t peerInfo;

// callback when data is sent
void OnDataSent();

void setup() {
  // Inicializa monitor serial
  Serial.begin(115200);
 
  // Aciona o dispositivo como uma estação Wi-Fi
  WiFi.mode(WIFI_STA);

  // Inicializa ESP-NOW
  if (esp_now_init() != ESP_OK) {
    Serial.println("Error initializing ESP-NOW");
    return;
  }

  // Once ESPNow is successfully Init, we will register for Send CB to
  // get the status of Trasnmitted packet
  esp_now_register_send_cb(OnDataSent);
  
  // Registro do pareamento
  memcpy(peerInfo.peer_addr, broadcastAddress, 6);
  peerInfo.channel = 0;  
  peerInfo.encrypt = false;
  
  // Adiciona o Pareamento        
  if (esp_now_add_peer(&peerInfo) != ESP_OK){
    Serial.println("Failed to add peer");
    return;
  }
}
 
void loop() {
  // Aciona o valores para envio
  strcpy(mensagem.a, "THIS IS A CHAR");
  mensagem.b = random(1,20);
  mensagem.c = 1.2;
  mensagem.d = false;
  
  // Envia a mensagem via ESP-NOW
  esp_err_t result = esp_now_send(broadcastAddress, (uint8_t *) &mensagem, sizeof(mensagem));
   
  if (result == ESP_OK) {
    Serial.println("Mensagem Enviada com sucesso!");
  }
  else {
    Serial.println("Erro ao enviar mensagem");
  }
  delay(2000);
}