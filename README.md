# Practice 3: WiFi and Bluetooth (ESP32) 🚀

**Subject:** Microcontrollers and Microprocessors  
**Student:** Marco Carrasco Carmona  
**Date:** March 2026  

**A complete, interactive ESP32 project** that turns your development board into a **real web server** and a **Bluetooth Classic terminal** — all in one repository.

---

## ✨ Overview

This repository contains the full solution for **Practice 3**.  

In **Practice A** (this folder), the ESP32 connects to your home WiFi as a **Station (STA)** and instantly creates a professional web server.  
The page is **fully interactive**: two big buttons control a virtual light bulb using **pure JavaScript** running in your browser. Every click sends no extra requests — the magic happens client-side while the ESP32 simply serves the HTML.

All requirements from the assignment are fulfilled:
- Working web server in STA mode
- External `index.html` file (generated with Markdown)
- Clean, well-commented code optimized for **PlatformIO**
- Ready-to-use report material (screenshots, serial output, etc.)

---

## 🛠 How It Works (Technical Explanation)

1. **WiFi Connection (STA Mode)**  
   The ESP32 joins your home router using the `WiFi.h` library. Once connected, it obtains a local IP (e.g. 192.168.1.XXX) and prints it in the Serial Monitor.

2. **Web Server**  
   Using the `WebServer.h` library, the board listens on port 80. When any device on the same network opens `http://IP_OF_ESP32`, the server responds with a beautiful HTML page.

3. **Interactive JavaScript**  
   The page contains real client-side JavaScript that instantly changes the `src` attribute of an `<img>` element.  
   - “Turn on the light” → loads the “on” GIF  
   - “Turn off the light” → loads the “off” GIF  
   No server round-trips needed — 100% responsive and instant.

4. **External HTML File**  
   The complete page is also saved as a separate `index.html` file (exactly as requested in the assignment). You can open it locally or embed it using `R"rawliteral(...)` in the code.

5. **PlatformIO Ready**  
   Forward declaration of `handle_root()` + proper C++ structure so it compiles without errors.

---

## 🔥 Features

- Clean dark-themed responsive design
- Real-time JavaScript interaction (no page refresh)
- IP displayed automatically on the page
- External HTML file for easy editing
- Fully commented code
- Professional README + screenshot folder ready for your report

---

## 🧪 How to Test It (30 seconds)

1. Clone the repository
2. Open `src/main.cpp` and update your WiFi credentials:
   ```cpp
   const char* ssid = "YOUR_SSID";
   const char* password = "YOUR_PASSWORD";

Upload to your ESP32 (PlatformIO → Upload)
Open the Serial Monitor (115200 baud) and copy the IP shown
In any browser (phone or PC) go to: http://YOUR_ESP32_IP

→ Click the buttons and watch the light bulb turn on/off instantly!

📁 Important Files

File           Description
src/main.cpp  Complete ESP32 web server code
index.html    Standalone HTML file (assignment requirement)
platformio.ini Configuration for PlatformIO


Practice B (Bluetooth Classic) – Coming Soon
Serial bridge between ESP32 and mobile phone using the “Serial Bluetooth Terminal” app.
(Will be added in the same repository after finishing Part B)

🎯 Grade Improvement Exercises (Ready)

AP Mode instead of STA
Bluetooth Low Energy (BLE) implementation

Just let me know and I’ll add them!

👤 Author
Marco Carrasco Carmona
📧 marcocarrascocarmona@gmail.com
Made with ❤️ for the Microcontrollers and Microprocessors course.

Star the repo if it helped you!
Any questions or want the full report template? Just open an issue.
