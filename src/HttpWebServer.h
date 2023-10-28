#pragma once

#include <ESPAsyncWebServer.h>

namespace HttpWebServer
{

void Init(AsyncWebServer *server);
void Loop();
#ifdef OTA
void UpdateStart();
void UpdateEnd();
#endif
void SendState();

}  // namespace HttpServer
