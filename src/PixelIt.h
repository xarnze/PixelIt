void SaveConfigCallback();

void SaveConfig();

void LoadConfig();

void SetConfig(JsonObject& json);

void WifiSetup();

void HandleGetMainPage();

void HandleGetDashPage();

void HandleGetTestAreaPage();

void HandleGetConfigPage();

void HandleScreen();

void HandleNotFound();

void Handle_wifisetup();

void HandleSetConfig();

void HandleGetConfig();

void HandleGetLuxSensor();

void HandleGetDHTSensor();

void HandleGetMatrixInfo();

void Handle_factoryreset();

void HandleOtaUpdate();

void webSocketEvent(uint8_t num, WStype_t type, uint8_t* payload, size_t length);

void callback(char* topic, byte* payload, unsigned int length);

void CreateFrames(JsonObject& json);

String GetConfig();

String GetLuxSensor();

String GetDHTSensor();

void DrawText(String text, bool bigFont, int colorRed, int colorGreen, int colorBlue, int posX, int posY);

String GetMatrixInfo();

void DrawTextScrolled(String text, bool bigFont, bool withBMP, bool fadeInRequired, uint16_t bmpArray[64], int colorRed, int colorGreen, int colorBlue);

void DrawTextCenter(String text, bool bigFont, bool withBMP, int colorRed, int colorGreen, int colorBlue);

void DrawAutoTextScrolled(String text, bool bigFont, bool withBMP, bool fadeInRequired, uint16_t bmpArray[64], int colorRed, int colorGreen, int colorBlue);

void DrawTextHelper(String text, bool bigFont, bool centerText, bool scrollText, bool autoScrollText, bool withBMP, bool fadeInRequired, uint16_t bmpArray[64], int colorRed, int colorGreen, int colorBlue, int posX, int posY);

void ScrollText(bool isFadeInRequired);

void AnimateBMP(bool isShowRequired);

void DrawClock(bool fromJSON);

void MqttReconnect();

void DrawWeekDay();

void FadeOut(int dealy, int minBrightness);

void ColoredBarWipe();

void FadeIn(int dealy, int minBrightness);

void ColorFlash(int red, int green, int blue);

uint ColorWheel(byte wheelPos, int pos);

void ShowBootAnimation();

ColorTemperature GetUserColorTemp();

LEDColorCorrection GetUserColorCorrection();

int* GetUserCutomCorrection();

void ClearTextArea();

void ClearBMPArea();

int DayOfWeekFirstMonday(int OrigDayofWeek);

void setup();

void SendMatrixInfo(bool force);

void loop();

void SendLDR(bool force);

void SendDHT(bool force);

void SendConfig();

time_t getNtpTime();

void sendNTPpacket(IPAddress& address);

void Log(String function, String message);