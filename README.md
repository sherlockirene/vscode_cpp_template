#c++ simple template for vscode
only for mac

##Shutcuts config

```
[
    {
        "key": "shift+cmd+0",
        "command": "leetcode.testSolution"
    },
    {
        "key": "alt+r",
        "command": "workbench.action.debug.start",
        "when": "debuggersAvailable && debugState == 'inactive'"
    },
    {
        "key": "f5",
        "command": "-workbench.action.debug.start",
        "when": "debuggersAvailable && debugState == 'inactive'"
    },
    {
        "key": "alt+5",
        "command": "workbench.action.tasks.runTask",
        "args": "Run"   // 这里指定任务名称为 "run"
    }
]
```
Run without debug: `option` + `5`
Run with debug: `option` + `R`
