# ArduinoVSCode
Ambiente de desenvolvimento arduino usando o vscode.

### Dependencias: 
```bash
# Extençoes uteis: 
# code --list-extensions | xargs -L 1 echo code --install-extension
code --install-extension aaron-bond.better-comments
code --install-extension AlexCoderCorp.comments
code --install-extension ms-vscode.cpptools
code --install-extension vsciot-vscode.vscode-arduino

# Criar diretorio de binarios.
mkdir -p ./bin

# Liberacao da porta /dev/ttyACM0 no ubuntu para usuario (logout necessario)
sudo usermod -a -G tty $USER
sudo usermod -a -G dialout $USER
```

### Opcionais:
```bash
# Simulador de Uno/pic
apt install simulide

# Acesso a serial
sudo apt install minicom

# Serial: /dev/ttyACM0 
# speed: 9600 baund 
# parity: none 
# bits: 7
minicom -s
```

### Configuração VSCode:
- inicializa:  F1 -> Arduino: Initialize
- define placa F1 -> Arduino: Change Board type: UNO
- serial porta F1 -> Arduino: Serial port

### Build:
- binarios gerados na pasta ./bin (.hex files)

### Debug:
incompleto verificar
refs:
- http://openocd.org/ 
- https://starter-kit.nettigo.eu/2015/debug-sketch-on-arduino-zero-pro-with-gdb-and-openocd/
