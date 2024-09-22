本程式完全是原創作品，沒有修改自任何來源，也沒有剪貼自其他程式作品。

## 基本介紹

我根據上課內容，以 `putc` 為基礎，寫出一個類似 C 語言 `puts` 的函式庫。  
該函式庫會用 `putc` 來寫入 `stdout` 輸出流，以此將字符印到螢幕上。  
同時還搭配 `while` 迴圈，重複寫入直到出現空字元 (\0)。

## 使用方式

若要使要該函式庫，則要先載入標頭檔: `putsp.h`。  
該標頭檔已經預先載入最常用的 `stdio.h`，所以不需另外書寫。  
完整的範例程式碼可以參考 [main.c](https://github.com/LeeYi-user/sp111b/blob/main/midterm/02/main.c)。

## 授權聲明

[LICENSE](https://github.com/LeeYi-user/sp111b/blob/main/LICENSE)
