# About
Small example to run a STM32F303 under VSCode with CMake and Ninja. </br>
If you need a teplate with settings without STM32CUBE files go to:
[Template](https://github.com/FoxMD/VSCode-STM32-template)
### Used tools:
- arm-none-eabi-gcc
- STM32CubeProgrammer
- ST-Link_gdbserver[^1]
- CMake
- Ninja [Ninja build system](https://github.com/ninja-build/ninja/releases)

### Used VSCode plugins/tools:
- ms-vscode.cpptools: [Syntax highlighting and other core features for C/C++ development](https://github.com/microsoft/vscode-cpptools)
- ms-vscode.cmake-tools: [CMake core tools, build system generator tool](https://github.com/microsoft/vscode-cmake-tools)
- twxs.cmake: [CMake color highlighting](https://github.com/zyxar/Sublime-CMakeLists)
- marus25.cortex-debug: [Cortex-M debugging extension, mandatory for STM32 debug from VSCode ](https://github.com/Marus/cortex-debug)
- dan-c-underwood.arm: [ARM Assembly syntax highlighter ](https://github.com/dan-c-underwood/vscode-arm)
- zixuanwang.linkerscript: [GCC Linker script syntax highlighter ](https://github.com/TheNetAdmin/vscode-linkerscript)

For a good exaple with F7 and a walktrough visit: [Tilen Majerle](https://github.com/MaJerle/stm32-cube-cmake-vscode)

# Comparison to CubeIDE
### Size:
Generated .hex is bigger with VSCode even with the same settings
- CubeIDE: 18,9KB - RAM: 1587 B, FLASH: 6850 B
- VSCode: 50,8KB - RAM: 2064 B, FLASH: 18496 B 

### Performace:
For now it seems to be comparable, will see on DSP applications (updates will come)
### Debug:
Comparable, some options are better on VSC some on STMCubeIDE
### Easy to use:
For a beginner STMCubeIDE would be to recommend, but for advanced users VSCode is nice, it gives you one editor for more languages for testing scripts, GUI, frontend, etc...  

# ToDo:
- Include files path error highligting (c_cpp_properties.json needs to be adjusted)

# Known issues
[^1]: Some AV delete ST-Link_servergdb.exe and let the .bat file exist, while trying to debug your project, you get an error:
`Debugger error: Client: Error: read ECONNRESET` </br>
**Solution:** Just install it again and put a exception in your AV for the exe file before you run it again[^1].

