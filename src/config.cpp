/* Configuration values for TRMNL OG Weather Station
 * Based on esp32-weather-epd by Luke Marzen
 * Configured for TRMNL OG hardware
 *
 * IMPORTANT: Copy include/secrets.example.h to include/secrets.h
 *            and fill in your personal values before compiling!
 */

#include "config.h"
#include "secrets.h" // Contains all sensitive configuration

// =============================================================================
// TRMNL OG PIN DEFINITIONS (ESP32-C3)
// Based on TRMNL firmware pinout
// =============================================================================
const uint8_t PIN_BAT_ADC = 3;   // Battery ADC (GPIO3)
const uint8_t PIN_EPD_BUSY = 4;  // E-Paper BUSY
const uint8_t PIN_EPD_CS = 6;    // E-Paper CS (Chip Select)
const uint8_t PIN_EPD_RST = 10;  // E-Paper RST (Reset)
const uint8_t PIN_EPD_DC = 5;    // E-Paper DC (Data/Command)
const uint8_t PIN_EPD_SCK = 7;   // E-Paper SCK (SPI Clock)
const uint8_t PIN_EPD_MISO = -1; // Not used (display is write-only)
const uint8_t PIN_EPD_MOSI = 8;  // E-Paper MOSI (SPI Data)
const uint8_t PIN_EPD_PWR = -1;  // Not used on TRMNL OG (always powered)

// BME sensor pins - not used, we use Home Assistant
const uint8_t PIN_BME_SDA = -1;
const uint8_t PIN_BME_SCL = -1;
const uint8_t PIN_BME_PWR = -1;
const uint8_t BME_ADDRESS = 0x76;

// =============================================================================
// WIFI CONFIGURATION
// Using WiFiManager for captive portal setup - these are fallback/defaults
// =============================================================================
const char *WIFI_SSID = SECRET_WIFI_SSID;
const char *WIFI_PASSWORD = SECRET_WIFI_PASSWORD;
const unsigned long WIFI_TIMEOUT = 15000; // 15 seconds

// =============================================================================
// HTTP CLIENT
// =============================================================================
const unsigned HTTP_CLIENT_TCP_TIMEOUT = 15000; // 15 seconds

// =============================================================================
// OPENWEATHERMAP API
// =============================================================================
const String OWM_APIKEY = SECRET_OWM_APIKEY;
const String OWM_ENDPOINT = "api.openweathermap.org";
const String OWM_ONECALL_VERSION = "3.0";

// =============================================================================
// LOCATION
// =============================================================================
const String LAT = SECRET_LAT;
const String LON = SECRET_LON;
const String CITY_STRING = SECRET_CITY_STRING;

// =============================================================================
// TIMEZONE AND TIME FORMATS - UK (Europe/London)
// =============================================================================
const char *TIMEZONE = "GMT0BST,M3.5.0/1,M10.5.0";
const char *TIME_FORMAT = "%H:%M";               // 24-hour: 14:30
const char *HOUR_FORMAT = "%H";                  // 24-hour: 14
const char *DATE_FORMAT = "%a, %d %b";           // Sat, 28 Nov
const char *REFRESH_TIME_FORMAT = "%d/%m %H:%M"; // 28/11 14:30

// =============================================================================
// NTP SERVERS
// =============================================================================
const char *NTP_SERVER_1 = "pool.ntp.org";
const char *NTP_SERVER_2 = "time.nist.gov";
const unsigned long NTP_TIMEOUT = 20000; // 20 seconds

// =============================================================================
// SLEEP SETTINGS
// =============================================================================
const int SLEEP_DURATION = 30;   // Minutes between updates
const int BED_TIME = 23;         // Hour to start extended sleep (11 PM)
const int WAKE_TIME = 6;         // Hour to resume normal updates (6 AM)
const int HOURLY_GRAPH_MAX = 24; // Hours to show in outlook graph

// =============================================================================
// BATTERY THRESHOLDS (millivolts)
// Tuned for TRMNL OG's LiPo battery
// =============================================================================
const uint32_t MAX_BATTERY_VOLTAGE = 4200;           // 100%
const uint32_t MIN_BATTERY_VOLTAGE = 3000;           // 0%
const uint32_t WARN_BATTERY_VOLTAGE = 3500;          // ~20% - show warning
const uint32_t LOW_BATTERY_VOLTAGE = 3400;           // ~10% - extend sleep
const uint32_t VERY_LOW_BATTERY_VOLTAGE = 3350;      // ~5% - extend sleep more
const uint32_t CRIT_LOW_BATTERY_VOLTAGE = 3300;      // ~2% - hibernate
const unsigned long LOW_BATTERY_SLEEP_INTERVAL = 60; // minutes
const unsigned long VERY_LOW_BATTERY_SLEEP_INTERVAL = 180; // minutes

// =============================================================================
// HOME ASSISTANT CONFIGURATION
// =============================================================================
const char *HA_HOST = SECRET_HA_HOST;
const int HA_PORT = SECRET_HA_PORT;
const char *HA_TOKEN = SECRET_HA_TOKEN;
const char *HA_TEMP_ENTITY = SECRET_HA_TEMP_ENTITY;
const char *HA_HUMIDITY_ENTITY = SECRET_HA_HUMIDITY_ENTITY;

// =============================================================================
// MQTT CONFIGURATION (for Home Assistant telemetry)
// =============================================================================
const char *MQTT_BROKER = SECRET_MQTT_BROKER;
const int MQTT_PORT = SECRET_MQTT_PORT;
const char *MQTT_USERNAME = SECRET_MQTT_USERNAME;
const char *MQTT_PASSWORD = SECRET_MQTT_PASSWORD;
const char *MQTT_CLIENT_ID = SECRET_MQTT_CLIENT_ID;

// =============================================================================
// NEXTCLOUD WEBDAV (for photo/image display modes)
// =============================================================================
const char *NEXTCLOUD_URL = SECRET_NEXTCLOUD_URL;
const char *NEXTCLOUD_USER = SECRET_NEXTCLOUD_USER;
const char *NEXTCLOUD_PASS = SECRET_NEXTCLOUD_PASS;
const char *NEXTCLOUD_PHOTO = SECRET_NEXTCLOUD_PHOTO;
const char *NEXTCLOUD_CARTOON = SECRET_NEXTCLOUD_CARTOON;
const char *NEXTCLOUD_FIRMWARE_PATH = "/Shared/firmware/TRMNL/firmware.bin";
