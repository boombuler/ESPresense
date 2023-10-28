#pragma once
#include <Arduino.h>

namespace Switch {
void Setup();
void ConnectToWifi();
void SerialReport();
void Loop();
bool SendDiscovery();
bool SendOnline();
bool Command(String& command, String& pay);
void SetupConfigSwitch();
}  // namespace Switch
