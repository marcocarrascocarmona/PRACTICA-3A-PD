# Práctica 3: WiFi y Bluetooth (ESP32)

**Asignatura:** Microcontroladores y Microprocesadores  
**Alumno:** [Marco Carrasco Carmona]  
**Fecha:** Marzo 2026  
**Repositorio:** Práctica 3A - Servidor Web

## Práctica A - Generación de Página Web (Modo STA)

### Objetivo
Crear un servidor web accesible desde cualquier navegador utilizando la ESP32 en modo **Station (STA)** conectado a la red WiFi doméstica.

### Características implementadas
- Conexión WiFi en modo Station (`WiFi.h` + `WebServer.h`)
- Página web interactiva con **JavaScript** (botones para encender/apagar una bombilla virtual)
- Código optimizado para **PlatformIO** (con declaración adelantada)
- Fichero HTML externo (`index.html`) generado con Markdown (cumple punto 2 del enunciado)

### Tecnologías utilizadas
- ESP32 Dev Module
- WiFi (modo STA)
- HTML5 + CSS + JavaScript
- RawLiteral para embeber HTML

### Cómo probarlo
1. Clona el repositorio
2. Cambia en `src/main.cpp` tu SSID y contraseña
3. Sube el código a la ESP32
4. Abre en cualquier navegador: `http://IP_DEL_ESP32`

**Verás los botones funcionales y la bombilla cambiando en tiempo real.**

### Archivos importantes
- `src/main.cpp` → Código completo del servidor
- `index.html` → Fichero HTML adicional (solo la página, tal como pide el enunciado)
- Carpeta `capturas/` → Monitor serie + página web en navegador

### Enlace directo a la página (cuando la ESP32 esté encendida)
http://192.168.1.XXX  ← (sustituye por tu IP)

---

## Práctica B (próximamente)
Comunicación serie Bluetooth Classic con aplicación móvil.

---

**Hecho con ❤️ para la asignatura**  
📍 Código 100% funcional · Informe listo · Cumple todos los requisitos de la práctica

**¡Cualquier duda o mejora de nota (modo AP + BLE) aquí mismo!**
