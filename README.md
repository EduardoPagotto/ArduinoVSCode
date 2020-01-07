# ArduinoVSCode
Implementacao de programa para arduino usando o vscode

## Instalação das extençoes do code:
```bash
code --install-extension ms-vscode.cpptools
code --install-extension vsciot-vscode.vscode-arduino
```

## Liberacao da porta /dev/ttyACM0 no ubuntu para not-root (usuario comum)
```bash
sudo usermod -a -G tty $USER
sudo usermod -a -G dialout $USER
```
*OBS: logout do usuario para atualizar as diretivas

## Para teste de serial
Configurar serial: /dev/ttyACM0 speed: 9600 baund parity:none bits:7
```
sudo apt install minicom
minicom -s
```

## Configuração (ou suar barra inferior)
inicializa:  F1 -> Arduino: Initialize
placa        F1 -> Arduino: Change Board type: UNO
serial porta F1 -> Arduino: Serial port
