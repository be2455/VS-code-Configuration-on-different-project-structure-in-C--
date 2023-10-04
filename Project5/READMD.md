# 專案架構 : Project4 的延伸，加入 Eigen 測試

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

task.json 新增的編譯指令又跟 Project4 不一樣  
第一個 `-I` 為增加 include header 檔案的搜尋路徑  
第二個 `-I` 為增加 Eigen 檔案的搜尋路徑  
  
有幾個路徑搜尋就要用幾個 `-I`  

變數介紹 :  
`${fileDirname}` : 檔案所在的檔案夾絕對路徑  
`${fileBasenameNoExtension}` : 當前的檔案名（不含副檔名）  
`${workspaceFolder}` : 打開在 VS code 的資料夾的絕對路徑