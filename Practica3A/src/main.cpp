/* 
  ESP32 Web Server - STA Mode 
  Práctica 3A - WiFi (con página JavaScript interactiva)
*/

#include <WiFi.h>
#include <WebServer.h>

// ================== CONFIGURA TU RED AQUÍ ==================
const char* ssid = "POCO X7 Pro";           
const char* password = "Ian12345"; 
// ==========================================================

WebServer server(80);

// ================== DECLARACIÓN ADELANTADA ==================
void handle_root();     
// ==========================================================

void setup() {
  Serial.begin(115200);
  Serial.println("\n\n=== Iniciando servidor web ESP32 ===");
  Serial.print("Conectando a: ");
  Serial.println(ssid);

  WiFi.begin(ssid, password);

  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }

  Serial.println("\n¡WiFi conectado correctamente!");
  Serial.print("IP del ESP32: ");
  Serial.println(WiFi.localIP());

  server.on("/", handle_root);
  server.begin();
  Serial.println("Servidor HTTP iniciado en puerto 80");
}

void loop() {
  server.handleClient();
}

// ====================== NUEVA PÁGINA WEB CON JAVASCRIPT ======================
String HTML = R"rawliteral(
<!DOCTYPE html>
<html lang="es">
<head>
  <meta charset="UTF-8">
  <meta name="viewport" content="width=device-width, initial-scale=1.0">
  <title>Práctica 3A - ESP32 + JavaScript</title>
  <style>
    body { 
      font-family: Arial, sans-serif; 
      text-align: center; 
      background: #0f0f0f; 
      color: #00ff00; 
      padding: 40px; 
    }
    h1 { color: #00ff00; }
    h2 { color: #ffff00; }
    button { 
      padding: 15px 30px; 
      font-size: 18px; 
      margin: 10px; 
      cursor: pointer; 
    }
    button:on { background: #00ff00; }
  </style>
</head>
<body>
  <h1>🚀 Práctica 3A - ESP32 Web Server</h1>
  <h2>Control de luz con JavaScript</h2>
  <p>JavaScript puede cambiar atributos HTML en tiempo real.</p>
  
  <button onclick="document.getElementById('myImage').src='https://www.w3schools.com/js/pic_bulbon.gif'">
    Encender la luz
  </button>
  
  <img id="myImage" src="https://www.w3schools.com/js/pic_bulboff.gif" style="width:150px; margin:20px;">
  
  <button onclick="document.getElementById('myImage').src='https://www.w3schools.com/js/pic_bulboff.gif'">
    Apagar la luz
  </button>

  <p><strong>IP del servidor:</strong> <span id="ip"></span></p>
  <p>Práctica 3 - WiFi y Bluetooth • 2026</p>

  <script>
    // Muestra la IP del ESP32 (opcional pero útil)
    document.getElementById('ip').innerText = window.location.hostname;
  </script>
</body>
</html>
)rawliteral";
// =======================================================

void handle_root() {
  server.send(200, "text/html", HTML);
}