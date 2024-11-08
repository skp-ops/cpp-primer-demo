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
  "workbench.iconTheme": "material-icon-theme", // 图标主题，配合 Material Icon Theme 使用

  // code runner 设置
  "code-runner.runInTerminal": true,
  "code-runner.saveAllFilesBeforeRun": true,
  "code-runner.saveFileBeforeRun": true,

  "terminal.integrated.scrollback": 1000000,
  "workbench.editor.enablePreview": false, // 防止打开未修改文件只有一个Tab
}
```
### code runner设置
```json

"code-runner.executorMap": {
        "javascript": "node",
        "java": "cd $dir && javac $fileName && java $fileNameWithoutExt",
        "c": "cd $dir && gcc $fileName -o $fileNameWithoutExt && $dir$fileNameWithoutExt",
        "zig": "zig run",
        # 删除编译文件后生成的可执行文件
        "cpp": "cd $dir && g++ $fileName -o $fileNameWithoutExt && $dir$fileNameWithoutExt && del $fileNameWithoutExt $fileNameWithoutExt.exe",
        "objective-c": "cd $dir && gcc -framework Cocoa $fileName -o $fileNameWithoutExt && $dir$fileNameWithoutExt",
        "php": "php",
        "python": "python -u",
        "perl": "perl",
        "perl6": "perl6",
        "ruby": "ruby",
        "go": "go run",
        "lua": "lua",
        "groovy": "groovy",
        "powershell": "powershell -ExecutionPolicy ByPass -File",
        "bat": "cmd /c",
        "shellscript": "bash",
        "fsharp": "fsi",
        "csharp": "scriptcs",
        "vbscript": "cscript //Nologo",
        "typescript": "ts-node",
        "coffeescript": "coffee",
        "scala": "scala",
        "swift": "swift",
        "julia": "julia",
        "crystal": "crystal",
        "ocaml": "ocaml",
        "r": "Rscript",
        "applescript": "osascript",
        "clojure": "lein exec",
        "haxe": "haxe --cwd $dirWithoutTrailingSlash --run $fileNameWithoutExt",
        "rust": "cd $dir && rustc $fileName && $dir$fileNameWithoutExt",
        "racket": "racket",
        "scheme": "csi -script",
        "ahk": "autohotkey",
        "autoit": "autoit3",
        "dart": "dart",
        "pascal": "cd $dir && fpc $fileName && $dir$fileNameWithoutExt",
        "d": "cd $dir && dmd $fileName && $dir$fileNameWithoutExt",
        "haskell": "runghc",
        "nim": "nim compile --verbosity:0 --hints:off --run",
        "lisp": "sbcl --script",
        "kit": "kitc --run",
        "v": "v run",
        "sass": "sass --style expanded",
        "scss": "scss --style expanded",
        "less": "cd $dir && lessc $fileName $fileNameWithoutExt.css",
        "FortranFreeForm": "cd $dir && gfortran $fileName -o $fileNameWithoutExt && $dir$fileNameWithoutExt",
        "fortran-modern": "cd $dir && gfortran $fileName -o $fileNameWithoutExt && $dir$fileNameWithoutExt",
        "fortran_fixed-form": "cd $dir && gfortran $fileName -o $fileNameWithoutExt && $dir$fileNameWithoutExt",
        "fortran": "cd $dir && gfortran $fileName -o $fileNameWithoutExt && $dir$fileNameWithoutExt",
        "sml": "cd $dir && sml $fileName",
        "mojo": "mojo run"
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
7. Markdown Preview Mermaid Support
8. CMake

#### 美化
1. One Dark Pro
2. Material Icon Theme
3. Prettier - Code formatter

