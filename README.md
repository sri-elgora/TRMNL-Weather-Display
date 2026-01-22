# TRMNL Weather Station

A beautiful weather display for the TRMNL OG e-paper device with ESP32-S3,  
inspired by [Dreadmond's TRMNL-Weather-Display](https://github.com/Dreadmond/TRMNL-Weather-Display),  
inspired by [lmarzen's esp32-weather-epd](https://github.com/lmarzen/esp32-weather-epd).  

## Hardware

- TRMNL OG (ESP32-S3 with 7.5" 800x480 e-paper display)

## Configuration

Example settings are in `include/secrets.example.h`  
Create new file `include/secrets.h`

## Build

Build with environment env:trmnl_og_esp32s3 for ESP32-S3 support  
Build with environment env:trmnl_og for ESP32-C3 support  

This project combines elements from:
- TRMNL firmware (MIT License)
- Dreadmond's TRMNL-Weather-Display
- LMARZEN's esp32-weather-epd (GPL-3.0)

Please respect the licenses of the original projects.

