### c++编译配置
```json
{
    "tasks": [
        {
            "type": "cppbuild",
            "label": "C/C++: clang++ 生成活动文件",
            "command": "/usr/bin/clang++",
            "args": [
                "-fcolor-diagnostics",
                "-fansi-escape-codes",
                "-g",
                "${file}",
                "-o",
                "${fileDirname}/${fileBasenameNoExtension}"
            ],
            "options": {
                "cwd": "${fileDirname}"
            },
            "problemMatcher": [
                "$gcc"
            ],
            "group": {
                "kind": "build",
                "isDefault": true
            },
            "detail": "调试器生成的任务。"
        }
    ],
    "version": "2.0.0"
}
```
需要保证编译器的路径


### vscode设置推荐
```json
{
  "workbench.colorTheme": "One Dark Pro Darker", // vscode主题，配合 One Dark Pro 使用
  "C_Cpp.default.compilerPath": "/usr/bin/clang++", // c cpp编译器路径
  "files.autoSave": "afterDelay", // 自动保存文件
  "workbench.list.smoothScrolling": true, // 控制列表和树平滑滚动
  "editor.cursorSmoothCaretAnimation": "on", // 平顺动画配置开启
  "editor.smoothScrolling": true, // 上下滚动平顺
  "editor.cursorBlinking": "smooth", // 光标闪烁平顺
  "editor.mouseWheelZoom": true, // ctrl + 鼠标滚轮调整字体大小
  "editor.formatOnPaste": true, // 格式化操作，配合格式化插件
  "editor.formatOnType": true, // 格式化操作，配合格式化插件
  "editor.formatOnSave": true, // 格式化操作，配合格式化插件
  "editor.wordWrap": "on", // 自动换行，但是不会增加行数
  "editor.guides.bracketPairs": true, // 括号对
  "editor.bracketPairColorization.enabled": true, // 括号不同颜色高亮显示(此设置vscode在较新版本已默认开启)
  "editor.suggest.snippetsPreventQuickSuggestions": false, // 使用代码片段时可以获得外部补全建议
  "editor.acceptSuggestionOnEnter": "smart", // 编码智能提示
  "editor.suggestSelection": "recentlyUsed", // 提示最近使用
  "window.dialogStyle": "custom", // 窗口风格统一化
  "files.autoGuessEncoding": true, // 自动判断文件编码类型
  "workbench.iconTheme": "material-icon-theme",  // 图标主题，配合 Material Icon Theme 使用

  // code runner 设置
  "code-runner.runInTerminal": true,
  "code-runner.saveAllFilesBeforeRun": true,
  "code-runner.saveFileBeforeRun": true,

  "terminal.integrated.scrollback": 1000000,
}
```

### vscode插件推荐
#### 功能类
1. c/c++
2. python 
3. Code Runner
4. ererro lens
5. Path Intellisense
6. Markdown All in One

#### 美化
1. One Dark Pro
2. Material Icon Theme
3. Prettier - Code formatter

