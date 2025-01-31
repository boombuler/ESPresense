/*
   * Binary array for the Web UI.
   * Gzip is used for smaller size and improved speeds.
   */

  // Autogenerated do not edit!!
  const uint16_t INDEX_HTML_L = 245;
  const uint8_t INDEX_HTML[] PROGMEM = {
    0x1f, 0x8b, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x0a, 0x55, 0x50, 0xb1, 0x52, 0xc3, 0x30,
  0x0c, 0xdd, 0x7b, 0xc7, 0x3f, 0x08, 0xcd, 0x24, 0x81, 0x8d, 0xc1, 0xce, 0x02, 0xed, 0x4a, 0xef,
  0x28, 0x03, 0xa3, 0x6b, 0x0b, 0x2c, 0xea, 0x38, 0x39, 0x5b, 0xa4, 0xcd, 0xdf, 0xe3, 0x24, 0xc0,
  0xc1, 0x24, 0xe9, 0xbd, 0x77, 0xef, 0x49, 0x52, 0xd7, 0x8f, 0x4f, 0x0f, 0x87, 0xd7, 0xfd, 0x16,
  0xbc, 0x74, 0xa1, 0xbd, 0xda, 0xa8, 0xb9, 0x42, 0x30, 0xf1, 0x5d, 0x23, 0x45, 0x2c, 0x08, 0x80,
  0xf2, 0x64, 0xdc, 0xd2, 0x95, 0xbe, 0x23, 0x31, 0x60, 0xbd, 0x49, 0x99, 0x44, 0xe3, 0xcb, 0x61,
  0x57, 0xdd, 0x23, 0x34, 0xff, 0xd8, 0x68, 0x3a, 0xd2, 0x38, 0x32, 0x9d, 0x87, 0x3e, 0x09, 0x82,
  0xed, 0xa3, 0x50, 0x2c, 0xea, 0x33, 0x3b, 0xf1, 0xda, 0xd1, 0xc8, 0x96, 0xaa, 0x65, 0xb8, 0x01,
  0x8e, 0x2c, 0x6c, 0x42, 0x95, 0xad, 0x09, 0xa4, 0xef, 0xea, 0xdb, 0x3f, 0x6e, 0xc2, 0x12, 0xa8,
  0xdd, 0x3e, 0xef, 0x13, 0x65, 0x8a, 0x99, 0x54, 0xb3, 0x22, 0xcb, 0x52, 0x81, 0xe3, 0x09, 0x12,
  0x05, 0x8d, 0x59, 0xa6, 0x40, 0xd9, 0x13, 0x95, 0x2c, 0x99, 0x86, 0x92, 0x2d, 0x74, 0x91, 0xc6,
  0xe6, 0x8c, 0xe0, 0x13, 0xbd, 0x69, 0x3c, 0x7e, 0x46, 0x17, 0xa8, 0x9e, 0x91, 0x76, 0xa3, 0x9a,
  0xdf, 0x7b, 0xd4, 0xb1, 0x77, 0xd3, 0x4f, 0x9a, 0xe3, 0x11, 0xd8, 0x69, 0x34, 0xc3, 0x80, 0xad,
  0x6a, 0xca, 0xb8, 0x6a, 0xb2, 0x4d, 0x3c, 0x08, 0x40, 0x4e, 0x56, 0x23, 0x47, 0x47, 0x97, 0xfa,
  0x23, 0xcf, 0x8a, 0x95, 0x98, 0x0d, 0xbf, 0x6d, 0x8a, 0xf3, 0xfa, 0xc5, 0x2f, 0xfe, 0xed, 0x50,
  0x73, 0x57, 0x01, 0x00, 0x00
  };

  void serveIndexHtml(AsyncWebServerRequest* request) {
    AsyncWebServerResponse *response = request->beginResponse_P(200, "text/html", INDEX_HTML, INDEX_HTML_L);
    response->addHeader(F("Content-Encoding"), "gzip");
    request->send(response);
  }
  