# 專案架構 : 多個檔案合成一個執行檔案

```
Project1/
├── .vscode/
├── main.cpp
├── a.h
├── a.cpp
├── b.h
└── b.cpp
```

相較於 Project1 修改了第 11 行的內容 (讓 gcc 一次編譯多個檔案)

變數介紹 :  
`${fileDirname}` : 檔案所在的檔案夾絕對路徑  
`${fileBasenameNoExtension}` : 當前的檔案名（不含副檔名）  
`${workspaceFolder}` : 打開在 VS code 的資料夾的絕對路徑