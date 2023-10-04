# 專案架構 : 多個檔案合成一個執行檔案

```
Project1/
├── .vscode/
├── include/
|   ├── a.h
|   ── b.h
├── src/
|   ├── a.cpp
|   └── b.cpp
└── main.cpp
```

task.json 新增了編譯指令  
`-I` 為增加 include header 檔案的搜尋路徑  
再來將所有的 .cpp 連結成一個執行檔

變數介紹 :  
`${fileDirname}` : 檔案所在的檔案夾絕對路徑  
`${fileBasenameNoExtension}` : 當前的檔案名（不含副檔名）  
`${workspaceFolder}` : 打開在 VS code 的資料夾的絕對路徑