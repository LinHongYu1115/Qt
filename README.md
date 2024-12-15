BongoCat 功能強化應用 - 基於 C++ 與 Qt 的版本


第13組
成員:郭品佑 何睿軒 林泓宇


專案背景與目的
BongoCat 是一款以互動性著稱的應用程式，具備輕鬆、有趣的用戶體驗。為進一步提升其功能性，本專案將基於 C++ 與 Qt 框架，加入時間、日期等生活輔助功能，以及使用者輸入觸發的互動反應，讓應用程式更具實用性與趣味性。


專案目標
WASD 鍵盤動態顯示功能：
保持原有 BongoCat 的互動特色，根據用戶按鍵更新動態動畫。

時間與日期報告功能：
時間報告：顯示當前系統時間。
日期報告：顯示當前系統日期。



開發架構與技術規劃
1. 使用技術
開發語言：C++。
框架：Qt。
技術支援：
使用 Qt 的 GUI 框架設計直觀介面。
利用 Qt 的 QDateTime 進行時間和日期的動態更新。
使用事件處理（QKeyEvent 和 QLineEdit）捕捉用戶輸入和鍵盤事件。

2. 模組設計
GUI 模組

動態按鍵顯示 (WASD)：
使用 Qt 的 Graphics View Framework 繪製動畫效果。
時間與日期顯示區：
使用 QLabel 動態更新時間與日期。
使用者輸入與回應區：
使用 QLineEdit 接收用戶輸入，觸發回應訊息顯示。

功能模組

時間與日期功能：
使用 Qt 的 QDateTime 提供即時時間和日期。
事件處理功能：
監控鍵盤事件，更新動畫顯示或執行其他互動邏輯。

3. 程式架構
主程式 (MainWindow)：
包含主要的 GUI 元件與互動區域。
核心模組 (CoreManager)：
管理時間與日期的更新。
負責處理用戶輸入並觸發對應的回應。
事件模組 (EventHandler)：
處理鍵盤事件與輸入框的事件。
視圖模組 (ViewManager)：
更新動畫和顯示內容，例如按鍵動畫或回應訊息。

開發工具
Qt Creator：用於設計與開發 C++/Qt 專案。
版本控制：使用 Git/GitHub 進行版本管理。
版本控制：Git/GitHub。

以上有參考


參考
https://github.com/Externalizable/bongo.cat
跟
https://bongo.cat/

郭品佑就是菜拉

聚集功能描述：
聚集功能是為應用程式增添的一項創新互動特性，用於展示「按鍵組合」效果。用戶按下特定鍵組合（例如 Shift + W 或 Ctrl + A），BongoCat 將執行特殊動畫或音效反應，進一步提升趣味性與互動性。

聚集功能設計規劃：

按鍵組合的觸發邏輯：

輸入監測： 使用 QKeyEvent 處理多鍵組合輸入。
條件判斷： 利用鍵盤事件的修飾符 (Qt::ShiftModifier, Qt::ControlModifier) 與具體按鍵組合判斷是否觸發聚集效果。
組合動態： 當偵測到特定按鍵組合，觸發對應的動畫或音效。
動態效果：

特效設計： 為每組鍵盤組合設計獨特的動畫，例如閃爍的特效、快速敲擊動畫等。
音效整合： 加入對應按鍵組合的音效回饋（可選，音效文件存於本地資源目錄）。
UI 顯示提示：

在應用界面新增「鍵盤組合提示區」，顯示當前可觸發的聚集效果及其按鍵組合。
功能實現細節：

模組修改：

EventHandler 模組：
擴展事件處理功能，捕捉多鍵組合輸入。
使用 QKeyEvent::modifiers() 判斷按鍵修飾符。
ViewManager 模組：
新增聚集動畫效果。
更新特定鍵盤組合的動畫觸發邏輯。
新增資源：

動畫資源： 為特定聚集效果新增 GIF 或帧动画，放入 resources 資料夾。
音效資源： 添加鍵盤組合專屬音效，支持格式如 .wav 或 .mp3。
新增功能展示區：

在 MainWindow 新增 QLabel，顯示可用的聚集按鍵組合與效果描述。
