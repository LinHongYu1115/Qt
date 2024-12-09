企劃書：BongoCat 功能強化應用
BongoCat 功能強化應用 - 基於 C++ 與 Qt 的版本

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
https://github.com/Externalizable/bongo.cat
參考喵喵叫的部分
https://github.com/MMmmmoko/Bongo-Cat-Mver

