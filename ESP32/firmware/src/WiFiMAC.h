#include <esp_now.h>
#include <WiFi.h>

// MAC ADRESS
extern uint8_t broadcastAddress[] = {0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF};

// Informação de Pareamento
extern esp_now_peer_info_t peerInfo;

extern void OnDataSent();

// Estrutura da mensagem -> Deve ser igual a estrutura do recebimento da mensagem -> Envio de portas acionadas*
typedef struct struct_message {
  char a[32];
  int b;
  float c;
  bool d;
} struct_message;
// struct_message called myData
extern struct_message mensagem;

// callback when data is sent
void OnDataSent(const uint8_t *mac_addr, esp_now_send_status_t status) {
  Serial.print("\r\nLast Packet Send Status:\t");
  Serial.println(status == ESP_NOW_SEND_SUCCESS ? "Delivery Success" : "Delivery Fail");
}