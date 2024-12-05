專案名稱
BongoCat 功能強化應用 - 基於 C++ 與 Qt 的版本

專案背景與目的
BongoCat 是一款以互動性著稱的應用程式，具備輕鬆、有趣的用戶體驗。為進一步提升其功能性，本專案將基於 C++ 與 Qt 框架，加入實用的生活輔助功能，如時間、日期與天氣查詢功能，打造一個結合趣味與實用的應用程式。

專案目標
WASD 鍵盤動態顯示功能：保持原有 BongoCat 的互動特色。
時間、日期與天氣報告功能：
時間報告：顯示用戶所在地區的即時時間。
日期報告：提供當前日期。
天氣報告：用戶輸入地區後，查詢天氣數據，包括：
當前氣溫
降雨機率
PM2.5 指數
其他相關資訊（如濕度、風速）


開發架構與技術規劃
1. 使用技術
開發語言：C++。
框架：Qt 6。
外部依賴：
RESTful API：取得天氣數據（如 OpenWeatherMap）。
JSON 處理庫：使用 Qt 的內建 QJsonDocument 解析天氣 API 回應數據。
HTTP 客戶端：使用 Qt 的 QNetworkAccessManager 實現網路請求。

2. 模組設計
GUI 模組

動態按鍵顯示 (WASD)：
使用 Qt 的 Graphics View Framework 繪製動畫效果。
時間與日期顯示區：
使用 QLabel 動態更新時間與日期。
天氣查詢輸入與顯示區：
使用 QLineEdit 輸入地區，按下查詢按鈕後，顯示天氣數據。
功能模組

時間與日期功能：
使用 Qt 的 QDateTime 提供即時時間和日期。
天氣查詢功能：
使用 QNetworkAccessManager 發送 HTTP GET 請求。
使用 QJsonDocument 解析 JSON 格式的 API 回應。
事件處理：
動態監控鍵盤按下事件，更新按鍵顯示。

3. 程式架構
主程式 (MainWindow)：
包含 GUI 元件與功能按鈕。
核心模組 (CoreManager)：
負責與外部 API 通信，處理數據。
事件模組 (EventHandler)：
處理鍵盤事件和用戶輸入。
視圖模組 (ViewManager)：
負責更新顯示資料，如按鍵動畫、時間、日期與天氣資訊。

開發工具
Qt Creator：設計與開發 C++/Qt 專案。
API 測試工具：如 Postman，用於測試天氣查詢 API。
版本控制：Git/GitHub。

以上有參考
https://github.com/Externalizable/bongo.cat

https://github.com/MMmmmoko/Bongo-Cat-Mver
