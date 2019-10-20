### VS code 设置c环境
https://www.cnblogs.com/tsfh/p/8900700.html

### mingw 离线安装
https://blog.csdn.net/ZHAOJUNWEI08/article/details/86602120

### build settings
```json
// Configuring tasks.json for C/C++ debugging 
// author: huihut
// repo: https://gist.github.com/huihut/887d3c28db92617bd5148c20a5ff112a

// Available variables which can be used inside of strings.
// ${workspaceRoot}: the root folder of the team        
// ${file}: the current opened file                     
// ${fileBasename}: the current opened file's basename 
// ${fileDirname}: the current opened file's dirname    
// ${fileExtname}: the current opened file's extension  
// ${cwd}: the current working directory of the spawned process

{
    "version": "2.0.0",
    "tasks": [
        {
            "label": "build",
            "type": "shell",
            "group": {
                "kind": "build",
                "isDefault": true
            },
            "presentation": {
                "echo": true,
                "reveal": "always",
                "focus": false,
                "panel": "shared"
            },
            "windows": {
                "command": "g++",
                "args": [
                    "-ggdb",
                    "\"${file}\"",
                    "-o",
                    "\"${workspaceRoot}\\bin\\${fileBasenameNoExtension}.exe\""
                ]
            }
        }
    ]
}

```

### debug settings
```json
{
    "version": "0.2.0",
    "configurations": [
        {
            "name": "(gdb) Launch",
            "preLaunchTask": "build",
            "type": "cppdbg",
            "request": "launch",
            "program": "${workspaceRoot}/bin/${fileBasenameNoExtension}.exe",
            "args": [],
            "stopAtEntry": false,
            "cwd": "${workspaceFolder}",
            "environment": [],
            "externalConsole": true,
            "MIMode": "gdb",
            "miDebuggerPath": "gdb.exe",
            "setupCommands": [
                {
                    "description": "Enable pretty-printing for gdb",
                    "text": "-enable-pretty-printing",
                    "ignoreFailures": true
                }
            ]
        }]
}

```


