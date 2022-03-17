# About
Small template to run a STM32F303 under VSCode with CMake and Ninja

# Known issues
[^1]: Some AV delete ST-Link_servergdb.exe and let the .bat file exist, while trying to debug your project, you get an error:
`Debugger error: Client: Error: read ECONNRESET` </br>
Just install it again and put a exception in your AV for the exe file before you run it again[^1].

# ToDo
- Include files path error highligting (c_cpp_properties.json needs to be adjusted)